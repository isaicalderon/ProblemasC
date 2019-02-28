/*
    Isai Aleman Calderon
    Ernesto Alonso Vásquez Méndez
    Jorge Adrián borquez poqui
*/

#include <stdio.h>

int even_one(unsigned x) {
    return !!(x & 0x55555555);
}

int odd_one(unsigned x) {
    return !!(x & 0xAAAAAAAA);
}

int main(void) {
    int test_hex_0 = 0x2; /* Or 0x1 */
    printf("the even position of the bit patterns of x ");
    (even_one(test_hex_0)) &&
    (printf("have include one."));
    (odd_one(test_hex_0)) &&
    (printf("haven't include one."));

    getchar();
    return 0;
}