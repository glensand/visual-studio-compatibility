#include "ExportClass.h"
#include <iostream>

int main()
{
	// ����������� - ���������� ������������ ���������
	ExportClass ec;
	
	// �������� ������ ������
	//const auto vector = ec.getStringList();
	//std::vector<std::string> testNotTrivialVector;
	//ExportClass::Fill(testNotTrivialVector);

	// �������� ���������
	auto exportClassPtr = ExportClass::Create();
	ExportClass::Destroy(exportClassPtr);

	return 0;
}