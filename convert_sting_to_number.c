#include <stdio.h>
#include <stdlib.h>
int main() {
    char input[100];
    int choice;
    int intNumber;
    float floatNumber;

    printf("Enter a number as a string: ");
    scanf("%s", input);

    printf("Choose conversion:\n");
    printf("1. String to Integer\n");
    printf("2. String to Float\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        {
            intNumber = atoi(input); // Convert string to integer
            printf("Integer value: %d\n", intNumber);
            break;
        }    
        case 2:
        {
            floatNumber = atof(input); // Convert string to float
            printf("Float value: %.2f\n", floatNumber);
            break;
        }    
        default:
        {
            printf("Invalid choice!\n");
            break;
        }    
    }

    return 0;
}
