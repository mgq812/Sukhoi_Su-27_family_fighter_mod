// Generated by unRap v1.06 by Kegetys

class CfgVehicles {
	class Air;	// External class reference
	class Plane;	// External class reference

	class Su_33 : Plane {
		side = 0;
		faction = "OPF_F";
		crew = "O_pilot_F";
		DriverAction = "pilot";
		displayName = "Su-33 Protatype";
		model = "\SU_33_Flanker_D\Su33_protatype.p3d";
		vehicleClass = "air";
		icon = "\SU_33_Flanker_D\paa\icon.paa";
		picture = "\SU_33_Flanker_D\paa\pic.paa";
		unitInfoType = "UnitInfoAirplane";
		accuracy = 0.2;
		scope = 2;
		nameSound = "aircraft";
		camouflage = 10;
		Audible = 6;
		mapSize = 20;
		cost = 100000000;
		type = 2;
		threat[] = {0.7, 0.7, 1};
		armor = 60;
		damageResistance = 0.00336;
		armorStructured = 1;
		laserScanner = 1;
		landingAoa = "rad 10";
		landingSpeed = 215;
		gearRetracting = 1;
		maxSpeed = 2100;
		supplyRadius = 13;
		memoryPointGun = "machinegun";
		memoryPointLRocket = "L raketa";
		memoryPointRRocket = "P raketa";
		weapons[] = {};
		magazines[] = {};
		aileronSensitivity = 1.2;
		elevatorSensitivity = 1.0;
		envelope[] = {0.0, 0.4, 1.9, 4.0, 6.8, 8.3, 8.5, 7.8, 6.2, 4.6, 3.7, 2.8, 2.3, 2.0, 1.8, 1.5, 1.2, 0.8, 0.5, 0.3, 0.2, 0.0};

		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "light_1_1_source";
				direction = "light_1_1_target";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
		};

		class MarkerLights {
			class RedStill {
				name = "cerveny pozicni";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.05, 0.005, 0.005, 1};
				brightness = 0.003;
				blinking = 0;
			};

			class GreenStill {
				name = "zeleny pozicni";
				color[] = {0.1, 1.0, 0.1, 1};
				ambient[] = {0.005, 0.05, 0.005, 1};
				brightness = 0.003;
				blinking = 0;
			};

			class WhiteStill {
				name = "bily pozicni";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.01, 0.01, 0.01, 1};
				brightness = 0.003;
				blinking = 0;
			};
		};

		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"js_jc_su35\sounds\ext-jetair-engine-low1",
					2.5118899,
					1,
					1600
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"js_jc_su35\sounds\ext-jetair-engine-high3",
					2.5118899,
					1.2,
					1800
				};
				frequency="1";
				volume="camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"js_jc_su35\sounds\ext-jetair-forsage1",
					1.7782794,
					0.99000001,
					2000
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					0.56234097,
					1,
					150
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"js_jc_su35\sounds\int-av8b-engine-low",
					0.56234133,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"js_jc_su35\sounds\int-av8b-engine",
					0.56234133,
					1.2
				};
				frequency="1";
				volume="(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"js_jc_su35\sounds\int-av8b-forsage-1",
					0.56234133,
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					0.31622776,
					1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
		};
		hiddenselections[] = {};

		class AnimationSources {
			class rotorL {
				animPeriod = 1;
			};

			class rotorR : rotorL {};

			class wing {
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};

			class wing_r : wing {};

			class wing_l : wing {};

			class elevator_r1 {
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};

			class elevator_l1 : elevator_r1 {};

			class piston {
				source = "user";
				animPeriod = 3;
			};

			class hook {
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};

			class ABcut {
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
		};

		class UserActions {
			class ABon {
				displayName = "Enable Burners";
				position = "pos player";
				radius = 20;
				onlyforplayer = 0;
				condition = "this animationPhase ""ABcut"" == 1 and player in this and isengineon this";
				statement = "this animate [""ABcut"",0];";
			};

			class ABoff {
				displayName = "Burners Off";
				position = "pos player";
				radius = 20;
				onlyforplayer = 0;
				condition = "this animationPhase ""ABcut"" == 0 and player in this and isengineon this";
				statement = "this animate [""ABcut"",1];";
			};

			class folding_wing {
				displayName = "Fold Wing";
				position = "pos player";
				radius = 20;
				condition = "this animationphase ""wing"" == 0 and alive this and count (crew this) > 0 and speed this < 30";
				statement = "this animate [""wing"",1];";
				onlyforplayer = 0;
			};

			class open_wing {
				displayName = "Open Wing";
				position = "pos player";
				radius = 20;
				condition = "this animationphase ""wing"" == 1 and alive this and count (crew this) > 0 and speed this < 30";
				statement = "this animate [""wing"",0];";
				onlyforplayer = 0;
			};
		};

		class EventHandlers
		{
			init = "_this execVM ""\a3\data_f\ParticleEffects\SCRIPTS\init.sqf"",_this execVM ""\sacsu33\sqs\init2.sqf"",[_this select 0]exec ""SU_33_Flanker_D\sqs\init.sqs"",[_this select 0]exec ""SU_33_Flanker_D\sqs\wing.sqs"",[_this select 0] execVM ""SU_33_Flanker_D\sqs\AircraftEffects.sqf"",_this exec ""SU_33_Flanker_D\sqs\ejectstart.sqs"",_this execVM ""\a3\data_f\ParticleEffects\SCRIPTS\misc\aircraftvapour.sqf""";
			fired = "[_this] exec ""\SU_33_Flanker_D\sqs\fireGsh.sqs"",_this call BIS_Effects_EH_Fired";
		};

		class Library {
			libTextDesc = "The Sukhoi Su-33 (NATO reporting name Flanker-D) is a carrier-based multi-role fighter aircraft produced by Russian firm Sukhoi beginning in 1982. \nThe main differences from the Su-27 are that the Su-33 can operate from aircraft carriers and is capable of aerial refueling. \nThe wings were fitted with power-assisted folding, and the vertical tails were shortened to allow the fighter to fit in the typically crowded hangars of an aircraft carrier. The rear radome was shortened and reshaped to allow for the tail hook, as well as to save space inside the hangars.";
		};
	};
};
