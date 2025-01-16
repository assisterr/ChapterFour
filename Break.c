#include <stdio.h>

int main () {

    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);

    for(int i = 1; i <= number; i++) {
        if(i == 7){
            break;  
        }
        printf("%d\n", i);
    }
    printf("End \n");

    // Print the Table a Number
    for(int i = 1; i <= 10; i++) {
        if(i == 7){
            break;  
        }
        printf("%d\n", i);
    }
    printf("End");
    return 0;
}
