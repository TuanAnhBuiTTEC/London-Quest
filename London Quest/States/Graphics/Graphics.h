#pragma once
class Graphics
{
private:
	std::string Title;
	sf::VideoMode Mode;
	bool FullScreen;
	bool VSync;
	unsigned FrameLimit;
	sf::ContextSettings Context;
	std::vector<sf::VideoMode>VModes;
public:
	Graphics();
	~Graphics();
	void Save(const std::string Path);
	void Load(const std::string Path);
};

