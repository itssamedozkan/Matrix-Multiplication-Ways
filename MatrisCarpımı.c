// �smail Taha Samed �zkan 
// 172122029


#include <stdio.h>
#include <time.h>
#include<stdlib.h>

#define N 5000


float float_rand()
{
    float scale = rand() / (float) RAND_MAX;
    return 0 + scale * ( 1 - 0 );      
}





int main() 
{
	
	
srand((unsigned)time(NULL));
double random, random2;
/* Matris �arp�m� i�in pointerlar tan�mland�.*/
double **ptr1, **ptr2, **ptr3;
/* D�ng� indexleri tan�mland�*/ 
int i, j, k;



/* Matris Sat�rlari i�in yerler ayarland�. */
ptr1 = (double **) malloc(sizeof(double *) * N); 
ptr2 = (double **) malloc(sizeof(double *) * N);
ptr3 = (double **) malloc(sizeof(double *) * N);
/* Matris S�tunlari i�in yerler ayarland�. */
for(i=0; i<N; i++)
 	ptr1[i] = (double *)malloc(sizeof(double) * N);
for(i=0; i<N; i++) 
 	ptr2[i] = (double *)malloc(sizeof(double) * N);
for(i=0; i<N; i++) 
 	ptr3[i] = (double *)malloc(sizeof(double) * N);
/* 1. Matrisi Sayilarla doldurma */

printf("\nilk Matris Fulleniyor\n");
time_t begin,end;
    begin= time(NULL); 
for(i=0; i< N; i++)
{
	for(j=0; j< N; j++)
	{
    float fr = (float)rand()/RAND_MAX;
   	ptr1[i][j] = fr ;
	}
}
end = time(NULL);
    printf("for loop used %f seconds to complete the " \
           "execution\n", difftime(end, begin));
           
printf("Doldurma ba�arili\n");
/* 2. Matrisi Sayilarla doldurma */
printf("\nikinci matris fulleniyor\n");
time_t begin2,end2;
    begin2= time(NULL); 
for(i=0; i< N; i++)
{
	for(j=0; j< N; j++)
	{
	 float fr2 = (float)rand()/RAND_MAX;
	ptr2[i][j] = fr2;
	}
}
end2 = time(NULL);

printf("for loop used %f seconds to complete the " \
           "execution\n", difftime(end2, begin2));
printf("Doldurma2 ba�arili\n");

printf("\n Sonuc matrisi ayarlan�yor\n");
for(i=0; i< N; i++)
{
	for(j=0; j< N; j++)
	{
		ptr3[i][j] = 0;
	}
}
printf("Ayarlama ba�arili\n");


/* Hesaplama ba�lad� */

printf("Sonuc Matrisinin Hesaplanmas� Baslandi\n");

for(i=0; i < N; i++)
{
for(j=0; j < N; j++)
	{
for(k=0; k<N; k++) {
	ptr3[i][j] = ptr3[i][j]+ ptr1[i][k] * ptr2[k][j]; 
		}
	}
}
printf("islem basarili.");


return 0;
}
