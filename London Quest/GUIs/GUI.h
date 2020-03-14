#pragma once

namespace GUI
{
	class Buttons {
	private:
		sf::RectangleShape Button;
		sf::Text Txt;
		sf::Color TxtColor;

		sf::Color Idl;
		sf::Color Hover;
		sf::Color Pressed;
	public:
		Buttons();
		virtual ~Buttons();

		void Update();
		void Render();
	};

	class DropList {

	private:
	public:
		DropList();
		virtual ~DropList();
	};
};

