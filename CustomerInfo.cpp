#include <iostream>
#include <string>
using namespace std;

struct customer
{
string name;
string address;
string city;
string state;
int zipCode;
long telephoneNumber;
float accountBalance;
string lastPaymentDate;
};

void search(customer array[], int size);

int main()
{
  customer array[10];

  for(int i = 0; i < 10; i++)
  {
    cout << "Please enter a name: ";
    cin >> array[i].name;
    cout << "Please enter an address: ";
    cin >> array[i].address;
    cout << "Please enter a city: ";
    cin >> array[i].city;
    cout << "Please enter a state: ";
    cin >> array[i].state;
    cout << "Please enter a zip code: ";
    cin >> array[i].zipCode;
    cout << "Please enter a telephone number: ";
    cin >> array[i].telephoneNumber;
    do
    {
      cout << "Please enter an account balance, must be positve: ";
      cin >> array[i].accountBalance;
    }
    while(array[i].accountBalance < 0);
    cout << "Please enter the date of the last payment: ";
    cin >> array[i].lastPaymentDate;
  }

  bool check = true;
  char answer;

  do
  {
    cout << "Would you like to change the data? (y/n) ";
    cin >> answer;
    if(answer == 'y' || answer == 'Y')
    {
      for(int i = 0; i < 10; i++)
      {
        cout << "Please enter a name: ";
        cin >> array[i].name;
        cout << "Please enter an address: ";
        cin >> array[i].address;
        cout << "Please enter a city: ";
        cin >> array[i].city;
        cout << "Please enter a state: ";
        cin >> array[i].state;
        cout << "Please enter a zip code: ";
        cin >> array[i].zipCode;
        cout << "Please enter a telephone number: ";
        cin >> array[i].telephoneNumber;
        cout << "Please enter an account balance: ";
        cin >> array[i].accountBalance;
        cout << "Please enter the date of the last payment: ";
        cin >> array[i].lastPaymentDate;
      }
    }
    else
    {
      check = false;
    }
  }
  while(check);

for(int i = 0; i < 10; i++)
{
  cout << "customer " << i + 1 << endl;
  cout << "Name: " << array[i].name << endl;
  cout << "Address: " << array[i].address << endl;
  cout << "City: " << array[i].city << endl;
  cout << "State: " << array[i].state << endl;
  cout << "Zip code: " << array[i].zipCode << endl;
  cout << "Telephone number: " << array[i].telephoneNumber << endl;
  cout << "Account balance: " << array[i].accountBalance << endl;
  cout << "Date of last payment: " << array[i].lastPaymentDate << endl << endl;
}

  search(array, 10);
  return 0;
}

void search(customer array[], int size)
{
  string name;
  bool index[10] = {false};
  size_t found;

  cout << "Please enter a name to search for: ";
  cin >> name;

  for(int i = 0; i < 10; i++)
  {
    found = array[i].name.find(name);
    if(found != string::npos)
    {
      index[i] = true;
    }
  }

  for(int i = 0; i < 10; i++)
  {
    if(index[i] == true)
    {
      cout << "customer " << i + 1 << endl;
      cout << "Name: " << array[i].name << endl;
      cout << "Address: " << array[i].address << endl;
      cout << "City: " << array[i].city << endl;
      cout << "State: " << array[i].state << endl;
      cout << "Zip code: " << array[i].zipCode << endl;
      cout << "Telephone number: " << array[i].telephoneNumber << endl;
      cout << "Account balance: " << array[i].accountBalance << endl;
      cout << "Date of last payment: " << array[i].lastPaymentDate << endl << endl;
    }
  }
}
