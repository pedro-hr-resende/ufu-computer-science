# Student: Pedro Henrique Resende Ribeiro
# Description: Print the price of a discounted product
# Date: 2024-01-09 - Time: 01:40

price = float(input('Enter the price of the product: '))

discount = 0.12
newPrice = price * (1 - discount)

print(f'The new price is {newPrice:,.2f}')
