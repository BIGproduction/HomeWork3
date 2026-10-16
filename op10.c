#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t a[23];
    wchar_t b[23];
    wchar_t c[23];

    wscanf(L"%22ls %22ls %22ls", &a, &b, &c);

    wprintf(L"%-15ls|%20ls|%.5ls\n", a, b, c);

    return 0;
}