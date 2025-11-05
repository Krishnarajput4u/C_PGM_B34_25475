#include <stdio.h>
#include <string.h>

// Define a union with 6 string fields
union Address {
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    // Input and display each field one at a time
    printf("Enter your name: ");
    scanf(" %[^\n]", addr.name);
    printf("Stored Name: %s\n\n", addr.name);

    printf("Enter your home address: ");
    scanf(" %[^\n]", addr.home_address);
    printf("Stored Home Address: %s\n\n", addr.home_address);

    printf("Enter your hostel address: ");
    scanf(" %[^\n]", addr.hostel_address);
    printf("Stored Hostel Address: %s\n\n", addr.hostel_address);

    printf("Enter your city: ");
    scanf(" %[^\n]", addr.city);
    printf("Stored City: %s\n\n", addr.city);

    printf("Enter your state: ");
    scanf(" %[^\n]", addr.state);
    printf("Stored State: %s\n\n", addr.state);

    printf("Enter your ZIP code: ");
    scanf(" %[^\n]", addr.zip);
    printf("Stored ZIP Code: %s\n\n", addr.zip);

    printf("Currently stored value: %s\n", addr.zip);

    return 0;
}
