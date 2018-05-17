#include "cuerpos.h"

Cuerpo1::Cuerpo1(double px1_, double py1_, int M1_, int R1_, double vx1_, double vy1_):px1(px1_),py1(py1_),M1(M1_),R1(R1_),vx1(vx1_),vy1(vy1_){

}

double Cuerpo1::get_px1(){
    return px1;
}

double Cuerpo1::get_py1(){
    return py1;
}

int Cuerpo1::get_M1(){
    return M1;
}
void Cuerpo1::mod_aceleracion(){
    ax1 = 0;
    ay1= 0;
}

void Cuerpo1::inter_cuerpo2(int M2, double px2, double py2){
    double r = sqrt(pow((px2 - px1),2)+pow((py2 - py1),2));
    double theta = atan(sqrt(pow((py2-py1),2)/pow((px2-px1),2)))*180/PI;
    ax1 += M2/(r*r)*cos(theta*PI/180);
    ay1 += M2/(r*r)*sin(theta*PI/180);
}

void Cuerpo1::inter_cuerpo3(int M3, double px3, double py3){
    double r = sqrt(pow((px3 - px1),2)+pow((py3 - py1),2));
    double theta = atan(sqrt(pow((py3-py1),2)/pow((px3-px1),2)))*180/PI;
    ax1 += M3/(r*r)*cos(theta*PI/180);
    ay1 += M3/(r*r)*sin(theta*PI/180);
}

void Cuerpo1::inter_cuerpo4(int M4, double px4, double py4){
    double r = sqrt(pow((px4 - px1),2)+pow((py4 - py1),2));
    double theta = atan(sqrt(pow((py4-py1),2)/pow((px4-px1),2)))*180/PI;
    ax1 += M4/(r*r)*cos(theta*PI/180);
    ay1 += M4/(r*r)*sin(theta*PI/180);
}

void Cuerpo1::inter_cuerpo5(int M5, double px5, double py5){
    double r = sqrt(pow((px5 - px1),2)+pow((py5 - py1),2));
    double theta = atan(sqrt(pow((py5-py1),2)/pow((px5-px1),2)))*180/PI;
    ax1 += M5/(r*r)*cos(theta*PI/180);
    ay1 += M5/(r*r)*sin(theta*PI/180);
}

void Cuerpo1::calc_pos(){
    px1 += vx1 + ax1/2;
    py1 += vy1 + ay1/2;
    vx1 += ax1;
    vy1 += ay1;
}

Cuerpo2::Cuerpo2(double px2_, double py2_, int M2_, int R2_, double vx2_, double vy2_):px2(px2_),py2(py2_),M2(M2_),R2(R2_),vx2(vx2_),vy2(vy2_){

}

double Cuerpo2::get_px2(){
    return px2;
}

double Cuerpo2::get_py2(){
    return py2;
}

int Cuerpo2::get_M2(){
    return M2;
}

void Cuerpo2::mod_aceleracion(){
    ax2 = 0;
    ay2 = 0;
}

void Cuerpo2::inter_cuerpo1(int M1, double px1, double py1){
    double r = sqrt(pow((px2 - px1),2)+pow((py2 - py1),2));
    double theta = atan(sqrt(pow((py2-py1),2)/pow((px2-px1),2)))*180/PI;
    ax2 += (M1/(r*r))*cos(theta*PI/180);
    ay2 += (M1/(r*r))*sin(theta*PI/180);

}

void Cuerpo2::inter_cuerpo3(int M3, double px3, double py3){
    double r = sqrt(pow((px2 - px3),2)+pow((py2 - py3),2));
    double theta = atan(sqrt(pow((py2-py3),2)/pow((px2-px3),2)))*180/PI;
    ax2 += (M3/(r*r))*cos(theta*PI/180);
    ay2 += (M3/(r*r))*sin(theta*PI/180);
}

void Cuerpo2::inter_cuerpo4(int M4, double px4, double py4){
    double r = sqrt(pow((px4 - px2),2)+pow((py4 - py2),2));
    double theta = atan(sqrt(pow((py4-py2),2)/pow((px4-px2),2)))*180/PI;
    ax2 += M4/(r*r)*cos(theta*PI/180);
    ay2 += M4/(r*r)*sin(theta*PI/180);
}


void Cuerpo2::inter_cuerpo5(int M5, double px5, double py5){
    double r = sqrt(pow((px5 - px2),2)+pow((py5 - py2),2));
    double theta = atan(sqrt(pow((py5-py2),2)/pow((px5-px2),2)))*180/PI;
    ax2 += M5/(r*r)*cos(theta*PI/180);
    ay2 += M5/(r*r)*sin(theta*PI/180);
}

void Cuerpo2::calc_pos(){
    px2 += vx2 + ax2/2;
    py2 += vy2 + ay2/2;
    vx2 += ax2;
    vy2 += ay2;
}


Cuerpo3::Cuerpo3(double px3_, double py3_, int M3_, int R3_, double vx3_, double vy3_):px3(px3_),py3(py3_),M3(M3_),R3(R3_),vx3(vx3_),vy3(vy3_){

}

double Cuerpo3::get_px3(){
    return px3;
}

double Cuerpo3::get_py3(){
    return py3;
}

int Cuerpo3::get_M3(){
    return M3;
}

void Cuerpo3::mod_aceleracion(){
    ax3 = 0;
    ay3 = 0;
}

void Cuerpo3::inter_cuerpo1(int M1, double px1, double py1){
    double r = sqrt(pow((px3 - px1),2)+pow((py3 - py1),2));
    double theta = atan(sqrt(pow((py3-py1),2)/pow((px3-px1),2)))*180/PI;
    ax3 += (M1/(r*r))*cos(theta*PI/180);
    ay3 += (M1/(r*r))*sin(theta*PI/180);
}

void Cuerpo3::inter_cuerpo2(int M2, double px2, double py2){
    double r = sqrt(pow((px3 - px2),2)+pow((py3 - py2),2));
    double theta = atan(sqrt(pow((py3-py2),2)/pow((px3-px2),2)))*180/PI;
    ax3 += (M2/(r*r))*cos(theta*PI/180);
    ay3 += (M2/(r*r))*sin(theta*PI/180);

}


void Cuerpo3::inter_cuerpo4(int M4, double px4, double py4){
    double r = sqrt(pow((px4 - px3),2)+pow((py4 - py3),2));
    double theta = atan(sqrt(pow((py4-py3),2)/pow((px4-px3),2)))*180/PI;
    ax3 += M4/(r*r)*cos(theta*PI/180);
    ay3 += M4/(r*r)*sin(theta*PI/180);
}


void Cuerpo3::inter_cuerpo5(int M5, double px5, double py5){
    double r = sqrt(pow((px5 - px3),2)+pow((py5 - py3),2));
    double theta = atan(sqrt(pow((py5-py3),2)/pow((px5-px3),2)))*180/PI;
    ax3 += M5/(r*r)*cos(theta*PI/180);
    ay3 += M5/(r*r)*sin(theta*PI/180);
}

void Cuerpo3::calc_pos(){
    px3 += vx3 + ax3/2;
    py3 += vy3 + ay3/2;
    vx3 += ax3;
    vy3 += ay3;
}


Cuerpo4::Cuerpo4(double px4_, double py4_, int M4_, int R4_, double vx4_, double vy4_):px4(px4_),py4(py4_),M4(M4_),R4(R4_),vx4(vx4_),vy4(vy4_){

}

double Cuerpo4::get_px4(){
    return px4;
}

double Cuerpo4::get_py4(){
    return py4;
}

int Cuerpo4::get_M4(){
    return M4;
}
void Cuerpo4::mod_aceleracion(){
    ax4 = 0;
    ay4= 0;
}

void Cuerpo4::inter_cuerpo1(int M1, double px1, double py1){
    double r = sqrt(pow((px1 - px4),2)+pow((py1 - py4),2));
    double theta = atan(sqrt(pow((py1-py4),2)/pow((px1-px4),2)))*180/PI;
    ax4 += M1/(r*r)*cos(theta*PI/180);
    ay4 += M1/(r*r)*sin(theta*PI/180);
}

void Cuerpo4::inter_cuerpo2(int M2, double px2, double py2){
    double r = sqrt(pow((px2 - px4),2)+pow((py2 - py4),2));
    double theta = atan(sqrt(pow((py2-py4),2)/pow((px2-px4),2)))*180/PI;
    ax4 += M2/(r*r)*cos(theta*PI/180);
    ay4 += M2/(r*r)*sin(theta*PI/180);
}

void Cuerpo4::inter_cuerpo3(int M3, double px3, double py3){
    double r = sqrt(pow((px3 - px4),2)+pow((py3 - py4),2));
    double theta = atan(sqrt(pow((py3-py4),2)/pow((px3-px4),2)))*180/PI;
    ax4 += M3/(r*r)*cos(theta*PI/180);
    ay4 += M3/(r*r)*sin(theta*PI/180);
}


void Cuerpo4::inter_cuerpo5(int M5, double px5, double py5){
    double r = sqrt(pow((px5 - px4),2)+pow((py5 - py4),2));
    double theta = atan(sqrt(pow((py5-py4),2)/pow((px5-px4),2)))*180/PI;
    ax4 += M5/(r*r)*cos(theta*PI/180);
    ay4 += M5/(r*r)*sin(theta*PI/180);
}

void Cuerpo4::calc_pos(){
    px4 += vx4 + ax4/2;
    py4 += vy4 + ay4/2;
    vx4 += ax4;
    vy4 += ay4;
}



Cuerpo5::Cuerpo5(double px5_, double py5_, int M5_, int R5_, double vx5_, double vy5_):px5(px5_),py5(py5_),M5(M5_),R5(R5_),vx5(vx5_),vy5(vy5_){

}

double Cuerpo5::get_px5(){
    return px5;
}

double Cuerpo5::get_py5(){
    return py5;
}

int Cuerpo5::get_M5(){
    return M5;
}
void Cuerpo5::mod_aceleracion(){
    ax5 = 0;
    ay5= 0;
}

void Cuerpo5::inter_cuerpo1(int M1, double px1, double py1){
    double r = sqrt(pow((px1 - px5),2)+pow((py1 - py5),2));
    double theta = atan(sqrt(pow((py1-py5),2)/pow((px1-px5),2)))*180/PI;
    ax5 += M1/(r*r)*cos(theta*PI/180);
    ay5 += M1/(r*r)*sin(theta*PI/180);
}

void Cuerpo5::inter_cuerpo2(int M2, double px2, double py2){
    double r = sqrt(pow((px2 - px5),2)+pow((py2 - py5),2));
    double theta = atan(sqrt(pow((py2-py5),2)/pow((px2-px5),2)))*180/PI;
    ax5 += M2/(r*r)*cos(theta*PI/180);
    ay5 += M2/(r*r)*sin(theta*PI/180);
}

void Cuerpo5::inter_cuerpo3(int M3, double px3, double py3){
    double r = sqrt(pow((px3 - px5),2)+pow((py3 - py5),2));
    double theta = atan(sqrt(pow((py3-py5),2)/pow((px3-px5),2)))*180/PI;
    ax5 += M3/(r*r)*cos(theta*PI/180);
    ay5 += M3/(r*r)*sin(theta*PI/180);
}

void Cuerpo5::inter_cuerpo4(int M4, double px4, double py4){
    double r = sqrt(pow((px4 - px5),2)+pow((py4 - py5),2));
    double theta = atan(sqrt(pow((py4-py5),2)/pow((px4-px5),2)))*180/PI;
    ax5 += M4/(r*r)*cos(theta*PI/180);
    ay5 += M4/(r*r)*sin(theta*PI/180);
}

void Cuerpo5::calc_pos(){
    px5 += vx5 + ax5/2;
    py5 += vy5 + ay5/2;
    vx5 += ax5;
    vy5 += ay5;
}

