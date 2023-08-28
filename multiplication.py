m = True
while m :
    num = int(input("Enter number(2-12):"))
    if (num<2)or(num>12):
        pass
    else:
        print()
        print("-"*50)
        print("Multiplication Table ".center(50))
        print("-"*50)
        for i in range (1,13):
            for k in range (0,4):
                total = (num+k)*i
                print(f"{num+k}".rjust(2)+"*"+f"{i}".rjust(2)+"="+f"{total}".rjust(3),end=" |")
            print()
    print()
    
