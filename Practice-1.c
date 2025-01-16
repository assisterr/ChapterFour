#include <stdio.h>

int main () {

    //while loop
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);
    int i=1;
    while(i<=number) {
        printf("%d\n", i);
        i++;
    }

    //for loop
    for(int i=1; i<=number; i++) {
        printf("%d\n", i);
    }

    //do while loop
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    }
    while(i<=100);
    return 0;
}
