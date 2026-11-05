#include <stdio.h>
#include <ctype.h>

void printSensorData(void *reading, char kind) {
    if (kind == 'f') {
        printf("Temperature: %.1f Celsius\n", *(float *)reading);
    } else if (kind == 'i') {
        int motion = *(int *)reading;
        if (motion == 1) puts("Motion Detected");
        else if (motion == 0) puts("No Motion");
        else puts("Invalid motion status");
    } else if (kind == 'c') {
        char door = toupper((unsigned char)*(char *)reading);
        if (door == 'O') puts("Door Open");
        else if (door == 'C') puts("Door Closed");
        else puts("Invalid door status");
    }
}

int main(void) {
    float temperature;
    int motionStatus;
    char doorStatus;

    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &temperature) != 1) return 1;

    printf("Motion status (1 for detected, 0 for none): ");
    if (scanf("%d", &motionStatus) != 1) return 1;

    printf("Door status (O for open, C for closed): ");
    if (scanf(" %c", &doorStatus) != 1) return 1;

    puts("\nSmart Home Sensor Readings:");
    printSensorData(&temperature, 'f');
    printSensorData(&motionStatus, 'i');
    printSensorData(&doorStatus, 'c');

    return 0;
}
