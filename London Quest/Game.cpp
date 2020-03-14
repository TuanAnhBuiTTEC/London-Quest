#include "stdafx.h"
#include "Game.h"

void Game::InitWindows()
{
	this->Window = new sf::RenderWindow();
}

void Game::InitVars()
{
}

Game::Game()
{
}

Game::~Game()
{
}

void Game::Init()
{
}

void Game::Run()
{
	if (this->Window->isOpen()) {

	}
}

void Game::Update(float& dt)
{
	if (this->Window->pollEvent(this->Evt)) {

	}
}

void Game::Render(sf::RenderTarget* Target)
{
	this->Window->clear();
	
}
