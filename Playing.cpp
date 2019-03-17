#include <bits/stdc++.h>

using namespace std;

int main(){
    double area;
    int xA,yA,xB,yB,xC,yC;
    cin >> xA >> yA; cin >> xB >> yB; cin >> xC >> yC;
    area = (fabs(xA*(yB-yC) + xB*(yC-yA) + xC*(yA- yB)))/2;
    cout << area << endl;
    int Trees;
    cin >> Trees;
    int xT,yT,Ante_Trees = 0;
    double a1,a2,a3;
    for(int i = 0; i < Trees; i++){
        cin >> xT; cin >> yT;
        a1 = (abs(xT*(yB-yC) + xB*(yC-yT) + xC*(yT- yB)))/2.0;
        a2 = (abs(xA*(yT-yC) + xT*(yC-yA) + xC*(yA- yT)))/2.0;
        a3 = (abs(xA*(yB-yT) + xB*(yT-yA) + xT*(yA- yB)))/2.0;
        if(a1+a2+a3 == area){
            Ante_Trees++;
        }
    }
    printf("%.1f",area);
    cout << endl << Ante_Trees << endl;

}
