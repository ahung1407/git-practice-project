#include <stdio.h>

int calculate_memory() {
    // Returns memory in KB
    return 1024;
}

int main() {
    printf("Welcome to the System Module!\n");
    int mem = calculate_memory();
    printf("Current memory available: %dKB\n", mem);
    return 0;
}
