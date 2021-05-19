#include<iostream>
using namespace std;
#include "ThuVien.h"
#include "DocGia.h"



void gioithieu() {
	cout << "\t\t\t\t\t__________________________________________________________\n";
	cout << "\t\t\t\t\t*               PBL1: KY THUAT LAP TRINH                 *\n";
	cout << "\t\t\t\t\t*              PHAN MEM QUAN LI THU VIEN                 *\n";
	cout << "\t\t\t\t\t*              SINH VIEN     : NGUYEN TUE TAM            *\n";
	cout << "\t\t\t\t\t*                              TRAN PHUC THINH           *\n";
	cout << "\t\t\t\t\t*                              NGUYEN VAN AN             *\n";
	cout << "\t\t\t\t\t*              GIANG VIEN HD : TS.DAO DUY TUAN           *\n";
	cout << "\t\t\t\t\t__________________________________________________________\n\n\n";
}

int main()
{
	ThuVien lib;
	int choose;
	do {
		system("cls");
		gioithieu();
		cout << "\t_____________________________________________________________________" << endl;
		cout << "\t|_____________________________SACH__________________________________|" << endl;
		cout << "\t| 1. Nhap,them sach                                                 |" << endl;
		cout << "\t| 2. Xuat danh sach sach                                            |" << endl;
		cout << "\t| 3. Tim kiem sach theo ID                                          |" << endl;
		cout << "\t| 4. Tim kiem sach theo ten sach                                    |" << endl;
		cout << "\t|___________________________________________________________________|" << endl;
		cout << "\t|___________________________ DOC GIA________________________________|" << endl;
		cout << "\t|5. Nhap, them doc gia                                              |" << endl;
		cout << "\t|6. Xuat danh sach doc gia                                          |" << endl;
		cout << "\t|7. Tim kiem doc gia theo ID                                        |" << endl;
		cout << "\t|8. Tim kiem doc gia theo ho ten                                    |" << endl;
		cout << "\t|___________________________________________________________________|" << endl;
		cout << "\t|_________________________PHIEU MUON TRA____________________________|" << endl;
		cout << "\t|9. Nhap, them phieu muon/tra sach                                  |" << endl;
		cout << "\t|10. Xuat phieu muon/tra sach                                       |" << endl;
		cout << "\t|11. Nhap danh sach doc gia muon qua han va tien phat               |" << endl;
		cout << "\t|___________________________________________________________________|" << endl;
		cout << "\t|0. Thoat chuong trinh                                              |" << endl;
		cout << "\t|___________________________________________________________________|" << endl;

		cout << "\nVui long chon phuong thuc: ";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1:
		{
			system("cls");
			ofstream sachngoaifile("dsachSach.txt", std::ios_base::app);
			if (!sachngoaifile.fail())
			{
				lib.nhap_luuvaofilesach(sachngoaifile);
				sachngoaifile.close();
			}
			else
				cout << "Khong mo duoc file";

			system("pause");
			break;
		}
		case 2:
		{
			ifstream sachtrongfile("dsachSach.txt");
			if (!sachtrongfile.fail())
			{
				lib.xuat_doctufilesach(sachtrongfile);
				sachtrongfile.close();
			}
			else
				cout << "Khong mo duoc file";

			system("pause");
			break;
		}
		case 3:
		{
			lib.TimsachbangID();

			system("pause");
			break;
		}
		case 4:
		{
			lib.Timsachbangtensach();

			system("pause");
			break;
		}
		case 5:
		{
			ofstream docgiangoaifile("dsachDocgia.txt", std::ios_base::app);
			if (!docgiangoaifile.fail())
			{
				lib.nhap_luuvaofiledocgia(docgiangoaifile);
				docgiangoaifile.close();
			}
			else
				cout << "Khong mo duoc file";

			system("pause");
			break;
		}
		case 6:
		{
			ifstream docgiatrongfile("dsachDocgia.txt");
			if (!docgiatrongfile.fail())
			{
				lib.xuat_doctufiledocgia(docgiatrongfile);
				docgiatrongfile.close();
			}
			else
				cout << "Khong mo duoc file";

			system("pause");
			break;
		}
		case 7:
		{
			lib.TimdocgiabangID();

			system("pause");
			break;
		}
		case 8:
		{
			lib.Timdocgiabangten();

			system("pause");
			break;
		}
		case 9:
		{
			ofstream thengoaifile("dsachThe.txt", std::ios_base::app);
			if (!thengoaifile.fail())
			{
				lib.nhap_luuvaofilethe(thengoaifile);
				thengoaifile.close();
			}
			else
				cout << "Khong mo duoc file";

			system("pause");
			break;
		}
		case 10:
		{
			ifstream thetrongfile("dsachThe.txt");
			if (!thetrongfile.fail())
			{
				lib.xuat_doctufilethe(thetrongfile);
				thetrongfile.close();
			}
			else
				cout << "Khong mo duoc file";

			system("pause");
			break;
		}



		}
	} while (choose != 0);
}