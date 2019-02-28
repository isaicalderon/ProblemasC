/*
	Isai Aleman Calderon
	Ernesto Alonso Vásquez Méndez
	Jorge Adrián borquez poqui
*/

#include <stdio.h>
#include <math.h>

int tadd_ok(int x, int y) {
    int sum = x + y;
	if ((x > 0 && y > 0 && x + y < 0) || (x < 0 && x < 0 && x + y > 0))
        return 0;
    return 1;
}

int tsub_ok(int x, int y) {
    return tadd_ok(x, -y);
}

int main(void) {
	int x, y, s;

	x = -pow(2, sizeof(int) * 8-1);
	y = -1;
    
    printf("y=%d, -y=%d\n", y, -y);
    s = x-y;
	printf("(%d)-(%d)=(%d), tsub_ok=%d\n", x, y, s, tsub_ok(x, y) );

	x = -pow(2, sizeof(int)*8-1);
	y = 1;
    s=x-y;
	printf("(%d)-(%d)=(%d), tsub_ok=%d\n", x, y, s, tsub_ok(x, y) );

	x = pow(2, sizeof(int)*8-1)-1;
	y = -1;
    s = x + y;
	printf("(%d)-(%d)=(%d), tsub_ok=%d\n", x, y, s, tsub_ok(x, y) );

	
	x = pow(2, sizeof(int)*8-1)-1; 
	y = 1;
    s = x + y;
	printf("(%d)-(%d)=(%d), tsub_ok=%d\n", x, y, s, tsub_ok(x, y) );

	x = pow(2, sizeof(int)*8-1)-1;
	y = -pow(2, sizeof(int)*8-1); 
    s = x + y;
	printf("(%d)-(%d)=(%d), tsub_ok=%d\n", x, y, s, tsub_ok(x, y) );
}