////////////////////////////////////////////////////////////////////
//DeRap: gear_navigation\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Thu Dec 27 16:33:58 2018 : 'file' last modified on Mon Dec 10 15:49:51 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(12 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class DZ_Gear_Navigation
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class RecipeToolOnTool;
class CfgRecipes{};
class CfgLocationTypes
{
	class Name
	{
		name = "keypoint";
		drawStyle = "name";
		texture = "#(argb,1,1,1)color(1,1,1,1)";
		color[] = {0,0,0,1};
		size = 0;
		font = "gui/fonts/sdf_MetronBook24";
		textSize = 0.03;
		shadow = 0;
		importance = 1;
	};
	class NameIcon
	{
		name = "keypoint";
		drawStyle = "icon";
		texture = "#(argb,1,1,1)color(1,1,1,1)";
		color[] = {0,0,0,1};
		size = 0;
		font = "gui/fonts/sdf_MetronBook24";
		textSize = 0.03;
		shadow = 0;
		importance = 1;
	};
	class Capital: Name
	{
		textSize = 0.06;
		importance = 7;
	};
	class City: Name
	{
		textSize = 0.05;
		importance = 6;
	};
	class Village: Name
	{
		textSize = 0.04;
		importance = 5;
	};
	class Local: Name
	{
		color[] = {0.44,0.38,0.3,1};
		textSize = 0.03;
		importance = 2;
	};
	class Marine: Name
	{
		color[] = {0.05,0.4,0.8,0.8};
		textSize = 0.03;
		importance = 2;
	};
	class Ruin: NameIcon
	{
		texture = "\DZ\gear\navigation\data\map_ruin_ca.paa";
		textSize = 0.03;
		importance = 2;
		size = 7;
	};
	class Camp: NameIcon
	{
		color[] = {0.44,0.38,0.3,1};
		texture = "\DZ\gear\navigation\data\map_camp_ca.paa";
		textSize = 0.04;
		size = 9;
	};
	class Hill: NameIcon
	{
		color[] = {0.0,0.0,0.0,1.0};
		texture = "\DZ\gear\navigation\data\map_hill_ca.paa";
		size = 9;
	};
	class ViewPoint: NameIcon
	{
		color[] = {0.78,0.0,0.05,1.0};
		texture = "\DZ\gear\navigation\data\map_viewpoint_ca.paa";
		size = 9;
	};
	class RockArea: NameIcon
	{
		color[] = {0.0,0.0,0.0,1.0};
		texture = "\DZ\gear\navigation\data\map_rock_ca.paa";
		size = 9;
	};
	class RailroadStation: NameIcon
	{
		color[] = {0.0,0.0,0.0,1.0};
		texture = "\DZ\gear\navigation\data\map_station_ca.paa";
		size = 9;
	};
	class IndustrialSite: NameIcon
	{
		color[] = {0.0,0.0,0.0,1.0};
		texture = "\DZ\gear\navigation\data\map_factory_ca.paa";
		size = 9;
	};
	class LocalOffice: NameIcon
	{
		color[] = {0.22,0.21,0.51,1};
		texture = "\DZ\gear\navigation\data\map_govoffice_ca.paa";
		size = 10;
	};
	class BorderCrossing: NameIcon
	{
		color[] = {0.78,0.0,0.05,1.0};
		texture = "\DZ\gear\navigation\data\map_border_cross_ca.paa";
		size = 9;
	};
	class VegetationBroadleaf: NameIcon
	{
		color[] = {0.25,0.4,0.2,1.0};
		texture = "\DZ\gear\navigation\data\map_broadleaf_ca.paa";
		size = 9;
	};
	class VegetationFir: NameIcon
	{
		color[] = {0.25,0.4,0.2,1.0};
		texture = "\DZ\gear\navigation\data\map_fir_ca.paa";
		size = 9;
	};
	class VegetationPalm: NameIcon
	{
		color[] = {0.25,0.4,0.2,1.0};
		texture = "\DZ\gear\navigation\data\map_palm_ca.paa";
		size = 9;
	};
	class VegetationVineyard: NameIcon
	{
		color[] = {0.25,0.4,0.2,1.0};
		texture = "\DZ\gear\navigation\data\map_vineyard_ca.paa";
		size = 9;
	};
};
class MapDefaults
{
	ptsPerSquareSea = 8.0;
	ptsPerSquareTxt = 10.0;
	ptsPerSquareCLn = 10.0;
	ptsPerSquareExp = 10.0;
	ptsPerSquareCost = 10.0;
	ptsPerSquareFor = 9.0;
	ptsPerSquareForEdge = 15.0;
	ptsPerSquareRoad = 4.0;
	ptsPerSquareObj = 15.0;
	maxSatelliteAlpha = 0.0;
	alphaFadeStartScale = 1.0;
	alphaFadeEndScale = 1.0;
	userMapPath = "dz\gear\navigation\data\usermap";
	maxUserMapAlpha = 1.0;
	alphaUserMapFadeStartScale = 0.34;
	alphaUserMapFadeEndScale = 0.34;
	showCountourInterval = 1;
	colorLevels[] = {0.65,0.6,0.45,0.95};
	colorSea[] = {0.64,0.76,0.89,1.0};
	colorForest[] = {0.36,0.78,0.08,0.5};
	colorRocks[] = {0.5,0.5,0.5,0.5};
	colorCountlines[] = {0.85,0.8,0.65,1.0};
	colorMainCountlines[] = {0.45,0.4,0.25,1.0};
	colorCountlinesWater[] = {0.25,0.4,0.5,0.3};
	colorMainCountlinesWater[] = {0.25,0.4,0.5,0.9};
	colorPowerLines[] = {0.1,0.1,0.1,1.0};
	colorRailWay[] = {0.8,0.2,0.0,1.0};
	colorForestBorder[] = {0.4,0.8,0.0,1.0};
	colorRocksBorder[] = {0.5,0.5,0.5,1.0};
	colorOutside[] = {1.0,1.0,1.0,1.0};
	colorTracks[] = {0.78,0.66,0.34,1.0};
	colorRoads[] = {0.69,0.43,0.23,1.0};
	colorMainRoads[] = {0.53,0.35,0.0,1.0};
	colorTracksFill[] = {0.96,0.91,0.6,1.0};
	colorRoadsFill[] = {0.92,0.73,0.41,1.0};
	colorMainRoadsFill[] = {0.84,0.61,0.21,1.0};
	colorGrid[] = {0.15,0.15,0.05,0.9};
	colorGridMap[] = {0.25,0.25,0.1,0.75};
	fontNames = "gui/fonts/sdf_MetronBook24";
	sizeExNames = 0.04;
	colorNames[] = {0.0,0.0,0.0,1.0};
	fontGrid = "gui/fonts/sdf_MetronBook24";
	sizeExGrid = 0.01;
	fontLevel = "gui/fonts/sdf_MetronBook24";
	sizeExLevel = 0.01;
	colorMountPoint[] = {0.45,0.4,0.25,1.0};
	mapPointDensity = 0.12;
	text = "";
	fontLabel = "gui/fonts/sdf_MetronBook24";
	fontInfo = "gui/fonts/sdf_MetronBook24";
	class Legend
	{
		x = 0.05;
		y = 0.85;
		w = 0.4;
		h = 0.1;
		font = "gui/fonts/sdf_MetronBook24";
		sizeEx = 0.02;
		colorBackground[] = {1,1,1,0.5};
		color[] = {0,0,0,1};
	};
	class Bush
	{
		icon = "\dz\gear\navigation\data\map_bush_ca.paa";
		color[] = {0.4,0.8,0.0,0.8};
		size = 14;
		importance = "0.2 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class SmallTree
	{
		icon = "\dz\gear\navigation\data\map_smalltree_ca.paa";
		color[] = {0.4,0.8,0.0,0.8};
		size = 12;
		importance = "0.6 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Tree
	{
		icon = "\dz\gear\navigation\data\map_tree_ca.paa";
		color[] = {0.4,0.8,0.0,0.8};
		size = 12;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Rock
	{
		icon = "\dz\gear\navigation\data\map_rock_ca.paa";
		color[] = {0.1,0.1,0.1,0.8};
		size = 12;
		importance = "0.5 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fuelstation
	{
		icon = "\dz\gear\navigation\data\map_fuelstation_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "2 * 16 * 0.05";
		coefMin = 0.75;
		coefMax = 4;
	};
	class Lighthouse
	{
		icon = "\dz\gear\navigation\data\map_lighthouse_ca.paa";
		size = 14;
		color[] = {0,0,0,1};
		importance = "3 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Stack
	{
		icon = "\dz\gear\navigation\data\map_stack_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Transmitter
	{
		icon = "\dz\gear\navigation\data\map_transmitter_ca.paa";
		color[] = {0,0,0,1};
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Watertower
	{
		icon = "\dz\gear\navigation\data\map_watertower_ca.paa";
		color[] = {0.2,0.45,0.7,1};
		size = 16;
		importance = "1.2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Shipwreck
	{
		icon = "\dz\gear\navigation\data\map_shipwreck_ca.paa";
		color[] = {0,0,0,1};
		size = 16;
		importance = "1.2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Monument
	{
		icon = "\dz\gear\navigation\data\map_monument_ca.paa";
		color[] = {0,0,0,1};
		size = 20;
		importance = "1.2 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class BusStop
	{
		icon = "\dz\gear\navigation\data\map_busstop_ca.paa";
		color[] = {0.15,0.26,0.87,1};
		size = 12;
		importance = "1 * 10 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fountain
	{
		icon = "\dz\gear\navigation\data\map_fountain_ca.paa";
		color[] = {0.2,0.45,0.7,1};
		size = 15;
		importance = "1 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Waterpump
	{
		icon = "\dz\gear\navigation\data\map_waterpump_ca.paa";
		color[] = {0.2,0.45,0.7,1};
		size = 16;
		importance = "1 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Hospital
	{
		icon = "\dz\gear\navigation\data\map_hospital_ca.paa";
		color[] = {0.15,0.26,0.87,1};
		size = 17;
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Store
	{
		icon = "\dz\gear\navigation\data\map_store_ca.paa";
		color[] = {0.0,0.0,0.0,1};
		size = 20;
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Police
	{
		icon = "\dz\gear\navigation\data\map_police_ca.paa";
		color[] = {0.11,0.1,0.25,1};
		size = 20;
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class FireDep
	{
		icon = "\dz\gear\navigation\data\map_firedep_ca.paa";
		color[] = {0.764,0.0,0.0,1};
		size = 20;
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class TouristSign
	{
		icon = "\dz\gear\navigation\data\map_tsign_ca.paa";
		color[] = {0.0,0,0.0,1};
		size = 18;
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Tourism
	{
		icon = "\dz\gear\navigation\data\map_tourism_ca.paa";
		color[] = {0.0,0.0,0.0,1};
		size = 14;
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Cross
	{
		icon = "\dz\gear\navigation\data\map_cross_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "0.7 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Chapel
	{
		icon = "\dz\gear\navigation\data\map_chapel_ca.paa";
		color[] = {0,0,0,1};
		size = 16;
		importance = "1 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Church
	{
		icon = "\dz\gear\navigation\data\map_church_ca.paa";
		color[] = {0,0,0,1};
		size = 10;
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class ViewTower
	{
		icon = "\dz\gear\navigation\data\map_viewtower_ca.paa";
		color[] = {0,0,0,1};
		size = 16;
		importance = "2.5 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class TouristShelter
	{
		icon = "\dz\gear\navigation\data\map_tshelter_ca.paa";
		color[] = {0.0,0,0.0,1};
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Quay
	{
		icon = "\dz\gear\navigation\data\map_quay_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Bunker
	{
		icon = "\dz\gear\navigation\data\map_bunker_ca.paa";
		color[] = {0,0,0,1};
		size = 14;
		importance = "1.5 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fortress
	{
		icon = "\dz\gear\navigation\data\map_fortress_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "2 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Rocks
	{
		icon = "\dz\gear\navigation\data\map_rock_ca.paa";
		color[] = {0.1,0.1,0.1,0.8};
		size = 12;
		importance = "0.5 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Ruin
	{
		icon = "\dz\gear\navigation\data\map_ruin_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "1.2 * 16 * 0.05";
		coefMin = 1;
		coefMax = 4;
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ItemMap: Inventory_Base{};
	class ChernarusMap: ItemMap
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ChernarusMap0";
		descriptionShort = "$STR_CfgVehicles_ChernarusMap1";
		model = "\dz\gear\navigation\Map_chernarus.p3d";
		rotationFlags = 17;
		itemSize[] = {1,2};
		weight = 40;
		SingleUseActions[] = {574};
		world = "ChernarusPlus";
		selectionPaper = "paper";
		simulation = "ItemMap";
		absorbency = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},{0.7,{}},{0.5,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\gear\navigation\data\Map_chernarus_destruct.rvmat"}}};
				};
			};
		};
		class MapProperties: MapDefaults
		{
			scaleMin = 0.12;
			scaleMax = 0.6;
		};
	};
	class ChernarusMap_Open: ChernarusMap
	{
		model = "\dz\gear\navigation\Map_chernarus_open.p3d";
	};
	class Compass: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Compass0";
		descriptionShort = "$STR_CfgVehicles_Compass1";
		model = "\dz\gear\navigation\compass.p3d";
		animClass = "Compass";
		itemSize[] = {1,2};
		SingleUseActions[] = {501,538};
		ContinuousActions[] = {230};
		autoQuickbar = 1;
		weight = 190;
		simulation = "ItemCompass";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\navigation\data\compass.rvmat"}},{0.7,{}},{0.5,{"DZ\gear\navigation\data\compass_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\gear\navigation\data\compass_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class compass_open
				{
					soundSet = "compass_open_SoundSet";
					id = 204;
				};
				class compass_close
				{
					soundSet = "compass_close_SoundSet";
					id = 205;
				};
			};
		};
	};
	class OrienteeringCompass: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_OrienteeringCompass0";
		descriptionShort = "$STR_CfgVehicles_OrienteeringCompass1";
		model = "\dz\gear\navigation\compass_modern.p3d";
		animClass = "Compass";
		autoQuickbar = 1;
		itemSize[] = {1,2};
		weight = 130;
		simulation = "ItemCompass";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\navigation\data\compass_modern.rvmat"}},{0.7,{}},{0.5,{"DZ\gear\navigation\data\compass_modern_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\gear\navigation\data\compass_modern_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class wheel
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
	};
};
