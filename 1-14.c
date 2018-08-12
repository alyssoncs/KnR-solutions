#include <stdio.h>

/* only small caps letters */
#define MAX_LEN		('z' - 'a' + 1) 

int main(void) 
{
	int freq[MAX_LEN] = {0};

	int c;
	while ((c = getchar()), c != EOF) {
		if (c >= 'a' && c <= 'z') {
			freq[c - 'a']++;
		}
	}


	int max = freq[0];
	for (int i = 1; i < MAX_LEN; i++)
		if (freq[i] > max)
			max = freq[i];

	for (int i = max; i > 0; i--) {
		printf("%4d | ", i);

		for (int j = 0; j < MAX_LEN; j++) {
			if (freq[j] == i) {
				freq[j]--;
				printf("--");
			} else {
				printf("  ");
			}

			printf("   ");
		}
		printf("\n");
	}

	printf("      ");
	for (int i = 0; i < MAX_LEN; i++) {
		printf("-----");
	}
	printf("\n");

	printf("       ");
	for (int i = 0; i < MAX_LEN; i++) {
		printf("%c    ", 'a' + i);
	}
	printf("\n");


	return 0;
}
