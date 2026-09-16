#include <stdio.h>

int main(void) {
    printf("Hello, World I'm jason and I'm 25 years old!\n");
    printf("write your name:\n");
    char input[100];
    scanf("%s", input);
    printf("write your age:\n");
    int age;
    scanf("%d", &age);
    printf("You wrote: %s and you are %d years old.\n Nice to meet you!", input, age);
    return 0;
}
