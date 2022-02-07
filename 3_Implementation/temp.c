#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159
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
    int i, j , count;
     int maxCount = 0;
     float  maxElement;
      
    for(i = 0; i< n; i++) 
    {
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
    float volume;float a=4;float b=3;
    volume = ((a/b)*pi*radius*radius*radius);
    return volume;
    
}

float sphere_area(float radius){
    float area;
    area = 4*pi*radius*radius;
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
    float result;
    result = a*a*a + 3*a*a*b + 3*a*b*b + b*b*b;
}
//(a-b)^3
float S_a3_b3 (float a,float b){
    float result;
    result = a*a*a - 3*a*a*b + 3*a*b*b + b*b*b;
}
//(a+b)^4
float a4_b4(float a, float b){
    float result;
    result = a*a*a*a + 4*a*a*a*b + 6*a*a*b*b + 4*a*b*b*b + b*b*b*b;
}

//(a+b)^5
float a5_b5(float a, float b){
    float result;
    result = a*a*a*a*a + 5*a*a*a*a*b + 10*a*a*a*b*b + 10*a*a*b*b*b + 5*a*b*b*b*b +b*b*b*b*b;
}

int main(){
    int s1;
    printf("These are the available operations"
            "\n* for  STATISTICS press 1"
            "\n* for  PLAIN GEOMETRY press 2"
            "\n* for  MENSURATION press 3"
            "\n* for  ALGEBRA press 4\n");

    scanf("%d",&s1);
    switch (s1)
    {
    case 1:
        printf("These are the available operations for STATISTICS"
            "\n* MEAN , MEDIAN , MODE \n");

                printf("enter length and elements ");
                int len1;
                scanf("%d",&len1);
                float array1[100]; 
                for (int i = 0; i < len1; i++)
                    {
                        scanf("%f",&array1[i]);
                    }
                    printf("Mean is %f ",mean(array1,len1));
                    printf("Median is %f ",median(array1,len1));
                    printf("Mode is %f ",mode(array1,len1));
               
        break;
    case 2:
        printf("These are the available operations for PLAIN GEOMETRY"
            "\n* for AREA OF ELLIPSE press 1"
            "\n* for AREA OF TRAPEZOID press 2\n");
            int s21;scanf("%d",&s21);
            float a1,b1;
            float a2,b2,h2;

            switch (s21)
            {
            case 1: 
            
                printf("Please enter the inputs axis a axis b for ellipse\n");
                scanf("%f %f",&a1,&b1);
                printf("Area of ellipse - %f",ellipse(a1,b1));
                break;
            case 2: 
            
                printf("Please enter the trapzoid two parallel sides and height\n");
                scanf("%f %f %f",&a2,&b2,&h2);
                printf("Area of trapzoid - %f",trapezoid(a2,b2,h2));
                break; 
            default:
                break;
            }

        break;
    case 3:
        printf("These are the available operations for MENSURATION"
            "\n* for SPHERE VOLUME , AREA press 1"
            "\n* for CONE VOLUME , AREA press 2"
            "\n* for CYLINDER VOLUME , AREA press 3\n");

            int s31;scanf("%d",&s31);
            float radius1,radius2,height2,radius3,height3;

            switch (s31)
            {
            case 1:
                printf("Enter radius of SPHERE \n");
                scanf("%f",&radius1);
                printf("Volume and Area of SPHERE is %f & %f ",sphere_area(radius1),sphere_vol(radius1));
                break;
            case 2:
                printf("Enter radius of CONE \n");
                scanf("%f",&radius1);
                printf("Volume and Area of CONE is %f & %f ",cone_area(radius2,height2),cone_vol(radius2,height2));
                break;
            case 3:
                printf("Enter radius of CYLINDER \n");
                scanf("%f",&radius1);
                printf("Volume and Area of CYLINDER is %f & %f ",cylinder_area(radius2,height2),cylinder_vol(radius2,height2));
                break;
            default:
                break;
            }

        break;
        float a3,b3;
    case 4:
        printf("Please enter value of a and b\n");
        scanf("%f %f",&a3,&b3);
        printf("\nValue of (a+b)^3 is %f ",a3_b3(a3,b3));
        printf("\nValue of (a-b)^3 is %f ",S_a3_b3(a3,b3));
        printf("\nValue of (a+b)^4 is %f ",a4_b4(a3,b3));
        printf("\nValue of (a+b)^5 is %f ",a5_b5(a3,b3));

    default:
        break;
    }
}   

