#include <stdio.h>

int main () {

    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);

    // Print the Table a Number
    for(int i = 1; i <= 10; i++) {
        printf("%d\n", i * number);
    }
    
    return 0;
}
