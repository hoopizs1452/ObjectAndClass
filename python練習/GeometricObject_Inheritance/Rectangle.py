from GeometricObject import GeometricObject

class Rectangle(GeometricObject):
    def __init__(self, width, height, color, filled):
        super().__init__(color, filled)
        self.__width = width
        self.__height = height
        
    def setWidth(self, width):
        self.__width = width
        
    def setHeight(self, height):
        self.__height = height
        
    def getWidth(self):
        return self.__width
    
    def getHeight(self):
        return self.__height
    
    def getPerimeter(self):
        return (int(self.__width) * 2) + (int(self.__height) * 2)
    
    def getArea(self):
        return int(self.__width) * int(self.__height)