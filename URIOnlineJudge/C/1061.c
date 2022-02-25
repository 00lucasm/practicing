#include <stdio.h>

int main(){

    int d_inicial, d_final;
    int h_inicial, h_final;
    int m_inicial, m_final;
    int s_inicial, s_final;
    int delta_tempo;

    scanf("Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d",
            &d_inicial, &h_inicial, &m_inicial, &s_inicial,
            &d_final, &h_final, &m_final, &s_final);

    d_inicial *= 86400;
    h_inicial *= 3600;
    m_inicial *= 60;

    d_final *= 86400;
    h_final *= 3600;
    m_final *= 60;

    delta_tempo = ((d_final + h_final + m_final + s_final)
            -(d_inicial + h_inicial + m_inicial + s_inicial));

    printf("%d dia(s)\n", delta_tempo/86400);
    printf("%d hora(s)\n", (delta_tempo%86400)/3600);
    printf("%d minuto(s)\n", ((delta_tempo%86400)%3600)/60);
    printf("%d segundo(s)\n", ((delta_tempo%86400)%3600)%60);

    return 0;
}
