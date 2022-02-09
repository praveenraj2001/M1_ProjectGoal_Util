/**
 * @file project.c
 * @author Nyalam praveenraj 
 * @brief 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "project.h"


// statistics
/**
 * @brief Calculates mean, takes array and length as input
 * 
 * @param arr 
 * @param n 
 * @return float 
 */
float mean(float arr[],int n){
    float temp=0,ans;
    for (int i = 0; i < n; i++)
    {
        temp=temp+arr[i];
    }
    ans = temp/n;
    return ans;
}

/**
 * @brief Calculates mode, takes array and length as input 
 * 
 * @param arr 
 * @param n 
 * @return float 
 */
float mode(float arr[], int n) 
{
    int i, j ;
     int maxCount = 0;
     float  maxElement;
      
    for(i = 0; i< n; i++) 
    { int count;
        count = 1;
        for(j = i+1; j < n; j++)  
        {
            if(arr[j] == arr[i])
            {
                count++;
                if(count > maxCount)
                {
                    maxElement = arr[j];
                }
            }
        }
    }
    return maxElement;
}

int comp (const void * a, const void * b)
   {
    return ( (int) (*(float*)a - *(float*)b) );
    }

/**
 * @brief Calculates median, takes array and length as input
 * 
 * @param arr 
 * @param n 
 * @return float 
 */
float median(float arr[],int n){
    
    float temparr[n],ans;

    for (int i = 0; i < n; i++)
    {
        temparr[i]=arr[i];
    }
    
    qsort(temparr, n, sizeof(float), comp);
    if(n%2==0) {
        ans=(temparr[((n)/2)]+temparr[((n-1)/2)])/2;
        return ans;
        }
    else {
        ans = temparr[((n-1)/2)];
        return ans;
        }
}


//plane geometry

/**
 * @brief Calculates area of ellipse takes axis a ,b as inputs
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float ellipse(float a, float b){
    float area=pi*a*b;
    return area;
}

/**
 * @brief Calculator area of trapezoid, takes 2 parallel sides and height as input
 * 
 * @param a 
 * @param b 
 * @param h 
 * @return float 
 */
float trapezoid(float a, float b, float h){
    float area=0.5*(a+b)*h;
    return area;
}

// mensuratiion

/**
 * @brief Calculates volume of sphere, takes radius as input
 * 
 * @param radius 
 * @return float 
 */
//sphere
float sphere_vol(float radius){
    float volume;float a=4;float b=3;float c=a/b;
    volume = ((c)*pi*radius*radius*radius);
    return volume;
    
}

/**
 * @brief calculates volume of sphere, takes radius as input
 * 
 * @param radius 
 * @return float 
 */
float sphere_area(float radius){
    float area;
    area = 4*pi*pow(radius,2);
    return area;
}

/**
 * @brief Calculates volume of cone, takes radius as input
 * 
 * @param radius 
 * @param height 
 * @return float 
 */
//cone
float cone_vol(float radius, float height){
    float volume;
    volume = (pi*radius*radius*height)/3;
    return volume;
}

/**
 * @brief Calculates the area of cone, takes radius and height as input
 * 
 * @param radius 
 * @param height 
 * @return float 
 */
float cone_area(float radius, float height){
    float area;
    area = pi*radius*(sqrt(radius*radius+height*height));
    return area;
}

/**
 * @brief Calculates volume of cylinder, takes radius and height as inputs
 * 
 * @param radius 
 * @param height 
 * @return float 
 */
//cylinder
float cylinder_vol(float radius, float height){
    float volume;
    volume = (pi*radius*radius*height);
    return volume;
}

/**
 * @brief calculates cylinder area, takes radius and height as inputs
 * 
 * @param radius 
 * @param height 
 * @return float 
 */
float cylinder_area(float radius, float height){
    float area;
    area = (2*pi*radius*height)+(2*pi*radius*radius);
    return area;
}

//algebra
//(a+b)^3

/**
 * @brief Calculates (a+b)^3, takes a and b as inputs
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float a3_b3 (float a,float b){
    
    return pow((a+b),3);
}

//(a-b)^3
/**
 * @brief Calculates (a-b)^3, takes a and b as inputs
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float S_a3_b3 (float a,float b){
    return pow((a-b),3);
}

//(a+b)^4
/**
 * @brief Calculates (a+b)^4, takes a and b as inputs
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float a4_b4(float a, float b){
    return pow((a+b),4);
}

//(a+b)^5
/**
 * @brief Calculates (a+b)^5, takes a and b as inputs
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float a5_b5(float a, float b){
    return pow((a+b),5);
}
