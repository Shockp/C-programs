#include <stdio.h>

int isPrime(int num);

int main(void){
    int num;
    scanf("%d", &num);

    if(isPrime(num)){
        printf("%d is prime.", num);
    } else{
        printf("%d is not prime.", num);
    }

    return 0;
}

int isPrime(int num){
    if (num <= 1){
        return 0;
    }

    for(int i = 2; i * i <= num; i++){
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}
