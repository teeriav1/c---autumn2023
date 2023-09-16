#include <iostream>

//#include "rectangle.hpp"

void Rectangle() {
    // Please enter width and height\n
    float width;
    float height;
    printf("%s", "Please enter width and height\n");

    //cin >> width >> height;
    scanf("%f %f", &width, &height);

    float area = width * height;
    float Circumference = 2* width + 2* height;
    printf("Area: %.1f\n", area);
    printf("Circumference: %.1f\n", Circumference);
}
int main(void) {
    Rectangle();

    return 0;
}
