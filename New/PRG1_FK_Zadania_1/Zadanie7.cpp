#include <iostream>
#include <string>
auto count_chars(std::string x,char y)
{
    int suma=0;
    int dlugosc;
    dlugosc=x.length();
    for(int i=0; i<x.length(); i++)
    {
        if(x[i] == y)
        {
            suma=suma+1;
        }
    }
    return suma;
}
auto main() -> int
{
    std::string wyraz;
    char litera;
    std::cout << "Podaj wyraz: " << "\n";
    std::cin >> wyraz;
    std::cout << "Podaj litere: " << "\n";
    std::cin >> litera;
    std::cout << count_chars(wyraz, litera) << "\n";
}
