m = int(input("Enterr number mony withdraw : "))

B1000 = float(m//1000)
B500 = float(m%1000)//500
B100 = float(m%500)//100

print("Enterr number mony withdraw : ",m)
print("Cash B1000 : ",B1000)
print("Cash B500 : ",B500)
print("Cash B100 : ",B100)
