#include<stdio.h>
long long int min(long long int x,long long int y)
{ if(x<=y)
        return x;
	else
		return y;}
long long int cost(long long int i,long long int a[],long long int k,long long int m,long long int dp[])
 {  
	 if(i==0)
	  dp[0]=a[0]%m;
		
	 if(i<=k && i!=0)
	   dp[i]=((a[i]%m)*dp[0])%m;
	  
    if(dp[i]==0)
	     { dp[i]=cost(i-k,a,k,m,dp);
		     for(int j=i-k;j<i;j++)
     dp[i]=min(cost(j,a,k,m,dp),dp[i]);
	    dp[i]=(dp[i]*(a[i]%m))%m; }
	    
    return dp[i];  }
	
long long int a[100000],dp[100000];		
		int main()
	 { long long int n,i,k,m;
		 scanf("%lld%lld",&n,&k);
		 for(i=0;i<n;i++)
		 { scanf("%lld",&a[i]);
			 dp[i]=0; }
		 m=100000007;
                         printf("%lld",cost(n-1,a,k,m,dp));

                        return 0;  } 
