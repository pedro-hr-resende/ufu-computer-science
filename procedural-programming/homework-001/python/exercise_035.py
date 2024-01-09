# Student: Pedro Henrique Resende Ribeiro
# Description: Calculating the hypotenuse of a triangle
# Date: 2024-01-09 - Time: 01:20

from math import sqrt

a = float(input('Enter the 1st side of the triangle: '))
b = float(input('Enter the 2nd side of the triangle: '))

hypotenuse = sqrt(a ** 2.0 + b ** 2.0)

print(f'The hypotenuse is {hypotenuse}')
