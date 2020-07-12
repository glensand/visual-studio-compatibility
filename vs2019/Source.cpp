#include "ExportClass.h"
#include "Exportedv141.h"

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
	delete exportClassPtr;
	//ExportClass::Destroy(exportClassPtr);

	auto vc141Exported = Exportedv141::Create();
	delete vc141Exported;

	return 0;
}