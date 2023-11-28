
#include "ATVM.h"

// Function to handle the ticket purchase process
void purchaseTicket() {
    int choice;
    float price = 0;

    displayDestinations();
    printf("Select your destination (1-5, 0 to exit): ");
    scanf("%d", &choice);

    if (choice == 0) {
        exit;
    }

    calculatePrice(choice, &price);

    if (price > 0) {
        printf("Ticket price: Rs.%.2f\n", price);

        // Function to Allow the user to pay the ticket price
        printf("Please pay the ticket price: Rs.");
        float payment;
        scanf("%f", &payment);
        if (payment == price)
        {
            printf("\nThank you, please wait...\n\n");
            sleep(2);
            FILE* ticketFile = fopen("ticket_history.txt", "a");
            if (ticketFile == NULL)
            {
                printf("Error opening file.\n");
                exit;
            }

            struct Ticket ticket;
            ticket.destination = choice;
            ticket.price = price;
            time(&ticket.timestamp); // Get the current timestamp

            fprintf(ticketFile, "%d %.2f %ld\n", ticket.destination, ticket.price, ticket.timestamp);
            fclose(ticketFile);

            printf("Ticket purchased and saved to history.\n\n");
            printTicket(ticket);
        } else
        {
            printf("Payment failed. Please try again.\n");
        }
    }
}
