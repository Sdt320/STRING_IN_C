#include <stdio.h>

int main() {
    char name[100];  // Declare a character array to store the user's name

    // Ask the user to enter their name
    printf("Enter your name: ");
    
    // Read the user's name using fgets, which can handle spaces
    fgets(name, sizeof(name), stdin);

    // Display the user's name
    printf("Hello, %s!\n", name);

    return 0;
}

