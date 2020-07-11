#pragma once

#include "export.h"
#include <vector>
#include <string>

class api ExportClass
{
public:
	typedef std::vector<std::string> StringList;
	ExportClass();
	~ExportClass();
	
	// Будучи вызванной из более новой среды, ломает рантайм при вызове деструктора строк
	// Похоже на некорректную загрузку мождуля
	StringList getStringList() const;

	// Странное поведение аллокаторов..
	// Если выделять и уничтожать кусок памяти внутри одного модуля - все ок (еще бы было не ок!)
	static ExportClass* Create();
	static void Destroy(ExportClass* ptr);

	// Будучи вызванной из более новой среды, ломает рантайм при вызове деструктора строк
	// Похоже на некорректную загрузку мождуля
	static void Fill(StringList& list);
};

