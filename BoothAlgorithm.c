#include <stdio.h>

int main(){
    /* multiplicand = BR;
       multiplier = QR;
       length of BR = i;
       initially AC = 0;
       Qn is last bit of QR;
    */

    int BR, QR, i, AC, Qn;

    scanf("%d %d", &BR, &QR);

    Qn = QR % 10;

    for (i = 0; BR > 0; i++) {
        BR = BR / 10;
    }
    
    

    return 0;
}