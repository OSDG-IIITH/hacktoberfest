#include<iostream.h>
using namespace std ;
class student
{
	private:
		
			char name[20],regno[10],branch[10];
			int semester;
	public:
			void inputdata();
			void displaydata();
			
		
};
void student::inputdata()
{
  cout<<"Enter your Name : ";
  cin>>name;
  cout<<"Enter your Registration no. : ";
  cin>>regno;
  cout<<"Enter your Branch : ";
  cin>>branch;
  cout<<"Enter your Semester : ";
  cin>>semester;
}
void student::displaydata()
{
  cout<<"\nName : "<<name;
  cout<<"\nRegistration no. : "<<regd;
  cout<<"\nBranch : "<<branch;
  cout<<"\nSemester : "<<sem;
}
int main()
{
  student stu ;
  stu.inputdata() ;

  stu.displaydata() ;
}
