//problem1

/*#include <iostream>
using namespace std;

calculateTotal(double price, int quantity){
return price * quantity;
}

int main () {
int choice, quantity;
double total = 0.0;

do{
cout << "*****MENU*****" << endl;
cout << "1. Pizza - $10" << endl;
cout << "2. Burger - $8" << endl;
cout << "3. Salad - $5" << endl;
cout << "4. Exit" << endl;
cout << "Enter your choice:";
cin >> choice;
 if(choice == 4){
break;
}

double price = 0;

switch(choice){
case 1:
price = 10.0;
break;
case 2:
price = 8.0;
break;
case 3:
price = 5.0;
break;
default:
cout << "Invalid Choice!" << endl;

}

cout << "Enter quantity:"<<endl;
cin >> quantity;

total += calculateTotal(price, quantity);

}while(true);

cout <<  "Your total bill is: " << "$" <<  total << endl;
cout << "Thanks for ordering!!!" << endl;

return 0;
}*/


//problem2

/*#include <iostream>
using namespace std;

double computeParkingFee(int hours) {
 double fee = 0;
 if (hours <= 2) {
  fee = 0;
 }
 else if (hours <= 5) {
  fee = (hours - 2) * 2;
 }
 else {
  fee = (3 * 2) + (hours - 5) * 5;
 }
 return fee;
}

int main() {
 int hours;
 char processAnother;

 while (true) {
  cout << "Enter the number of hours parked:";
  cin >> hours;

  double fee = computeParkingFee(hours);
  cout << "The parking fee is: $" << fee << endl;

  cout << "Do you want to process another user? (Y/N):";
  cin >> processAnother;

  if (processAnother == 'n' || processAnother == 'N') {
   break;
  }
else if(processAnother == 'y' || processAnother == 'Y') {
 cout << "Enter the number of hours parked for another user:";
 cin >> hours;

 double fee = computeParkingFee(hours);
 cout << "The parking fee is: $" << fee << endl;
}
  cout << endl;
 }

 cout << "Thank you for using the Parking Fee Calculator!" << endl;
 return 0;
}*/


//problem3

/*#include <iostream>
using namespace std;

double deposit(double balance, double amount) {
 return balance + amount;
}

double withdrawal(double balance, double amount) {
 if (amount > balance) {
  cout << "Error: Insufficient funds!" << endl;
  return balance;
 }
 return balance - amount;
}

void balanceInquiry(double balance) {
 cout << "Current Balance: $" << balance << endl;
}

int main() {
 double balance = 500;
 int choice;
 double amount;

 do {
  cout << "Menu:" << endl;
  cout << "1. Deposit" <<endl;
  cout << "2. Withdraw" <<endl;
  cout << "3. Check Balance"<<endl;
  cout << "4. Exit"<<endl;
  cout << "Enter your choice:";
  cin >> choice;

  switch(choice) {
   case 1:
    cout << "Enter deposit amount:";
   cin >> amount;
   balance = deposit(balance, amount);
   cout << "Deposited: $" << amount << endl;
   break;
   case 2:
    cout << "Enter withdrawal amount:";
   cin >> amount;
   balance = withdrawal(balance, amount);
   break;
   case 3:
    balanceInquiry(balance);
   break;
   case 4:
    cout << "Exiting..."<<endl;
   break;
   default:
    cout << "Invalid choice! Please try again."<<endl;
  }
 } while (choice != 4);

 return 0;
}*/


//problem4


/*#include <iostream>
using namespace std;

calculateTotal(int price, int tickets){
return price * tickets;
}

int main(){
int tickets;
int total = 0;
int price;
int choice;
char option;

do {
cout << "****OPTIONS****"<<endl;
cout << "1. Movie A - $8"<<endl;
cout << "2. Movie B - $10"<<endl;
cout << "3. Movies C - $12"<<endl;
cout << "Enter your choice:"<<endl;
cin >> choice;

switch(choice){
case 1:
price = 8;
break;
case 2:
price = 10;
break;
case 3:
price = 12;
break;
default:
cout << "Invalid Choice!"<<endl;
}

cout << "Enter the number of tickets:"<<endl;
cin >> tickets;
total = calculateTotal(price, tickets);
cout << "Total Price:"<<total<<endl;

cout << "Do you want to book another movie? (Y/N)"<<endl;
cin >> option;
} while(option == 'Y' || option == 'y');
cout << "Thank you for booking!"<<endl;
return 0;
}*/


//problem5

/*#include <iostream>
using namespace std;

calculateTotal(int tickets, int price){
return price*tickets;}

int main(){

int tickets, choice;
int price;
int total = 0;
string city1, city2;

cout << "Enter your starting city and destination:"<<endl;
cin >> city1;
cin >> city2;

do{
cout << "1. Train X: $15"<<endl;
cout << "2. Train Y: $20" << endl;
cout << "3. Train Z: $25" << endl;
cout << "Select your train:"<<endl;
cin>> choice;


switch(choice){
case 1:
price = 15;
break;
case 2:
price = 20;
break;
case 3:
price=25;
break;
default:
cout<<"Wrong choice"<<endl;
}
if(choice <=3){
cout << "Enter the number of tickets:" <<endl;
cin>>tickets;


total = calculateTotal(tickets, price);

cout << "Total fare is: $"<<total<<endl;
}

}while(choice <=3);

return 0;

}*/


//problem6

/*#include <iostream>
#include <string>
using namespace std;

bool isStrongPassword(const string &password) {
 bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
 string specialChars = "!@#$%^&*()-+=<>?/{}[]|";

 if (password.length() < 8) return false;

 for (char ch : password) {
  if (isupper(ch)) hasUpper = true;
  else if (islower(ch)) hasLower = true;
  else if (isdigit(ch)) hasDigit = true;
  else if (specialChars.find(ch) != string::npos) hasSpecial = true;
 }

 return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
 string password;
 cin >> password;

 if (isStrongPassword(password)) cout << "Strong Password" << endl;
 else cout << "Weak Password" << endl;

 return 0;
}*/


//problem7

/*#include <iostream>
using namespace std;

bool isLeap(int y) {
 bool leap;
 if (y % 4 == 0) {
  if (y % 100 == 0) {
   if (y % 400 == 0)
    leap = true;
   else
    leap = false;
  } else {
   leap = true;
  }
 } else {
  leap = false;
 }
 return leap;
}

int maxDay(int m, int y) {
 int maxD;
 if (m == 2) {
  if (isLeap(y))
   maxD = 29;
  else
   maxD = 28;
 } else if (m == 4 || m == 6 || m == 9 || m == 11) {
  maxD = 30;
 } else {
  maxD = 31;
 }
 return maxD;
}

bool valid(int d, int m, int y) {
 bool isValid;
 if (m < 1 || m > 12)
  isValid = false;
 else if (d < 1 || d > maxDay(m, y))
  isValid = false;
 else
  isValid = true;
 return isValid;
}

void nextDate(int d, int m, int y, int &nd, int &nm, int &ny) {
 int maxD = maxDay(m, y);
 if (d < maxD) {
  nd = d + 1;
  nm = m;
  ny = y;
 } else {
  nd = 1;
  if (m == 12) {
   nm = 1;
   ny = y + 1;
  } else {
   nm = m + 1;
   ny = y;
  }
 }
}

int main() {
 int d, m, y;
 char cont;
 do {
  cout << "Enter day, month, year: ";
  cin >> d >> m >> y;

  if (!valid(d, m, y))
   cout << "Invalid date" << endl;
  else {
   int nd, nm, ny;
   nextDate(d, m, y, nd, nm, ny);
   cout << "Next date: " << nd << "/" << nm << "/" << ny << endl;
  }

  cout << "Try again (y/n): ";
  cin >> cont;
 } while (cont == 'y' || cont == 'Y');

 return 0;
}*/