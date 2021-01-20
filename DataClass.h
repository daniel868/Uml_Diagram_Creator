#pragma once
#include<array>
#include <list>
#include <string>
ref class DataClass
{
private:
	System::String^ finalInheritance;
	System::Collections::ArrayList^ arrayList;
	System::Drawing::Point startPoint,finishPoint;
public:
	DataClass(System::Collections::ArrayList^ arrayList, System::Drawing::Point startPoint, System::Drawing::Point finishPoint);

	DataClass(System::String^ finalInheritance, System::Drawing::Point startPoint, System::Drawing::Point finishPoint);


	System::Collections::ArrayList^ getArrayList();
	System::Drawing::Point getStartPoint();
	System::Drawing::Point getFinishPoint();
	System::String^ getFinalInheritance();

	void setFinishPoint(System::Drawing::Point finishPoint2);
};

