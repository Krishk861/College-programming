#include <stdio.h>
#include <math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length,float breadth);
int main() {
    float length=10.0;
    float radius=5.0;
    float side =15.0;
    float breadth=30.0;
    printf("Area is : %f",rectangleArea(length,breadth));
}

float squareArea(float side){
    return side*side;
}
float rectangleArea(float length,float breadth){
    return length*breadth;
}
float circleArea(float radius){
    return 3.14 * radius *radius;
}