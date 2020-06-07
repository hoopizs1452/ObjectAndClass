#from Date import Date

class Student:
    def __init__(self, n, d, s):
        self.__name = n
        self.__day = d
        self.__score = s
        
    def setName(self, newName):
        self.__name = newName
        
    def setDate(self, d):
        self.__day = d
        
    def setScore(self, newScore):
        self.__score = newScore
        
    def getName(self):
        return self.__name
    
    def getDate(self):
        return self.__day
    
    def getScore(self):
        return self.__score
    
    def toString(self):
        print(self.__name, end=' ')
        self.__day.toString()
        print(self.__score)