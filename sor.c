#include <windows.h>
#include <stdio.h>

int main(void) {
    SetConsoleCP(1250), SetConsoleOutputCP(1250);

    char* soer[] = {
            "és nincs már egyetlen üveg sör sem a falon!",
            "és már csak %d üveg sör áll a falon!"
    };

    for (int i = 100; i > 0;printf("%d üveg sör áll a falon,\n%d üveg sör!\n", i, i),
                            printf("Leveszel egyet, körbeadod,\n"),
                            printf(*(soer + (i > 1)), i-1),
                            printf("\n\n"), i--);


    return 0;

}
