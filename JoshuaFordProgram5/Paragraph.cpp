#include "Paragraph.h"

Paragraph::Paragraph()
{
	m_text = "";
}

Paragraph::~Paragraph(){ ; }

istream& Paragraph::Input(istream& in)
{
	in.ignore(); // skip newline character
	getline(in, m_text);
	return in;
}

ostream& Paragraph::Output(ostream& out)
{
	return out << "<p>" << m_text << "</p>";
}