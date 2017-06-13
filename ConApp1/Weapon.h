#ifndef WEAPON_H
#define WEAPON_H

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
	Arrow,
	Bolt,
	Dart
};

struct Weapon {
	WeaponType m_type;
	WeaponRange m_range;
	WeaponWeight m_weight;
	WeaponWieldSize m_size;

	bool m_requiresAmmo;
	Ammo m_ammoType;

	bool m_requiresMana;
	float m_manaCost;

	bool m_enchanted;
	WeaponEffect m_enchantment;
};

#endif