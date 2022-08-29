#include "../include/palindrome.h"

int main(int ac, char **av)
{
    if (ac != 2) {
        write(2, "Error: missing arguments.\n", 27);
        return (84);
    }
    palindrome(av[1]);
    return (0);
}
