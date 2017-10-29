#include<stdio.h>

int sortArray(int array[], int size);
int printArray(int array[], int size);

int main()
{
    int data[16]={54,21,11,9,-52,36,-9,13,42,0,12,-86,32,87,-64,54};

    printf("Data before sorting: \n");
    printArray(data, 16);

    sortArray(data, 16);

    printf("Data after sorting: \n");
    printArray(data, 16);

    return 0;
}

int printArray(int array[], int size)
{
    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}

int sortArray(int array[], int size)
{
    int temp;
    for(int i=0; i<size; i++)
    for(int j=1; j<size-i; j++)
    {
        if(array[j] < array[j-1])
	{
            temp = array[j];
	    array[j] =  array[j-1];
	    array[j-1] = temp;
	}
    }
    return 0;
}









