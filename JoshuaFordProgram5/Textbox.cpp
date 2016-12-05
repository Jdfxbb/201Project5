#include "Textbox.h"

Textbox::Textbox()
{
	m_name = "";
}

Textbox::~Textbox(){ ; }

istream& Textbox::Input(istream& in)
{
	return in >> m_name;
}

ostream& Textbox::Output(ostream& out)
{
	return out << "<input type='text' name='" << m_name << "'>";
}