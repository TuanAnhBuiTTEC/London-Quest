#pragma once
#include "States/States.h"
#include "States/Graphics/Graphics.h"

class Game
{
private:
	Graphics* GSettings;
	sf::Event Evt;
	sf::RenderWindow* Window;
	sf::RenderTarget* Target;
	sf::VideoMode Mode;

	//Inits
	void InitWindows();
	void InitVars();
public:
	Game();
	~Game();

	//Functions
	void Init();
	void Run();
	void Update(float& dt);
	void Render(sf::RenderTarget* Target);
};

