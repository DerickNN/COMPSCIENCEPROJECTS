// C ARRAYS = 3D
#include <stdio.h>

int main() {
    
    int i;
    int j;
    int k;
    int marks[2][2][3] = {{{1,2,7},{6,8,9}},{{1,2,7},{6,8,9}}};
    
    for(i=0; i<2;  i++){
        for(j=0; j<2; j++){
            for(k=0; k<3; k++){
                printf("marks[%d] [%d] [%d] = %d \n",i,j,k, marks[i][j][k]);
            }
        }
    }
    
    
    return 0;
}