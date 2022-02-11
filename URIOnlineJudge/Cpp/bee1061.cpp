#include <iostream>

using namespace std;

int main(){
  string describer;

  int dia_0, dia_1, delta_dia;
  int hora_0, hora_1, delta_hora;
  int min_0, min_1, delta_min;
  int seg_0, seg_1, delta_seg;

  cin >> describer >> dia_0;
  cin >> hora_0 >> describer >> min_0 >> describer >> seg_0;
  cin >> describer >> dia_1;
  cin >> hora_1 >> describer >> min_1 >> describer >> seg_1;
  
  delta_dia = dia_1 - dia_0;
  delta_hora = hora_1 - hora_0;
  delta_min = min_1 - min_0;
  delta_seg = seg_1 - seg_0;

  if(delta_seg < 0){
    delta_seg += 60;
    delta_min--;
  }

  if(delta_min < 0){
    delta_min += 60;
    delta_hora--;
  }

  if(delta_hora < 0){
    delta_hora += 24;
    delta_dia--;
  }

  cout << delta_dia << " dia(s)\n";
  cout << delta_hora << " hora(s)\n";
  cout << delta_min << " minutos(s)\n";
  cout << delta_seg << " segundos(s)\n";

  return 0;
}

