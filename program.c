

#include <stdio.h>
#include <math.h>
int main() 
{
double wind_angle;

    printf("Direction relative du vent [-3.14159265 à 3.14159265] radian : ");
    scanf("%lf", & wind_angle); 

    printf("Valeur saisie : %lf\n", wind_angle);
    return;

int wind_speed;
    printf("vitesse vent [0 à 150] kts : ");
    scanf("%d",& wind_speed);

    printf("Valeur saisie : %d\n", wind_speed);
    return;

int fuel;
    printf("carburant disponible [20 à 350000] litres : ");
    scanf("%d" ,& fuel);

    printf("Valeur saisie : %d\n" , fuel);
    return;

int consumption; 
    printf("consommation [10 à 15000] litres/h : "); 
    scanf("%d" , & consumption); 

    printf("Valeur saisie : %d\n" , consumption); 
    return;

int wind_surface; 
    printf("surface alaire [5 à 900] m^2 : "); 
    scanf("%d" , & wind_surface); 

    printf("Valeur saisie : %d\n" , wind_surface);
    return; 

int pressure;
    printf("pression ambiante [300 à 1050] hPa/mb : "); 
    scanf("%d" , & pressure);


    printf("Valeur saisie ; %d\n" , pressure);
    return;

int temperature; 
    printf("temperature extérieur [-50 à 50] °C : ");
    scanf("%d" , & temperature); 

    printf("Valeur saisie ; %d\n" , temperature);
    return;

int altitude; 
    printf("altitude [ 0 à 19500] ft : ");
    scanf("%d" , & altitude); 

    printf("Valeur saisie ; %d\n" , altitude);
    return;

int ias;
    printf("Indicated Air Speed (vitesse) [0 à 500] kts : ");
    scanf("%d" , & ias); 

    printf("Valeur saisie ; %d\n" , ias);
    return;

int weight;
    printf("Poids total [500 à 600000] kg : ");
    scanf("%d" , & weight);

    printf("Valeur saisie ; %d\n" , weight);
}
  
