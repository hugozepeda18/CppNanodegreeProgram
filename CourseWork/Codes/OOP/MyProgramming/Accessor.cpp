#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
  private:
      // TODO: declare member variables
    string ownerName;
    int accountNumber;
    float availableFunds;

  public:
    BankAccount(string oN,int aN, float aF);
      // TODO: declare setters
    void setOwnerName(string n);
    void setAccountNumber(int a);
    void setAvailableFunds(float f);
      // TODO: declare getters
    string getOwnerName(void);
    int getAccountNumber(void);
    float getAvailableFunds(void);
};

BankAccount::BankAccount(string oN,int aN, float aF){
    setOwnerName(oN);
    setAccountNumber(aN);
    setAvailableFunds(aF);
}

// TODO: implement setters
void BankAccount::setOwnerName(string n) {
    ownerName = n;
};
void BankAccount::setAccountNumber(int a){
    accountNumber = a;
};
void BankAccount::setAvailableFunds(float f) {
    availableFunds = f;
};

// TODO: implement getters
string BankAccount::getOwnerName(void) {return ownerName;};
int BankAccount::getAccountNumber(void){return accountNumber;};
float BankAccount::getAvailableFunds(void){return availableFunds;};

int main(){
    // TODO: instantiate and output a bank account
    BankAccount erika("Erika Perez Fernandez",1,500);
}