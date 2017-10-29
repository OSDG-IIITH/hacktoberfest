#include<stdio.h>
void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(i=0;i<n1;i++) L[i]=arr[i+l];
    for(j=0;j<n2;j++) R[j]=arr[j+m+1];
    i=j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j]) arr[k]=L[i++];
        else arr[k]=R[j++];
        k++;
    }

    while(i<n1) arr[k++]=L[i++];
    while(j<n2) arr[k++]=R[j++];
}
void merge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m;
        m = l + (r-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int i,n,comp,temp;
    int a,b;
    int arr[1000000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    merge_sort(arr,0,n-1);
    comp=arr[1]-arr[0];
    a=arr[0];
    b=arr[1];
    for(i=2;i<n;i++)
    {
        temp=arr[i]-arr[i-1];
        if(temp<comp)
        {
            comp=temp;
            a=arr[i-1];
            b=arr[i];
        }
    }
    printf("%d %d\n",a,b);
    return 0;
}
