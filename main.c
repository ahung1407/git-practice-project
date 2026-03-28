#include <stdio.h>

int calculate_memory() {
    // A bug was introduced here!
    // This should not be a negative value.
    return -1;
}

int main() {
    printf("Welcome to the System Module!\n");
    int mem = calculate_memory();
    printf("Current memory available: %dKB\n", mem);
    return 0;
}
