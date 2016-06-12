/*
 * graphics.cpp
 *
 *  Created on: 10 juin 2016
 *      Author: Baderkhane Oussama
 */

#include "graphics.h";
#include <SDL2/SDL.H>


Graphics::Graphics(){
	SDL_CreateWindowAndRenderer(800,600,0,&this->_window,&this->_renderer);
	SDL_SetWindowTitle(this->_window,"Test project");
}
Graphics::~Graphics(){
	SDL_DestroyWindow(this->_window);
}
