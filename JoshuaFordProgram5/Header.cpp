#include "Header.h"

Header::Header()
{
	m_text = "";
	m_headerLevel = 0;
}

Header::~Header(){ ; }

istream& Header::Input(istream& in)
{
	string headSize;
	in >> headSize;

	// assign m_headerLevel based on headSize command
	if (headSize == "size_big")
		m_headerLevel = 1;
	else if (headSize == "size_medium")
		m_headerLevel = 2;
	else if (headSize == "size_small")
		m_headerLevel = 3;
	in.ignore(); // skip newline character
	getline(in, m_text);
	return in;
}

ostream& Header::Output(ostream& out)
{
	return out << "<h" 
		<< m_headerLevel 
		<< ">" 
		<< m_text 
		<< "</h" 
		<< m_headerLevel 
		<< ">";
}