#include <windows.h>
#include <stdio.h>

int main(void) {
    SetConsoleCP(1250), SetConsoleOutputCP(1250);

    char* soer[] = {
            "és nincs már egyetlen üveg sör sem a falon!",
            "és már csak %d üveg sör áll a falon!"
    };

    for (int i = 100; i > 0;printf("%d üveg sör áll a falon,\n%d üveg sör!\n"Leveszel egyet és körbeadod,\n", i, i),
                            printf(*(soer + (i > 1))"\n\n", i-1), i--);


    return 0;

}

