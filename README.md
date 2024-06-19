# STRING_IN_C
To create a simple C program that asks the user for their name and then displays it, you can use the `scanf` function to get the user's input and the `printf` function to display it. Here is a basic program that accomplishes this:

### C Program to Get and Display User Name

```c
#include <stdio.h>

int main() {
    char name[100];  // Declare a character array to store the user's name

    // Ask the user to enter their name
    printf("Enter your name: ");
    
    // Read the user's name
    // Use %s to read a string and use scanf with the %s format specifier
    scanf("%99s", name);  // Use %99s to prevent buffer overflow

    // Display the user's name
    printf("Hello, %s!\n", name);

    return 0;
}
```

### Explanation:

1. **Declaration of a Character Array:**
   - `char name[100];` declares a character array named `name` that can hold up to 99 characters plus the null terminator. This is where the user's name will be stored.

2. **Prompting the User:**
   - `printf("Enter your name: ");` prints a message asking the user to enter their name.

3. **Reading the User's Input:**
   - `scanf("%99s", name);` reads the user's input and stores it in the `name` array. The `%99s` format specifier ensures that up to 99 characters are read, preventing buffer overflow.

4. **Displaying the User's Name:**
   - `printf("Hello, %s!\n", name);` prints a greeting message that includes the user's name.

### Example Output:

```
Enter your name: Alice
Hello, Alice!
```

This basic program demonstrates how to get and display a user's name in C. If you need to handle names with spaces or have other specific requirements, you might need a slightly more advanced approach using functions like `fgets`. Here's an example that can handle spaces in the user's name:

### Advanced Example with `fgets`

```c
#include <stdio.h>

int main() {
    char name[100];  // Declare a character array to store the user's name

    // Ask the user to enter their name
    printf("Enter your name: ");
    
    // Read the user's name using fgets, which can handle spaces
    fgets(name, sizeof(name), stdin);

    // Remove the newline character if it is present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // Display the user's name
    printf("Hello, %s!\n", name);

    return 0;
}
```

### Explanation of the Advanced Example:

1. **Reading Input with `fgets`:**
   - `fgets(name, sizeof(name), stdin);` reads a line of text from the standard input, including spaces, and stores it in the `name` array.

2. **Removing the Newline Character:**
   - The code checks if the last character in the `name` array is a newline character (`\n`) and removes it by replacing it with a null terminator (`\0`).

This version of the program can handle names that include spaces, making it more versatile.
