#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Print original numbers
    printf("\nOriginal numbers: num1 = %d, num2 = %d\n", num1, num2);
    
    // Call swap function to swap the numbers
    swap(&num1, &num2);
    
    // Print swapped numbers
    printf("Swapped numbers: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
