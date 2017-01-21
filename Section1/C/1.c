#include <stdio.h>
int main(void){ 
	int i,j;    
	int nmtr = 0; 
	int dmtr = 36; 
 	for( i = 1 ; i <= 6 ; i++ ){ 
		for( j = 1 ; j <= 6; j++ ){ 
 			if( i + j >= 10  ){ 
				nmtr++; 
 			} 
		} 
	} 
	double ans = (double)nmtr / (double)dmtr; 
	printf("answer = %f\n",ans); 
 	return 0;
}
