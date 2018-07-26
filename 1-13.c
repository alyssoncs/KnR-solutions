#include <stdio.h>

#define IN			0
#define OUT			1
#define MAX_LEN		25

int main(void) 
{
	int freq[MAX_LEN] = {0};
	int state = OUT;
	int count = 0;

	int c;
	while ((c = getchar()), c != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				if (count <= MAX_LEN)
					freq[count - 1]++;
				state = OUT;
				count = 0;
			}
		} else if (state == OUT) {
			state = IN;
		}

		if (state == IN)
			count++;
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
		printf("%2d   ", i+1);
	}
	printf("\n");


	return 0;
}
