#include <iostream>
#include <string>
auto main(int argc, char* argv[]) -> int
{
    int liczba;
	if(argc==2)
    {
		liczba=std::stoi(argv[1]);
        for(int i=liczba; i>2;i--)
    {
        std::cout<<i<<" bottles of beer on the wall,"<<i<<" bottles of beer.\nTake one down, pass it around,"<<i-1<<" bottles of beer on the wall...\n";
    }
	}
	else
{
	for(int i=99; i>2;i--)
    {
        std::cout<<i<<" bottles of beer on the wall,"<<i<<" bottles of beer.\nTake one down, pass it around,"<<i-1<<" bottles of beer on the wall...\n";
    }
	}
        std::cout<<"2 bottles of beer on the wall, 2 bottles of beer.\nTake one down, pass it around, 1 bottle of beer on the wall...\n";
		std::cout<<"1 bottle of beer on the wall, 1 bottle of beer.\nTake one down, pass it around, no more bottles of beer on the wall...\n";
		std::cout<<"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall...\n";
    return 0;
}
