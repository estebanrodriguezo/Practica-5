#include <iostream>
#include <fstream>
#include "cuerpos.h"

using namespace std;

int main()
{
    string file = "archivo.txt" ;

    ofstream fout;

    Cuerpo1 cuerpo1;
    Cuerpo2 cuerpo2;
    Cuerpo3 cuerpo3;
    Cuerpo4 cuerpo4;
    Cuerpo5 cuerpo5;

    fout.open(file);
    for(int i=0; i<10000;i++){
        fout << cuerpo1.get_px1() << "\t" << cuerpo1.get_py1() << "\t" << cuerpo2.get_px2() << "\t" << cuerpo2.get_py2() << "\t" << cuerpo3.get_px3() << "\t" << cuerpo3.get_py3()<< "\t" << cuerpo4.get_px4()<<"\t"<<cuerpo4.get_py4()<<"\t"<<cuerpo5.get_px5()<<"\t"<<cuerpo5.get_py5()<<endl;
        cuerpo1.mod_aceleracion();
        cuerpo2.mod_aceleracion();
        cuerpo3.mod_aceleracion();
        cuerpo4.mod_aceleracion();
        cuerpo5.mod_aceleracion();
        cuerpo1.inter_cuerpo2(cuerpo2.get_M2(), cuerpo2.get_px2(), cuerpo2.get_py2());
        cuerpo1.inter_cuerpo3(cuerpo3.get_M3(), cuerpo3.get_px3(), cuerpo3.get_py3());
        cuerpo1.inter_cuerpo4(cuerpo4.get_M4(), cuerpo4.get_px4(), cuerpo4.get_py4());
        cuerpo1.inter_cuerpo5(cuerpo5.get_M5(), cuerpo5.get_px5(), cuerpo5.get_py5());
        cuerpo2.inter_cuerpo1(cuerpo1.get_M1(), cuerpo1.get_px1(), cuerpo1.get_py1());
        cuerpo2.inter_cuerpo3(cuerpo3.get_M3(), cuerpo3.get_px3(), cuerpo3.get_py3());
        cuerpo2.inter_cuerpo4(cuerpo4.get_M4(), cuerpo4.get_px4(), cuerpo4.get_py4());
        cuerpo2.inter_cuerpo5(cuerpo5.get_M5(), cuerpo5.get_px5(), cuerpo5.get_py5());
        cuerpo3.inter_cuerpo2(cuerpo2.get_M2(), cuerpo2.get_px2(), cuerpo2.get_py2());
        cuerpo3.inter_cuerpo1(cuerpo1.get_M1(), cuerpo1.get_px1(), cuerpo1.get_py1());
        cuerpo3.inter_cuerpo4(cuerpo4.get_M4(), cuerpo4.get_px4(), cuerpo4.get_py4());
        cuerpo3.inter_cuerpo5(cuerpo5.get_M5(), cuerpo5.get_px5(), cuerpo5.get_py5());
        cuerpo4.inter_cuerpo2(cuerpo2.get_M2(), cuerpo2.get_px2(), cuerpo2.get_py2());
        cuerpo4.inter_cuerpo3(cuerpo3.get_M3(), cuerpo3.get_px3(), cuerpo3.get_py3());
        cuerpo4.inter_cuerpo1(cuerpo1.get_M1(), cuerpo1.get_px1(), cuerpo1.get_py1());
        cuerpo4.inter_cuerpo5(cuerpo5.get_M5(), cuerpo5.get_px5(), cuerpo5.get_py5());
        cuerpo5.inter_cuerpo2(cuerpo2.get_M2(), cuerpo2.get_px2(), cuerpo2.get_py2());
        cuerpo5.inter_cuerpo3(cuerpo3.get_M3(), cuerpo3.get_px3(), cuerpo3.get_py3());
        cuerpo5.inter_cuerpo4(cuerpo4.get_M4(), cuerpo4.get_px4(), cuerpo4.get_py4());
        cuerpo5.inter_cuerpo1(cuerpo1.get_M1(), cuerpo1.get_px1(), cuerpo1.get_py1());
        cuerpo1.calc_pos();
        cuerpo2.calc_pos();
        cuerpo3.calc_pos();
        cuerpo4.calc_pos();
        cuerpo5.calc_pos();
    }
    fout.close();
    return 0;
}


