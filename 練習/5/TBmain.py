from Teacher import Teacher
from Body import Body

teacher1 = Teacher("Candy", Body(1.7, 80), 88000)
teacher2 = Teacher("Linda", Body(1.6, 90), 61000) 

name = input()
height = float(input())
weight = int(input())

teacher1.setName(name)
teacher2.setBody(Body(height, weight))

teacher1.toString()
teacher2.toString()