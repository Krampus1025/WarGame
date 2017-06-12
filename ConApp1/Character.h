#ifndef CHARACTER_H
#define CHARACTER_H

class CharacterClass {
public:
	void Attack();
	void CastSpell();
	void Shield();
	void Dodge();

	void HandleActiveEffects();
	void HandlePassiveEffects();

protected:
	float m_hp, m_maxhp;
	float m_mp, m_maxmp;
	float m_speed;
	float m_dodgeRate;
	ArmorSet m_armor;
	Weapon m_weapon;
};

#endif