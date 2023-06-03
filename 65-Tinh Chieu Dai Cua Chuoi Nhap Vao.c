#include <stdio.h>
#include <string.h>
// int main() function
int main(){
	// Input
	char str[100];
	int len = 0;
	scanf("%s", str);
	// Process and Print Output
	while(str[len] != '\0'){
		len++;
	}
	printf("%d", len);
	return 0;
}
// OR use strlen function to print output

/*
// int main() function
int main(){
	char str[100];
	scanf("%s", str);
	printf("%d", strlen(str));
	return 0;
}
*/
