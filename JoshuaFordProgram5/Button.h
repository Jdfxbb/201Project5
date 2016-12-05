#include "IElement.h"

#ifndef _BUTTON
#define _BUTTON

class Button : public IElement
{
private:
	string m_name, m_value;
public:
	Button();
	~Button();
	//PRE: None
	//POST: None
	//RETURNS: None
	virtual istream& Input(istream& in);
	//PRE: istream opened
	//POST: button values read in
	//RETURNS: istream in
	virtual ostream& Output(ostream& out);
	//PRE: ostream opened
	//POST: button object output
	//RETURNS: ostream out
};
#endif