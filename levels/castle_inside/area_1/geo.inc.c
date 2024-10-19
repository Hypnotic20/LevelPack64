#include "src/game/envfx_snow.h"

const GeoLayout castle_inside_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2722, 33, 517, 0, 180, 0, castle_inside_dl_bush_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2722, 33, -474, 0, 180, 0, castle_inside_dl_bush_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4722, 33, 539, 0, 180, 0, castle_inside_dl_bush_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4722, 33, -483, 0, 180, 0, castle_inside_dl_bush_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_fllor_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 6084, -15, -57, 90, 0, 90, castle_inside_dl_gate_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 3968, -27, -549, -180, 0, 0, castle_inside_dl_glow_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 4460, -27, 490, -180, 0, 0, castle_inside_dl_glow_002_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 3841, -27, 604, -180, 0, 0, castle_inside_dl_glow_003_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 4800, -27, 893, -180, 0, 0, castle_inside_dl_glow_004_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 4800, -27, -784, -180, 0, 0, castle_inside_dl_glow_005_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5841, 570, 43, 90, 0, 90, castle_inside_dl_painting_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1557, 389, 810, 0, 180, 0, castle_inside_dl_pillar_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1557, 389, -960, 0, 180, 0, castle_inside_dl_pillar_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3733, 389, -811, castle_inside_dl_pillar_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3701, 389, 909, castle_inside_dl_pillar_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5974, 408, 490, 0, 180, 0, castle_inside_dl_pillar_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 6006, 420, -428, castle_inside_dl_pillar_007_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 5255, 75, 59),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 255, 100),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Plane_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 2558, 0, -899, 90, 0, 0, castle_inside_dl_Plane_001_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 2651, 0, 943, 90, 0, 180, castle_inside_dl_Plane_002_mesh_layer_4),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 2456, 221, -275, 19, 0, 0),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 255, 100),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Plane_003_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 3154, 90, 598, 19, 80, 0),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 255, 100),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Plane_004_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 2720, 104, -559, 19, 143, 0),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 255, 100),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Plane_005_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 5655, 209, 64),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 255, 100),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Plane_006_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 3445, 238, -359, 19, 80, 0),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 255, 100),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Plane_007_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 2215, 221, 812, -11, 100, 20),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 255, 100),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Plane_008_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 2215, 493, -542, -11, -163, 20),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 255, 100),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Plane_009_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 2579, 244, 388, -11, 3, 20),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 255, 100),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_Plane_010_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_inside_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_ABOVE_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_inside_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
