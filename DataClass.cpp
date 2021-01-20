#include "DataClass.h"
#include <vector>


DataClass::DataClass(System::Collections::ArrayList^ arrayList,System::Drawing::Point startPoint, System::Drawing::Point finishPoint)
{
	this->arrayList = arrayList;
	this->startPoint = startPoint;
	this->finishPoint = finishPoint;
}

DataClass::DataClass(System::String^ finalInheritance, System::Drawing::Point startPoint, System::Drawing::Point finishPoint)
{
	this->finalInheritance = finalInheritance;
	this->startPoint = startPoint;
	this->finishPoint = finishPoint;
}

System::Collections::ArrayList^ DataClass::getArrayList()
{
	throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
	return this->arrayList;
}

System::Drawing::Point DataClass::getStartPoint()
{
	return this->startPoint;
}

System::Drawing::Point DataClass::getFinishPoint()
{
	return this->finishPoint;
}

System::String^ DataClass::getFinalInheritance()
{
	return this->finalInheritance;
	// TODO: insert return statement here
}

void DataClass::setFinishPoint(System::Drawing::Point finishPoint2)
{
	this->finishPoint = finishPoint2;
}
