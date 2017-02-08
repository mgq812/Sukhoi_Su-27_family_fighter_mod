class CfgWeapons
{
	class CannonCore;
	class MissileLauncher;
	class RocketPods;
	class H_PilotHelmetFighter_O;
	class Bomb_03_Plane_CAS_02_F;
	class Bomb_04_Plane_CAS_01_F;
	//class gatling_30mm;
	class gatling_30mm;
	//class Cannon_30mm_Plane_CAS_02_F;
	class Su_GSh301: gatling_30mm
	{
		displayName="Gsh-301 30mm";
		displayNameMagazine="Gsh-301 30mm";
		shortNameMagazine="Gsh-301 30mm";
		cursor="EmptyCursor";
		cursorAim="";
		burst=2;
		reloadTime=0.1;
		dispersion=0.0024999999;
		soundContinuous=0;
		showToPlayer=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		minRange=1;
		minRangeProbab=0.0099999998;
		midRange=2;
		midRangeProbab=0.0099999998;
		maxRange=3;
		maxRangeProbab=0.0099999998;
		magazines[]=
		{
			"Su_300Rnd_30mm_GSh301"
		};
	};
	class Su_GSh301_old: CannonCore
	{
		scope=2;
		displayName="Gsh-301 30mm";
		displayNameMagazine="Gsh-301 30mm";
		shortNameMagazine="Gsh-301 30mm";
		nameSound="cannon";
		cursor="EmptyCursor";
		cursorAim="mg";
		showAimCursorInternal = true;
		magazines[]=
		{
			"Su_300Rnd_30mm_GSh301"
		};
		canLock=2;
		ballisticsComputer=2;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun1";
				positionName="nosegun";
				directionName="nosegun_dir";
			};
		};
		class manual: CannonCore
		{
			displayName="Gsh-301 30mm";
			autoFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					//"A3\sounds_f_arsenal\weapons_vehicles\gatling_30mm\30mm_02_burst",
					"\Sukhoi_Su33\sound\gsh30_1",
					1,
					1,
					700
				};
				begin2[]=
				{
					//"A3\sounds_f_arsenal\weapons_vehicles\gatling_30mm\30mm_02_burst",
					"\Sukhoi_Su33\sound\gsh30_2",
					1,
					1,
					700
				};
				soundBegin[]=
				{
					"begin1",
					1,
					"begin2",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
			soundBurst=true
			reloadTime=0.1;
			dispersion=0.0024999999;
			soundContinuous=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
			textureType="fullAuto";
		};
		class close: manual
		{
			showToPlayer=0;
			burst=15;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=4;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.40000001;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
	};
	class Su33_kh29_Launcher: MissileLauncher
	{
		canLock=2;
		autoFire=0;
		displayName="Kh-29 Kedge";
		displayNameMagazine="Kh-29 Kedge";
		shortNameMagazine="Kh-29";
		magazines[]=
		{
			"Su33_kh29_x4"
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		nameSound="MissileLauncher";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_1",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			1,
			1.1,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.316228,
			2.5
		};
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		weaponLockDelay=3;
		textureType="fullAuto";
		minRange=300;
		minRangeProbab=0.25;
		midRange=2500;
		midRangeProbab=0.89999998;
		maxRange=9000;
		maxRangeProbab=0.0099999998;
	};
	class Su_kab500K_Laucher: Bomb_04_Plane_CAS_01_F
	{
		displayName="KAB-500K";
		displayNameMagazine="KAB-500K";
		shortNameMagazine="KAB-500K";
	};
	class Su_fab_250_Laucher: Bomb_04_Plane_CAS_01_F
	{
		displayName="BOMB LAUNCHER";
		displayNameMagazine="FAB-250";
		shortNameMagazine="FAB-250";
		optics = true;
		magazines[]=
		{
			"Su_6Rnd_fab_250"
		};
		class Viewoptics
		{
			initAngleX = 0;
			minAngleX = -90;
			maxAngleX = 90;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			initFov = 0.18;
			minFov = 0.18;
			maxFov = 0.4;
			opticsModel = "\SU_33_Flanker_D\wep\optika.p3d";
			memoryPointCamera = "eye";
		};
	};
	class Su_R73Launcher: MissileLauncher
	{
		canLock=2;
		autoFire=0;
		displayName="R-73 Archer";
		displayNameMagazine="R-73 Archer";
		shortNameMagazine="R-73 Archer";
		cursorAim="EmptyCursor";
		cursor="EmptyCursor";
		minRange=300;
		minRangeProbab=0.025;
		maxRange=9000;
		maxRangeProbab=0.0099999998;
		sound[]={"A3\Sounds_F\weapons\Rockets\rocket_fly_2",db+47,1};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.316228,
			2.5
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		magazines[]=
		{
			"Su_6Rnd_R73",
			"Su_2Rnd_R73M1_AA",
		};
		holdsterAnimValue=3;
		weaponLockSystem="2 + 16 + 4";
		weaponLockDelay=3;
		textureType="semi";
	};
	class Su_R27Launcher: Su_R73Launcher
	{
		displayName="R-27 Alamo";
		displayNameMagazine="R-27 Alamo";
		shortNameMagazine="R-27 Alamo";
		magazines[]=
		{
			"Su_2Rnd_R27R",
			"Su_2Rnd_R27EA"
		};
		reloadTime=0.30000001;
	};
	class Su_R77Launcher: Su_R73Launcher
	{
		displayName="R-77 Adder";
		displayNameMagazine="R-77 Adder";
		shortNameMagazine="R-77 Adder";
		magazines[]=
		{
			"Su_4Rnd_R77"
		};
		reloadTime=0.30000001;
	};
	class Su_S8Laucher: RocketPods
	{
		displayName="S8 80mm Rockets";
		magazines[]=
		{
			"Su_80Rnd_S8T"
		};
		cursor="Air_Dot";
		cursorSize=1;
	};
};
