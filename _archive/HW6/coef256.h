#define K 256 
float G[4] = {0.741332, 0.549572, 0.302026, 0.091214};
float B[4][K] = {
	{
	1.975382,	-1.975382,	1.975389,
		-1.975389,	1.975403,	-1.975403,	1.975425,
		-1.975425,	1.975454,	-1.975454,	1.975491,
		-1.975491,	1.975534,	-1.975534,	1.975585,
		-1.975585,	1.975643,	-1.975643,	1.975708,
		-1.975708,	1.975780,	-1.975780,	1.975859,
		-1.975859,	1.975945,	-1.975945,	1.976038,
		-1.976038,	1.976138,	-1.976138,	1.976245,
		-1.976245,	1.976359,	-1.976359,	-1.976479,
		1.976479,	1.976606,	-1.976606,	1.976740,
		-1.976740,	1.976880,	-1.976880,	1.977026,
		-1.977026,	1.977179,	-1.977179,	1.977338,
		-1.977338,	1.977504,	-1.977504,	1.977675,
		-1.977675,	1.977852,	-1.977852,	1.978035,
		-1.978035,	1.978224,	-1.978224,	1.978419,
		-1.978419,	1.978619,	-1.978619,	1.978825,
		-1.978825,	1.979035,	-1.979035,	1.979251,
		-1.979251,	1.979472,	-1.979472,	1.979698,
		-1.979698,	1.979929,	-1.979929,	1.980165,
		-1.980165,	1.980405,	-1.980405,	1.980649,
		-1.980649,	1.980898,	-1.980898,	1.981150,
		-1.981150,	1.981407,	-1.981407,	1.981667,
		-1.981667,	1.981932,	-1.981932,	1.982199,
		-1.982199,	1.982470,	-1.982470,	1.982744,
		-1.982744,	1.983021,	-1.983021,	1.983301,
		-1.983301,	1.983584,	-1.983584,	1.983869,
		-1.983869,	1.984157,	-1.984157,	1.984446,
		-1.984446,	1.984738,	-1.984738,	1.985032,
		-1.985032,	1.985327,	-1.985327,	1.985624,
		-1.985624,	-1.985922,	1.985922,	1.986221,
		-1.986221,	1.986521,	-1.986521,	1.986822,
		-1.986822,	1.987123,	-1.987123,	1.987425,
		-1.987425,	1.987727,	-1.987727,	1.988029,
		-1.988029,	1.988331,	-1.988331,	1.988633,
		-1.988633,	1.988934,	-1.988934,	1.989235,
		-1.989235,	1.989534,	-1.989534,	1.989833,
		-1.989833,	1.990130,	-1.990130,	1.990426,
		-1.990426,	1.990720,	-1.990720,	1.991013,
		-1.991013,	1.991304,	-1.991304,	1.991592,
		-1.991592,	-1.991878,	1.991878,	1.992162,
		-1.992162,	1.992443,	-1.992443,	1.992721,
		-1.992721,	-1.992997,	1.992997,	1.993269,
		-1.993269,	1.993538,	-1.993538,	1.993803,
		-1.993803,	-1.994065,	1.994065,	-1.994322,
		1.994322,	1.994576,	-1.994576,	1.994826,
		-1.994826,	1.995071,	-1.995071,	1.995312,
		-1.995312,	1.995548,	-1.995548,	1.995780,
		-1.995780,	1.996006,	-1.996006,	1.996228,
		-1.996228,	1.996445,	-1.996445,	1.996656,
		-1.996656,	1.996861,	-1.996861,	1.997062,
		-1.997062,	1.997256,	-1.997256,	1.997445,
		-1.997445,	1.997627,	-1.997627,	-1.997804,
		1.997804,	1.997974,	-1.997974,	1.998138,
		-1.998138,	-1.998296,	1.998296,	1.998448,
		-1.998448,	1.998592,	-1.998592,	1.998731,
		-1.998731,	1.998862,	-1.998862,	-1.998986,
		1.998986,	-1.999104,	1.999104,	1.999215,
		-1.999215,	-1.999318,	1.999318,	-1.999415,
		1.999415,	1.999504,	-1.999504,	-1.999586,
		1.999586,	-1.999661,	1.999661,	-1.999728,
		1.999728,	-1.999788,	1.999788,	-1.999841,
		1.999841,	-1.999886,	1.999886,	-1.999924,
		1.999924,	-1.999954,	1.999954,	-1.999976,
		1.999976,	-1.999992,	1.999992,	-1.999999,
		1.999999
	},
	{
	-1.902131,	1.902131,	-1.902159,
		1.902159,	-1.902213,	1.902213,	-1.902295,
		1.902295,	-1.902404,	1.902404,	-1.902541,
		1.902541,	-1.902705,	1.902705,	-1.902895,
		1.902895,	-1.903113,	1.903113,	-1.903358,
		1.903358,	-1.903629,	1.903629,	-1.903927,
		1.903927,	-1.904251,	1.904251,	-1.904602,
		1.904602,	-1.904979,	1.904979,	-1.905382,
		1.905382,	-1.905811,	1.905811,	-1.906265,
		1.906265,	-1.906745,	1.906745,	-1.907250,
		1.907250,	-1.907780,	1.907780,	-1.908334,
		1.908334,	-1.908913,	1.908913,	-1.909516,
		1.909516,	-1.910142,	1.910142,	-1.910792,
		1.910792,	-1.911466,	1.911466,	-1.912162,
		1.912162,	-1.912880,	1.912880,	-1.913621,
		1.913621,	-1.914383,	1.914383,	-1.915167,
		1.915167,	-1.915972,	1.915972,	-1.916797,
		1.916797,	-1.917643,	1.917643,	-1.918508,
		1.918508,	-1.919392,	1.919392,	-1.920296,
		1.920296,	-1.921217,	1.921217,	-1.922157,
		1.922157,	-1.923113,	1.923113,	-1.924087,
		1.924087,	-1.925077,	1.925077,	-1.926083,
		1.926083,	-1.927104,	1.927104,	-1.928140,
		1.928140,	-1.929190,	1.929190,	-1.930254,
		1.930254,	-1.931331,	1.931331,	-1.932420,
		1.932420,	-1.933521,	1.933521,	-1.934633,
		1.934633,	-1.935756,	1.935756,	-1.936889,
		1.936889,	-1.938031,	1.938031,	-1.939182,
		1.939182,	-1.940341,	1.940341,	-1.941508,
		1.941508,	-1.942681,	1.942681,	-1.943860,
		1.943860,	-1.945045,	1.945045,	-1.946234,
		1.946234,	-1.947428,	1.947428,	-1.948624,
		1.948624,	-1.949823,	1.949823,	-1.951024,
		1.951024,	-1.952226,	1.952226,	-1.953429,
		1.953429,	-1.954631,	1.954631,	-1.955832,
		1.955832,	-1.957032,	1.957032,	-1.958229,
		1.958229,	-1.959422,	1.959422,	-1.960612,
		1.960612,	-1.961797,	1.961797,	-1.962976,
		1.962976,	-1.964149,	1.964149,	-1.965315,
		1.965315,	-1.966473,	1.966473,	-1.967623,
		1.967623,	-1.968764,	1.968764,	-1.969894,
		1.969894,	-1.971014,	1.971014,	-1.972122,
		1.972122,	-1.973218,	1.973218,	-1.974302,
		1.974302,	-1.975371,	1.975371,	-1.976427,
		1.976427,	-1.977467,	1.977467,	-1.978491,
		1.978491,	-1.979499,	1.979499,	-1.980490,
		1.980490,	-1.981463,	1.981463,	-1.982418,
		1.982418,	-1.983353,	1.983353,	-1.984269,
		1.984269,	-1.985164,	1.985164,	-1.986038,
		1.986038,	-1.986890,	1.986890,	-1.987720,
		1.987720,	-1.988527,	1.988527,	-1.989311,
		1.989311,	-1.990071,	1.990071,	-1.990806,
		1.990806,	-1.991516,	1.991516,	-1.992201,
		1.992201,	-1.992859,	1.992859,	-1.993491,
		1.993491,	-1.994096,	1.994096,	-1.994674,
		1.994674,	-1.995223,	1.995223,	-1.995745,
		1.995745,	-1.996237,	1.996237,	-1.996701,
		1.996701,	-1.997135,	1.997135,	-1.997540,
		1.997540,	-1.997915,	1.997915,	-1.998259,
		1.998259,	-1.998573,	1.998573,	-1.998857,
		1.998857,	-1.999109,	1.999109,	-1.999330,
		1.999330,	-1.999520,	1.999520,	-1.999679,
		1.999679,	-1.999805,	1.999805,	-1.999901,
		1.999901,	-1.999964,	1.999964,	-1.999996,
		1.999996
	},
	{
	1.618090,	-1.618090,	1.618174,
		-1.618174,	1.618342,	-1.618342,	1.618595,
		-1.618595,	1.618931,	-1.618931,	-1.619352,
		1.619352,	1.619857,	-1.619857,	1.620445,
		-1.620445,	1.621118,	-1.621118,	1.621874,
		-1.621874,	1.622714,	-1.622714,	1.623637,
		-1.623637,	1.624644,	-1.624644,	1.625734,
		-1.625734,	1.626907,	-1.626907,	1.628164,
		-1.628164,	-1.629502,	1.629502,	-1.630924,
		1.630924,	1.632427,	-1.632427,	1.634013,
		-1.634013,	-1.635681,	1.635681,	1.637430,
		-1.637430,	1.639260,	-1.639260,	1.641171,
		-1.641171,	1.643163,	-1.643163,	1.645235,
		-1.645235,	1.647387,	-1.647387,	-1.649618,
		1.649618,	1.651929,	-1.651929,	1.654318,
		-1.654318,	1.656785,	-1.656785,	-1.659329,
		1.659329,	1.661951,	-1.661951,	1.664649,
		-1.664649,	1.667423,	-1.667423,	1.670272,
		-1.670272,	1.673196,	-1.673196,	1.676194,
		-1.676194,	1.679265,	-1.679265,	1.682408,
		-1.682408,	1.685623,	-1.685623,	1.688908,
		-1.688908,	1.692263,	-1.692263,	1.695687,
		-1.695687,	1.699179,	-1.699179,	1.702738,
		-1.702738,	1.706363,	-1.706363,	1.710052,
		-1.710052,	1.713804,	-1.713804,	1.717619,
		-1.717619,	1.721495,	-1.721495,	1.725430,
		-1.725430,	1.729423,	-1.729423,	1.733474,
		-1.733474,	-1.737579,	1.737579,	1.741738,
		-1.741738,	1.745948,	-1.745948,	1.750209,
		-1.750209,	1.754518,	-1.754518,	1.758874,
		-1.758874,	1.763275,	-1.763275,	1.767718,
		-1.767718,	1.772201,	-1.772201,	-1.776723,
		1.776723,	-1.781282,	1.781282,	-1.785874,
		1.785874,	1.790497,	-1.790497,	-1.795150,
		1.795150,	1.799829,	-1.799829,	-1.804532,
		1.804532,	-1.809256,	1.809256,	-1.813999,
		1.813999,	1.818757,	-1.818757,	1.823528,
		-1.823528,	1.828309,	-1.828309,	-1.833096,
		1.833096,	-1.837887,	1.837887,	-1.842678,
		1.842678,	-1.847465,	1.847465,	1.852247,
		-1.852247,	1.857018,	-1.857018,	-1.861776,
		1.861776,	-1.866517,	1.866517,	1.871237,
		-1.871237,	1.875933,	-1.875933,	-1.880601,
		1.880601,	-1.885236,	1.885236,	-1.889836,
		1.889836,	-1.894396,	1.894396,	1.898912,
		-1.898912,	1.903380,	-1.903380,	1.907796,
		-1.907796,	-1.912157,	1.912157,	1.916457,
		-1.916457,	1.920694,	-1.920694,	-1.924862,
		1.924862,	1.928957,	-1.928957,	-1.932977,
		1.932977,	-1.936915,	1.936915,	-1.940769,
		1.940769,	-1.944535,	1.944535,	-1.948207,
		1.948207,	-1.951783,	1.951783,	1.955258,
		-1.955258,	-1.958629,	1.958629,	-1.961892,
		1.961892,	-1.965042,	1.965042,	1.968077,
		-1.968077,	1.970993,	-1.970993,	-1.973786,
		1.973786,	-1.976453,	1.976453,	-1.978991,
		1.978991,	-1.981396,	1.981396,	-1.983667,
		1.983667,	-1.985799,	1.985799,	-1.987791,
		1.987791,	-1.989639,	1.989639,	-1.991342,
		1.991342,	-1.992897,	1.992897,	-1.994303,
		1.994303,	-1.995557,	1.995557,	-1.996657,
		1.996657,	-1.997604,	1.997604,	-1.998394,
		1.998394,	-1.999028,	1.999028,	-1.999504,
		1.999504,	-1.999821,	1.999821,	-1.999980,
		1.999980
	},
	{
	0.618090,	-0.618090,	0.618174,
		-0.618174,	-0.618342,	0.618342,	-0.618595,
		0.618595,	0.618933,	-0.618933,	0.619355,
		-0.619355,	-0.619862,	0.619862,	0.620454,
		-0.620454,	0.621132,	-0.621132,	-0.621896,
		0.621896,	0.622747,	-0.622747,	-0.623685,
		0.623685,	-0.624711,	0.624711,	0.625824,
		-0.625824,	0.627028,	-0.627028,	-0.628320,
		0.628320,	-0.629704,	0.629704,	0.631179,
		-0.631179,	0.632747,	-0.632747,	-0.634408,
		0.634408,	-0.636164,	0.636164,	-0.638015,
		0.638015,	0.639964,	-0.639964,	0.642011,
		-0.642011,	-0.644157,	0.644157,	0.646405,
		-0.646405,	0.648755,	-0.648755,	-0.651209,
		0.651209,	0.653769,	-0.653769,	0.656437,
		-0.656437,	-0.659214,	0.659214,	0.662103,
		-0.662103,	-0.665105,	0.665105,	-0.668222,
		0.668222,	-0.671457,	0.671457,	0.674812,
		-0.674812,	0.678290,	-0.678290,	0.681892,
		-0.681892,	0.685622,	-0.685622,	0.689483,
		-0.689483,	0.693476,	-0.693476,	0.697606,
		-0.697606,	0.701875,	-0.701875,	0.706287,
		-0.706287,	-0.710845,	0.710845,	-0.715552,
		0.715552,	0.720412,	-0.720412,	-0.725430,
		0.725430,	0.730609,	-0.730609,	0.735953,
		-0.735953,	-0.741466,	0.741466,	-0.747154,
		0.747154,	0.753021,	-0.753021,	-0.759071,
		0.759071,	0.765311,	-0.765311,	-0.771744,
		0.771744,	-0.778378,	0.778378,	0.785217,
		-0.785217,	-0.792268,	0.792268,	0.799537,
		-0.799537,	0.807031,	-0.807031,	0.814755,
		-0.814755,	0.822718,	-0.822718,	0.830927,
		-0.830927,	-0.839389,	0.839389,	-0.848112,
		0.848112,	-0.857105,	0.857105,	0.866375,
		-0.866375,	-0.875933,	0.875933,	0.885787,
		-0.885787,	-0.895946,	0.895946,	0.906421,
		-0.906421,	0.917222,	-0.917222,	0.928360,
		-0.928360,	0.939844,	-0.939844,	-0.951688,
		0.951688,	0.963902,	-0.963902,	-0.976498,
		0.976498,	0.989489,	-0.989489,	1.002887,
		-1.002887,	-1.016706,	1.016706,	-1.030958,
		1.030958,	1.045657,	-1.045657,	-1.060816,
		1.060816,	1.076449,	-1.076449,	1.092571,
		-1.092571,	-1.109194,	1.109194,	1.126332,
		-1.126332,	1.143999,	-1.143999,	1.162207,
		-1.162207,	1.180969,	-1.180969,	1.200297,
		-1.200297,	1.220201,	-1.220201,	1.240690,
		-1.240690,	1.261773,	-1.261773,	-1.283455,
		1.283455,	-1.305740,	1.305740,	1.328629,
		-1.328629,	1.352119,	-1.352119,	-1.376203,
		1.376203,	1.400872,	-1.400872,	1.426109,
		-1.426109,	1.451892,	-1.451892,	-1.478191,
		1.478191,	-1.504970,	1.504970,	-1.532183,
		1.532183,	-1.559775,	1.559775,	-1.587679,
		1.587679,	-1.615817,	1.615817,	-1.644097,
		1.644097,	-1.672416,	1.672416,	-1.700653,
		1.700653,	-1.728675,	1.728675,	-1.756334,
		1.756334,	-1.783465,	1.783465,	-1.809892,
		1.809892,	-1.835424,	1.835424,	-1.859861,
		1.859861,	-1.882994,	1.882994,	-1.904612,
		1.904612,	-1.924500,	1.924500,	-1.942451,
		1.942451,	-1.958265,	1.958265,	-1.971757,
		1.971757,	-1.982764,	1.982764,	-1.991148,
		1.991148,	-1.996799,	1.996799,	-1.999644,
		1.999644
	}
};

float A[4][K][2] = {
	{
		{1.975356,	0.999978},
		{-1.975356,	0.999978},
		{1.975320,	0.999933},
		{-1.975320,	0.999933},
		{1.975291,	0.999889},
		{-1.975291,	0.999889},
		{1.975269,	0.999845},
		{-1.975269,	0.999845},
		{1.975254,	0.999801},
		{-1.975254,	0.999801},
		{1.975247,	0.999756},
		{-1.975247,	0.999756},
		{1.975246,	0.999712},
		{-1.975246,	0.999712},
		{1.975253,	0.999668},
		{-1.975253,	0.999668},
		{1.975268,	0.999624},
		{-1.975268,	0.999624},
		{1.975289,	0.999580},
		{-1.975289,	0.999580},
		{1.975318,	0.999536},
		{-1.975318,	0.999536},
		{1.975353,	0.999492},
		{-1.975353,	0.999492},
		{1.975396,	0.999448},
		{-1.975396,	0.999448},
		{1.975446,	0.999404},
		{-1.975446,	0.999404},
		{1.975503,	0.999360},
		{-1.975503,	0.999360},
		{1.975566,	0.999317},
		{-1.975566,	0.999317},
		{1.975637,	0.999273},
		{-1.975637,	0.999273},
		{1.975714,	0.999229},
		{-1.975714,	0.999229},
		{1.975798,	0.999186},
		{-1.975798,	0.999186},
		{1.975889,	0.999143},
		{-1.975889,	0.999143},
		{1.975987,	0.999100},
		{-1.975987,	0.999100},
		{1.976090,	0.999057},
		{-1.976090,	0.999057},
		{1.976201,	0.999014},
		{-1.976201,	0.999014},
		{1.976318,	0.998971},
		{-1.976318,	0.998971},
		{1.976441,	0.998928},
		{-1.976441,	0.998928},
		{1.976570,	0.998886},
		{-1.976570,	0.998886},
		{1.976705,	0.998843},
		{-1.976705,	0.998843},
		{1.976846,	0.998801},
		{-1.976846,	0.998801},
		{1.976994,	0.998759},
		{-1.976994,	0.998759},
		{1.977147,	0.998717},
		{-1.977147,	0.998717},
		{1.977305,	0.998676},
		{-1.977305,	0.998676},
		{1.977470,	0.998634},
		{-1.977470,	0.998634},
		{1.977639,	0.998593},
		{-1.977639,	0.998593},
		{1.977815,	0.998552},
		{-1.977815,	0.998552},
		{1.977995,	0.998511},
		{-1.977995,	0.998511},
		{1.978180,	0.998470},
		{-1.978180,	0.998470},
		{1.978371,	0.998429},
		{-1.978371,	0.998429},
		{1.978566,	0.998389},
		{-1.978566,	0.998389},
		{1.978766,	0.998349},
		{-1.978766,	0.998349},
		{1.978971,	0.998309},
		{-1.978971,	0.998309},
		{1.979180,	0.998269},
		{-1.979180,	0.998269},
		{1.979393,	0.998230},
		{-1.979393,	0.998230},
		{1.979611,	0.998191},
		{-1.979611,	0.998191},
		{1.979833,	0.998152},
		{-1.979833,	0.998152},
		{1.980058,	0.998113},
		{-1.980058,	0.998113},
		{1.980287,	0.998074},
		{-1.980287,	0.998074},
		{1.980520,	0.998036},
		{-1.980520,	0.998036},
		{1.980756,	0.997998},
		{-1.980756,	0.997998},
		{1.980996,	0.997961},
		{-1.980996,	0.997961},
		{1.981239,	0.997923},
		{-1.981239,	0.997923},
		{1.981484,	0.997886},
		{-1.981484,	0.997886},
		{1.981733,	0.997850},
		{-1.981733,	0.997850},
		{1.981984,	0.997813},
		{-1.981984,	0.997813},
		{1.982237,	0.997777},
		{-1.982237,	0.997777},
		{1.982493,	0.997741},
		{-1.982493,	0.997741},
		{1.982751,	0.997706},
		{-1.982751,	0.997706},
		{1.983011,	0.997670},
		{-1.983011,	0.997670},
		{1.983273,	0.997635},
		{-1.983273,	0.997635},
		{1.983536,	0.997601},
		{-1.983536,	0.997601},
		{1.983801,	0.997567},
		{-1.983801,	0.997567},
		{1.984067,	0.997533},
		{-1.984067,	0.997533},
		{1.984334,	0.997499},
		{-1.984334,	0.997499},
		{1.984602,	0.997466},
		{-1.984602,	0.997466},
		{1.984871,	0.997433},
		{-1.984871,	0.997433},
		{1.985140,	0.997401},
		{-1.985140,	0.997401},
		{1.985410,	0.997369},
		{-1.985410,	0.997369},
		{1.985680,	0.997337},
		{-1.985680,	0.997337},
		{1.985951,	0.997306},
		{-1.985951,	0.997306},
		{1.986221,	0.997275},
		{-1.986221,	0.997275},
		{1.986490,	0.997244},
		{-1.986490,	0.997244},
		{1.986760,	0.997214},
		{-1.986760,	0.997214},
		{1.987028,	0.997184},
		{-1.987028,	0.997184},
		{1.987296,	0.997155},
		{-1.987296,	0.997155},
		{1.987563,	0.997126},
		{-1.987563,	0.997126},
		{1.987828,	0.997098},
		{-1.987828,	0.997098},
		{1.988093,	0.997070},
		{-1.988093,	0.997070},
		{1.988355,	0.997042},
		{-1.988355,	0.997042},
		{1.988616,	0.997015},
		{-1.988616,	0.997015},
		{1.988875,	0.996988},
		{-1.988875,	0.996988},
		{1.989133,	0.996962},
		{-1.989133,	0.996962},
		{1.989387,	0.996936},
		{-1.989387,	0.996936},
		{1.989640,	0.996911},
		{-1.989640,	0.996911},
		{1.989890,	0.996886},
		{-1.989890,	0.996886},
		{1.990137,	0.996861},
		{-1.990137,	0.996861},
		{1.990382,	0.996837},
		{-1.990382,	0.996837},
		{1.990623,	0.996814},
		{-1.990623,	0.996814},
		{1.990861,	0.996791},
		{-1.990861,	0.996791},
		{1.991096,	0.996768},
		{-1.991096,	0.996768},
		{1.991328,	0.996746},
		{-1.991328,	0.996746},
		{1.991555,	0.996725},
		{-1.991555,	0.996725},
		{1.991779,	0.996704},
		{-1.991779,	0.996704},
		{1.991999,	0.996683},
		{-1.991999,	0.996683},
		{1.992215,	0.996663},
		{-1.992215,	0.996663},
		{1.992427,	0.996643},
		{-1.992427,	0.996643},
		{1.992634,	0.996624},
		{-1.992634,	0.996624},
		{1.992837,	0.996606},
		{-1.992837,	0.996606},
		{1.993035,	0.996588},
		{-1.993035,	0.996588},
		{1.993228,	0.996570},
		{-1.993228,	0.996570},
		{1.993417,	0.996553},
		{-1.993417,	0.996553},
		{1.993600,	0.996537},
		{-1.993600,	0.996537},
		{1.993778,	0.996521},
		{-1.993778,	0.996521},
		{1.993951,	0.996506},
		{-1.993951,	0.996506},
		{1.994119,	0.996491},
		{-1.994119,	0.996491},
		{1.994281,	0.996477},
		{-1.994281,	0.996477},
		{1.994437,	0.996463},
		{-1.994437,	0.996463},
		{1.994588,	0.996450},
		{-1.994588,	0.996450},
		{1.994733,	0.996437},
		{-1.994733,	0.996437},
		{1.994872,	0.996425},
		{-1.994872,	0.996425},
		{1.995005,	0.996414},
		{-1.995005,	0.996414},
		{1.995132,	0.996403},
		{-1.995132,	0.996403},
		{1.995253,	0.996392},
		{-1.995253,	0.996392},
		{1.995367,	0.996382},
		{-1.995367,	0.996382},
		{1.995475,	0.996373},
		{-1.995475,	0.996373},
		{1.995577,	0.996364},
		{-1.995577,	0.996364},
		{1.995672,	0.996356},
		{-1.995672,	0.996356},
		{1.995761,	0.996349},
		{-1.995761,	0.996349},
		{1.995843,	0.996342},
		{-1.995843,	0.996342},
		{1.995919,	0.996335},
		{-1.995919,	0.996335},
		{1.995988,	0.996330},
		{-1.995988,	0.996330},
		{1.996050,	0.996324},
		{-1.996050,	0.996324},
		{1.996105,	0.996320},
		{-1.996105,	0.996320},
		{1.996153,	0.996316},
		{-1.996153,	0.996316},
		{1.996195,	0.996312},
		{-1.996195,	0.996312},
		{1.996230,	0.996309},
		{-1.996230,	0.996309},
		{1.996257,	0.996307},
		{-1.996257,	0.996307},
		{1.996278,	0.996305},
		{-1.996278,	0.996305},
		{1.996292,	0.996304},
		{-1.996292,	0.996304},
		{1.996299,	0.996303},
		{-1.996299,	0.996303}
	},
	{
		{-1.902079,	0.999958},
		{1.902079,	0.999958},
		{-1.902026,	0.999874},
		{1.902026,	0.999874},
		{-1.902000,	0.999789},
		{1.902000,	0.999789},
		{-1.902002,	0.999705},
		{1.902002,	0.999705},
		{-1.902031,	0.999621},
		{1.902031,	0.999621},
		{-1.902087,	0.999536},
		{1.902087,	0.999536},
		{-1.902171,	0.999452},
		{1.902171,	0.999452},
		{-1.902282,	0.999368},
		{1.902282,	0.999368},
		{-1.902419,	0.999284},
		{1.902419,	0.999284},
		{-1.902584,	0.999200},
		{1.902584,	0.999200},
		{-1.902775,	0.999116},
		{1.902775,	0.999116},
		{-1.902993,	0.999032},
		{1.902993,	0.999032},
		{-1.903237,	0.998948},
		{1.903237,	0.998948},
		{-1.903508,	0.998864},
		{1.903508,	0.998864},
		{-1.903805,	0.998781},
		{1.903805,	0.998781},
		{-1.904128,	0.998697},
		{1.904128,	0.998697},
		{-1.904477,	0.998614},
		{1.904477,	0.998614},
		{-1.904852,	0.998530},
		{1.904852,	0.998530},
		{-1.905252,	0.998447},
		{1.905252,	0.998447},
		{-1.905677,	0.998364},
		{1.905677,	0.998364},
		{-1.906127,	0.998281},
		{1.906127,	0.998281},
		{-1.906602,	0.998198},
		{1.906602,	0.998198},
		{-1.907101,	0.998115},
		{1.907101,	0.998115},
		{-1.907624,	0.998032},
		{1.907624,	0.998032},
		{-1.908171,	0.997950},
		{1.908171,	0.997950},
		{-1.908742,	0.997867},
		{1.908742,	0.997867},
		{-1.909336,	0.997785},
		{1.909336,	0.997785},
		{-1.909953,	0.997703},
		{1.909953,	0.997703},
		{-1.910592,	0.997621},
		{1.910592,	0.997621},
		{-1.911254,	0.997540},
		{1.911254,	0.997540},
		{-1.911938,	0.997458},
		{1.911938,	0.997458},
		{-1.912643,	0.997377},
		{1.912643,	0.997377},
		{-1.913369,	0.997296},
		{1.913369,	0.997296},
		{-1.914115,	0.997215},
		{1.914115,	0.997215},
		{-1.914882,	0.997134},
		{1.914882,	0.997134},
		{-1.915669,	0.997054},
		{1.915669,	0.997054},
		{-1.916475,	0.996974},
		{1.916475,	0.996974},
		{-1.917301,	0.996894},
		{1.917301,	0.996894},
		{-1.918144,	0.996815},
		{1.918144,	0.996815},
		{-1.919006,	0.996735},
		{1.919006,	0.996735},
		{-1.919885,	0.996656},
		{1.919885,	0.996656},
		{-1.920781,	0.996578},
		{1.920781,	0.996578},
		{-1.921694,	0.996499},
		{1.921694,	0.996499},
		{-1.922623,	0.996421},
		{1.922623,	0.996421},
		{-1.923568,	0.996343},
		{1.923568,	0.996343},
		{-1.924527,	0.996266},
		{1.924527,	0.996266},
		{-1.925501,	0.996189},
		{1.925501,	0.996189},
		{-1.926488,	0.996112},
		{1.926488,	0.996112},
		{-1.927489,	0.996036},
		{1.927489,	0.996036},
		{-1.928503,	0.995960},
		{1.928503,	0.995960},
		{-1.929529,	0.995884},
		{1.929529,	0.995884},
		{-1.930566,	0.995809},
		{1.930566,	0.995809},
		{-1.931614,	0.995734},
		{1.931614,	0.995734},
		{-1.932673,	0.995660},
		{1.932673,	0.995660},
		{1.933741,	0.995586},
		{-1.933741,	0.995586},
		{-1.934818,	0.995513},
		{1.934818,	0.995513},
		{-1.935904,	0.995440},
		{1.935904,	0.995440},
		{-1.936997,	0.995368},
		{1.936997,	0.995368},
		{-1.938098,	0.995296},
		{1.938098,	0.995296},
		{-1.939205,	0.995224},
		{1.939205,	0.995224},
		{-1.940318,	0.995153},
		{1.940318,	0.995153},
		{-1.941436,	0.995083},
		{1.941436,	0.995083},
		{-1.942558,	0.995013},
		{1.942558,	0.995013},
		{-1.943685,	0.994944},
		{1.943685,	0.994944},
		{-1.944814,	0.994876},
		{1.944814,	0.994876},
		{-1.945946,	0.994808},
		{1.945946,	0.994808},
		{-1.947079,	0.994741},
		{1.947079,	0.994741},
		{-1.948213,	0.994674},
		{1.948213,	0.994674},
		{-1.949348,	0.994608},
		{1.949348,	0.994608},
		{-1.950482,	0.994542},
		{1.950482,	0.994542},
		{-1.951614,	0.994478},
		{1.951614,	0.994478},
		{-1.952745,	0.994414},
		{1.952745,	0.994414},
		{-1.953874,	0.994351},
		{1.953874,	0.994351},
		{-1.954998,	0.994288},
		{1.954998,	0.994288},
		{-1.956119,	0.994226},
		{1.956119,	0.994226},
		{-1.957235,	0.994165},
		{1.957235,	0.994165},
		{-1.958346,	0.994105},
		{1.958346,	0.994105},
		{-1.959450,	0.994046},
		{1.959450,	0.994046},
		{-1.960547,	0.993987},
		{1.960547,	0.993987},
		{-1.961637,	0.993929},
		{1.961637,	0.993929},
		{-1.962718,	0.993872},
		{1.962718,	0.993872},
		{-1.963790,	0.993816},
		{1.963790,	0.993816},
		{-1.964852,	0.993761},
		{1.964852,	0.993761},
		{-1.965903,	0.993707},
		{1.965903,	0.993707},
		{-1.966943,	0.993654},
		{1.966943,	0.993654},
		{-1.967971,	0.993601},
		{1.967971,	0.993601},
		{-1.968986,	0.993550},
		{1.968986,	0.993550},
		{-1.969988,	0.993499},
		{1.969988,	0.993499},
		{-1.970976,	0.993450},
		{1.970976,	0.993450},
		{-1.971949,	0.993401},
		{1.971949,	0.993401},
		{-1.972907,	0.993354},
		{1.972907,	0.993354},
		{-1.973849,	0.993307},
		{1.973849,	0.993307},
		{-1.974773,	0.993262},
		{1.974773,	0.993262},
		{-1.975681,	0.993218},
		{1.975681,	0.993218},
		{-1.976570,	0.993174},
		{1.976570,	0.993174},
		{-1.977440,	0.993132},
		{1.977440,	0.993132},
		{-1.978292,	0.993091},
		{1.978292,	0.993091},
		{-1.979123,	0.993051},
		{1.979123,	0.993051},
		{-1.979934,	0.993012},
		{1.979934,	0.993012},
		{-1.980723,	0.992974},
		{1.980723,	0.992974},
		{-1.981491,	0.992938},
		{1.981491,	0.992938},
		{-1.982237,	0.992903},
		{1.982237,	0.992903},
		{-1.982960,	0.992868},
		{1.982960,	0.992868},
		{-1.983660,	0.992835},
		{1.983660,	0.992835},
		{-1.984336,	0.992804},
		{1.984336,	0.992804},
		{-1.984988,	0.992773},
		{1.984988,	0.992773},
		{-1.985615,	0.992744},
		{1.985615,	0.992744},
		{-1.986216,	0.992716},
		{1.986216,	0.992716},
		{-1.986793,	0.992689},
		{1.986793,	0.992689},
		{-1.987343,	0.992664},
		{1.987343,	0.992664},
		{-1.987866,	0.992639},
		{1.987866,	0.992639},
		{-1.988363,	0.992617},
		{1.988363,	0.992617},
		{-1.988832,	0.992595},
		{1.988832,	0.992595},
		{-1.989274,	0.992575},
		{1.989274,	0.992575},
		{-1.989687,	0.992556},
		{1.989687,	0.992556},
		{-1.990073,	0.992538},
		{1.990073,	0.992538},
		{-1.990430,	0.992522},
		{1.990430,	0.992522},
		{-1.990758,	0.992507},
		{1.990758,	0.992507},
		{1.991057,	0.992493},
		{-1.991057,	0.992493},
		{1.991327,	0.992481},
		{-1.991327,	0.992481},
		{1.991568,	0.992470},
		{-1.991568,	0.992470},
		{1.991778,	0.992460},
		{-1.991778,	0.992460},
		{1.991959,	0.992452},
		{-1.991959,	0.992452},
		{1.992110,	0.992445},
		{-1.992110,	0.992445},
		{1.992231,	0.992440},
		{-1.992231,	0.992440},
		{1.992322,	0.992435},
		{-1.992322,	0.992435},
		{1.992383,	0.992433},
		{-1.992383,	0.992433},
		{1.992413,	0.992431},
		{-1.992413,	0.992431}
	},
	{
		{1.617996,	0.999932},
		{-1.617996,	0.999932},
		{1.617970,	0.999795},
		{-1.617970,	0.999795},
		{1.618028,	0.999659},
		{-1.618028,	0.999659},
		{1.618170,	0.999522},
		{-1.618170,	0.999522},
		{1.618396,	0.999386},
		{-1.618396,	0.999386},
		{1.618706,	0.999249},
		{-1.618706,	0.999249},
		{1.619099,	0.999112},
		{-1.619099,	0.999112},
		{1.619577,	0.998976},
		{-1.619577,	0.998976},
		{1.620138,	0.998839},
		{-1.620138,	0.998839},
		{1.620782,	0.998701},
		{-1.620782,	0.998701},
		{-1.621510,	0.998564},
		{1.621510,	0.998564},
		{1.622321,	0.998426},
		{-1.622321,	0.998426},
		{1.623215,	0.998289},
		{-1.623215,	0.998289},
		{1.624192,	0.998151},
		{-1.624192,	0.998151},
		{1.625251,	0.998012},
		{-1.625251,	0.998012},
		{1.626393,	0.997874},
		{-1.626393,	0.997874},
		{1.627617,	0.997735},
		{-1.627617,	0.997735},
		{1.628923,	0.997595},
		{-1.628923,	0.997595},
		{-1.630311,	0.997456},
		{1.630311,	0.997456},
		{1.631780,	0.997316},
		{-1.631780,	0.997316},
		{1.633331,	0.997176},
		{-1.633331,	0.997176},
		{1.634962,	0.997035},
		{-1.634962,	0.997035},
		{1.636673,	0.996894},
		{-1.636673,	0.996894},
		{1.638465,	0.996752},
		{-1.638465,	0.996752},
		{1.640337,	0.996610},
		{-1.640337,	0.996610},
		{1.642288,	0.996467},
		{-1.642288,	0.996467},
		{1.644318,	0.996324},
		{-1.644318,	0.996324},
		{1.646426,	0.996181},
		{-1.646426,	0.996181},
		{1.648613,	0.996037},
		{-1.648613,	0.996037},
		{1.650877,	0.995892},
		{-1.650877,	0.995892},
		{1.653219,	0.995747},
		{-1.653219,	0.995747},
		{-1.655637,	0.995601},
		{1.655637,	0.995601},
		{1.658131,	0.995455},
		{-1.658131,	0.995455},
		{1.660700,	0.995308},
		{-1.660700,	0.995308},
		{1.663345,	0.995160},
		{-1.663345,	0.995160},
		{1.666063,	0.995012},
		{-1.666063,	0.995012},
		{1.668855,	0.994864},
		{-1.668855,	0.994864},
		{1.671719,	0.994714},
		{-1.671719,	0.994714},
		{1.674656,	0.994565},
		{-1.674656,	0.994565},
		{1.677663,	0.994414},
		{-1.677663,	0.994414},
		{1.680741,	0.994263},
		{-1.680741,	0.994263},
		{1.683889,	0.994111},
		{-1.683889,	0.994111},
		{-1.687105,	0.993959},
		{1.687105,	0.993959},
		{1.690388,	0.993806},
		{-1.690388,	0.993806},
		{1.693738,	0.993652},
		{-1.693738,	0.993652},
		{1.697154,	0.993497},
		{-1.697154,	0.993497},
		{1.700634,	0.993342},
		{-1.700634,	0.993342},
		{1.704178,	0.993187},
		{-1.704178,	0.993187},
		{1.707783,	0.993031},
		{-1.707783,	0.993031},
		{1.711450,	0.992874},
		{-1.711450,	0.992874},
		{-1.715176,	0.992716},
		{1.715176,	0.992716},
		{-1.718960,	0.992558},
		{1.718960,	0.992558},
		{1.722801,	0.992400},
		{-1.722801,	0.992400},
		{1.726697,	0.992240},
		{-1.726697,	0.992240},
		{1.730647,	0.992081},
		{-1.730647,	0.992081},
		{1.734649,	0.991920},
		{-1.734649,	0.991920},
		{1.738702,	0.991760},
		{-1.738702,	0.991760},
		{1.742804,	0.991598},
		{-1.742804,	0.991598},
		{1.746953,	0.991437},
		{-1.746953,	0.991437},
		{1.751147,	0.991275},
		{-1.751147,	0.991275},
		{1.755385,	0.991112},
		{-1.755385,	0.991112},
		{1.759663,	0.990949},
		{-1.759663,	0.990949},
		{1.763982,	0.990786},
		{-1.763982,	0.990786},
		{1.768337,	0.990622},
		{-1.768337,	0.990622},
		{1.772728,	0.990459},
		{-1.772728,	0.990459},
		{1.777151,	0.990295},
		{-1.777151,	0.990295},
		{1.781604,	0.990130},
		{-1.781604,	0.990130},
		{1.786086,	0.989966},
		{-1.786086,	0.989966},
		{1.790593,	0.989802},
		{-1.790593,	0.989802},
		{1.795124,	0.989637},
		{-1.795124,	0.989637},
		{1.799674,	0.989473},
		{-1.799674,	0.989473},
		{1.804243,	0.989309},
		{-1.804243,	0.989309},
		{1.808826,	0.989145},
		{-1.808826,	0.989145},
		{-1.813421,	0.988981},
		{1.813421,	0.988981},
		{1.818026,	0.988817},
		{-1.818026,	0.988817},
		{1.822636,	0.988654},
		{-1.822636,	0.988654},
		{-1.827250,	0.988492},
		{1.827250,	0.988492},
		{-1.831863,	0.988329},
		{1.831863,	0.988329},
		{1.836473,	0.988168},
		{-1.836473,	0.988168},
		{1.841077,	0.988007},
		{-1.841077,	0.988007},
		{1.845671,	0.987847},
		{-1.845671,	0.987847},
		{1.850251,	0.987687},
		{-1.850251,	0.987687},
		{-1.854815,	0.987529},
		{1.854815,	0.987529},
		{1.859358,	0.987372},
		{-1.859358,	0.987372},
		{1.863877,	0.987216},
		{-1.863877,	0.987216},
		{1.868369,	0.987061},
		{-1.868369,	0.987061},
		{1.872830,	0.986907},
		{-1.872830,	0.986907},
		{1.877255,	0.986755},
		{-1.877255,	0.986755},
		{-1.881642,	0.986604},
		{1.881642,	0.986604},
		{1.885986,	0.986455},
		{-1.885986,	0.986455},
		{1.890283,	0.986308},
		{-1.890283,	0.986308},
		{1.894531,	0.986163},
		{-1.894531,	0.986163},
		{1.898724,	0.986020},
		{-1.898724,	0.986020},
		{1.902859,	0.985879},
		{-1.902859,	0.985879},
		{1.906931,	0.985740},
		{-1.906931,	0.985740},
		{1.910938,	0.985603},
		{-1.910938,	0.985603},
		{1.914875,	0.985469},
		{-1.914875,	0.985469},
		{1.918737,	0.985338},
		{-1.918737,	0.985338},
		{1.922522,	0.985209},
		{-1.922522,	0.985209},
		{1.926225,	0.985083},
		{-1.926225,	0.985083},
		{1.929843,	0.984960},
		{-1.929843,	0.984960},
		{1.933371,	0.984841},
		{-1.933371,	0.984841},
		{1.936806,	0.984724},
		{-1.936806,	0.984724},
		{1.940144,	0.984611},
		{-1.940144,	0.984611},
		{1.943381,	0.984501},
		{-1.943381,	0.984501},
		{1.946514,	0.984394},
		{-1.946514,	0.984394},
		{1.949539,	0.984292},
		{-1.949539,	0.984292},
		{1.952452,	0.984193},
		{-1.952452,	0.984193},
		{1.955251,	0.984098},
		{-1.955251,	0.984098},
		{1.957932,	0.984007},
		{-1.957932,	0.984007},
		{1.960492,	0.983920},
		{-1.960492,	0.983920},
		{1.962928,	0.983838},
		{-1.962928,	0.983838},
		{1.965236,	0.983759},
		{-1.965236,	0.983759},
		{1.967415,	0.983686},
		{-1.967415,	0.983686},
		{1.969461,	0.983616},
		{-1.969461,	0.983616},
		{1.971371,	0.983551},
		{-1.971371,	0.983551},
		{1.973145,	0.983491},
		{-1.973145,	0.983491},
		{1.974778,	0.983436},
		{-1.974778,	0.983436},
		{1.976270,	0.983385},
		{-1.976270,	0.983385},
		{1.977618,	0.983340},
		{-1.977618,	0.983340},
		{1.978821,	0.983299},
		{-1.978821,	0.983299},
		{1.979877,	0.983263},
		{-1.979877,	0.983263},
		{1.980784,	0.983232},
		{-1.980784,	0.983232},
		{1.981542,	0.983206},
		{-1.981542,	0.983206},
		{1.982150,	0.983186},
		{-1.982150,	0.983186},
		{1.982607,	0.983170},
		{-1.982607,	0.983170},
		{1.982911,	0.983160},
		{-1.982911,	0.983160},
		{1.983064,	0.983155},
		{-1.983064,	0.983155}
	},
	{
		{0.618039,	0.999958},
		{-0.618039,	0.999958},
		{0.618097,	0.999873},
		{-0.618097,	0.999873},
		{0.618239,	0.999789},
		{-0.618239,	0.999789},
		{0.618465,	0.999704},
		{-0.618465,	0.999704},
		{0.618776,	0.999620},
		{-0.618776,	0.999620},
		{0.619172,	0.999535},
		{-0.619172,	0.999535},
		{0.619652,	0.999449},
		{-0.619652,	0.999449},
		{0.620218,	0.999364},
		{-0.620218,	0.999364},
		{0.620869,	0.999278},
		{-0.620869,	0.999278},
		{0.621605,	0.999191},
		{-0.621605,	0.999191},
		{0.622428,	0.999104},
		{-0.622428,	0.999104},
		{0.623338,	0.999016},
		{-0.623338,	0.999016},
		{-0.624335,	0.998928},
		{0.624335,	0.998928},
		{0.625420,	0.998839},
		{-0.625420,	0.998839},
		{0.626594,	0.998749},
		{-0.626594,	0.998749},
		{-0.627857,	0.998658},
		{0.627857,	0.998658},
		{0.629211,	0.998567},
		{-0.629211,	0.998567},
		{0.630655,	0.998474},
		{-0.630655,	0.998474},
		{0.632192,	0.998380},
		{-0.632192,	0.998380},
		{-0.633821,	0.998285},
		{0.633821,	0.998285},
		{-0.635544,	0.998189},
		{0.635544,	0.998189},
		{-0.637362,	0.998092},
		{0.637362,	0.998092},
		{0.639277,	0.997993},
		{-0.639277,	0.997993},
		{0.641289,	0.997893},
		{-0.641289,	0.997893},
		{0.643399,	0.997792},
		{-0.643399,	0.997792},
		{-0.645610,	0.997689},
		{0.645610,	0.997689},
		{0.647923,	0.997584},
		{-0.647923,	0.997584},
		{0.650339,	0.997477},
		{-0.650339,	0.997477},
		{0.652859,	0.997369},
		{-0.652859,	0.997369},
		{-0.655486,	0.997258},
		{0.655486,	0.997258},
		{-0.658222,	0.997146},
		{0.658222,	0.997146},
		{0.661067,	0.997031},
		{-0.661067,	0.997031},
		{0.664025,	0.996914},
		{-0.664025,	0.996914},
		{-0.667096,	0.996795},
		{0.667096,	0.996795},
		{-0.670284,	0.996673},
		{0.670284,	0.996673},
		{-0.673590,	0.996549},
		{0.673590,	0.996549},
		{0.677017,	0.996422},
		{-0.677017,	0.996422},
		{-0.680568,	0.996292},
		{0.680568,	0.996292},
		{-0.684244,	0.996159},
		{0.684244,	0.996159},
		{0.688048,	0.996023},
		{-0.688048,	0.996023},
		{-0.691984,	0.995884},
		{0.691984,	0.995884},
		{0.696054,	0.995741},
		{-0.696054,	0.995741},
		{0.700261,	0.995595},
		{-0.700261,	0.995595},
		{0.704608,	0.995444},
		{-0.704608,	0.995444},
		{-0.709099,	0.995290},
		{0.709099,	0.995290},
		{-0.713737,	0.995132},
		{0.713737,	0.995132},
		{0.718525,	0.994970},
		{-0.718525,	0.994970},
		{0.723467,	0.994803},
		{-0.723467,	0.994803},
		{-0.728567,	0.994631},
		{0.728567,	0.994631},
		{0.733829,	0.994454},
		{-0.733829,	0.994454},
		{0.739258,	0.994272},
		{-0.739258,	0.994272},
		{-0.744857,	0.994085},
		{0.744857,	0.994085},
		{-0.750631,	0.993892},
		{0.750631,	0.993892},
		{0.756585,	0.993694},
		{-0.756585,	0.993694},
		{0.762723,	0.993488},
		{-0.762723,	0.993488},
		{-0.769051,	0.993277},
		{0.769051,	0.993277},
		{0.775574,	0.993059},
		{-0.775574,	0.993059},
		{0.782298,	0.992833},
		{-0.782298,	0.992833},
		{0.789228,	0.992600},
		{-0.789228,	0.992600},
		{-0.796370,	0.992359},
		{0.796370,	0.992359},
		{-0.803730,	0.992110},
		{0.803730,	0.992110},
		{-0.811315,	0.991853},
		{0.811315,	0.991853},
		{0.819132,	0.991586},
		{-0.819132,	0.991586},
		{0.827186,	0.991310},
		{-0.827186,	0.991310},
		{0.835487,	0.991024},
		{-0.835487,	0.991024},
		{0.844040,	0.990727},
		{-0.844040,	0.990727},
		{0.852854,	0.990420},
		{-0.852854,	0.990420},
		{0.861936,	0.990101},
		{-0.861936,	0.990101},
		{-0.871296,	0.989770},
		{0.871296,	0.989770},
		{0.880941,	0.989426},
		{-0.880941,	0.989426},
		{0.890880,	0.989069},
		{-0.890880,	0.989069},
		{0.901123,	0.988698},
		{-0.901123,	0.988698},
		{-0.911679,	0.988312},
		{0.911679,	0.988312},
		{-0.922557,	0.987911},
		{0.922557,	0.987911},
		{0.933768,	0.987494},
		{-0.933768,	0.987494},
		{-0.945323,	0.987059},
		{0.945323,	0.987059},
		{-0.957231,	0.986606},
		{0.957231,	0.986606},
		{0.969503,	0.986135},
		{-0.969503,	0.986135},
		{0.982151,	0.985644},
		{-0.982151,	0.985644},
		{0.995186,	0.985131},
		{-0.995186,	0.985131},
		{-1.008620,	0.984597},
		{1.008620,	0.984597},
		{1.022463,	0.984040},
		{-1.022463,	0.984040},
		{1.036729,	0.983459},
		{-1.036729,	0.983459},
		{1.051428,	0.982852},
		{-1.051428,	0.982852},
		{-1.066573,	0.982218},
		{1.066573,	0.982218},
		{1.082176,	0.981556},
		{-1.082176,	0.981556},
		{1.098247,	0.980865},
		{-1.098247,	0.980865},
		{1.114799,	0.980142},
		{-1.114799,	0.980142},
		{1.131843,	0.979388},
		{-1.131843,	0.979388},
		{1.149388,	0.978599},
		{-1.149388,	0.978599},
		{1.167444,	0.977775},
		{-1.167444,	0.977775},
		{1.186021,	0.976914},
		{-1.186021,	0.976914},
		{1.205127,	0.976014},
		{-1.205127,	0.976014},
		{1.224766,	0.975074},
		{-1.224766,	0.975074},
		{1.244945,	0.974092},
		{-1.244945,	0.974092},
		{1.265665,	0.973067},
		{-1.265665,	0.973067},
		{1.286927,	0.971996},
		{-1.286927,	0.971996},
		{1.308729,	0.970880},
		{-1.308729,	0.970880},
		{1.331064,	0.969716},
		{-1.331064,	0.969716},
		{1.353923,	0.968504},
		{-1.353923,	0.968504},
		{1.377291,	0.967242},
		{-1.377291,	0.967242},
		{1.401150,	0.965930},
		{-1.401150,	0.965930},
		{-1.425475,	0.964568},
		{1.425475,	0.964568},
		{1.450235,	0.963156},
		{-1.450235,	0.963156},
		{1.475390,	0.961695},
		{-1.475390,	0.961695},
		{1.500894,	0.960186},
		{-1.500894,	0.960186},
		{1.526691,	0.958631},
		{-1.526691,	0.958631},
		{1.552717,	0.957034},
		{-1.552717,	0.957034},
		{1.578896,	0.955397},
		{-1.578896,	0.955397},
		{1.605139,	0.953727},
		{-1.605139,	0.953727},
		{1.631350,	0.952028},
		{-1.631350,	0.952028},
		{1.657416,	0.950308},
		{-1.657416,	0.950308},
		{1.683215,	0.948577},
		{-1.683215,	0.948577},
		{1.708611,	0.946843},
		{-1.708611,	0.946843},
		{1.733455,	0.945119},
		{-1.733455,	0.945119},
		{1.757590,	0.943417},
		{-1.757590,	0.943417},
		{1.780847,	0.941752},
		{-1.780847,	0.941752},
		{1.803050,	0.940139},
		{-1.803050,	0.940139},
		{1.824017,	0.938595},
		{-1.824017,	0.938595},
		{1.843564,	0.937138},
		{-1.843564,	0.937138},
		{1.861509,	0.935784},
		{-1.861509,	0.935784},
		{1.877673,	0.934551},
		{-1.877673,	0.934551},
		{1.891887,	0.933457},
		{-1.891887,	0.933457},
		{1.903995,	0.932518},
		{-1.903995,	0.932518},
		{1.913860,	0.931747},
		{-1.913860,	0.931747},
		{1.921366,	0.931158},
		{-1.921366,	0.931158},
		{1.926421,	0.930760},
		{-1.926421,	0.930760},
		{1.928965,	0.930559},
		{-1.928965,	0.930559}
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
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}
};
