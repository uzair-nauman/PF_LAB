#include <stdio.h>
#include <string.h>

struct PatientInfo {
    char patientName[50];
    int age;
    char disease[50];
};

struct HospitalRecord {
    int recordID;
    struct PatientInfo patient; // Inner structure
};

int main() {
    struct HospitalRecord record;
    struct HospitalRecord *ptr = &record; // Structure pointer variable

    // Accessing and assigning members using arrow (->) and dot (.) operators
    ptr->recordID = 9021;
    strcpy(ptr->patient.patientName, "Sarah Connor");
    ptr->patient.age = 32;
    strcpy(ptr->patient.disease, "Acute Appendicitis");

    // Printing members using a combination of -> and . operators
    printf("--- Hospital Emergency Record ---\n");
    printf("Record ID: %d\n", ptr->recordID);
    printf("Patient Name: %s\n", ptr->patient.patientName);
    printf("Patient Age: %d\n", ptr->patient.age);
    printf("Disease/Condition: %s\n", ptr->patient.disease);

    return 0;
}
