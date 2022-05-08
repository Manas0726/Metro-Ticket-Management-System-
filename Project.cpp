#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <ctime>
#include <iomanip>
using namespace std;

// base class
class ticket_booking
{

public:
    string location;
    string destination;
    int pass, total;

    // location function
    void loc()
    {

        cout << "\t\t\t ---------------:Enter Your Location:--------------- " << endl;
        cout << "\t\t\t                   1.Khapri                         " << endl;
        cout << "\t\t\t                   2.Airport                     " << endl;
        cout << "\t\t\t                   3.Chhatrapati                            " << endl;
        cout << "\t\t\t                   4.Ajni                       " << endl;
        cout << "\t\t\t                   5.Zero_Mile                       " << endl;
        cout << "\t\t\t                   6.Kasturchand_Park                " << endl;

        cin >>          location;

        if (location == "Khapri")
        {
            des();
        }
        else if (location == "Airport")
        {
            des();
        }
        else if (location == "Chhatrapati")
        {
            des();
        }
        else if (location == "Ajni")
        {
            des();
        }
        else if (location == "Zero_Mile")
        {
            des();
        }
        else if (location == "Kasturchand_Park")
        {
            des();
        }
        else
        {
            cout << "\n\t\t\tPlease enter the above stations only!!! \n" << endl;
            getch();
            loc();
        }
    }

    void des()
    {

        cout << "\t\t\t ---------------:Enter Your Destination:---------------" << endl;
        cout << "\t\t\t                   1.Khapri                         " << endl;
        cout << "\t\t\t                   2.Airport                     " << endl;
        cout << "\t\t\t                   3.Chhatrapati                            " << endl;
        cout << "\t\t\t                   4.Ajni                       " << endl;
        cout << "\t\t\t                   5.Zero Mile                       " << endl;
        cout << "\t\t\t                   6.Kasturchand Park                " << endl;

        cin >>                destination;

        if (destination == "Khapri")
        {
            showlocdes();
        }
        else if (destination == "Airport")
        {
            showlocdes();
        }
        else if (destination == "Chhatrapati")
        {
            showlocdes();
        }
        else if (destination == "Ajni")
        {
            showlocdes();
        }
        else if (destination == "Zero_Mile")
        {
            showlocdes();
        }
        else if (destination == "Kasturchand_Park")
        {
            showlocdes();
        }
        else
        {
            cout << "\n\t\t\tPlease enter the above stations only!!! \n" << endl;
            getch();
            des();
        }
    }
    // showing location and destination
    void showlocdes()
    {
        cout << "\n\t\t\t Your Entered Location And Destination: \n\n";
        cout <<"\t\t\t\t\t|"<<location << "-" << destination <<"|\n\n";
             

        cout << "\n\t\t\t\t\t Enter Number Of Passenger's: ";
        cin >>                    pass;

        total = pass * 10;

        cout << "\n\t\t\t Your Total Fare is:  " << total <<"\n"<< endl;
    }

    void sleep_fun()
    {
        int i;
        int ac_no;
        char name[10];

        cout << "\t\t\t  Enter Account Number\n";
        cin >> ac_no;

        cout << "\t\t\t Account Holder Name: ";
        cin >> name;
        cout << "\t\t\t Payment Under Process";

        for (i = 0; i < 5; i++)
        {
            cout << ".";
            Sleep(1000);
        }
        cout << "\t\t\t \nYour Payment is successfull";
    }

    void net_banking()
    {
        int bank;

        int i = 0;

        cout << "You Have Choose Net Banking As a Payment Method: \n";

        cout << "\t\t\t ____________________BANK__________________\n";
        cout << "\t\t\t           1.Bank Of India                 \n";
        cout << "\t\t\t           2.State Bank Of India           \n";
        cout << "\t\t\t           3.Punjab National Bank          \n";
        cout << "\t\t\t           4.ICICI Bank                    \n";
        cout << "\t\t\t           5.HDFC Bank                     \n";
        cout << "\t\t\t           6.IPPB Bank                     \n";
        cout << "\t\t\t           7.UCO                           \n";
        cout << "\t\t\t           8.YES Bank                      \n";
        cout << "\t\t\t           9.Bank Of Maharashtra           \n";
        cout << "\t\t\t           10.Bank Of Baroda               \n";
        cin >> bank;

        switch (bank)
        {
        case 1:

            cout << "\t\t\t Your Bank Is Bank Of India" << endl;
            sleep_fun();

            break;

        case 2:
            cout << "\t\t\t Your Bank Is State Bank Of India" << endl;
            sleep_fun();
            break;

        case 3:
            cout << "\t\t\t Your Bank Is Punjab National Bank" << endl;

            sleep_fun();
            break;

        case 4:
            cout << "\t\t\t Your Bank Is ICICI Bank" << endl;

            sleep_fun();
            break;

        case 5:
            cout << "\t\t\t Your Bank Is HDFC Bank" << endl;

            sleep_fun();
            break;

        case 6:
            cout << "\t\t\t Your Bank Is IPPB Bank" << endl;

            sleep_fun();
            break;

        case 7:
            cout << "\t\t\t Your Bank Is UCO" << endl;

            sleep_fun();
            break;

        case 8:
            cout << "\t\t\t Your Bank Is YES Bank" << endl;

            sleep_fun();
            break;

        case 9:
            cout << "\t\t\t Your Bank Is: Bank Of Maharashtra" << endl;

            sleep_fun();
            break;

        case 10:
            cout << "\t\t\t Your Bank Is: Bank Of Baroda" << endl;

            sleep_fun();
            break;
        default:

            cout << "\t\t\t Choice Not Found!!!\n";
            cin >> bank;
            break;
        }
    }

    void upi()
    {
        int upi_id, i;
        cout << "\n\t\t\t Enter Your UPI ID: ";
        cin >> upi_id;
        cout << "\n\t\t\t Payment Under Process";
        for (i = 0; i < 5; i++)
        {
            cout << ".";
            Sleep(2000);
        }
        cout << "\n\t\t\t Your Payment is successfull\n";
    }

    void credit_info()
    {

        int cc_no;
        int cvv;
        int val, i;

        cout << "\n\t\t\t Enter Your Valid Card No: \n";
        cin >> cc_no;
        cout << "\n\t\t\t Enter CVV: \n";
        cin >> cvv;
        cout << "\n\t\t\t Enter Validity Of Card: \n";
        cin >> val;
        cout << "\n\t\t\t Payment Under Process";
        for (i = 0; i < 5; i++)
        {
            cout << ".";
            Sleep(2000);
        }
        cout << "\n\t\t\t Your Payment is successfull\n";

        cout << "\n\t\t\t Press Enter to Display Ticket\n";
        getch();
    }

    void cdc()
    {
        int cc_no;
        int cvv;
        int val;
        int opt;
        int i = 0;

        cout << " __________________________\n";
        cout << "|\t\t\t Choose Your Card   |\n";
        cout << "|==========================|\n";
        cout << "|\t\t\t    1.VISA          |\n";
        cout << "|\t\t\t    2.MasterCard    |\n";
        cout << "|\t\t\t    3.RuPay         |\n";
        cout << "|\t\t\t    4.Contactless   |\n";
        cout << "|\t\t\t    5.Maestro       |\n";
        cout << "|__________________________|\n";
        cin >> opt;

        switch (opt)
        {
        case 1:

            cout << "\n\t\t\t Your Card is VISA\n";

            credit_info();
            break;

        case 2:

            cout << "\n\t\t\t Your Card is MasterCard\n";
            credit_info();
            break;

        case 3:

            cout << "\n\t\t\t Your Card is Rupay\n";
            credit_info();
            break;

        case 4:

            cout << "\n\t\t\t Your Card is Contactless\n";
            credit_info();
            break;

        case 5:

            cout << "\n\t\t\t Your Card is Maestro\n";
            credit_info();
            break;

        default:
            break;
        }
    }

    void fare()
    {
        int method;

        int amount = 10;
        cout << "\t\t\t______________________________________\n";
        cout << "\t\t\t|                                    |\n";
        cout << "\t\t\t|           PAYMENT METHOD           |\n";
        cout << "\t\t\t|____________________________________|\n";
        cout << "\t\t\t|        1. Net Banking              |\n";
        cout << "\t\t\t|        2. UPI                      |\n";
        cout << "\t\t\t|        3. Credit/Debit Card        |\n";
        cout << "\t\t\t|        4. Cash                     |\n";
        cout << "\t\t\t|____________________________________|\n";
        cin >> method;
        // Net Banking
        switch (method)
        {
        case 1:

            return net_banking();
            break;

        case 2:
            return upi();
            break;

        case 3:
            return cdc();
            break;

        case 4:
            cout<<"Pay The Fare On the Counter & Have A Good Journey \n";
            break;

        default:

            cout << "\n\t\t\tNot a Valid Choice. \n";
            cout << "\n\t\t\tChoose again.\n";
            break;
        }

        
    }
};

class display_ticket : public ticket_booking
{
protected:
    static int id;
    time_t now = time(0);
    char *dt = ctime(&now);

public:
    void show()
    {
        id++;

        cout<<"\n\nPress Enter To Print Ticket!!!\n";
        getch();
        cout << "\t\t\t>>>>>>>>>>>>>>>>>>>>> Your Ticket is Here <<<<<<<<<<<<<<<<<<<<<<<<< \n";
        cout << "\n";
        cout << "\t\t\t_______________________________________________________________________________\n";
        cout << "\t\t\t|                              *NAGPUR METRO*                                 |\n";
        cout << "\t\t\t|_____________________________________________________________________________|\n";
        cout << "\t\t\t|                                                                             |\n";
        cout << "\t\t\t|   Date and time of booking: " << dt<<"                        |\n";
        cout << "\t\t\t|                         ID: " << id<<"                                               |\n";
        cout << "\t\t\t|                       From: " << location<<"                                          |\n";
        cout << "\t\t\t|                         To: " << destination<<"                                            |\n";
        cout << "\t\t\t|           No. of passenger: " << pass<<"                                               |\n";
        cout << "\t\t\t|                      Price: " << total<<"                                              |\n";
        cout << "\t\t\t|-----------------------------------------------------------------------------|\n";
        cout << "\t\t\t| NOTE : The validity of ticket is next 24hrs after booking.                  |\n";
        cout << "\t\t\t|_____________________________________________________________________________|\n\n\n";
    }
};
int display_ticket::id;
class display_status
{
public:
    display_status()
    {
        cout << "\t\t\t|========================================================================================|\n";
        cout << "\t\t\t|                                                                                        |\n";
        cout << "\t\t\t|------------------------KHAPRI TO KASTURCHAND PARK METRO TIMING-------------------------|\n";
        cout << "\t\t\t|                                                                                        |\n";
        cout << "\t\t\t|========================================================================================|\n";
        cout << "\t\t\t|    STATION           | TRIP 1 | TRIP 2 | TRIP 3 | TRIP 4 | TRIP 5 | TRIP 6 | TRIP 7 |  |\n";
        cout << "\t\t\t|----------------------|--------|--------|--------|--------|--------|--------|--------|--|\n";
        cout << "\t\t\t| 1. KHAPRI            |  8:45  | 10:15  | 11:45  | 16:15  | 17:20  | 18:05  | 18:50  |  |\n";
        cout << "\t\t\t| 2. AIRPORT           |  8:54  | 10:24  | 11:54  | 16:24  | 17:30  | 18:15  | 19:05  |  |\n";
        cout << "\t\t\t| 3. CHHATRAPATI       |  9:01  | 10:31  | 12:01  | 16:40  | 17:35  | 18:20  | 19:14  |  |\n";
        cout << "\t\t\t| 4. AJNI              |  9:04  | 10:34  | 12:04  | 16:54  | 17:45  | 18:25  | 19:20  |  |\n";
        cout << "\t\t\t| 5. ZERO MILE         |  9:26  | 10:40  | 12:26  | 17:06  | 17:50  | 18:34  | 19:26  |  |\n";
        cout << "\t\t\t| 6. KASTURCHAND PARK  |  9:30  | 10:55  | 12:35  | 17:15  | 17:56  | 18:40  | 19:34  |  |\n";
        cout << "\t\t\t|========================================================================================|\n";
        cout << "\t\t\t|________________________________________________________________________________________|\n";
    }
};

class metro_pass : public ticket_booking
{
public:
    char f_name[10];
    char m_name[10];
    char l_name[10];
    char address[10];
    char a_num[10];
    int date;
    static int acc;

    void login()
    {
        int number = 1234567;
        int pass, i;
        string userid;

        cout << "\n\t\t\tEnter User Name: ";
        cin >>            userid;
        cout << "\n\t\t\tEnter password: ";
        cin >>            pass;
        if (pass == number && userid == "vedant" || userid == "rupesh" || userid == "manas" || userid == "sujit" || userid == "kaustubh")
        {
            cout << "\t\t\tLogging-In";
            for (i = 0; i < 4; i++)
            {
                cout << ".";
                Sleep(1000);
            }
            cout << "\n\t\t\t\nlogin successfully\n" << endl;
            cout << "\n\t\t\tPress Enter To Login!!!" << endl;
            getch();
        }

        else
        {
            cout << "\t\t\tERROR!!!!!" << endl;
            cout << "\t\t\t<<<<<<<<wrong username or password>>>>>>>>" << endl;
            cout << "\t\t\tPress Enter To Try Again!!!" << endl;
            getch();
            login();
        }
    }

    void card_fare()
    {
        cout << "\t\t\tApplicable charges for the MAHA Card would be as mentioned below:\n";

        cout << "\t\t\t___________________________________________________________________\n";
        cout << "\t\t\t                      CHARGES FOR METRO PASS                       \n";
        cout << "\t\t\t___________________________________________________________________\n";
        cout << "\t\t\t---Card Issuance Fee------------|------------Rs. 150---------------\n";
        cout << "\t\t\t---Annual Maintenance Charges---|------------Rs. 75----------------\n";
        cout << "\t\t\t---Card Replacement Charges-----|------------Rs. 150---------------\n";
        cout << "\t\t\t---Reload and top-up fee--------|------------Rs. 12----------------\n";
        cout << "\t\t\t---Total amount to paid---------|------------Rs. 387---------------\n";
        cout << "\t\t\t___________________________________________________________________\n";

        cout << "\n\t\t\tPress Enter To Pay!!!\n";
        getch();
    }

    void getinfo()
    {

        int i;
        cout << "\n\t\t\tEnter Your FIRST Name : \n";
        cin >> f_name;

        cout << "\n\t\t\tEnter Your MIDDLE Name : \n";
        cin >> m_name;

        cout << "\n\t\t\tEnter Your LAST Name : \n";
        cin >> l_name;

        cout << "\n\t\t\tEnter Your City: \n";
        cin >> address;

        cout << "\n\t\t\tEnter Your AADHAR NO: \n";
        cin >> a_num;

        cout << "\n\t\t\tEnter Today's Date: \n";
        cin >> date;

        cout << "\n\t\t\tWait! Your Information Is Being Processed";
        for (i = 0; i < 5; i++)
        {
            cout << ".";
            Sleep(2000);
        }

        cout << "\n\n\t\t\tInformation Is Scanned Successfully!!\n";

        cout << "\n\t\t\tPress Enter To Continue!!!\n";
        getch();

        cout << "\n\t\t\tYour Pass Is Under Process!!!";
        for (i = 0; i < 5; i++)
        {
            cout << ".";
            Sleep(2000);
        }
    }

    void show_card()
    {

        acc++;
        cout << "|====================================================================|\n";
        cout << "|                          MAHA METRO PASS                           |\n";
        cout << "|====================================================================|\n";
        cout << "|--------------------------------------------------------------------|\n";
        cout << "|                                                                    |\n";
        cout << "|                    6075 9800 5678 901" << acc << "                 |\n";
        cout << "|                                                                    |\n";
        cout << "|        " << f_name << " " << m_name << " " << l_name << "          |\n";
        cout << "|                                                                    |\n";
        cout << "|                           " << date << "                           |\n";
        cout << "|                                                                    |\n";
        cout << "|--------------------------------------------------------------------|\n";
        cout << "|              Your Card Is Valid For 12 Months!!!                   |\n";
        cout << "|====================================================================|\n";
        cout << "|====================================================================|\n";

        cout << "\n";
    }
};
int metro_pass::acc;

int main()
{
    // object of class
    ticket_booking tb;
    display_ticket dt;
    metro_pass mp;
    // MENU
    int choice;
    do
    {
        cout << "\t\t\t_____________________________________________\t\t\t\t\t\t\t\t\t \n";
        cout << "\t\t\t|                  MENU                     |\t\t\t\t\t\t\t\t\t \n";
        cout << "\t\t\t|___________________________________________|\t\t\t\t\t\t\t\t\t \n";
        cout << "\t\t\t|        1 - Book Ticket                    |\t\t\t\t\t\t\t\t\t \n";
        cout << "\t\t\t|        2 - Display Train Status           |\t\t\t\t\t\t\t\t\t \n";
        cout << "\t\t\t|        3 - Metro pass                     |\t\t\t\t\t\t\t\t\t \n";
        cout << "\t\t\t|        4 - Exit                           |\t\t\t\t\t\t\t\t\t \n";
        cout << "\t\t\t|___________________________________________|\t\t\t\t\t\t\t\t\t \n";

        cout << "\n\t\t\tEnter your choice and press return: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            ticket_booking *ptr;
            ticket_booking *ptr1;

            ptr = &dt;
            ptr1 = &dt;

            ptr->location;
            ptr1->destination;

            ptr->loc();
            tb.fare();

            display_ticket *ptr2;

            ptr2 = &dt;
            ptr2->location;

            ptr2->show();

            break;
        case 2:
            display_status();
            break;
        case 3:
            cout << "\n\t\t\tFirst You Need To Login\n"
                 << endl;
            mp.login();
            mp.getinfo();
            mp.card_fare();
            tb.fare();
            cout << "\nPress Enter To Show Your Pass\n";
            getch();
            mp.show_card();

            break;
        case 4:
            cout << "\n\t\t\tEnd of Program.\n";

            break;
        default:
            cout << "\n\t\t\tNot a Valid Choice. \n";
            cout << "\n\t\t\tChoose again.\n";
            cin >> choice;
            break;
        }
    } while (choice != 4);

    // MENU END

    return 0;
}
