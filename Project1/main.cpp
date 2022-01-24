#include <iostream>
#include<fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
int main()
{
    int wybor,miejsce,i,j;
    int tab[10]= {};
    std::string bye = "ZAPRASZAMY PONOWNIE!";
    srand(time(NULL));
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::ofstream zapis("bilety.txt");
    zapis<<"WITAMY!\n";
    zapis<<"OTO TWOJE BILETY: \n\n";
    zapis.close();
    std::cout<<"\n\t   Witamy w Systemie Rezerwacji Biletow Linii Lotniczych!\n\n";


    for(j=0; j<10; j++) // petla pod max
    {
        std::cout<<"\t#############################################################\n";
        std::cout<<"###\tWYBIERZ 1 ABY DOKONAC REZERWACJI DLA LINII LOTNICZYCH RYANAIR\t###\n";
        std::cout<<"###\tWYBIERZ 2 ABY DOKONAC REZERWACJI DLA LINII LOTNICZYCH WIZZAIR\t###\n";
        std::cout<<"###\tWYBIERZ 3 ABY WYJSC                                          \t###\n";
        std::cout<<"\t#############################################################\n\n\n";
        std::cout<<"TWOJ WYBOR: ";
        std::cin>>wybor;

        switch(wybor)
        {
        case 1:
            std::cout<<"\nLOTY RYANAIR:\n";
            SetConsoleTextAttribute(hConsole, 10);
            std::cout<<"Dostepne miejsca: 1,2,3,4,5\n";
            SetConsoleTextAttribute(hConsole, 7);
            do
            {
                std::cout<<"Wybierz miejsce:\n\n";
                std::cin>>miejsce;
                tab[j]=miejsce;
                for (i=0; i<j; i++)
                {
                    if(tab[j]==tab[i])
                    {
                        system( "cls" );
                        SetConsoleTextAttribute(hConsole, 12);
                        std::cout<<"\nTo miejsce jest juz niedostepne!\n\n";
                        SetConsoleTextAttribute(hConsole, 7);
                        break;
                    }
                }
            }
            while (i!=j);
            if(tab[j] <=5 && tab[j]>=1) //warunek wolnych miejsc
            {
                system( "cls" );
                std::cout<<"\n";
                std::cout<<"################################\n";
                std::cout<<"Linia lotnicza: RYANAIR\n";
                std::cout<<"Numer miejsca: "<<tab[j]<<"\n";
                std::cout<<"################################\n\n";
                zapis.open("bilety.txt", std::ios_base::app);
                zapis<<"##############################\n";
                zapis<<"TWOJ NUMER ID ZAMOWIENIA:"<<rand()<<"\n";
                zapis<<"NUMER TWOJEGO MIEJSCA TO: "<<miejsce;
                zapis<<"\nLINIE LOTNICZE RYANAIR\n";
                zapis<<"##############################\n\n";
                zapis.close();
            }
            else
                std::cout<<"\nNieprawidlowy numer miejsca! Dokonaj rezerwacji jeszcze raz!\n\n";
            break;

        case 2:
            std::cout<<"\nLOTY WIZZAIR:\n";
            SetConsoleTextAttribute(hConsole, 10);
            std::cout<<"Dostepne miejsca: 6,7,8,9,10\n";
            SetConsoleTextAttribute(hConsole, 7);

            do
            {
                std::cout<<"Wybierz miesjce:\n\n";
                std::cin>>miejsce;
                tab[j]=miejsce;

                for (i=0; i<j; i++)
                {
                    if(tab[j]==tab[i])
                    {
                        SetConsoleTextAttribute(hConsole, 12);
                        std::cout<<"\nTo miejsce jest juz niedostepne!\n\n";
                        SetConsoleTextAttribute(hConsole, 7);
                        break;
                    }
                }
            }
            while (i!=j);
            if(tab[j] >=6 && tab[j]<=10) //warunek  wolnych miejsc
            {
                system( "cls" );
                std::cout<<"\n";
                std::cout<<"################################\n";
                std::cout<<"Linia lotnicza: WIZZAIR\n";
                std::cout<<"Numer miejsca: "<<tab[j]<<"\n";
                std::cout<<"################################\n\n";
                zapis.open("bilety.txt", std::ios_base::app);
                zapis<<"##############################\n";
                zapis<<"TWOJ NUMER ID ZAMOWIENIA:"<<rand()<<"\n";
                zapis<<"NUMER TWOJEGO MIEJSCA TO: "<<miejsce;
                zapis<<"\nLINIE LOTNICZE WIZZAIR\n";
                zapis<<"##############################\n\n";
                zapis.close();
            }
            else
                std::cout<<"\nNieprawidlowy numer miejsca! Dokonaj rezerwacji jeszcze raz!\n\n";
            break;

        case 3:
            SetConsoleTextAttribute(hConsole, 16);
            std::cout<<"\n\n";
            for (int i = 0; i < bye.length(); i++)
            {
                std::cout << bye[i];
                Sleep(250); //predkosc wypisywania
            }
            std::cout << "\n";
            SetConsoleTextAttribute(hConsole, 7);
            return 0;
        default:
            SetConsoleTextAttribute(hConsole, 12);
            std::cout<<"\n\nWybrano niedostepna opcje!\n\n\n";
            SetConsoleTextAttribute(hConsole, 7);
            break;
        }

    }
}
