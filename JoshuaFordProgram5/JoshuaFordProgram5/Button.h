#include "IElement.h"

class Button : public IElement
{
private:
	string m_name, m_value;
public:
	Button();
	~Button();
	virtual istream& Input(istream& in);
	virtual ostream& Output(ostream& out);
};