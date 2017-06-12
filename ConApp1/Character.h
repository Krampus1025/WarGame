#ifndef CHARACTER_H
#define CHARACTER_H

class CharacterClass {
public:
protected:
	float m_hp, m_maxhp;
	float m_mp, m_maxmp;
	float m_speed;
	float m_dodgeRate;
	ArmorSet m_armor;
	Weapon m_weapon;
};

class Wizard : public CharacterClass {
	
};

class Warrior : public CharacterClass {

};

class Archer : public CharacterClass {

};

class Test {

};

#endif