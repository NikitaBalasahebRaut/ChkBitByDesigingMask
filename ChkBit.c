/*
    Problem statement :
 Accept number from user and check whether fourth bit is on or off.
 
 Input :   43                     Binary :    1   0   1   0   1   1       (1+2+8+32)
 Output : TRUE
 
 Input :   35                     Binary :    1   0   0   0   1   1       (1+2+32)
 Output : FALSE
 
 */
 
 #include<stdio.h>
  typedef int BOOL;
 #define TRUE 1
 #define FALSE 0

 
 BOOL ChkBit(int iValue)
 {
	int iMask = 0x00000008;
    int iResult = 0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
 
    iResult = iValue & iMask;

    if(iResult == iMask	)
	{
		 return TRUE;
	}
	else
	{
		return FALSE;
	}
	 
 }
 
 int main()
 {
  int iNo = 0;
  BOOL bRet = FALSE;
  
  printf("enter the number \n");
  scanf("%d",&iNo);
  
  bRet = ChkBit(iNo);
  
  if(bRet == TRUE)
  {
     printf("Bit is on \n");
  }
  else
  {
     printf("Bit is off \n");
  }
 
 return 0;
 }
 
 /*
 
 output
 
 enter the number
43
Bit is on

D:\ProgramTopicWise\LB\6ProblemsOnBitWiseOperator\ChkBitByDesigningMask>myexe
enter the number
35
Bit is off

D:\ProgramTopicWise\LB\6ProblemsOnBitWiseOperator\ChkBitByDesigningMask>myexe
enter the number
12
Bit is on

*/

 