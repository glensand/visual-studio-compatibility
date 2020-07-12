#include "Exportedv141.h"
#include <iostream>

Exportedv141::Exportedv141()
{
}


Exportedv141::~Exportedv141()
{
}

Exportedv141::StringList Exportedv141::getStringList() const
{
	StringList rValue;
	rValue.emplace_back("test_string1");
	rValue.emplace_back("ultra long test string for memory corruption");
	rValue.emplace_back("ultimately long test string for memory corruption");
	return rValue;
}

Exportedv141* Exportedv141::Create()
{
	return new Exportedv141();
}

void Exportedv141::Destroy(Exportedv141* ptr)
{
	delete ptr;
}

void Exportedv141::Fill(StringList& list)
{
	list.emplace_back("test_string1");
	list.emplace_back("ultra long test string for memory corruption");
	list.emplace_back("ultimately long test string for memory corruption");
}
