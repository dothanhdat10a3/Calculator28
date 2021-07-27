#include "CalcAlg.cpp"

enum INPUT_TYPE {
    DECIMAL = 10,
    OCTAL = 8,
    BINARY = 2,
    HEXADECIMAL = 16
};

class Number
{
    Number(){}
    ~Number(){}
private:
    long long m_number;

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
            CalcAlg::castToDecimal(m_number, m_numberDecimal, m_getNumberDecimal);
            break;
        case BINARY:
            CalcAlg::castToBinary(m_number,m_numberBin, m_getNumberBin);
            break;
        case OCTAL:
            CalcAlg::castToOctal(m_number, m_numberOct, m_getNumberOct);
            break;
        case HEXADECIMAL:
            CalcAlg::castToHexadecimal(m_number, m_numberHex, m_getNumberHex);
            break;
        default:
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

