#ifndef EFFECTS_H
#define EFFECTS_H

enum StatusEffects {
	Bleeding,
	Stunned,
	Burning,
	Poisoned,
	Drowning,
	Crippled,
	Paralyzed,
	Horrified,
	Enraged,
	Concentrated,
	Disoriented,
	Blind
};

enum WeaponEnchantments {
	None,
	Lightning,
	Fire,
	Oil,
	Blinding
};

enum ArmorEnchantments {
	None,
	Protection,
	Reflect,
	Speed,
	Slick
};

typedef void(*tHandleEffect)(CharacterClass& cur, CharacterClass& enemy);

struct WeaponEffect {
	WeaponEffect(WeaponEnchantments type, tHandleEffect handler) : m_handler(handler), m_type(type) { }
	tHandleEffect m_handler;
	WeaponEnchantments m_type;
};

struct ArmorEffect {
	ArmorEffect(ArmorEnchantments type, tHandleEffect handler) : m_handler(handler), m_type(type) { }
	tHandleEffect m_handler;
	ArmorEnchantments m_type;
};

// Empty enchantment
void Empty(CharacterClass& cur, CharacterClass& enemy);

// Weapon effects
void LightningEnchantment(CharacterClass& cur, CharacterClass& enemy);
void FireEnchantment(CharacterClass& cur, CharacterClass& enemy);
void OilEnchantment(CharacterClass& cur, CharacterClass& enemy);
void BlindingEnchantment(CharacterClass& cur, CharacterClass& enemy);

// Armor effects
void ProtectionEnchantment(CharacterClass& cur, CharacterClass& enemy);
void ReflectEnchantment(CharacterClass& cur, CharacterClass& enemy);
void SpeedEnchantment(CharacterClass& cur, CharacterClass& enemy);
void SlickEnchantment(CharacterClass& cur, CharacterClass& enemy);

// Empty effect objects
WeaponEffect EmptyWeapon(WeaponEnchantments::None, Empty);
ArmorEffect EmptyArmor(ArmorEnchantments::None, Empty);

#endif