#include <stdio.h>

int decimalToBinary(int n);

int main(void){
    int n;
    scanf("%d", &n);

    decimalToBinary(n);

    return 0;
}

int decimalToBinary(int n){
    if (n == 0){
        printf("0");
        return 0;
    }

    int binary[100];
    int i = 0;

    while(n > 0){
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--){
        printf("%d", binary[j]);
    }
}
