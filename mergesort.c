#include<stdio.h>

int arr[1000001];

int tomerge(int [], int);
int merge(int, int, int [], int [], int []);

int main() {
	int N;
	scanf("%d", &N);

	int arr[N];
	int i;

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	tomerge(arr, N);

	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);

	return 0;
}
//arr[] -- output
//tomerge -- gives output for merging
//merge -- merges two sorted arrays
int tomerge(int arr[], int size) {

	if (size <= 1)
		return 0;
	int m, n;

	m = size/2;
	n = size - m;

	int arr1[m], arr2[n];
	
	int i;
	for (i = 0; i < m; i++)
		arr1[i] = arr[i];

	for (i = 0; i < n; i++)
		arr2[i] = arr[m+i];

	tomerge(arr1, m);

	tomerge(arr2, n);

	merge(m, n, arr1, arr2, arr);
}

/*
int merge(int , int, int [] , int []);
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int arr1[m], arr2[n];
	int i;
	for (i = 0; i < m; i++)
		scanf("%d", &arr1[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &arr2[i]);
	merge(m, n, arr1, arr2);
	for(i = 0; i < m+n; i++)
		printf("%d ", arr3[i]);
	return 0;
}*/
int merge(int m, int n, int arr1[m], int arr2[n], int arr[m+n]) {

	int i, j, k;

	for (i = 0, j = 0, k = 0; k < m+n; k++) {
		if (i != m) {
			if (j != n) {
				if (arr1[i] >= arr2[j]) {
					arr[k] = arr2[j];
					j++;
				}
				else {
					arr[k] = arr1[i];
					i++;
				}
			}
			else if (j = n) {
				arr[k] = arr1[i];
				i++;
			}
		}
		else if (i = m) {
			if (j <= n) {
				arr[k] = arr2[j];
				j++;
			}
		}
	}
	return 0;
}
