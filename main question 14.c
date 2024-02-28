#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <ctype.h>
#include <string.h>


void trim(char *str) {

    while (*str == ' ') {
        str++;
    }


    char *end = str + strlen(str) - 1;
    while (end > str && *end == ' ') {
        *end-- = '\0';
    }
}


char* getLastName(const char *str) {
    const char *last_name = strrchr(str, ' ');
    if (last_name) {
        return last_name + 1;
    } else {
        return "";
    }
}


void toUpperCase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}


char* getFirstWord(char *str) {
    while (*str && *str != ' ') {
        str++;
    }
    if (*str == ' ') {
        *str = '\0';
        return str + 1;
    } else {
        return str;
    }
}

int main() {
    char name[100];
    printf("Enter your full name (first name followed by a space and then last name): ");
    fgets(name, sizeof(name), stdin);


    trim(name);
    printf("After trimming: %s\n", name);


    char *last_name = getLastName(name);
    printf("Last Name: %s\n", last_name);


    toUpperCase(name);
    printf("Uppercase: %s\n", name);


    strcpy(name, "Hello World");


    char *first_word = strtok(name, " ");
    printf("First Word: %s\n", first_word);
    char *remainder = strtok(NULL, "");
    printf("Remainder: %s\n", remainder);

    return 0;
}


