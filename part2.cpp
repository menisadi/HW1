#include <vector>
#include <iostream>
#include <string>
using namespace std;
std::vector<std::string> split(char sentence[])
{
	int index =0;
	std::vector<std::string> words;
	std::string str(sentence);
	std::string cutStr;
	index = str.length();
	while(index<=str.length()+1)
	{
		index = str.find_first_of(' ',1);
		cutStr.append(str,0,index);
		words.push_back(cutStr);
		cutStr = str.substr(index+1,str.length());
		str=cutStr;
		cutStr="";
	}
	return words;
}
void printWords(std::vector<std::string> words)
{
	for(std::vector<string>::iterator it = words.begin(); it != words.end(); ++it)
		    std::cout << *it << endl;
}
int main()
{
    char sentence[]="12345 abcd 1A 2B hh 77 99 00 2 12345 44789 11111 22222 44444 maaaaa";
	printWords(split(sentence));
    return 0;
}
