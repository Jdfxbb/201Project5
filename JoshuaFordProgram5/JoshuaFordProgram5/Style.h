
#include <iostream>
#include <string>
using namespace std;

#ifndef _STYLE
#define _STYLE

struct Style
{
public:
	string element, attribute, value;


	friend ostream& operator << (ostream& out, const Style& item)
	{
		return out << item.element << "{ " << item.attribute << ": " << item.value << "; }";
	}
	friend istream& operator >> (istream& in, Style& item)
	{
		return in >> item.element >> item.attribute >> item.value;
	}
};
#endif