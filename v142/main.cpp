#include "v110/export_class_110.h"
#include "v141/export_class_141.h"

int main()
{
	// stack object construction - destruction works well
	export_class_110 ec;
	
	// we cannot deallocate memory were allocated in another module
	// it seems like wrong dll loading
	//const auto vector = ec.getStringList();
	//std::vector<std::string> testNotTrivialVector;
	//ExportClass::Fill(testNotTrivialVector);

	// also memory allocation and deallocation if it were done in single module works
	auto* export_110 = export_class_110::create();
	export_class_110::destroy(export_110);

	auto* export_141 = export_class_141::create();
	delete export_141;

	return 0;
}