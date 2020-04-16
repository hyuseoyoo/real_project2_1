#include "sorting.h"

int sorted[10];
int num[10];

int main(){
    for(int i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }
    
    merge_sort(num, 0, 9);

    for(int i=0; i<10; i++)
       printf("%d ", sorted[i]);

    printf("\n");    

    return 0;
}