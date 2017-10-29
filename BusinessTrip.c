#include<stdio.h>

int mergesort(int a[],int length);
int merge(int a[],int l[],int r[],int length);

int main(void){
	int k,i,a[15],count=0,sum=0;
	scanf(" %d",&k);
	for(i =0 ;i<12;i++){
		scanf(" %d",&a[i]);
		sum+=a[i];}
	if(sum<k){
		printf("-1\n");
		return 0;
	}
	if(k==0){
		printf("0\n");
		return 0;
	}

	sum=0;
	mergesort(a,12);
/*	for(i = 0;i<12;i++)
		printf("%d ",a[i]);
	printf("\n");*/
	for(i=11;i>=0;i--){
		sum+=a[i];
		count++;
		if(sum>=k){
			printf("%d\n",count);
			break;
		}
	}
}

int mergesort(int a[],int length){
	if(length < 2)
		return;
	else{
		int i;
		int mid=(length/2);
		int l[mid];
		int r[length-mid];

		for(i = 0;i<mid;i++)
			l[i] = a[i];
		for(i=mid;i<length;i++)
			r[i-mid] = a[i];

		mergesort(l,mid);
		mergesort(r,length-mid);
		merge(a,l,r,length);
	}
}

int merge(int a[],int l[],int r[], int length){
	int i = 0,j=0,k=0;
	int ml=length/2;
	int mr=length-ml;

	while(i<ml && j<mr){
		if(l[i] < r[j]){
			a[k] = l[i];
			i++;
		}
		else{
			a[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<ml){
		a[k]=l[i];
		i++;
		k++;
	}
	while(j<mr){
		a[k] = r[j];
		j++;
		k++;
	}
}
