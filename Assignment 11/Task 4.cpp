#include <stdio.h>

struct Address {
    char city[50];
    int zipCode;
    char state[50];
};

struct Student {
    int rollNo;
    char name[50];
    float cgpa;
    struct Address studentAddress; // Embedded Address structure
};

int main() {
    // Initialize nested structure variable
    struct Student student1 = {
        101, 
        "John Doe", 
        3.78, 
        {"Chicago", 60601, "Illinois"}
    };

    // Display complete profile using the dot (.) operator
    printf("--- Student Profile ---\n");
    printf("Roll No: %d\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("CGPA: %.2f\n", student1.cgpa);
    printf("City: %s\n", student1.studentAddress.city);
    printf("Zip Code: %d\n", student1.studentAddress.zipCode);
    printf("State: %s\n", student1.studentAddress.state);

    return 0;
}
