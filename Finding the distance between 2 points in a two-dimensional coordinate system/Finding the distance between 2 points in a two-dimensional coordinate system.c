#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1, p2;
    double distance;
    printf("Enter the X coordinate of the first point: ");
    scanf("%d", &p1.x);
    printf("Enter the Y coordinate of the first point: ");
    scanf("%d", &p1.y);
    printf("Enter the X coordinate of the second point: ");
    scanf("%d", &p2.x);
    printf("Enter the X coordinate of the second point: ");
    scanf("%d", &p2.y);
    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("Distance between two points: %f\n", distance);
    return 0;
}

