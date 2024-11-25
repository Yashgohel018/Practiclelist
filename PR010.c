//This program is prepared by 24CE035

#include<stdio.h>
#include<unistd.h> // For sleep function

int main() {
    int seconds;

    // Get the starting number of seconds from the user
    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &seconds);

    // Start the countdown
    while (seconds > 0) {
        printf("%d seconds\n", seconds);
        sleep(1);  // Wait for 1 second
        seconds--; // Decrement the timer by 1
    }

    // Display the completion message
    printf("Countdown completed!\n");
    printf("\n24CE035_Yash");


    return 0;
}

