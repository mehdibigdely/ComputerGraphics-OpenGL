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
	//TO DO : FIX ME
	// the actual textures will be added later
	hollow_cyl_speaker_body.texFilename = "textures\\blank.png";
	hollow_cyl_speaker_body.innerRadius = 0.001f;
	hollow_cyl_speaker_body.radius = 0.7f;
	hollow_cyl_speaker_body.height = 3.4f;
	hollow_cyl_speaker_body.number_of_sides = 55.0f;
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
	//TO DO : FIX ME
	// the actual textures will be added later
	hollow_cyl_speaker_top.texFilename = "textures\\blank.png";
	hollow_cyl_speaker_top.innerRadius = 0.1f;
	hollow_cyl_speaker_top.radius = 0.7f;
	hollow_cyl_speaker_top.height = 0.4f;
	hollow_cyl_speaker_top.number_of_sides = 35.0f;
	ShapeBuilder::UBuildHollowCylinder(hollow_cyl_speaker_top);
	scene.push_back(hollow_cyl_speaker_top);


	// laptop base
	GLMesh laptop_gMesh01;
	laptop_gMesh01.p = {
		0.2f,	6.0f,	1.0f,	1.0f,
		2.0f,	0.1f,	1.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
	   -10.0f,	0.0f,	1.0f,	0.0f, // angle
		0.0f,	0.0f,	0.0f,	1.0f,
		0.0f,	0.0f,	0.0f,
		1.0f,	1.0f
	};
	//TO DO : FIX ME
	// the actual textures will be added later
	laptop_gMesh01.texFilename = "textures\\blank.png";
	ShapeBuilder::UBuildCube(laptop_gMesh01);
	scene.push_back(laptop_gMesh01);

	// laptop monitor
	GLMesh laptop_gMesh02;
	laptop_gMesh02.p = {
		0.3f,	0.7f,	1.0f,	1.0f,	// color r, g, b a
		2.0f,	0.07f,	1.0f,			// scale x, y, z
		0.0f,	1.0f,	0.0f,	0.0f,
		-10.0f,	0.0f,	1.0f,	0.0f,	// rotation angle
		0.0f,	0.0f,	0.0f,	1.0f,
		0.0f,	0.1f,	0.0f,			// distance from 0, 0, 0 coordinate
		1.0f,	1.0f
	};
	//TO DO : FIX ME
	// the actual textures will be added later
	laptop_gMesh02.texFilename = "textures\\blank.png";
	ShapeBuilder::UBuildCube(laptop_gMesh02);
	scene.push_back(laptop_gMesh02);


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

	//TO DO : FIX ME
	// the actual textures will be added later
	plan_gMesh01.texFilename = "textures\\blank.png";
	ShapeBuilder::UBuildPlane(plan_gMesh01);
	scene.push_back(plan_gMesh01);

}

