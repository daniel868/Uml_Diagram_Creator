#include "MyMap.h"

MyMap::MyMap(System::String^ txtBoxName, System::String^ txtBoxText)
{
    this->txtBoxName = txtBoxName;
    this->txtBoxText = txtBoxText;
}

System::String^ MyMap::getTxtBoxName()
{
    return this->txtBoxName;
}

System::String^ MyMap::getTxtBoxText()
{
    return this->txtBoxText;
}

System::Void MyMap::setTextBoxName(System::String^ txtBoxName)
{
    this->txtBoxName = txtBoxName;
}

System::Void MyMap::setTextBoxText(System::String^ txtBoxText)
{
    this->txtBoxText = txtBoxText;
}
