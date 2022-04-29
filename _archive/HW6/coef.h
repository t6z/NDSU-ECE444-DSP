#define K 20 
float G[4] = {0.743159, 0.552154, 0.304332, 0.091647};
float B[4][K] = {
	{	1.976152,	-1.976152,	1.977292,	-1.977292,
		1.979467,	-1.979467,	1.982471,	-1.982471,	1.986021,
		-1.986021,	1.989774,	-1.989774,	1.993363,	-1.993363,
		1.996432,	-1.996432,	-1.998670,	1.998670,	-1.999850,
		1.999850	},
	{	-1.905031,	1.905031,	-1.909341,	1.909341,
		-1.917621,	1.917621,	-1.929195,	1.929195,	-1.943073,
		1.943073,	-1.957993,	1.957993,	-1.972507,	1.972507,
		-1.985110,	1.985110,	-1.994420,	1.994420,	-1.999367,
		1.999367	},
	{	1.627070,	-1.627070,	1.640619,	-1.640619,
		1.667352,	-1.667352,	-1.706380,	1.706380,	-1.755964,
		1.755964,	1.813064,	-1.813064,	-1.872881,	1.872881,
		-1.928712,	1.928712,	1.972558,	-1.972558,	-1.996843,
		1.996843	},
	{	-0.627195,	0.627195,	0.641418,	-0.641418,
		0.671374,	-0.671374,	0.720436,	-0.720436,	0.794665,
		-0.794665,	0.904334,	-0.904334,	-1.066225,	1.066225,
		-1.304377,	1.304377,	-1.631500,	1.631500,	-1.945521,
		1.945521	}
};

float A[4][K][2] = {
	{
		{1.972075,	0.996411},
		{-1.972075,	0.996411},
		{1.966230,	0.989347},
		{-1.966230,	0.989347},
		{1.961672,	0.982558},
		{-1.961672,	0.982558},
		{1.958335,	0.976188},
		{-1.958335,	0.976188},
		{1.956074,	0.970381},
		{-1.956074,	0.970381},
		{1.954692,	0.965277},
		{-1.954692,	0.965277},
		{1.953961,	0.961006},
		{-1.953961,	0.961006},
		{1.953655,	0.957687},
		{-1.953655,	0.957687},
		{1.953576,	0.955415},
		{-1.953576,	0.955415},
		{1.953576,	0.954262},
		{-1.953576,	0.954262}
	},
	{
		{-1.896539,	0.993180},
		{1.896539,	0.993180},
		{-1.888005,	0.979751},
		{1.888005,	0.979751},
		{-1.883692,	0.966733},
		{1.883692,	0.966733},
		{-1.883049,	0.954308},
		{1.883049,	0.954308},
		{-1.885301,	0.942711},
		{1.885301,	0.942711},
		{-1.889498,	0.932235},
		{1.889498,	0.932235},
		{-1.894598,	0.923219},
		{1.894598,	0.923219},
		{-1.899561,	0.916027},
		{1.899561,	0.916027},
		{-1.903460,	0.911003},
		{1.903460,	0.911003},
		{1.905598,	0.908416},
		{-1.905598,	0.908416}
	},
	{
		{1.611899,	0.988960},
		{-1.611899,	0.988960},
		{1.607148,	0.966968},
		{-1.607148,	0.966968},
		{1.614450,	0.944690},
		{-1.614450,	0.944690},
		{1.632260,	0.921800},
		{-1.632260,	0.921800},
		{-1.658497,	0.898257},
		{1.658497,	0.898257},
		{1.690352,	0.874464},
		{-1.690352,	0.874464},
		{1.724173,	0.851446},
		{-1.724173,	0.851446},
		{1.755577,	0.830938},
		{-1.755577,	0.830938},
		{1.779945,	0.815234},
		{-1.779945,	0.815234},
		{1.793296,	0.806640},
		{-1.793296,	0.806640}
	},
	{
		{0.618702,	0.993124},
		{-0.618702,	0.993124},
		{-0.627601,	0.978774},
		{0.627601,	0.978774},
		{-0.650139,	0.962262},
		{0.650139,	0.962262},
		{-0.687922,	0.941469},
		{0.687922,	0.941469},
		{0.743690,	0.913169},
		{-0.743690,	0.913169},
		{-0.821035,	0.872033},
		{0.821035,	0.872033},
		{0.922759,	0.809050},
		{-0.922759,	0.809050},
		{1.044852,	0.710215},
		{-1.044852,	0.710215},
		{1.161269,	0.563015},
		{-1.161269,	0.563015},
		{1.218333,	0.404174},
		{-1.218333,	0.404174}
	}
};

float buf[K][2] = { 
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
{0,0}, {0,0}, {0,0}, {0,0}
};
