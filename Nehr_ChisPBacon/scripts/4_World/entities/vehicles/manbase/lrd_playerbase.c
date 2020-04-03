modded class PlayerBase extends ManBase
{
    override void Init()
    {
        if ( !GetGame().IsServer() || !GetGame().IsMultiplayer() ) {
			DayzPlayerItemBehaviorCfg heavyItemBehaviour = new DayzPlayerItemBehaviorCfg;
			heavyItemBehaviour.SetHeavyItems();
            DayzPlayerItemBehaviorCfg     toolsOneHanded = new DayzPlayerItemBehaviorCfg;
            toolsOneHanded.SetToolsOneHanded();

			GetDayZPlayerType().AddItemInHandsProfileIK("lrdefenderdoors_driver", 		"dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour,			"dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_door_driver.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("lrdefenderdoors_codriver", 	"dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour,			"dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_door_codriver.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("lrdefenderdoors_trunk", 			"dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour,			"dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_trunk.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("lrdefenderdoors_hood", 				"dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour,			"dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_hood.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("lrdefender_wheel", 			"dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour,			"dz/anims/anm/player/ik/vehicles/hatchback_02/hatchback_02_wheel.anm");
			}
        super.Init();
    }
}