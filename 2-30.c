/*
	Isai Aleman Calderon
	Ernesto Alonso Vásquez Méndez
	Jorge Adrián borquez poqui
*/

int tadd_ok(int x, int y) {
    int sum = x + y;
	if ((x > 0 && y > 0 && x + y < 0) || (x < 0 && x < 0 && x + y > 0))
        return 0;
    return 1;
}