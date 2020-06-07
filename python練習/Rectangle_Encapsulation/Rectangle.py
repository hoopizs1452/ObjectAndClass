class Rectangle:
    def __init__(self, length, width):
        self.__length = length
        self.__width = width
        
    def setLength(self, leng):
        self.__length = leng
    
    def setWidth(self, wid):
        self.__width = wid
        
    def getLength(self):
        return self.__length
    
    def getWidth(self):
        return self.__width
    
    def getArea(self):
        return self.getLength() * self.getWidth()
    
    def getPerimeter(self):
        total = int(self.getWidth()) * 2 + int(self.getLength()) * 2
        return total