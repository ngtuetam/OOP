#pragma once
#ifndef _TheSach_
#define _TheSach_

#include "Hethongthuvien.h"
#include "Ngay.h"
#include "Sach.h"


class TheSach : public Hethongthuvien,Ngay
{
private:
	string idnguoimuon;
	string tennguoimuon;
	string idsachmuon;
	string tensachmuon;
	Ngay ngaymuon;
	Ngay ngaytra;
public:
	TheSach();
	~TheSach();

	Ngay getNgayMuon();
	Ngay getNgayTra();

	void nhap();
	void xuat();
	void nhaptufile(ifstream&);
	void xuatsangfile(ofstream&);
};

#endif