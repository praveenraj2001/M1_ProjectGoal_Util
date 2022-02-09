
#include "project.h"


// statistics

float mean(float arr[],int n){
    float temp=0,ans;
    for (int i = 0; i < n; i++)
    {
        temp=temp+arr[i];
    }
    ans = temp/n;
    return ans;
}


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

/
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


float ellipse(float a, float b){
    float area=pi*a*b;
    return area;
}


float trapezoid(float a, float b, float h){
    float area=0.5*(a+b)*h;
    return area;
}

// mensuratiion

//sphere
float sphere_vol(float radius){
    float volume;float a=4;float b=3;float c=a/b;
    volume = ((c)*pi*radius*radius*radius);
    return volume;
    
}


float sphere_area(float radius){
    float area;
    area = 4*pi*pow(radius,2);
    return area;
}

//cone
float cone_vol(float radius, float height){
    float volume;
    volume = (pi*radius*radius*height)/3;
    return volume;
}


float cone_area(float radius, float height){
    float area;
    area = pi*radius*(sqrt(radius*radius+height*height));
    return area;
}


//cylinder
float cylinder_vol(float radius, float height){
    float volume;
    volume = (pi*radius*radius*height);
    return volume;
}

float cylinder_area(float radius, float height){
    float area;
    area = (2*pi*radius*height)+(2*pi*radius*radius);
    return area;
}

//algebra
//(a+b)^3

float a3_b3 (float a,float b){
    
    return pow((a+b),3);
}

//(a-b)^3

float S_a3_b3 (float a,float b){
    return pow((a-b),3);
}

//(a+b)^4

float a4_b4(float a, float b){
    return pow((a+b),4);
}

//(a+b)^5

float a5_b5(float a, float b){
    return pow((a+b),5);
}
