#include <stdio.h>

int main(void)
{
	int blk, tab, nl;
	blk = tab = nl = 0;
	
	int c; 
	while ((c = getchar()) != EOF) {
		switch(c) {
		case ' ':
			blk++;
			break;
		case '\t':
			tab++;
			break;
		case '\n':
			nl++;
		}
	}
				
	printf("\n\nblanks\t\t%d\n", blk);
	printf("tabs\t\t%d\n", tab);
	printf("new lines\t%d\n", nl);

	return 0;
}

