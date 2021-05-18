#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

#ifndef _Hethongthuvien_
#define _Hethongthuvien_


class Hethongthuvien
{
public:
	Hethongthuvien();
	~Hethongthuvien();

	virtual void nhap() = 0;       
	virtual void xuat() = 0;
	virtual void nhaptufile(ifstream&) = 0;
	virtual void xuatsangfile(ofstream&) = 0;

};

#endif