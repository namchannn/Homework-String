#include <stdio.h>
#include <string.h>
// int main() function
int main(){
	// Input
	char c;
	char s[100];
	int i;
	scanf("%c", &c);
	scanf("%s", s);
	// Process and Print Output
	int count = 0;
	int len = strlen(s);
	for(i = 0; i < len; i++){
		if(s[i] == c){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
