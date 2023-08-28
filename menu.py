loop = True 
Total = 0
Total2 = 0
text = ""
Order = 0
while loop:
    print("="*21)
    print("|" + "Drinks Menu".center(19)+ "|")
    print("="*21)
    print("| " + "0. Quit".ljust(18)+"|")
    print("| " + "1. Hot Coffee".ljust(18)+"|")
    print("| " + "2. Ice Coffee".ljust(18)+"|")
    print("| " + "3. Frappe Coffee".ljust(18)+"|")
    print("| " + "4. Calculate Cost".ljust(18)+"|")
    print("="*21)

    select = input("Select Item :")
    if select == "0" or select=="":
        print("Exit Program....")
    elif select == "1":
        Qty = input("Ice Coffee,how many glasses:")
        price = 35.00
        Item = ("Hot Coffee   ")
        if Qty =="":
            print("Emty")
        Total = price*int(Qty)
        Total2 += float(Total)
        text += (f" {Qty} "+ f"  {Item}"+ f"%.2f".rjust(7)%price + f"%.2f".rjust(9)%Total+"\n")
    elif select == "2":
        Qty = input("Ice Coffee,how many glasses:")
        price = 50.00
        Item = ("Ice Coffee   ")
        if Qty == "":
            print("Empty")
        Total = price*int(Qty)
        Total2 += float(Total)
        text += (f" {Qty} "+ f"  {Item}"+ f"%.2f".rjust(7)%price + f"%.2f".rjust(9)%Total+"\n")
    elif select == "3":
        Qty = input("Frappe Coffee,how many glasses:")
        price = 60.00
        Item = ("Frappe Coffee")
        if Qty == "":
            print("Empty")
        Total = price*int(Qty)
        Total2 += float(Total)
        text += (f" {Qty} "+ f"  {Item}"+ f"%.2f".rjust(7)%price + f"%.2f".rjust(9)%Total+"\n")
    elif select == "4":
        Order += 1
        print ("Order #",Order,":")
        print("-"*40)
        print("Qty "+" Item".ljust(6)+"Price".rjust(16)+"Total".rjust(10))
        print("-"*40)
        print(text)
        print("-"*40)
        print("Total : %.2f"%Total2,"Bath")
        text = ""
        Total2 = 0

    else:
        print("Empty")
    
    

