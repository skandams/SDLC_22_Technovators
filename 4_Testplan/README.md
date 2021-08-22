# TEST PLAN:

## High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| H1|Display of main menu and selection of the approppriate calculator| None | Menu<br>(1) Medical <br>(2)Electronic<br>(3)Scientific <br>(4)Arithmetic<br>(5)None| - | Scenario|
| H2|Navigate between various functions as per user entered input |Choice number of calculator|Display the required calculator |-|Requirement based |
| H3|Returning to the desired menu when prompted after using a specific calculator |None|Display main menu| - |Requirement based |
| H4|Exiting from terminal as per user input |Type "yes" when prompted to exit|Close the application | - | Requirement based |
| H5|Calculation of scientific parameters and display result |Scientific parameters |Display output| - | Requirement based |
| H6|Calculation of arithmetic parameters and display result |Arithmetic parameters |Display output| - | Requirement based |
| H7|Calculation of medical parameters and display result |Medical parameters |Display output| - | Requirement based |
| H8|Calculation of electronic parameters and display result |Electronic parameters |Display output| - | Requirement based |
| H9|Calculation of bank account parameters and display result|Bank account parameters |Display output| - | Requirement based |




## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L1|H1|The main menu should be clearly displayed post which the input from the user should be captured and operations should be done accordingly | Choice number| Display required calculator| SUCCESS |Requirement based |
|  L2|H2|Once entered to a specific calculator, all functions should be displayed and according to the user input it should navigate to the next part |Required parameters|Dsiplay Result| SUCCESS |Scenario|
|  L3|H3|When user needs to go to the previous menu, it should be displayed| - | - | - | - |
|  L4|H3|	When user wants to directly go to the main menu it should navigate| - | - | - | - |
|  L5|H4|When user desires to exit the terminal at any stage of user input, the terminal should be closed| - | - | - | - |
|  L6|H5|Calculation of sine of a given number| - | - | - | - |
|  L7|H5|Calculation of cosine of a given number| - | - | - | - |
|  L8|H5|Calculation of tangent of a given number| - | - | - | - |
|  L9|H5|Calculation of sine inveres of a given number| - | - | - | - |
|  L10|H5|Calculation of cosine inverse of a given number| - | - | - | - |
|  L11|H5|Calculation of tangent inverse of a given number| - | - | - | - |
|  L12|H5|Calculation of natural log of a given number| - | - | - | - |
|  L13|H5|Calculation of log of a given number| - | - | - | - |
|  L14|H5|Calculation of Square of a number| - | - | - | - |
|  L15|H5|Calculation of Cube of a number| - | - | - | - |
|  L16|H5|Calculation of Square Root of a number| - | - | - | - |
|  L17|H5|Calculation of Cube Root of a number| - | - | - | - |
|  L18|H5|Calculation of Power| - | - | - | - |
|  L19|H5|Calculation of Factorial of a number| - | - | - | - |
|  L20|H5|Calculation of Inverse of a number| - | - | - | - |
|  L21|H6|Calculation of sum of two numbers| - | - | - | - |
|  L22|H6|Calculation of difference of two numbers| - | - | - | - |
|  L23|H6|Calculation of product of two numbers| - | - | - | - |
|  L24|H6|Calculation of ratio of two numbers| - | - | - | - |
|  L25|H8|Calculation of basic electrical parameters| - | - | - | - |
|  L26|H8|Finding series and parallel resistance| - | - | - | - |
|  L27|H8|Source transformation| - | - | - | - |
|  L28|H2|User input to select an option from multiple medical parameters are given and the same is printed in the medi-Calc main menu| - | - | - | - |
|  L29|H7|User input is fetched for the parameters selected and it is calculated| - | - | - | - |
|  L30|H7|Required parameter is calculated and value is printed| - | - | - | - |
|  L31|H9|To create a new account| - | - | - | - |
|  L32|H9|To Deposit some amount in newly created account| - | - | - | - |
|  L33|H9|To Withdraw some amount from your account| - | - | - | - |
|  L34|H9|To display all information of the existing accounts| - | - | - | - |
|  L35|H9|To log out successfully| - | - | - | - |
