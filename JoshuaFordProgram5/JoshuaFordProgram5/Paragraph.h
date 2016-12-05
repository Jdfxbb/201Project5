#include "IElement.h"

class Paragraph : public IElement
{
private:
	string m_text;
public:
	Paragraph();
	~Paragraph();
	virtual istream& Input(istream& in);
	virtual ostream& Output(ostream& out);
};