#include "v110/export_class_110.h"
#include "v141/export_class_141.h"
#include "v142/derived_class_142.h"
#include "v110_static/class_110.h"
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

	ref_counted* d_c = new derived_class_142;
	delete d_c;

	class_110 static_class;
	static_class.do_something();
	static_class.add_string("asfsadgdg");

	return 0;
}