from Circle import Circle
from Rectangle import Rectangle

radius = input()
width = input()
height = input()
cc = input()
cf = input()
rc = input()
rf = input()

c = Circle(radius, cc, cf)
r = Rectangle(width, height, rc, rf)

print("Circle:\nRadius is {}\nDiameter is {}\nArea is {}\nPerimeter is {}".format(c.getRadius(), c.getDiameter(), c.getArea(), c.getPerimeter(), end=''))
c.__str__()
print("Rectangle:\nWidth is {}\nHeight is {}\nArea is {}\nPerimeter is {}".format(r.getWidth(), r.getHeight(), r.getArea(), r.getPerimeter(), end=''))
r.__str__()