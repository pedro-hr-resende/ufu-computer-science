# Student: Pedro Henrique Resende Ribeiro
# Description: Print an employee's new salary
# Date: 2024-01-09 - Time: 01:50

salary = float(input("Enter the employee's salary: "))

increase = 0.25
newSalary = salary * (1 + increase)

print(f'The new salary is {newSalary:,.2f}')
