#include <stdio.h>
#include <iostream>
using namespace std;


int main(void)
{
    int People;
    int Slices;
    int Slicesperbox;
    float Product;
    float Price;
    int Boxes;
    float Total;
    float Each;


    cout << "Welcome to Bob's Pizza" << endl <<endl;
    cout << "How many people are devouring pizza today?"<<endl;
    cin >>  People;
    cout << "Great you will have " << People << " dining today"<<endl <<endl;
    cout << "The number of slices per person, please"<<endl;
    cin >> Slices;
    cout << "Cool Beans! " << Slices << " a good amount of pizza!" <<endl <<endl;
    cout << "Now, how many slices of pizza in each box?"<<endl;
    cin >> Slicesperbox;
    cout << Slicesperbox << " I guess you could put that many in one box." <<endl <<endl;
    cout << "Now how much is each box going to cost? In USD $ we don't take other currencies." <<endl;
    cin >> Price;
    cout <<"Calculating for " << Slices * People << " slices ..." <<endl <<endl;
    Product = People * Slices/Slicesperbox + 1;
    Boxes = Product;
    cout << "You need at least " << Boxes <<endl;
    cout << "You have " << (Boxes * Slicesperbox) - (Slices * People) << " slices left." <<endl;
    Total = Boxes * Price;
    cout << "Your total price is $" << Total << endl;
    Each = Total/People;
    cout << "Each foodie pays $" << Each << endl <<endl;

    cout << "Thank you for choosing Bob's Pizza, Remember we da best!" << endl;


    return 0;
}
