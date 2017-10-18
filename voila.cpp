#include"ques_1.h"
vector<string>split(const string& s)             
{
	vector<string> ret;
	string::size_type i = 0, j = 0;
	while (i != s.size())
	{
		while (i != s.size() && isspace(s[i]))
			i++;
		j = i;
		while (j != s.size() && !isspace(s[j]))
			j++;
		if (i != j)
		{
			ret.push_back(s.substr(i, j - i));
			i = j;
		}
	}

	return ret;
}


string rotate(vector<string>& v)   
{
	string str;
	for (vector<string>::size_type i = 0; i != v.size() - 1; i++)
	{
		vector<string>::size_type j = i + 1;
		{
			v[i] = v[i] + " " + v[j];
			v[j] = v[i].substr(0, v[i].find(" "));
			v[i] = v[i].erase(0, v[j].size() + 1);
		}
	}
	//for (vector<string>::const_iterator k = v.begin(); k != v.end(); k++)
		//cout << *k << " ";
	//cout << endl;
	for (vector<string>::const_iterator k = v.begin(); k != v.end(); k++)
	{
		str =str+" "+ *k;
	}
	return str;
}


bool compare(string& x, string& y)    
{
	return  (x < y);
}

vector<string>::size_type port(const vector<string>& ret,const vector<string>& v)         
{
	for (vector<string>::size_type i = 0; i != ret.size(); i++)
	{
			if (v[0] == ret[i])
			{
				return i;
			        break;
		    }  
			
		
	}
}
bool dare(vector<string>::size_type& x, vector<string>::size_type& y)       
{
	return x < y;
}

string paint1(vector<string>& v)           
{
	string str ;
	//for (vector<string>::const_iterator i = v.begin(); i != v.end(); i++)
		//cout << *i << " ";
	//cout << endl;
	for (vector<string>::const_iterator i = v.begin(); i != v.end(); i++)
		str += " "+*i;
	return str;
}

vector<string>::size_type cmp(vector<string>& v, vector<string>& v1)            
{
	for (vector<string>::size_type i = 0; i != v.size() - 1; i++)
	{
		auto c = v[i].compare(v1[0]);
		if (c == 0)
			return i;
		else continue;
	}
}


vector<string> unrotate1(vector<string>& s,vector<string>& v)            
{
	vector<string>  s1;
	string str2;
	vector<string>::size_type t = cmp(v, s);
	for (vector<string>::size_type i = 0; i != v.size(); i++)
	{
		if (i < t)
			str2 += " "+v[i];
	}
	
	s1.push_back(str2);
	return s1;
}

vector<string> unrotate2(vector<string>& s,vector<string>& v)   
{
	vector<string>  s2;
	string  str3;
	vector<string>::size_type t = cmp(v, s);
	for (vector<string>::size_type i = 0; i != v.size(); i++)
	{
		if (i >= t)
			str3 += " "+v[i] ;
	}
	
	s2.push_back(str3);
	return s2;
}

string nsplit(vector<string>& v)   
{
	string str ;
	for (vector<string>::const_iterator i = v.begin(); i != v.end(); i++)
		str += " "+*i;
	return str;
}






string::size_type long_str(vector<string>& v)           
{
	string::size_type str = 0;
	for (vector<string>::size_type i = 0; i != v.size(); i++)
	{
		str = max(str, v[i].size());
	}
	return str;
}

vector<string>v_cat(vector<string>& x, vector<string>& y)        
{
	vector<string> ret;
	ret = x;
	for (vector<string>::iterator i = y.begin(); i != y.end(); i++)
		ret.push_back(*i);
	return ret;
}

vector<string>h_cat(vector<string>& v1, vector<string>& v2)   
{
	vector<string> ret;
	string::size_type l_str = long_str(v2);
	string::size_type l_str1 = long_str(v1);
	vector<string>::size_type i = 0, j = 0;
	while (i != v1.size() || j != v2.size())
	{
		string s, s1;
		if (i != v1.size())
			s = v1[i++];
		vector<string>::size_type t = s.size();
		if (l_str1 != t)
		{
			s1 = string(l_str1 - t, ' ') + s;
		}
		else
			s1 = string(l_str1+5, ' ') + s;	
		s1 += string(5, ' ');

		if (j != v2.size())
			s1 += v2[j++];

		ret.push_back(s1);
	}
	return ret;
}
