#include <iostream>
using namespace std;
class engine
{
protected:
    float out, in, efficiency;

public:

    virtual float GetEfficiency() = 0;
};
class internalcombustineengine :public  virtual engine
{
protected:
    float out, in, efficiency;
public:
    float GetEffiency()
    {
        efficiency = out / in;
        cout << "efficiency is " << efficiency;
        cout << "the efficiency is :";
        return efficiency;
    }



};
class externalcombustineengine :public  virtual  engine
{
protected:
    float out, in, efficiency;
public:

    float GetEffiency()
    {
        efficiency = out / in;
        return  efficiency;

    }


};
class petrolengine :public internalcombustineengine
{
protected:
    float out, in, efficiency;

public:
    float GetEfficiency()
    {
        cout << "enter the input of petrol engine\n";
        cin >> in;
        cout << "enter the output of petrol engine\n";
        cin >> out;
        efficiency = out / in;
        cout << "the efficiency is :";
        return efficiency;
    }
};
class dieselengine :public internalcombustineengine
{

public:
    float GetEfficiency()
    {
        cout << "enter the input of diesel engine\n";
        cin >> in;
        cout << "enter the output of diesel engine\n";
        cin >> out;
        efficiency = out / in;
        cout << "the efficiency is :";
        return  efficiency;
    }
};
class steam : public externalcombustineengine
{
protected:
    float out, in, efficiency;
public:
    float GetEfficiency()
    {
        cout << "enter the input of steam engine\n";
        cin >> in;
        cout << "enter the output of steam engine\n";
        cin >> out;
        efficiency = out / in;
        cout << "the efficiency is :";
        return efficiency;
    }
};
int main()
{

    int no;
    cout << "select any engine\n1.petrol engine\n2.diesel engine\n3.steam engine\n";
    cin >> no;
    if (no == 1)
    {
        cout << "you selected petrol engine\n";



        petrolengine p;


        cout << p.GetEfficiency();
    }
    else if (no == 2)

    {
        cout << "you selected diesel engine\n";
        dieselengine d;

        cout << d.GetEfficiency();

    }
    else if (no == 3)
    {
        cout << "you selected steam engine\n";

        steam s;
        cout << s.GetEfficiency();
    }

    else {
        cout << "error--no. doesn't matches!!!!";



    }
}