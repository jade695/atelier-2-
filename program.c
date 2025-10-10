

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
    scanf("%d" , & pressure);


    printf("Valeur saisie ; %d\n" , pressure);

int temperature; 
    printf("temperature extérieur [-50 à 50] °C : ");
    scanf("%d" , & temperature); 

    printf("Valeur saisie ; %d\n" , temperature);

int altitude; 
    printf("altitude [ 0 à 19500] ft : ");
    scanf("%d" , & altitude); 

    printf("Valeur saisie ; %d\n" , altitude);

int ias;
    printf("Indicated Air Speed (vitesse) [0 à 500] kts : ");
    scanf("%d" , & ias); 

    printf("Valeur saisie ; %d\n" , ias);

int weight;
    printf("Poids total [500 à 600000] kg : ");
    scanf("%d" , & weight);

    printf("Valeur saisie ; %d\n" , weight);
    
  
double headwing;
    headwing = wind_speed*cos(wind_angle); 
    printf ("vent de face = %f\n", headwing);

int takeoff;
    takeoff = 300*(1+pressure_altitude/1000)*(1-0.01*max(0, temperature-15))*(1-headwind/ground_speed)*(weight/1157)*(weight/1157);
    printf (" distance de décollage = %d\n",takeoff); 

int wing_loading;
    wing_loading = weight/wing_surface;
    printf ("charge alaire = %d\n", wing_loading); 

int rate_of_climb;
    rate_of_climb = 700*(1-pressure_altitude/10000)*(1-0.01*max(0,temperature-15));
    printf ("taux de montée = %d\n", rate_of_climb); 

int no_return;
    no_return = range/2;
    printf ("point de non retour = %d\n",  no_return); 

int descent_speed;
    descent_speed = ground_speed*tan(3);
    printf ("vitesse de descente = %d\n", descent_speed); 
     
    return; 
}
