# -*- coding: utf-8 -*-
import sys
import os
import time
import pygame
import web
from pygame import *


#INCICIALIZAÇÃO
check_error = pygame.init()
if check_error[1] > 0:
    print("(!) Ops, {0} o Pygame iniciou com algum problema...".format(check_error[1]))
    sys.exit(-1)
else:
    print("(+) PyGame inicializado com sucesso!")

#VARIAVEIS GLOBAIS
backgroundColor = pygame.color.Color('#f5f5f5') # background
primaryColor = pygame.color.Color('#00969b')
dark = pygame.color.Color('#333333')
width = 1366
height = 730
size = (width,height)

#CONFIGS INICIAIS
screen = pygame.display.set_mode(size)
screen.fill(backgroundColor)
pygame.display.flip()
pygame.display.set_caption("Kit de Instrumentação")
logo = pygame.image.load('images/logoBugs.png')
font = pygame.font.Font('fonts/Montserrat-Regular.ttf',20)


menu = pygame.Surface((245,730))
menu.fill(primaryColor)
menu.blit(logo,(8,20))
screen.blit(menu,(0,0))

scope = web.botao((255,255,255,255),5,150,245,50,'Osciloscópio')
multi = web.botao((255,255,255,255),5,200,245,50,'Multímetro')
gerador = web.botao((255,255,255,255),5,250,245,50,'Gerador de Sinal')

scope.draw(menu)
multi.draw(menu)
gerador.draw(menu)

pygame.display.flip()
while True:
    for event in pygame.event.get():
        mousePos = pygame.mouse.get_pos()
        if event.type == QUIT:
            pygame.quit()

        if event.type == pygame.MOUSEBUTTONDOWN:
            if scope.isOver(mousePos):
                print('scope')

            
            if scope.isOver(mousePos):
                print('multi')

            
            if scope.isOver(mousePos):
                print('gerador')
    
    pygame.display.update()