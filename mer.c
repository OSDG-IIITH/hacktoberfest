#include<stdio.h>
long long int a[10000001];
int X[10000001],Y[10000001];
void merge( int, int, int);
void mergeSort(int left, int right)
{
        if (left < right)
        {

                int mid;
                mid=(left+right)/2;
                mergeSort(left, mid);
                mergeSort(mid+1, right);

                merge(left, mid, right);

        }
        
}
int main()
{
        int n,i;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);

        mergeSort(0, n - 1);
        for(i=0;i<n;i++)
        printf("%lld ",a[i]);
        printf("\n");
        return 0;
}
void merge(int left, int mid, int right)
{
        int i, j, k;
        int x1 = mid - left + 1;
        int x2 = right - mid;


        for (i = 0; i < x1; i++)
                X[i] = a[left + i];
        for (j = 0; j < x2; j++)
                Y[j] = a[mid + 1+ j];

        i = 0; j = 0; k = left;
        while (i < x1 && j < x2)
        {
            if (X[i] < Y[j])
                { a[k] = X[i];
                        i=i+1;}
                else
                {
                        a[k] = Y[j];
                        j=j+1; }
                k=k+1;
        }

        while (i < x1)
        {
                a[k] = X[i];
                i=i+1;
                k=k+1;}
        while (j < x2)
        {
                a[k] = Y[j];
                j=j+1;
                k=k+1;}
}
