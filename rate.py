amount = int (input("Enter amount : "))
rate = float (input("Enter rate : "))
year = int (input("Enter year : "))

m = (rate/100)
FV = (amount *(1+m)**year)

print("Enter amount :",amount)
print("Enter rate :",rate)
print("Enter year :",year)
print("Future Value = ",FV)
