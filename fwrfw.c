 #include<stdio.h> 
  
 //////////////////////////////////////////////////////////////////////////////// 
 // 
 // Functin Name :   Addition 
 // Descreption :    it is used to perform additin of 2 integers 
 // Input argument : Integer , Intger 
 // output :         Integer 
 // author :         Prasad Kailas kadam 
 // Date :           25/09/2023 
 // 
 //////////////////////////////////////////////////////////////////////////////// 
  
 int Addition(int iNo1, int iNo2) 
 { 
     int iSum = 0;           // Variable to store the value of addition 
     iSum = iNo1 + iNo2; 
     return iSum; 
 } 
  
 //////////////////////////////////////////////////////////////////////////////// 
 // 
 // Entry Point function of an application which perform addition of 2 integer 
 // 
 //////////////////////////////////////////////////////////////////////////////// 
  
    int main() 
    { 
    auto int iValue1 = 0;   // Variable to store first input 
    auto int iValue2 = 0;   // Variable to store second input 
    auto int iAns = 0;      // Variable to store result 

    printf("Enter first number : \n"); 
    scanf("%d",&iValue1); 

    printf("Enter second number : \n"); 
    scanf("%d",&iValue2); 

    iAns = Addition(iValue1 ,iValue2);  // Function call to perform addition 

    printf("Addition is = %d\n" ,iAns); 

    return 0; 

    } 


