#include <iostream>

int fibo(int n,int indexx)
{
		int fib_vorher=0,fib=0;
	while (n!=indexx )
	{
		if (n==1)
		{
			n=n+1;
			fib=fib+1;	
		}
		else
		{
			n=n+1;
			fib_vorher=fibo(1,indexx-2);
			fib=fib+fib_vorher;
		}
	}
	return fib;
}
		






int main()
{
		int N;
		std::cout << "N=" << std::flush;
		std::cin >> N;
		int fib_vorher=0,fib=0,index=1;
		std::cout << "Fibonacci für N="<< 1 <<" ist " <<  fib << std::endl;	
		while (index!=N )
		{
			if (index==1)
			{                        //notwendig für Start, f1 hat kein Vorgänger//
				index=index+1;
				fib=fib+1;
				std::cout << "Fibonacci für N="<< index <<" ist " << fib << std::endl;	
			}
			else
			{
				index=index+1;
				fib_vorher=fibo(1,index-2);
				fib=fib+fib_vorher;
				std::cout << "Fibonacci für N="<< index <<" ist " << fib << std::endl;			
			}
		}		
}



