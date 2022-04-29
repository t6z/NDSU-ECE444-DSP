#define K 100 
float G[4] = {0.741395, 0.549661, 0.302105, 0.091229};
float B[4][K] = {
	{
	1.975408,	-1.975408,	1.975456,
		-1.975456,	1.975551,	-1.975551,	1.975693,
		-1.975693,	1.975882,	-1.975882,	1.976116,
		-1.976116,	1.976396,	-1.976396,	1.976719,
		-1.976719,	1.977086,	-1.977086,	1.977493,
		-1.977493,	1.977941,	-1.977941,	1.978426,
		-1.978426,	1.978948,	-1.978948,	-1.979504,
		1.979504,	1.980092,	-1.980092,	1.980711,
		-1.980711,	1.981356,	-1.981356,	-1.982027,
		1.982027,	1.982721,	-1.982721,	1.983434,
		-1.983434,	-1.984165,	1.984165,	1.984910,
		-1.984910,	1.985666,	-1.985666,	1.986431,
		-1.986431,	1.987201,	-1.987201,	1.987973,
		-1.987973,	1.988745,	-1.988745,	1.989514,
		-1.989514,	1.990275,	-1.990275,	1.991027,
		-1.991027,	1.991766,	-1.991766,	1.992489,
		-1.992489,	1.993194,	-1.993194,	1.993877,
		-1.993877,	1.994536,	-1.994536,	1.995167,
		-1.995167,	1.995770,	-1.995770,	-1.996340,
		1.996340,	1.996876,	-1.996876,	1.997376,
		-1.997376,	-1.997837,	1.997837,	1.998257,
		-1.998257,	1.998636,	-1.998636,	-1.998970,
		1.998970,	1.999260,	-1.999260,	-1.999503,
		1.999503,	-1.999698,	1.999698,	-1.999846,
		1.999846,	-1.999944,	1.999944,	-1.999994,
		1.999994
	},
	{
	-1.902232,	1.902232,	-1.902411,
		1.902411,	-1.902768,	1.902768,	-1.903303,
		1.903303,	-1.904013,	1.904013,	-1.904897,
		1.904897,	-1.905952,	1.905952,	-1.907173,
		1.907173,	-1.908559,	1.908559,	-1.910103,
		1.910103,	-1.911802,	1.911802,	-1.913649,
		1.913649,	-1.915638,	1.915638,	-1.917764,
		1.917764,	-1.920018,	1.920018,	-1.922393,
		1.922393,	-1.924882,	1.924882,	-1.927475,
		1.927475,	-1.930164,	1.930164,	-1.932938,
		1.932938,	-1.935788,	1.935788,	-1.938704,
		1.938704,	-1.941675,	1.941675,	-1.944689,
		1.944689,	-1.947736,	1.947736,	-1.950803,
		1.950803,	-1.953878,	1.953878,	-1.956949,
		1.956949,	-1.960005,	1.960005,	-1.963032,
		1.963032,	-1.966018,	1.966018,	-1.968950,
		1.968950,	-1.971816,	1.971816,	-1.974604,
		1.974604,	-1.977301,	1.977301,	-1.979896,
		1.979896,	-1.982377,	1.982377,	-1.984732,
		1.984732,	-1.986952,	1.986952,	-1.989026,
		1.989026,	-1.990944,	1.990944,	-1.992697,
		1.992697,	-1.994277,	1.994277,	-1.995677,
		1.995677,	-1.996890,	1.996890,	-1.997910,
		1.997910,	-1.998731,	1.998731,	-1.999351,
		1.999351,	-1.999766,	1.999766,	-1.999974,
		1.999974
	},
	{
	-1.618399,	1.618399,	1.618951,
		-1.618951,	1.620053,	-1.620053,	1.621705,
		-1.621705,	-1.623905,	1.623905,	1.626652,
		-1.626652,	1.629942,	-1.629942,	1.633773,
		-1.633773,	1.638140,	-1.638140,	1.643039,
		-1.643039,	1.648463,	-1.648463,	1.654407,
		-1.654407,	-1.660862,	1.660862,	-1.667820,
		1.667820,	1.675271,	-1.675271,	1.683202,
		-1.683202,	1.691601,	-1.691601,	-1.700452,
		1.700452,	-1.709738,	1.709738,	-1.719441,
		1.719441,	-1.729539,	1.729539,	-1.740008,
		1.740008,	1.750822,	-1.750822,	1.761951,
		-1.761951,	1.773363,	-1.773363,	1.785024,
		-1.785024,	1.796893,	-1.796893,	1.808931,
		-1.808931,	-1.821090,	1.821090,	1.833323,
		-1.833323,	-1.845578,	1.845578,	1.857800,
		-1.857800,	-1.869929,	1.869929,	1.881906,
		-1.881906,	1.893666,	-1.893666,	1.905144,
		-1.905144,	-1.916272,	1.916272,	-1.926981,
		1.926981,	-1.937203,	1.937203,	-1.946869,
		1.946869,	-1.955911,	1.955911,	1.964265,
		-1.964265,	1.971868,	-1.971868,	-1.978662,
		1.978662,	1.984593,	-1.984593,	-1.989613,
		1.989613,	-1.993680,	1.993680,	-1.996762,
		1.996762,	-1.998831,	1.998831,	-1.999870,
		1.999870
	},
	{
	0.618400,	-0.618400,	0.618952,
		-0.618952,	0.620059,	-0.620059,	-0.621725,
		0.621725,	0.623958,	-0.623958,	0.626765,
		-0.626765,	0.630160,	-0.630160,	0.634156,
		-0.634156,	0.638770,	-0.638770,	0.644023,
		-0.644023,	-0.649936,	0.649936,	0.656537,
		-0.656537,	-0.663855,	0.663855,	0.671923,
		-0.671923,	-0.680779,	0.680779,	-0.690465,
		0.690465,	0.701028,	-0.701028,	-0.712520,
		0.712520,	0.725001,	-0.725001,	0.738534,
		-0.738534,	0.753192,	-0.753192,	0.769055,
		-0.769055,	0.786212,	-0.786212,	0.804760,
		-0.804760,	-0.824811,	0.824811,	-0.846482,
		0.846482,	0.869909,	-0.869909,	0.895238,
		-0.895238,	0.922629,	-0.922629,	-0.952259,
		0.952259,	-0.984319,	0.984319,	1.019014,
		-1.019014,	1.056561,	-1.056561,	1.097189,
		-1.097189,	-1.141125,	1.141125,	1.188592,
		-1.188592,	1.239787,	-1.239787,	1.294860,
		-1.294860,	1.353877,	-1.353877,	-1.416771,
		1.416771,	-1.483277,	1.483277,	1.552846,
		-1.552846,	1.624539,	-1.624539,	-1.696923,
		1.696923,	1.767977,	-1.767977,	-1.835054,
		1.835054,	-1.894957,	1.894957,	-1.944180,
		1.944180,	-1.979328,	1.979328,	-1.997670,
		1.997670
	}
};

float A[4][K][2] = {
	{
		{1.975243,	0.999855},
		{-1.975243,	0.999855},
		{1.975004,	0.999565},
		{-1.975004,	0.999565},
		{1.974813,	0.999275},
		{-1.974813,	0.999275},
		{1.974669,	0.998986},
		{-1.974669,	0.998986},
		{1.974573,	0.998697},
		{-1.974573,	0.998697},
		{1.974524,	0.998410},
		{-1.974524,	0.998410},
		{1.974521,	0.998125},
		{-1.974521,	0.998125},
		{1.974564,	0.997841},
		{-1.974564,	0.997841},
		{1.974651,	0.997559},
		{-1.974651,	0.997559},
		{1.974781,	0.997279},
		{-1.974781,	0.997279},
		{1.974954,	0.997002},
		{-1.974954,	0.997002},
		{1.975167,	0.996727},
		{-1.975167,	0.996727},
		{1.975419,	0.996455},
		{-1.975419,	0.996455},
		{1.975708,	0.996187},
		{-1.975708,	0.996187},
		{1.976032,	0.995921},
		{-1.976032,	0.995921},
		{1.976390,	0.995660},
		{-1.976390,	0.995660},
		{1.976779,	0.995402},
		{-1.976779,	0.995402},
		{1.977197,	0.995148},
		{-1.977197,	0.995148},
		{1.977642,	0.994899},
		{-1.977642,	0.994899},
		{1.978111,	0.994654},
		{-1.978111,	0.994654},
		{1.978602,	0.994415},
		{-1.978602,	0.994415},
		{1.979112,	0.994180},
		{-1.979112,	0.994180},
		{1.979638,	0.993951},
		{-1.979638,	0.993951},
		{1.980178,	0.993727},
		{-1.980178,	0.993727},
		{1.980730,	0.993510},
		{-1.980730,	0.993510},
		{1.981289,	0.993298},
		{-1.981289,	0.993298},
		{1.981855,	0.993092},
		{-1.981855,	0.993092},
		{1.982422,	0.992894},
		{-1.982422,	0.992894},
		{1.982990,	0.992702},
		{-1.982990,	0.992702},
		{1.983555,	0.992517},
		{-1.983555,	0.992517},
		{1.984114,	0.992339},
		{-1.984114,	0.992339},
		{1.984665,	0.992168},
		{-1.984665,	0.992168},
		{1.985204,	0.992006},
		{-1.985204,	0.992006},
		{-1.985730,	0.991851},
		{1.985730,	0.991851},
		{1.986240,	0.991704},
		{-1.986240,	0.991704},
		{1.986731,	0.991565},
		{-1.986731,	0.991565},
		{1.987201,	0.991435},
		{-1.987201,	0.991435},
		{1.987647,	0.991313},
		{-1.987647,	0.991313},
		{1.988068,	0.991200},
		{-1.988068,	0.991200},
		{1.988462,	0.991096},
		{-1.988462,	0.991096},
		{1.988826,	0.991001},
		{-1.988826,	0.991001},
		{-1.989158,	0.990915},
		{1.989158,	0.990915},
		{1.989458,	0.990839},
		{-1.989458,	0.990839},
		{1.989724,	0.990771},
		{-1.989724,	0.990771},
		{1.989954,	0.990713},
		{-1.989954,	0.990713},
		{1.990148,	0.990665},
		{-1.990148,	0.990665},
		{1.990304,	0.990626},
		{-1.990304,	0.990626},
		{1.990421,	0.990597},
		{-1.990421,	0.990597},
		{1.990500,	0.990578},
		{-1.990500,	0.990578},
		{1.990539,	0.990568},
		{-1.990539,	0.990568}
	},
	{
		{-1.901888,	0.999724},
		{1.901888,	0.999724},
		{-1.901541,	0.999172},
		{1.901541,	0.999172},
		{-1.901374,	0.998620},
		{1.901374,	0.998620},
		{-1.901384,	0.998070},
		{1.901384,	0.998070},
		{-1.901571,	0.997520},
		{1.901571,	0.997520},
		{-1.901932,	0.996972},
		{1.901932,	0.996972},
		{-1.902464,	0.996426},
		{1.902464,	0.996426},
		{-1.903164,	0.995881},
		{1.903164,	0.995881},
		{-1.904028,	0.995339},
		{1.904028,	0.995339},
		{-1.905053,	0.994799},
		{1.905053,	0.994799},
		{-1.906234,	0.994262},
		{1.906234,	0.994262},
		{-1.907564,	0.993728},
		{1.907564,	0.993728},
		{-1.909039,	0.993197},
		{1.909039,	0.993197},
		{-1.910651,	0.992671},
		{1.910651,	0.992671},
		{-1.912395,	0.992148},
		{1.912395,	0.992148},
		{-1.914263,	0.991630},
		{1.914263,	0.991630},
		{-1.916247,	0.991117},
		{1.916247,	0.991117},
		{-1.918339,	0.990609},
		{1.918339,	0.990609},
		{1.920530,	0.990107},
		{-1.920530,	0.990107},
		{-1.922812,	0.989612},
		{1.922812,	0.989612},
		{-1.925174,	0.989123},
		{1.925174,	0.989123},
		{-1.927607,	0.988642},
		{1.927607,	0.988642},
		{-1.930101,	0.988169},
		{1.930101,	0.988169},
		{-1.932645,	0.987705},
		{1.932645,	0.987705},
		{-1.935229,	0.987249},
		{1.935229,	0.987249},
		{-1.937842,	0.986804},
		{1.937842,	0.986804},
		{-1.940471,	0.986369},
		{1.940471,	0.986369},
		{-1.943106,	0.985945},
		{1.943106,	0.985945},
		{-1.945736,	0.985532},
		{1.945736,	0.985532},
		{-1.948348,	0.985133},
		{1.948348,	0.985133},
		{-1.950931,	0.984746},
		{1.950931,	0.984746},
		{-1.953474,	0.984373},
		{1.953474,	0.984373},
		{-1.955964,	0.984015},
		{1.955964,	0.984015},
		{-1.958391,	0.983672},
		{1.958391,	0.983672},
		{-1.960742,	0.983344},
		{1.960742,	0.983344},
		{-1.963008,	0.983034},
		{1.963008,	0.983034},
		{1.965176,	0.982740},
		{-1.965176,	0.982740},
		{-1.967238,	0.982465},
		{1.967238,	0.982465},
		{-1.969183,	0.982208},
		{1.969183,	0.982208},
		{-1.971002,	0.981970},
		{1.971002,	0.981970},
		{1.972685,	0.981752},
		{-1.972685,	0.981752},
		{-1.974225,	0.981554},
		{1.974225,	0.981554},
		{-1.975614,	0.981377},
		{1.975614,	0.981377},
		{1.976845,	0.981221},
		{-1.976845,	0.981221},
		{-1.977912,	0.981086},
		{1.977912,	0.981086},
		{1.978809,	0.980973},
		{-1.978809,	0.980973},
		{1.979533,	0.980883},
		{-1.979533,	0.980883},
		{1.980078,	0.980815},
		{-1.980078,	0.980815},
		{1.980444,	0.980769},
		{-1.980444,	0.980769},
		{1.980627,	0.980746},
		{-1.980627,	0.980746}
	},
	{
		{1.617787,	0.999553},
		{-1.617787,	0.999553},
		{1.617615,	0.998659},
		{-1.617615,	0.998659},
		{1.617991,	0.997765},
		{-1.617991,	0.997765},
		{1.618914,	0.996869},
		{-1.618914,	0.996869},
		{1.620380,	0.995971},
		{-1.620380,	0.995971},
		{1.622385,	0.995069},
		{-1.622385,	0.995069},
		{1.624927,	0.994163},
		{-1.624927,	0.994163},
		{1.628000,	0.993252},
		{-1.628000,	0.993252},
		{1.631598,	0.992335},
		{-1.631598,	0.992335},
		{1.635715,	0.991412},
		{-1.635715,	0.991412},
		{1.640345,	0.990481},
		{-1.640345,	0.990481},
		{1.645480,	0.989542},
		{-1.645480,	0.989542},
		{1.651110,	0.988595},
		{-1.651110,	0.988595},
		{1.657226,	0.987639},
		{-1.657226,	0.987639},
		{1.663816,	0.986673},
		{-1.663816,	0.986673},
		{1.670867,	0.985697},
		{-1.670867,	0.985697},
		{1.678366,	0.984712},
		{-1.678366,	0.984712},
		{1.686297,	0.983716},
		{-1.686297,	0.983716},
		{1.694642,	0.982711},
		{-1.694642,	0.982711},
		{1.703382,	0.981696},
		{-1.703382,	0.981696},
		{1.712495,	0.980672},
		{-1.712495,	0.980672},
		{1.721957,	0.979639},
		{-1.721957,	0.979639},
		{1.731742,	0.978598},
		{-1.731742,	0.978598},
		{-1.741822,	0.977550},
		{1.741822,	0.977550},
		{1.752165,	0.976497},
		{-1.752165,	0.976497},
		{1.762737,	0.975440},
		{-1.762737,	0.975440},
		{-1.773502,	0.974380},
		{1.773502,	0.974380},
		{1.784419,	0.973321},
		{-1.784419,	0.973321},
		{1.795446,	0.972263},
		{-1.795446,	0.972263},
		{1.806538,	0.971211},
		{-1.806538,	0.971211},
		{1.817646,	0.970167},
		{-1.817646,	0.970167},
		{-1.828720,	0.969134},
		{1.828720,	0.969134},
		{1.839704,	0.968116},
		{-1.839704,	0.968116},
		{1.850544,	0.967117},
		{-1.850544,	0.967117},
		{1.861181,	0.966141},
		{-1.861181,	0.966141},
		{1.871556,	0.965192},
		{-1.871556,	0.965192},
		{1.881607,	0.964276},
		{-1.881607,	0.964276},
		{1.891274,	0.963397},
		{-1.891274,	0.963397},
		{1.900494,	0.962560},
		{-1.900494,	0.962560},
		{-1.909207,	0.961771},
		{1.909207,	0.961771},
		{1.917353,	0.961033},
		{-1.917353,	0.961033},
		{1.924873,	0.960352},
		{-1.924873,	0.960352},
		{-1.931713,	0.959734},
		{1.931713,	0.959734},
		{1.937821,	0.959181},
		{-1.937821,	0.959181},
		{-1.943151,	0.958699},
		{1.943151,	0.958699},
		{1.947660,	0.958291},
		{-1.947660,	0.958291},
		{1.951313,	0.957961},
		{-1.951313,	0.957961},
		{1.954079,	0.957710},
		{-1.954079,	0.957710},
		{1.955936,	0.957542},
		{-1.955936,	0.957542},
		{1.956868,	0.957458},
		{-1.956868,	0.957458}
	},
	{
		{0.618064,	0.999724},
		{-0.618064,	0.999724},
		{-0.618444,	0.999170},
		{0.618444,	0.999170},
		{-0.619375,	0.998613},
		{0.619375,	0.998613},
		{0.620862,	0.998050},
		{-0.620862,	0.998050},
		{0.622910,	0.997479},
		{-0.622910,	0.997479},
		{0.625526,	0.996898},
		{-0.625526,	0.996898},
		{0.628721,	0.996302},
		{-0.628721,	0.996302},
		{-0.632507,	0.995690},
		{0.632507,	0.995690},
		{0.636900,	0.995059},
		{-0.636900,	0.995059},
		{-0.641917,	0.994405},
		{0.641917,	0.994405},
		{-0.647580,	0.993725},
		{0.647580,	0.993725},
		{0.653912,	0.993016},
		{-0.653912,	0.993016},
		{0.660941,	0.992272},
		{-0.660941,	0.992272},
		{-0.668696,	0.991490},
		{0.668696,	0.991490},
		{0.677212,	0.990665},
		{-0.677212,	0.990665},
		{-0.686527,	0.989791},
		{0.686527,	0.989791},
		{0.696683,	0.988863},
		{-0.696683,	0.988863},
		{0.707728,	0.987873},
		{-0.707728,	0.987873},
		{-0.719715,	0.986814},
		{0.719715,	0.986814},
		{0.732701,	0.985679},
		{-0.732701,	0.985679},
		{0.746750,	0.984456},
		{-0.746750,	0.984456},
		{0.761934,	0.983137},
		{-0.761934,	0.983137},
		{0.778329,	0.981708},
		{-0.778329,	0.981708},
		{-0.796022,	0.980155},
		{0.796022,	0.980155},
		{-0.815105,	0.978465},
		{0.815105,	0.978465},
		{0.835683,	0.976617},
		{-0.835683,	0.976617},
		{-0.857865,	0.974593},
		{0.857865,	0.974593},
		{0.881774,	0.972369},
		{-0.881774,	0.972369},
		{0.907541,	0.969919},
		{-0.907541,	0.969919},
		{0.935305,	0.967213},
		{-0.935305,	0.967213},
		{0.965214,	0.964216},
		{-0.965214,	0.964216},
		{-0.997422,	0.960891},
		{0.997422,	0.960891},
		{-1.032086,	0.957194},
		{1.032086,	0.957194},
		{1.069361,	0.953076},
		{-1.069361,	0.953076},
		{1.109393,	0.948484},
		{-1.109393,	0.948484},
		{1.152305,	0.943361},
		{-1.152305,	0.943361},
		{1.198183,	0.937647},
		{-1.198183,	0.937647},
		{1.247054,	0.931285},
		{-1.247054,	0.931285},
		{1.298854,	0.924220},
		{-1.298854,	0.924220},
		{-1.353389,	0.916413},
		{1.353389,	0.916413},
		{1.410287,	0.907853},
		{-1.410287,	0.907853},
		{-1.468938,	0.898569},
		{1.468938,	0.898569},
		{-1.528430,	0.888656},
		{1.528430,	0.888656},
		{1.587498,	0.878302},
		{-1.587498,	0.878302},
		{1.644488,	0.867807},
		{-1.644488,	0.867807},
		{1.697373,	0.857607},
		{-1.697373,	0.857607},
		{1.743841,	0.848263},
		{-1.743841,	0.848263},
		{1.781483,	0.840422},
		{-1.781483,	0.840422},
		{1.808061,	0.834735},
		{-1.808061,	0.834735},
		{1.821830,	0.831738},
		{-1.821830,	0.831738}
	}
};

float buf[K][2] = { 
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}
};
