#include "Button.h"

Button::Button()
{
	m_name = "";
	m_value = "";
}

Button::~Button(){ ; }

istream& Button::Input(istream& in)
{
	in >> m_name;
	in.ignore(); // skip newline character
	getline(in, m_value);
	return in;
}

ostream & Button::Output(ostream& out)
{
	return out << "<input type='button' name='" 
		<< m_name 
		<< "' value ='" 
		<< m_value << "'>";
}
