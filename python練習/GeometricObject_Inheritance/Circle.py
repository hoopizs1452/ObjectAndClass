import math
from GeometricObject import GeometricObject

class Circle(GeometricObject):
    def __init__(self, radius, color, filled):
        super().__init__(color, filled)
        self.__radius = radius
        
    def setRadius(self, radius):
        self.__radius = radius
        
    def getRadius(self):
        return self.__radius
    
    def getDiameter(self):
        return int(self.__radius) * 2
    
    def getPerimeter(self):
        return 2 * math.pi * int(self.__radius)
    
    def getArea(self):
        return math.pi * math.pow(int(self.__radius), 2)