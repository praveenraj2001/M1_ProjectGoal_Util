

/**
 * @file project.h
 * @author Nyalam praveenraj 
 * @brief 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef PROJECT_H_
#define PROJECT_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define pi 3.141592653589793

/**
 * @brief Calculates mean, takes array and length as input
 * 
 * @param arr 
 * @param n 
 * @return float 
 */
float mean(float arr[],int n);

/**
 * @brief Calculates median, takes array and length as input 
 * 
 * @param arr 
 * @param n 
 * @return float 
 */
float median(float arr[],int n);


/**
 * @brief Calculates mode, takes array and length as input 
 * 
 * @param arr 
 * @param n 
 * @return float 
 */
float mode(float arr[], int n) ;
int comp (const void * a, const void * b);

//
/**
 * @brief Calculates area of ellipse takes axis a ,b as inputs
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float ellipse(float a, float b);

/**
 * @brief Calculator area of trapezoid, takes 2 parallel sides and height as input
 * 
 * @param a 
 * @param b 
 * @param h 
 * @return float 
 */
float trapezoid(float a, float b, float h);


/**
 * @brief Calculates volume of sphere, takes radius as input
 * 
 * @param radius 
 * @return float 
 */
float sphere_vol(float radius);

/**
 * @brief calculates volume of sphere, takes radius as input
 * 
 * @param radius 
 * @return float 
 */
float sphere_area(float radius);


/**
 * @brief Calculates volume of cone, takes radius as input
 * 
 * @param radius 
 * @param height 
 * @return float 
 */
float cone_vol(float radius, float height);

/**
 * @brief Calculates the area of cone, takes radius and height as input
 * 
 * @param radius 
 * @param height 
 * @return float 
 */
float cone_area(float radius, float height);

/**
 * @brief Calculates volume of cylinder, takes radius and height as inputs
 * 
 * @param radius 
 * @param height 
 * @return float 
 */
float cylinder_vol(float radius, float height);


/**
 * @brief calculates cylinder area, takes radius and height as inputs
 * 
 * @param radius 
 * @param height 
 * @return float 
 */
float cylinder_area(float radius, float height);


/**
 * @brief Calculates (a+b)^3, takes a and b as inputs
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float a3_b3 (float a,float b);

/**
 * @brief Calculates (a-b)^3, takes a and b as inputs
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float S_a3_b3 (float a,float b);

/**
 * @brief Calculates (a+b)^4, takes a and b as inputs
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float a4_b4(float a, float b);

/**
 * @brief Calculates (a+b)^5, takes a and b as inputs
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float a5_b5(float a, float b);

#endif