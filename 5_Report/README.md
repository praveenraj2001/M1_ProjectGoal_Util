# Engineering_calculator
# Description
 * This Project is an Engineering Calculator and which is extremely useful to students and will save them time while doing some complex calculations 
 
## Goal
* Simple user interface
* Improved accuracy of the result

## Input
* Choose which option needs to be selected for different operations
* input different values for different operations 

## Process
* Display mathematical branches available
* Display different options under the selected branch
* Calculate the data and result

## Output
* Return/display the calculated values

---
## Design Thinking Process
 * **Empathize**  Here all the information is gathered about the problem of making a calculator
 * **Define** The use of calculator is widely involved in presicion calculators but when we use mobilephones and webapplications they tend to be more unreliable so the use of computer based calculator is the main defination of this project
 * **Ideate** Here the brainstorming ideas are born for making an idea to make a simple but presicion calculator
 * **Prototype** This is the prototype of the project
 * **Test** The math calculator is Tested and verified with the outputs *see 4_TestPlanAndOutput* for test
 ---
 
 * Documentation is also done for the project with Doxygen
 * All Codacy, Codiga, Unity, Dynamic Check, Static Check, Linux build

 #### **Implementation is done and the file runs succesfully**

#### **The Architecture  (Behavioural, Structural) both high and low level is also created**

# THESE ARE THE CERTIFICATES THAT I'VE COMPLETED
   * NDG
   * GIT
   * Solo learn
   * Hacker Earth



![NDG](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/0_Certificates/NDG.png)

![GIT](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/0_Certificates/Git_Cert.png)

![SOLO LEARN](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/0_Certificates/Sololearn.png)
![Hacker Earth](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/0_Certificates/HackerEarth.png)
  
  ---

## Identifying features
 * It should give accurate values
 * Having precision upto 6 decimal points
 * Easy to use

## State of art
 * The main focus point here is the precision which will be very useful for many sensitive calculation
 * Takes less computational time

## 5W's & 1H
### This below image represents the 5W's &1H analysis that I've done
![5W's & 1H](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/1_Requirements/5w1h.png)

## S.W.O.T analysis 
### This below images represents the S.W.O.T analysis that I've done
![SWOT](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/1_Requirements/SWOT-Analysis-Template.jpg)

---

## Requirements

<!-- Tables -->

| ID | High Level Requirements |
| -------- | -------------- |
| HL1 | Options for Different operations |
| HL2 | Take different inputs for Different options |
| HL3 | Store Data inserted |
| HL4 | Calculate the Different operations |


| ID | Low Level Requirements for HL1|       |ID | Low Level Requirements for HL2|
| -------- | -------------- | ---- |-------- | -------------- |
| H1L1 | Give all the options available|       |H2L1 | Get the input Option |
| H1L2 | Give all the Sub-options available|       |H2L2 | Get the variable values according to Selected option |



| ID | Low Level Requirements for HL3|  |ID | Low Level Requirements for HL4|
| -------- | -------------- | ---- | -------- | -------------- |
| H3L1 | Set the initial Database to Zero |  | H4L1 | Calculate the equation according to input data |
| H3L2 | Store Data inserted data into the Database |  | H4L2 | Print the final result to the screen |

## Best Method Followed
 * Instead of making multiple loops for sorting here we have used qsort which is the best method to follow and it gives best results

---

# Design
 ## Behavioural Diagram
 * High Level Flow chart Behavioural Diagram:
 
 ![High_level_flowchart](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/struct_HL.png)
 
 * Low Level Flow chart Behavioural Diagram:

 ![Low_level_flowchart](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/struct_LL.png)
 

 ## Structural Diagram
 
 * High Level UML Use Case Structural Diagram:
 
  ![High_level_UML Usecase](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/hl_uml.png)
  
 * Low Level UML Use Case Structural Diagram:
    
  ![Low_level_UML Usecase](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/ll_uml.png)

  ## Best method followed
   * The best of the best Diagrams are considered
   * from this Diagrams code is made 
   * low level and high level both are implimented

---

   # Doxygen Documentation

## NOTE
* The below we have Doxyfile Documentation


![Doxy_ss1](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/Documentation/Documentation_page-0001.jpg)
![Doxy_ss2](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/Documentation/Documentation_page-0002.jpg)
![Doxy_ss3](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/Documentation/Documentation_page-0003.jpg)
![Doxy_ss4](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/Documentation/Documentation_page-0004.jpg)
![Doxy_ss5](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/Documentation/Documentation_page-0005.jpg)
![Doxy_ss6](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/Documentation/Documentation_page-0006.jpg)
![Doxy_ss7](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/6_ImagesAndVideos/Documentation/Documentation_page-0007.jpg)

---

# Test plan and output

#### Test plan is created and verified on both manual and automated manner

## HIGH LEVEL TEST PLAN

| Test ID (for selecting)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | STATISTICS | 1  | STATISTICS inputs|  ✓ |
| 02 | PLAIN GEOMETRY | 2 | PLAIN GEOMETRY inputs |  ✓ |
| 03 | MENSURATION | 3 | MENSURATION options | ✓ |
| 04 | ALGEBRA | 4 | ALGEBRA values | ✓ |

| Test ID (for selecting)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | MEAN,MEDIAN,MODE | ARRAY , N  | outputs from Mean,median,mode|  ✓ |
| 02 | ELLIPSE,TRAPEZOID | 1 or 2 for selecting | outputs from Ellipse,Trapezoid |  ✓ |
| 03 | SPHERE,CONE,CYLINDER | 1 or 2 or 3 for selecting | outputs from sphere,cone,cylinder | ✓ |
| 04 | (a+b)^3,(a-b)^3,(a+b)^4,(a+b)^5 | a , b | ALGEBRA values | ✓ |


#### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here

## LOW LEVEL TEST PLAN

| Test ID (for statistics)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check mean | values = {1,1,1,2,3,4,5}, no.of values =7  | 2.428571 |  2.428571 |
| 02 | Check median | values = {1,1,1,2,3,4,5}, no.of values =7 | 2.900000 |  2.900000 |
| 03 | Check mode | values = {1,1,1,2,3,4,5}, no.of values =7 | 1.000000 | 1.000000 |


| Test ID (for linear geometry and mensuration)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check ellipse | 23, 48 | 3468.318359 | 3468.318359 |
| 02 | Check trapezoid | 23, 48, 53 | 1881.500000 | 1881.500000 |
| 03 | Check sphere volume and area | 3.3 | 150.532547(vol) 136.847778(area)| 150.532547(vol) 136.847778(area) |
| 04 | Check cone volume and area | 3.3,8.3 | 94.653046(vol) 92.599968(area)| 94.653046(vol) 92.599968(area) |
| 05 | Check cylinder volume and area | 3.3,8.3 | 283.959137(vol) 240.520340(area)| 283.959137(vol) 240.520340(area) |

| Test ID (for algebra)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check (a+b)^3 | a=23457 , b= 1234  | 15052756221952.000000 |  15052756221952.000000 |
| 02 | Check (a-b)^3 | a=23 , b= 48 | -15625.000000 |  -15625.000000 |
| 03 | Check (a+b)^4 |  a=23 , b= 48  | 25411680.000000 | 25411680.000000 |
| 04 | Check (a+b)^5 |  a=23 , b= 48  | 1804229376.000000 | 1804229376.000000 |

### Best Practices
  *  [x] Checked multiple range of inputs
  *  [x] Compared the data obtained with calculator
  *  [x] reasoned with the values because we have high precision than the calculator itself

---
  
## About the code
| Codacy,Codiga | CI | Unity | Dynamic Check | cppCheck | Linux build |
| --- | --- | --- | --- | --- | --- |
| [![Codacy Badge](https://api.codacy.com/project/badge/Grade/a1edf2417a2e46699e8245f518c674f4)](https://app.codacy.com/organizations/gh/praveenraj2001/repositories) [![Codacy Badge](https://api.codiga.io/project/30931/status/svg)](https://api.codiga.io/project/30931/status/svg) | [![C/C++ CI](https://github.com/praveenraj2001/M1_ProjectGoal_Util/actions/workflows/final_project.yml/badge.svg)](https://github.com/praveenraj2001/M1_ProjectGoal_Util/actions/workflows/final_project.yml)  | [![Unit Testing - Unity](https://github.com/praveenraj2001/M1_ProjectGoal_Util/actions/workflows/test_new.yml/badge.svg)](https://github.com/praveenraj2001/M1_ProjectGoal_Util/actions/workflows/test_new.yml) | [![Dynamic_check](https://github.com/praveenraj2001/M1_ProjectGoal_Util/actions/workflows/Dynamic_check.yml/badge.svg)](https://github.com/praveenraj2001/M1_ProjectGoal_Util/actions/workflows/Dynamic_check.yml) | [![StaticCheck/cppCheck](https://github.com/praveenraj2001/M1_ProjectGoal_Util/actions/workflows/Static-check.yml/badge.svg)](https://github.com/praveenraj2001/M1_ProjectGoal_Util/actions/workflows/Static-check.yml) | [![Linux C/C++ CI](https://github.com/praveenraj2001/M1_ProjectGoal_Util/actions/workflows/build_linux.yml/badge.svg)](https://github.com/praveenraj2001/M1_ProjectGoal_Util/actions/workflows/build_linux.yml) |
