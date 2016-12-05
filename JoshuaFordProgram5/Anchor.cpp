#include "Anchor.h"

Anchor::Anchor()
{
	m_href = "";
	m_text = "";
}

Anchor::~Anchor(){ ; }

istream& Anchor::Input(istream& in)
{
	in >> m_href;
	in.ignore(); // skip newline character
	getline(in, m_text);
	return in;
}

ostream& Anchor::Output(ostream& out)
{
	return out << "<a href='" << m_href << "'>" << m_text << "</a>" << endl;
}