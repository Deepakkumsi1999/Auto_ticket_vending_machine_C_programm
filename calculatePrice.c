//Auto Ticket Vending Machine (ATVM) application version 1.0.s
#include "ATVM.h"


// Function to take valid input(name) from user
int is_valid_name(const char *name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (!isalpha(name[i])) {
            return 0; // Not a valid name
        }
    }
    return 1; // Valid name
}
// Function to calculate the ticket price based on age and destination
void calculatePrice(int destination, float* price) {
    switch (destination) {
        case 1:
            printf("Enter your name: ");
            if (scanf("%10s", name) != 1) {
            printf("Invalid input for name. Exiting...\n");
            return;
            }

            if (!is_valid_name(name)) {
            printf("Invalid input for name. Please enter a name with only letters. Exiting...\n");
            return;
            }

            printf("Enter your age: ");
            if (scanf("%d", &age) != 1) {
            printf("Invalid input for age. Please enter a valid number. Exiting...\n");
            return ; // Return a non-zero value to indicate an error.
            }
            if (age < 1 || age > 120) {
            printf("Invalid input for age. Please enter a valid number. Exiting...\n");
            return; // Return a non-zero value to indicate an error.
            }
            if (age >= 15) *price = 150.0;
            else if (age < 15) *price = 75.0;
            else printf("Invalid input\n");
            break;


        case 2:
            printf("Enter your name: ");
            if (scanf("%10s", name) != 1) {
            printf("Invalid input for name. Exiting...\n");
            return;
            }

            if (!is_valid_name(name)) {
            printf("Invalid input for name. Please enter a name with only letters. Exiting...\n");
            return;
            }

            printf("Enter your age: ");
            if (scanf("%d", &age) != 1) {
            printf("Invalid input for age. Please enter a valid number. Exiting...\n");
            return; // Return a non-zero value to indicate an error.
            }
            if (age < 1 || age > 120) {
            printf("Invalid input for age. Please enter a valid number. Exiting...\n");
            return; // Return a non-zero value to indicate an error.
            }
            if (age >= 15) *price = 200.0;
            else if (age < 15) *price = 100.0;
            else printf("Invalid input\n");
            break;


        case 3:
            printf("Enter your name: ");
            if (scanf("%10s", name) != 1) {
            printf("Invalid input for name. Exiting...\n");
            return;
            }

            if (!is_valid_name(name)) {
            printf("Invalid input for name. Please enter a name with only letters. Exiting...\n");
            return;
            }

            printf("Enter your age: ");
            if (scanf("%d", &age) != 1) {
            printf("Invalid input for age. Please enter a valid number. Exiting...\n");
            return; // Return a non-zero value to indicate an error.
            }
            if (age < 1 || age > 120) {
            printf("Invalid input for age. Please enter a valid number. Exiting...\n");
            return; // Return a non-zero value to indicate an error.
            }
            if (age >= 15) *price = 300.0;
            else if (age < 15) *price = 150.0;
            else printf("Invalid input\n");
            break;


        case 4:
printf("Enter your name: ");
            if (scanf("%10s", name) != 1) {
            printf("Invalid input for name. Exiting...\n");
            return;
            }

            if (!is_valid_name(name)) {
            printf("Invalid input for name. Please enter a name with only letters. Exiting...\n");
            return;
            }

            printf("Enter your age: ");
            if (scanf("%d", &age) != 1) {
            printf("Invalid input for age. Please enter a valid number. Exiting...\n");
            return; // Return a non-zero value to indicate an error.
            }
            if (age < 1 || age > 120) {
            printf("Invalid input for age. Please enter a valid number. Exiting...\n");
            return; // Return a non-zero value to indicate an error.
            }
            if (age >= 15) *price = 400.0;
            else if (age < 15) *price = 200.0;
            else printf("Invalid input\n");
            break;

            break;

        case 5:
            printf("Enter your name: ");
            if (scanf("%10s", name) != 1) {
            printf("Invalid input for name. Exiting...\n");
            return;
            }

            if (!is_valid_name(name)) {
            printf("Invalid input for name. Please enter a name with only letters. Exiting...\n");
            return;
            }

            printf("Enter your age: ");
            if (scanf("%d", &age) != 1) {
            printf("Invalid input for age. Please enter a valid number. Exiting...\n");
            return; // Return a non-zero value to indicate an error.
            }
            if (age < 1 || age > 120) {
            printf("Invalid input for age. Please enter a valid number. Exiting...\n");
            return; // Return a non-zero value to indicate an error.
            }
            if (age >= 15) *price = 500.0;
            else if (age < 15) *price = 250.0;
            else printf("Invalid input\n");
            break;


        default:
            printf("Invalid choice.\n");
            *price = 0;
    }

}
