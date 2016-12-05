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
	virtual istream& Input(istream& in);
	virtual ostream& Output(ostream& out);




};
#endif