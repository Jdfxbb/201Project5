#include "IElement.h"

class Header : public IElement
{
private:
	string m_text;
	int m_headerLevel;
public:
	Header();
	~Header();
	virtual istream& Input(istream& in);
	virtual ostream& Output(ostream& out);
};