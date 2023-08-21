// This separate cpp file is created to facilitate and centralize 
// shape creation (majority of them); using GLMesh struct, 
// ShapeBuilder class & its implemented functions, different
// shapes can be created, added to the 'scene' vector and then
// sent to be rendered

#include "BuildTheScene.h"
#include "BuildShapes.h"
#include "Meshes.h"

using namespace std;

void SceneBuilder::UBuildScene(vector<GLMesh>& scene)
{


	// seed the rand() function once
	srand(time(nullptr));


	/// --------------------------------------------------------------------------------
	/// How to build a shape:
	///
	///		GLMesh <glmesh_name>
	///		<glmesh_name>.p = {
	///		red float, green float, blue float, alpha float,
	///		x scale float, y scale float, z scale float,
	///		x rotation degrees float, 1.0f, 0.0f, 0.0f,
	///		y rotation degrees float, 0.0f, 1.0f, 0.0f,
	///		z rotation degrees float, 0.0f, 0.0f, 1.0f,
	///		x translate float, y translate float, z translate float,
	///		x texture scale float, y texture scale float
	///		};
	///		<glmesh_name>.texFilename = "textures\\[filename.filetype]";
	///		<glmesh_name>.length = float;
	///		<glmesh_name>.height = float;
	///		<glmesh_name>.radius = float;
	///		<glmesh_name>.number_of_sides = float;
	///		ShapeBuilder::<ShapeBuilderMethod>(<glmesh_name>);
	///		**OR**
	///		ShapeBuilder::<ShapeBuild "Rainbow" Shape>(<glmesh_name>, rand() % 100 + 1);
	///		scene.push_back(<glmesh_name>);
	///
	/// <param name="scene"></param>
	/// --------------------------------------------------------------------------------



	//speaker body => HOLLOW CYLINDER with a tiny hollow cylender in the middle
	GLMesh hollow_cyl_speaker_body;
	hollow_cyl_speaker_body.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		0.3f,	0.3f,	0.3f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-20.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		-2.4f,	0.0f,	0.0f,
		1.0f,	1.0f
	};
	hollow_cyl_speaker_body.texFilename = "textures\\speaker.jpg";
	hollow_cyl_speaker_body.innerRadius = 0.001f;
	hollow_cyl_speaker_body.radius = 0.7f;
	hollow_cyl_speaker_body.height = 0.8f;
	hollow_cyl_speaker_body.number_of_sides = 25.0f;
	ShapeBuilder::UBuildHollowCylinder(hollow_cyl_speaker_body);
	scene.push_back(hollow_cyl_speaker_body);

	//speaker top => HOLLOW CYLINDER with a bigger hollow cylender in the middle, on the top of the speaker
	GLMesh hollow_cyl_speaker_top;
	hollow_cyl_speaker_top.p = {
		1.0f,	0.0f,	1.0f,	1.0f,
		0.299f,	0.299f,	0.299f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-20.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		-2.4f,	1.0f,	0.0f,
		1.0f,	1.0f
	};
	hollow_cyl_speaker_top.texFilename = "textures\\JBL_Pulse_3_TopR.jpg";
	hollow_cyl_speaker_top.innerRadius = 0.1f;
	hollow_cyl_speaker_top.radius = 0.7f;
	hollow_cyl_speaker_top.height = -2.5f;
	hollow_cyl_speaker_top.number_of_sides = 45.0f;
	ShapeBuilder::UBuildHollowCylinder(hollow_cyl_speaker_top);
	scene.push_back(hollow_cyl_speaker_top);

	//speaker top small section=> HOLLOW CYLINDER with the biggest hollow cylender in the middle, on the top of the speaker
	GLMesh hollow_cyl_speaker_top_small;
	hollow_cyl_speaker_top_small.p = {
		1.0f,	0.0f,	1.0f,	1.0f,
		0.299f,	0.299f,	0.299f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-20.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		-2.4f,	1.0f,	0.0f,
		1.0f,	1.0f
	};
	hollow_cyl_speaker_top_small.texFilename = "textures\\spt.png";
	hollow_cyl_speaker_top_small.innerRadius = 0.49f;
	hollow_cyl_speaker_top_small.radius = 0.7f;
	hollow_cyl_speaker_top_small.height = 0.3f;
	hollow_cyl_speaker_top_small.number_of_sides = 45.0f;
	ShapeBuilder::UBuildHollowCylinder(hollow_cyl_speaker_top_small);
	scene.push_back(hollow_cyl_speaker_top_small);



	//separate small speaker body => HOLLOW CYLINDER with a tiny hollow cylender in the middle
	GLMesh hollow_cyl_small_speaker;
	hollow_cyl_speaker_body.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		0.34f,	0.34f,	0.34f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-20.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		-1.8f,	0.0f,	-0.5f,
		1.0f,	1.0f
	};
	hollow_cyl_speaker_body.texFilename = "textures\\speaker-small.jpg";
	hollow_cyl_speaker_body.innerRadius = 0.001f;
	hollow_cyl_speaker_body.radius = 0.6f;
	hollow_cyl_speaker_body.height = 1.0f;
	hollow_cyl_speaker_body.number_of_sides = 95.0f;
	ShapeBuilder::UBuildHollowCylinder(hollow_cyl_speaker_body);
	scene.push_back(hollow_cyl_speaker_body);


	//coffee cup => HOLLOW CYLINDER with a tiny hollow cylender in the middle
	GLMesh hollow_cyl_coffee_cup;
	hollow_cyl_coffee_cup.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		0.34f,	0.34f,	0.34f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-20.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		2.2f,	0.0f,	-0.2f,
		1.0f,	1.0f
	};
	hollow_cyl_coffee_cup.texFilename = "textures\\coffee_cup -mb2.png";
	hollow_cyl_coffee_cup.innerRadius = 0.47f;
	hollow_cyl_coffee_cup.radius = 0.6f;
	hollow_cyl_coffee_cup.height = 1.2f;
	hollow_cyl_coffee_cup.number_of_sides = 95.0f;
	ShapeBuilder::UBuildHollowCylinder(hollow_cyl_coffee_cup);
	scene.push_back(hollow_cyl_coffee_cup);

	//bottom of the cup
	GLMesh cyl_bottom_cup;
	cyl_bottom_cup.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		0.34f,	0.34f,	0.34f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-20.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		2.2f,	0.0f,	-0.2f,
		1.0f,	1.0f
	};
	cyl_bottom_cup.texFilename = "textures\\blank.png";
	cyl_bottom_cup.innerRadius = 0.0f;
	cyl_bottom_cup.radius = 0.598f;
	cyl_bottom_cup.height = 0.2f;
	cyl_bottom_cup.number_of_sides = 95.0f;
	ShapeBuilder::UBuildHollowCylinder(cyl_bottom_cup);
	scene.push_back(cyl_bottom_cup);

	//coffee on top of the cup => HOLLOW CYLINDER with a tiny hollow cylender in the middle
	GLMesh cyl_coffee;
	cyl_coffee.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		0.34f,	0.34f,	0.34f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-20.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		2.2f,	0.2f,	-0.2f,
		1.0f,	1.0f
	};
	cyl_coffee.texFilename = "textures\\coffee.png";
	cyl_coffee.innerRadius = 0.0f;
	cyl_coffee.radius = 0.596f;
	cyl_coffee.height = 0.56f;
	cyl_coffee.number_of_sides = 95.0f;
	ShapeBuilder::UBuildHollowCylinder(cyl_coffee);
	scene.push_back(cyl_coffee);

////coffee on top of the cup
//	GLMesh circle_coffee;
//	circle_coffee.p = {
//		1.0f,	1.0f,	1.0f,	1.0f,
//		0.34f,	0.34f,	0.34f,
//		0.0f,	1.0f,	0.0f,	0.0f,
//		0.0f,	90.0f,	0.0f,	0.0f,
//		0.0f,	1.0f,	0.0f,	1.0f,
//		2.2f,	0.60f,	-0.2f,
//		1.0f,	1.0f
//	};
//	circle_coffee.radius = 0.45f;
//	circle_coffee.number_of_sides = 144.0f;
//	circle_coffee.texFilename = "textures\\coffee.png";
//	ShapeBuilder::UBuildCircle(circle_coffee);
//	scene.push_back(circle_coffee);

	GLMesh foldedWhitePaper;
	foldedWhitePaper.p = {
		1.0f,	1.0f,	1.0f,	1.0f,	// color r, g, b a
		0.85f,	0.85f,	0.85f,			// scale x, y, z
		0.0f,	90.0f,	90.0f,	0.0f,
		0.0f,	1.0f,	0.0f,	0.0f,	// rotation angle
		0.0f,	0.0f,	0.0f,	1.0f,
		-1.82f,	0.0005f,	1.2f,			// distance from 0, 0, 0 coordinate
		1.0f,	1.0f
	};

	foldedWhitePaper.texFilename = "textures\\blank.png";
	foldedWhitePaper.height = 0.2f;
	foldedWhitePaper.number_of_sides = 3.0f;
	ShapeBuilder::UBuildTriangle(foldedWhitePaper);
	scene.push_back(foldedWhitePaper);

	// laptop base
	GLMesh laptop_gMesh01;
	laptop_gMesh01.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		2.0f,	0.1f,	1.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
	   -10.0f,	0.0f,	1.0f,	0.0f, // angle
		0.0f,	0.0f,	0.0f,	1.0f,
		0.0f,	0.0f,	0.0f,
		1.0f,	1.0f
	};
	laptop_gMesh01.texFilename = "textures\\metaliSilver.jpg";
	ShapeBuilder::UBuildCube(laptop_gMesh01);
	scene.push_back(laptop_gMesh01);

	// laptop monitor
	GLMesh laptop_gMesh02;
	laptop_gMesh02.p = {
		1.0f,	1.0f,	1.0f,	0.2f,	// color r, g, b a
		1.992f,	0.07f,	0.99f,			// scale x, y, z
		0.0f,	1.0f,	0.0f,	0.0f,
		-10.0f,	0.0f,	1.0f,	0.0f,	// rotation angle
		0.0f,	0.0f,	0.0f,	1.0f,
		0.0f,	0.1f,	0.0f,			// distance from 0, 0, 0 coordinate
		1.0f,	1.0f
	};
	laptop_gMesh02.texFilename = "textures\\metaliSilver.jpg";
	ShapeBuilder::UBuildCube(laptop_gMesh02);
	scene.push_back(laptop_gMesh02);


	GLMesh laptop_gMesh03_logo;
	laptop_gMesh03_logo.p = {
		1.0f,	1.0f,	1.0f,	1.0f,	// color r, g, b a
		0.35f,	0.35f,	0.35f,			// scale x, y, z
		0.0f,	1.0f,	0.0f,	0.0f,
		90.0f,	5.0f,	0.0f,	0.0f,	// rotation angle
		0.0f,	0.0f,	0.0f,	1.0f,
		-0.22f,	0.18f,	-0.2f,			// distance from 0, 0, 0 coordinate
		1.0f,	1.0f
	};

	laptop_gMesh03_logo.texFilename = "textures\\logo4.png";
	laptop_gMesh03_logo.radius = 0.3f;
	laptop_gMesh03_logo.height = 0.1f;
	laptop_gMesh03_logo.number_of_sides = 85.0f;
	ShapeBuilder::UBuildCircle(laptop_gMesh03_logo);
	scene.push_back(laptop_gMesh03_logo);



	// desk / plane
	GLMesh plan_gMesh01;
	plan_gMesh01.p = {
		0.5f, 0.5f, 0.1f, 1.0f,				// color r, g, b a
		4.0f, 8.0f, 4.0f,					// scale x, y, z
		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
		0.0f, 0.0f, 1.0f, 0.0f,				// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f,					// translate x, y, z
		1.0f, 1.0f
	};
	plan_gMesh01.texFilename = "textures\\desk.jpg";
	ShapeBuilder::UBuildPlane(plan_gMesh01);
	scene.push_back(plan_gMesh01);

}


