number = int(input("Enterr integer number : "))

B1000 = int(number//1000)
B100 = int(number%1000)//100
B70 = int(number%100)//10
B10 = int(number%10)//1

print("Enterr integer number : ",number)
print(B1000)
print(B100)
print(B70)
print(B10)


