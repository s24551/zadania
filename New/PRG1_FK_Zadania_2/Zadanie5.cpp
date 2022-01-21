#include <iostream>
#include <sstream>
#include <string>
#include <vector>
std::vector<std::string> ilosc;
void split(std::string napis)
{
    std::stringstream stringstr;
    stringstr.str(napis);
    std::string slowo="";
    while(stringstr >> slowo)
    {
        ilosc.push_back(slowo);
    }
}
int main()
{
    std::string zdanie;
    std::cout<<"Podaj tekst: ";
    std::getline(std::cin,zdanie);
    split(zdanie);
    for(int i=0; i<ilosc.size(); i++)
    {
        std::cout << "''" <<ilosc[i] << "'', ";
    }
}
