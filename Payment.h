#pragma once
class Payment
{
private:
  char payType[20];
  int payID;
  float amount;

public:
  Payment();
  Payment(char paytype[],int payID,float amount);
  void viewPaymentdetails();
  void viewAmount();
  ~Payment();
};