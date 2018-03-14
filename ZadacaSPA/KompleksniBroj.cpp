#include "KompleksniBroj.h"
#include <string>
#include <sstream>
using namespace std;



KompleksniBroj::KompleksniBroj(int realni, int imaginarni)
{
	this->realni = realni;
	this->imaginarni = imaginarni;
}

KompleksniBroj::KompleksniBroj()
{
	this->realni = 0;
	this->imaginarni = 0;
}

void KompleksniBroj::set_realni(int realni)
{
	this->realni = realni;
}

void KompleksniBroj::set_imaginarni(int imaginarni)
{
	this->imaginarni = imaginarni;
}

KompleksniBroj::KompleksniBroj(KompleksniBroj k1, KompleksniBroj k2)
{
	this->realni = k1.realni + k2.realni;
	this->imaginarni = k1.imaginarni + k2.imaginarni;
}

string KompleksniBroj::get()
{
	stringstream ss;
	ss << realni << " + " << imaginarni << "i";
	return ss.str();
}


