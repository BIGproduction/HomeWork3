#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t name[50];

    wscanf(L"%49ls", &name);
    wprintf(L"Агент {%ls} авторизован в системе\n", name);

    return 0;
}