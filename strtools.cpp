#include "strtools.h"
#include <string>

using namespace std;
std::string  getStr(std::string mainStr, int minIndex, int maxIndex)
{
	std::string result("");

	for(int i(minIndex),c(maxIndex);i<c;i++)
	{
		result += mainStr[i];
	}
	return result;
}

int getTotalWords(std::string books)
{
    int totalFound(0);

    for(int i(0),c(books.size());i<c;i++)
    {
        //basic condition
        //I love you babe. I want to marry you. What do you think?
        //conditions  || books[i]=="." || books[i]=="," || books[i]==""
        if(books[i]==' ' || books[i]=='\n')
        {
            totalFound++;
        }
    }
    return totalFound;
}
