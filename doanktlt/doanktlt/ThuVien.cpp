#include "ThuVien.h"
#include<iomanip>




void ThuVien::nhap_luuvaofilesach(ofstream& os)
{
	system("cls");
	cout << "NHAP VAO DANH SACH CAC CUON SACH VA LUU VAO FILE" << endl;           // nhap sach vao va luu vao file
	cout << endl;
    Sach book;                                                                   
	book.nhap();
	dsachsach.push_back(book);
	

	for (int i = 0; i < dsachsach.size(); i++)
	{
		dsachsach[i].xuatsangfile(os);
	}
}

void ThuVien::xuat_doctufilesach(ifstream& is)
{
	system("cls");
	cout << "XUAT RA DANH SACH CAC CUON SACH VA DOC TU FILE VAO\n" << endl;
	cout << "\nDanh sach cac cuon sach: " << endl;                                // xuat ra danh sach cac cuon sach duoc nhap vao tu ban phim
	cout << endl;
	for (int i = 0; i < dsachsach.size(); i++)
	{
		dsachsach[i].xuat();
		cout << "\n******************************************" << endl;
	}
	cout << "\nDanh sach cac cuon sach doc tu file dsachSach.txt\n" << endl;      // xuat ra cac cuon sach co san tu file dsacHSach.txt
	while (true)
	{
		Sach temp;
		string idsach, tensach, tacgia;      // khai bao cac bien
		double giasach;

		getline(is, idsach);                //nhap vao cac thong tin tu file
		getline(is, tensach);
		getline(is, tacgia);
		is >> giasach;
		is.ignore();

		if (is.eof())
			break;

		cout << "Ma sach: " << idsach << endl;             // xuat cac thong tin doc tu file 
		cout << "Ten sach: " << tensach << endl;
		cout << "Ten tac gia: " << tacgia << endl;
		cout << "Gia tien cua sach: "<< fixed << setprecision(0) << giasach << endl;
		cout << "\n******************************************" << endl;
	}
}


void ThuVien::TimsachbangID()
{
	system("cls");
	string bookID;
	cout << "Nhap ID sach can tim: ";
	cin.ignore();
	getline(cin, bookID);
	cout << "\nSach tuong ung voi ID vua nhap vao: " << endl;
	for (int i = 0; i < dsachsach.size(); i++)
	{
		if (bookID == dsachsach[i].getIDSach())
		{
			dsachsach[i].xuat();
			cout << "******************************************" << endl;
		}
	}

	cout << "\nTim sach trong file dsachSach.txt" << endl;
	ifstream timsach("dsachSach.txt");
	string data;
	if (!timsach.fail())
	{
		while (true)
		{
			getline(timsach, data);
			if (data == bookID)
			{
				cout << "SACH CAN TIM CO TRONG DANH SACH" << endl;
				cout << endl;
				break;
			}
			if (timsach.eof())
			{
				cout << "SACH CAN TIM KHONG CO TRONG DANH SACH" << endl;
				cout << endl;
				break;
			}
		}
		timsach.close();
	}
	else
		cout << "Khong mo duoc file";
}

void ThuVien::Timsachbangtensach()
{
	system("cls");
	string bookname;
	cout << "Nhap ten sach can tim: ";
	cin.ignore();
	getline(cin, bookname);
	cout << "\nSach tuong ung voi ten vua nhap vao: " << endl;
	for (int i = 0; i < dsachthe.size(); i++)
	{
		if (bookname == dsachsach[i].getIDSach())
		{
			dsachsach[i].xuat();
			cout << "******************************************" << endl;
		}
	}

	cout << "\nTim sach trong file dsachSach.txt" << endl;
	ifstream timsach("dsachSach.txt");
	string data;
	if (!timsach.fail())
	{
		while (true)
		{
			getline(timsach, data);
			if (data == bookname)
			{
				cout << "SACH CAN TIM CO TRONG DANH SACH" << endl;
				cout << endl;
				break;
			}
			if (timsach.eof())
			{
				cout << "SACH CAN TIM KHONG CO TRONG DANH SACH" << endl;
				cout << endl;
				break;
			}
		}
		timsach.close();
	}
	else
		cout << "Khong mo duoc file";
}


void ThuVien::nhap_luuvaofiledocgia(ofstream& os)
{
	system("cls");
	cout << "NHAP VAO DANH SACH CAC DOC GIA VA LUU VAO FILE" << endl;
	cout << endl;
	
	DocGia reader;
	reader.nhap();
	dsachdocgia.push_back(reader);

	for (int i = 0; i < dsachdocgia.size(); i++)
	{
		dsachdocgia[i].xuatsangfile(os);
	}
}

void ThuVien::xuat_doctufiledocgia(ifstream& is)
{
	system("cls");
	cout << "XUAT RA DANH SACH CAC DOC GIA VA DOC TU FILE VAO" << endl;
	cout << endl;

	cout << "\nDanh sach cac doc gia: " << endl;
	cout << endl;
	for (int i = 0; i < dsachdocgia.size(); i++)
	{
		dsachdocgia[i].xuat();
		cout << "******************************************" << endl;
	}

	cout << "\nDanh sach cac doc gia doc tu file dsachDocgia.txt" << endl;
	cout << endl;
	while (true)
	{
		string id, hoten, diachi;
		Ngay ngaysinh;

		getline(is, id);
		getline(is, hoten);
		getline(is, diachi);
		
		is.ignore();
		if (is.eof())
			break;

		nhapngaytufile(is, ngaysinh);
		is.ignore();


		cout << "ID cua doc gia: " << id << endl;
		cout << "Ho ten doc gia: " << hoten << endl;
		cout << "Dia chi: " <<diachi << endl;
		cout << "Ngay sinh: " << ngaysinh << endl;

		cout << "******************************************" << endl;
	}
}

void ThuVien::TimdocgiabangID()
{
	system("cls");
	string id;
	cout << "Nhap ID doc gia can tim: ";
	cin.ignore();
	getline(cin, id);
	cout << "\nDoc gia tuong ung voi ID vua nhap vao: " << endl;
	for (int i = 0; i < dsachdocgia.size(); i++)
	{
		if (id == dsachdocgia[i].getID())
		{
			dsachdocgia[i].xuat();
			cout << "******************************************" << endl;
		}
	}

	cout << "\nTim doc gia trong file dsachDocgia.txt" << endl;
	ifstream timdocgia("dsachDocgia.txt");
	string data;
	if (!timdocgia.fail())
	{
		while (true)
		{
			getline(timdocgia, data);
			if (data == id)
			{
				cout << "DOC GIA CAN TIM CO TRONG DANH SACH" << endl;
				cout << endl;
				break;
			}
			if (timdocgia.eof())
			{
				cout << "DOC GIA CAN TIM KHONG CO TRONG DANH SACH" << endl;
				cout << endl;
				break;
			}
		}
		timdocgia.close();
	}
	else
		cout << "Khong mo duoc file";
}

void ThuVien::Timdocgiabangten()
{
	system("cls");
	string hoten;
	cout << "Nhap ho ten doc gia can tim: ";
	cin.ignore();
	getline(cin, hoten);
	cout << "\nDoc gia tuong ung voi ho ten vua nhap vao: " << endl;
	for (int i = 0; i < dsachdocgia.size(); i++)
	{
		if (hoten == dsachdocgia[i].getHoTen())
		{
			dsachdocgia[i].xuat();
			cout << "******************************************" << endl;
		}
	}

	cout << "\nTim doc gia trong file dsachDocgia.txt" << endl;
	ifstream timdocgia("dsachDocgia.txt");
	string data;
	if (!timdocgia.fail())
	{
		while (true)
		{
			getline(timdocgia, data);
			if (data == hoten)
			{
				cout << "DOC GIA CAN TIM CO TRONG DANH SACH" << endl;
				cout << endl;
				break;
			}
			if (timdocgia.eof())
			{
				cout << "DOC GIA CAN TIM KHONG CO TRONG DANH SACH" << endl;
				cout << endl;
				break;
			}
		}
		timdocgia.close();
	}
	else
		cout << "Khong mo duoc file";
}

void ThuVien::nhap_luuvaofilethe(ofstream& os)
{
	system("cls");
	cout << "NHAP VAO DANH SACH CAC PHIEU MUON SACH VA LUU VAO FILE" << endl;
	cout << endl;

	TheSach card;
	card.nhap();
	dsachthe.push_back(card);

	for (int i = 0; i < dsachthe.size(); i++)
	{
		dsachthe[i].xuatsangfile(os);
	}
}

void ThuVien::xuat_doctufilethe(ifstream& is)
{
	system("cls");
	cout << "XUAT RA DANH SACH CAC PHIEU MUON VA DOC TU FILE VAO" << endl;
	cout << endl;

	cout << "\nDanh sach cac phieu muon: " << endl;
	cout << endl;
	for (int i = 0; i < dsachthe.size(); i++)
	{
		dsachthe[i].xuat();
		cout << "******************************************" << endl;
	}

	cout << "\nDanh sach cac phieu muon doc tu file ListCards.txt" << endl;
	cout << endl;
	while (true)
	{
		string idnguoimuon , tennguoimuon, idsachmuon, tensachmuon;
		Ngay ngaymuon, ngaytra;

		getline(is, idnguoimuon);
		getline(is, tennguoimuon);
		getline(is, idsachmuon);
		getline(is, tensachmuon);

		if (is.eof())
			break;

		nhapngaytufile(is, ngaymuon);
		nhapngaytufile(is, ngaytra);
		is.ignore();

        cout << "ID cua nguoi muon sach: " << idnguoimuon << endl;
		cout << "Ho ten nguoi muon sach: " << tennguoimuon << endl;
		cout << "ID cua sach muon: " << idsachmuon << endl;
		cout << "Ten cua sach muon: " << tensachmuon << endl;
		cout << "Ngay muon sach: " << ngaymuon << endl;
		cout << "Ngay tra sach: " << ngaytra << endl;

		cout << "******************************************" << endl;
	}
}

void ThuVien::xuat_docdstrehan(ifstream& is)
{
	system("cls");
	cout << "Danh sach nhung nguoi muon sach qua han" << endl;
	cout << endl;

	while (true)
	{
		string idnguoimuon, tennguoimuon, idsachmuon, tensachmuon;
		Ngay ngaymuon, ngaytra;

		getline(is, idnguoimuon);
		getline(is, tennguoimuon);
		getline(is, idsachmuon);
		getline(is, tensachmuon);
		if (is.eof())
			break;
		nhapngaytufile(is, ngaymuon);
		nhapngaytufile(is, ngaytra);
		is.ignore();

		if (ngaytra.tinhngay(ngaymuon) > 7)
		{
			cout << "ID cua nguoi muon sach: " << idnguoimuon << endl;
			cout << "Ho ten nguoi muon sach: " << tennguoimuon << endl;
			cout << "ID cua sach muon: " << idsachmuon << endl;
			cout << "Ten cua sach muon: " << tensachmuon << endl;
			cout << "Ngay muon sach: " << ngaymuon << endl;
			cout << "Ngay tra sach: " << ngaytra << endl;
			cout << " So tien phat: " << 10000*(ngaytra.tinhngay(ngaymuon)-7) << " dong" << endl;
			
		}

		cout << "******************************************" << endl;
	}
}


