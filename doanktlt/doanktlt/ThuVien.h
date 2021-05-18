#pragma once

#ifndef _ThuVien_
#define _ThuVien_

#include "Sach.h"
#include "DocGia.h"
#include "TheSach.h"
#include "Ngay.h"



class ThuVien
{
private:
	vector<Sach> dsachsach;
	vector<DocGia> dsachdocgia;
	vector<TheSach> dsachthe;
public:
	void nhap_luuvaofilesach(ofstream&);         // nhap sach vao danh sach cac cuon sach va luu vao file
	void xuat_doctufilesach(ifstream&);          // xuat ra danh sach cac cuon sach va doc tu file vao
	void TimsachbangID();                        // ham tim sach bang ID
	void Timsachbangtensach();                   // ham tim sach bang ten sach

	void nhap_luuvaofiledocgia(ofstream&);        //nhap thong tin doc gia vao danh sach cac doc gia va luu vao file
	void xuat_doctufiledocgia(ifstream&);         // xuat ra danh sach cac doc gia va doc tu file vao
	void TimdocgiabangID();                      // ham tim doc gia bang ID
	void Timdocgiabangten();                     // ham tim doc gia bang ten

	void nhap_luuvaofilethe(ofstream&);       //nhap thong tin the sach vao danh sach cac the sach va luu vao file
	void xuat_doctufilethe(ifstream&);        // xuat ra danh sach cac the va doc tu file vao
	void xuat_docdstrehan(ifstream&);        
};

#endif 