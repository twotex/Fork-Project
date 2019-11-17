#include <iostream>
#include <string>

using namespace std;

int findCount(string theString, int theLength);
int main()
{
    string originalExcerpt = "Fam Bam Sham Hellacram Juicy";
    string copyExcerpt = originalExcerpt;
    
    int theLength = 3;
    

    cout << "We counted " << findCount(copyExcerpt, theLength) << " words with length " << theLength << "." << endl;
    cout << "Remainder string:" << copyExcerpt << "x" << endl;


    
    return 0;
}


int findCount(string copyExcerpt, int theLength)
{
    
    int theCounter = 0;
    size_t blankIndex;
    string stringToAnalyze = "";
    blankIndex = copyExcerpt.find(" ");

    while (blankIndex != string::npos || copyExcerpt != "")
    {
        if (blankIndex != string::npos)
        {
            stringToAnalyze = copyExcerpt.substr(0, blankIndex);
            copyExcerpt = copyExcerpt.substr(blankIndex + 1);

            if (stringToAnalyze.length() == theLength)
            {
                theCounter++;
            }

        }

        else
        {
            if (copyExcerpt.length() == theLength)
            {
                theCounter++;
            }

            copyExcerpt = "";
        }

        blankIndex = copyExcerpt.find(" ");
    }

    return theCounter;
}