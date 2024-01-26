#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();


class Management
{
    public:

    Management()
        {
            mainMenu();
        }
    
};

class Details
{
    public:
    static string name,gender;
    long int phoneno;
    int age;
    string address;
    static int CID;
    char arr[100];

    void information()
    {
        cout<<"\nEnter the customer ID:";
        cin>>CID;
        cout<<"\nEnter the name :";
        cin>>name;
        cout<<"\nEnter the age:";
        cin>>age;
        cout<<"\nAddress :";
        cin>>address;
        cout<<"\nEnter the phone number :";
        cin>>phoneno;
        cout<<"\nGender";
        cin>>gender;
        cout<<"Your details are saved with us\n"<<endl;


    }
};

int Details::CID;
string Details::name;
string Details::gender;

class Registration
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[]={"Dubai","UK","USA","Canada","Singapore","Australia"};

        for(int a=0;a<6;a++)
        {
            cout<<(a+1)<<".flights to"<<flightN[a]<<endl;
        }
        cout<<"\nWelcome to the airlines"<<endl;
        cout<<"Press the number of the country of which you want to book the flight";
        cin>>choice;

        switch(choice)

        {
            case 1 :
            {
                cout<<"__________welcome to Emirates__________\n"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1.DUB-123"<<endl;
                cout<<"01-01-2023 8:00am 4hrs Rs.10000"<<endl;
                cout<<"2.DUB-456"<<endl;
                cout<<"02-01-2023 8:00am 4hrs Rs.12000"<<endl;
                cout<<"3.DUB-789"<<endl;
                cout<<"03-01-2023 8:00am 4hrs Rs.13000"<<endl;

                cout<<"Select the flight you want to book:";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=10000;
                    cout<<"\nYou have successfully booked the flight DUB-123"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=12000;
                    cout<<"\nYou have successfully booked the flight DUB-456"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=13000;
                    cout<<"\nYou have successfully booked the flight DUB-789"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid Input ,shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }

            }
            case 2:
            {
                cout<<"__________Welcome to Canadian Airlines___________\n"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1.CA-123"<<endl;
                cout<<"01-01-2023 8:00am 4hrs Rs.10000"<<endl;
                cout<<"2.CA-456"<<endl;
                cout<<"02-01-2023 8:00am 4hrs Rs.12000"<<endl;
                cout<<"3.CA-789"<<endl;
                cout<<"03-01-2023 8:00am 4hrs Rs.13000"<<endl;

                cout<<"Select the flight you want to book:";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=10000;
                    cout<<"\nYou have successfully booked the flight CA-123"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=12000;
                    cout<<"\nYou have successfully booked the flight CA-456"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=13000;
                    cout<<"\nYou have successfully booked the flight CA-789"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid Input ,shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 3:
            {
                cout<<"__________welcome to Singapore Airlines__________\n"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1.SUG-123"<<endl;
                cout<<"01-01-2023 8:00am 4hrs Rs.10000"<<endl;
                cout<<"2.SUG-456"<<endl;
                cout<<"02-01-2023 8:00am 4hrs Rs.12000"<<endl;
                cout<<"3.SUG-789"<<endl;
                cout<<"03-01-2023 8:00am 4hrs Rs.13000"<<endl;

                cout<<"Select the flight you want to book:";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=10000;
                    cout<<"\nYou have successfully booked the flight SUG-123"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=12000;
                    cout<<"\nYou have successfully booked the flight DUB-456"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=13000;
                    cout<<"\nYou have successfully booked the flight DUB-789"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid Input ,shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 4:
            {
                 cout<<"__________Welcome to USA Airlines___________\n"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1.USA-123"<<endl;
                cout<<"01-01-2023 8:00am 4hrs Rs.10000"<<endl;
                cout<<"2.USA-456"<<endl;
                cout<<"02-01-2023 8:00am 4hrs Rs.12000"<<endl;
                cout<<"3.USA-789"<<endl;
                cout<<"03-01-2023 8:00am 4hrs Rs.13000"<<endl;

                cout<<"Select the flight you want to book:";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=10000;
                    cout<<"\nYou have successfully booked the flight USA-123"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=12000;
                    cout<<"\nYou have successfully booked the flight USA-456"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=13000;
                    cout<<"\nYou have successfully booked the flight USA-789"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid Input ,shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 5:
            {
                 cout<<"__________Welcome to UK Airlines___________\n"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1.UK-123"<<endl;
                cout<<"01-01-2023 8:00am 4hrs Rs.10000"<<endl;
                cout<<"2.UK-456"<<endl;
                cout<<"02-01-2023 8:00am 4hrs Rs.12000"<<endl;
                cout<<"3.UK-789"<<endl;
                cout<<"03-01-2023 8:00am 4hrs Rs.13000"<<endl;

                cout<<"Select the flight you want to book:";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=10000;
                    cout<<"\nYou have successfully booked the flight UK-123"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=12000;
                    cout<<"\nYou have successfully booked the flight UK-456"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=13000;
                    cout<<"\nYou have successfully booked the flight UK-789"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid Input ,shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 6:
            {
                 cout<<"__________Welcome to Australian Airlines___________\n"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1.AUS-123"<<endl;
                cout<<"01-01-2023 8:00am 4hrs Rs.10000"<<endl;
                cout<<"2.AUS-456"<<endl;
                cout<<"02-01-2023 8:00am 4hrs Rs.12000"<<endl;
                cout<<"3.AUS-789"<<endl;
                cout<<"03-01-2023 8:00am 4hrs Rs.13000"<<endl;

                cout<<"Select the flight you want to book:";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=10000;
                    cout<<"\nYou have successfully booked the flight AUS-123"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=12000;
                    cout<<"\nYou have successfully booked the flight AUS-456"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=13000;
                    cout<<"\nYou have successfully booked the flight AUS-789"<<endl;
                    cout <<"You can go back to the main menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid Input ,shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to the main menu:"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            default:
            {
                cout<<"Invalid input,shifting to the main menu"<<endl;
                mainMenu();
                break;
            }
        }
    }
};

float Registration::charges;
int Registration::choice;

class Ticket:public Registration,Details
{
    public:

    void bill()
    {
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"______________Rock Airlines___________"<<endl;
            outf<<"________________Ticket______________"<<endl;
            outf<<"______________________________________"<<endl;
            outf<<"CustomerID:"<<Details::CID<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if(Registration::choice==1)
            {
                destination="Dubai";
            }
            else if(Registration::choice==2)
            {
                destination="Canada";
            }
            else if(Registration::choice==3)
            {
                destination="Singapore";
            }
            else if(Registration::choice==4)
            {
                destination="USA";
            }
            else if(Registration::choice==5)
            {
                destination="UK";
            }
            else if(Registration::choice==6)
            {
                destination="Paris";
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost: \t\t"<<Registration::charges<<endl;

        }
        outf.close();
    }

    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"File Error"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t           Rock Airlines \n"<<endl;
    cout<<"\t__________________Main Menu______________"<<endl;
    cout<<"\t_________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;

    cout<<"\t|Press 1 to add the Customer Details   \t|"<<endl;
    cout<<"\t|Press 2 to for Flight Registration    \t|"<<endl;
    cout<<"\t|Press 3 to for Ticket and Charge    \t|"<<endl;
    cout<<"\t|Press 4 to exit                     \t|"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;
    cout<<"\t____________________________________________"<<endl;

    cout<<"Enter the choice: ";
    cin>>lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch(lchoice)
    {
        case 1:
        {
            cout<<"____________Customers________________"<<endl;
            d.information();
            cout<<"Press any key to go back to the main menu";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else{
                mainMenu();

            }
            break;

        }

        case 2:
        {
            cout<<"___________Book Flight using this system__________"<<endl;
            r.flights();
            break;
        }

        case 3:
        {
            cout<<"_______Get your ticket__________"<<endl;
            t.bill();

            cout<<"your ticket is printed,you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket";

            cin>>back;
            if(back==1)
            {
                t.dispBill();
                cout<<"Press any key to go back to the main menu:";
                cin>>back;
                if(back==1)
                {
                    mainMenu();

                }
                else{
                    mainMenu();

                }
            }
            else{
                mainMenu();
            }
            break;
        }

        case 4:
        {
            cout<<"\n\n\t_________Thank You_________"<<endl;
            break;
        }

        default:
        {
            cout<<"Invalid input,please try again\n"<<endl;
            mainMenu();
            break;
        }
    }


}

int main()
{
    Management Mobj;
    return 0;
}