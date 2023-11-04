#include <stdio.h>

int largestNumber(int a[], int n);

int main(void){
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("The largest number is: %d", largestNumber(a, n));

    return 0;
}

int largestNumber(int a[], int n){
    int max = a[0];
    for (int i = 1; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }

    return max;
}
