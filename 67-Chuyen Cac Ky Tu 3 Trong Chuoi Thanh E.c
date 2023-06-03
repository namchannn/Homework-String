#include <stdio.h>
#include <string.h>
// int main() function
int main(){
	// Input
	char s[100];
	scanf("%s", s);
	// Process and Print Output
	int i;
	for(i = 0; i < strlen(s); i++){
		if(s[i] == '3'){
			s[i] = 'e';
		}
	}
	printf("%s", s);
	return 0;
}
