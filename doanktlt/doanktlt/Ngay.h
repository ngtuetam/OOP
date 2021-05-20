#pragma once
#ifndef _Ngay_
#define _Ngay_
#include<iostream>
using namespace std;
class Ngay
{
private:
	int ngay;
	int thang;
	int nam;
public:
	Ngay();
	~Ngay();

	int getNgay();                        //getter
	int getThang();
	int getNam();

	void setNgay(int);                    //setter
	void setThang(int);                   
	void setNam(int);

	friend istream& operator >> (istream& is, Ngay&);   // nap chong toan tu hai ngoi nhap
	friend ostream& operator<< (ostream&, const Ngay&);    // nap chong toan tu hai ngoi xuat
	friend istream& nhapngaytufile(istream&, Ngay&);       // nhap vao ngay tu file

	bool namnhuan(int);                                 // kiem tra nam nhuan
	bool ngayhople(int, int, int);                      // kiem tra ngay hop le
	int ngaytrongthang(int, int);                        // tra ve so ngay trong thang tung thang
	void ngaytruocdo(int&, int&, int&);                  // tinh ngay truoc do
	int tinhngay(Ngay);
};

#endif