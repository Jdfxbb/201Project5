/*********************************************

Name: Joshua Ford
Course: CS 201R
Program: Program 5 Page Builder
Due Date: 10 April 2016
Description: Read html style commands and output a formatted webpage
Inputs:	sample_page.page, sample_style.style
Outputs: sample_out.html
Algorithm:
1. Create WebCreator object with given title
2. Open input files and read commands
3. Output html code to build webpage 

*********************************************/

#include "Anchor.h"
#include "Button.h"
#include "Header.h"
#include "IElement.h"
#include "Paragraph.h"
#include "Style.h"
#include "Textbox.h"
#include "WebCreator.h"

using namespace std;

int main()
{
	/* 
	I could not find specifics anywhere in the documentation for 
	how files and a title should be chosen (console input or whatever)
	so in case you need to test the program with a different set of 
	files, I've	left these variables out for easy changing, sorry for 
	the possible inconvenience
	*/
	 
	string style = "sample_style.style";
	string page = "sample_page.page";
	string output = "sample_out.html";

	// create WebCreator object
	WebCreator WebPage("Dog AdoptionQ");

	// convert files to html
	WebPage.ConvertToHtml(style, page, output);
	return 0;
}