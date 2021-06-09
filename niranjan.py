numberOfPatient = 0
n = 1
bangalore=[]
outSideBangalore=[]
allPatients = []
import datetime
class Patient:
    def __init__(self, name, age, branch, date):
        self.name = name
        self.age = age
        self.branch = branch
        self.date = date

    def setAddress(self, address):
        self.address = address



def checkDates(fromDate, toDate, checkDate):
    d1 = [int(x) for x in fromDate.split("-")][::-1]
    d2 = [int(x) for x in toDate.split("-")][::-1]
    c = [int(x) for x in checkDate.split("-")][::-1]
    d1Final = datetime.datetime(d1[0],d1[1],d1[2])
    d2Final = datetime.datetime(d2[0],d2[1],d2[2])
    cFinal = datetime.datetime(c[0],c[1],c[2])
    if(d1Final<cFinal and d2Final>cFinal):
        return True
    return False


def findAllUsers(startDate, endDate):
    for i in allPatients:
        if(checkDates(startDate,endDate, i.date)):
            if(i.branch =='Bangalore' or i.branch =='bangalore' or i.branch =='BLR'):
                bangalore.append(i)
            else:
                outSideBangalore.append(i)
        else:
            print("No")



# Driver Code
while(n == 1):
    print("Press 1 to Enter Details.\nPress 2 to Find Details between days.\nPress 3 to EXIT")
    whatToDo = int(input())
    if(whatToDo==1):
        numberOfPatient+=1
        print("Enter Name, Age, State, Date(DD-MM-YYYY) in a single line having space")
        alpha = [x for x in input().split()]
        allPatients.append(Patient(alpha[0], int(alpha[1]), alpha[2], alpha[3]))
    if(whatToDo==2):
        if(numberOfPatient!=0):
            print("Enter Start Date :: ")
            startDate = input()
            print("Enter End Date :: ")
            endDate = input()
            findAllUsers(startDate, endDate)
            print("Total number of People in between ", startDate, " to ", endDate, " are ", numberOfPatient)
            print("============================================================================================")
            print("Number of People came in Bangalore in between ", startDate, " to ", endDate, " are ", len(bangalore))
            print("Percentage of People came to Bangalore is :: ", (len(bangalore)/numberOfPatient)*100, "\n\n")
            print("Number of People did not came to Bangalore center in between ", startDate, " to ", endDate, " are ", len(outSideBangalore))
            print("Percentage of People did not came to Bangalore is :: ", (len(outSideBangalore)/numberOfPatient)*100)
        else:
            print("Please Do Entry First")
    # print(a.getAddress())
    if(whatToDo==3):
        n=0