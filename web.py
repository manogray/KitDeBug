import pygame
from pygame import *

class botao():
    def __init__(self,color,x,y,width,height,text=''):
        self.color = color
        self.x = x
        self.y = y
        self.width = width
        self.height = height
        self.text = text

    def draw(self,screen,outline=None):
        if outline:
            pygame.draw.rect(screen,outline,(self.x-2,self.y-2,self.width+4,self.height+4),0)
        
        pygame.draw.rect(screen,self.color,(self.x,self.y,self.width,self.height),0)

    def isOver(self,pos):
        if (pos[0] > self.x and pos[0] < self.x + self.width):
            if (pos[1] > self.y and pos[1] < self.y + self.height):
                return True

        
        return False