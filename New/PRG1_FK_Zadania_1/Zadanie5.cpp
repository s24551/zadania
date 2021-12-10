#include <iostream>

auto is_even(int n)
{
    if(n%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    std::cout<<"Podaj liczbe: ";
    std::cin>>n;
    if(is_even(n)== true)
    {
        std::cout<<"Liczba jest parzysta";
    }
    else
    {
        std::cout<<"Liczba nie jest parzysta";
    }
}
