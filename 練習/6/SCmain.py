from Cuboid import Cuboid
from Sphere import Sphere

radius = int(input())
c1 = input()
length = float(input())
width = float(input())
height = float(input())
c2 = input()

sphere = Sphere(radius, c1)
cuboid = Cuboid(length, width, height, c2)

print("{}({}),{},{}".format(sphere.__str__(), sphere.getRadius(), sphere.getVolume(), sphere.getColor()))
print("{}({},{},{}),{},{}".format(cuboid.__str__(), int(cuboid.getLength()), int(cuboid.getWidth()), int(cuboid.getHeight()), cuboid.getVolume(), cuboid.getColor()))