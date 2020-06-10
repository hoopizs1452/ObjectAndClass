class Body:
    def __init__(self, height, weight):
        self.__height = height
        self.__weight = weight
        
    def setHeight(self, height):
        self.__height = height
        
    def setWeight(self, weight):
        self.__weight = weight
        
    def getHeight(self):
        return self.__height
    
    def getWeight(self):
        return self.__weight
    
    def getBMI(self):
        return (self.__weight / (self.__height * self.__height))
    
    def toString(self):
        return round(self.getBMI(), 2)