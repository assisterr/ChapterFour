#include <stdio.h>

int main () {

    //while loop
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);
    int sum = 0;

    // Reverse with Sum
    for(int j=number; j>=1; j--) {
        printf("%d\n", j);
        sum = sum + j;

    }
    printf("%d\n", sum);

    // Reverse With Sum double variable 
    for(int i=1, j=number; i<=number && j>=1; i++,j--) {
        printf("%d\n", j);
        sum = sum + i;

    }
    printf("%d\n", sum);

    // Only Reverse
    for(int i=number; i>=1; i--) {
        printf("%d\n", i);
    }
    return 0;
}
