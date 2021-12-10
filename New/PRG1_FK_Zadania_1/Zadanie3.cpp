#include <iostream>
#include <string>


int main()
{
    std::string imie1,imie2;

    std::cout<<"Podaj pierwsze imie: ";
    std::cin>>imie1;
    std::cout<<"Podaj drugie imie: ";
    std::cin>>imie2;

    if(imie1.size()>imie2.size())
    {
        std::cout<<"Pierwsze imie jest dluzsze od drugiego!";
    }else if(imie1.size()<imie2.size())
    {
        std::cout<<"Drugie imie jest dluzsze od pierwszego...";
    }else
    {
        std::cout<<"Imiona maja taka sama dlugosc.";
    }


}
