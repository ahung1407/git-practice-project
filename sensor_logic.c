#include <stdio.h>

#define LIGHT_THRESHOLD 400

int main() {
    int ldrValue = 500; // Giá trị cảm biến LDR
    int ledState = 1;   // Trạng thái LED
    
    if(ldrValue > LIGHT_THRESHOLD) {
        printf("Troi toi qua, bat den thoi!\n");
        ledState = 1;
    } else {
        printf("Troi sang roi, tat den!\n");
        ledState = 0;
    }
    return 0;
}