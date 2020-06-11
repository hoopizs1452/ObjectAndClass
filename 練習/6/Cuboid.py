from Shape import Shape

class Cuboid(Shape):
    def __init__(self, length, width, height, color):
        self.__length = length
        self.__width = width
        self.__height = height
        super().setColor(color)
        
    def setLength(self, length):
        self.__length = length
        
    def setWidth(self, width):
        self.__width = width
        
    def setHeight(self, height):
        self.__height = height
        
    def getLength(self):
        return self.__length
    
    def getWidth(self):
        return self.__width
    
    def getHeight(self):
        return self.__height
        
    def getVolume(self):
        volume = self.getLength() * self.getWidth() * self.getHeight()
        return round(volume, 1)
    
    def __str__(self):
        return "Cuboid:"
        