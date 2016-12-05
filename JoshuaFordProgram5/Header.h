#include "IElement.h"

#ifndef _HEADER
#define _HEADER

class Header : public IElement
{
private:
	string m_text;
	int m_headerLevel;
public:
	Header();
	~Header();
	//PRE: None
	//POST: None
	//RETURNS: None
	virtual istream& Input(istream& in);
	//PRE: istream opened
	//POST: header values read in
	//RETURNS: istream in
	virtual ostream& Output(ostream& out);
	//PRE: ostream opened
	//POST: header object output
	//RETURNS: ostream out
};
#endif