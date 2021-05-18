#include "Sach.h"

Sach::Sach()
{

}

Sach::~Sach()
{

}

string Sach::getIDSach()
{
	return idsach;
}

string Sach::getTenSach()
{
	return tensach;
}


istream& operator>> (istream& is, Sach& book)
{
	try
	{
		cout << "Nhap ID sach: ";
		getline(is, book.idsach);
		cout << "Nhap ten tac gia: ";
		getline(is, book.tacgia);
		cout << "Nhap gia tien cua sach: ";
		is >> book.giasach;
		if (is.fail() || isnan(book.giasach) || book.giasach <= 0)
		{
			throw "Gia tien sach vua nhap vao khong dung";
		}
		return is;
	}
	catch (const char* error)
	{
		cerr << error << endl;
		exit(-2);
	}
}

ostream& operator<< (ostream& os, const Sach& book)
{
	os << "ID cua sach: " << book.idsach << endl;
	os << "Ten sach" << book.tensach << endl;
	os << "Ten tac gia: " << book.tacgia << endl;
	os << "Gia tien cua sach: " << book.giasach << endl;
    return os;
}

void Sach::nhap()
{
	try
	{
		cin.ignore();
		cout << "Nhap ID sach: ";
		getline(cin, idsach);
		cout << "Nhap ten sach: ";
		getline(cin, tensach);
		cout << "Nhap ten tac gia: ";
		getline(cin, tacgia);
		cout << "Nhap gia tien cua sach: ";
		cin >>giasach;
		if (cin.fail() || giasach <= 0)
		{
			throw "Gia tien sach vua nhap vao khong dung";
		}

	}
	catch (const char* error)
	{
		cerr << error << endl;
		exit(-2);
	}
}

void Sach::xuat()
{
	cout << "ID cua sach: " << idsach << endl;
	cout << "Ten sach: " << tensach << endl;
	cout << "Ten tac gia: " << tacgia << endl;
	cout << "Gia tien cua sach: " << giasach << endl;
}

void Sach::nhaptufile(ifstream& is)
{
	return;
}

void Sach::xuatsangfile(ofstream& os)
{
	os << idsach << "\n"  << tensach << "\n" << tacgia << "\n" << giasach << endl;
}