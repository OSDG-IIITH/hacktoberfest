#include<stdio.h>
long long int c[1000001];
int main()
{
         long long int n;
        scanf("%lld",&n);
         long long int a[n];
          long long int max,i,sumfreq,sum,median,mode;
          long long int  mean;
        
         scanf("%lld",&a[0]);
        max=c[a[0]];
        c[a[0]]++ ;
        sumfreq=0;
        sum=a[0];
        for(i=1;i<n; i++)
        {
                scanf("%lld",&a[i]);

                c[a[i]]++;

                sum = sum + a[i];
                  

            
                if(c[a[i]] > max)
                {
                        max=c[a[i]];
                        mode=a[i];
                }

         

        }
        

        for(i=0;i<=1000000;i++)
          {
            sumfreq=sumfreq+c[i];
            if(sumfreq>=(n+1)/2)
            {break;}
            
          }

          median=i;       

          mean=(sum/n);
            printf("%lld %lld %lld\n",mean,median,mode);
return 0 ;
}

