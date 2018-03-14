#include <iostream>
#include "KompleksniBroj.h"
using namespace std;


int main() {
	KompleksniBroj k1(17, 2);
	KompleksniBroj k2;
	k2.set_realni(9);
	k2.set_imaginarni(-2);
	KompleksniBroj rez(k1, k2);
	cout << rez.get() << endl;
	return 0;
}