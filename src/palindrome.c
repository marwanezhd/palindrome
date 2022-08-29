#include "../include/palindrome.h"

int palindrome(char const *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;

    while (str[i] != '\0') {
        if (str[i] == str[j] || str[i] == str[j] - 32 || str[i] == str[j] + 32) {
            i++;
            j--;
        }
        else {
            my_putstr("not a palindrome.\n");
            return (0);
        }
    }
    my_putstr("palindrome!\n");
    return (0);
}
