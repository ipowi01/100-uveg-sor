#include <windows.h>
#include <stdio.h>

int main(void) {
    SetConsoleCP(1250), SetConsoleOutputCP(1250);  // initialization chained meaningfully

    char* soer[] = {
            "�s nincs m�r egyetlen �veg s�r sem a falon!",
            "�s m�r csak %d �veg s�r �ll a falon!"
    };

    for (int i = 100; i > 0;printf("%d �veg s�r �ll a falon,\n%d �veg s�r!\n", i, i),
                            printf("Leveszel egyet, k�rbeadod,\n"),
                            printf(*(soer + (i > 1)), i-1),
                            printf("\n\n"), i--);


    return 0;
}