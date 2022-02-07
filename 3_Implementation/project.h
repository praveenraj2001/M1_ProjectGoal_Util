#ifndef PROJECT_H_
#define PROJECT_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159
//
float mean(float arr[],int n);
float median(float arr[],int n);
float mode(float arr[], int n) ;
int comp (const void * a, const void * b);

//
float ellipse(float a, float b);
float trapezoid(float a, float b, float h);

//
float sphere_vol(float radius);
float sphere_area(float radius);
float cone_vol(float radius, float height);
float cone_area(float radius, float height);
float cylinder_vol(float radius, float height);
float cylinder_area(float radius, float height);

//
float a3_b3 (float a,float b);
float S_a3_b3 (float a,float b);
float a4_b4(float a, float b);
float a5_b5(float a, float b);

#endif