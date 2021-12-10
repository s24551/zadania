#include <iostream>

auto is_even(int n)
{
    if(n%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    std::cout<<"Podaj liczbe: ";
    std::cin>>n;
    if(is_even(n)== 0)
    {
        std::cout<<"Liczba jest parzysta";
    }
    else
    {
        std::cout<<"Liczba nie jest parzysta";
    }
}
