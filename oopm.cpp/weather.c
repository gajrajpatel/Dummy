#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char city[50];
    int temperature, humidity;
    char *conditions[] = {"Sunny", "Cloudy", "Rainy", "Stormy", "Snowy"};

    srand(time(0));  // random seed

    printf("Enter your city: ");
    scanf("%s", city);

    temperature = (rand() % 40) - 5;  // random temp between -5 and 35
    humidity = rand() % 101;         // random humidity 0-100

    printf("\n🌤 Weather Report for %s 🌤\n", city);
    printf("Temperature: %d°C\n", temperature);
    printf("Humidity: %d%%\n", humidity);
    printf("Condition: %s\n", conditions[rand() % 5]);

    return 0;
}