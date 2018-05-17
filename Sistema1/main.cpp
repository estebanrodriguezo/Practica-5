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

    fout.open(file);
    for(int i=0; i<10000;i++){
        fout << cuerpo1.get_px1() << "\t" << cuerpo1.get_py1() << "\t" << cuerpo2.get_px2() << "\t" << cuerpo2.get_py2() << "\t" << cuerpo3.get_px3() << "\t" << cuerpo3.get_py3() << endl;
        cuerpo1.mod_aceleracion();
        cuerpo2.mod_aceleracion();
        cuerpo3.mod_aceleracion();
        cuerpo1.inter_cuerpo2(cuerpo2.get_M2(), cuerpo2.get_px2(), cuerpo2.get_py2());
        cuerpo1.inter_cuerpo3(cuerpo3.get_M3(), cuerpo3.get_px3(), cuerpo3.get_py3());
        cuerpo2.inter_cuerpo1(cuerpo1.get_M1(), cuerpo1.get_px1(), cuerpo1.get_py1());
        cuerpo2.inter_cuerpo3(cuerpo3.get_M3(), cuerpo3.get_px3(), cuerpo3.get_py3());
        cuerpo3.inter_cuerpo1(cuerpo1.get_M1(), cuerpo1.get_px1(), cuerpo1.get_py1());
        cuerpo3.inter_cuerpo2(cuerpo2.get_M2(), cuerpo2.get_px2(), cuerpo2.get_py2());
        cuerpo1.calc_pos();
        cuerpo2.calc_pos();
        cuerpo3.calc_pos();
    }
    fout.close();
    return 0;
}


