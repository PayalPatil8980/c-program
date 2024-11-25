#include <stdio.h>

// Function to return the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base cases: fibonacci(0) = 0, fibonacci(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
    }
}

int main() {
    int n, i;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci Series up to %d terms: \n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));  // Print Fibonacci number for each index
    }
    
    return 0;
}
