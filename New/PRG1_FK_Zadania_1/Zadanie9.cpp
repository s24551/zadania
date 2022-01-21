#include <iostream>
#include <string>

auto is_palindrome(std::string dl)
{
    int suma=0;

    for(int i=0; i<dl.length()-1; i++)
    {
        if(dl[i] == dl[dl.length()-1-i])
        {
            suma=suma+1;
        }
        else
        {
            break;
        }
    }
    if(suma==dl.length()-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
auto main() -> int
{
    std::string wyraz;
    std::cout << "Podaj wyraz: " << "\n";
    std::cin >> wyraz;


    if(is_palindrome(wyraz)==1)
    {
        std::cout<<"Wyraz jest polindronem";
    }
    else
    {
        std::cout<<"Wyraz nie jest polindronem";
    }
}
