def isLeapYear(newYear):
    if newYear % 4 == 0:
        if newYear % 100 != 0 or newYear % 400 == 0:
            return True
        else:
            return False
            
for i in range(0, 3, 1):
    newYear = int(input())
    if isLeapYear(newYear):
        print("The", newYear, "is leap year.")
    else:
        print("The", newYear, "isn't leap year.")