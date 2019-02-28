/*
    Isai Aleman Calderon
    Ernesto Alonso Vásquez Méndez
    Jorge Adrián borquez poqui
*/

long fun_c(unsigned long x) {
	long val = 0;
	int i;
	for (i = 0 ; i < 32; i++) {
		val = (val << 1) | (x & 0x1);
		x >>= 1;
	}

	return val;
}