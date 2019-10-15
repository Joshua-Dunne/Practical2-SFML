#include <Player.h>

Player::Player(){};
Player::~Player(){};

void Player::initialize()
{
	cout << "Player initialize" << endl;
	if (!playerTex.loadFromFile("pacman.png"))
	{
		std::cout << "error getting pacman png" << std::endl;
	}

	playerSprite.setTexture(playerTex);
	playerSprite.setPosition(sf::Vector2f{ 400.0f, 300.0f });
}
void Player::update()
{
	//cout << "Player updating" << endl;
}
void Player::draw(sf::RenderWindow* t_window)
{
	//cout << "Player drawing" << endl;
	t_window->draw(playerSprite);
}