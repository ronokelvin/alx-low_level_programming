#include "main.h"

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    unsigned int result = 0;
    int shift = 0;
    const char *current_char = b;

    // Find the end of the string
    while (*current_char != '\0')
        current_char++;

    // Move back to the last character
    current_char--;

    // Iterate through the string from the end to the beginning
    while (current_char >= b) {
        if (*current_char == '0' || *current_char == '1') {
            // If the character is '0' or '1', update the result accordingly
            result += (*current_char - '0') << shift;
            shift++;
        } else {
            // If the character is neither '0' nor '1', return 0 (invalid input)
            return 0;
        }
        current_char--;
    }

    return result;
}

