#pragma once
#include <string>
using namespace std;
class KompleksniBroj
{
public:
	KompleksniBroj(int realni, int imaginarni);
	KompleksniBroj();
	void set_realni(int realni);
	void set_imaginarni(int imaginarni);
	KompleksniBroj(KompleksniBroj k1, KompleksniBroj k2);
	string get();

private:
	int realni;
	int imaginarni;
};

