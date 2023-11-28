//Auto Ticket Vending Machine (ATVM) application version 1.0.

#ifndef ATVM_H_INCLUDED
#define ATVM_H_INCLUDED



#include <stdio.h>//This header file provides input and output functions, such as printf and scanf.
#include <stdlib.h>//This header file includes functions for memory allocation, conversion, and other general-purpose functions, such as malloc and free.
#include <time.h>
#include <ctype.h>
#include <unistd.h>

int age; //declaring passenger age
char name[10]; // declaring passenger Name

struct Ticket {
    int destination;
    float price;
    time_t timestamp; // to store the timestamp for each entry
};

void displayDestinations();// Function to display available train destinations
void calculatePrice(int destination, float* price);// Function to calculate the ticket price based on age and destination
void printTicket(struct Ticket ticket); // Function to print the purchased ticket details
void purchaseTicket();// Function to handle the ticket purchase process
void displayTicketHistory();// Function to display the ticket purchase history


#endif // ATVM_H_INCLUDED
