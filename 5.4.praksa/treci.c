#include <stdio.h>

//treci zadatak

int main() {
int x, i;
i = 0;
    while (i<10) {
        printf ("unesi vrijednost x\n");
        scanf ("%d", &x);
        if (x<2) {
printf ("%d \n", x);
}
else if (x<3) {
printf ("2 \n");
}
else {
printf ("%d \n", x-1);
}
      i++;  
    }
    return 0;
}