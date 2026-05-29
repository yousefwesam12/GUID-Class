#include <iostream>
#include <cstdlib>

using namespace std;

class Guid
{
    private:
    int GenerateRandomNumber(int From,int To)
    {
        return rand() % (To-From+1) + From;
    }

    char GetRandomHexadecimalBit()
    {
        char Arr[] = {'a','b','c','d','e','f','0','1','2','3','4','5','6','7','8','9'};

        return Arr[GenerateRandomNumber(0,15)];
    }
    
    string GenerateSequenceOfHexadecimal(const int Length)
    {   
        string Res = "";

        for(int i = 0;i<Length;i++)
        {
            Res += GetRandomHexadecimalBit();
        }
        return Res;
    }
    
    public:
    Guid()
    {
            srand(time(0));
    }
    
    string NewGuid()
    {
        string Guid = 
        GenerateSequenceOfHexadecimal(8) + '-' 
        + GenerateSequenceOfHexadecimal(4) + '-'
        + GenerateSequenceOfHexadecimal(4) + '-'
        + GenerateSequenceOfHexadecimal(4) + '-'
        + GenerateSequenceOfHexadecimal(12);
        return Guid;
    }
};


int main()
{

    Guid MyGuid;

    string Result = MyGuid.NewGuid();

    for(int i = 1;i<=10;i++)
    {
        string Result = MyGuid.NewGuid();
        cout << Result << '\n';
    }
};