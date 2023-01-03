

#include <iostream>
#include <queue>
#include <exception>
#include <ctime>
#include <windows.h>

// DATA STRUCTURES USED

// CLASSES AND OBJECTS
// INHERITANCE
// STRUCT
// QUEUE
// EXCEPTION HANDLING
//
using namespace std;

// BASE CLASS INHERITANCE
class Menu {
 public:

     void menuText() {

         system("Color 0A");
         system("cls");

        cout << "\n\n\n" ;
        cout << "\t\t\t\t    +------------------------------------------------+" << endl;
        cout << "\t\t\t\t    |            FAST FOOD ORDERING SYSTEM           |" << endl;
        cout << "\t\t\t\t    +------------------------------------------------+\n\n" << endl;

        cout << "\t\t\t\t\t\t+------------------------+" << endl;
        cout << "\t\t\t\t\t\t|          MENU          |" << endl;
        cout << "\t\t\t\t\t\t+------------------------+\n\n" << endl;
        cout << "\t\t[1] Burger .... Php 50      [6] Soup ...... Php 125       [11] Onion Rings .... Php 125" << endl;
        cout << "\t\t[2] Fries ..... Php 20      [7] Steak ..... Php 245       [12] Beef Shawarma .. Php 100" << endl;
        cout << "\t\t[3] Pizza ..... Php 120     [8] Salad ..... Php 130       [13] Doughnut ....... Php 30 " << endl;
        cout << "\t\t[4] Spaghetti . Php 75      [9] Sushi ..... Php 175       [14] Seafood ........ Php 260" << endl;
        cout << "\t\t[5] Macaroni .. Php 80     [10] Kimchi .... Php 155       [15] Sandwich ....... Php 30\n\n" << endl;

        cout << "\t\t\tPress 0 to exit" << endl;
     }
};

// INHERITANCE
class Ordering: public Menu {

 public:
        string input, admin, pass;
        int selected, count, restart, foodQuantity = 0, totalAmount = 0;
        char op, option;

        //USER DEFINED DATATYPE
        struct Foods {
            string foodName;
            int price;
        };

        queue<Foods> storeFoods; // Food Name queue
        queue<int> foodQuantityStore; // Quantity queue


    void ordering(){

        start:// goto function
        back:
        cout << "\n\n\t\tEnter Your Order:  "; cin >> selected;

        // CONTROL STRUCTURE
        switch (selected){

            //==================================
            case 1:
                cout << "\n\t\tOrder: Burger...Php 50" << endl;
                cout << "\n\t\tOrder Quantity: ";
                // To validate if the input is integer

            while(!(cin >> foodQuantity)) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\nPlease put a number!";
                }
                // confirmation function
                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){
                    struct Foods one;
                    one.foodName = "Burger";
                    one.price = 50;
                    storeFoods.push(one); // for food queue
                    foodQuantityStore.push(foodQuantity); // quantity
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }
                break;
          //===============================
            case 2:
                cout << "\n\t\tOrder: Fries.....Php 20" << endl;
                cout << "\n\t\tOrder Quantity: ";
                while(!(cin >> foodQuantity)) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\nPlease put a number!";
                }
                cout << "\n\t\tConfirm ?(y/n): " << endl; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods two;
                    two.foodName = "Fries";
                    two.price = 20;

                    storeFoods.push(two);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }
                break;
            //=============================
            case 3:
                cout << "\n\t\tOrder: Pizza..... Php 120" << endl;
                cout << "\n\t\tOrder Quantity: ";
                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }
                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods three;
                    three.foodName = "Pizza";
                    three.price = 120;

                    storeFoods.push(three);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }
                break;
            //==============================
            case 4:
                cout << "\n\t\tOrder: Spaghetti... Php 75" << endl;
                cout << "\n\t\tOrder Quantity: ";
                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }
                    cout << "n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods four;
                    four.foodName = "Spaghetti";
                    four.price = 75;

                    storeFoods.push(four);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }
                break;
            //================================
            case 5:
                cout << "\n\t\tOrder: Macaroni... Php 80" << endl;
                cout << "\n\t\tOrder Quantity: ";

                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }

                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods five;
                    five.foodName = "Macaroni";
                    five.price = 80;

                    storeFoods.push(five);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }
                break;
            //================================
            case 6:
                cout << "\n\t\tOrder: Soup ...... Php 125" << endl;
                cout << "\n\t\tOrder Quantity: ";
                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\n\t\tPlease put a number!";
                    }

                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods six;
                    six.foodName = "Soup";
                    six.price = 125;

                    storeFoods.push(six);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }
                break;
            //================================
            case 7:
                cout << "\n\t\tOrder: Steak ..... Php 245" << endl;
                cout << "\n\t\tOrder Quantity: ";
                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }
                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods seven;
                    seven.foodName = "Steak";
                    seven.price = 245;

                    storeFoods.push(seven);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }

                break;

            //================================
            case 8:
                cout << "\n\t\tOrder: Salad ..... Php 130" << endl;
                cout << "\n\t\tOrder Quantity: ";
                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }
                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods eight;
                    eight.foodName = "Salad";
                    eight.price = 130;

                    storeFoods.push(eight);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }

                break;

            //================================
            case 9:
                cout << "\n\t\tOrder: Sushi ..... Php 175" << endl;
                cout << "\n\t\tOrder Quantity: ";
                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }

                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods nine;
                    nine.foodName = "Sushi";
                    nine.price = 175;

                    storeFoods.push(nine);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }

                break;

            //================================
            case 10:
                cout << "\n\t\tOrder: Kimchi .... Php 155" << endl;
                cout << "\n\t\tOrder Quantity: ";
                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }
                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods ten;
                    ten.foodName = "Kimchi";
                    ten.price = 155;

                    storeFoods.push(ten);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }

                break;

            //================================
            case 11:
                cout << "\n\t\tOrder: Onion Rings .... Php 125" << endl;
                cout << "\n\t\tOrder Quantity: ";

                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }
                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods eleven;
                    eleven.foodName = "Onion Rings";
                    eleven.price = 125;

                    storeFoods.push(eleven);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }

                break;

            //================================
            case 12:
                cout << "\n\t\tOrder: Beef Shawarma .. Php 100" << endl;
                cout << "\n\t\tOrder Quantity: ";

                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }
                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods eleven;
                    eleven.foodName = "Beef Shawarma";
                    eleven.price = 100;

                    storeFoods.push(eleven);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }

                break;


            //================================
            case 13:
                cout << "\n\t\tOrder: Doughnut ....... Php 30" << endl;
                cout << "\n\t\tOrder Quantity: ";

                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }
                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods thirteen;
                    thirteen.foodName = "Doughnut";
                    thirteen.price = 30;

                    storeFoods.push(thirteen);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }

                break;

            //================================
            case 14:
                cout << "\n\t\t Order: Seafood ........ Php 260" << endl;
                cout << "\n\t\t Order Quantity: ";
                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }
                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods fourteen;
                    fourteen.foodName = "Seafood";
                    fourteen.price = 260;

                    storeFoods.push(fourteen);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }

                break;

            //================================
            case 15:
                cout << "\n\t\t Order: Sandwich ....... Php 30" << endl;
                cout << "\n\t\t Order Quantity: ";
                while(!(cin >> foodQuantity)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease put a number!";
                    }
                cout << "\n\t\tConfirm ?(y/n): "; cin >> option;
                if (option == 'Y' || option == 'y'){

                    struct Foods fifteen;
                    fifteen.foodName = "Sandwich";
                    fifteen.price = 30;

                    storeFoods.push(fifteen);
                    foodQuantityStore.push(foodQuantity);
                    cout << "\n\t\tOrder Successfully Saved!!"<< endl;
                }
                else
                {
                    goto start;
                }

                break;

            //================================
            case 0:
                exit (0);
                break;

            //================================
            default:
                cout << "\n\t\t\t Wrong Input" << endl;
                goto start;
                break;
        }

         cout << "\n\t\tOrder Another?(y/n): "; cin >> op;
                    if (op == 'Y' || op == 'y')
                    {
                        menuText();
                        goto back;
                    }
                    else
                    {
                        cout << "\n\n\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
                            for (int a = 1; a < 5; a++)
                            {
                            Sleep(500);
                            cout << "...";
                            }
                            cout << "\n\t\t\t";
                            system("PAUSE"); // press enter key to continue

                    }



    };

void currentDateTime()
    {
    time_t now = time(0); //current time
    tm *ltm = localtime(&now);// date

    char date[20];
    char time[20];
  // Format the date and time
  //strftime string format time
    strftime(date, sizeof(date), "%B %d, %Y", ltm);
    strftime(time, sizeof(time), "%I:%M %p", ltm);

    cout << "Date: " << date << endl;
    cout << "\t\tTime: " << time << endl;
    }

    void billReceipt(){
        system("cls");
        cout << "\n\n     +---------------------------------------------+" << endl;
        cout << "     |                BILL RECEIPT                 |" << endl;
        cout << "     +---------------------------------------------+" << endl;
        cout << "          "; currentDateTime();
        cout << "     +=============================================+" << endl;
        cout << "                      ORDERED FOODS"                  << endl;

        // display of queues
        while (!storeFoods.empty())
        {
            cout << "\n       " << storeFoods.front().foodName << " = " << foodQuantityStore.front() << "  x ---- Php " << storeFoods.front().price << endl;
            totalAmount += (storeFoods.front().price * foodQuantityStore.front());
            storeFoods.pop();
            foodQuantityStore.pop();

        }

        cout << "\n      TOTAL AMOUNT:Php " << totalAmount << endl;
        cout << "      +============================================+\n\n"      << endl;



     cout << "\n\t\tPress 1 to restart the program:" << endl;
     cout << "\t\tPress 0 to exit the program:" << endl;
       cin >> restart;
      if (restart = 1){
         show();
      }
      if (restart = 0){
         exit(0);
      }
        else{

        }
    }

    void show(){ // sequence program
    menuText();
    ordering();
    billReceipt();
    }
};

class Login_Page: public Ordering{
public:

void login()
    {
        cout <<"\n\n\t\t\t +---------------------------------------------------------+" << endl;
        cout <<"\t\t\t |            Welcome To Fast Food Ordering System         |" << endl;
        cout <<"\t\t\t +---------------------------------------------------------+" << endl;



        cout << "\n\t\t\tEnter Administrator: ";
        cin >> admin;
        cout << "\t\t\tEnter Password: ";
        cin >> pass;

        try {
        if (admin != "admin" || pass != "1234")
        {
            throw runtime_error("Invalid username or password");
        }
        else {
            cout << endl;
            system("pause");
            show();
        }
    }
        catch (const exception& e){
            system("cls");
            cout << "\n\t\t\t\tError: " << e.what() << endl;
            login();
        }
    }

    };


int main()
{
    Login_Page order;// class login
    order.login(); // void login
    return 0;
}

