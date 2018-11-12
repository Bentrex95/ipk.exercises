#include <iostream>

unsigned int fibonacci(int N) 
{
    if (N == 0) 
	{
        return 0;
    } 
    else if (N == 1) 
	{ 
        return 1;
    }
	else
	{
	return fibonacci(N - 1) + fibonacci(N - 2);
	}
}
int main() {
    int N;

    std::cout << "N= ";
    std::cin >> N;                                 
    std::cout << "Die Fibonacci-Zahl von " << N << 
        " ist " << fibonacci(N) << std::endl;
}
