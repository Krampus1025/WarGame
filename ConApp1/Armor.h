#ifndef ARMOR_H
#define ARMOR_H

enum ArmorType {
	Helmet,
	Cuirass,
	Gauntlets,
	Greaves,
	Boots,
	Shield
};

enum ArmorWeight {
	Light,
	Medium,
	Heavy
};

struct Armor {
	float m_dmgAbsorb;
	float m_condition, m_conditionMax;
	float m_hpMod;
	float m_mpMod;
	float m_speedMod;
	float m_dodgeMod;
	ArmorWeight m_weight;
	ArmorType m_type;

	bool m_enchanted;
	ArmorEffect m_enchantment;
};

struct ArmorSet {
	ArmorSet() {
		m_helmet.m_type = Helmet;
		m_cuirass.m_type = Cuirass;
		m_gauntlets.m_type = Gauntlets;
		m_greaves.m_type = Greaves;
		m_boots.m_type = Boots;
		m_shield.m_type = Shield;
	}

	Armor m_helmet;
	Armor m_cuirass;
	Armor m_gauntlets;
	Armor m_greaves;
	Armor m_boots;
	Armor m_shield;
};

#endif