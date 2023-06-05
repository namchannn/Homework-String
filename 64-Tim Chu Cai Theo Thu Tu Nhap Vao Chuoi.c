#include <stdio.h>
// int main() function
int main(){
	// Input
	char s[100];
	int k;
	scanf("%s", s);
	fflush(stdin);
	scanf("%d", &k);
	// Process and Print Output
	printf("%c", s[k - 1]);
	return 0;
}
