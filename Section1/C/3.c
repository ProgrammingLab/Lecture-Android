#include <stdio.h>
#include <string.h>
struct human{ 
	char name[64]; 
	int age; 
	double height;
}; 
int main(void){
	struct human ayb; 
	const char str[] = "ayabe";
	strcpy(ayb.name,str); 
	ayb.age = 114; 
	ayb.height = 514.1919; 
	printf("%s\n",ayb.name);
	printf("%d\n",ayb.age);
	printf("%f\n",ayb.height); 
	return 0;
}

