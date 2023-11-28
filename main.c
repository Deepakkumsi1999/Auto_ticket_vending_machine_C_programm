//Auto Ticket Vending Machine (ATVM) application version 1.0.


/* This C program is a basic implementation of a simple Auto Ticket Vending Machine (ATVM) application,
 version 1.0. It allows users to perform three main actions: purchasing a train ticket,
  displaying their ticket purchase history, and exiting the program.

The program begins with a welcome message, presenting the user with a menu of options.
The available choices are:

1.Purchase Ticket: This option allows the user to buy a train ticket.
2.Display Ticket History: Users can view their ticket purchase history.
3.Exit: This choice terminates the program.


The user is prompted to enter their choice, and based on their input,
the program executes the corresponding action using a switch statement.

If the user chooses option 1, the purchaseTicket() function is called:
here the function will Display the destination stations & it takes input from the user like
name,age according to the age the price will calculate and asks the user to pay the
purchased ticket amount.

If they select option 2, the displayTicketHistory() function is called:
in this function we can check the tickets purchased history like destination,price and date and time.
this function will gives details of how much tickets has been sold.

Option 3 allows the user to exit the program with a farewell message.
If the user inputs an invalid choice, the program prompts them to try again.

The program continues to display the menu and accept user input until the user decides to exit by choosing option 3.


*/

//Adding necessary library's
#include "ATVM.h"
#include "calculatePrice.c"
#include "destinations.c"
#include "printTicket.c"
#include "purchaseTicket.c"
#include "displayTicketHistory.c"



// Main function that serves as the user interface
int main() // Entry point of the program
 {
    int choice;

    printf("Welcome to the Train Ticket Vending Machine!\n");

    do {
        printf("\nMenu:\n");
        printf("1. Purchase Ticket\n");
        printf("2. Display Ticket History\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                purchaseTicket();
                break;
            case 2:
                displayTicketHistory();
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    exit;
}
