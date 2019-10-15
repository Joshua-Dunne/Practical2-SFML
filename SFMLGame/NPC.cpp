#include <NPC.h>

NPC::NPC(){};
NPC::~NPC(){};

void NPC::initialize()
{
	cout << "NPC initialize" << endl;

	if (!npcTex.loadFromFile("ghost.png"))
	{
		std::cout << "error getting ghost png" << std::endl;
	}

	npcSprite.setTexture(npcTex);
	npcSprite.setPosition( sf::Vector2f{100.0f, 300.0f} );
		
}
void NPC::update()
{
	//cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow * t_window)
{
	//cout << "NPC drawing" << endl;
	t_window->draw(npcSprite);
}