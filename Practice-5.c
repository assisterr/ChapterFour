#include <stdio.h>

int main () {

    do {
        int n;
        printf("Please Enter a Number : ");
        scanf("%d", &n);

        printf("%d \n", n);

        if(n % 2 != 0) {
            break;
        }
    } while(1);
    printf("Thank you");
    return 0;
}
