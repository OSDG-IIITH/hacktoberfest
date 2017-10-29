#include<stdio.h>

int main(void){
int i,ans,sum=0,n,d,a[1000];
scanf(" %d %d",&n,&d);
for(i = 0;i<n;i++){
	scanf(" %d",&a[i]);
	sum+=a[i];

}
int b = sum + ((n-1)*10);
if(b > d){
printf("-1\n");
return 0;
}

ans=((d-b)/5) + ((n-1)*2);
printf("%d\n",ans);

}
