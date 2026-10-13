#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    printf("Введите имя: ");
    scanf("%99s", name);

    int len = (int)strlen(name);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);

    int some = (int)strlen(name) + 5;
    printf("\"%*s%s%-*s\"\n", some, "", name, some, "");

    return 0;
}