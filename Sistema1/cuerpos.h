#ifndef CUERPOS_H
#define CUERPOS_H
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


class Cuerpo1{
private:
    double px1;
    double py1;
    int M1;
    int R1;
    double vx1;
    double vy1;
    double ax1;
    double ay1;

public:
    Cuerpo1(double px1_=0, double py1_=-7000, int M1_=70, int R1_=120, double vx1_=2, double vy1_=0);
    double get_px1();
    double get_py1();
    int get_M1();
    void inter_cuerpo2(int M2, double px2, double py2);
    void inter_cuerpo3(int M3, double px3, double py3);
    void mod_aceleracion();
    void calc_pos();
};

class Cuerpo2{
private:
    double px2;
    double py2;
    int M2;
    int R2;
    double vx2;
    double vy2;
    double ax2;
    double ay2;

public:
    Cuerpo2(double px2_=0, double py2_=0, int M2_=70000, int R2_=300, double vx2_=0, double vy2_=0);
    double get_px2();
    double get_py2();
    int get_M2();
    void inter_cuerpo1(int M1, double px1, double py1);
    void inter_cuerpo3(int M3, double px3, double py3);
    void mod_aceleracion();
    void calc_pos();
};

class Cuerpo3{
private:
    double px3;
    double py3;
    int M3;
    int R3;
    double vx3;
    double vy3;
    double ax3;
    double ay3;

public:
    Cuerpo3(double px3_=4000, double py3_=5000, int M3_=25, int R3_=100, double vx3_=-1.6, double vy3_=1.2);
    double get_px3();
    double get_py3();
    int get_M3();
    void inter_cuerpo1(int M1, double px1, double py1);
    void inter_cuerpo2(int M2, double px2, double py2);
    void mod_aceleracion();
    void calc_pos();
};

#endif // CUERPOS_H






