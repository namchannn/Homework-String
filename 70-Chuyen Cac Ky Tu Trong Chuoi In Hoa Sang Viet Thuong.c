#include <stdio.h>
#include <string.h>
// int main() function
int main(){
	// Input
	char s[100];
	scanf("%s", s);
	int i;
	// Process and Print Output
	for(i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	printf("%s", s);
	return 0;
}
