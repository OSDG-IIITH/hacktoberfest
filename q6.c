#include<stdio.h>
int main()
	 {long long int n,a[500],k,i,j,temp;
              scanf("%lld%lld",&n,&k);
	      for(i=0;i<n;i++)
	         scanf("%lld",&a[i]);
		 for(i=0;i<n;i++)
			 for(j=i+1;j<n;j++)
                              if(a[i]>a[j])
			         {temp=a[i];
				    a[i]=a[j];
				    a[j]=temp; }
                  long long int s=0;
                for(i=0;i<n;i+=n/k)
		  s=s+(a[i+n/k-1]-a[i])*(a[i+n/k-1]-a[i]);
		printf("%lld",s);
	        	return 0;}
                     
                        
