#include <iostream>
#include <string>
using namespace std;

#ifndef _IELEMENT
#define _IELEMENT

class IElement
{
public:
	IElement();
	~IElement();
	friend ostream& operator << (ostream& out, IElement& item);
	friend istream& operator >> (istream& in, IElement& item);
protected:
	virtual ostream& Output(ostream& out) = 0;
	virtual istream& Input(istream& in) = 0;
};
#endif