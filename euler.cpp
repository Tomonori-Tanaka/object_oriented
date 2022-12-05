#include <iostream>
#include <cmath>

struct ODE
{
public:
    double getInitialVal();
    double rh_func(double x, double t); // right-hand function of ode
};

struct Malthus : ODE
{
    //
    //   malthus model
    //   dx(t)/dt = a * x(t)
    //
private:
    double param_a; // parameter in the malthus model
    double initialVal;
public:
    Malthus(double, double);
    double getInitialVal();
    double rh_func(double, double);
};
Malthus::Malthus(double param_a, double initialVal)
{
    this->param_a = param_a;
    this->initialVal = initialVal;
}

double Malthus::getInitialVal()
{
    return this->initialVal;
}

double Malthus::rh_func(double x, double t)
{
    return this->param_a * x;
}

// Scheme interface
//template <typename T>
struct Scheme
{
public:
    double calcNextX(Malthus sys, double currentX, double currentY);
    // void getSolution(Malthus sys);
};
 
//template <typename T>
struct Euler : Scheme
{
private:
    double dt;
    int timeStep;
public:
    Euler(double , int);
    double calcNextX(Malthus sys, double currentX, double currentY);
    // void getSolution(Malthus sys);
};

//template <typename T>
double Euler::calcNextX(Malthus sys, double currentX, double currentY)
{
        return currentX + sys.rh_func(currentX, currentY) * this->dt;
}

/* struct test {
public:
    virtual void func() = 0;
};

struct son : public test {
    int a;

    son()
    {
        a = 10;
    }    
    void func()
    {
        std::cout << a << std::endl;
    }
};

template<typename T>    // T is assumed to be test:* type
struct call
{
    void call_f(T test_ins){
        test_ins.func();
    }
}; */


int main()
{
 /*    son son_ins;
    call<son> call_ins; 
    call_ins.call_f(son_ins); */

    return 0;
}