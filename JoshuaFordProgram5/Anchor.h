#include "IElement.h"

#ifndef _ANCHOR
#define _ANCHOR

class Anchor : public IElement
{
private:
	string m_href, m_text;
public:
	Anchor();
	~Anchor();
	//PRE: None
	//POST: None
	//RETURNS: None
	virtual istream& Input(istream& in);
	//PRE: istream opened
	//POST: anchor values read in
	//RETURNS: istream in
	virtual ostream& Output(ostream& out);
	//PRE: ostream opened
	//POST: anchor object output
	//RETURNS: ostream out
};
#endif