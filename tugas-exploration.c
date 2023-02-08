#include <stdio.h>

int main(){
    int a,b;
    a = 4, b = 6; /* 4 = 00000100 dan 6 = 00000110 */
    printf("Hasil dari operator AND adalah %d\n", a&b);
    /*4 dengan bits 00000100*/
    printf("Hasil dari operator OR adalah %d\n", a|b);
    /*6 dengan bits 00000110*/
    printf("Hasil dari operator XOR adalah %d\n", a^b);
    /*2 dengan bits 00000010*/
    printf("Hasil dari operator left shift adalah %d\n", a<<1);
    /*8 dengan bits 00001000*/
    printf("Hasil dari operator right shift adalah %d\n", a>>1);
    /*2 dengan bits 00000010*/
    printf("Hasil dari operator NOT adalah %d\n", ~a);
    /*-5 dengan bits 11111011*/

    return 0;
}