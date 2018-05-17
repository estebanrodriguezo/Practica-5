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
    Cuerpo1(double px1_=0, double py1_=0, int M1_=50000, int R1_=200, double vx1_=0, double vy1_=0);
    double get_px1();
    double get_py1();
    int get_M1();
    void inter_cuerpo2(int M2, double px2, double py2);
    void inter_cuerpo3(int M3, double px3, double py3);
    void inter_cuerpo4(int M4, double px4, double py4);
    void inter_cuerpo5(int M5, double px5, double py5);
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
    Cuerpo2(double px2_=-5000, double py2_=0, int M2_=70, int R2_=70, double vx2_=0, double vy2_=-2);
    double get_px2();
    double get_py2();
    int get_M2();
    void inter_cuerpo1(int M1, double px1, double py1);
    void inter_cuerpo3(int M3, double px3, double py3);
    void inter_cuerpo4(int M4, double px4, double py4);
    void inter_cuerpo5(int M5, double px5, double py5);
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
    Cuerpo3(double px3_=5000, double py3_=0, int M3_=70, int R3_=70, double vx3_=0, double vy3_=2);
    double get_px3();
    double get_py3();
    int get_M3();
    void inter_cuerpo1(int M1, double px1, double py1);
    void inter_cuerpo2(int M2, double px2, double py2);
    void inter_cuerpo4(int M4, double px4, double py4);
    void inter_cuerpo5(int M5, double px5, double py5);
    void mod_aceleracion();
    void calc_pos();
};

class Cuerpo4{
private:
    double px4;
    double py4;
    int M4;
    int R4;
    double vx4;
    double vy4;
    double ax4;
    double ay4;

public:
    Cuerpo4(double px4_=0, double py4_=-5000, int M4_=70, int R4_=70, double vx4_=2, double vy4_=0);
    double get_px4();
    double get_py4();
    int get_M4();
    void inter_cuerpo1(int M1, double px1, double py1);
    void inter_cuerpo2(int M2, double px2, double py2);
    void inter_cuerpo3(int M3, double px3, double py3);
    void inter_cuerpo5(int M5, double px5, double py5);
    void mod_aceleracion();
    void calc_pos();
};

class Cuerpo5{
private:
    double px5;
    double py5;
    int M5;
    int R5;
    double vx5;
    double vy5;
    double ax5;
    double ay5;

public:
    Cuerpo5(double px5_=0, double py5_=5000, int M5_=70, int R5_=70, double vx5_=-2, double vy5_=0);
    double get_px5();
    double get_py5();
    int get_M5();
    void inter_cuerpo1(int M1, double px1, double py1);
    void inter_cuerpo2(int M2, double px2, double py2);
    void inter_cuerpo3(int M3, double px3, double py3);
    void inter_cuerpo4(int M4, double px4, double py4);
    void mod_aceleracion();
    void calc_pos();
};
#endif // CUERPOS_H






