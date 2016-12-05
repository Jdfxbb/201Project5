#include "WebCreator.h"

WebCreator::WebCreator(const string& title)
{
	m_title = title;
}

WebCreator::~WebCreator()
{
	// clear vector
	for (unsigned int i = 0; i < m_elementList.size(); i++)
	{
		delete m_elementList[i];
		m_elementList[i] = NULL;
	}
}

// not needed at this time
const WebCreator& WebCreator::operator = (const WebCreator& rhs)
{
	if (this != &rhs)
	{
		for (unsigned int i = 0; i < m_elementList.size(); i++)
		{
			delete m_elementList[i];
			m_elementList[i] = NULL;
		}
		m_title = rhs.m_title;
		for (unsigned int i = 0; i < m_elementList.size(); i++)
		{
			m_elementList[i] = rhs.m_elementList[i];
		}
	}
	return *this;
}


void WebCreator::ConvertToHtml(const string& stylePath, 
	const string& pagePath, const string& outputPath)
{
	readStyle(stylePath);
	readPage(pagePath);
	buildPage(outputPath);
}

// get commands from style page
void WebCreator::readStyle(const string& stylePath)
{
	ifstream in(stylePath);
	Style temp; // for storing object before adding it to vector
	in >> temp;
	while (in.good())
	{
		m_styleList.push_back(temp);
		in >> temp;
	}
	in.close();
}

// get commands from elements page
void WebCreator::readPage(const string& pagePath)
{
	ifstream in(pagePath);
	IElement* element = NULL; // for storing element before adding it to vector
	string label; // for checking element type

	in >> label;
	while (in.good())
	{
		if (label == "HEADER")
			element = new Header;
		else if (label == "PARAGRAPH")
			element = new Paragraph;
		else if (label == "LINK")
			element = new Anchor;
		else if (label == "TEXTBOX")
			element = new Textbox;
		else if (label == "BUTTON")
			element = new Button;
		in >> *element;
		m_elementList.push_back(element);
		in >> label;
	}
	in.close();
}

// write the page in html
void WebCreator::buildPage(const string& pagePath)
{
	ofstream out(pagePath);
	OutputHeader(out);
	OutputStyles(out);
	OutputElements(out);
	OutputFooter(out);
	out.close();
}

ostream& WebCreator::OutputHeader(ostream& out)
{
	out << "<!DOCTYPE html><html>" << endl
		<< "<head>" << endl
		<< "<title>" << m_title << "</title>" << endl
		<< "</head><body>" << endl;
	return out;
}

ostream& WebCreator::OutputStyles(ostream& out)
{
	out << "<style type='text/css'>" << endl;

	// iterate and output all stored styles
	for (unsigned int i = 0; i < m_styleList.size(); i++)
		out << m_styleList[i] << endl;
	out << "</style>" << endl;
	return out;
}
ostream& WebCreator::OutputElements(ostream& out)
{
	// iterate and output all stored elements 
	for (unsigned int i = 0; i < m_elementList.size(); i++)
	{
		out << *m_elementList[i];
	}
	return out;
}
ostream& WebCreator::OutputFooter(ostream& out)
{
	out << endl << "</body><html>" << endl;
	return out;
}