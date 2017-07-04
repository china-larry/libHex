#ifndef CHEX_H
#define CHEX_H
#include <QString>

using namespace  std;
class CHex
{
public:
    CHex();

public:

    ///////////////////////////////////////////////////////
    //  项目1公共数据区
    unsigned short GetProjectCount();// 项目数
    QString GetrBatchPreNum();// 批号前缀
    unsigned short GetBarcodeFlag();// 条码标识
    unsigned short GetBarcodeNum();// 条码号
    unsigned short GetStandardCount();// 标准点数
    unsigned short GetTemperatureFlag();// 是否温度补偿
    unsigned short GetAreaUseFlag();// 是否设定区域
    QString GetrAreaUseName();// 区域名称
    QString GetrTitleName();// 报告单标题】
    QString GetrUnitName();// 单位名称
    unsigned short GetDecimalsDigit();// 小数点位
    unsigned short GetCountDownTime();// 倒计时时间
    unsigned short GetTestTime();// 测试时间
    unsigned short GetInstrumentType();// 仪器类型
    // 测试值
    unsigned short GetTCTestValue();// TC公式 0-7
    unsigned short GetTCMolecularValue();// TC分子，1-4
    unsigned short GetTCDenominatorValue();// TC分母,1-
    //
    double GetSerumValue();// 血清血浆系数
    double GetWholeBloodValue();// 全血系数
    double GetUrineValue();// 尿液系数
    double GetExcrementValue();// 粪便系数
    double GetQualityLiquidValue();// 质控液系数
    double GetACoefficientValue();// a系数
    double GetBCoefficientValue();// b系数
    double GetA1CoefficientValue();// a1系数
    double GetB1CoefficientValue();// b1系数
    // 单项目峰值名称
    unsigned short* GetPeakName();
    // 单项目峰值开始位置
    unsigned short* GetPeakBeginArray();
    // 单项目峰值结束位置
    unsigned short* GetzPeankEndArray();
    // 单项目峰值取值数量
    unsigned short* GetPeakValueNumArray();
    // 多项目峰值开始位置
    unsigned short* GetPeakXBeginArray();
    // 多项目峰值结束位置
    unsigned short* GetPeankXEndArray();
    // 多项目峰值取值数量
    unsigned short* GetPeakXValueNumArray();
    // 检测范围
    double* GetRangMinArray();
    double* GetRangMaxArray();
    // 项目名称
    QString* GetProjectNameArray();
    // 打印信息
    unsigned short GetPrintInfoCount();
    QString GetPrintInfo();// 倒叙打印

    ///////////////////////////////////////////////////////
    // 项目1公共数据区
    void SetProjectCount(unsigned short usProjectCount);
    void SetrBatchPreNum(QString strBatchPreNum);// 批号前缀
    void SetBarcodeFlag(unsigned short usBarcodeFlag);// 条码标识
    void SetBarcodeNum(unsigned short usBarcodeNum);// 条码号
    void SetStandardCount(unsigned short usStandardCount);// 标准点数
    void SetTemperatureFlag(unsigned short usTemperatureFlag);// 是否温度补偿
    void SetAreaUseFlag(unsigned short usAreaUseFlag);// 是否设定区域
    void SetrAreaUseName(QString strAreaUseName);// 区域名称
    void SetrTitleName(QString strTitleName);// 报告单标题】
    void SetrUnitName(QString strUnitName);// 单位名称
    void SetDecimalsDigit(unsigned short usDecimalsDigit);// 小数点位
    void SetCountDownTime(unsigned shortusCountDownTime);// 倒计时时间
    void SetTestTime(unsigned short usTestTime);// 测试时间
    void SetInstrumentType(unsigned short usInstrumentType);// 仪器类型
    // 测试值
    void SetTCTestValue(unsigned short usTCTestValue);// TC公式 0-7
    void SetTCMolecularValue(unsigned short usTCMolecularValue);// TC分子，1-4
    void SetTCDenominatorValue(unsigned short usTCDenominatorValue);// TC分母,1-
    //
    void SetSerumValue(double dSerumValue);// 血清血浆系数
    void SetWholeBloodValue(double dWholeBloodValue);// 全血系数
    void SetUrineValue(double dUrineValue);// 尿液系数
    void SetExcrementValue(double dExcrementValue);// 粪便系数
    void SetQualityLiquidValue(double dQualityLiquidValue);// 质控液系数
    void SetACoefficientValue(double dACoefficientValue);// a系数
    void SetBCoefficientValue(double dBCoefficientValue);// b系数
    void SetA1CoefficientValue(double dA1CoefficientValue);// a1系数
    void SetB1CoefficientValue(double dB1CoefficientValue);// b1系数
    // 单项目峰值名称
    void SetPeakName(unsigned short *usPeakName);
    // 单项目峰值开始位置
    void SetPeakBeginArray(unsigned short *usPeakBeginArray);
    // 单项目峰值结束位置
    void SetzPeankEndArray(unsigned short *usPeankEndArray);
    // 单项目峰值取值数量
    void SetPeakValueNumArray(unsigned short *usPeakValueNumArray);
    // 多项目峰值开始位置
    void SetPeakXBeginArray(unsigned short *usPeakXBeginArray);
    // 多项目峰值结束位置
    void SetPeankXEndArray(unsigned short *usPeankXEndArray);
    // 多项目峰值取值数量
    void SetPeakXValueNumArray(unsigned short *usPeakXValueNumArray);
    // 检测范围
    void SetRangMinArray(double* dRangMinArray);
    void SetRangMaxArray(double* dRangMaxArray);
    // 项目名称
    void SetProjectNameArray(QString* strProjectNameArray);
    // 打印信息
    void SetPrintInfoCount(unsigned short usPrintInfoCount);
    void SetPrintInfo(QString strPrintInfo);// 倒叙打印
private:
    ///////////////////////////////////////////////////////
    // 项目1公共数据区
    unsigned short m_usProjectCount;// 项目数
    QString m_strBatchPreNum;// 批号前缀
    unsigned short m_usBarcodeFlag;// 条码标识
    unsigned short m_usBarcodeNum;// 条码号
    unsigned short m_usStandardCount;// 标准点数
    unsigned short m_usTemperatureFlag;// 是否温度补偿
    unsigned short m_usAreaUseFlag;// 是否设定区域
    QString m_strAreaUseName;// 区域名称
    QString m_strTitleName;// 报告单标题】
    QString m_strUnitName;// 单位名称
    unsigned short m_usDecimalsDigit;// 小数点位
    unsigned short m_usCountDownTime;// 倒计时时间
    unsigned short m_usTestTime;// 测试时间
    unsigned short m_usInstrumentType;// 仪器类型
    // 测试值
    unsigned short m_usTCTestValue;// TC公式 0-7
    unsigned short m_usTCMolecularValue;// TC分子，1-4
    unsigned short m_usTCDenominatorValue;// TC分母,1-4
    //
    double m_dSerumValue;// 血清血浆系数
    double m_dWholeBloodValue;// 全血系数
    double m_dUrineValue;// 尿液系数
    double m_dExcrementValue;// 粪便系数
    double m_dQualityLiquidValue;// 质控液系数
    double m_dACoefficientValue;// a系数
    double m_dBCoefficientValue;// b系数
    double m_dA1CoefficientValue;// a1系数
    double m_dB1CoefficientValue;// b1系数
    // 单项目峰值名称
    unsigned short m_usPeakName[3];
    // 单项目峰值开始位置
    unsigned short m_usPeakBeginArray[3];
    // 单项目峰值结束位置
    unsigned short m_usPeankEndArray[3];
    // 单项目峰值取值数量
    unsigned short m_usPeakValueNumArray[3];
    // 多项目峰值开始位置
    unsigned short m_usPeakXBeginArray[4];
    // 多项目峰值结束位置
    unsigned short m_usPeankXEndArray[4];
    // 多项目峰值取值数量
    unsigned short m_usPeakXValueNumArray[4];
    // 检测范围
    double m_dRangMinArray[5];
    double m_dRangMaxArray[5];
    // 项目名称
    QString m_strProjectNameArray[5];
    // 打印信息
    unsigned short m_usPrintInfoCount;
    QString m_strPrintInfo;// 倒叙打印
    ///////////////////////////////////////////////////////
    // 项目1飞测2数据区

};

#endif // CHEX_H
