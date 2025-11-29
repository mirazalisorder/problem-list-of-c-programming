#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant, root1, root2;
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2f, %.2f", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Root is real and same: %.2f", root1);
    } else {
        printf("Roots are complex");
    }
    return 0;
}
