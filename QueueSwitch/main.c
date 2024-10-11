#include <stdio.h>
#include <stdlib.h>

#define MAX 50  // Define the maximum size of the queue

// Function declarations
void insert();
void delete();
void display();

// Global variables to manage the queue
int queue_array[MAX];
int rear = -1;  // Index for the rear of the queue
int front = -1; // Index for the front of the queue

int main() {
    int choice;

    // Infinite loop for the menu
    while (1) {
        // Display menu options
        printf("1. Insert elements to queue \n");
        printf("2. Delete element from queue \n");
        printf("3. Display all elements of queue \n");
        printf("4. Quit \n");
        printf("Enter your choice: ");
        
        // Get the user's choice
        scanf("%d", &choice);
        
        // Switch case to handle user choice
        switch (choice) {
            case 1:
                insert();  // Call insert function
                break;
            case 2:
                delete();  // Call delete function
                break;
            case 3:
                display(); // Call display function
                break;
            case 4:
                exit(1);   // Exit the program
            default:
                printf("Wrong choice \n");  // Invalid choice
        } /* End of switch */
    } /* End of while */
} /* End of main() */

// Function to insert elements into the queue
void insert() {
    int add_item;
    int noofeliments;
    int x;

    // Check if the queue is full
    if (rear == MAX - 1) {
        printf("Queue Overflow \n");
    } else {
        // If the queue is initially empty, set front to 0
        if (front == -1) {
            front = 0;
        }

        // Get the number of elements to be inserted
        printf("How many elements should be inserted in the queue: ");
        scanf("%d", &noofeliments);

        // Loop through and insert each element
        for (x = 0; x < noofeliments; x++) {
            printf("Enter number %d: ", x + 1);
            scanf("%d", &add_item);
            queue_array[x] = add_item;  // Add element to queue
            rear = rear + 1;  // Update rear index
        }
    }
} /* End of insert() */

// Function to delete elements from the queue
void delete() {
    // Check if the queue is empty
    if (front == -1 || front > rear) {
        printf("Queue Underflow \n");
        return;
    } else {
        // Remove element from the front of the queue
        printf("Element deleted from queue is: %d\n", queue_array[front]);
        front = front + 1;  // Update front index
    }
} /* End of delete() */

// Function to display the queue
void display() {
    int i;

    // Check if the queue is empty
    if (front == -1) {
        printf("Queue is empty \n");
    } else {
        printf("Queue is: \n");
        // Loop through and display the queue elements
        for (i = front; i <= rear; i++) {
            printf("%d ", queue_array[i]);
        }
        printf("\n");
    }
} 

/* End of display() */
