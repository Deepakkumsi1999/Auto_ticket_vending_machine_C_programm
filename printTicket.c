
#include "ATVM.h"

// Function to print the purchased ticket details
void printTicket(struct Ticket ticket) {
    printf("Purchased Ticket Details:\n");
    switch (ticket.destination) {
        case 1:
            printf("Destination: Chennai\n");
            break;
        case 2:
            printf("Destination: Chennai\n");
            break;
        case 3:
            printf("Destination: Thiruvananthapuram\n");
            break;
        case 4:
            printf("Destination: Mumbai\n");
            break;
        case 5:
            printf("Destination:New Dehli\n");
            break;

        default:
            printf("Invalid choice.\n");

    }
    printf("Passenger name: %s\n", name); // Use %s for strings
    printf("Passenger age: %d\n", age);   // Use %d for integers
    printf("Price: Rs.%.2f\n", ticket.price);
    printf("Purchase Time: %s", asctime(localtime(&ticket.timestamp))); // Display the purchase time
}
