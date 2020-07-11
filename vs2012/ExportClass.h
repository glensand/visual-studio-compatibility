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
	
	StringList getStringList() const;

	static ExportClass* Create();
	static void Destroy(ExportClass* ptr);

	static void Fill(StringList& list);
};

