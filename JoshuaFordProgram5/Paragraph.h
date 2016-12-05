#include "IElement.h"

#ifndef _PARAGRAPH
#define _PARAGRAPH

class Paragraph : public IElement
{
private:
	string m_text;
public:
	Paragraph();
	~Paragraph();
	//PRE: None
	//POST: None
	//RETURNS: None
	virtual istream& Input(istream& in);
	//PRE: istream opened
	//POST: paragraph value read in
	//RETURNS: istream in
	virtual ostream& Output(ostream& out);
	//PRE: ostream opened
	//POST: paragraph object output
	//RETURNS: ostream out
};
#endif