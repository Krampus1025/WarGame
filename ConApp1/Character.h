#ifndef CHARACTER_H
#define CHARACTER_H

/*
 * Possible choices for a character to take:
 * 1) Move
 * 2) Dodge
 * 3) Attack
 * 4) Cast a spell
 * 5) Use an item
 * 6) Prepare a ranged weapon
 * 7) Taunt
 * 8) Defend
 *
 * Certain actions will have the ability to be interuppted since they will take time, so making
 * longer moves at strategic times will be very important
 */

class CharacterClass {
public:
	void Move();
	void Dodge();
	void Attack();
	void CastSpell();
	void UseItem();
	void LoadWeapon(); // For ranged weapons that require ammo
	void Taunt();
	void Defend();
	

	void HandleActiveEffects();
	void HandlePassiveEffects();

protected:
	float m_hp, m_maxhp;
	float m_mp, m_maxmp;
	float m_speed;
	float m_dodgeRate;
	ArmorSet m_armor;
	Weapon m_weapon;
	std::vector<StatusEffects> m_effects;
};

#endif