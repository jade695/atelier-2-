#include <stdio.h>

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
    scanf("%d",& wind_speed);

    printf("Valeur saisie : %d\n", wind_speed);

int fuel;
    printf("carburant disponible [20 à 350000] litres : ");
    scanf("%d" ,& fuel);

    printf("Valeur saisie : %d\n" , fuel);

int consumption; 
    printf("consommation [10 à 15000] litres/h : "); 
    scanf("%d" , & consumption); 

    printf("Valeur saisie : %d\n" , consumption); 

int wind_surface; 
    printf("surface alaire [5 à 900] m^2 : "); 
    scanf("%d" , & wind_surface); 

    printf("Valeur saisie : %d\n" , wind_surface); 

int pressure;
    printf("pression ambiante [300 à 1050] hPa/mb : "); 
    scanf("%d" , & pressure)
     return 0;
}
  
