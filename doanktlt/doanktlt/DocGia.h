#pragma once

#ifndef _DocGia_
#define _DocGia_
#include "Hethongthuvien.h"
#include "Ngay.h"


class DocGia : public Hethongthuvien
{
private:
	string iddocgia;
	string hoten;
	string diachi;
	Ngay ngaysinh;
public:
	DocGia();
	~DocGia();

	string getID();
	string getHoTen();


	friend istream& operator>> (istream&, DocGia&);
	friend ostream& operator<< (ostream&, const DocGia&);

	void nhap();
	void xuat();
	void nhaptufile(ifstream&);
	void xuatsangfile(ofstream&);
};


#endif
