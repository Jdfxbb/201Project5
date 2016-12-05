#include "Anchor.h"

Anchor::Anchor()
{

}

Anchor::~Anchor()
{

}

istream& Anchor::Input(istream& in)
{
	in >> m_href;
	getline(in, m_text);
	return in;
}

ostream& Anchor::Output(ostream& out)
{
	return out << "<a href = " << m_href << ">" << m_text << "< / a>";
}