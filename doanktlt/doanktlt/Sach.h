#pragma once

#ifndef _Sach_
#define _Sach_

#include "Hethongthuvien.h"

class Sach : public Hethongthuvien
{
private:
	string idsach;
	string tensach;
	string tacgia;
	double giasach;
public:
	Sach();
	~Sach();

	string getIDSach();                                     //getter
	string getTenSach();

	friend istream& operator>> (istream&, Sach&);                // nhap
	friend ostream& operator<< (ostream&, const Sach&);         // xuat

	void nhap();
	void xuat();
	void nhaptufile(ifstream&);
	void xuatsangfile(ofstream&); 


};

#endif
