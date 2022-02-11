#include <stdio.h>

int main(){
  int d_init, d_final, h_init, h_final, m_init, m_final, s_init, s_final, delta_t;
  
  scanf("Dia %d\n%d : %d : %d\n", &d_init, &h_init, &m_init, &s_init);

  scanf("Dia %d", &d_final);
  scanf("%d : %d : %d", &h_final, &m_final, &s_final);

  delta_t = (d_final*86400 + h_final*3600 + m_final*60 + s_final) - (d_init*86400 + h_init*3600 + m_init*60 + s_init);

  printf("%d dia(s)\n", delta_t/86400);

  return 0;
}
