#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));
    
    // Generate a random number between 0 and 999
    int n = rand() % 1000;
    printf("n = %d\n", n);
    
    // Get the last digit of n
    int last_digit = n % 10;
    printf("The last digit of n is %d\n", last_digit);
    
    return 0;
}

