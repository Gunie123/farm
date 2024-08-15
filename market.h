#include <string>
#include <map>
#include <string>
using namespace std;

class Market
{

private:
    // �洢��ͬũ��Ʒ���г��۸�ʹ��������Ϊ�����۸���Ϊֵ
    map<string, float> inprices;
    map<string, float> outprices;

public:
    // ��ʼ���г��۸�
    Market();

    // ��ȡũ��Ʒ������۸�
    float getinPrice(const string &item) const;

    // �ı�ũ��Ʒ������۸�
    void setinPrice(const string &item, float price);

    // ��ȡũ��Ʒ�������۸�
    float getoutPrice(const string &item) const;

    // �ı�ũ��Ʒ�������۸�
    void setoutPrice(const string &item, float price);
};