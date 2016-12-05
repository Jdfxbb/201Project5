#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Anchor.h"
#include "Button.h"
#include "Header.h"
#include "IElement.h"
#include "Paragraph.h"
#include "Style.h"
#include "Textbox.h"


using namespace std;

class WebCreator
{
private:
	vector <Style> m_styleList;
	vector < IElement*> m_elementList;
	string m_title;

	void readStyle(const string& stylePath);
	//PRE: valid stylepath
	//POST: style commands stored in vector
	//RETURNS: None
	void readPage(const string& pagePath);
	//PRE: valid pagepath
	//POST: page commands stored in vector
	//RETURNS: None
	void buildPage(const string& pagePath);
	//PRE: valid pagepath
	//POST: html webpage built
	//RETURNS: None
	ostream& OutputHeader(ostream& out);
	//PRE: ostream opened
	//POST: header written
	//RETURNS: ostream out
	ostream& OutputStyles(ostream& out);
	//PRE: ostream opened
	//POST: style commands written
	//RETURNS: ostream out
	ostream& OutputElements(ostream& out);
	//PRE: ostream opened
	//POST: elements written
	//RETURNS: ostream out
	ostream& OutputFooter(ostream& out);
	//PRE: ostream opened
	//POST: footer written
	//RETURNS: ostream out
public:
	WebCreator(const string& title);
	//PRE: None
	//POST: WebCreator object initialized with title
	//RETURNS: None
	~WebCreator();
	//PRE: None
	//POST: pointers deleted and vector nullified
	//RETURNS: None
	void ConvertToHtml(const string& stylePath, const string& pagePath, const string& outputPath);
	//PRE: None
	//POST: input paged written in html to output page
	//RETURNS: None
	const WebCreator& operator = (const WebCreator& rhs);
	//PRE: rhs WebCreator initialized
	//POST: WebCreator assigned values of rhs
	//RETURNS: const WebCreator
};