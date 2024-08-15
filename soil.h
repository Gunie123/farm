#include <weather.h>
class Soil
{
protected:
    float humidity = 0;                                     // ����ʪ��
    float temperature = 0;                                  // �����¶�
    float fertility = 0;                                    // ��������
    float pesticideResidue = 0;                             // ũҩ����
    int id;                                                 // ������id
    virtual void weather(const class Weather &weather) = 0; // ���������޸��������������
    virtual void applyFertilizer(int Fertilize) = 0;        // ʩ�û���
    virtual void applyPesticide(int Pesticide) = 0;         // ��ũҩ
    virtual void irrigate(int water) = 0;                   // ���
    virtual void mulch(int time) = 0;                       // ���ǵ�Ĥ

public:
    Soil();
    virtual ~Soil() = default;
    // ��ȡ��ر�����ֵ
    float getHumidity() const
    {
        return humidity;
    }

    float getTemperature() const
    {
        return temperature;
    }

    float getFertility() const
    {
        return fertility;
    }

    float getPesticideResidue() const
    {
        return pesticideResidue;
    }

    int getId() const
    {
        return id;
    }
};

// �����������
class ClaySoil : public Soil
{
public:
    ClaySoil() {}
    ~ClaySoil() override {}

    void weather(const Weather &weather);

    void applyFertilizer(int Fertilize);

    void applyPesticide(int Pesticide);

    void irrigate(int water);

    void mulch(int time);
};
