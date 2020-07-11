#include "ExportClass.h"
#include <iostream>

int main()
{
	// stack object construction - destruction works well
	ExportClass ec;
	
	// we cannot deallocate memory were allocated in another module
	// it seems like wrong dll loading
	//const auto vector = ec.getStringList();
	//std::vector<std::string> testNotTrivialVector;
	//ExportClass::Fill(testNotTrivialVector);

	// also memory allocation and deallocation if it were done in single module works
	auto exportClassPtr = ExportClass::Create();
	ExportClass::Destroy(exportClassPtr);

	return 0;
}