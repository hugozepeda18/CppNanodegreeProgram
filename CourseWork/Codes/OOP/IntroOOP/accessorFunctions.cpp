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
      // TODO: declare setters
    void setOwnerName(string n);
    void setAccountNumber(int a);
    void setAvailableFunds(float f);
      // TODO: declare getters
    string getOwnerName(void);
    int getAccountNumber(void);
    float getAvailableFunds(void);
    }
};

// TODO: implement setters
BankAccount::setOwnerName(string n):ownerName(n);
BankAccount::setAccountNumber(int a):accountNumber(a);
BankAccount::setAvailableFunds(float f):availableFunds(f);
// TODO: implement getters
BankAccount::getOwnerName(void){return ownerName};
BankAccount::getAccountNumber(void){return accountNumber};
BankAccount::getAvailableFunds(void){return availableFunds};

int main(){
    // TODO: instantiate and output a bank account
    BankAccount erika;
    erika.setOwnerName("Erika Perez Fernandez");
    erika.setAccountNumber(1);
    erika.setAvailableFunds(500);
}