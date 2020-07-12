#pragma once

#include "export.h"
#include <vector>
#include <string>

class api Exportedv141
{
public:
	typedef std::vector<std::string> StringList;
	Exportedv141();
	~Exportedv141();
	
	StringList getStringList() const;

	static Exportedv141* Create();
	static void Destroy(Exportedv141* ptr);

	static void Fill(StringList& list);
};

