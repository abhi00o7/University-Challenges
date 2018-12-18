#importing the turtle module
import turtle
'''WAP to show pie chart and and bar graph
write diffrent opjects like rectangle circle and square
'''
#Creating the turtle
tutu=turtle.Turtle()
tutu.speed(0)
def Circle(radius):
    #color range
    turtle.colormode(255)
    for radius in range(30):
        tutu.circle(5*radius)
        #tutu.circle(-5*radius)
        if(radius//2==0):
            tutu.right(radius)
        else:
            tutu.left(radius)
        #tutu.color(2*radius,radius,9*radius)
Circle(1),Circle(11)
turtle.exitonclick()
