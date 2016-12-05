#include "IElement.h"

class Textbox : public IElement
{
private:
	string m_name;
public:
	Textbox();
	~Textbox();
	virtual istream& Input(istream& in);
	virtual ostream& Output(ostream& out);
};