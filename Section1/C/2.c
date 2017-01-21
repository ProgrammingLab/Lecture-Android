#include <stdio.h>
#include <string.h>
int countP(char str[128]){
	int length = strlen(str); 
	int i,result = 0; 
	for( i = 0 ; i < length; i++){ 
		if(str[i] == 'P'){ 
			result++; 
		} 
	} 
	return result;
}
int main(void){ 
	char str[128]; 
	scanf("%s",str);
	printf("%d\n", countP(str)); 
	return 0;
}

