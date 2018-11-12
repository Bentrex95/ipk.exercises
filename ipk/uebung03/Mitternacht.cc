#include <iostream>
#include <cmath>
#include <math.h>
int main(int argc, char** argv)
{
double v;
std::cout << "a = " << std::flush;
std::cin >> v;
double x;
std::cout << "b = " << std::flush;
std::cin >> x;
double y;
std::cout << "c = " << std::flush;
std::cin >> y;
double x1,x2;
x1 = -x+std::sqrt(pow(x,2.0)-4*v*y)/2.0*v;
x2 = -x-std::sqrt(pow(x,2.0)-4*v*y)/2.0*v;
if(v==0 && x==0)
{
std::cout <<"Keine eindeutige Lösung" <<std::endl;
}
else
{
if(x1 != x1)
{
std::cout <<"x is complex" <<std::endl;
}

else {
if(x2 != x2)
{
std::cout <<"x is complex" <<std::endl;
}
else
std::cout << x1 << std::endl;
std::cout << x2 << std::endl;
}
}


}
