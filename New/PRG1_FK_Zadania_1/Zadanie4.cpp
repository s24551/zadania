#include <iostream>
#include <string>


int main()
{
    std::string imie1,imie2,imie3,imie4,imie5;
    int kobiety=0, mezczyzna=0;

    std::cout<<"Podaj pierwsze imie: ";
    std::cin>>imie1;
    if(imie1[imie1.size()-1] == 'a')
    {
        kobiety++;
    }else{
    mezczyzna++;}
    std::cout<<"Podaj drugie imie: ";
    std::cin>>imie2;
        if(imie2[imie2.size()-1] == 'a')
    {
        kobiety++;
    }else{
    mezczyzna++;}
    std::cout<<"Podaj trzecie imie: ";
    std::cin>>imie3;
            if(imie3[imie3.size()-1] == 'a')
    {
        kobiety++;
    }else{
    mezczyzna++;}
    std::cout<<"Podaj czwarte imie: ";
    std::cin>>imie4;
            if(imie4[imie4.size()-1] == 'a')
    {
        kobiety++;
    }else{
    mezczyzna++;}
    std::cout<<"Podaj piate imie: ";
    std::cin>>imie5;
            if(imie5[imie5.size()-1] == 'a')
    {
        kobiety++;
    }else{
    mezczyzna++;}
    std::cout<<"Liczba kobiet: "<<kobiety<<"\n";
    std::cout<<"Liczba mezczyzn: "<<mezczyzna;
        /*{
    for(int i=0; i<5; i++)
        {
            std::cout<<"Podaj "<<i+1<<" imie: \n";
            std::cin>>imie[i];
            if(imie[imie[i].size()] == 'a')
            {
                kobiety++;
            }
        }
        std::cout<<imie[2];*/
    }
