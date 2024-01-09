# Student: Pedro Henrique Resende Ribeiro
# Description: Print the volume of a cylinder
# Date: 2024-01-09 - Time: 01:30

PI = 3.141592

radius = float(input('Enter the radius of the cylinder: '))
height = float(input('Enter the height of the cylinder: '))

volume = PI * (radius ** 2.0) * height

print(f'The volume is {volume}')
