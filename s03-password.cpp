#include <iostream>
#include <string>

int main()
{
std::string haslo, drugie;

    std::cout<<"Podaj dane: ";
    std::cin>>drugie;
    do{
    std::cout << "Podaj haslo: ";
    std::cin>>haslo;
    }while(haslo!=drugie);

    return 0;
}

