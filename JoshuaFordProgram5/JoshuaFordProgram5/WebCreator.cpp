#include "WebCreator.h"

WebCreator::WebCreator(const string& title)
{
	m_title = title;
}

WebCreator::~WebCreator()
{
	for (int i = 0; i < m_elementList.size(); i++)
	{
		delete[] m_elementList[i];
		m_elementList[i] = nullptr;
	}
}

void WebCreator::ConvertToHtml(const string& stylePath, const string& pagePath, const string& outputPath)
{
	readStyle(stylePath);
	readPage(pagePath);
	buildPage(pagePath);
}

void WebCreator::readStyle(const string& stylePath)
{

}

/*
	vector <Style> m_styleList;
	vector <IElement*> m_elementList;
	string m_title;

	void readStyle(const string& stylePath, const string& pagePath, const string& outputPath);
	void readPage(const string& pagePath);
	void buildPage(const string& pagePath);
	ostream& OutputHeader(ostream& out);
	ostream& OutputStyles(ostream& out);
	ostream& OutputElements(ostream& out);
	ostream& OutputFooter(ostream& out);