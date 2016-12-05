#include <iostream>
#include <string>
#include <vector>
#include "Style.h"
#include "IElement.h"

using namespace std;

class WebCreator
{
private:
	vector <Style> m_styleList;
	vector < IElement*> m_elementList;
	string m_title;

	void readStyle(const string& stylePath);
	void readPage(const string& pagePath);
	void buildPage(const string& pagePath);
	ostream& OutputHeader(ostream& out);
	ostream& OutputStyles(ostream& out);
	ostream& OutputElements(ostream& out);
	ostream& OutputFooter(ostream& out);
public:
	WebCreator(const string& title);
	~WebCreator();
	void ConvertToHtml(const string& stylePath, const string& pagePath, const string& outputPath);
};