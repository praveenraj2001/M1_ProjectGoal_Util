#include <stdio.h>
#include "project.h"



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
                float array1[1000]; 
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
                printf("Area of ellipse = %f",ellipse(a1,b1));
                break;
            case 2: 
            
                printf("Please enter the trapzoid two parallel sides and height\n");
                scanf("%f %f %f",&a2,&b2,&h2);
                printf("Area of trapzoid = %f",trapezoid(a2,b2,h2));
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
                printf("Area and volume of SPHERE is %f & %f ",sphere_area(radius1),sphere_vol(radius1));
                break;
            case 2:
                printf("Enter radius and height of CONE \n");
                scanf("%f %f",&radius2,&height2);
                printf("Area and volume of CONE is %f & %f ",cone_area(radius2,height2),cone_vol(radius2,height2));
                break;
            case 3:
                printf("Enter radius and height of CYLINDER \n");
                scanf("%f %f",&radius3,&height3);
                printf("Area and volume of CYLINDER is %f & %f ",cylinder_area(radius3,height3),cylinder_vol(radius3,height3));
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

