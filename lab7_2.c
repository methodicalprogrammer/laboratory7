#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned int numb, i;
    printf("Type a number between 0 and 100: ");
    scanf("%d ", &numb);
    do {
        printf("Wrong input. Try again: \n");
        scanf("%d", &numb);
    }while(numb<0 || numb>100);

    srand(numb);
    
    for(i=0; i< 10; i++){
        printf("%d ",rand()%100);
    }
    printf("\n");

    return 0;
}