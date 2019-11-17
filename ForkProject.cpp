#include <iostream>
#include <string>

using namespace std;

int findCount(string theString, int theLength);
int main()
{
    string originalExcerpt = "PUERTO RICO, 1963. I was born in the back of a 1957 Chevy on the way to the hospital. I may have been born where I was conceived. Considering that my mother went into labor while sitting in the outhouse, being born in a car was not so bad. My father passed away when I was very young. I was almost five years old when he died. I don’t have too many memories of him other than what my mother has told me and the personal memory of seeing him on his deathbed. I wish he could have been there to guide me through life, to give the advice that only one’s father can give. My mother was a young girl when she married my father. She was sixteen, he was seventy-four. He was a widower with six children, all older than my mother, and he had several grandchildren her age. His children resented my mother for being so young and marrying such an old man. To this day one of them still does not really accept my sisters and me as siblings. I don’t know much about my father. I never bothered to ask, but those who claim they knew him say he was a good man. I’ll take their word for it I guess, but even Richard Nixon was considered a good man after he died. As you can expect from an old geezer marrying a teenager, my father died while my sisters and I were still very young. To me, the fact that a seventy-four-year-old man fathered three kids with a teenage girl is incredible. After my father passed away, my mother, still a young woman, remarried quickly. I don’t remember my mother’s courtship or ever meeting the man before she married him. Perhaps I was too young to remember or maybe she never stopped to think that what we thought of him was important. I do remember being beaten, almost tortured, by my aunt and cousins when my mother went away on her honeymoon. I guess I wasn’t that young; after all, I do remember the pain.";
    string copyExcerpt = originalExcerpt;
	string dummy;
    int theLength = 40;
    

    cout << "We counted " << findCount(copyExcerpt, theLength) << " words with length " << theLength << "." << endl;

	cout << "Press enter to continue." << endl;
	getline(cin, dummy);
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