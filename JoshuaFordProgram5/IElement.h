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
	//PRE: None
	//POST: None
	//RETURNS: None
	friend ostream& operator << (ostream& out, IElement& item);
	//PRE: ostream opened, IElement object initialized
	//POST: object output to stream
	//RETURNS: ostream out
	friend istream& operator >> (istream& in, IElement& item);
	//PRE: istream opened, IElement object initialized
	//POST: object read in from stream
	//RETURNS: istream in
protected:
	// pure virtuals
	virtual ostream& Output(ostream& out) = 0;
	virtual istream& Input(istream& in) = 0;
};
#endif