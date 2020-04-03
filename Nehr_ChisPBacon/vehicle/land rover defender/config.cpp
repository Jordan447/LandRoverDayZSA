class CfgPatches
{
	class land_rover_defender
	{
		units[]={"CanisterGasoline"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Vehicles_Wheeled", "DZ_Vehicles_Parts", "DZ_Data", "DZ_Scripts", "DZ_Sounds_Effects", "DZ_Gear_Containers", "DZ_Gear_Camping"};
	};
};

class CfgVehicles
{	
	class Container_Base;
	class Bottle_Base;
	class Inventory_Base;
	class WoodenCrate: Container_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Wooden_Case0";
		descriptionShort="$STR_CfgVehicles_Wooden_Case1";
		model="\DZ\gear\camping\wooden_case.p3d";
		weight=10000;
		itemSize[]={10,5};
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		inventorySlot[]=
		{
			"woodencrate_1",
			"woodencrate_2",
			"woodencrate_3",
			"woodencrate_4"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\wooden_case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\wooden_case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\wooden_case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\wooden_case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\wooden_case_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="seachest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CanisterGasoline: Bottle_Base 
	{
			scope = 2;
			displayName = "$STR_CfgVehicles_CanisterGasoline0";
			descriptionShort = "$STR_CfgVehicles_CanisterGasoline1";
			model = "\dz\vehicles\parts\JerryCan.p3d";
			weight = 4000;
			itemSize[] = {5, 6};
			inventorySlot = "CanisterGasoline";
			absorbency = 0;
			ContinuousActions[] = {222, 221, 182, 176, 169, 189, 160, 108, 225, 226, 234, 106};
			canBeSplit = 0;
			stackedRandom = 1;
			destroyOnEmpty = 0;
			varQuantityDestroyOnMin = 0;
			varLiquidTypeInit = 8192;
			liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
			varQuantityInit = 20000;
			varQuantityMin = 0;
			varQuantityMax = 20000;

			class AnimEvents {

				class SoundWeapon {

					class pickUpCanisterGasoline_Light {
						soundSet = "pickUpCanisterGasolineLight_SoundSet";
						id = 796;
					};

					class pickUpCanisterGasoline {
						soundSet = "pickUpCanisterGasoline_SoundSet";
						id = 797;
					};

					class drop {
						soundset = "canistergasoline_drop_SoundSet";
						id = 898;
					};
				};
			};

			class DamageSystem {

				class GlobalHealth {

					class Health {
						hitpoints = 100;
						healthLevels[] = {{1.000000, {"DZ\vehicles\parts\data\jerrycan.rvmat"}}, {0.700000, {"DZ\vehicles\parts\data\jerrycan.rvmat"}}, {0.500000, {"DZ\vehicles\parts\data\jerrycan_damage.rvmat"}}, {0.300000, {"DZ\vehicles\parts\data\jerrycan_damage.rvmat"}}, {0.000000, {"DZ\vehicles\parts\data\jerrycan_destruct.rvmat"}}};
					};
				};
			};
		};
	class SeaChest: Container_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SeaChest0";
		descriptionShort="$STR_CfgVehicles_SeaChest1";
		model="\DZ\gear\camping\sea_chest.p3d";
		weight=10000;
		itemBehaviour=0;
		itemSize[]={10,10};
		carveNavmesh=1;
		canBeDigged=1;
		rotationFlags=2;
		inventorySlot[]=
		{
			"sea_chest",
			"sea_chest_2",
			"sea_chest_3",
			"sea_chest_4"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\sea_chest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\sea_chest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\sea_chest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\sea_chest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\sea_chest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="seachest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Barrel_ColorBase: Container_Base
	{
		displayName="$STR_CfgVehicles_Barrel_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Barrel_ColorBase1";
		model="\dz\gear\containers\55galDrum.p3d";
		overrideDrawArea="8.0";
		forceFarBubble="true";
		SingleUseActions[]={527};
		InteractActions[]={1025,1026};
		ContinuousActions[]={155};
		slopeTolerance=0.30000001;
		inventorySlot[]=
		{
			"55galDrum_1",
			"55galDrum_2"
		};
		attachments[]=
		{
			"BerryR",
			"BerryB",
			"Plant",
			"OakBark",
			"BirchBark",
			"Lime",
			"Disinfectant",
			"Guts"
		};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		stackedUnit="ml";
		randomQuantity=2;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=200000;
		absorbency=0.1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class GUIInventoryAttachmentsProps
		{
			class TanLeather
			{
				name="$STR_attachment_TanLeather0";
				description="";
				attachmentSlots[]=
				{
					"Lime"
				};
				icon="cat_tan_leather";
			};
			class BleachCotton
			{
				name="$STR_attachment_BleachCotton0";
				description="";
				attachmentSlots[]=
				{
					"Disinfectant"
				};
				icon="cat_bleach_cotton";
			};
			class ColorLeatherClothes
			{
				name="$STR_attachment_ColorLeatherClothes0";
				description="";
				attachmentSlots[]=
				{
					"BirchBark",
					"OakBark"
				};
				icon="cat_color_leather";
			};
			class ColorCottonClothes
			{
				name="$STR_attachment_ColorCottonClothes0";
				description="";
				attachmentSlots[]=
				{
					"BerryR",
					"BerryB"
				};
				icon="cat_color_cotton";
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,15};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class Lid
			{
				source="user";
				initPhase=0;
				animPeriod=0.0099999998;
			};
			class Lid2
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="barrel_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="barrel_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CarWheel: Inventory_Base
	{
		scope=1;
		itemBehaviour=0;
		physLayer="item_large";
		itemSize[]={6,6};
		weight=12000;
		repairableWithKits[]={6};
		repairCosts[]={25};
		simulation="carwheel";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="hatchbackwheel_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CarDoor: Inventory_Base
	{
		scope=1;
		itemBehaviour=0;
		physLayer="item_large";
		itemSize[]={10,10};
		weight=20000;
		hiddenSelections[]=
		{
			"dmgZone_doors"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Window
				{
					class Health
					{
						hitpoints=70;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									""
								}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_window"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Doors
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									""
								}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_doors"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="hatchbackdoors_driver_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="hatchbackdoors_driver_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Car;
	class CarScript: Car
	{
		rotationFlags=64;
		storageCategory=4;
		insideSoundCoef=0.89999998;
		fuelCapacity=50;
		brakeFluidCapacity=1;
		oilCapacity=4;
		coolantCapacity=6;
		brakeFluidLeakDebit[]={0,0};
		oilLeakDebit[]={0,0};
		coolantLeakDebit[]={0,0};
		brakeFluidForceCoef[]={0,1,1,1};
		damageFromOil[]={0,0,1,0};
		damageFromCoolant[]={0,0,1,0};
		engineBeltSlot="EngineBelt";
		batterySlot="CarBattery";
		electricPowerResName="power";
		electricConsumptionIgnition=3001;
		electricConsumptionEngine=0;
		electricConsumptionLights=0;
		electricOutputEngine=5;
		selectionDashboard="light_dashboard";
		selectionLightFrontL="light_left";
		selectionLightFrontR="light_right";
		selectionBrakeLights="light_break";
		class Crew
		{
			class Driver
			{
				actionSel="seat_driver";
				proxyPos="crewDriver";
				getInPos="pos_driver";
				getInDir="pos_driver_dir";
				isDriver=1;
			};
			class CoDriver
			{
				actionSel="seat_coDriver";
				proxyPos="crewCoDriver";
				getInPos="pos_coDriver";
				getInDir="pos_coDriver_dir";
			};
		};
		class SimulationModule
		{
			class Axles
			{
				class Front
				{
					class Wheels
					{
						class Left
						{
							inventorySlot="";
							animTurn="turnfrontleft";
							animRotation="wheelfrontleft";
							animDamper="damperfrontleft";
							wheelHub="wheel_1_1_damper_land";
						};
						class Right
						{
							inventorySlot="";
							animTurn="turnfrontright";
							animRotation="wheelfrontright";
							animDamper="damperfrontright";
							wheelHub="wheel_2_1_damper_land";
						};
					};
				};
				class Rear
				{
					class Wheels
					{
						class Left
						{
							inventorySlot="";
							animTurn="turnbackleft";
							animRotation="wheelbackleft";
							animDamper="damperbackleft";
							wheelHub="wheel_1_2_damper_land";
						};
						class Right
						{
							inventorySlot="";
							animTurn="turnbackright";
							animRotation="wheelbackright";
							animDamper="damperbackright";
							wheelHub="wheel_2_2_damper_land";
						};
					};
				};
			};
		};
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1"
		};
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
		class AnimationSources
		{
			class DoorsDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCoDriver: DoorsDriver
			{
			};
			class DoorsHood: DoorsDriver
			{
			};
			class DoorsTrunk: DoorsDriver
			{
			};
			class HideDestroyed_1_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_1_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class AnimHitWheel_1_1
			{
				source="Hit";
				hitpoint="HitWheel_1_1";
				raw=1;
			};
			class AnimHitWheel_1_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_1_2";
			};
			class AnimHitWheel_2_1: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_1";
			};
			class AnimHitWheel_2_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_2";
			};
			class HitDoorsHood: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsHood";
			};
			class HitDoorsTrunk: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsTrunk";
			};
			class HitDoorsDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsDriver";
			};
			class HitDoorsCoDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCoDriver";
			};
			class HitDoorsCargo: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCargo";
			};
		};
	};
	class lrdefender_wheel: CarWheel
	{
		scope=2;
		displayName="Land Rover Wheel";
		descriptionShort="Land Rover Wheel";
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefender_wheel.p3d";
		weight=15000;
		itemSize[]={6,6};
		itemBehaviour=0;
		inventorySlot[]=
		{
			"lrdefender_wheel_1_1",
			"lrdefender_wheel_1_2",
			"lrdefender_wheel_2_1",
			"lrdefender_wheel_2_2",
			"lrdefender_wheel_Spare_1"
		};
		rotationFlags=4;
		physLayer="item_large";
		friction=10.5;
		repairableWithKits[]={6};
		repairCosts[]={30};
		radiusByDamage[]={0,0.36199999,0.30000001,0.30000001,0.99980003,0.25,0.99989998,0.2};
		radius=0.42;
		width=0.18000001;
		tyreRollResistance=0.015;
		tyreTread=0.80000001;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\wheeled\Sedan_02\data\Sedan_02_wheel.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\wheeled\Sedan_02\data\Sedan_02_wheel.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\wheeled\Sedan_02\data\Sedan_02_wheel_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\wheeled\Sedan_02\data\Sedan_02_wheel_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\wheeled\Sedan_02\data\Sedan_02_wheel_damaged.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lrdefender_wheel_ruined: CarWheel
	{
		scope=2;
		displayName="lrdefender_wheel_ruined";
		descriptionShort="lrdefender_wheel_ruined";
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefender_wheel_ruined.p3d";
		weight=10000;
		itemSize[]={6,6};
		itemBehaviour=0;
		inventorySlot[]=
		{
			"lrdefender_wheel_1_1",
			"lrdefender_wheel_1_2",
			"lrdefender_wheel_2_1",
			"lrdefender_wheel_2_2",
			"lrdefender_wheel_Spare_1"
		};
		rotationFlags=4;
		physLayer="item_large";
		friction=-1;
		radius=0.36;
		width=0.17;
		tyreRollResistance=1;
		tyreRollDrag=70;
		tyreRoughness=1;
		tyreTread=0.5;
	};
	class lrdefenderdoors_driver: CarDoor
	{
		scope=2;
		displayName="lrdefenderdoors_driver";
		descriptionShort="lrdefenderdoors_driver";
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefenderdoors_driver.p3d";
		weight=15000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot="lrdefenderdoors_driver";
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co.paa"
		};
		rotationFlags=8;
		physLayer="item_large";
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat"
								}
							},
							
							{
								0,
								"hidden"
							}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_door.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_door_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class lrdefenderdoors_codriver: lrdefenderdoors_driver
	{
		displayName="lrdefenderdoors_codriver";
		descriptionShort="lrdefenderdoors_codriver";
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefenderdoors_codriver.p3d";
		itemBehaviour=0;
		inventorySlot="lrdefenderdoors_codriver";
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co.paa"
		};
		rotationFlags=4;
	};
	class lrdefenderdoors_hood: CarDoor
	{
		scope=2;
		displayName="Land Rover Defender Hood";
		descriptionShort="Land Rover Defender Hood that goes on the 2 door varient.";
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefenderdoors_hood.p3d";
		weight=150;
		itemSize[]={10,10};
		inventorySlot="lrdefenderdoors_hood";
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co.paa"
		};
		rotationFlags=2;
		physLayer="item_large";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\niva_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\niva_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\niva_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="hatchbackdoors_driver_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="hatchbackhood_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class lrdefenderdoors_trunk: CarDoor
	{
		scope=2;
		displayName="Land Rover Defender Trunk";
		descriptionShort="Land Rover Defender Trunk that goes on the 2 door varient.";
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefenderdoors_trunk.p3d";
		weight=15000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot="lrdefenderdoors_trunk";
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co.paa"
		};
		rotationFlags=1;
		physLayer="item_large";
		class DamageSystem: DamageSystem
		{
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat"
								}
							},
							
							{
								0,
								"hidden"
							}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_door.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_door_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class land_rover_defender: CarScript
	{
		scope=2;
		displayName="Land Rover Defender";
		descriptionShort="land_rover_defender";
		model="Nehr_ChisPBacon\vehicle\land rover defender\land_rover_defender.p3d";
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"CanisterGasoline",
			"lrdefenderdoors_driver",
			"lrdefenderdoors_codriver",
			"lrdefenderdoors_hood",
			"lrdefenderdoors_trunk",
			"lrdefender_wheel_1_1",
			"lrdefender_wheel_1_2",
			"lrdefender_wheel_2_1",
			"lrdefender_wheel_2_2",
			"lrdefender_wheel_Spare_1",
			"55galDrum_1",
			"55galDrum_2",
			"sea_chest",
			"woodencrate_1"
			
		};
		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"Nehr_ChisPBacon\vehicle\land rover defender\data\Landrover_Body.rvmat"
		};
		dashboardMatOn="Nehr_ChisPBacon\vehicle\land rover defender\data\Landy_Dashboard_Light.rvmat";
		dashboardMatOff="Nehr_ChisPBacon\vehicle\land rover defender\data\Landy_Dashboard.rvmat";
		frontReflectorMatOn="dz\vehicles\wheeled\offroadhatchback\data\niva_lights.rvmat";
		frontReflectorMatOff="dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat";
		brakeReflectorMatOn="dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights_e.rvmat";
		brakeReflectorMatOff="dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat";
		ReverseReflectorMatOn="dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights_e.rvmat";
		ReverseReflectorMatOff="dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat";
		TailReflectorMatOn="dz\vehicles\wheeled\offroadhatchback\data\OffroadHatchback_lights_e.rvmat";
		TailReflectorMatOff="dz\vehicles\wheeled\offroadhatchback\data\OffroadHatchback_lights.rvmat";
		fuelCapacity=62;
		fuelConsumption=11;
		class Crew: Crew
		{
			class Driver: Driver
			{
			};
			class CoDriver: CoDriver
			{
			};
		};
		class SimulationModule: SimulationModule
		{
			drive = "DRIVE_AWD";
			airDragCoefficient = 0.85;
			class Steering
			{
				increaseSpeed[] = {0,45,60,25,100,15};
				decreaseSpeed[] = {0,90,60,45,100,15};
				centeringSpeed[] = {0,0,15,28,60,45,100,60};
			};
			class Throttle
			{
				reactionTime = 0.8;
				defaultThrust = 0.92;
				gentleThrust = 0.7;
				turboCoef = 1.2;
				gentleCoef = 0.75;
			};
			class Engine
			{
				inertia = 0.4;
				torqueMax = 245;
				torqueRpm = 4700;
				powerMax = 130;
				powerRpm = 6000;
				rpmIdle = 850;
				rpmMin = 900;
				rpmClutch = 1500;
				rpmRedline = 6500;
				rpmMax = 8000;
			};
			class Gearbox
			{
				reverse = 3.9;
				ratios[] = {4.95,3.0,2.1,1.35};
				timeToUncoupleClutch = 0.15;
				timeToCoupleClutch = 0.21;
				maxClutchTorque = 320;
			};
			/*class Steering
			{
				increaseSpeed[] = {0,50,70,60,120,20};
				decreaseSpeed[] = {0,90,60,45,100,15};
				centeringSpeed[] = {0,0,15,28,60,45,100,60};
			};
			class Throttle
			{
				reactionTime = 1;
				defaultThrust = 0.95000005;
				gentleThrust = 0.7;
				turboCoef = 1.4;
				gentleCoef = 0.75;
			};
			class Engine
			{
				inertia = 0.32;
				torqueMax = 360;
				torqueRpm = 4700;
				powerMax = 120;
				powerRpm = 6000;
				rpmIdle = 850;
				rpmMin = 900;
				rpmClutch = 1500;
				rpmRedline = 6500;
				rpmMax = 8000;
			};
			class Gearbox
			{
				reverse = 3.9;
				ratios[] = {4.2,3.0,1.8,0.6};
				timeToUncoupleClutch = 0.15;
				timeToCoupleClutch = 0.21;
				maxClutchTorque = 220;
			};
			*/
			class Axles: Axles
			{
				class Front: Front
				{
					maxSteeringAngle = 35;
					finalRatio = 4.099;
					brakeBias = 0.75;
					brakeForce = 14000;
					wheelHubMass = 10;
					wheelHubRadius = 0.41;
					wheelHubRatio=2.1400001;
					class Suspension
					{
						swayBar=1900;
						stiffness=40000;
						compression=2100;
						damping=5200;
						travelMaxUp = 0.16;
						travelMaxDown = 0.16;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_1";
							inventorySlot="lrdefender_wheel_1_1";
						};
						class Right: Right
						{
							animDamper="damper_2_1";
							inventorySlot="lrdefender_wheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 4.099;
					brakeBias = 0.44;
					brakeForce = 12000;
					wheelHubMass = 10;
					wheelHubRadius = 0.41;
					wheelHubRatio=2.1400001;
					class Suspension
					{
						swayBar=1900;
						stiffness=40000;
						compression=2100;
						damping=5200;
						travelMaxUp = 0.16;
						travelMaxDown = 0.16;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_2";
							inventorySlot="lrdefender_wheel_1_2";
						};
						class Right: Right
						{
							animDamper="damper_2_2";
							inventorySlot="lrdefender_wheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class AnimationSources: AnimationSources
		{
			class SeatDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class SeatCoDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class damper_1_1
			{
				source="user";
				initPhase=0.48570001;
				animPeriod=1;
			};
			class damper_2_1: damper_1_1
			{
			};
			class damper_1_2
			{
				source="user";
				initPhase=0.40020001;
				animPeriod=1;
			};
			class damper_2_2: damper_1_2
			{
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Chassis
				{
					class Health
					{
						hitpoints=3000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"dmgZone_chassis"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Front
				{
					class Health
					{
						hitpoints=3000;
						transferToGlobalCoef=0;
						
					};
					transferToZonesNames[]=
					{
						"Fender_1_1",
						"Fender_2_1",
						"Engine",
						"WindowFront"
					};
					transferToZonesThreshold[]={0.6,0.8,0.5,0.5,0.1};
					transferToZonesCoefs[]={0.69999999,0.69999999,0.7,0.5,0.050000001};
					memoryPoints[]=
					{
						"dmgZone_front"
					};
					componentNames[]=
					{
						"dmgZone_front"
					};
					fatalInjuryCoef=-1;
					inventorySlotsCoefs[]={0.14,0.30};
					inventorySlots[]=
					{
						"lrdefenderdoors_hood",
						"CarRadiator"
					};
				};
				class Reflector_1_1
				{
					class Health
					{
						hitpoints=10;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\headlights_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\glass_i_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\glass_i_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_1_1",
						"Engine"
					};
					transferToZonesCoefs[]={0.1,0.15000001,0.050000001};
					memoryPoints[]=
					{
						"dmgZone_lights_1_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_1_1"
					};
					fatalInjuryCoef=-1;
					inventorySlotsCoefs[]={1};
					inventorySlots[]=
					{
						"Reflector_1_1"
					};
				};
				class Reflector_2_1: Reflector_1_1
				{
					transferToZonesNames[]=
					{
						"Front",
						"Fender_2_1",
						"Engine"
					};
					transferToZonesCoefs[]={0.1,0.15000001,0.050000001};
					memoryPoints[]=
					{
						"dmgZone_lights_2_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_2_1"
					};
					inventorySlotsCoefs[]={1};
					inventorySlots[]=
					{
						"Reflector_2_1"
					};
				};
				class Back
				{
					class Health
					{
						hitpoints=3500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_2",
						"Fender_2_2",
						"WindowBack"
					};
					transferToZonesCoefs[]={0.30000001,0.30000001,0.2,0.2};
					memoryPoints[]=
					{
						"dmgZone_back"
					};
					componentNames[]=
					{
						"dmgZone_back"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"lrdefenderdoors_trunk"
					};
				};
				class Roof
				{
					class Health
					{
						hitpoints=700;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"
								}
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_roof"
					};
					componentNames[]=
					{
						"dmgZone_roof"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Fender_1_1
				{
					class Health
					{
						hitpoints=1200;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Engine",
						"Reflector_1_1",
						"WindowFront"
					};
					transferToZonesThreshold[]={0.2,0.5,0.89999998,0.5};
					transferToZonesCoefs[]={0.30000001,0.60000002,0.60000002,0.40000001};
					memoryPoints[]=
					{
						"dmgZone_fender_1_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_1"
					};
					fatalInjuryCoef=-1;
					inventorySlotsCoefs[]={0.30000001,0.30000001,0.30000001};
					inventorySlots[]=
					{
						"lrdefenderdoors_hood",
						"lrdefender_wheel_1_1",
						"lrdefenderdoors_driver"
					};
				};
				class Fender_1_2: Fender_1_1
				{
					transferToZonesNames[]=
					{
						"Back",
						"FuelTank"
					};
					transferToZonesThreshold[]={0.2,0.2,0.2};
					transferToZonesCoefs[]={0.30000001,0.2,0.69999999};
					memoryPoints[]=
					{
						"dmgZone_fender_1_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_2"
					};
					inventorySlotsCoefs[]={0.30000001,0.1};
					inventorySlots[]=
					{
						"lrdefenderdoors_trunk",
						"lrdefender_wheel_1_2"
					};
				};
				class Fender_2_1: Fender_1_1
				{
					transferToZonesNames[]=
					{
						"Front",
						"Engine",
						"Reflector_2_1",
						"WindowFront",
						"Battery"
					};
					transferToZonesThreshold[]={0.2,0.5,0.89999998,0.5,0.5};
					transferToZonesCoefs[]={0.30000001,0.60000002,0.60000002,0.40000001,0.69999999};
					memoryPoints[]=
					{
						"dmgZone_fender_2_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_1"
					};
					inventorySlotsCoefs[]={0.30000001,0.2,31};
					inventorySlots[]=
					{
						"lrdefenderdoors_hood",
						"lrdefender_wheel_2_1",
						"lrdefenderdoors_driver"
					};
				};
				class Fender_2_2: Fender_1_1
				{
					transferToZonesNames[]=
					{
						"Back",
						"FuelTank"
					};
					transferToZonesThreshold[]={0.2,0.2,0.2};
					transferToZonesCoefs[]={0.30000001,0.2,0.69999999};
					memoryPoints[]=
					{
						"dmgZone_fender_2_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_2"
					};
					inventorySlotsCoefs[]={0.30000001,0.1};
					inventorySlots[]=
					{
						"lrdefenderdoors_trunk",
						"lrdefender_wheel_2_2"
					};
				};
				class WindowFront
				{
					class Health
					{
						hitpoints=150;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat"
								}
							},
							
							{
								0,
									"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat"
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_windowFront"
					};
					componentNames[]=
					{
						"dmgZone_windowFront"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class WindowBack: WindowFront
				{
					componentNames[]=
					{
						"dmgZone_windowBack"
					};
					memoryPoints[]=
					{
						"dmgZone_windowBack"
					};
				};
				class Engine
				{
					class Health
					{
						hitpoints=3000;
						transferToGlobalCoef=1;
					};
					componentNames[]=
					{
						"dmgZone_engine"
					};
					memoryPoints[]=
					{
						"dmgZone_engine"
					};
					fatalInjuryCoef=0.001;
					inventorySlotsCoefs[]={0.2,0.2,0.0099999998,0.40000001};
					inventorySlots[]=
					{
						"CarBattery",
						"SparkPlug",
						"EngineBelt",
						"CarRadiator"
					};
				};
				class FuelTank
				{
					class Health
					{
						hitpoints=600;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_fuelTank"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
			};
		};
		class Sounds
		{
			thrust = 0.6;
			thrustTurbo = 1;
			thrustGentle = 0.3;
			thrustSmoothCoef = 0.02;
			camposSmoothCoef = 0.03;
			soundSetsFilter[] = {"offroad_Engine_Offload_Ext_Rpm1_SoundSet","offroad_Engine_Offload_Ext_Rpm2_SoundSet","offroad_Engine_Offload_Ext_Rpm3_SoundSet","offroad_Engine_Offload_Ext_Rpm4_SoundSet","offroad_Engine_Offload_Ext_Rpm5_SoundSet","offroad_Engine_Ext_Rpm0_SoundSet","offroad_Engine_Ext_Rpm1_SoundSet","offroad_Engine_Ext_Rpm2_SoundSet","offroad_Engine_Ext_Rpm3_SoundSet","offroad_Engine_Ext_Rpm4_SoundSet","offroad_Engine_Ext_Rpm5_SoundSet","offroad_Engine_Ext_Broken_SoundSet","offroad_Tires_rock_slow_Ext_SoundSet","offroad_Tires_rock_fast_Ext_SoundSet","offroad_Tires_grass_slow_Ext_SoundSet","offroad_Tires_grass_fast_Ext_SoundSet","offroad_Tires_gravel_slow_Ext_SoundSet","offroad_Tires_gravel_fast_Ext_SoundSet","offroad_Tires_gravel_dust_fast_Ext_SoundSet","offroad_Tires_asphalt_slow_Ext_SoundSet","offroad_Tires_asphalt_fast_Ext_SoundSet","offroad_Tires_water_slow_Ext_SoundSet","offroad_Tires_water_fast_Ext_SoundSet","Offroad_skid_dirt_SoundSet","offroad_dirt_turn_SoundSet","offroad_Rain_Ext_SoundSet","offroad_damper_left_SoundSet","offroad_damper_right_SoundSet"};
			soundSetsInt[] = {"Offroad_Tires_Asphalt_Fast_General_Int_SoundSet","Offroad_Wind_SoundSet"};
		};
		class ObstacleGenerator
		{
			carve=1;
			timeToStationary=5;
			moveThreshold=0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius=1;
						height=1.5;
						center[]={0,0,0.69999999};
					};
					class Cyl3
					{
						radius=1;
						height=1.5;
						center[]={0,0,-0.69999999};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="$STR_attachment_Engine0";
				description="";
				icon="cat_vehicle_engine";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug"
				};
			};
			class Body
			{
				name="$STR_attachment_Body0";
				description="";
				icon="cat_vehicle_body";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"lrdefenderdoors_hood",
					"lrdefenderdoors_trunk",
					"lrdefenderdoors_driver",
					"lrdefenderdoors_codriver"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"lrdefender_wheel_1_1",
					"lrdefender_wheel_1_2",
					"lrdefender_wheel_2_1",
					"lrdefender_wheel_2_2"
				};
			};

			class Attachment {
				name = "Attachment";
				description = "";
				icon = "";
				attachmentSlots[] = 
				{
					"CanisterGasoline",
					"lrdefender_wheel_Spare_1",
					"55galDrum_1",
					"55galDrum_2",
					"sea_chest",
					"woodencrate_1"
				};
			};
		};
	};
	class lrdefenderdoors_driver_green: lrdefenderdoors_driver
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_green.paa"
		};
	};
	class lrdefenderdoors_codriver_green: lrdefenderdoors_codriver
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_green.paa"
		};
	};
	class lrdefenderdoors_trunk_green: lrdefenderdoors_trunk
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_green.paa"
		};
	};
	class lrdefenderdoors_hood_green: lrdefenderdoors_hood
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_green.paa"
		};
	};
	class land_rover_defender_green: land_rover_defender
	{
		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_green.paa"
		};
	};
	class lrdefenderdoors_driver_sand: lrdefenderdoors_driver
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_sand.paa"
		};
	};
	class lrdefenderdoors_codriver_sand: lrdefenderdoors_codriver
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_sand.paa"
		};
	};
	class lrdefenderdoors_trunk_sand: lrdefenderdoors_trunk
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_sand.paa"
		};
	};
	class lrdefenderdoors_hood_sand: lrdefenderdoors_hood
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_sand.paa"
		};
	};
	class land_rover_defender_sand: land_rover_defender
	{
		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_sand.paa"
		};
	};
	class lrdefenderdoors_driver_red: lrdefenderdoors_driver
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_red.paa"
		};
	};
	class lrdefenderdoors_codriver_red: lrdefenderdoors_codriver
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_red.paa"
		};
	};
	class lrdefenderdoors_trunk_red: lrdefenderdoors_trunk
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_red.paa"
		};
	};
	class lrdefenderdoors_hood_red: lrdefenderdoors_hood
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_red.paa"
		};
	};
	class land_rover_defender_red: land_rover_defender
	{
		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_red.paa"
		};
	};	
	class lrdefenderdoors_driver_pink: lrdefenderdoors_driver
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_pink.paa"
		};
	};
	class lrdefenderdoors_codriver_pink: lrdefenderdoors_codriver
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_pink.paa"
		};
	};
	class lrdefenderdoors_trunk_pink: lrdefenderdoors_trunk
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_pink.paa"
		};
	};
	class lrdefenderdoors_hood_pink: lrdefenderdoors_hood
	{
		hiddenSelections[] = 
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_pink.paa"
		};
	};
	class land_rover_defender_pink: land_rover_defender
	{
		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Nehr_ChisPBacon\vehicle\land rover defender\data\LandRover_Base_co_pink.paa"
		};
	};	
	//	
};
	
class CfgSlots
{
	class Slot_woodencrate_1
	{
		name="woodencrate_1";
		displayName="woodencrate_1";
		selection="woodencrate_1";
		ghostIcon="cat_common_cargo";
	};
	class Slot_CanisterGasoline
	{
		name="CanisterGasoline";
		displayName="CanisterGasoline";
		selection = "CanisterGasoline";
		ghostIcon="gascanister";
	};
	class Slot_sea_chest
	{
		name="sea_chest";
		displayName="sea_chest";
		selection="sea_chest";
		ghostIcon="cat_common_cargo";
	};
	class Slot_sea_chest_2
	{
		name="sea_chest_2";
		displayName="sea_chest-2";
		selection="sea_chest_2";
		ghostIcon="cat_common_cargo";
	};
	class Slot_sea_chest_3
	{
		name="sea_chest_3";
		displayName="sea_chest_3";
		selection="sea_chest_3";
		ghostIcon="cat_common_cargo";
	};
	class Slot_sea_chest_4
	{
		name="sea_chest_4";
		displayName="sea_chest_4";
		selection="sea_chest_4";
		ghostIcon="cat_common_cargo";
	};
	class Slot_55galDrum_1
	{
		name="55galDrum_1";
		displayName="TrailBrozer 55galDrum_1";
		selection="55galDrum_1";
		ghostIcon="";
	};
	class Slot_55galDrum_2
	{
		name="55galDrum_2";
		displayName="TrailBrozer 55galDrum_2";
		selection="55galDrum_2";
		ghostIcon="";
	};
	class Slot_lrdefender_wheel_1_1
	{
		name="lrdefender_wheel_1_1";
		displayName="Front Left lrdefender Wheel";
		selection="wheel_1_1";
		ghostIcon="wheel";
	};
	class Slot_lrdefender_wheel_1_2
	{
		name="lrdefender_wheel_1_2";
		displayName="Front Right lrdefender Wheel";
		selection="wheel_1_2";
		ghostIcon="wheel";
	};
	class Slot_lrdefender_wheel_2_1
	{
		name="lrdefender_wheel_2_1";
		displayName="Front Left lrdefender Wheel";
		selection="wheel_2_1";
		ghostIcon="wheel";
	};
	class Slot_lrdefender_wheel_2_2
	{
		name="lrdefender_wheel_2_2";
		displayName="Front Right lrdefender Wheel";
		selection="wheel_2_2";
		ghostIcon="wheel";
	};
	class Slot_lrdefender_wheel_Spare_1
	{
		name="lrdefender_wheel_Spare_1";
		displayName="Spare lrdefender Wheel";
		selection="wheel_spare_1";
		ghostIcon="wheel";
	};
	class Slot_lrdefenderdoors_driver
	{
		name="lrdefenderdoors_driver";
		displayName="Drivers Door";
		selection="doors_driver";
		ghostIcon="doorfront";
	};
	class Slot_lrdefenderdoors_codriver
	{
		name="lrdefenderdoors_codriver";
		displayName="Co Drivers Door";
		selection="Doors_codriver";
		ghostIcon="doorfront";
	};
	class Slot_lrdefenderdoors_hood
	{
		name="lrdefenderdoors_hood";
		displayName="lrdefenderdoors_hood";
		selection="doors_hood";
		ghostIcon="hood";
	};
	class Slot_lrdefenderdoors_trunk
	{
		name="lrdefenderdoors_trunk";
		displayName="lrdefenderdoors_trunk";
		selection="doors_trunk";
		ghostIcon="trunk";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyVehiclePart: ProxyAttachment
	{
		scope=2;
		simulation="ProxyInventory";
		autocenter=0;
		animated=0;
		shadow=1;
		reversed=0;
	};
	class Proxy55galDrum: ProxyVehiclePart
	{
		model="DZ\gear\containers\55galdrum.p3d";
		inventorySlot[]=
		{
			"55galDrum_1", 
			"55galDrum_2"
		};
	};
	class Proxywooden_case: ProxyVehiclePart
	{
		model="DZ\gear\camping\wooden_case.p3d";
		inventorySlot[]=
		{
			"woodencrate_1",
			"woodencrate_2",
			"woodencrate_3",
			"woodencrate_4"
		};
	};
	class Proxysea_chest: ProxyVehiclePart
	{
		model="DZ\gear\camping\sea_chest.p3d";
		inventorySlot[]=
		{
			"sea_chest",
			"sea_chest_2",
			"sea_chest_3",
			"sea_chest_4"
		};
	};
	class Proxylrdefender_wheel: ProxyVehiclePart
	{
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefender_wheel.p3d";
		inventorySlot[]=
		{
			"lrdefender_wheel_1_1",
			"lrdefender_wheel_1_2",
			"lrdefender_wheel_2_1",
			"lrdefender_wheel_2_2",
			"lrdefender_wheel_Spare_1"
		};
	};
	class Proxylrdefender_wheel_ruined: ProxyVehiclePart
	{
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefender_wheel_ruined.p3d";
		inventorySlot[]=
		{
			"lrdefender_wheel_1_1",
			"lrdefender_wheel_1_2",
			"lrdefender_wheel_2_1",
			"lrdefender_wheel_2_2",
			"lrdefender_wheel_Spare_1"
		};
	};
	class ProxyJerryCan: ProxyVehiclePart
	{
		model="DZ\vehicles\parts\jerrycan.p3d";
		inventorySlot="CanisterGasoline";
	};
	class Proxylrdefenderdoors_hood: ProxyVehiclePart
	{
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefenderdoors_hood.p3d";
		inventorySlot="lrdefenderdoors_hood";
	};
	class Proxylrdefenderdoors_trunk: ProxyVehiclePart
	{
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefenderdoors_trunk.p3d";
		inventorySlot="lrdefenderdoors_trunk";
	};
	class Proxylrdefenderdoors_driver: ProxyVehiclePart
	{
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefenderdoors_driver.p3d";
		inventorySlot="lrdefenderdoors_driver";
	};
	class Proxylrdefenderdoors_codriver: ProxyVehiclePart
	{
		model="Nehr_ChisPBacon\vehicle\land rover defender\proxy\lrdefenderdoors_codriver.p3d";
		inventorySlot="lrdefenderdoors_codriver";
	};
};