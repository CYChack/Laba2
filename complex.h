#pragma once
#include<iostream>

using namespace std;
class Complex
{
public:
	Complex();
	void set(double m, double d);
	Complex(double m, double d);
	void setIm(double _Im);
	void setRe(double _Re);
	double getIm();
	double getRe();
	Complex(const Complex& A);
	friend  Complex operator + (Complex& m, Complex& r);
	friend Complex operator - (Complex& m, Complex& r);
	friend Complex operator / (Complex& m, Complex& r);
	friend Complex operator * (Complex& m, Complex& r);
	Complex& operator = (const Complex& m);
	friend bool operator == (Complex& m, Complex& r);
	friend ostream& operator << (ostream& cout, Complex& r);
	friend istream& operator >> (istream& ñin, Complex& r);

private:
	double Im;
	double Re;
};