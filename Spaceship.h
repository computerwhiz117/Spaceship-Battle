#ifndef SPACESHIP_h
#define SPACESHIP_H
#include <string>

using namespace std;

class Spaceship
{
	private:
		string shipName;
		int shield;
		bool isActive;

	public:
		Spaceship(string);

		Spaceship(string, int);

		void setActive(bool);
		bool getActive() const;
		int shoot();

		int getShield() const
		{
			return shield;
		}

		void setShield(int shieldValue)
		{
			shield = shieldValue;
		}

		string getName() const
		{
			return shipName;
		}

		void setName(string theName)
		{
			shipName = theName;
		}
};

#endif // !SPACESHIP_h
