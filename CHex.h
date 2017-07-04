#ifndef CHEX_H
#define CHEX_H
#include <QString>

using namespace  std;
class CHex
{
public:
    CHex();

public:
    //  项目1公共数据区
    unsigned short GetProjectCount();

    // 项目1公共数据区
    void SetProjectCount(unsigned short usProjectCount);
private:
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

};

#endif // CHEX_H
