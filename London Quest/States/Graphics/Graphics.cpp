#include "stdafx.h"
#include "Graphics.h"

Graphics::Graphics()
{
	this->Title = "London Quest";
	this->Mode = sf::VideoMode::getDesktopMode();
	this->FullScreen = false;
	this->VSync = false;
	this->FrameLimit = 120;
	this->Context.antialiasingLevel = 0;
	this->VModes = sf::VideoMode::getFullscreenModes();
}

Graphics::~Graphics()
{
}

void Graphics::Save(const std::string Path)
{
	std::ofstream Ofs(Path);
	if (Ofs.is_open()) {
		Ofs << this->Title;
		Ofs << this->Mode.width << this->Mode.height;
		Ofs << this->FullScreen;
		Ofs << this->FrameLimit;
		Ofs << this->VSync;
		Ofs << Context.antialiasingLevel;
	}
	Ofs.close();
}

void Graphics::Load(const std::string Path)
{
	std::ifstream Ifs(Path);
	if (Ifs.is_open()) {
		std::getline(Ifs, this->Title);
		Ifs >> this->Mode.width >> this->Mode.height;
		Ifs >> this->FullScreen;
		Ifs >> this->FrameLimit;
		Ifs >> this->VSync;
		Ifs >> Context.antialiasingLevel;
	}
	Ofs.close();
}
