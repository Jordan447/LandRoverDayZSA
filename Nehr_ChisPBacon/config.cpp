class CfgMods 
{
	class Nehr_ChisPBacon
	{
		dir = "NehrNehr_ChisPBacon";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Land Rover Defender";
		credits = "MrNehr & ChisPBacon";
		author = "MrNehr & ChisPBacon";
		authorID = "0";
		version = 0.1;
		extra = 0;
		type = "mod";
		dependencies[] = {"World", "Mission"};	
		class defs 
		{
			class worldScriptModule 
			{
				value = "";
				files[] = {"Nehr_ChisPBacon\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Nehr_ChisPBacon\Scripts\5_Mission"};
			};

		};
	};
};
class CfgPatches
{
	class Nehr_ChisPBacon
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};