#include "ExportClass.h"
#include <iostream>

int main()
{
	// Конструктор - Деструктор отрабатывают нормально
	ExportClass ec;
	
	// Вызывает мемори корапт
	//const auto vector = ec.getStringList();
	//std::vector<std::string> testNotTrivialVector;
	//ExportClass::Fill(testNotTrivialVector);

	// Работает нормально
	auto exportClassPtr = ExportClass::Create();
	ExportClass::Destroy(exportClassPtr);

	return 0;
}