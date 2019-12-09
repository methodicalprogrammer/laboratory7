#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    for(i=0; i<20; i++){
        printf("%d ", rand()%1000);
    }
    return 0;
}