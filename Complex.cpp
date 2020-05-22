#include "complex.h"
#include <cmath>

Complex::Complex()
{
	Re = 0;
	Im = 0;
}

void Complex::set(double m, double r)
{
	Re = m;
	Im = r;
}

Complex::Complex(double m, double r)
{
	Re = m;
	Im = r;
}

void Complex::setIm(double _Im)
{
	Im = _Im;
}

void Complex::setRe(double _Re)
{
	Re = _Re;
}

double Complex::getIm()
{
	return Im;
}

double Complex::getRe()
{
	return Re;
}

Complex::Complex(const Complex& A)
{
	Re = A.Re;
	Im = A.Im;
}

Complex operator + (Complex& m, Complex& r)
{

	return Complex(m.Re + r.Re, m.Im + r.Im);
}


Complex operator - (Complex& m, Complex& r)
{
	Complex f;
	f.Re = m.Re - r.Re;
	f.Im = m.Im - r.Im;
	return f;
}

Complex operator / (Complex& m, Complex& r)
{
	Complex o;
	o.Re = (m.Re * r.Re + m.Im * r.Im) / (r.Re * r.Re + r.Im * r.Im);
	o.Im = (r.Re * m.Im - m.Re * r.Im) / (r.Re * r.Re + r.Im * r.Im);
	return o;
}

Complex operator * (Complex& m, Complex& r)
{
	Complex o;
	o.Re = m.Re * r.Re - m.Im * r.Im;
	o.Im = m.Re * r.Im + r.Re * m.Im;
	return o;
}

Complex& Complex:: operator =(const Complex& m)
{
	if (this == &Complex)
		return *this;
	Re = m.Re;
	Im = m.Im;
	return *this;
}

bool operator == (Complex& m, Complex& r)
{
	return ((m.Re == r.Re) && (m.Im == r.Im));
}

ostream& operator << (ostream& cout, Complex& r)
{
	cout << r.Re << "+" << r.Im << "i";
	return cout;
}

istream& operator >> (istream& cin, Complex& r)
{
	cin >> r.Im;
	cin >> r.Re;
	return cin;
}

{
	double i, k;
	cin >> i;
	k = pow(r, i) // || k = exp(i, ln(r));
		cout << k;
}