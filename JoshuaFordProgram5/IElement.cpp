#include "IElement.h"

IElement::IElement(){}

IElement::~IElement(){ ; }

ostream& operator << (ostream& out, IElement& item)
{
	item.Output(out);
	return out;
}

istream& operator >> (istream& in, IElement& item)
{
	item.Input(in);
	return in;
}
