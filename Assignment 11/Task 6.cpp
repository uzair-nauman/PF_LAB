#include <stdio.h>

#define TOLL_RATE 550 // Immutable toll rate in PKR

void processVehicle(const char vehicleType[], int displayReport) {
    static int totalVehicles = 0;
    static float totalRevenue = 0;

    if (!displayReport) {
        totalVehicles++;
        totalRevenue += TOLL_RATE;
        printf("Vehicle Processed: %s | Toll Fee Charged: %d PKR\n", vehicleType, TOLL_RATE);
    } else {
        printf("\n=== Toll Plaza Collection Report ===\n");
        printf("Total Vehicles Processed: %d\n", totalVehicles);
        printf("Total Revenue Collected: %.2f PKR\n", totalRevenue);
    }
}

int main() {
    // Simulating multiple vehicle processing events
    processVehicle("Car", 0);
    processVehicle("Truck", 0);
    processVehicle("Bus", 0);
    processVehicle("Car", 0);
    processVehicle("Motorcycle", 0);

    // Output final toll plaza collection report
    processVehicle("", 1);

    return 0;
}
