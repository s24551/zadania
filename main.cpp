#include <iostream>
#include <time.h>
#include <string>

int main()
{
    int liczba,b;
    srand(time(NULL));
    liczba=rand()%100+1;
    while(liczba!=b)
    {
        std::cout<<"Zgadnij liczbe: ";
        std::cin>>b;
        if(b>liczba)
        {
            std::cout<<"Liczba jest za duza\n";
        }
        else if(b<liczba)
        {
            std::cout<<"Liczba jest za mala\n";
        }
        else
        {
            std::cout<<"Liczba jest prawidlowa\n";
        }
    }


    return 0;
}
