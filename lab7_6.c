#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int FindMax(int a[], int n){
    int i;
    int max = 0;
    for(i=0; i<n; i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    printf("\nThe maximum number is: %d", max);
}

int main(){
    int i, a[1000];
    srand(time(NULL));
    for(i=0; i<1000; i++){
        a[i] = rand();
        printf("%d\n", a[i]);
    }
    FindMax(a, 1000);

    return 0;
}