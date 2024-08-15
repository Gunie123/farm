#include <string>
using namespace std;

class weather
{
protected:
    string name;                          // ��������
    int ihumidity;                        // ʪ��Ӱ��
    int ifertility;                       // ����Ӱ��
    int ipesticideResidue;                // ũҩ����Ӱ��
    int itemperature;                     // �¶�Ӱ��
    virtual int influence_humidity() = 0; // �趨�����ֵ
    virtual int influence_fertility() = 0;
    virtual int influence_temperature() = 0;
    virtual int influence_pesticideResidue() = 0;

public:
    weather(const string &name) : name(name) {}
    string getName() const { return name; }
};

class SunnyWeather : public weather
{
public:
    SunnyWeather() : weather("Sunny Weather") {}
    int influence_humidity()
    {
        // ʾ��
        ihumidity = -1;
        return ihumidity;
    }
    int influence_fertility();
    int influence_soilPermeability();
    int influence_pesticideResidue();
};

class RainyWeather : public weather
{
public:
    RainyWeather() : weather("Rainy Weather") {}
    int influence_humidity();
    int influence_fertility();
    int influence_soilPermeability();
    int influence_pesticideResidue();
};

class SnowyWeather : public weather
{
public:
    SnowyWeather() : weather("Snowy Weather") {}
    int influence_humidity();
    int influence_fertility();
    int influence_soilPermeability();
    int influence_pesticideResidue();
};

class WindyWeather : public weather
{
public:
    WindyWeather() : weather("Windy Weather") {}
    int influence_humidity();
    int influence_fertility();
    int influence_soilPermeability();
    int influence_pesticideResidue();
};
