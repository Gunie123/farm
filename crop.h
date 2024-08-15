#include <string>
#include <soil.h>
#include <market.h>
using namespace std;

class Crop
{
protected:
    string name;                  // ��������
    double yield = 0;             // �ո�����
    int growthTime = 0;           // ����ʱ��
    int growthPeriod;             // ��������
    double irrigationRequirement; // ȱˮ��
    double fertilizerRequirement; // ȱ����
    bool harvest = 0;             // �Ƿ����
    int life = 100;               // ����ֵ
    int buy_in_price;             // ����۸�
    double marketValue;           // �г������۸�
public:
    Crop();
    virtual ~Crop() = default;

    // �����Ӧ����������
    string getName() const
    {
        return name;
    }

    double getYield() const
    {
        return yield;
    }

    int getGrowthTime() const
    {
        return growthTime;
    }

    int getGrowthPeriod() const
    {
        return growthPeriod;
    }

    double getMarketValue() const
    {
        return marketValue;
    }

    double getIrrigationRequirement() const
    {
        return irrigationRequirement;
    }

    double getFertilizerRequirement() const
    {
        return fertilizerRequirement;
    }

    virtual bool judge_if_harvest() = 0; // �ж��Ƿ����

    virtual bool judge_if_life() = 0; // �ж��Ƿ񻹻���

    virtual bool influenceall(const Soil &soil, const Market &market) = 0; // ͨ���������г�����Ϣ����������Ӧ������ֵ
};

// �����������ʾ��
class Corn : public Crop
{
public:
    Corn();
    ~Corn();

    bool judge_if_harvest() override;

    bool influenceall(const Soil &soil, const Market &market);
};
