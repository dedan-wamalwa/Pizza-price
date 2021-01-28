#include <iostream>
#include <string>
using namespace std;
class Pizza
{
private:
    string topping;
    int diameter;
    double price;
    const static string STDTOP;
    const static int STDSIZE;
    const static double STDPRICE;
public:
    Pizza(const string = STDTOP,const int = STDSIZE,const double = STDPRICE);
    void setvalues();
    void display();
};
const string Pizza::STDTOP = "cheese";
const int Pizza::STDSIZE = 12;
const double Pizza::STDPRICE = 8.99;
Pizza::Pizza(const string top,const int Size,const double price)
{
topping = top;
diameter = Size;
this->price=price;
}
void Pizza::display()
{
cout<<"a "<<diameter <<"inch "<<topping <<" pizza. Price $ "<<price <<endl;
}
void Pizza::setvalues()
{
const double TOPPINGPREMIUM = 1.00;
const double SIZEPREMIUM = 1.50;
cout<<"enter topping ";
cin>>topping;
if (topping != STDTOP)
{
price = STDPRICE + TOPPINGPREMIUM;
}
cout<<"enter size ";
cin>>diameter;
if (diameter > STDSIZE)
    {
    price+= SIZEPREMIUM;
    }
}
int main()
{
Pizza a;
char standard;
cout<<"the standard pizza is: ";
a.display();
cout<<"let me take your order "<<endl;
cout<<"do you want the standard pizza - y or n? ";
cin>>standard;
if(standard != 'y')
{
a.setvalues();
cout<< "your order is ";
a.display();
}
return 0;
}
