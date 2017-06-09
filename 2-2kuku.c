#include <stdio.h>
int main(){
    int i = 1;
    printf("99の表\n");
    while(i<=9){
        for(int j = 1; j < 9; j++){
            printf("%d, ",i*j);
            if(i*j<10){
                printf(" ");
            }
        }
        printf("%d\n",i*9);
        i++;
    }
}
