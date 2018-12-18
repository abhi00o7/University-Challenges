import sys
import os
import time
def fileHandler_Create_write_Custom():#defines a function for the file creation
    print("**********FILE HANDLING**********")
    print("Do you want to name Your file\n(otherwise it will be stored as a datestamp.)\n If yes then type 'Y' otherwise 'N' ")
    file=str(input(""))#takes the string value as input
    #file=str(file)
    if(file=="Y" or file=="y"):
        filename=str(input("Name your File="))
    else:
        filename=time.strftime("%Y%m%d%H%M%S")#unique file name when user enters
    try:
        lines=int(input("No of lines= "))
    except ValueError:
        print()
        print("Numbers Daal Bro.")
        sys.exit()
        #fileN=filename+".txt"
    fileCreated=open(filename+".txt","w")#opens files in write mode
    for line in range(0,lines):
        line+=1
        line=str(line)
        userInput=input("This is line:"+" "+line+" "+":" )
        fileCreated.writelines(userInput +"\n")
    fileCreated.close()
    sys.exit("Thank you for using this program")
#fileHandler_Create_write_Custom()#calling in the write function
def fileHandler_read_write():
    currentDirectory=os.getcwd()#gets the name of current directory using module
    print("**********FILE HANDLING**********")
    print("\n What Do you want to do.\n(Choose appropriate Number) \n \n 1->Rename File name \n 2->Update File Content \n 3->OverWrite file Content\n ")
    try:
        userInput=int(input(""))
    except ValueError:
        print("Numbers Daal Bro")
        sys.exit()
    switch(userInput)
    
    file_append=open(fileName+".txt","a")#"a" is to open the file in append mode
    file_overWrite=open(fileName+".txt","w")#w open the file in write mode
    print(currentDirectory)
#fileHandler_read_write()
def fileHandler_delete():
    print("**********FILE HANDLING**********")
    print("\n What Do you want to do.\n(Choose appropriate Number) \n \n 0->View Content of current directory \n 1->delete File Content \n 3->delete file\n ")
    currentDirectory=os.getcwd()
    try:
        userInput=int(input())
    except ValueError:
        print("\nNumber Daal bro.")
        sys.exit()
    os.rmdir(fileName)
    print("Your current working directory is.'",currentDirectory,"'")
#fileHandler_delete()
def fileHandler_display():
        print("**********FILE HANDLING**********")
        print("\n\n What Do you want to do.\n(Choose appropriate Number) \n \n 0->View Content of current directory 1->Display info of the text file")
        userInput
        file=open(filename+".txt","r")
