#include "Ngay.h"

Ngay::Ngay() {



}

Ngay::~Ngay() {



}

int Ngay::getNgay() {              //getter
	return ngay;
}
int Ngay::getThang() {
	return thang;
}
int Ngay::getNam() {
	return nam;
}

void Ngay::setNgay(int ngay) {               //setter
    this->ngay = ngay;
}
void Ngay::setThang(int thang) {
	this->thang = thang;
}

void Ngay::setNam(int nam) {
	this->nam = nam;
}


istream& operator>> (istream& is, Ngay& date)        // nhap
	try
	{
		do {
			cout << "Nhap ngay: ";
			is >> date.ngay;
			if (is.fail())
				throw "Ngay nhap vao khong dung";
			cout << "Nhap thang: ";
			is >> date.thang;
			if (is.fail())
				throw "Thang nhap vao khong dung";
			cout << "Nhap nam (bat dau tu nam 1950): ";
			is >> date.nam;
			if (is.fail())
				throw "Nam nhap vao khong dung";
			cout << endl;
		} while (date.ngayhople(date.ngay, date.thang, date.nam) == false);

		return is;
	}
	catch (const char* error)
	{
		cerr << error << endl;
		exit(-2);
	}


ostream& operator<< (ostream& os, const Ngay& date)             // xuat
{
	os << date.ngay << "/" << date.thang << "/" << date.nam;
	return os;
}

istream& nhapngaytufile(istream& is, Ngay& date)             // nhap ngay tu file
{
	try
	{
		char c;
		do {
			is >> date.ngay;
			if (is.fail())
				throw "Ngay nhap vao khong dung";

			is >> c;

			is >> date.thang;
			if (is.fail())
				throw "Thang nhap vao khong dung";

			is >> c;

			is >> date.nam;
			if (is.fail())
				throw "Nam nhap vao khong dung";
		} while (date.ngayhople(date.ngay, date.thang, date.nam) == false);

		return is;
	}
	catch (const char* error)
	{
		cerr << error << endl;
		exit(-2);
	}
}


bool Ngay::namnhuan(int nam)                       // kiem tra nam nhuan
{
	if (nam % 400 == 0)
		return true;
	if (nam % 4 == 0 && nam % 100 != 0)
		return true;
	return false;
}

bool Ngay::ngayhople(int ngay, int thang, int nam)           // kiem tra ngay hop le
{
	if (nam < 1950)
		return false;
	switch (thang)
	{
	case 1:case 3:case 5:case 7:case 8:case 10: case 12:
		if (ngay > 0 && ngay <= 31)
		{
			return true;
			break;
		}
		else
		{
			return false;
			break;
		}
	case 4:case 6:case 9: case 11:
		if (ngay > 0 && ngay <= 30)
		{
			return true;
		}
		else
		{
			return false;
		}
	case 2:
		if (namnhuan(nam) == true)
		{
			if (ngay > 0 && ngay <= 29)
				return true;
			return false;
		}
		else
		{
			if (ngay > 0 && ngay <= 28)
				return true;
			return false;
		}
	default:
		return false;
	}
}

int Ngay::ngaytrongthang(int thang, int nam)
{
	switch (thang)
	{
	case 1:case 3:case 5:case 7:case 8:case 10: case 12:
		return 31;
	case 4:case 6:case 9: case 11:
		return 30;
	case 2:
		if (namnhuan(nam) == true)
			return 29;
		else
			return 28;
	default:
		return 0;
	}
}



