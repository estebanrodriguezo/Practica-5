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

void Cuerpo3::calc_pos(){
    px3 += vx3 + ax3/2;
    py3 += vy3 + ay3/2;
    vx3 += ax3;
    vy3 += ay3;
}



