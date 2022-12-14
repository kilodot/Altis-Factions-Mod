class CfgPatches
{
	class ARA_Faction
	{
		author="kilodot";
		name="Altian Republican Army Faction";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"CUP_Weapons_WeaponsCore",
			"CUP_WheeledVehicles_Core",
			"CUP_Creatures_staticweapons"
		};
		requiredVersion=0.1;
		units[]=
		{
			"ARA_G_medic_F",       	// medic
			"ARA_G_Soldier_AR_F",  	// autorifleman
			"ARA_G_Soldier_F",     	// rifleman
			"ARA_G_Soldier_GL_F",  	// grenadier
			"ARA_G_Soldier_LAT_F", 	// anti-tank rifleman
			"ARA_G_Soldier_M_F",   	// marksman
			"ARA_G_Soldier_SL_F",  	// squad leader
			"ARA_G_Soldier_TL_F",   // team leader
			"ARA_G_Soldier_RL_f",   // resistance leader

			"ARA_G_SF_GMG_W",		// SOF Land Rover Grenade Machine Gun (Woodland)
			"ARA_G_SF_GMG_D",		// SOF Land Rover Grenade Machine Gun (Desert)
			"ARA_G_LR_W",			// Land Rover (Woodland)
			"ARA_G_LR_D",			// Land Rover (Desert)
			"ARA_G_Hilux",			// Toyota Hilux (Unarmed)
			"ARA_G_Hilux_DSHkM",	// Toyota Hilux (DSHkM)
			"ARA_G_Hilux_SPG9",		// Toyota Hilux (SPG-9)
			"ARA_G_Hilux_igla", 	// Toyota Hilux (Igla)
			"ARA_G_Hilux_metis",	// Toyota Hilux (Metis)
			"ARA_G_Hilux_zu23",		// Toyota Hilux (ZU-23-2)
			"ARA_G_Hilux_M2", 		// Toyota Hilux (M2)
			"ARA_G_Kamaz_SUPPLY",	// Kamaz Supply/Repair
			"ARA_G_Kamaz_TRANSPORT",// Kamaz Transport/Cargo
			"ARA_G_KAMAZ_FUEL",		// Kamaz Fuel 
			"ARA_G_Van_SUPPLY",		// Large Van Supply/Cargo
			"ARA_G_Van_TRANSPORT",	// Large Van Transport
			"ARA_G_Van_FLATBED", 	// Small Van Flatbed
			"ARA_G_Van_FUEL",		// Small Van Fuel
			"ARA_G_Suburban",		// Chevy Suburban
			"ARA_G_Quadbike",		// Polaris Quad-Bike

			"ARA_G_M2StaticMG",		// M2 .50BMG Machine-Gun (High Tripod)
			"ARA_G_M2StaticMG_MiniTriPod",// M2 .50BMG Machine-Gun (Low Tripod)
			"ARA_G_DSHkM",			// DSHkM 12.7mm Machine-Gun (High Tripod)
			"ARA_G_DSHkM_MiniTriPod",// DSHkM 12.7mm Machine-Gun (Low Tripod)
			"ARA_G_TOW_TriPod",		// TOW ATGM Launcher
			"ARA_G_TOW2_TriPod",	// TOW II ATGM Launcher
			"ARA_G_Metis",			// 9K115-2 Metis-M ATGM Launcher
			"ARA_G_Kornet",			// AT-14 Kornet ATGM Launcher
			"ARA_G_SPG9",			// SPG-9 AT Gun
			"ARA_G_M252",			// M252 81mm Mortar
			"ARA_G_2b14_82mm"		// 2B14 Podnos 82mm Mortar
		};
		weapons[]=
		{
			"CUP_arifle_M4A1_ACOGreflex",
			"CUP_arifle_M4A1_M68",
			"arifle_TRG21_GL_ARCO_F",
			"arifle_TRG21_GL_HAMR_F",
			"arifle_TRG21_ARCO_F",
			"arifle_TRG21_HAMR_F",
			"CUP_lmg_PKM_top_rail_B50_vfg_M68"
		};
	};
};

class CfgWeapons
{
	// Small Arms
	class arifle_TRG21_F;
	class arifle_TRG20_F;
	class arifle_TRG21_GL_F;
	class CUP_arifle_M4A1_black;
	class CUP_lmg_PKM_top_rail_B50_vfg;

	class CUP_arifle_M4A1_ACOGreflex: CUP_arifle_M4A1_black
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CUP_PicatinnyTopMountM4";
				item="cup_optic_acog";
			};
		};
	};

	class CUP_arifle_M4A1_M68: CUP_arifle_M4A1_black
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CUP_PicatinnyTopMountM4";
				item="cup_optic_compm2_low";
			};
		};
	};

	class CUP_lmg_PKM_top_rail_B50_vfg_M68: CUP_lmg_PKM_top_rail_B50_vfg
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="cup_optic_compm2_low";
			};
		};
	};

	class arifle_TRG21_GL_ARCO_F: arifle_TRG21_GL_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_TRG21_GL_ARCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_arco";
			};
		};
	};

	class arifle_TRG21_GL_HAMR_F: arifle_TRG21_GL_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_TRG21_GL_HAMR_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
		};
	};

	class arifle_TRG21_ARCO_F: arifle_TRG21_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_TRG21_ARCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_arco";
			};
		};
	};

	class arifle_TRG21_HAMR_F: arifle_TRG21_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_TRG21_HAMR_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
		};
	};
};

class CfgVehicles
{

	// Soft - Skinned Vehicles
	class CUP_B_LR_Special_Des_CZ_D;
	class CUP_B_LR_Transport_CZ_D;
	class CUP_B_Hilux_unarmed_BLU_G_F;
	class CUP_B_Hilux_DSHKM_BLU_G_F;
	class CUP_B_Hilux_SPG9_BLU_G_F;
	class CUP_B_Hilux_igla_BLU_G_F;
	class CUP_B_Hilux_metis_BLU_G_F;
	// class CUP_B_Hilux_podnos_BLU_G_F;
	// class CUP_B_Hilux_MLRS_BLU_G_F;
	class CUP_B_Hilux_zu23_BLU_G_F;
	// class CUP_B_Hilux_AGS30_BLU_G_F;
	class CUP_B_Hilux_M2_BLU_G_F;
	// class CUP_B_Hilux_UB32_BLU_G_F;
	class C_Truck_02_box_F;
	class C_Truck_02_covered_F;
	class C_Truck_02_fuel_F;
	class B_G_Van_01_transport_F;
	class B_G_Van_01_fuel_F;
	class B_G_Van_02_transport_F;
	class B_G_Van_02_vehicle_F;
	class B_G_Quadbike_01_F;
	class CUP_I_SUV_ION;

	// Turrets

	class CUP_B_M2StaticMG_US;
	class CUP_B_M2StaticMG_MiniTriPod_US;
	class CUP_B_M252_US;
	class CUP_B_TOW_TriPod_US;
	class CUP_B_TOW2_TriPod_US;
	class CUP_B_DSHkM_CDF;
	class CUP_B_DSHkM_MiniTriPod_CDF;
	class CUP_B_SPG9_CDF;
	class CUP_B_2b14_82mm_CDF;
	class CUP_O_Metis_RU;
	class CUP_O_Kornet_RU;


	class SoldierWB;
	class Soldier_base_F: SoldierWB
	{
		class EventHandlers;
	};

	// Men
	class ARA_G_Soldier_base_F: Soldier_base_F
	{
		author="kilodot";
		_generalMacro="ARA_G_Soldier_base_F";
		expansion=1;
		identityTypes[]=
		{
			"LanguageGRE_F",
			"Head_Greek",
			"G_GUERIL_default"
		};
		faceType="Man_A3";
		side=1;
		faction="ARA_G_F";
		genericNames="GreekMen";
		vehicleClass="Men";
		editorSubcategory="EdSubcat_Personnel";
		portrait="";
		picture="";
		icon="iconMan";
		accuracy=3.9000001;
		camouflage=1.1;
		minFireTime=10;
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		modelSides[]={2,3};
		nakedUniform="U_BasicBody";
		uniformClass="U_IG_Guerilla1_1";
		canCarryBackPack=1;
		scope=0;
		scopeCurator=0;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\Civil\Data\c_cloth1.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth2.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth3.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth4.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat",
				"a3\characters_f_epb\blufor\data\clothing1_dirty.rvmat",
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
				"A3\characters_f\civil\data\c_poloshirt.rvmat",
				"A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat",
				"A3\characters_f\common\data\coveralls.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Civil\Data\hunter.rvmat",
				"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
				"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
				"a3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat",
				"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
				"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
				"a3\characters_f_gamma\guerrilla\data\ig_guerrilla2_1.rvmat",
				"A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_injury.rvmat",
				"A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_injury.rvmat",
				"a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1.rvmat",
				"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
				"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
				"a3\characters_f_epb\guerrilla\data\ig_guerrilla4_1.rvmat",
				"A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_injury.rvmat",
				"A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_injury.rvmat",
				"a3\characters_f_bootcamp\guerrilla\data\ig_guerrilla_6_1.rvmat",
				"A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_injury.rvmat",
				"A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_injury.rvmat",
				"a3\characters_f_beta\indep\data\officer.rvmat",
				"A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
				"A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnitems[]=
		{
			"FirstAidKit"
		};
		weapons[]=
		{
			"arifle_TRG21_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_TRG21_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"HandGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"HandGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		linkedItems[]=
		{
			"V_Chestrig_oli",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_oli",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ARA_G_Soldier_F: ARA_G_Soldier_base_F
	{
		author="kilodot";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg";
		_generalMacro="ARA_G_Soldier_F";
		scope=2;
		scopeCurator=2;
		displayName="Rifleman";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa",
			"a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"
		};
		headgearProbability=100;
		allowedHeadgear[]=
		{
			"H_Bandanna_gry",
			"H_Bandanna_blu",
			"H_Bandanna_cbr",
			"H_Bandanna_khk_hs",
			"H_Bandanna_khk",
			"H_Bandanna_sgg",
			"H_Bandanna_sand",
			"H_Bandanna_surfer",
			"H_Bandanna_surfer_blk",
			"H_Bandanna_surfer_grn",
			"H_Bandanna_camo",
			"H_Watchcap_blk",
			"H_Watchcap_cbr",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_khk",
			"H_Booniehat_oli",
			"H_Booniehat_tan",
			"H_Booniehat_dgtl",
			"H_Cap_blk",
			"H_Cap_grn",
			"H_Cap_oli",
			"H_Cap_oli_hs",
			"H_Cap_tan",
			"H_Cap_blk_Raven",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk"
		};
		role="Rifleman";
		headgearList[]=
		{
			"H_Bandanna_gry",
			1,
			"H_Bandanna_blu",
			1,
			"H_Bandanna_cbr",
			1,
			"H_Bandanna_khk_hs",
			1,
			"H_Bandanna_khk",
			1,
			"H_Bandanna_sgg",
			1,
			"H_Bandanna_sand",
			1,
			"H_Bandanna_surfer",
			1,
			"H_Bandanna_surfer_blk",
			1,
			"H_Bandanna_surfer_grn",
			1,
			"H_Bandanna_camo",
			1,
			"H_Watchcap_blk",
			1,
			"H_Watchcap_cbr",
			1,
			"H_Watchcap_camo",
			1,
			"H_Watchcap_khk",
			1,
			"H_Booniehat_khk_hs",
			1,
			"H_Booniehat_khk",
			1,
			"H_Booniehat_oli",
			1,
			"H_Booniehat_tan",
			1,
			"H_Booniehat_dgtl",
			1,
			"H_Cap_blk",
			1,
			"H_Cap_grn",
			1,
			"H_Cap_oli",
			1,
			"H_Cap_oli_hs",
			1,
			"H_Cap_tan",
			1,
			"H_Cap_blk_Raven",
			1,
			"H_Shemag_olive",
			1,
			"H_Shemag_olive_hs",
			1,
			"H_ShemagOpen_tan",
			1,
			"H_ShemagOpen_khk",
			1
		};
	};
	class ARA_G_Soldier_RL_F: ARA_G_Soldier_base_F
	{
		author="kilodot";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg";
		_generalMacro="ARA_G_Soldier_SL_F";
		scope=2;
		scopeCurator=2;
		displayName="Resistance Leader";
		backpack="B_AssaultPack_rgr";
		cost=250000;
		camouflage=1.6;
		icon="iconManLeader";
		role="Grenadier";
		weapons[]=
		{
			"arifle_TRG21_GL_ARCO_F",
			"CUP_hgun_Phantom",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"arifle_TRG21_GL_ARCO_F",
			"CUP_hgun_Phantom",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_18Rnd_9x19_Phantom",
			"CUP_18Rnd_9x19_Phantom",
			"HandGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellRed",
			"SmokeShellBlue",
			"Chemlight_blue",
			"Chemlight_blue",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_18Rnd_9x19_Phantom",
			"CUP_18Rnd_9x19_Phantom",
			"HandGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellRed",
			"SmokeShellBlue",
			"Chemlight_blue",
			"Chemlight_blue",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		linkedItems[]=
		{
			"V_SmershVest_01_radio_F",
			"H_Watchcap_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_SmershVest_01_radio_F",
			"H_Watchcap_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		nakedUniform="U_I_G_resistanceLeader_F";
		uniformClass="U_I_G_resistanceLeader_F";
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla4_1.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_co.paa"
		};
		headgearProbability=5;
		allowedHeadgear[]=
		{
			"H_Cap_blk",
			"H_Cap_grn",
			"H_Cap_oli",
			"H_Cap_oli_hs",
			"H_Cap_tan",
			"H_Cap_blk_Raven"
		};
		allowedHeadgearB[]=
		{
			"H_Bandanna_gry",
			"H_Bandanna_blu",
			"H_Bandanna_cbr",
			"H_Bandanna_khk_hs",
			"H_Bandanna_khk",
			"H_Bandanna_sgg",
			"H_Bandanna_sand",
			"H_Bandanna_surfer",
			"H_Bandanna_surfer_blk",
			"H_Bandanna_surfer_grn",
			"H_Bandanna_camo",
			"H_Watchcap_blk",
			"H_Watchcap_cbr",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_khk",
			"H_Booniehat_oli",
			"H_Booniehat_tan",
			"H_Booniehat_dgtl",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk"
		};
		headgearList[]=
		{
			"H_Cap_blk",
			0.5,
			"H_Cap_grn",
			0.5,
			"H_Cap_oli",
			0.5,
			"H_Cap_oli_hs",
			0.5,
			"H_Cap_tan",
			0.5,
			"H_Cap_blk_Raven",
			0.5,
			"H_Bandanna_gry",
			0.125,
			"H_Bandanna_blu",
			0.125,
			"H_Bandanna_cbr",
			0.125,
			"H_Bandanna_khk_hs",
			0.125,
			"H_Bandanna_khk",
			0.125,
			"H_Bandanna_sgg",
			0.125,
			"H_Bandanna_sand",
			0.125,
			"H_Bandanna_surfer",
			0.125,
			"H_Bandanna_surfer_blk",
			0.125,
			"H_Bandanna_surfer_grn",
			0.125,
			"H_Bandanna_camo",
			0.125,
			"H_Watchcap_blk",
			0.125,
			"H_Watchcap_cbr",
			0.125,
			"H_Watchcap_camo",
			0.125,
			"H_Watchcap_khk",
			0.125,
			"H_Booniehat_khk_hs",
			0.125,
			"H_Booniehat_khk",
			0.125,
			"H_Booniehat_oli",
			0.125,
			"H_Booniehat_tan",
			0.125,
			"H_Booniehat_dgtl",
			0.125,
			"H_Shemag_olive",
			0.125,
			"H_Shemag_olive_hs",
			0.125,
			"H_ShemagOpen_tan",
			0.125,
			"H_ShemagOpen_khk",
			0.125
		};
	};
	class ARA_G_Soldier_SL_F: ARA_G_Soldier_base_F
	{
		author="kilodot";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg";
		_generalMacro="ARA_G_Soldier_SL_F";
		scope=2;
		scopeCurator=2;
		displayName="Squad Leader";
		cost=250000;
		camouflage=1.6;
		icon="iconManLeader";
		role="Rifleman";
		weapons[]=
		{
			"arifle_TRG21_HAMR_F",
			"CUP_hgun_CZ75",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"arifle_TRG21_HAMR_F",
			"CUP_hgun_CZ75",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"HandGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellRed",
			"SmokeShellBlue",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"HandGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellRed",
			"SmokeShellBlue",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		linkedItems[]=
		{
			"V_SmershVest_01_radio_F",
			"H_Watchcap_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_SmershVest_01_radio_F",
			"H_Watchcap_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		model="\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
		uniformClass="U_IG_leader";
		headgearProbability=50;
		allowedHeadgear[]=
		{
			"H_Cap_blk",
			"H_Cap_grn",
			"H_Cap_oli",
			"H_Cap_oli_hs",
			"H_Cap_tan",
			"H_Cap_blk_Raven"
		};
		allowedHeadgearB[]=
		{
			"H_Bandanna_gry",
			"H_Bandanna_blu",
			"H_Bandanna_cbr",
			"H_Bandanna_khk_hs",
			"H_Bandanna_khk",
			"H_Bandanna_sgg",
			"H_Bandanna_sand",
			"H_Bandanna_surfer",
			"H_Bandanna_surfer_blk",
			"H_Bandanna_surfer_grn",
			"H_Bandanna_camo",
			"H_Watchcap_blk",
			"H_Watchcap_cbr",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_khk",
			"H_Booniehat_oli",
			"H_Booniehat_tan",
			"H_Booniehat_dgtl",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk"
		};
		headgearList[]=
		{
			"H_Cap_blk",
			0.5,
			"H_Cap_grn",
			0.5,
			"H_Cap_oli",
			0.5,
			"H_Cap_oli_hs",
			0.5,
			"H_Cap_tan",
			0.5,
			"H_Cap_blk_Raven",
			0.5,
			"H_Bandanna_gry",
			0.125,
			"H_Bandanna_blu",
			0.125,
			"H_Bandanna_cbr",
			0.125,
			"H_Bandanna_khk_hs",
			0.125,
			"H_Bandanna_khk",
			0.125,
			"H_Bandanna_sgg",
			0.125,
			"H_Bandanna_sand",
			0.125,
			"H_Bandanna_surfer",
			0.125,
			"H_Bandanna_surfer_blk",
			0.125,
			"H_Bandanna_surfer_grn",
			0.125,
			"H_Bandanna_camo",
			0.125,
			"H_Watchcap_blk",
			0.125,
			"H_Watchcap_cbr",
			0.125,
			"H_Watchcap_camo",
			0.125,
			"H_Watchcap_khk",
			0.125,
			"H_Booniehat_khk_hs",
			0.125,
			"H_Booniehat_khk",
			0.125,
			"H_Booniehat_oli",
			0.125,
			"H_Booniehat_tan",
			0.125,
			"H_Booniehat_dgtl",
			0.125,
			"H_Shemag_olive",
			0.125,
			"H_Shemag_olive_hs",
			0.125,
			"H_ShemagOpen_tan",
			0.125,
			"H_ShemagOpen_khk",
			0.125
		};
	};
	class ARA_G_Soldier_TL_F: ARA_G_Soldier_base_F
	{
		author="kilodot";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg";
		_generalMacro="ARA_G_Soldier_TL_F";
		scope=2;
		scopeCurator=2;
		cost=250000;
		icon="iconManLeader";
		role="Grenadier";
		displayName="Team Leader";
		Backpack="B_AssaultPack_dgtl";
		weapons[]=
		{
			"arifle_TRG21_GL_ARCO_F",
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_TRG21_GL_ARCO_F",
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"HandGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"HandGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell"
		};
		linkedItems[]=
		{
			"V_HarnessO_brn",
			"H_Booniehat_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_HarnessO_brn",
			"H_Booniehat_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		model="\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
		uniformClass="U_IG_leader";
		headgearProbability=60;
		allowedHeadgear[]=
		{
			"H_Cap_blk",
			"H_Cap_grn",
			"H_Cap_oli",
			"H_Cap_oli_hs",
			"H_Cap_tan",
			"H_Cap_blk_Raven"
		};
		allowedHeadgearB[]=
		{
			"H_Bandanna_gry",
			"H_Bandanna_blu",
			"H_Bandanna_cbr",
			"H_Bandanna_khk_hs",
			"H_Bandanna_khk",
			"H_Bandanna_sgg",
			"H_Bandanna_sand",
			"H_Bandanna_surfer",
			"H_Bandanna_surfer_blk",
			"H_Bandanna_surfer_grn",
			"H_Bandanna_camo",
			"H_Watchcap_blk",
			"H_Watchcap_cbr",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_khk",
			"H_Booniehat_oli",
			"H_Booniehat_tan",
			"H_Booniehat_dgtl",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk"
		};
		headgearList[]=
		{
			"H_Bandanna_gry",
			0.15000001,
			"H_Bandanna_blu",
			0.15000001,
			"H_Bandanna_cbr",
			0.15000001,
			"H_Bandanna_khk_hs",
			0.15000001,
			"H_Bandanna_khk",
			0.15000001,
			"H_Bandanna_sgg",
			0.15000001,
			"H_Bandanna_sand",
			0.15000001,
			"H_Bandanna_surfer",
			0.15000001,
			"H_Bandanna_surfer_blk",
			0.15000001,
			"H_Bandanna_surfer_grn",
			0.15000001,
			"H_Bandanna_camo",
			0.15000001,
			"H_Watchcap_blk",
			0.15000001,
			"H_Watchcap_cbr",
			0.15000001,
			"H_Watchcap_camo",
			0.15000001,
			"H_Watchcap_khk",
			0.15000001,
			"H_Booniehat_khk_hs",
			0.15000001,
			"H_Booniehat_khk",
			0.15000001,
			"H_Booniehat_oli",
			0.15000001,
			"H_Booniehat_tan",
			0.15000001,
			"H_Booniehat_dgtl",
			0.15000001,
			"H_Cap_blk",
			1,
			"H_Cap_grn",
			1,
			"H_Cap_oli",
			1,
			"H_Cap_oli_hs",
			1,
			"H_Cap_tan",
			1,
			"H_Cap_blk_Raven",
			1,
			"H_Shemag_olive",
			0.15000001,
			"H_Shemag_olive_hs",
			0.15000001,
			"H_ShemagOpen_tan",
			0.15000001,
			"H_ShemagOpen_khk",
			0.15000001
		};
	};
	class ARA_G_Soldier_AR_F: ARA_G_Soldier_base_F
	{
		author="kilodot";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_MG_s"
				};
				speechPlural[]=
				{
					"veh_infantry_MG_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural="$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound="veh_infantry_MG_s";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg";
		_generalMacro="ARA_G_Soldier_AR_F";
		scope=2;
		scopeCurator=2;
		displayName="Autorifleman";
		Backpack="B_AssaultPack_dgtl";
		weapons[]=
		{
			"CUP_lmg_PKM_top_rail_B50_vfg_M68",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_lmg_PKM_top_rail_B50_vfg_M68",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		respawnMagazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		cost=220000;
		icon="iconManMG";
		role="MachineGunner";
		linkedItems[]=
		{
			"V_HarnessO_brn",
			"H_Bandanna_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_HarnessO_brn",
			"H_Bandanna_khk",
			"D efaultManGuerillaLinkedItems"
		};
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		uniformClass="U_IG_Guerilla2_1";
		headgearProbability=60;
		allowedHeadgear[]=
		{
			"H_Watchcap_blk",
			"H_Watchcap_cbr",
			"H_Watchcap_camo",
			"H_Watchcap_khk"
		};
		allowedHeadgearB[]=
		{
			"H_Bandanna_gry",
			"H_Bandanna_blu",
			"H_Bandanna_cbr",
			"H_Bandanna_khk_hs",
			"H_Bandanna_khk",
			"H_Bandanna_sgg",
			"H_Bandanna_sand",
			"H_Bandanna_surfer",
			"H_Bandanna_surfer_blk",
			"H_Bandanna_surfer_grn",
			"H_Bandanna_camo",
			"H_Booniehat_khk_hs",
			"H_Booniehat_khk",
			"H_Booniehat_oli",
			"H_Booniehat_tan",
			"H_Booniehat_dgtl",
			"H_Cap_blk",
			"H_Cap_grn",
			"H_Cap_oli",
			"H_Cap_oli_hs",
			"H_Cap_tan",
			"H_Cap_blk_Raven",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk"
		};
		headgearList[]=
		{
			"H_Bandanna_gry",
			0.15000001,
			"H_Bandanna_blu",
			0.15000001,
			"H_Bandanna_cbr",
			0.15000001,
			"H_Bandanna_khk_hs",
			0.15000001,
			"H_Bandanna_khk",
			0.15000001,
			"H_Bandanna_sgg",
			0.15000001,
			"H_Bandanna_sand",
			0.15000001,
			"H_Bandanna_surfer",
			0.15000001,
			"H_Bandanna_surfer_blk",
			0.15000001,
			"H_Bandanna_surfer_grn",
			0.15000001,
			"H_Bandanna_camo",
			0.15000001,
			"H_Watchcap_blk",
			1,
			"H_Watchcap_cbr",
			1,
			"H_Watchcap_camo",
			1,
			"H_Watchcap_khk",
			1,
			"H_Booniehat_khk_hs",
			0.15000001,
			"H_Booniehat_khk",
			0.15000001,
			"H_Booniehat_oli",
			0.15000001,
			"H_Booniehat_tan",
			0.15000001,
			"H_Booniehat_dgtl",
			0.15000001,
			"H_Cap_blk",
			0.15000001,
			"H_Cap_grn",
			0.15000001,
			"H_Cap_oli",
			0.15000001,
			"H_Cap_oli_hs",
			0.15000001,
			"H_Cap_tan",
			0.15000001,
			"H_Cap_blk_Raven",
			0.15000001,
			"H_Shemag_olive",
			0.15000001,
			"H_Shemag_olive_hs",
			0.15000001,
			"H_ShemagOpen_tan",
			0.15000001,
			"H_ShemagOpen_khk",
			0.15000001
		};
	};
	class ARA_G_medic_F: ARA_G_Soldier_base_F
	{
		author="kilodot";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_medic_s"
				};
				speechPlural[]=
				{
					"veh_infantry_medic_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural="$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound="veh_infantry_medic_s";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg";
		_generalMacro="ARA_G_medic_F";
		scope=2;
		scopeCurator=2;
		displayName="Medic";
		backpack="G_FieldPack_Medic";
		weapons[]=
		{
			"CUP_arifle_M4A1_ACOGreflex",
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M4A1_ACOGreflex",
			"CUP_hgun_CZ75",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellRed",
			"SmokeShellBlue",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_16Rnd_9x19_cz75",
			"CUP_16Rnd_9x19_cz75",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellRed",
			"SmokeShellBlue",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		linkedItems[]=
		{
			"V_HarnessO_brn",
			"H_Cap_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_HarnessO_brn",
			"H_Cap_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		attendant=1;
		icon="iconManMedic";
		role="CombatLifeSaver";
		picture="pictureHeal";
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		uniformClass="U_IG_Guerilla2_3";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla2_3_co.paa"
		};
		headgearProbability=50;
		allowedHeadgear[]=
		{
			"H_Cap_blk",
			"H_Cap_grn",
			"H_Cap_oli",
			"H_Cap_oli_hs",
			"H_Cap_tan",
			"H_Cap_blk_Raven"
		};
		allowedHeadgearB[]=
		{
			"H_Bandanna_gry",
			"H_Bandanna_blu",
			"H_Bandanna_cbr",
			"H_Bandanna_khk_hs",
			"H_Bandanna_khk",
			"H_Bandanna_sgg",
			"H_Bandanna_sand",
			"H_Bandanna_surfer",
			"H_Bandanna_surfer_blk",
			"H_Bandanna_surfer_grn",
			"H_Bandanna_camo",
			"H_Watchcap_blk",
			"H_Watchcap_cbr",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_khk",
			"H_Booniehat_oli",
			"H_Booniehat_tan",
			"H_Booniehat_dgtl",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk"
		};
		headgearList[]=
		{
			"H_Bandanna_gry",
			0.15000001,
			"H_Bandanna_blu",
			0.15000001,
			"H_Bandanna_cbr",
			0.15000001,
			"H_Bandanna_khk_hs",
			0.15000001,
			"H_Bandanna_khk",
			0.15000001,
			"H_Bandanna_sgg",
			0.15000001,
			"H_Bandanna_sand",
			0.15000001,
			"H_Bandanna_surfer",
			0.15000001,
			"H_Bandanna_surfer_blk",
			0.15000001,
			"H_Bandanna_surfer_grn",
			0.15000001,
			"H_Bandanna_camo",
			0.15000001,
			"H_Watchcap_blk",
			0.15000001,
			"H_Watchcap_cbr",
			0.15000001,
			"H_Watchcap_camo",
			0.15000001,
			"H_Watchcap_khk",
			0.15000001,
			"H_Booniehat_khk_hs",
			0.15000001,
			"H_Booniehat_khk",
			0.15000001,
			"H_Booniehat_oli",
			0.15000001,
			"H_Booniehat_tan",
			0.15000001,
			"H_Booniehat_dgtl",
			0.15000001,
			"H_Cap_blk",
			1,
			"H_Cap_grn",
			1,
			"H_Cap_oli",
			1,
			"H_Cap_oli_hs",
			1,
			"H_Cap_tan",
			1,
			"H_Cap_blk_Raven",
			1,
			"H_Shemag_olive",
			0.15000001,
			"H_Shemag_olive_hs",
			0.15000001,
			"H_ShemagOpen_tan",
			0.15000001,
			"H_ShemagOpen_khk",
			0.15000001
		};
	};
	class ARA_G_Soldier_GL_F: ARA_G_Soldier_base_F
	{
		author="kilodot";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg";
		_generalMacro="ARA_G_Soldier_GL_F";
		scope=2;
		scopeCurator=2;
		displayName="Grenadier";
		weapons[]=
		{
			"arifle_TRG21_GL_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_TRG21_GL_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell"
		};
		cost=200000;
		role="Grenadier";
		linkedItems[]=
		{
			"V_HarnessOGL_brn",
			"H_Bandanna_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_HarnessOGL_brn",
			"H_Bandanna_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		uniformClass="U_IG_Guerilla2_3";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla2_3_co.paa"
		};
		headgearProbability=50;
		allowedHeadgear[]={};
		allowedHeadgearB[]=
		{
			"H_Bandanna_gry",
			"H_Bandanna_blu",
			"H_Bandanna_cbr",
			"H_Bandanna_khk_hs",
			"H_Bandanna_khk",
			"H_Bandanna_sgg",
			"H_Bandanna_sand",
			"H_Bandanna_surfer",
			"H_Bandanna_surfer_blk",
			"H_Bandanna_surfer_grn",
			"H_Bandanna_camo",
			"H_Watchcap_blk",
			"H_Watchcap_cbr",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_khk",
			"H_Booniehat_oli",
			"H_Booniehat_tan",
			"H_Booniehat_dgtl",
			"H_Cap_blk",
			"H_Cap_grn",
			"H_Cap_oli",
			"H_Cap_oli_hs",
			"H_Cap_tan",
			"H_Cap_blk_Raven",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk"
		};
		headgearList[]=
		{
			"",
			1,
			"H_Bandanna_gry",
			0.125,
			"H_Bandanna_blu",
			0.125,
			"H_Bandanna_cbr",
			0.125,
			"H_Bandanna_khk_hs",
			0.125,
			"H_Bandanna_khk",
			0.125,
			"H_Bandanna_sgg",
			0.125,
			"H_Bandanna_sand",
			0.125,
			"H_Bandanna_surfer",
			0.125,
			"H_Bandanna_surfer_blk",
			0.125,
			"H_Bandanna_surfer_grn",
			0.125,
			"H_Bandanna_camo",
			0.125,
			"H_Watchcap_blk",
			0.125,
			"H_Watchcap_cbr",
			0.125,
			"H_Watchcap_camo",
			0.125,
			"H_Watchcap_khk",
			0.125,
			"H_Booniehat_khk_hs",
			0.125,
			"H_Booniehat_khk",
			0.125,
			"H_Booniehat_oli",
			0.125,
			"H_Booniehat_tan",
			0.125,
			"H_Booniehat_dgtl",
			0.125,
			"H_Cap_blk",
			0.125,
			"H_Cap_grn",
			0.125,
			"H_Cap_oli",
			0.125,
			"H_Cap_oli_hs",
			0.125,
			"H_Cap_tan",
			0.125,
			"H_Cap_blk_Raven",
			0.125,
			"H_Shemag_olive",
			0.125,
			"H_Shemag_olive_hs",
			0.125,
			"H_ShemagOpen_tan",
			0.125,
			"H_ShemagOpen_khk",
			0.125
		};
	};
	class ARA_G_Soldier_M_F: ARA_G_Soldier_base_F
	{
		author="kilodot";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg";
		_generalMacro="ARA_G_Soldier_M_F";
		scope=2;
		scopeCurator=2;
		displayName="Marksman";
		weapons[]=
		{
			"CUP_arifle_M4A1_ACOGreflex",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"CUP_arifle_M4A1_ACOGreflex",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"HandGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"HandGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		cost=250000;
		role="Marksman";
		linkedItems[]=
		{
			"V_BandollierB_khk",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_khk",
			"H_Shemag_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		uniformClass="U_IG_Guerilla3_1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"
		};
		headgearProbability=60;
		allowedHeadgear[]=
		{
			"H_Booniehat_khk_hs",
			"H_Booniehat_khk",
			"H_Booniehat_oli",
			"H_Booniehat_tan",
			"H_Booniehat_dgtl"
		};
		allowedHeadgearB[]=
		{
			"H_Bandanna_gry",
			"H_Bandanna_blu",
			"H_Bandanna_cbr",
			"H_Bandanna_khk_hs",
			"H_Bandanna_khk",
			"H_Bandanna_sgg",
			"H_Bandanna_sand",
			"H_Bandanna_surfer",
			"H_Bandanna_surfer_blk",
			"H_Bandanna_surfer_grn",
			"H_Bandanna_camo",
			"H_Watchcap_blk",
			"H_Watchcap_cbr",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Cap_blk",
			"H_Cap_grn",
			"H_Cap_oli",
			"H_Cap_oli_hs",
			"H_Cap_tan",
			"H_Cap_blk_Raven",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk"
		};
		headgearList[]=
		{
			"H_Bandanna_gry",
			0.15000001,
			"H_Bandanna_blu",
			0.15000001,
			"H_Bandanna_cbr",
			0.15000001,
			"H_Bandanna_khk_hs",
			0.15000001,
			"H_Bandanna_khk",
			0.15000001,
			"H_Bandanna_sgg",
			0.15000001,
			"H_Bandanna_sand",
			0.15000001,
			"H_Bandanna_surfer",
			0.15000001,
			"H_Bandanna_surfer_blk",
			0.15000001,
			"H_Bandanna_surfer_grn",
			0.15000001,
			"H_Bandanna_camo",
			0.15000001,
			"H_Watchcap_blk",
			0.15000001,
			"H_Watchcap_cbr",
			0.15000001,
			"H_Watchcap_camo",
			0.15000001,
			"H_Watchcap_khk",
			0.15000001,
			"H_Booniehat_khk_hs",
			1,
			"H_Booniehat_khk",
			1,
			"H_Booniehat_oli",
			1,
			"H_Booniehat_tan",
			1,
			"H_Booniehat_dgtl",
			1,
			"H_Cap_blk",
			0.15000001,
			"H_Cap_grn",
			0.15000001,
			"H_Cap_oli",
			0.15000001,
			"H_Cap_oli_hs",
			0.15000001,
			"H_Cap_tan",
			0.15000001,
			"H_Cap_blk_Raven",
			0.15000001,
			"H_Shemag_olive",
			0.15000001,
			"H_Shemag_olive_hs",
			0.15000001,
			"H_ShemagOpen_tan",
			0.15000001,
			"H_ShemagOpen_khk",
			0.15000001
		};
	};
	class ARA_G_Soldier_LAT_F: ARA_G_Soldier_base_F
	{
		author="kilodot";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural="$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound="veh_infantry_AT_s";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg";
		_generalMacro="ARA_G_Soldier_LAT_F";
		scope=2;
		scopeCurator=2;
		displayName="Rifleman (AT)";
		backpack="B_TacticalPack_blk";
		weapons[]=
		{
			"arifle_TRG21_F",
			"CUP_launch_RPG26",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_TRG21_F",
			"CUP_launch_RPG26",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"RPG32_F",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Stanag",
			"RPG32_F",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		threat[]={0.80000001,0.80000001,0.30000001};
		icon="iconManAT";
		role="MissileSpecialist";
		linkedItems[]=
		{
			"V_HarnessO_brn",
			"H_Bandanna_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_HarnessO_brn",
			"H_Bandanna_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		model="\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		uniformClass="U_IG_Guerrilla_6_1";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"
		};
		headgearProbability=100;
		allowedHeadgear[]=
		{
			"H_Bandanna_gry",
			"H_Bandanna_blu",
			"H_Bandanna_cbr",
			"H_Bandanna_khk_hs",
			"H_Bandanna_khk",
			"H_Bandanna_sgg",
			"H_Bandanna_sand",
			"H_Bandanna_surfer",
			"H_Bandanna_surfer_blk",
			"H_Bandanna_surfer_grn",
			"H_Bandanna_camo",
			"H_Watchcap_blk",
			"H_Watchcap_cbr",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_khk",
			"H_Booniehat_oli",
			"H_Booniehat_tan",
			"H_Booniehat_dgtl",
			"H_Cap_blk",
			"H_Cap_grn",
			"H_Cap_oli",
			"H_Cap_oli_hs",
			"H_Cap_tan",
			"H_Cap_blk_Raven",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_ShemagOpen_tan",
			"H_ShemagOpen_khk"
		};
		headgearList[]=
		{
			"H_Bandanna_gry",
			1,
			"H_Bandanna_blu",
			1,
			"H_Bandanna_cbr",
			1,
			"H_Bandanna_khk_hs",
			1,
			"H_Bandanna_khk",
			1,
			"H_Bandanna_sgg",
			1,
			"H_Bandanna_sand",
			1,
			"H_Bandanna_surfer",
			1,
			"H_Bandanna_surfer_blk",
			1,
			"H_Bandanna_surfer_grn",
			1,
			"H_Bandanna_camo",
			1,
			"H_Watchcap_blk",
			1,
			"H_Watchcap_cbr",
			1,
			"H_Watchcap_camo",
			1,
			"H_Watchcap_khk",
			1,
			"H_Booniehat_khk_hs",
			1,
			"H_Booniehat_khk",
			1,
			"H_Booniehat_oli",
			1,
			"H_Booniehat_tan",
			1,
			"H_Booniehat_dgtl",
			1,
			"H_Cap_blk",
			1,
			"H_Cap_grn",
			1,
			"H_Cap_oli",
			1,
			"H_Cap_oli_hs",
			1,
			"H_Cap_tan",
			1,
			"H_Cap_blk_Raven",
			1,
			"H_Shemag_olive",
			1,
			"H_Shemag_olive_hs",
			1,
			"H_ShemagOpen_tan",
			1,
			"H_ShemagOpen_khk",
			1
		};
	};

	// Vehicles
	class ARA_G_SF_GMG_W: CUP_B_LR_Special_Des_CZ_D
	{
		displayName="Land Rover 110 (Special) Woodland";
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_jackal\data\jackal_base_woodlnd_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_jackal\data\jackal_mount_woodlnd_co.paa"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_SF_GMG_D: CUP_B_LR_Special_Des_CZ_D
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_LR_W: CUP_B_LR_Transport_CZ_D
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		hiddenselectionstextures[]=
		{
			"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_LR_D: CUP_B_LR_Transport_CZ_D
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_Hilux: CUP_B_Hilux_unarmed_BLU_G_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_Hilux_DSHkM: CUP_B_Hilux_DSHKM_BLU_G_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_Hilux_SPG9: CUP_B_Hilux_SPG9_BLU_G_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_Hilux_igla: CUP_B_Hilux_igla_BLU_G_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_Hilux_metis: CUP_B_Hilux_metis_BLU_G_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_Hilux_zu23: CUP_B_Hilux_zu23_BLU_G_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_Hilux_M2: CUP_B_Hilux_M2_BLU_G_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	};
	class ARA_G_Kamaz_SUPPLY: C_Truck_02_box_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=20;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=200;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=200;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=100;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=10;
			};
		};
		class TransportBackpacks
		{};
	}
	class ARA_G_Kamaz_TRANSPORT: C_Truck_02_covered_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	}
	class ARA_G_Kamaz_FUEL: C_Truck_02_fuel_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	}
	class ARA_G_Van_SUPPLY: B_G_Van_02_vehicle_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=20;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=200;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=200;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=100;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=10;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=10;
			};
		};
		class TransportBackpacks
		{};
	}
	class ARA_G_Van_TRANSPORT: B_G_Van_02_transport_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	}
	class ARA_G_Van_FLATBED: B_G_Van_01_transport_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	}
	class ARA_G_Van_FUEL: B_G_Van_01_fuel_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	}
	class ARA_G_Suburban: CUP_I_SUV_ION
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_Chemlight_Red
			{
				magazine="Chemlight_Red";
				count=2;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{};
	}
	class ARA_G_Quadbike: B_G_Quadbike_01_F
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
		class TransportWeapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon="CUP_launch_M72A6";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=10;
			};
		};
		maximumLoad=2500;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
		};
		class TransportBackpacks
		{};
	};




	// Turrets
	class ARA_G_M2StaticMG: CUP_B_M2StaticMG_US
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
	class ARA_G_M2StaticMG_MiniTriPod: CUP_B_M2StaticMG_MiniTriPod_US
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
	class ARA_G_DSHkM: CUP_B_DSHkM_CDF
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
	class ARA_G_DSHkM_MiniTriPod: CUP_B_DSHkM_MiniTriPod_CDF
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
	class ARA_G_TOW_TriPod: CUP_B_TOW_TriPod_US
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
	class ARA_G_TOW2_TriPod: CUP_B_TOW2_TriPod_US
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
	class ARA_G_Metis: CUP_O_Metis_RU
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
	class ARA_G_Kornet: CUP_O_Kornet_RU
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
	class ARA_G_SPG9: CUP_B_SPG9_CDF
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
	class ARA_G_M252: CUP_B_M252_US
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
	class ARA_G_2b14_82mm: CUP_B_2b14_82mm_CDF
	{
		side=1;
		faction="ARA_G_F";
		crew="ARA_G_Soldier_F";
		typicalCargo[]=
		{
			"ARA_G_Soldier_F"
		};
	};
};

class CfgGroups
{
	class west
	{
		name="$STR_A3_CfgGroups_West0";
		side=1;
		class ARA_G
		{
			name="Altian Republican Army";
			class Infantry
			{
				name="Infantry";
				class ARA_G_InfTeam
				{
					name="Fire Team";
					side=1;
					faction="ARA_G_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="ARA_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="ARA_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="ARA_G_Soldier_GL_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="ARA_G_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};

				class AAP_G_InfSquad
				{
					name="Squad";
					side=1;
					faction="ARA_G_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="ARA_G_Soldier_sL_F";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="ARA_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="ARA_G_Soldier_GL_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="ARA_G_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="ARA_G_medic_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="ARA_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="ARA_G_SOldier_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="ARA_G_SOldier_LAT_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};

				class ARA_G_SpecTeam
				{
					name="Special Coordination A Team";
					side=1;
					faction="ARA_G_F";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="ARA_G_Soldier_RL_F";
						rank="CAPTAIN";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="ARA_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="ARA_G_medic_F";
						rank="SERGEANT";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="ARA_G_Soldier_LAT_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
				};
			};
		};
	};
};