/*
8. Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R.
Essa função deve obedecer ao protótipo: void calc_esfera(float R, float *area, float *volume).
*/

# include <stdio.h>

# define PI 3.14159265358979323846

void calc_esfera(float, float*, float*);

int main(void)
{
    float R = 1;
    float area = 0;
    float volume = 0;

    calc_esfera(R, &area, &volume);

    printf("Raio: %.2f\nArea: %.2f\nVolume: %.2f", R, area, volume);

    return 0;
}

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * (PI * R * R);

    *volume = (4 * PI * (R * R * R)) / 3;

    return;
}