#include <iostream>
using namespace std;
/*  Structures/Constants */
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

// Function prototypes
struct house InputHouse();
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/* Main Program */
int main(int argc, char* argv[])
{
    cout<<"Enter info for first house\n";
    struct house firstHouse = InputHouse();
    cout<<"\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);
    /* Based on comparison value, use a switch
     * statement to display all posibilities:
     * 1) "the first house is cheaper"
     * 2) "the two houses are equally expensive"
     * 3) "the second house is cheaper"
     * 4) "invalid comparison value there must be a bug"
     */




    return 0;
}

/* Function Defenitions */
struct house InputHouse(struct house h)
{
    cout << "Please enter the street number: " <<  h.streetNum << endl;
    cin >> h.streetNum;
    cout << "Please enter the street address: " << h.streetName << endl;
    cin >> h.streetName;
    cout << "Please enter the price of house: " << h.price << endl;
    cin >> h.price;

    return h;
}

void PrintHouse(int houseNum, struct house h)
{
    cout <<  " House  info is: " << h.streetName << h.streetNum << endl;

}

//int ComparePrices(struct house h1, struct house h2)




