#include "main.h"

int main() {
    char test1[] = "hello world";
    char test2[] = "  multiple spaces   and \t tabs";
    char test3[] = "camelCase snake_case";
    char test4[] = "  leading spaces should be preserved";
    char test5[] = "Punctuation, spaces, and CAPITALIZATION!";

    printf("Original: %s\n", test1);
    cap_string(test1);
    printf("Capitalized: %s\n\n", test1);

    printf("Original: %s\n", test2);
    cap_string(test2);
    printf("Capitalized: %s\n\n", test2);

    printf("Original: %s\n", test3);
    cap_string(test3);
    printf("Capitalized: %s\n\n", test3);

    printf("Original: %s\n", test4);
    cap_string(test4);
    printf("Capitalized: %s\n\n", test4);

    printf("Original: %s\n", test5);
    cap_string(test5);
    printf("Capitalized: %s\n", test5);

    return 0;
}

