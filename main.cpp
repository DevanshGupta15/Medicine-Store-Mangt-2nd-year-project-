// Medicine Store Manegement Project


// Done by Devansh Gupta
//      by chaitanya
//      by ved


// Prof. Krishna


#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#define WINHEIGHT 15
#define WINWIDTH 113

using namespace std;
struct node //constract node
{
	int reciept_number;
	string customerName;
	string date;
	int quantity[10];
	string type = {"OTC"};
	int x, menu2[10];
    double amount[10];
    string medicineName[10]={"Probiotics","Vitamin C(500mg)","Acid Free C(500mg)","Women'S Multivate","Marino Tablet","Maxi Cal Tablet",
	"Amino Zinc Tablet","Burnex","Fabuloss 5","Royal Propollen"};
	double Medicine[10] = {2.00,3.00,1.00,4.00,1.00,5.00,7.00,4.00,3.00,5.00};
	double total;

	node *prev;
	node *next;
	node *link;

}*q, *temp;				//pointer declaration


node *start_ptr = NULL;
node *head = NULL;
node *last = NULL;


class medicine {
  //  public:
     //   char name[100];
      //  int orderno,x,awesome;
      //  string date;
public:
void setdata()

{
	system("cls");
	int i;
    int choice, quantity, price,None;

	cout <<"\nAdd Order Details\n";
	cout <<"_____________________________________ \n\n";

	node *temp;
	temp=new node;

				cout <<"**************************************************************************\n";
				cout<<"DRUGS ID"<<"\tDRUGS TYPE"<<"   \t\tDRUGS NAME"<<"           DRUGS PRICE(RM)"<<endl;
				cout <<"**************************************************************************\n";
                cout<<"0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    Probiotics"<<"			RM 2.00"<<endl;
                cout<<"0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    Vitamin C(500mg)"<<"		RM 3.00"<<endl;
                cout<<"0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    Acid Free C(500mg)"<<"		RM 1.00"<<endl;
                cout<<"0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    Women'S Multivate"<<"		RM 4.00"<<endl;
                cout<<"0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    Marino Tablet"<<"	 	RM 1.00"<<endl;
                cout<<"0006"<<"\t"<<"\tOTC"<<"\t\t"<<"    Maxi Cal Tablet"<<" 		RM 5.00"<<endl;
                cout<<"0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    Amino Zinc Tablet"<<"		RM 7.00"<<endl;
                cout<<"0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    Burnex"<<"			RM 4.00"<<endl;//1353fn
                cout<<"0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    Fabuloss 5"<<"			RM 3.00"<<endl;
                cout<<"0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    Royal Propollen"<<"		RM 5.00"<<endl;
                cout<<" "<<endl;

	temp = new node;
	cout << "Type Order no: ";
    cin >> temp->reciept_number;
	cout<< "Enter Customer Name: ";
	cin>> temp->customerName;
	SYSTEMTIME ti;
	GetSystemTime(&ti);
	printf ("Date : %d /%d /%d" ,ti.wDay,ti.wMonth,ti.wYear);
	cout << "\nHow many Medicine would you like to order:"<< endl;
	cout<<"( Maximum is 10 order for each transaction ) \n";
	cout << "  " ;
	cin >> temp->x;
	if (temp->x >10)
	{
		cout << "The Medicine you order is exceed the maximum amount of order !";
		system("pause");
	}
	else{
	for (i=0; i<temp->x; i++)
	{

		cout << "Please enter your selection : "<<endl;
		cin>> temp->menu2[i];
        cout<< "Medicine Name: " <<temp->medicineName[temp->menu2[i]-1]<<endl;
        cout << "How many medicine do you want: ";
        cin >> temp->quantity[i];
        temp->amount[i] = temp->quantity[i] * temp->Medicine[temp->menu2[i]-1];
        cout << "The amount You need to pay is: " << temp->amount[i]<<" RM"<<endl;
        system("PAUSE");

	}
	cout<<"==========================================================================="<<endl;
    cout << "Order Taken Successfully"<<endl;
    cout<<"==========================================================================="<<endl;
    cout << "Go to Reciept Menu to Pay The Bill"<<endl;
    cout<<"==========================================================================="<<endl;
	system ("PAUSE");

    temp->next=NULL;
	if(start_ptr!=NULL)
	{
		temp->next=start_ptr;
	}
	start_ptr=temp;
	system("cls");
}
}//

void useracc()
{
 string cname,branch;
    int pur;

		cout<<"\t------------------------------------------------------\n";
		cout<<"\t||\t\t\t LOYALITY BATCH \t\t ||\n";
		cout<<"\t------------------------------------------------------\n";

		cout<<"==========================================================================="<<endl;
    cout << "HERE WE ARE HAVING THREE CATEGORIES "<<endl;
    cout<<"==========================================================================="<<endl;
    cout << "A) GREEN BATCH --->HAVING PURCHASE LESS THAN 50"<<endl;
    cout<<"==========================================================================="<<endl;
    cout << "B) SILVER  BATCH --->HAVING PURCHASE MORE THAN 50"<<endl;
    cout<<"==========================================================================="<<endl;
    cout << "A) GOLD BATCH --->HAVING PURCHASE MORE THAN 100"<<endl;
    cout<<"==========================================================================="<<endl;






    cout << "\nEnter Your name "<<endl;
    cin>>cname;
    cout << "Enter the branch (MUMBAI/BANGALORE/DELHI) "<<endl;
    cin>>branch;
    cout << "Enter the total time you made purchase from this shop"<<endl;
    cin>>pur;
    if (pur>100)
    {
        cout << " YOU ARE IN THE GOLD CATEGORY "<<endl;
        cout << "******************************"<<endl;
        cout << "YOU WILL GET 25% OFF ON YOUR REGULAR SHOPPING"<<endl;


    }
    else if (pur>=50 && pur<100)
    {
        cout << " YOU ARE IN THE SILVER CATEGORY "<<endl;
        cout << "******************************"<<endl;
        cout << "YOU WILL GET 15% OFF ON YOUR REGULAR SHOPPING"<<endl;

    }
    else if (pur<=50)
    {
        cout << " YOU ARE IN THE  GREEN CATEGORY "<<endl;
        cout << "******************************"<<endl;
        cout <<"YOU WILL GET 5% OFF ON YOUR REGULAR SHOPPING"<<endl;
    }
    else
{
    cout << "Invalid Number entered "<<endl;

    }
    system ("pause");
    system("cls");
}


void bo ()
{
    string coname,meddname;
    char bvalue;
    int medqua;


        cout<<"\t\t----------------------------------------------------------------------------\n";
		cout<<"\t\t\t\t\t BULD ORDER DISCOUT AFFORDABILITY \t\t \n                     ";
		cout<<"\t\t----------------------------------------------------------------------------\n";


    cout << "Enter The company name :"<<endl;
    cin>>coname;
    cout << "Enter companys brand value (low(l)/medium(m)/high(h)) :"<<endl;
    cin>>bvalue;
    cout << "Enter the medicine name  they are taking :"<<endl;
    cin>>meddname;
    cout << "enter the the medicine quantity they are taking "<<endl;
    cin>>medqua;

    if (medqua>100  && bvalue=='h')
    {
       cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 35%***"<<endl;
    }
     if (medqua=100  && bvalue=='h')
    {
       cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 35%***"<<endl;
    }
    else if (medqua>50 && bvalue=='h')
    {
        cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 25%***"<<endl;

    }
     else if (medqua=50 && bvalue=='h')
    {
        cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 25%***"<<endl;

    }
     else if (medqua<50 && bvalue=='h')
    {
        cout << "***WE CAN'T AFFORD ANY DISCOUNT ***"<<endl;

    }

    else if (medqua>100 && bvalue=='m')
    {
        cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 25%***"<<endl;

    }
    else if (medqua=100 && bvalue=='m')
    {
        cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 25%***"<<endl;

    }
    else if (medqua>50 && bvalue=='m')
    {
        cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 15%***"<<endl;

    }
        else if (medqua=50 && bvalue=='m')
    {
        cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 15%***"<<endl;

    }
      else if (medqua<50 && bvalue=='m')
    {
        cout << "***WE CAN'T AFFORD ANY DISCOUNT*** "<<endl;

    }
     else if (medqua>100 && bvalue=='l')
    {
        cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 15%***"<<endl;
    }
 else if (medqua=100 && bvalue=='l')
    {
        cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 15%***"<<endl;
    }

    else if (medqua>50 && bvalue=='l')
    {
        cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 10%***"<<endl;

    }
    else if (medqua=50 && bvalue=='l')
    {
        cout << "***WE CAN OFFER MAXIMUM DISCOUT OF 10%***"<<endl;

    }
     else if (medqua<50 && bvalue=='l')
    {
        cout << "***WE CAN'T AFFORD ANY DISCOUT*** "<<endl;
    }
     system ("pause");
    system("cls");

}
void delivery()
{
    char location,locationa,locationb,locationc;
    float distancea,distanceb,distancec;
    cout<<"\t\t----------------------------------------------------------------------------\n";
		cout<<"\t\t\t\t\t DELIVERY METHODS  \t\t \n                     ";
		cout<<"\t\t----------------------------------------------------------------------------\n";

    cout << "Enter The branch you want to get medicine delivered (M/B/D)"<<endl;
    cin>>location;
    switch (location)
    {
    case 'M':
        cout << "YOU HAVE ENTERED CITY : MUMBAI"<<endl;
        cout << "\t\t\t ********************************************************************"<<endl;
        cout << "\t\t\t\t\t\t SELECT FROM BELOW "<<endl;
        cout << "\t\t\t\t\t\t CHEMBUR (c) "<<endl;
        cout << "\t\t\t\t\t\t ANDHERI EAST (a)"<<endl;
        cout << "\t\t\t\t\t\t MULUND (m)" <<endl;
        cout << "\t\t\t ********************************************************************"<<endl;
        cin>>locationa;
        switch (locationa)
        {
        case 'c':
            cout << "ENTER YOUR DISTANCE FROM STORE TO YOUR HOUSE (km) "<<endl;
            cin >>distancea;
            if (distancea<5)
            {
                cout << "DELIVERY COST WOULD BE RUPESS 50 "<<endl;
            }
            else
            {
                cout << "SORRY DELIVERY NOT POSSIBLE "<<endl;
            }
            break;
            case 'a':
            cout << "ENTER YOUR DISTANCE FROM STORE TO YOUR HOUSE (km) "<<endl;
            cin >>distancea;
            if (distancea<5.9)
            {
                cout << "DELIVERY COST WOULD BE RUPESS 100 "<<endl;
            }
            else
            {
                cout << "SORRY DELIVERY NOT POSSIBLE "<<endl;
            }
            break;
            case 'd':
            cout << "ENTER YOUR DISTANCE FROM STORE TO YOUR HOUSE (km) "<<endl;
            cin >>distancea;
            if (distancea<3.8)
            {
                cout << "DELIVERY COST WOULD BE RUPESS 35 "<<endl;
            }
            else
            {
                cout << "SORRY DELIVERY NOT POSSIBLE "<<endl;
            }
            break;
        }
        break;


    case 'B':
                 cout << "YOU HAVE ENTERED CITY : BANGALORE"<<endl;
        cout << "\t\t\t ********************************************************************"<<endl;
        cout << "\t\t\t\t\t\t SELECT FROM BELOW "<<endl;
        cout << "\t\t\t\t\t\t INDIRA NAGAR (i) "<<endl;
        cout << "\t\t\t\t\t\t MALLESWARAM(l)"<<endl;
        cout << "\t\t\t\t\t\t JAYANAGAR (j)" <<endl;
        cout << "\t\t\t ********************************************************************"<<endl;
        cin>>locationb;
        switch (locationb)
        {
        case 'i':
            cout << "ENTER YOUR DISTANCE FROM STORE TO YOUR HOUSE (km) "<<endl;
            cin >>distanceb;
            if (distanceb<5)
            {
                cout << "DELIVERY COST WOULD BE RUPESS 50 "<<endl;
            }
            else
            {
                cout << "SORRY DELIVERY NOT POSSIBLE "<<endl;
            }
            break;
            case 'l':
            cout << "ENTER YOUR DISTANCE FROM STORE TO YOUR HOUSE (km) "<<endl;
            cin >>distanceb;
            if (distancec<5.9)
            {
                cout << "DELIVERY COST WOULD BE RUPESS 100 "<<endl;
            }
            else
            {
                cout << "SORRY DELIVERY NOT POSSIBLE "<<endl;
            }
            break;
            case 'j':
            cout << "ENTER YOUR DISTANCE FROM STORE TO YOUR HOUSE (km) "<<endl;
            cin >>distanceb;
            if (distanceb<3.8)
            {
                cout << "DELIVERY COST WOULD BE RUPESS 35 "<<endl;
            }
            else
            {
                cout << "SORRY DELIVERY NOT POSSIBLE "<<endl;
            }
            break;
        }
        break;
            case 'D':
                 cout << "YOU HAVE ENTERED CITY : DELHI"<<endl;
        cout << "\t\t\t ********************************************************************"<<endl;
        cout << "\t\t\t\t\t\t SELECT FROM BELOW "<<endl;
        cout << "\t\t\t\t\t\t NEHRU PLACE (n) "<<endl;
        cout << "\t\t\t\t\t\t SAKET(s)"<<endl;
        cout << "\t\t\t\t\t\t GREATER KAILASH (g)" <<endl;
        cout << "\t\t\t ********************************************************************"<<endl;
        cin>>locationc;
        switch (locationc)
        {
        case 'n':
            cout << "ENTER YOUR DISTANCE FROM STORE TO YOUR HOUSE (km) "<<endl;
            cin >>distancec;
            if (distancec<5)
            {
                cout << "DELIVERY COST WOULD BE RUPESS 50 "<<endl;
            }
            else
            {
                cout << "SORRY DELIVERY NOT POSSIBLE "<<endl;
            }
            break;
            case 's':
            cout << "ENTER YOUR DISTANCE FROM STORE TO YOUR HOUSE (km) "<<endl;
            cin >>distancec;
            if (distancec<5.9)
            {
                cout << "DELIVERY COST WOULD BE RUPESS 100 "<<endl;
            }
            else
            {
                cout << "SORRY DELIVERY NOT POSSIBLE "<<endl;
            }
            break;
            case 'g':
            cout << "ENTER YOUR DISTANCE FROM STORE TO YOUR HOUSE (km) "<<endl;
            cin >>distancec;
            if (distancec<3.8)
            {
                cout << "DELIVERY COST WOULD BE RUPESS 35 "<<endl;
            }
            else
            {
                cout << "SORRY DELIVERY NOT POSSIBLE "<<endl;
            }
            break;
        }
        break;
        }
        system ("pause");
    system("cls");

}
void stocks ()

{
    int stocks;
    int tablets=2341;
    int syrup=1690;
    int others=2976;
    int what;
    char add;
    int hey;
    int heya;
    int hi;
    char abc;
    int heyb;
    int heyc;

     cout<<"\t\t----------------------------------------------------------------------------\n";
		cout<<"\t\t\t\t\t STOCKS  \t\t \n                     ";
		cout<<"\t\t----------------------------------------------------------------------------\n";

		cout << "WHAT WOULD YOU LIKE TO DO  "<<endl;
		cout << "SEE/EDIT TABLETS STOCKS(1)"<<endl;
		cout << "SEE/EDIT SYRUP STOCKS(2)"<<endl;
		cout << "SEE/EDIT OTHER THINGS(3)"<<endl;
		cin>>stocks;

		system ("cls");

switch(stocks)
		{
        case 1:
            cout << "/\t\t....................................."<<endl;
            cout << "\t\t\t TABLETS SECTION"<<endl;
            cout << "\t\t......................................"<<endl;

            cout << "WHAT WOULD YOU LIKE TO DO:"<<endl;
            cout << "Check the tablets stocks (1) "<<endl;
            cout << "Add the tablets into the stocks(2)"<<endl;

            cin>>what;
            system ("cls");
            switch (what)
            {
            case 1:
                cout << "CURRENT TABLETS STOCKS AVAILABLE IS :"<<syrup;
                break;

            case 2:
                cout << "WHAT DO YOU WANT TO DO ADD (A) OR SUBTRACT (S)"<<endl;
                cin>>add;
                if (add=='A')
                {
                    cout << "ADD THE TABLETS YOU WANT TO ADD IN THE STORE"<<endl;
                    cin>>hey;

                    tablets=tablets +hey;
                    cout << "UPDATED TABLETS STOCKS IN THE STORE ARE :"<<tablets<<endl;


                }
                else
                {

                    cout << "MINUS  THE TABLETS YOU WANT TO MINUS FROM THE STORE"<<endl;
                    cin>>heya;

              tablets=tablets-heya;
                    cout << "UPDATED TABLETS STOCKS IN THE STORE ARE :"<<tablets<<endl;

                }

            break;

            }
            break;
            system ("pause");
            system ("cls");
    case 2:
            cout << "/\t\t....................................."<<endl;
            cout << "\t\t\t SYRUP SECTION"<<endl;
            cout << "\t\t......................................"<<endl;

            cout << "WHAT WOULD YOU LIKE TO DO:"<<endl;
            cout << "Check the syrup stocks (1) "<<endl;
            cout << "Add the syrup into the stocks(2)"<<endl;

            cin>>hi;
            system ("cls");
            switch (hi)
            {
            case 1:
                cout << "CURRENT SYRUP STOCKS AVAILABLE IS :"<<syrup;
                break;

            case 2:
                cout << "WHAT DO YOU WANT TO DO ADD (A) OR SUBTRACT (S)"<<endl;
                cin>>abc;
                if (abc=='A')
                {
                    cout << "ADD THE SYRUP YOU WANT TO ADD IN THE STORE"<<endl;
                    cin>>heyb;

                    syrup=syrup+heyb;
                    cout << "UPDATED SYRUP STOCKS IN THE STORE ARE :"<<syrup<<endl;


                }
                else
                {

                    cout << "MINUS  THE SYRUP YOU WANT TO MINUS FROM THE STORE"<<endl;
                    cin>>heyc;

                    syrup= syrup-heyc;
                    cout << "UPDATED SYRUP STOCKS IN THE STORE ARE :"<<syrup<<endl;

                }

                break;
            }


            break;
            system ("pause");
            system ("cls");
    case 3:
            cout << "/\t\t....................................."<<endl;
            cout << "\t\t\t OTHER MEDICAL THINGS SECTION"<<endl;
            cout << "\t\t......................................"<<endl;

            cout << "WHAT WOULD YOU LIKE TO DO:"<<endl;
            cout << "Check the OTHER MEDICAL THINGS stocks (1) "<<endl;
            cout << "Add the OTHER MEDICAL THINGS into the stocks(2)"<<endl;
            int heyz;
            char adda;
            int heyh;
            int heyc;



            cin>>heyz;

            system ("cls");
            switch (heyz)
            {
            case 1:
                cout << "CURRENT OTHER MEDICAL THINGS SOCKS AVAILABLE IS :"<<others;
                break;

            case 2:
                cout << "WHAT DO YOU WANT TO DO ADD (A) OR SUBTRACT (S)"<<endl;
                cin>>adda;
                if (adda=='A')
                {
                    cout << "ADD THE OTHER MEDICAL THINGS YOU WANT TO ADD IN THE STORE"<<endl;
                    cin>>heyh;

                    others=others +heyh;
                    cout << "UPDATED OTHER MEDICAL THINGS STOCKS IN THE STORE ARE :"<<others<<endl;


                }
                else
                {

                    cout << "MINUS  THE OTHER MEDICAL THINGS YOU WANT TO MINUS FROM THE STORE"<<endl;
                    cin>>heyc;

                    others= others-heyc;
                    cout << "UPDATED OTHER MEDICAL THINGS  STOCKS IN THE STORE ARE :"<<others<<endl;

                }

            break;
            }
            break;

    default:

                    cout << "WRONG ENTRY"<<endl;

                    break;
                    system ("pause");
              system ("cls");
            }
             system ("pause");
    system("cls");



}


void datafun()
{
    string name, recivedName;
    cout<<"Enter medicine name: ";
    cin>>name;
    ifstream indata;
    ofstream outdata;
    //writing in file
    outdata.open("name.txt", ios::app);
    outdata<<name<<endl;
    outdata.close();
    cout << "Medicine is added to the database "<<endl;

    //reading form file
   /* indata.open("name.txt");
    getline(indata, recivedName, '\n');
    indata.close();
    cout<<recivedName<<endl; */
    system ("pause");
    system ("cls");
}
void bill()
	//Function to display receipt
{
	int i, num, num2;
	bool found;			//variable to search
	system("cls");
	node *temp;

	temp=start_ptr;
	found = false;

	cout<<" Enter the Reciept Number To Print The Reciept\n";
	cin>>num2;
	cout<<"\n";
	cout<<"==========================================================================="<<endl;
	cout <<"\t\tHere is the Order list\n";
	cout<<"==========================================================================="<<endl;


	if(temp == NULL) //Invalid receipt code
	{
		cout << "\tThere is no Order to show\n\t\t\tSo The List is Empty\n\n\n";
	}
	while(temp !=NULL && !found)
	{
		if (temp->reciept_number==num2)
		{
			found = true;
		}
		else
		{
			temp = temp -> next;
		}
        if (found)	//print the receipt
        {
		cout <<"Reciept Number : "<<temp->reciept_number;
		cout <<"\n";
		cout<<"Customer Name: "<<temp->customerName<<endl;

		cout<<"Order Date : "<<temp->date<<endl;

		cout<<"_____________________________________________________________________________"<<endl;

		cout << "===============================================================================" << endl;
		cout << "|  Medicine Type |     Medicine Name    |  	Quantity     |    Total Price |" << endl;
		cout << "=======++==================++================++===============++===============" << endl;
		for (i=0;i<temp->x;i++)
		{
			cout << temp->type <<"  \t\t";
			cout<<temp->medicineName[temp->menu2[i]-1]<<"\t\t\t  ";
			cout<<temp->quantity[i] <<"\t\t";
			cout<< temp->amount[i]<<" RM"<<endl;
			cout<<"_________________________________________________________________________________"<<endl;
		}

		temp->total = temp->amount[0]+temp->amount[1]+temp->amount[2]+temp->amount[3]+temp->amount[4]+temp->amount[5]+temp->amount[6]+temp->amount[7]
						+temp->amount[8]+temp->amount[9];
		cout<<"Total Bill is : "<<temp->total;
		cout<<"\n";
		cout << "Type the exact amount You need to pay: ";
        cin >> num;

		cout <<"\n";
		cout <<"\n";
		cout<<"Payment Done\nThank You\n";
		cout <<"\n_______________________________________________________________________________\n";

		}



}
}


};
void liner()
{
    for(int i = 0 ; i < WINHEIGHT ; i++)
        cout << endl;
}
void filler()
{
    for(int i = 0 ; i < WINWIDTH ; i++)
    {
        cout << "*";
    }
    cout << "\a" << endl;
}

void welcome()
{
    liner();
    cout << "Loading..." << endl;
    Sleep(500);
    char msg[] = "WELCOME TO MEDICAL STORE MANAGEMENT SYSTEM";
    int len = strlen(msg);
    int x;
    x = (WINWIDTH/2) - (len/2);
    for(int i = 0 ; i < WINWIDTH ; i++)
    {
        printf("%c",177);
        Sleep(55);
    }
    cout << endl;
    system("CLS");
    liner();
    filler();
    cout << setw(len+x) << msg << endl;
    filler();
}









int main()
{
    welcome();


system ("color 5F");


    system ("pause");
    system ("cls");
    medicine obj1;
    int n;
while (n!=8)
  /*  cout<<"\t\t\t    Devanshs Medicine Shop Management System \n";
		cout<<"\t\t==================================================\n\n";
		cout<<"\t\t--------------------------------------------------\n";
		cout<<"\t\t\t1. Take new Medicine order \t\t ||\n";
		cout<<"\t\t\t2. View user account \t\t ||\n";
		cout<<"\t\t\t3. Bulk order discout affordable  \t\t\t ||\n";
		cout<<"\t\t\t4.  Record \t ||\n";
		cout<<"\t\t\t5. Daily Summary of total Sale \t\t ||\n";
		cout<<"\t\t\t6. Exit\t\t\t\t\t ||\n";
		cout<<"\t\t--------------------------------------------------\n";
		cout<<"Enter choice: "; */
	{

		cout<<"\t\t\t    Medicine Store Management System \n";
		cout<<"\t\t==================================================\n\n";
		cout<<"\t\t--------------------------------------------------\n";

		cout<<"\t\t||\t1. Take new Medicine order \t\t ||\n";
		cout<<"\t\t||\t2. View user account       \t\t ||\n";
		cout<<"\t\t||\t3. Bulk order discount     \t\t ||\n";
		cout<<"\t\t||\t4. Delivery Methods        \t\t ||\n";
		cout<<"\t\t||\t5. Checking stocks         \t\t ||\n";
		cout<<"\t\t||\t6. Add medicine database   \t\t ||\n";
		cout<<"\t\t||\t7. Print the bill and pay  \t\t ||\n";

		cout<<"\t\t||\t8. Exit\t\t\t\t\t ||\n";
		cout<<"\t\t--------------------------------------------------\n";
		cout<<"Enter choice: ";

        cin>> n;
        system("cls");




       switch (n)
        {


    case 1 :
        obj1.setdata();
        break;
    case 2:
        obj1.useracc();
        break;
    case 3:
        obj1.bo();
        break;


    case 4:
        obj1.delivery();
        break;
    case 5:
        obj1.stocks();
        break;
    case 6:
        obj1.datafun();
        break;
    case 7:
        obj1.bill();
        system ("pause");
              system ("cls");
        break;
    case 8 :
        cout << "____________________________________________________"<<endl;
        cout << "\t\tThankyou"<<endl;
        cout << "\t\tExit "<<endl;

        cout << "____________________________________________________"<<endl;
        break;
        }
    }

return 0;
}
