#ifndef WEAPON_H
#define WEAPON_H

/*
 * To set a standard for weapon condition, 1000 is average
 * Each hit that you do has a chance to damage your weapon from 25-50 damage
 * When you block with your weapon, there's a higher chance of weapon damage from 50-100 damage
 * More damage will be done to smaller lighter weapons, and less damage to bigger heavier weapons
 * There will also be a protection difference between smaller lighter and bigger heavier weapons
 */

enum WeaponType {
	// Melee
	Dagger,
	ShortBlade,
	LongBlade,
	Mace,
	Axe,
	WarHammer,

	// Magic
	Wand,
	Staff,
	Book,

	// Ranged
	ShortBow,
	LongBow,
	Crossbow,
	ThrowingKnife,
	Blowpipe
};

enum WeaponRange {
	Short,
	Medium,
	Long
};

enum WeaponWeight {
	Light,
	Medium,
	Heavy
};

enum WeaponWieldSize {
	OneHand,
	TwoHand
};

enum Ammo {
	None,
	Arrow,
	Bolt,
	Dart
};

struct Weapon {
	Weapon(WeaponType type, WeaponRange range, WeaponWeight weight, WeaponWieldSize size, float maxCondition, float attack, bool requiresAmmo, bool requiresMana, bool enchanted,
		Ammo ammoType = Ammo::None, float manaCost = 0, WeaponEffect enchantment = EmptyWeapon) :
		m_type(type), m_range(range), m_weight(weight), m_size(size), m_condition(maxCondition), m_conditionMax(maxCondition), m_attack(attack), m_requiresAmmo(requiresAmmo),
		m_requiresMana(requiresMana), m_enchanted(enchanted), m_ammoType(ammoType), m_manaCost(manaCost), m_enchantment(enchantment) 
	{ }

	WeaponType m_type;
	WeaponRange m_range;
	WeaponWeight m_weight;
	WeaponWieldSize m_size;
	float m_condition, m_conditionMax;

	float m_attack;

	bool m_requiresAmmo;
	Ammo m_ammoType;

	bool m_requiresMana;
	float m_manaCost;

	bool m_enchanted;
	WeaponEffect m_enchantment;
};

// Daggers
Weapon Shiv(Dagger, Short, Light, OneHand, 675, 15, false, false, false);
Weapon IronDagger(Dagger, Short, Light, OneHand, 800, 20, false, false, false);

// Shortblades

// Longblades

// Maces

// Axes

// Warhammers

// Wands

// Staffs

// Books

// Shortbows

// Longbows

// Crossbows

// Throwingknives

// Blowpipes


#endif