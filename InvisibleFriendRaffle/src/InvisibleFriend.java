package algorithm;

import java.io.FileReader;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.List;
import java.util.Properties;
import java.util.concurrent.ThreadLocalRandom;

import javax.mail.Message;
import javax.mail.MessagingException;
import javax.mail.Session;
import javax.mail.Transport;
import javax.mail.internet.InternetAddress;
import javax.mail.internet.MimeMessage;

import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;

public class InvisibleFriend {
	private static String messageBody;
	private static int found = 0;

	public static void main(String[] args) {	
        List<InvisibleFriend.Friend> friendsList = readFriendsFromJson("files/friends.json");
        while(found< friendsList.size()){
        	friendsList = cleanList(friendsList);
        	calculateInvisibleFriend(friendsList);
        }
        
        sendEmails(friendsList);
	}
	
	private static void calculateInvisibleFriend(List<Friend> friendsList) {
        int i=0;
        int match = 0;
		for(Friend friend : orderListByExcludes(friendsList)){
        	while(!friend.getSent() && i < friendsList.size()*3){
        		int randomNum = ThreadLocalRandom.current().nextInt(0, friendsList.size());
        		if(!friendsList.get(randomNum).getReceived()
        				&& !friendsList.get(randomNum).getId().equals(friend.getId())
        				&& !friend.getExcludes().contains(friendsList.get(randomNum).getId())){
        			friend.setSent(true);
        			friend.setTo(friendsList.get(randomNum).getId());
        			friendsList.get(randomNum).setReceived(true);
        			match++;
        		}

        		i++;
        	}
        }
		found = match;
	}

	private static List<Friend> orderListByExcludes(List<Friend> friendsList) {
	    Collections.sort(friendsList, new Comparator<Friend>() {

	        public int compare(Friend f1, Friend f2) {
	            return f2.getExcludes().size() - (f1.getExcludes().size());
	        }
	    });
		return friendsList;
	}

	private static List<Friend> readFriendsFromJson(String friendsFile) {
        JSONParser parser = new JSONParser();
		List<InvisibleFriend.Friend> friendsList = new LinkedList<InvisibleFriend.Friend>();
		JSONArray a;
		try {
			a = (JSONArray) parser.parse(new FileReader(friendsFile));
			for (Object o : a) {
				JSONObject person = (JSONObject) o;
				String name = (String) person.get("name");
				String email = (String) person.get("email");
				Long id = (Long) person.get("id");
				List<Long> excludes = (List<Long>) person.get("excludes");
				if(name != null){
					InvisibleFriend t = new InvisibleFriend();
					Friend friend = t.new Friend(name, email, id, excludes);
					friendsList.add(friend);
				}else{
					messageBody = (String) person.get("message");
				}
			}
		}catch(Exception e){
			System.out.println(e.toString());
		}		
		return friendsList;
	}

	public class Friend {
		private String name;
		private String email;
		private Long id;
		private Long to;
		private List<Long> excludes;
		private Boolean received = false;
		private Boolean sent = false;

		public Friend(String name, String email, Long id, List<Long> excludes) {
			this.setName(name);
			this.setEmail(email);
			this.setId(id);
			this.setExcludes(excludes);
		}
		public String getName() {
			return name;
		}

		public void setName(String name) {
			this.name = name;
		}

		public String getEmail() {
			return email;
		}

		public void setEmail(String email) {
			this.email = email;
		}

		public Long getId() {
			return id;
		}

		public void setId(Long id) {
			this.id = id;
		}

		public List<Long> getExcludes() {
			return excludes;
		}

		public void setExcludes(List<Long> excludes) {
			this.excludes = excludes;
		}

		public Boolean getReceived() {
			return received;
		}

		public void setReceived(Boolean received) {
			this.received = received;
		}

		public Boolean getSent() {
			return sent;
		}

		public void setSent(Boolean sent) {
			this.sent = sent;
		}
		public Long getTo() {
			return to;
		}
		public void setTo(Long to) {
			this.to = to;
		}

	}
	
	public static void sendEmails(List<Friend> friends) {
	      // Recipient's email ID needs to be mentioned.
	      for(Friend friend : friends){
			  String to = friend.getEmail();
	
		      // Sender's email ID needs to be mentioned
		      String from = "server@sendingmails.com";
	
		      // Assuming you are sending email from localhost
		      String host = "localhost";
	
		      // Get system properties
		      Properties properties = System.getProperties();
	
		      // Setup mail server
		      properties.setProperty("mail.smtp.host", host);
	
		      // Get the default Session object.
		      Session session = Session.getDefaultInstance(properties);
	
		      try {
		         // Create a default MimeMessage object.
		         MimeMessage message = new MimeMessage(session);
	
		         // Set From: header field of the header.
		         message.setFrom(new InternetAddress(from));
	
		         // Set To: header field of the header.
		         message.addRecipient(Message.RecipientType.TO, new InternetAddress(to));
	
		         // Set Subject: header field
		         message.setSubject("Raffle Invisible friend");
	
		         // Send the actual HTML message, as big as you like
		         message.setContent("Dear " + friend.getName() + "<br/><br/>" + messageBody + 
		        		 "<br/><br/>Your invisible friend is " + friends.get(friend.getTo().intValue()-1).getName(), "text/html");

		         // Send message
		         Transport.send(message);
		      }catch (MessagingException mex) {
		         mex.printStackTrace();
		      }
	      }
	   }
	
	private static List<Friend> cleanList(List<Friend> friendsList) {
		for(Friend f : friendsList){
			f.setReceived(false);
			f.setSent(false);
			f.setTo(null);
		}
		return friendsList;
		
	}
}
