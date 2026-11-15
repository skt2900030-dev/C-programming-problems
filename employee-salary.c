#include<stdio.h>
int main()
{
  float net_salary,allowance,basic_salary,deduction_amounts;
  float gross_salary;

  printf("ENTER THE BASIC SALARY : ");
  scanf("%f",&basic_salary);
  printf("ENTER THE ALLOWANCE : ");
  scanf("%f",&allowance);
  printf("ENTER THE DEDUCTION AMOUNTS : ");
  scanf("%f",&deduction_amounts);

  //formulas to calculate the net _salary of the employee
  gross_salary = basic_salary + allowance;
  net_salary = gross_salary - deduction_amounts;

  printf("\n NET SALARY OF THE EMPLOYEE = %.2f\n",net_salary);

return 0;
}
