from Shape import Shape

class Sphere(Shape):
    def __init__(self, radius, color):
        super().__init__(color)
        self.__radius = radius
        
    def setRadius(self, radius):
        self.__radius = radius
        
    def getRadius(self):
        return self.__radius
    
    def getVolume(self):
        volume = 4 * 3.14159 * pow(self.getRadius(), 3) / 3
        return round(volume, 1)
    
    def __str__(self):
        return "Sphere:"