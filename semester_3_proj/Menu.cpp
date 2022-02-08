#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <conio.h>
#include <iomanip>


#include "RealEstate.h"
#include "Apartment.h"
#include "House.h"
#include "Land.h"

#include "Menu.h"
#define LAND "lands.csv"
#define HOUSE "houses.csv"
#define APARTMENT "apartments.csv"

using namespace std;

void Menu::displayChoice()
{

    cout << "<<-----------------------------------------WELCOME TO ZIELONY REAL ESTATE SYSTEM----------------->>" << endl;
    cout << "  " << endl;
    cout << "ZIELONY property International Limited is a Real Estate Company in Poland with its main line of business as follows;" << endl;
    cout << "Renting of apartments/houses, Sale of houses/land, Leasehold of Landed Properties and Building Construction." << endl;
    cout << "  " << endl;
    cout << "******SERVICES*****" << endl;
    cout << "Press 1 to BUY LAND \nPress 2 to SELL LAND \nPress 3 to BUY HOUSE \nPress 4 to SELL HOUSE" << "\t" << endl;
    cout << "Press 5 to Rent an Apartment" << endl;

    cout << "**********************************" << endl;
    cout << "\nPlease enter your Choice:\t";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        

        Land land(LAND);
        land.buyLand();
        break;
    }
    case 2:
    {
        Land land(LAND);
        land.registerLand();
        break;
    }
    case 3:
    {
        House house(HOUSE);
        house.buyHouse();
        break;
    }
    case 4:
    {
        House house(HOUSE);
        house.registerHouse();
        break;
    }
    case 5:
    {
        Apartment apartment(APARTMENT);
        //apartment.fetchWhere(0, "Flat");
        apartment.chooseType();
        break;
    }
    default:
    {
        cout << "\n Wrong Choice;\t Try Again" << endl;
        displayChoice();
    }
    }
}