#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    double distance;
    int intersection_points;
    
    
    printf("Введіть координати центру та радіус першого кола (x1 y1 r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("Введіть координати центру та радіус другого кола (x2 y2 r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);
    
    
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    
    if (distance > r1 + r2) {
        intersection_points = 0; 
    } else if (distance < fabs(r1 - r2)) {
        intersection_points = 0; 
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        intersection_points = 1; 
    } else {
        intersection_points = 2; 
    }
    
    
    printf("Кількість точок перетину: %d\n", intersection_points);
    
    return 0;
}
