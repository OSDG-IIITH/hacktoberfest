#include <stdio.h>
int main()
{  long long int n,k,w,r,i,j,sum,res=0,q;
scanf("%lld %lld",&n,&k);
long long int len=1<<n;
long long int b[len],a[len];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<len;i++)
    {   sum=0,res=0,j=i,w=0,r=0;
         
        while(j>0)
        {  
            if(j&1)
          { b[w]=a[r];
             w++;
              
          }
             j=j/2;
             r++;
        }
       for(q=0;q<w;q++)
       sum+=b[q];
        
    
       if(sum==k)
       res=1;
          if(res==1)
          break;
    }
       if(res==1)
        printf("YES\n");
              else
       printf("NO\n");
  return 0;
}
