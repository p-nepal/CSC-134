from turtle import *

# turtle presets
t = Turtle()
s = Screen()
s.bgcolor("Black")
t.shape("turtle")
t.pensize(5)
t.color("PowderBlue")
t.pencolor("PowderBlue")
t.penup()
t.goto(0, -350)
t.pendown()
t.speed(0.1)


def drawRectangle(sideLength1, sideLength2):
    t.begin_fill()
    for i in range(2):
        t.forward(sideLength1)
        t.left(90)
        t.forward(sideLength2)
        t.left(90)
    t.end_fill()

def drawpolygon(sidelength, sides):
    t.begin_fill()
    for i in range(sides):
        turn = 360 / sides
        t.forward(sidelength)
        t.left(turn)
    t.end_fill()

def drawCircle(size):
    t.circle(size)

size = 10

for i in range(20):
    drawCircle(size)
    size += 20

t.penup()
t.goto(0, 350)
t.left(270)
t.speed(1)
t.goto(0, -350)
