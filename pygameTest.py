import pygame
import random
import time

#INITIALISING THE GAME
pygame.init()

#DRAW WINDOW
WIN_WIDTH = 1920
WIN_HEIGHT = 1080

WINDOW = pygame.display.set_mode((WIN_WIDTH, WIN_HEIGHT))

#CUSTOMISING WINDOW
window_caption = "Game"
#window_icon = pygame.image.load(icon.png)

pygame.display.set_caption(window_caption)
#pygame.display.set_icon(window_icon)

#THE GAME
running = True
while(running):
    pygame.display.screen.fill(0, 0, 0)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
