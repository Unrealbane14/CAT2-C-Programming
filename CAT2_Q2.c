#include <stdio.h>

int main() {
	int i,j;
    
    int scores[2][2] = {{62,92},{35,70}};
        
    
    for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
        	printf("scores[%d][%d] = %d \n",i,j,scores[i][j]);
		}
		
	}
           

    return 0;
}