# Student: Pedro Henrique Resende Ribeiro
# Descriptiion: Sum of successor and predecessor
# Date: 2024-01-09 - Time: 00:50
 
number = int(input('Enter an integer number: '))

predecessor = (number * 2) - 1
successor = (number * 3) + 1

print(f'The sum is {predecessor + successor}')
