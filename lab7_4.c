#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define heads 0
#define tails 1 

int coin_toss(){
    
    int x = rand()%2;
    return x;
}

int main(){
    srand(time(NULL));
    int numb, i;
    
    printf("Give number of times: \n");
    scanf("%d", &numb);
    do {
        printf("Wrong input. Try again: \n");
        scanf("%d", &numb);
    }while(numb<0 || numb>100);

    int NumbOfHeads = 0;
    int NumbOfTails = 0;
    
    for(i=0; i<numb; i++){
        if(coin_toss()==heads){
            NumbOfHeads = NumbOfHeads + 1;
        } else {
            NumbOfTails = NumbOfTails + 1;
        } 
    }
    printf("Heads: %d", NumbOfHeads);
    printf("Tails: %d", NumbOfTails);
    return 0;
}