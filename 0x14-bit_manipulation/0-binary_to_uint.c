#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b) {
    if (b == NULL) {
        return 0;
    }

    unsigned int result = 0;
    int len = strlen(b);

    for (int i = 0; i < len; i++) {
        if (b[i] != '0' && b[i] != '1') {
            // If there is a character that is not '0' or '1', return 0.
            return 0;
        }

        // Convert the binary digit to an integer and add it to the result.
        result = (result << 1) + (b[i] - '0');
    }

    return result;
}

int main() {
    const char *binaryStr1 = "0001";
    const char *binaryStr2 = "0101";
    const char *binaryStr2 = "0000";
    const char *binaryStr2 = "01100010";
    const char *binaryStr2 = "110010010";

    printf("Result 1: %u\n", binary_to_uint(binaryStr1));
    printf("Result 2: %u\n", binary_to_uint(binaryStr2));

    return 0;
}

