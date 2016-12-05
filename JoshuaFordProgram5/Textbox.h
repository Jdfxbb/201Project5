#include "IElement.h"

#ifndef _TEXTBOX
#define _TEXTBOX
class Textbox : public IElement
{
private:
	string m_name;
public:
	Textbox();
	~Textbox();
	//PRE: None
	//POST: None
	//RETURNS: None
	virtual istream& Input(istream& in);
	//PRE: istream opened
	//POST: textbox value read in
	//RETURNS: istream in
	virtual ostream& Output(ostream& out);
	//PRE: ostream opened
	//POST: textbox object output
	//RETURNS: ostream out
};
#endif