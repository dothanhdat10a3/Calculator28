#include "CalcAlg.cpp"
//#include <string>
using namespace std;
enum INPUT_TYPE {
    DECIMAL = 10,
    OCTAL = 8,
    BINARY = 2,
    HEXADECIMAL = 16
};
// Do Thanh Dat
enum RADIX_TYPE{
    HEX = 16,
    OCT = 8,
    BIN = 2,
    DEC = 10
};

class Number
{
public:
    Number(){}
    ~Number(){}
private:
    long long m_number;
    string numberInput;

    long long m_numberDecimal[64] = { 0 };
    long long m_getNumberDecimal[64] = { 0 };
    long long m_numberBin[64] = { 0 };
    long long m_getNumberBin[64] = { 0 };
    long long m_numberOct[64] = { 0 };
    long long m_getNumberOct[64] = { 0 };
    long long m_numberHex[64] = { 0 };
    long long m_getNumberHex[64] = { 0 };
public:
    void setNumber(INPUT_TYPE inputType)
    {
        switch (inputType)
        {
        case DECIMAL:
            CalcAlg::castNumberFromDecimalToDecimal(m_number, m_numberDecimal, m_getNumberDecimal);
            break;
        case BINARY:
            CalcAlg::castNumberFromDecimalToBinary(m_number,m_numberBin, m_getNumberBin);
            break;
        case OCTAL:
            CalcAlg::castNumberFromDecimalToOctal(m_number, m_numberOct, m_getNumberOct);
            break;
        case HEXADECIMAL:
            CalcAlg::castNumberFromDecimalToHexadecimal(m_number, m_numberHex, m_getNumberHex);
            break;
        default:
            break;


        }
    }
    void castNumberToDecimal(RADIX_TYPE radixType){
        switch(radixType)
        {
        case DEC: CalcAlg::castNumberFromDecToDecimal(numberInput, m_number);
            break;
        case BIN: CalcAlg::castNumberFromBinToDecimal(numberInput,m_number);
            break;
        case OCT: CalcAlg::castNumberFromOctToDecimal(numberInput,m_number);
            break;
        case HEX: CalcAlg::castNumberFromHexToDecimal(numberInput,m_number);
            break;
        default :
            break;
        }
    }

    long long* getDecimalNumber()
    {
        return m_getNumberDecimal;
    }
    long long* getBinaryNumber()
    {
        return m_getNumberBin;
    }
    long long* getOctalNumber()
    {
        return m_getNumberOct;
    }
    long long* getHexadecimalNumber()
    {
        return m_getNumberHex;
    }
};

