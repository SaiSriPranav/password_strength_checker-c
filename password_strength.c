#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int lower = 0, upper = 0, digit = 0, special = 0;
    int length_ok = 0, score = 0;

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; // Remove newline

    if (strlen(password) >= 8)
        length_ok = 1;

    for (int i = 0; i < strlen(password); i++) {
        if (islower(password[i]))
            lower = 1;
        else if (isupper(password[i]))
            upper = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else if (strchr("!@#$%^&*()", password[i]))
            special = 1;
    }

    score = lower + upper + digit + special + length_ok;
    int percent = (score * 100) / 5;

    printf("\nPassword Strength: %d%%\n", percent);

    if (percent == 100)
        printf("Strong Password\n");
    else if (percent >= 60)
        printf("Moderate Password\n");
    else
        printf("Weak Password\n");

    return 0;
}
