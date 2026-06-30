#include <stdio.h>

int main() {
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);

                if (seats <= 0) {
                    printf("Invalid number of seats!\n");
                }
                else if (bookedSeats + seats <= totalSeats) {
                    bookedSeats += seats;
                    printf("%d ticket(s) booked successfully!\n", seats);
                } else {
                    printf("Sorry! Only %d seat(s) available.\n", totalSeats - bookedSeats);
                }
                break;

            case 2:
                printf("Total Seats     : %d\n", totalSeats);
                printf("Booked Seats    : %d\n", bookedSeats);
                printf("Available Seats : %d\n", totalSeats - bookedSeats);
                break;

            case 3:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}