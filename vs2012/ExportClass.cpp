#include "ExportClass.h"
#include <iostream>

ExportClass::ExportClass()
{
}


ExportClass::~ExportClass()
{
}

ExportClass::StringList ExportClass::getStringList() const
{
	StringList rValue;
	rValue.emplace_back("test_string1");
	rValue.emplace_back("ultra long test string for memory corruption");
	rValue.emplace_back("ultimately long test string for memory corruption");
	return rValue;
}

ExportClass* ExportClass::Create()
{
	return new ExportClass();
}

void ExportClass::Destroy(ExportClass* ptr)
{
	delete ptr;
}

void ExportClass::Fill(StringList& list)
{
	list.emplace_back("test_string1");
	list.emplace_back("ultra long test string for memory corruption");
	list.emplace_back("ultimately long test string for memory corruption");
}
