#include <iostream>

auto is_divisible(int a, int b)
{
    int c=a%b;
    return c;
}


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
    int n,m;
    std::cout<<"Podaj 1 liczbe: ";
    std::cin>>n;
    std::cout<<"Podaj 2 liczge: ";
    std::cin>>m;

    std::cout<<is_even(is_divisible(n,m))<<"\n";
}
