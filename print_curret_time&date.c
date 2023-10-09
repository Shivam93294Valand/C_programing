#include <stdio.h>
#include <time.h>

int main()
{
    time_t currentTime;
    time(&currentTime);

    // Convert the current time to a string
    char* timeString = ctime(&currentTime);

    // Display the current date and time
    printf("Current Date & Time: %s", timeString);

    return 0;
}
