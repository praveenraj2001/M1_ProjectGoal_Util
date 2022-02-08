#include "unity.h"
#include "project.h"
void setUp()
{
   
}
void tearDown()
{
} 

float arr_1[]={1,1,1,2,3,4,5};
    int n_1 = 7;

float arr_2[]={1.1,2.9,1.1,2.9,3.5,4.2,5.4,2.9,0};
    int n_2 = 9;

float arr_3[]={8799,69949,999,35,69949};
    int n_3 = 5;


void test_mean(void){
    float x=mean(arr_1,n_1);
     TEST_ASSERT_EQUAL_FLOAT( 2.428571, x);
    x=mean(arr_2,n_2);
     TEST_ASSERT_EQUAL_FLOAT( 2.666667, x);
    x=mean(arr_3,n_3);
     TEST_ASSERT_EQUAL_FLOAT( 29946.199219, x);
}
void test_median(void){
     float x=median(arr_1,n_1);
     TEST_ASSERT_EQUAL_FLOAT( 2, x);
    x=median(arr_2,n_2);
     TEST_ASSERT_EQUAL_FLOAT( 2.900000, x);
    x=median(arr_3,n_3);
     TEST_ASSERT_EQUAL_FLOAT( 8799.000000, x);
}
void test_mode(void){
     float x=mode(arr_1,n_1);
     TEST_ASSERT_EQUAL_FLOAT( 1.000000, x);
    x=mode(arr_2,n_2);
     TEST_ASSERT_EQUAL_FLOAT( 2.900000, x);
    x=mode(arr_3,n_3);
     TEST_ASSERT_EQUAL_FLOAT( 69949.000000, x);
}


//
void test_ellipse(void){
    
    TEST_ASSERT_EQUAL_FLOAT( 3468.318359,ellipse( 23,48) );
    TEST_ASSERT_EQUAL_FLOAT( 86.048225,ellipse( 3.3,8.3));
    TEST_ASSERT_EQUAL_FLOAT( 90936344.000000,ellipse( 23457,1234) );

}
void test_trapezoid(void){
    TEST_ASSERT_EQUAL_FLOAT( 1881.500000,trapezoid( 23,48,53) );
    TEST_ASSERT_EQUAL_FLOAT( 307.400024,trapezoid( 3.3,8.3,53) );
    TEST_ASSERT_EQUAL_FLOAT( 654311.500000,trapezoid( 23457,1234,53) );

}

//
void test_sphere_vol(void){
    TEST_ASSERT_EQUAL_FLOAT( 50965.011719,sphere_vol( 23) );
    TEST_ASSERT_EQUAL_FLOAT( 150.532547,sphere_vol( 3.3) );
    TEST_ASSERT_EQUAL_FLOAT( 54063731310592.000000,sphere_vol( 23457) );
}
void test_sphere_area(void){
    TEST_ASSERT_EQUAL_FLOAT( 6647.609863,sphere_area( 23) );
    TEST_ASSERT_EQUAL_FLOAT( 136.847778,sphere_area( 3.3) );
    TEST_ASSERT_EQUAL_FLOAT( 6914404864.000000,sphere_area( 23457) );
}
void test_cone_vol(void){
    TEST_ASSERT_EQUAL_FLOAT( 26590.439453,cone_vol( 23,48) );
    TEST_ASSERT_EQUAL_FLOAT( 94.653046,cone_vol( 3.3,8.3) );
    TEST_ASSERT_EQUAL_FLOAT(  711031259136.000000,cone_vol( 23457,1234) );
}
void test_cone_area(void){
    TEST_ASSERT_EQUAL_FLOAT( 3845.926758,cone_area( 23,48) );
    TEST_ASSERT_EQUAL_FLOAT( 92.599968,cone_area( 3.3,8.3) );
    TEST_ASSERT_EQUAL_FLOAT( 1730991488.000000,cone_area( 23457,1234) );
}
void test_cylinder_vol(void){
    TEST_ASSERT_EQUAL_FLOAT( 79771.320312,cylinder_vol( 23,48) );
    TEST_ASSERT_EQUAL_FLOAT( 283.959137,cylinder_vol( 3.3,8.3) );
    TEST_ASSERT_EQUAL_FLOAT( 2133093908480.000000 ,cylinder_vol( 23457,1234) );
}
void test_cylinder_area(void){
    TEST_ASSERT_EQUAL_FLOAT( 10260.441406, cylinder_area( 23,48) );
    TEST_ASSERT_EQUAL_FLOAT( 240.520340 ,cylinder_area( 3.3,8.3) );
    TEST_ASSERT_EQUAL_FLOAT( 3639075072.000000,cylinder_area( 23457,1234) );
}

//
void test_a3_b3 (void){
    TEST_ASSERT_EQUAL_FLOAT( 357911.000000 ,a3_b3(23,48));
    TEST_ASSERT_EQUAL_FLOAT( 1560.896118,a3_b3(3.3,8.3) );
    TEST_ASSERT_EQUAL_FLOAT( 15052756221952.000000,a3_b3(23457,1234) );
}
void test_S_a3_b3 (void){
    TEST_ASSERT_EQUAL_FLOAT( -15625.000000,S_a3_b3(23,48) );
    TEST_ASSERT_EQUAL_FLOAT( -125.000000,S_a3_b3(3.3,8.3) );
    TEST_ASSERT_EQUAL_FLOAT( 10975089524736.000000,S_a3_b3(23457,1234) );
}
void test_a4_b4(void){
    TEST_ASSERT_EQUAL_FLOAT( 25411680.000000,a4_b4(23,48) );
    TEST_ASSERT_EQUAL_FLOAT( 18106.396484 ,a4_b4(3.3,8.3));
    TEST_ASSERT_EQUAL_FLOAT( 371667606299475968.000000, a4_b4(23457,1234) );
}
void test_a5_b5(void){
    TEST_ASSERT_EQUAL_FLOAT(1804229376.000000 , a5_b5(23,48) );
    TEST_ASSERT_EQUAL_FLOAT( 210034.203125, a5_b5(3.3,8.3) );
    TEST_ASSERT_EQUAL_FLOAT(  9176844786154457792512.000000,a5_b5(23457,1234) );
}


int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_ellipse);
  RUN_TEST(test_trapezoid);
  RUN_TEST(test_sphere_area);
  RUN_TEST(test_sphere_vol);
  RUN_TEST(test_cone_area);
  RUN_TEST(test_cone_vol);
  RUN_TEST(test_cylinder_area);
  RUN_TEST(test_cylinder_vol);
  RUN_TEST(test_a3_b3);
  RUN_TEST(test_S_a3_b3);
  RUN_TEST(test_a4_b4);
  
  RUN_TEST(test_mean);
  RUN_TEST(test_median);
  RUN_TEST(test_mode);
  
  return UNITY_END();
}