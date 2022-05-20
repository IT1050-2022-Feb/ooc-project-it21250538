#include "Payment.h"
#include<cstring>
#include <iostream>
using namespace std;

Payment::Payment()
{
  strcpy(payType,"");
  payID=0;
  amount=0.0;
}

Payment::Payment(char type[],int pId,float amount)
{
  strcpy(payType,type);
  payID=pId;
  amount=amount;
}

void Payment::viewPaymentdetails()
{
  
}

void Payment::viewAmount()
{
  
}

Payment::~Payment()
{
  
}