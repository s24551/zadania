#include <iostream>

int main()
{
    int liczba,i;

    std::cout << "Podaj liczbe od ktorej mam rozpoczac: ";
    std::cin>>liczba;
    if(liczba>0)
    {
        for(i=liczba; i>=0; i--)
        {
            std::cout<<i<<std::endl;
        }
    }
    else
    {
        for(i=liczba; i<=0; i++)
        {
            std::cout<<i<<std::endl;
    }
    }
    return 0;
}
