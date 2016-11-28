/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Larry's Lovely Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1, "" },
            { "hgun_ACPC2_F", "", 11500, -1, "" },
            { "hgun_PDW2000_F", "", 20000, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 100, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "hgun_Pistol_heavy_01_F", "", 20000, 200, ""},
			{ "arifle_TRG20_F", "", 40000, 2500, "" },
            { "arifle_Katiba_F", "", 35000, 5000, "" },
            { "srifle_DMR_01_F", "", 100000, -1, "" },
            { "arifle_SDAR_F", "", 30000, 7500, "" },
			{ "arifle_CTARS_ghex_F", "", 50000, -1, "" },
			{ "srifle_DMR_04_Tan_F", "", 450000, 35000, "" },
			{ "srifle_DMR_02_sniper_F", "", 565000, 60000, "" },
			{ "srifle_DMR_02_camo_F", "", 565000, 60000, "" },
			{ "srifle_DMR_05_hex_F", "", 750000, 100000, "" },
			{ "srifle_DMR_05_tan_f", "", 750000, 100000, "" },
			{ "MMG_02_camo_F", "", 800000, 105000, ""},
			{ "MMG_02_sand_F", "", 800000, 105000, ""},
			{ "arifle_SPAR_02_khk_F", "", 150000, 40000, ""},
			{ "arifle_SPAR_02_snd_F", "", 150000, 40000, ""},
			{ "LMG_Zafir_F", "", 900000, 180000, "" },
			{ "LMG_03_F", "", 600000, 120000, ""},
			{ "LMG_Mk200_F", "", 950000, 3000000, ""},
			{ "srifle_DMR_07_hex_F", "", 350000, 80000, "" },
			{ "srifle_DMR_07_ghex_F", "", 350000, 80000, "" },
			{ "SatchelCharge_Remote_Mag", "Improvised Explosive Device", 300000, 30000, "" }	
        };
        mags[] = {
            { "11Rnd_45ACP_Mag", "", 200, 20, "" },
			{ "30Rnd_556x45_Stanag", "", 300, 100, "" },
            { "30Rnd_65x39_caseless_green", "", 275, 100, "" },
            { "10Rnd_762x54_Mag", "", 500, 100, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 100, "" },
			{ "100Rnd_580x42_Mag_F", "", 7500, 200, ""},
			{ "10Rnd_127x54_Mag", "", 6500, 200, ""},
			{ "10Rnd_338_Mag", "", 7500, 500, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 5000, 400, "" },
			{ "130Rnd_338_Mag", "", 10000, 750, "" },
			{ "150Rnd_762x54_Box", "", 6500, 400, "" },
			{ "150Rnd_762x54_Box", "", 10000, 1000, "" },
			{ "200Rnd_556x45_Box_F", "", 4500, 700, "" },
			{ "200Rnd_65x39_cased_Box", "", 10000, 1250, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 4000, 400, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 100, "" },
            { "optic_Holosight", "", 3600, 100, "" },
            { "optic_Hamr", "", 7500, 100, "" },
            { "acc_flashlight", "", 1000, 100, "" },
			{ "muzzle_snds_M", "", 20000, 5000, "" },
			{ "muzzle_snds_H", "", 50000, 10000, "" },
			{ "optic_SOS", "", 65000, 7500, "" },
			{ "optic_MRCO", "", 40000, 5000, "" },
			{ "optic_DMS", "", 30000, 2500, "" },
			{ "optic_LRPS", "", 125000, 20000, "" },
			{ "bipod_03_F_oli", 5000, 250, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, "" },
            { "hgun_ACPC2_F", "", 4500, -1, "" },
            { "hgun_PDW2000_F", "", 9500, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 100, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, 50, "" },
            { "Chemlight_green", "", 300, 50, "" },
            { "Chemlight_blue", "", 300, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 500, 45, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 750, 65, "" },
            { "NVGoggles", "", 10000, 980, "" },
            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, 50, "" },
            { "Chemlight_green", "", 1500, 50, "" },
            { "Chemlight_blue", "", 1500, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650, "" },
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500, "" },
            { "hgun_P07_F", "", 7500, 1500, "" },
            { "SMG_02_ACO_F", "", 15000, 7000, "call life_coplevel >= 1" },
			{ "arifle_MX_Black_F", "", 25000, 12000, "call life_coplevel >= 2" },
			{ "arifle_CTAR_blk_F", "", 20000, 9000, "call life_coplevel >= 2" },
			{ "arifle_MXM_Black_F" , "", 30000, 10000, "call life_coplevel >= 3" },
			{ "HandGrenade_Stone", "Flashbang", 1700, -1, "call life_coplevel >= 4" },
			{ "SatchelCharge_Remote_Mag", "Explosive Satchel", 40000, 10000, "call life_coplevel >= 4"},
			{ "HandGrenade_Stone", "Flashbang", 1700, -1, "call life_coplevel >= 4" },
			{ "arifle_MX_SW_Black_F", "", 50000, 10000, "call life_coplevel >= 5" },
			{ "LMG_Mk200_F", "", 100000, 20000, "call life_coplevel >= 6" },
			{ "srifle_EBR_F", "", 70000, 15000, "call life_coplevel >= 6" },
			{ "arifle_MX_GL_Black_F", "", 30000, 20000, "call life_coplevel >= 7" },
			{ "srifle_GM6_F", "", 450000, 100000, "call life_coplevel >= 8" },
			{ "srifle_DMR_02_F", "", 70000, 22000, "call life_coplevel >= 9" },
			{ "srifle_DMR_03_F", "", 70000, 22000, "call life_coplevel >= 9" },
			{ "srifle_DMR_05_blk_F", "", 250000, 80000, "call life_coplevel >= 10" },
			{ "launch_Titan_F", "Anti Air System", 6969, -1, "call life_coplevel >= 11" }
		};
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 130, 100, "" },
			{ "30Rnd_9x21_Mag", "", 100, 50, "call life_coplevel >=1" },
			{ "30Rnd_65x39_caseless_", "", 150, 30, "call life_coplevel >= 2" },
			{ "30Rnd_580x42_Mag_F", "", 120, 50, "call life_coplevel >= 2" },
			{ "100Rnd_65x39_caseless_mag", "", 3000, 400, "call life_coplevel >= 5" },
			{ "200Rnd_65x39_cased_Box", "", 5000, 1000, "call life_coplevel >= 6" },
			{ "20Rnd_762x51_Mag", "", 750, 200, "call life_coplevel >= 6" },
			{ "5Rnd_127x108_Mag", "", 1500, 400, "call life_coplevel >= 8" },
			{ "10Rnd_338_Mag", "", 2000, 800, "call life_coplevel >= 9" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 2300, 600, "call life_coplevel >= 10" },
			{ "5Rnd_127x108_APDS_Mag", "", 2300, 600, "call life_coplevel >= 10" },
			{ "Titan_AA", "Rockets", 100, -1, "call life_coplevel >= 11" }
		};
        accs[] = {
            { "muzzle_snds_L", "", 650, 100, "" },
			{ "muzzle_snds_H", "", 1000, 200, "call life_coplevel >= 2" },
			{ "optic_Arco", "", 200, 50, "call life_coplevel >= 2" },
			{ "optic_ERCO_blk_F", "", 300, 50, "call life_coplevel >= 3"},
			{ "optic_DMS", "", 5000, 1000, "call life_coplevel >= 3" },
			{ "optic_AMS", "", 20000, 3000, "call life_coplevel >= 4" },
			{ "muzzle_snds_B", "", 3500, 800, "call life_coplevel >= 6" },
			{ "optic_LRPS", "", 35000, 10000, "call life_coplevel >= 8" },
			{ "bipod_02_F_blk", "", 1000, -1, "call life_coplevel >= 3"}
        };
    };

    //Medic Shops
    class med_basic {
        name = "Medical Supplies";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 45, "" },
            { "Binocular", "", 150, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 1200, 980, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
