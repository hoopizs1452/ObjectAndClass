from Date import Date
from Student import Student

s1 = Student("John", Date(6, 1, 1999), 90)
s2 = Student("Marry", Date(10, 8, 1997), 80)

name = input()
month = int(input())
day = int(input())
year = int(input())

s1.setName(name)
s2.setDate(Date(month, day, year))

s1.toString()
s2.toString()