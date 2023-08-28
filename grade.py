text = ""
tpoint = 0

print("="*40)
print("|Program Calculate Grade Point Average|".center(40))
print("="*40)
print("Input Data:")
for i in range(1,6):
    name = input(f"Enter subject name({i}):")
    score = float(input(f"Enter subject score({i}):"))
    if score <= 49 :
        grade = "F"
        point = 0.0
    elif score <= 59 :
        grade = "D"
        point = 1.0
    elif score <= 69 :
        grade = "C"
        point = 2.0
    elif score <= 79:
        grade = "B"
        point = 3.0
    elif score <= 100:
        grade = "A"
        point = 4.0
    else:
        print("score is over!!!")
        break
    print()
    tpoint += point*3.0
    text += (f"{i}".rjust(3)+f"  {name}".ljust(24)+f"{score}".ljust(5)+f"{grade}".rjust(4)+f"{point}".rjust(8)+"\n")

if score < 100:
    print("Grade Point Average (GPA) Report".center(50))
    print("="*50)
    print(" No. "+"Subject Name".ljust(22)+"Mark".ljust(6)+"Grade".ljust(6)+"Points".ljust(6))
    print("="*50)
    print(text)
    print("="*50)
    print("Total point:",tpoint)
    print(f"Total Credits:",(i*3.0))
    print("Grade Point Average(GPA):","%.2f"%(tpoint/(i*3)))
