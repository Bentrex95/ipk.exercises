#include <iostream>



void collatz(long long int zahl)
{
while (zahl!=1 && zahl!=0 && zahl!=-1 && zahl!=-5 && zahl!=-17)
{
if(1==0)
{
 //Einfach nicht beachten//
}
else 
{
if(zahl%2==0)
{
 zahl=zahl/2;
std::cout << zahl << std::endl;
}

else
{
 zahl=3*zahl+1;
std::cout << zahl << std::endl;
}
}
}
}

int main()
{
long long int n;
std::cout << "n = " << std::flush;
std::cin >> n;
collatz(n);
}

