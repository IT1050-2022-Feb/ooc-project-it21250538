#include "Courier.h"
#include <cstring>
#include <iostream>
using namespace std;

Courier::Courier()
{
  courierId=0;
  strcpy(courierName,"");
}

Courier::Courier(int cId,char cName[])
{
  courierId=cId;
  strcpy(courierName,cName);
}

void Courier::assignAddress()
{
  
}

void Courier::displayCourierDetails()
{
  
}

Courier::~Courier()
{
  
}

