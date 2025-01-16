#include <stdio.h>

int main () {

    //while loop
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);
    int sum = 0;

    int i=1;
    while(i<=number) {
        sum = sum + i;
        i++;
    }
    printf("%d\n", sum);

    //for loop
    for(int i=1; i<=number; i++) {
        sum = sum + i;
    }
    printf("%d\n", sum);



    //do while loop
    i = 1;
    do {
        sum = sum + i;
        i++;
    }
    while(i<=number);
    printf("%d\n", sum);
    return 0;
}
