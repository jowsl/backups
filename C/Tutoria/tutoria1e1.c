#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Digite o valor dos 3 números: ");
        scanf("%d %d %d", &num1, &num2, &num3);
        if (num1<num2 && num1<num3)
        {
            if (num2<num3){
            printf("A ordem crescente é %d, %d, %d.\n", num1, num2, num3);
            } else {
            printf("A ordem crescente é %d, %d, %d.\n", num1, num3, num2);
            }
        } if (num2<num1 && num2<num3)
        {
            if(num1<num3){
            printf("A ordem crescente é %d, %d, %d.\n", num2, num1, num3);
            } else {
            printf("A ordem crescente é %d, %d, %d.\n", num2, num3, num1);
            }
        } if (num3<num1 && num3<num2)
        {
           if (num1<num2){
            printf("A ordem crescente é %d, %d, %d.\n", num3, num1, num2);
           } else {
            printf("A ordem crescente é %d, %d, %d.\n", num3, num2, num1);
           }
        }
    return 0;
}