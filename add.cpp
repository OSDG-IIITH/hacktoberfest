#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count2,i,k,t,a,b,j,t1,t2,arr[15];
	cin>>t;
	for(i=0;i<t;i++)
	{
		for(j=0;j<15;j++)
			arr[j]=-1;
		cin>>a>>b;
		if(a==0 && b==0)
			{
				cout<<0<<"\n";
				continue;
			}
		k=0;
		while(a>0 || b>0)
		{
			t1=a%10;
			t2=b%10;
			arr[14-k]=(t1+t2)%10;
			a/=10;
			b/=10;
			k++;
		}
		count2=0;
		for(j=0;j<15;j++)
		{
			if(arr[j]!=0 && arr[j]!=-1 )
				count2++;
		}
		j=0;
		while(arr[j]==0 || arr[j]==-1)
		{
			arr[j]=-1;
			j++;
		}
		if(count2==0)
			cout<<0;
		else
		{
			for(j=0;j<15;j++)
		{
			if(arr[j]!=-1)
				cout<<arr[j];
		}
		}
		cout<<"\n";
	}
	return 0;
}