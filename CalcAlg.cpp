//Do Thanh Dat test commit
#include <math.h>
#include <string>
using namespace std;
long long m_decValue;
namespace CalcAlg
{

    static inline long long* castNumberFromDecimalToDecimal(long long m_number, long long m_numberDecimal[], long long m_getNumberDecimal[])
    {
        int i;
        for (i = 0; m_number > 0; i++)
        {
            m_numberDecimal[i] = m_number % 10;
            m_number = m_number / 10;
        }

        for (i = i - 1; i >= 0; i--)
        {
            m_getNumberDecimal += m_numberDecimal[i];
        }
        return m_getNumberDecimal;
    }
    static inline long long* castNumberFromDecimalToBinary(long long m_number, long long m_numberBin[], long long m_getNumberBin[])
    {
            int i;
            for (i = 0; m_number > 0; i++)
            {
                m_numberBin[i] = m_number % 2;
                m_number = m_number / 2;
            }

            for (i = i - 1; i >= 0; i--)
            {
                m_getNumberBin += m_numberBin[i];
            }
            return m_getNumberBin;
    }
    static inline long long* castNumberFromDecimalToOctal(long long m_number, long long m_numberOct[], long long m_getNumberOct[])
    {
            int i;
            for (i = 0; m_number > 0; i++)
            {
                m_numberOct[i] = m_number % 8;
                m_number = m_number / 8;
            }


            for (i = i - 1; i >= 0; i--)
            {
                m_getNumberOct += m_numberOct[i];
            }
        return m_getNumberOct;
    }
    static inline long long* castNumberFromDecimalToHexadecimal(long long m_number, long long m_numberHex[], long long m_getNumberHex[])
    {
        int i;
        for (i = 0; m_number > 0; i++)
        {
            m_numberHex[i] = m_number % 16;
            m_number = m_number / 16;
        }
        for (i = i - 1; i >= 0; i--)
        {
            m_getNumberHex += m_numberHex[i];
        }
       return m_getNumberHex;
    }

    int castNumberFromDecToDecimal(string numberInput, long long m_number){
        int base = 10;
         for(int  i = numberInput.length() -1,j=0; i >= 0,i<numberInput.length() -1; i--,j++){
             m_decValue += numberInput[j]*pow(base,i);
         }
         m_number = m_decValue;
         return m_number;

    }
    int castNumberFromBinToDecimal(string numberInput, long long m_number){
        int base = 2;
           for(int  i = numberInput.length() -1,j=0; i >= 0,i<numberInput.length() -1; i--,j++){
               m_decValue += numberInput[j]*(pow(base,i));
           }
           m_number = m_decValue;
           return m_number;

    }
    int castNumberFromOctToDecimal(string numberInput, long long m_number){
        int base = 8;
           for(int  i = numberInput.length() -1,j=0; i >= 0,i<numberInput.length() -1; i--,j++){
               m_decValue += numberInput[j]*pow(base,i);
           }
           m_number = m_decValue;
           return m_number;
    }
    int castNumberFromHexToDecimal(string numberInput, long long m_number){
        int base = 16;
           for(int  i = numberInput.length() -1,j=0; i >= 0,i<numberInput.length() -1; i--,j++){
               m_decValue += numberInput[j]*pow(base,i);
           }
           m_number = m_decValue;
           return m_number;
    }

};
