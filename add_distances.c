#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance sum;
    sum.inch = d1.inch + d2.inch;
    sum.feet = d1.feet + d2.feet + (int)(sum.inch / 12);
    sum.inch = sum.inch - (int)(sum.inch / 12) * 12;
    return sum;
}

int main() {
    int n;
    printf("Enter the number of distances: ");
    scanf("%d", &n);
    
    struct Distance total = {0, 0};
    
    for (int i = 0; i < n; i++) {
        struct Distance d;
        printf("\nEnter distance %d (in feet and inches):\n", i + 1);
        printf("Feet: ");
        scanf("%d", &d.feet);
        printf("Inches: ");
        scanf("%f", &d.inch);
        
        total = addDistances(total, d);
    }
    
    printf("\nTotal distance: %d feet %.2f inches\n", total.feet, total.inch);
    
    return 0;
}
