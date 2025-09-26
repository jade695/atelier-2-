# C
C project template with codespace container to start coding.

#include <stdio.h>
#include <math.h>
int main() 
{


double wind_angle;

    printf("Direction relative du vent [-3.14159265 à 3.14159265] radian : ");
    scanf("%lf", & wind_angle); 

    printf("Valeur saisie : %lf\n", wind_angle);

    

int wind_speed;
    printf("vitesse vent [0 à 150] kts : ");
    scanf("%f",& wind_speed);

    printf("Valeur saisie : %f\n", wind_speed);

int fuel;
    printf("carburant disponible [20 à 350000] litres : ");
    scanf("%f" ,& fuel);

    printf("Valeur saisie : %f\n" , fuel);

int consumption; 
    printf("consommation [10 à 15000] litres/h : "); 
    scanf("%f" , & consumption); 

    printf("Valeur saisie : %f\n" , consumption); 

int wind_surface; 
    printf("surface alaire [5 à 900] m^2 : "); 
    scanf("%f" , & wind_surface); 

    printf("Valeur saisie : %f\n" , wind_surface); 
     return 0;
}


