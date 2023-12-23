#include <stdio.h>

int main() {

double weight;
int planet;
double calcWeight;
double lb2kg = 0.453592;

// Gather and store weight
printf("What is your weight? (LB's)\n");
scanf("%lf", &weight);

// Convert LB to KG for calculation
weight = weight * lb2kg;

printf("\n\nYour current weight in Kilograms is %lf\n\n", weight);



printf("\n\nWhat planet are you taking the fight to?!\n1:Mecury\n2:Venus\n3:Mars\n4:Jupiter\n5:Saturn\n6:Uranus\n7:Neptune\n");
scanf("\n\n%d", &planet);


switch(planet) {
  case 1:
    calcWeight = weight * 0.38;
    printf("\nYou Selected Mecury\n");
    printf("Your weight on Mecury would be %lf", calcWeight);
    break;
  case 2:
    calcWeight = weight * 0.91;
    printf("\nYou Selected Venus\n");
    printf("Your weight on Venus would be %lf", calcWeight);
    break;
  case 3:
    calcWeight = weight * 0.38;
    printf("\nYou Selected Mars\n");
    printf("Your weight on Mars would be %lf", calcWeight);
    break;
  case 4:
    calcWeight = weight * 2.34;
    printf("\nYou Selected Jupiter\n");
    printf("Your weight on Jupiter would be %lf", calcWeight);
    break;
  case 5:
    calcWeight = weight * 1.06;
    printf("\nYou Selected Saturn\n");
    printf("Your weight on Saturn would be %lf", calcWeight);
    break;
  case 6:
    calcWeight = weight * 0.92;
    printf("\nYou Selected Uranus\n");
    printf("Your weight on Uranus would be %lf", calcWeight);
    break;
  case 7:
    calcWeight = weight * 1.19;
    printf("\nYou Selected Neptune\n");
    printf("Your weight on Neptune would be %lf", calcWeight);
    break;

printf("\n");
}
}
