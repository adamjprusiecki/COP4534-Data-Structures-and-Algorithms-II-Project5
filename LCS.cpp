#include "LCS.hpp"
#include <iostream>
#include <fstream>

LCS::LCS()
{

}

void LCS::BruteForce() // DOES NOT WORK
{
	std::string s1 = "";
	std::string s2 = "";

	std::ifstream file("twoStrings.txt");
	if(file.is_open())
	{
		file >> s1;
		file >> s2;
		file.close();
	}
	else
	{
		std::cout << "File Does Not Exist" << std::endl;
	}

	std::cout << s1 << std::endl << std::endl;
	std::cout << s2 << std::endl << std::endl; 

	std::cout << s1.length() << std::endl;
	std::cout << s2.length() << std::endl << std::endl;

	//unsigned short int start = 0;
	//unsigned short int end = 0;
	std::string lcsStr = "";
	std::string temp = "";

	for(unsigned int i = 0; i < s1.length(); i++)
	{	
		for(unsigned int j = 0; j < s2.length(); j++)
		{
			if(j > s1.length())
			{
				std::cout << "break" <<std::endl;
				break;
			}
		}
		temp = "";
	}
}