#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to remove newline character from fgets()
void removeNewline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

// Function to convert a string to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Function to check if a string is a palindrome
int isPalindrome(char *str) {
    char temp[100]; 
    strcpy(temp, str);
    toLowerCase(temp); 

    // Reverse the string
    char rev[100];
    strcpy(rev, temp);
    strrev(rev);  // Reverse the string

    // Compare original and reversed strings
    return strcmp(temp, rev) == 0;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    removeNewline(str); 

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
