
#include "ATVM.h"

// Function to display the ticket purchase history
void displayTicketHistory()
{
    FILE* ticketFile = fopen("ticket_history.txt", "r");
    if (ticketFile == NULL)
    {
        printf("No ticket history found.\n");
        exit;
    }

    printf("Ticket Purchase History:\n");

    struct Ticket ticket;
    while (fscanf(ticketFile, "%d %f %ld", &ticket.destination, &ticket.price, &ticket.timestamp) != EOF)
    {
        char timeStr[20];
        strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", localtime(&ticket.timestamp));
        printf("Destination: %d, Price: Rs%.2f, Purchase Time: %s\n", ticket.destination, ticket.price, timeStr);
    }

    fclose(ticketFile);
}
