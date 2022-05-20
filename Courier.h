#pragma once
class Courier
{
  private:
    int courierId;
    char courierName[20];
  public:
    Courier();
    Courier(int cId,char cName[]);
    void assignAddress();
    void displayCourierDetails();
    ~Courier();
};