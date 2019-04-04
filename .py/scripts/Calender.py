#IMPORT FUNCTION TO IMPORT calendar
import calendar
#IMPUT YEAR
y=int(input("Enter the year= "))
#INPUT MONTH
#m=int(input("Enter the Month= "))
#JUST TO LOOK COOL
print("\n********CALENDER********")
#DEFINING A VARIABLE CAL TO START THE MONTH WITH SATURDAY
Cal=calendar.TextCalendar(calendar.SATURDAY)
#WILL BE USED FOR ALL YEAR REMOVE #IN ORDER TO DO SO
m=1
while m<=12:
#SETTING THE VARIABLE FOR MONTH SETTING
    Cal.prmonth(y,m)
    m   +=1
