#include <stdio.h>

// This function calculates the available system memory.
int calculate_memory() {
    // A bug was introduced here!
    // This should not be a negative value.
    return -1;
}

int main() {
    printf("Welcome to the Enhanced System Module!\n"); // Important fix
    int mem = calculate_memory();
    printf("Current memory available: %dKB\n", mem);
    return 0;
}
# Ví dụ: // Starting work on Feature C
#include <stdio.h>

// This function calculates the available system memory.