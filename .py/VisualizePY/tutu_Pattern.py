#importing the turtle module
import turtle
'''WAP to show pie chart and and bar graph
write diffrent opjects like rectangle circle and square
'''
#Creating the turtle
tutu=turtle.Turtle()
tutu.speed(0)
def square(side,distance,angle=90):
    for s in range(side):
        tutu.forward(distance)
        tutu.left(360/side)
def Circle(radius=0,angle=90):
    tutu.shape("turtle")
    #color range
    #turtle.colormode(255)
    for radius in range(60):
        tutu.circle(5*radius)
        tutu.circle(-5*radius)
        tutu.right(angle)
        # tutu.circle(radius)
        # tutu.circle(-radius)
#square(4,150)
def Circle_hole():
    for s in range(60):
        square(s,1*s)
        tutu.left(s)
        #tutu.color(2*radius,radius,9*radius)
Circle(1,11)
#Circle_hole()
#when to end the turtle window
turtle.exitonclick()
