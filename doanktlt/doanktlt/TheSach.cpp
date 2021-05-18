#include "TheSach.h"

TheSach::TheSach()
{

}

TheSach::~TheSach()
{

}

Ngay TheSach::getNgayMuon()
{
	return ngaymuon;
}

Ngay TheSach::getNgayTra()
{
	return ngaytra;
}

void TheSach::nhap()
{
	
		cin.ignore();
		cout << "Nhap ID cua nguoi muon sach: ";
		getline(cin, idnguoimuon);
		cout << "Nhap ho ten nguoi muon sach: ";
		getline(cin, tennguoimuon);
		cin.ignore();
		cout << "Nhap ID cua sach muon: ";
		getline(cin, idsachmuon);
		cout << "Nhap ten sach muon: ";
		getline(cin, tensachmuon);
		cout << "Nhap ngay muon sach: ";
		cin >> ngaymuon;
		cout << "Nhap ngay tra sach: ";
		cin >> ngaytra;
    
}


void TheSach::xuat()
{
	cout << "ID cua nguoi muon sach: " << idnguoimuon << endl;
	cout << "Ho ten nguoi muon sach: " << tennguoimuon << endl;
	cout << "ID cua sach muon: " << idsachmuon << endl;
	cout << "Ten cua sach muon: " << tensachmuon << endl;
	cout << "Ngay muon sach: " << ngaymuon << endl;
	cout << "Ngay tra sach: " << ngaytra << endl;
}

void TheSach::nhaptufile(ifstream& is)
{
	return;
}

void TheSach::xuatsangfile(ofstream& os)
{
	os << idnguoimuon << "\n" << tennguoimuon << "\n" << idsachmuon << "\n" << tensachmuon << "\n" << ngaymuon << "\n" << ngaytra << endl;
}

