class Date:
    def __init__(self, m, d, y):
        self.__month = m
        self.__day = d
        self.__year = y
        
    def setMonth(self, newMonth):
        self.__month = newMonth
        
    def setDay(self, newDay):
        self.__day = newDay
        
    def setYear(self, newYear):
        self.__year = newYear
        
    def getMonth(self):
        return self.__month
    
    def getDay(self):
        return self.__day
    
    def getYear(self):
        return self.__year
    
    def toString(self):
        print(str(self.getMonth()) + '\\' + str(self.getDay()) + '\\' + str(self.getYear()), end=' ')