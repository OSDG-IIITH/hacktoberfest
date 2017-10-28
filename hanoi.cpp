#include<bits/stdc++.h>
using namespace std;
int hanoi(int n, char source,char dest,char inter)
{
	if(n==1)
	{
		cout<<source<<" -> "<<dest<<"\n";
		return 0;
	}
	hanoi(n-1,source,inter,dest);
	cout<<source<<" -> "<<dest<<"\n";
	hanoi(n-1,inter,dest,source);
	return 0;
}
int main()
{
	int n;
	cin>>n;
	hanoi(n,'A','C','B');
	return 0;
}