#include<stdio.h>

int main() {
	int n;
	char enter;
	scanf ("%d\n", &n);

	char word[100][101];

	int i, j, k;
	for (i = 0; i < n; i++) {
		for (j = 0;; j++) {
			scanf ("%c", &word[i][j]);
			if (word[i][j] == '\n')
				break;
		}
		if (j < 11)
			for (k = 0; k < j; k++)
				printf("%c", word[i][k]);
		else
			printf("%c%d%c", word[i][0], (j-2), word[i][j-1]);
		printf("\n");
	}
	return 0;
}
