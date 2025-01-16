#include <stdio.h>

int main () {

    // All Odd Number Print
    for(int i = 5; i <= 50; i++){
        if(i % 2 != 0){ // Skip
            printf("%d\n",i);
        }
    }
    
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    
    // Print Factorial Number
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i ;
    }
    printf("%d\n", fact);
    
    // Print Reverse the Table
    for(int i = 10; i>=1; i--){
        printf("%d\n", n * i);
    }
    
    // Print Sum 5 to 50
    int sum = 0;
    for(int i = 5; i <= 50; i++){
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
