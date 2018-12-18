#making a circle out of squares in python using turtle module
import turtle
tutu = turtle.Turtle()
tutu.shape("circle")
tutu.color("navy blue")
#tutu.width(4)
# tutu.penup()
# tutu.goto(0,60)
# tutu.pendown()
#tutu=turtle.Turtle()
tutu.speed(0)
#tutu.goto(-150,-150)
#Definig a square
def square(length,angu):
#change the range and see the magic
    for sq in range(12):
        tutu.forward(length)
        tutu.right(angu)
        length+=5
def circle():
    for angular in range(0,36):
#change length and see align to the screen
        #square(10,90)
        tutu.circle(100)
        tutu.circle(150)
        tutu.circle(60)
#change this for the right angu
        tutu.right(11)
#square(5,90)
circle()

turtle.exitonclick()

# tutu2=turtle.Turtle()
# tutu2.speed(0)
# def square2(length,angu):
#     for sq in range(6):
#         tutu2.forward(length)
#         tutu2.right(-angu)
# def circle2():
#     for angular in range(0,80):
#         square2(200,90)
#         tutu2.right(-10)
# circle2()
