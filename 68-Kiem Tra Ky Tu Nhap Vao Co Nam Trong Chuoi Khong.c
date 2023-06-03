#include <stdio.h>
#include <string.h>
// int main() function
int main(){
	// Input
	char c;
	char s[100];
	scanf("%c", &c);
	scanf("%s", s);	
	int len = strlen(s);
	int index = -1;
	int i;
	// Process and Print Output
	for(i = 0; i < len; i++){
		if(s[i] == c){
			index = i;
			break;
		}
	}
	printf("%d", index);
	return 0;
}
