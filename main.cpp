#include "complex.h"
#include <iostream>

using namespace std;


int main() {
	Complex m;
	Complex r(9, 8);
	Complex o(r);
	cout << m << " " << r << " " << o << " Constructors" << endl;
	o.set(11, 9);
	cout << o.getRe() << " + " << o.getIm() << "i" << " - set && get" << endl;
	Complex v;
	v = m + r;
	cout << v << " operator + " << endl;
	v = v - r;
	cout << v << " operator - " << endl;
	v = o / r;
	cout << " operator / " << v << endl;
	v = o * r;
	cout << v << " operator * " << endl;
	v = r;
	cout << v << " operator = " << endl;
	cout << (v == r) << " operator == " << endl;
	cout << (m == r) << " operator == " << endl;

	Complex r;
	cin >> r;
	cout << r << " operator cin>> " << endl;

	return 0;
}