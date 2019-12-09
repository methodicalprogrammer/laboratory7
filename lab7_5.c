#include <stdio.h>
#include <stdlib.h>

int main(){
    long factorial[15];
    int i, j, u;
    u = 1;
    for(j=0; j<15; j++){
        for(i=0; i<j; i++){
            if(i==0){
                u = 1;
            }else {
                u = u*i;
            }
        }
        factorial[j] = u;
    }
    for(j=14; j>0; j--){
        printf("%ld \n", factorial[j]);
    }

    return 0;
}

