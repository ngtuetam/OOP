#include "DocGia.h"

DocGia::DocGia()
{

}

DocGia::~DocGia()
{

}

string DocGia::getID()
{
	return iddocgia;
}

string DocGia::getHoTen()
{
	return hoten;
}

istream& operator>> (istream& is, DocGia& reader)
{
	try
	{
		cout << "Nhap ID cua doc gia: ";
		getline(is, reader.iddocgia);
		cout << "Nhap ho ten doc gia: ";
		getline(is, reader.hoten);
		cout << "Nhap dia chi: ";
		getline(is, reader.diachi);
		cout << "Nhap ngay sinh: ";
		is >> reader.ngaysinh;
        return is;

	}
	catch (const char* error)
	{
		cerr << error << endl;
		exit(-2);
	}
}

ostream& operator<< (ostream& os, const DocGia& reader)
{
	os << "ID cua doc gia: " << reader.iddocgia << endl;
	os << "Ho ten doc gia: " << reader.hoten << endl;
	os << "Dia chi: " << reader.diachi << endl;
	os << "Ngay sinh: " << reader.ngaysinh << endl;
    return os;
}


void DocGia::nhap()
{
        cin.ignore();
		cout << "Nhap ID cua doc gia: ";
		getline(cin, iddocgia);
		cout << "Nhap ho ten: ";
		getline(cin, hoten);
		cout << "Nhap dia chi: ";
		getline(cin, diachi);
		cout << "Nhap tuoi: ";
		cout << "Nhap ngay sinh: ";
		cin >> ngaysinh;
}

void DocGia::xuat()
{
	cout << "ID cua doc gia: " << iddocgia << endl;
	cout << "Ho ten doc gia: " << hoten << endl;
	cout << "Dia chi: " << diachi << endl;
	cout << "Ngay sinh: " << ngaysinh << endl;
}

void DocGia::nhaptufile(ifstream& is)
{
	return;
}

void DocGia::xuatsangfile(ofstream& os)
{
	os <<iddocgia << "\n" << hoten << "\n" << diachi << "\n" << ngaysinh << endl;
}

