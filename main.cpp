#include "mbed.h"

int main() {
    // Initialise int variables a, b, and c
    int a = 10;
    int b = 20;
    int c = 30;

    // Add values of a and b, store it in a new int variable d
    int d = a + b;

    // Print the value of variable d
    printf("d = %d\n", d);

    // Subtract variable c from d and store in new int variable e
    int e = d - c;

    // Print the value of variable e
    printf("e = %d\n", e);

    return 0;
}

// main() runs in its own thread in the OS
int main()
{
    while (true) {

    }
}

