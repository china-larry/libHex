#include "CHex.h"

CHex::CHex()
{

}

unsigned short CHex::GetProjectCount()
{
    return m_usProjectCount;
}

QString CHex::GetrBatchPreNum()
{
    return m_strBatchPreNum;
}

unsigned short CHex::GetBarcodeFlag()
{
    return m_usBarcodeFlag;
}

unsigned short CHex::GetBarcodeNum()
{
    return m_usBarcodeNum;
}

unsigned short CHex::GetStandardCount()
{
    return m_usStandardCount;
}

unsigned short CHex::GetTemperatureFlag()
{
    return m_usTemperatureFlag;
}

unsigned short CHex::GetAreaUseFlag()
{
    return m_usAreaUseFlag;
}

QString CHex::GetrAreaUseName()
{
    return m_strAreaUseName;
}

QString CHex::GetrTitleName()
{
    return m_strTitleName;
}

QString CHex::GetrUnitName()
{
    return m_strUnitName;
}

unsigned short CHex::GetDecimalsDigit()
{
    return m_usDecimalsDigit;
}

unsigned short CHex::GetCountDownTime()
{
    return m_usCountDownTime;
}

unsigned short CHex::GetTestTime()
{
    return m_usTestTime;
}

unsigned short CHex::GetInstrumentType()
{
    return m_usInstrumentType;
}

unsigned short CHex::GetTCTestValue()
{
    return m_usTCTestValue;
}

unsigned short CHex::GetTCMolecularValue()
{
    return m_usTCMolecularValue;
}

unsigned short CHex::GetTCDenominatorValue()
{
    return m_usTCDenominatorValue;
}

double CHex::GetSerumValue()
{
    return m_dSerumValue;
}

double CHex::GetWholeBloodValue()
{
    return m_dWholeBloodValue;
}

double CHex::GetUrineValue()
{
    return m_dUrineValue;
}

double CHex::GetExcrementValue()
{
    return m_dExcrementValue;
}

double CHex::GetQualityLiquidValue()
{
    return m_dQualityLiquidValue;
}

double CHex::GetACoefficientValue()
{
    return m_dACoefficientValue;
}

double CHex::GetBCoefficientValue()
{
    return m_dBCoefficientValue;
}

double CHex::GetA1CoefficientValue()
{
    return m_dA1CoefficientValue;
}

double CHex::GetB1CoefficientValue()
{
    return m_dB1CoefficientValue;
}

unsigned short *CHex::GetPeakName()
{
    return m_usPeakName;
}

unsigned short *CHex::GetPeakBeginArray()
{
    return m_usPeakBeginArray;
}

unsigned short *CHex::GetzPeankEndArray()
{
    return m_usPeankEndArray;
}

unsigned short *CHex::GetPeakValueNumArray()
{
    return m_usPeakValueNumArray;
}

unsigned short *CHex::GetPeakXBeginArray()
{
    return m_usPeakXBeginArray;
}

unsigned short *CHex::GetPeankXEndArray()
{
    return m_usPeankXEndArray;
}

unsigned short *CHex::GetPeakXValueNumArray()
{
    return m_usPeakXValueNumArray;
}

double *CHex::GetRangMinArray()
{
    return m_dRangMinArray;
}

double *CHex::GetRangMaxArray()
{
    return m_dRangMaxArray;
}

QString *CHex::GetProjectNameArray()
{
    return m_strProjectNameArray;
}

unsigned short CHex::GetPrintInfoCount()
{
    return m_usPrintInfoCount;
}

QString CHex::GetPrintInfo()
{
    return m_strPrintInfo;
}
///////////////////////////////////////////////////////////////////////////////////
void CHex::SetProjectCount(unsigned short usProjectCount)
{
    m_usProjectCount = usProjectCount;
}

void CHex::SetrBatchPreNum(QString strBatchPreNum)
{
    m_strBatchPreNum = strBatchPreNum;
}

void CHex::SetBarcodeFlag(unsigned short usBarcodeFlag)
{
    m_usBarcodeFlag = usBarcodeFlag;
}

void CHex::SetBarcodeNum(unsigned short usBarcodeNum)
{
    m_usBarcodeNum = usBarcodeNum;
}

void CHex::SetStandardCount(unsigned short usStandardCount)
{
    m_usStandardCount = usStandardCount;
}

void CHex::SetTemperatureFlag(unsigned short usTemperatureFlag)
{
    m_usTemperatureFlag = usTemperatureFlag;
}

void CHex::SetAreaUseFlag(unsigned short usAreaUseFlag)
{
    m_usAreaUseFlag = usAreaUseFlag;
}

void CHex::SetrAreaUseName(QString strAreaUseName)
{
    m_strAreaUseName = strAreaUseName;
}

void CHex::SetrTitleName(QString strTitleName)
{
    m_strTitleName = strTitleName;
}

void CHex::SetrUnitName(QString strUnitName)
{
    m_strUnitName = strUnitName;
}

void CHex::SetDecimalsDigit(unsigned short usDecimalsDigit)
{
    m_usDecimalsDigit = usDecimalsDigit;
}

void CHex::SetCountDownTime(unsigned shortusCountDownTime)
{
    m_usCountDownTime = shortusCountDownTime;
}

void CHex::SetTestTime(unsigned short usTestTime)
{
    m_usTestTime = usTestTime;
}

void CHex::SetInstrumentType(unsigned short usInstrumentType)
{
    m_usInstrumentType = usInstrumentType;
}

void CHex::SetTCTestValue(unsigned short usTCTestValue)
{
    m_usTCTestValue = usTCTestValue;
}

void CHex::SetTCMolecularValue(unsigned short usTCMolecularValue)
{
    m_usTCMolecularValue = usTCMolecularValue;
}

void CHex::SetTCDenominatorValue(unsigned short usTCDenominatorValue)
{
    m_usTCDenominatorValue = usTCDenominatorValue;
}

void CHex::SetSerumValue(double dSerumValue)
{
    m_dSerumValue = dSerumValue;
}

void CHex::SetWholeBloodValue(double dWholeBloodValue)
{
    m_dWholeBloodValue = dWholeBloodValue;
}

void CHex::SetUrineValue(double dUrineValue)
{
    m_dUrineValue = dUrineValue;
}

void CHex::SetExcrementValue(double dExcrementValue)
{
    m_dExcrementValue = dExcrementValue;
}

void CHex::SetQualityLiquidValue(double dQualityLiquidValue)
{
    m_dQualityLiquidValue = dQualityLiquidValue;
}

void CHex::SetACoefficientValue(double dACoefficientValue)
{
    m_dACoefficientValue = dACoefficientValue;
}

void CHex::SetBCoefficientValue(double dBCoefficientValue)
{
    m_dBCoefficientValue = dBCoefficientValue;
}

void CHex::SetA1CoefficientValue(double dA1CoefficientValue)
{
    m_dA1CoefficientValue = dA1CoefficientValue;
}

void CHex::SetB1CoefficientValue(double dB1CoefficientValue)
{
    m_dB1CoefficientValue = dB1CoefficientValue;
}

void CHex::SetPeakName(unsigned short *usPeakName)
{
    memcpy(m_usPeakName, usPeakName, 3);
}

void CHex::SetPeakBeginArray(unsigned short *usPeakBeginArray)
{
    memcpy(m_usPeakBeginArray, usPeakBeginArray, 3);
}

void CHex::SetzPeankEndArray(unsigned short *usPeankEndArray)
{
    memcpy(m_usPeankEndArray, usPeankEndArray, 3);
}

void CHex::SetPeakValueNumArray(unsigned short *usPeakValueNumArray)
{
    memcpy(m_usPeakValueNumArray, usPeakValueNumArray, 3);
}

void CHex::SetPeakXBeginArray(unsigned short *usPeakXBeginArray)
{
    memcpy(m_usPeakXBeginArray, usPeakXBeginArray, 4);
}

void CHex::SetPeankXEndArray(unsigned short *usPeankXEndArray)
{
    memcpy(m_usPeankXEndArray, usPeankXEndArray, 4);
}

void CHex::SetPeakXValueNumArray(unsigned short *usPeakXValueNumArray)
{
    memcpy(m_usPeakXValueNumArray, usPeakXValueNumArray, 4);
}

void CHex::SetRangMinArray(double *dRangMinArray)
{
    memcpy(m_dRangMinArray, dRangMinArray, 5);
}

void CHex::SetRangMaxArray(double *dRangMaxArray)
{
    memcpy(m_dRangMaxArray, dRangMaxArray, 5);
}

void CHex::SetProjectNameArray(QString *strProjectNameArray)
{
    memcpy(m_strProjectNameArray, strProjectNameArray, 5);
}

void CHex::SetPrintInfoCount(unsigned short usPrintInfoCount)
{
    m_usPrintInfoCount = usPrintInfoCount;
}

void CHex::SetPrintInfo(QString strPrintInfo)
{
    m_strPrintInfo = strPrintInfo;
}
