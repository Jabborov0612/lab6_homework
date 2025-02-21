#include <iostream>
using namespace std;

int main() {
    //problem1.a

    /* int sum=0;

     for (int i = 1; i < 100; i++) {
         sum += i;
     }
     cout << sum << endl; */

    //problem1.b

    /* int sum = 0, i=1, n;

      cout << "Enter a positive integer: ";
     cin >> n;

 while (i<=n) {
     sum +=i;
     i++;
 }
 cout << sum<< endl;

     if (n<0) {
         cout<<"Enter a positive integer!!!";
     } else {
         cout<<sum<<endl;
     }*/


    //problem2.a

    /*int cnt=0;
        int num=2;
        cout << "First 10 prime numbers: ";

        for (; cnt < 10; num ++) {
            bool isPrime=true;
            for (int i = 2; i * i <= num ; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
                if (isPrime) {
                    cout << num<<" ";
                    cnt++;
                }

        }*/

    //problem2.b

    /* int n;
     cout << "Enter the number of prime numbers: ";
     cin >> n;

     int count = 0, num = 2;

     while (count < n) {
         bool isPrime = true;
         if (num < 2) isPrime = false;
         for (int i = 2; i * i <= num; i++) {
             if (num % i == 0) {
                 isPrime = false;
                 break;
             }
         }

         if (isPrime) {
             cout << num << " ";
             count++;
         }
         num++;
     }

     cout << endl;*/



    //problem3

    /*int n;

        cout << "Enter a positive integer: " << endl;
        cin >> n;

       while (n!=1) {
           if (n %2 ==0){
               n=n/2;
               cout << n << " ";
           } else {
               n=n*3+1;
               cout << n << " ";
           }
       }*/

    //problem4

    /* int n, k=0;

     cout << "Enter a positive integer: ";
     cin >> n;

     while (n>0) {
        n = n /= 10;
         k++;
     }
     cout << k; */

    //problem5

    /* int n;

     cout << "Enter a positive integer:";
     cin >> n;

     while (n>0) {
         cout << n % 10 << " ";
         n = n/=10;
     }*/

    //problem6

    /*int a, b;
cout << "Please enter two numbers:" << endl;
    cin >> a >> b;

    while (a != b) {
        if (a > b) {
            a = a - b;
        }else if (a < b) {
            b = b - a;
        }
    }
    cout << a << endl;*/

    //problem7

    /* int n, sum = 0, cnt = 0;


     while (sum <=100) {
         cout << "Enter a number:";
         cin >> n;

         sum = sum + n;
         cnt++;
     }
     if (sum >= 100) {
         cout << "Sum exceeded 100!!!"<< endl;
     }
     cout << "Total sum: " << sum << endl;
 cout << "Total numbers entered: " << cnt << endl; */


    //problem8

    /*int balance=500, n;

    while (balance>=0) {
        cout << "Enter withdrawal amount (or 0 to cancel):" << endl;
        cin >> n;

        balance=balance-n;
        cout << "Remaining balance: " << "$"<<balance<< endl;
        if (balance<0) {
            cout << "Insufficient funds";
        }
     else if (n>500) {
    cout << "Error";
}
        else if (n=0) {
            cout << "Cancelled";
        }

    }*/

    //problem9
    /*char response;
        do {
            cout << "Enter 'Y' or 'N':" << endl;
            cin >> response;

        }while (response != 'Y' && response != 'N') ;
        if (response == 'Y' || response == 'N') {
            cout << "Accepted";
        }*/


    //problem10

    /* int choice;

     cout << "******ATM MENU******"<< endl;
     cout << "1. Check your balance"<< endl;
     cout << "2. Withdraw money"<<endl;
     cout << "3. Deposit money"<<endl;
     cout << "4. Exit"<< endl;
     cin >> choice;

     do {
         switch (choice) {
             case 1:
                 cout << "Processing..." << endl;
             break;
             case 2:
                 cout << "Processing..." << endl;
             break;
             case 3:
                 cout << "Processing..." << endl;
             break;
             case 4:
                 cout << "Goodbye!"<<endl;
         }
     }while (choice == 1 && choice == 2 && choice == 3) ; */


    //problem11

    /*int choice;
   double num1, num2;

    do {
        cout << "Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice:";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers:";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
            break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
            break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
            break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
            break;
            case 5:
                cout << "Exiting program..." << endl;
            break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);*/

    //problem12

    /* int attempt=0;
     string password = "qwerty123", input;

     do {
         cout<<"Enter the password:" << endl;
         cin >> input;

             if (input == password) {
                 cout<<"Password is Correct" << endl;
                 break;
             }
             attempt++;
         cout << "Incorrect"<<endl;
         if (attempt > 3) {
             cout<<"Too many attempts"<<endl;
             break;
         }

     }while (input != password);*/



    //problem13

  /* int guess, num=7;

    do {
        cout << "Guess the number:";
        cin >> guess;

        if (guess > num) {
            cout << "Too high! Try again." << endl;
        } else if (guess < num) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations!" << endl;
        }
    } while (guess != num);
}*/






