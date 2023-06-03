#include <stdio.h>
// int main() function
int main(){
	// Input
	char name[100], address[100];
	scanf("%s %s", name, address);
	// Process and Print Output
	printf("Name: %s\nAddress: %s", name, address);
	return 0;
}
// OR use gets function to input space

/*
int main(){
	// Input
	char name[100], address[100];
	gets(name);
	gets(address);
	// Process and Print Output
	printf("Name: %s\nAddress: %s", name, address);
	return 0;
}
*/

