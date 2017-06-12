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
	tHandleEffect m_handler;
	WeaponEnchantments m_type;
};

struct ArmorEffect {
	tHandleEffect m_handler;
	ArmorEnchantments m_type;
};

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

#endif