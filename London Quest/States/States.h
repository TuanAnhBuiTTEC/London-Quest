#pragma once
#include "Graphics/Graphics.h"

class Data {//Data used for children states
	sf::RenderWindow* Window;
	Graphics* GSettings;
	std::map<std::string, int>* Keys;
	std::stack<States*>* State;
};

class States
{
protected:
	sf::RenderTarget* Target;
	sf::Texture* BackGrounds;
	Graphics* GSettings;
	std::map<std::string, int> Inputs;

	bool Quit;
	bool Pause;
	bool UnPause;
	//Inits
	void InitWindow();
	void InitBackGrounds();
	void InitVars();
	void InitButtons();
public:
	States(sf::RenderWindow* Window);
	~States();

	void Quit();
	void Pause();
	void UnPause();

	virtual void Keys();
	virtual void Update(float& dt);
	virtual void Render(sf::RenderTarget* Target);
};