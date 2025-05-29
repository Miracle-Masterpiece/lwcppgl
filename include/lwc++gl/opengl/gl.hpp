#ifndef LWCPPGL_GL_H
#define LWCPPGL_GL_H
#include <lwc++gl/exports.hpp>
#include <KHR/khrplatform.h>

namespace gl
{
    const int GL_DEPTH_BUFFER_BIT = 0x00000100;
    const int GL_STENCIL_BUFFER_BIT = 0x00000400;
    const int GL_COLOR_BUFFER_BIT = 0x00004000;
    const int GL_FALSE = 0;
    const int GL_TRUE = 1;
    const int GL_POINTS = 0x0000;
    const int GL_LINES = 0x0001;
    const int GL_LINE_LOOP = 0x0002;
    const int GL_LINE_STRIP = 0x0003;
    const int GL_TRIANGLES = 0x0004;
    const int GL_TRIANGLE_STRIP = 0x0005;
    const int GL_TRIANGLE_FAN = 0x0006;
    const int GL_QUADS = 0x0007;
    const int GL_NEVER = 0x0200;
    const int GL_LESS = 0x0201;
    const int GL_EQUAL = 0x0202;
    const int GL_LEQUAL = 0x0203;
    const int GL_GREATER = 0x0204;
    const int GL_NOTEQUAL = 0x0205;
    const int GL_GEQUAL = 0x0206;
    const int GL_ALWAYS = 0x0207;
    const int GL_ZERO = 0;
    const int GL_ONE = 1;
    const int GL_SRC_COLOR = 0x0300;
    const int GL_ONE_MINUS_SRC_COLOR = 0x0301;
    const int GL_SRC_ALPHA = 0x0302;
    const int GL_ONE_MINUS_SRC_ALPHA = 0x0303;
    const int GL_DST_ALPHA = 0x0304;
    const int GL_ONE_MINUS_DST_ALPHA = 0x0305;
    const int GL_DST_COLOR = 0x0306;
    const int GL_ONE_MINUS_DST_COLOR = 0x0307;
    const int GL_SRC_ALPHA_SATURATE = 0x0308;
    const int GL_NONE = 0;
    const int GL_FRONT_LEFT = 0x0400;
    const int GL_FRONT_RIGHT = 0x0401;
    const int GL_BACK_LEFT = 0x0402;
    const int GL_BACK_RIGHT = 0x0403;
    const int GL_FRONT = 0x0404;
    const int GL_BACK = 0x0405;
    const int GL_LEFT = 0x0406;
    const int GL_RIGHT = 0x0407;
    const int GL_FRONT_AND_BACK = 0x0408;
    const int GL_NO_ERROR = 0;
    const int GL_INVALID_ENUM = 0x0500;
    const int GL_INVALID_VALUE = 0x0501;
    const int GL_INVALID_OPERATION = 0x0502;
    const int GL_OUT_OF_MEMORY = 0x0505;
    const int GL_CW = 0x0900;
    const int GL_CCW = 0x0901;
    const int GL_POINT_SIZE = 0x0B11;
    const int GL_POINT_SIZE_RANGE = 0x0B12;
    const int GL_POINT_SIZE_GRANULARITY = 0x0B13;
    const int GL_LINE_SMOOTH = 0x0B20;
    const int GL_LINE_WIDTH = 0x0B21;
    const int GL_LINE_WIDTH_RANGE = 0x0B22;
    const int GL_LINE_WIDTH_GRANULARITY = 0x0B23;
    const int GL_POLYGON_MODE = 0x0B40;
    const int GL_POLYGON_SMOOTH = 0x0B41;
    const int GL_CULL_FACE = 0x0B44;
    const int GL_CULL_FACE_MODE = 0x0B45;
    const int GL_FRONT_FACE = 0x0B46;
    const int GL_DEPTH_RANGE = 0x0B70;
    const int GL_DEPTH_TEST = 0x0B71;
    const int GL_DEPTH_WRITEMASK = 0x0B72;
    const int GL_DEPTH_CLEAR_VALUE = 0x0B73;
    const int GL_DEPTH_FUNC = 0x0B74;
    const int GL_STENCIL_TEST = 0x0B90;
    const int GL_STENCIL_CLEAR_VALUE = 0x0B91;
    const int GL_STENCIL_FUNC = 0x0B92;
    const int GL_STENCIL_VALUE_MASK = 0x0B93;
    const int GL_STENCIL_FAIL = 0x0B94;
    const int GL_STENCIL_PASS_DEPTH_FAIL = 0x0B95;
    const int GL_STENCIL_PASS_DEPTH_PASS = 0x0B96;
    const int GL_STENCIL_REF = 0x0B97;
    const int GL_STENCIL_WRITEMASK = 0x0B98;
    const int GL_VIEWPORT = 0x0BA2;
    const int GL_DITHER = 0x0BD0;
    const int GL_BLEND_DST = 0x0BE0;
    const int GL_BLEND_SRC = 0x0BE1;
    const int GL_BLEND = 0x0BE2;
    const int GL_LOGIC_OP_MODE = 0x0BF0;
    const int GL_DRAW_BUFFER = 0x0C01;
    const int GL_READ_BUFFER = 0x0C02;
    const int GL_SCISSOR_BOX = 0x0C10;
    const int GL_SCISSOR_TEST = 0x0C11;
    const int GL_COLOR_CLEAR_VALUE = 0x0C22;
    const int GL_COLOR_WRITEMASK = 0x0C23;
    const int GL_DOUBLEBUFFER = 0x0C32;
    const int GL_STEREO = 0x0C33;
    const int GL_LINE_SMOOTH_HINT = 0x0C52;
    const int GL_POLYGON_SMOOTH_HINT = 0x0C53;
    const int GL_UNPACK_SWAP_BYTES = 0x0CF0;
    const int GL_UNPACK_LSB_FIRST = 0x0CF1;
    const int GL_UNPACK_ROW_LENGTH = 0x0CF2;
    const int GL_UNPACK_SKIP_ROWS = 0x0CF3;
    const int GL_UNPACK_SKIP_PIXELS = 0x0CF4;
    const int GL_UNPACK_ALIGNMENT = 0x0CF5;
    const int GL_PACK_SWAP_BYTES = 0x0D00;
    const int GL_PACK_LSB_FIRST = 0x0D01;
    const int GL_PACK_ROW_LENGTH = 0x0D02;
    const int GL_PACK_SKIP_ROWS = 0x0D03;
    const int GL_PACK_SKIP_PIXELS = 0x0D04;
    const int GL_PACK_ALIGNMENT = 0x0D05;
    const int GL_MAX_TEXTURE_SIZE = 0x0D33;
    const int GL_MAX_VIEWPORT_DIMS = 0x0D3A;
    const int GL_SUBPIXEL_BITS = 0x0D50;
    const int GL_TEXTURE_1D = 0x0DE0;
    const int GL_TEXTURE_2D = 0x0DE1;
    const int GL_TEXTURE_WIDTH = 0x1000;
    const int GL_TEXTURE_HEIGHT = 0x1001;
    const int GL_TEXTURE_BORDER_COLOR = 0x1004;
    const int GL_DONT_CARE = 0x1100;
    const int GL_FASTEST = 0x1101;
    const int GL_NICEST = 0x1102;
    const int GL_BYTE = 0x1400;
    const int GL_UNSIGNED_BYTE = 0x1401;
    const int GL_SHORT = 0x1402;
    const int GL_UNSIGNED_SHORT = 0x1403;
    const int GL_INT = 0x1404;
    const int GL_UNSIGNED_INT = 0x1405;
    const int GL_FLOAT = 0x1406;
    const int GL_STACK_OVERFLOW = 0x0503;
    const int GL_STACK_UNDERFLOW = 0x0504;
    const int GL_CLEAR = 0x1500;
    const int GL_AND = 0x1501;
    const int GL_AND_REVERSE = 0x1502;
    const int GL_COPY = 0x1503;
    const int GL_AND_INVERTED = 0x1504;
    const int GL_NOOP = 0x1505;
    const int GL_XOR = 0x1506;
    const int GL_OR = 0x1507;
    const int GL_NOR = 0x1508;
    const int GL_EQUIV = 0x1509;
    const int GL_INVERT = 0x150A;
    const int GL_OR_REVERSE = 0x150B;
    const int GL_COPY_INVERTED = 0x150C;
    const int GL_OR_INVERTED = 0x150D;
    const int GL_NAND = 0x150E;
    const int GL_SET = 0x150F;
    const int GL_TEXTURE = 0x1702;
    const int GL_COLOR = 0x1800;
    const int GL_DEPTH = 0x1801;
    const int GL_STENCIL = 0x1802;
    const int GL_STENCIL_INDEX = 0x1901;
    const int GL_DEPTH_COMPONENT = 0x1902;
    const int GL_RED = 0x1903;
    const int GL_GREEN = 0x1904;
    const int GL_BLUE = 0x1905;
    const int GL_ALPHA = 0x1906;
    const int GL_RGB = 0x1907;
    const int GL_RGBA = 0x1908;
    const int GL_POINT = 0x1B00;
    const int GL_LINE = 0x1B01;
    const int GL_FILL = 0x1B02;
    const int GL_KEEP = 0x1E00;
    const int GL_REPLACE = 0x1E01;
    const int GL_INCR = 0x1E02;
    const int GL_DECR = 0x1E03;
    const int GL_VENDOR = 0x1F00;
    const int GL_RENDERER = 0x1F01;
    const int GL_VERSION = 0x1F02;
    const int GL_EXTENSIONS = 0x1F03;
    const int GL_NEAREST = 0x2600;
    const int GL_LINEAR = 0x2601;
    const int GL_NEAREST_MIPMAP_NEAREST = 0x2700;
    const int GL_LINEAR_MIPMAP_NEAREST = 0x2701;
    const int GL_NEAREST_MIPMAP_LINEAR = 0x2702;
    const int GL_LINEAR_MIPMAP_LINEAR = 0x2703;
    const int GL_TEXTURE_MAG_FILTER = 0x2800;
    const int GL_TEXTURE_MIN_FILTER = 0x2801;
    const int GL_TEXTURE_WRAP_S = 0x2802;
    const int GL_TEXTURE_WRAP_T = 0x2803;
    const int GL_REPEAT = 0x2901;
    const int GL_CURRENT_BIT = 0x00000001;
    const int GL_POINT_BIT = 0x00000002;
    const int GL_LINE_BIT = 0x00000004;
    const int GL_POLYGON_BIT = 0x00000008;
    const int GL_POLYGON_STIPPLE_BIT = 0x00000010;
    const int GL_PIXEL_MODE_BIT = 0x00000020;
    const int GL_LIGHTING_BIT = 0x00000040;
    const int GL_FOG_BIT = 0x00000080;
    const int GL_ACCUM_BUFFER_BIT = 0x00000200;
    const int GL_VIEWPORT_BIT = 0x00000800;
    const int GL_TRANSFORM_BIT = 0x00001000;
    const int GL_ENABLE_BIT = 0x00002000;
    const int GL_HINT_BIT = 0x00008000;
    const int GL_EVAL_BIT = 0x00010000;
    const int GL_LIST_BIT = 0x00020000;
    const int GL_TEXTURE_BIT = 0x00040000;
    const int GL_SCISSOR_BIT = 0x00080000;
    const int GL_ALL_ATTRIB_BITS = 0xFFFFFFFF;
    const int GL_QUAD_STRIP = 0x0008;
    const int GL_POLYGON = 0x0009;
    const int GL_ACCUM = 0x0100;
    const int GL_LOAD = 0x0101;
    const int GL_RETURN = 0x0102;
    const int GL_MULT = 0x0103;
    const int GL_ADD = 0x0104;
    const int GL_AUX0 = 0x0409;
    const int GL_AUX1 = 0x040A;
    const int GL_AUX2 = 0x040B;
    const int GL_AUX3 = 0x040C;
    const int GL_2D = 0x0600;
    const int GL_3D = 0x0601;
    const int GL_3D_COLOR = 0x0602;
    const int GL_3D_COLOR_TEXTURE = 0x0603;
    const int GL_4D_COLOR_TEXTURE = 0x0604;
    const int GL_PASS_THROUGH_TOKEN = 0x0700;
    const int GL_POINT_TOKEN = 0x0701;
    const int GL_LINE_TOKEN = 0x0702;
    const int GL_POLYGON_TOKEN = 0x0703;
    const int GL_BITMAP_TOKEN = 0x0704;
    const int GL_DRAW_PIXEL_TOKEN = 0x0705;
    const int GL_COPY_PIXEL_TOKEN = 0x0706;
    const int GL_LINE_RESET_TOKEN = 0x0707;
    const int GL_EXP = 0x0800;
    const int GL_EXP2 = 0x0801;
    const int GL_COEFF = 0x0A00;
    const int GL_ORDER = 0x0A01;
    const int GL_DOMAIN = 0x0A02;
    const int GL_PIXEL_MAP_I_TO_I = 0x0C70;
    const int GL_PIXEL_MAP_S_TO_S = 0x0C71;
    const int GL_PIXEL_MAP_I_TO_R = 0x0C72;
    const int GL_PIXEL_MAP_I_TO_G = 0x0C73;
    const int GL_PIXEL_MAP_I_TO_B = 0x0C74;
    const int GL_PIXEL_MAP_I_TO_A = 0x0C75;
    const int GL_PIXEL_MAP_R_TO_R = 0x0C76;
    const int GL_PIXEL_MAP_G_TO_G = 0x0C77;
    const int GL_PIXEL_MAP_B_TO_B = 0x0C78;
    const int GL_PIXEL_MAP_A_TO_A = 0x0C79;
    const int GL_CURRENT_COLOR = 0x0B00;
    const int GL_CURRENT_INDEX = 0x0B01;
    const int GL_CURRENT_NORMAL = 0x0B02;
    const int GL_CURRENT_TEXTURE_COORDS = 0x0B03;
    const int GL_CURRENT_RASTER_COLOR = 0x0B04;
    const int GL_CURRENT_RASTER_INDEX = 0x0B05;
    const int GL_CURRENT_RASTER_TEXTURE_COORDS = 0x0B06;
    const int GL_CURRENT_RASTER_POSITION = 0x0B07;
    const int GL_CURRENT_RASTER_POSITION_VALID = 0x0B08;
    const int GL_CURRENT_RASTER_DISTANCE = 0x0B09;
    const int GL_POINT_SMOOTH = 0x0B10;
    const int GL_LINE_STIPPLE = 0x0B24;
    const int GL_LINE_STIPPLE_PATTERN = 0x0B25;
    const int GL_LINE_STIPPLE_REPEAT = 0x0B26;
    const int GL_LIST_MODE = 0x0B30;
    const int GL_MAX_LIST_NESTING = 0x0B31;
    const int GL_LIST_BASE = 0x0B32;
    const int GL_LIST_INDEX = 0x0B33;
    const int GL_POLYGON_STIPPLE = 0x0B42;
    const int GL_EDGE_FLAG = 0x0B43;
    const int GL_LIGHTING = 0x0B50;
    const int GL_LIGHT_MODEL_LOCAL_VIEWER = 0x0B51;
    const int GL_LIGHT_MODEL_TWO_SIDE = 0x0B52;
    const int GL_LIGHT_MODEL_AMBIENT = 0x0B53;
    const int GL_SHADE_MODEL = 0x0B54;
    const int GL_COLOR_MATERIAL_FACE = 0x0B55;
    const int GL_COLOR_MATERIAL_PARAMETER = 0x0B56;
    const int GL_COLOR_MATERIAL = 0x0B57;
    const int GL_FOG = 0x0B60;
    const int GL_FOG_INDEX = 0x0B61;
    const int GL_FOG_DENSITY = 0x0B62;
    const int GL_FOG_START = 0x0B63;
    const int GL_FOG_END = 0x0B64;
    const int GL_FOG_MODE = 0x0B65;
    const int GL_FOG_COLOR = 0x0B66;
    const int GL_ACCUM_CLEAR_VALUE = 0x0B80;
    const int GL_MATRIX_MODE = 0x0BA0;
    const int GL_NORMALIZE = 0x0BA1;
    const int GL_MODELVIEW_STACK_DEPTH = 0x0BA3;
    const int GL_PROJECTION_STACK_DEPTH = 0x0BA4;
    const int GL_TEXTURE_STACK_DEPTH = 0x0BA5;
    const int GL_MODELVIEW_MATRIX = 0x0BA6;
    const int GL_PROJECTION_MATRIX = 0x0BA7;
    const int GL_TEXTURE_MATRIX = 0x0BA8;
    const int GL_ATTRIB_STACK_DEPTH = 0x0BB0;
    const int GL_ALPHA_TEST = 0x0BC0;
    const int GL_ALPHA_TEST_FUNC = 0x0BC1;
    const int GL_ALPHA_TEST_REF = 0x0BC2;
    const int GL_LOGIC_OP = 0x0BF1;
    const int GL_AUX_BUFFERS = 0x0C00;
    const int GL_INDEX_CLEAR_VALUE = 0x0C20;
    const int GL_INDEX_WRITEMASK = 0x0C21;
    const int GL_INDEX_MODE = 0x0C30;
    const int GL_RGBA_MODE = 0x0C31;
    const int GL_RENDER_MODE = 0x0C40;
    const int GL_PERSPECTIVE_CORRECTION_HINT = 0x0C50;
    const int GL_POINT_SMOOTH_HINT = 0x0C51;
    const int GL_FOG_HINT = 0x0C54;
    const int GL_TEXTURE_GEN_S = 0x0C60;
    const int GL_TEXTURE_GEN_T = 0x0C61;
    const int GL_TEXTURE_GEN_R = 0x0C62;
    const int GL_TEXTURE_GEN_Q = 0x0C63;
    const int GL_PIXEL_MAP_I_TO_I_SIZE = 0x0CB0;
    const int GL_PIXEL_MAP_S_TO_S_SIZE = 0x0CB1;
    const int GL_PIXEL_MAP_I_TO_R_SIZE = 0x0CB2;
    const int GL_PIXEL_MAP_I_TO_G_SIZE = 0x0CB3;
    const int GL_PIXEL_MAP_I_TO_B_SIZE = 0x0CB4;
    const int GL_PIXEL_MAP_I_TO_A_SIZE = 0x0CB5;
    const int GL_PIXEL_MAP_R_TO_R_SIZE = 0x0CB6;
    const int GL_PIXEL_MAP_G_TO_G_SIZE = 0x0CB7;
    const int GL_PIXEL_MAP_B_TO_B_SIZE = 0x0CB8;
    const int GL_PIXEL_MAP_A_TO_A_SIZE = 0x0CB9;
    const int GL_MAP_COLOR = 0x0D10;
    const int GL_MAP_STENCIL = 0x0D11;
    const int GL_INDEX_SHIFT = 0x0D12;
    const int GL_INDEX_OFFSET = 0x0D13;
    const int GL_RED_SCALE = 0x0D14;
    const int GL_RED_BIAS = 0x0D15;
    const int GL_ZOOM_X = 0x0D16;
    const int GL_ZOOM_Y = 0x0D17;
    const int GL_GREEN_SCALE = 0x0D18;
    const int GL_GREEN_BIAS = 0x0D19;
    const int GL_BLUE_SCALE = 0x0D1A;
    const int GL_BLUE_BIAS = 0x0D1B;
    const int GL_ALPHA_SCALE = 0x0D1C;
    const int GL_ALPHA_BIAS = 0x0D1D;
    const int GL_DEPTH_SCALE = 0x0D1E;
    const int GL_DEPTH_BIAS = 0x0D1F;
    const int GL_MAX_EVAL_ORDER = 0x0D30;
    const int GL_MAX_LIGHTS = 0x0D31;
    const int GL_MAX_CLIP_PLANES = 0x0D32;
    const int GL_MAX_PIXEL_MAP_TABLE = 0x0D34;
    const int GL_MAX_ATTRIB_STACK_DEPTH = 0x0D35;
    const int GL_MAX_MODELVIEW_STACK_DEPTH = 0x0D36;
    const int GL_MAX_NAME_STACK_DEPTH = 0x0D37;
    const int GL_MAX_PROJECTION_STACK_DEPTH = 0x0D38;
    const int GL_MAX_TEXTURE_STACK_DEPTH = 0x0D39;
    const int GL_INDEX_BITS = 0x0D51;
    const int GL_RED_BITS = 0x0D52;
    const int GL_GREEN_BITS = 0x0D53;
    const int GL_BLUE_BITS = 0x0D54;
    const int GL_ALPHA_BITS = 0x0D55;
    const int GL_DEPTH_BITS = 0x0D56;
    const int GL_STENCIL_BITS = 0x0D57;
    const int GL_ACCUM_RED_BITS = 0x0D58;
    const int GL_ACCUM_GREEN_BITS = 0x0D59;
    const int GL_ACCUM_BLUE_BITS = 0x0D5A;
    const int GL_ACCUM_ALPHA_BITS = 0x0D5B;
    const int GL_NAME_STACK_DEPTH = 0x0D70;
    const int GL_AUTO_NORMAL = 0x0D80;
    const int GL_MAP1_COLOR_4 = 0x0D90;
    const int GL_MAP1_INDEX = 0x0D91;
    const int GL_MAP1_NORMAL = 0x0D92;
    const int GL_MAP1_TEXTURE_COORD_1 = 0x0D93;
    const int GL_MAP1_TEXTURE_COORD_2 = 0x0D94;
    const int GL_MAP1_TEXTURE_COORD_3 = 0x0D95;
    const int GL_MAP1_TEXTURE_COORD_4 = 0x0D96;
    const int GL_MAP1_VERTEX_3 = 0x0D97;
    const int GL_MAP1_VERTEX_4 = 0x0D98;
    const int GL_MAP2_COLOR_4 = 0x0DB0;
    const int GL_MAP2_INDEX = 0x0DB1;
    const int GL_MAP2_NORMAL = 0x0DB2;
    const int GL_MAP2_TEXTURE_COORD_1 = 0x0DB3;
    const int GL_MAP2_TEXTURE_COORD_2 = 0x0DB4;
    const int GL_MAP2_TEXTURE_COORD_3 = 0x0DB5;
    const int GL_MAP2_TEXTURE_COORD_4 = 0x0DB6;
    const int GL_MAP2_VERTEX_3 = 0x0DB7;
    const int GL_MAP2_VERTEX_4 = 0x0DB8;
    const int GL_MAP1_GRID_DOMAIN = 0x0DD0;
    const int GL_MAP1_GRID_SEGMENTS = 0x0DD1;
    const int GL_MAP2_GRID_DOMAIN = 0x0DD2;
    const int GL_MAP2_GRID_SEGMENTS = 0x0DD3;
    const int GL_TEXTURE_COMPONENTS = 0x1003;
    const int GL_TEXTURE_BORDER = 0x1005;
    const int GL_AMBIENT = 0x1200;
    const int GL_DIFFUSE = 0x1201;
    const int GL_SPECULAR = 0x1202;
    const int GL_POSITION = 0x1203;
    const int GL_SPOT_DIRECTION = 0x1204;
    const int GL_SPOT_EXPONENT = 0x1205;
    const int GL_SPOT_CUTOFF = 0x1206;
    const int GL_CONSTANT_ATTENUATION = 0x1207;
    const int GL_LINEAR_ATTENUATION = 0x1208;
    const int GL_QUADRATIC_ATTENUATION = 0x1209;
    const int GL_COMPILE = 0x1300;
    const int GL_COMPILE_AND_EXECUTE = 0x1301;
    const int GL_2_BYTES = 0x1407;
    const int GL_3_BYTES = 0x1408;
    const int GL_4_BYTES = 0x1409;
    const int GL_EMISSION = 0x1600;
    const int GL_SHININESS = 0x1601;
    const int GL_AMBIENT_AND_DIFFUSE = 0x1602;
    const int GL_COLOR_INDEXES = 0x1603;
    const int GL_MODELVIEW = 0x1700;
    const int GL_PROJECTION = 0x1701;
    const int GL_COLOR_INDEX = 0x1900;
    const int GL_LUMINANCE = 0x1909;
    const int GL_LUMINANCE_ALPHA = 0x190A;
    const int GL_BITMAP = 0x1A00;
    const int GL_RENDER = 0x1C00;
    const int GL_FEEDBACK = 0x1C01;
    const int GL_SELECT = 0x1C02;
    const int GL_FLAT = 0x1D00;
    const int GL_SMOOTH = 0x1D01;
    const int GL_S = 0x2000;
    const int GL_T = 0x2001;
    const int GL_R = 0x2002;
    const int GL_Q = 0x2003;
    const int GL_MODULATE = 0x2100;
    const int GL_DECAL = 0x2101;
    const int GL_TEXTURE_ENV_MODE = 0x2200;
    const int GL_TEXTURE_ENV_COLOR = 0x2201;
    const int GL_TEXTURE_ENV = 0x2300;
    const int GL_EYE_LINEAR = 0x2400;
    const int GL_OBJECT_LINEAR = 0x2401;
    const int GL_SPHERE_MAP = 0x2402;
    const int GL_TEXTURE_GEN_MODE = 0x2500;
    const int GL_OBJECT_PLANE = 0x2501;
    const int GL_EYE_PLANE = 0x2502;
    const int GL_CLAMP = 0x2900;
    const int GL_CLIP_PLANE0 = 0x3000;
    const int GL_CLIP_PLANE1 = 0x3001;
    const int GL_CLIP_PLANE2 = 0x3002;
    const int GL_CLIP_PLANE3 = 0x3003;
    const int GL_CLIP_PLANE4 = 0x3004;
    const int GL_CLIP_PLANE5 = 0x3005;
    const int GL_LIGHT0 = 0x4000;
    const int GL_LIGHT1 = 0x4001;
    const int GL_LIGHT2 = 0x4002;
    const int GL_LIGHT3 = 0x4003;
    const int GL_LIGHT4 = 0x4004;
    const int GL_LIGHT5 = 0x4005;
    const int GL_LIGHT6 = 0x4006;
    const int GL_LIGHT7 = 0x4007;
    const int GL_COLOR_LOGIC_OP = 0x0BF2;
    const int GL_POLYGON_OFFSET_UNITS = 0x2A00;
    const int GL_POLYGON_OFFSET_POINT = 0x2A01;
    const int GL_POLYGON_OFFSET_LINE = 0x2A02;
    const int GL_POLYGON_OFFSET_FILL = 0x8037;
    const int GL_POLYGON_OFFSET_FACTOR = 0x8038;
    const int GL_TEXTURE_BINDING_1D = 0x8068;
    const int GL_TEXTURE_BINDING_2D = 0x8069;
    const int GL_TEXTURE_INTERNAL_FORMAT = 0x1003;
    const int GL_TEXTURE_RED_SIZE = 0x805C;
    const int GL_TEXTURE_GREEN_SIZE = 0x805D;
    const int GL_TEXTURE_BLUE_SIZE = 0x805E;
    const int GL_TEXTURE_ALPHA_SIZE = 0x805F;
    const int GL_DOUBLE = 0x140A;
    const int GL_PROXY_TEXTURE_1D = 0x8063;
    const int GL_PROXY_TEXTURE_2D = 0x8064;
    const int GL_R3_G3_B2 = 0x2A10;
    const int GL_RGB4 = 0x804F;
    const int GL_RGB5 = 0x8050;
    const int GL_RGB8 = 0x8051;
    const int GL_RGB10 = 0x8052;
    const int GL_RGB12 = 0x8053;
    const int GL_RGB16 = 0x8054;
    const int GL_RGBA2 = 0x8055;
    const int GL_RGBA4 = 0x8056;
    const int GL_RGB5_A1 = 0x8057;
    const int GL_RGBA8 = 0x8058;
    const int GL_RGB10_A2 = 0x8059;
    const int GL_RGBA12 = 0x805A;
    const int GL_RGBA16 = 0x805B;
    const int GL_CLIENT_PIXEL_STORE_BIT = 0x00000001;
    const int GL_CLIENT_VERTEX_ARRAY_BIT = 0x00000002;
    const int GL_CLIENT_ALL_ATTRIB_BITS = 0xFFFFFFFF;
    const int GL_VERTEX_ARRAY_POINTER = 0x808E;
    const int GL_NORMAL_ARRAY_POINTER = 0x808F;
    const int GL_COLOR_ARRAY_POINTER = 0x8090;
    const int GL_INDEX_ARRAY_POINTER = 0x8091;
    const int GL_TEXTURE_COORD_ARRAY_POINTER = 0x8092;
    const int GL_EDGE_FLAG_ARRAY_POINTER = 0x8093;
    const int GL_FEEDBACK_BUFFER_POINTER = 0x0DF0;
    const int GL_SELECTION_BUFFER_POINTER = 0x0DF3;
    const int GL_CLIENT_ATTRIB_STACK_DEPTH = 0x0BB1;
    const int GL_INDEX_LOGIC_OP = 0x0BF1;
    const int GL_MAX_CLIENT_ATTRIB_STACK_DEPTH = 0x0D3B;
    const int GL_FEEDBACK_BUFFER_SIZE = 0x0DF1;
    const int GL_FEEDBACK_BUFFER_TYPE = 0x0DF2;
    const int GL_SELECTION_BUFFER_SIZE = 0x0DF4;
    const int GL_VERTEX_ARRAY = 0x8074;
    const int GL_NORMAL_ARRAY = 0x8075;
    const int GL_COLOR_ARRAY = 0x8076;
    const int GL_INDEX_ARRAY = 0x8077;
    const int GL_TEXTURE_COORD_ARRAY = 0x8078;
    const int GL_EDGE_FLAG_ARRAY = 0x8079;
    const int GL_VERTEX_ARRAY_SIZE = 0x807A;
    const int GL_VERTEX_ARRAY_TYPE = 0x807B;
    const int GL_VERTEX_ARRAY_STRIDE = 0x807C;
    const int GL_NORMAL_ARRAY_TYPE = 0x807E;
    const int GL_NORMAL_ARRAY_STRIDE = 0x807F;
    const int GL_COLOR_ARRAY_SIZE = 0x8081;
    const int GL_COLOR_ARRAY_TYPE = 0x8082;
    const int GL_COLOR_ARRAY_STRIDE = 0x8083;
    const int GL_INDEX_ARRAY_TYPE = 0x8085;
    const int GL_INDEX_ARRAY_STRIDE = 0x8086;
    const int GL_TEXTURE_COORD_ARRAY_SIZE = 0x8088;
    const int GL_TEXTURE_COORD_ARRAY_TYPE = 0x8089;
    const int GL_TEXTURE_COORD_ARRAY_STRIDE = 0x808A;
    const int GL_EDGE_FLAG_ARRAY_STRIDE = 0x808C;
    const int GL_TEXTURE_LUMINANCE_SIZE = 0x8060;
    const int GL_TEXTURE_INTENSITY_SIZE = 0x8061;
    const int GL_TEXTURE_PRIORITY = 0x8066;
    const int GL_TEXTURE_RESIDENT = 0x8067;
    const int GL_ALPHA4 = 0x803B;
    const int GL_ALPHA8 = 0x803C;
    const int GL_ALPHA12 = 0x803D;
    const int GL_ALPHA16 = 0x803E;
    const int GL_LUMINANCE4 = 0x803F;
    const int GL_LUMINANCE8 = 0x8040;
    const int GL_LUMINANCE12 = 0x8041;
    const int GL_LUMINANCE16 = 0x8042;
    const int GL_LUMINANCE4_ALPHA4 = 0x8043;
    const int GL_LUMINANCE6_ALPHA2 = 0x8044;
    const int GL_LUMINANCE8_ALPHA8 = 0x8045;
    const int GL_LUMINANCE12_ALPHA4 = 0x8046;
    const int GL_LUMINANCE12_ALPHA12 = 0x8047;
    const int GL_LUMINANCE16_ALPHA16 = 0x8048;
    const int GL_INTENSITY = 0x8049;
    const int GL_INTENSITY4 = 0x804A;
    const int GL_INTENSITY8 = 0x804B;
    const int GL_INTENSITY12 = 0x804C;
    const int GL_INTENSITY16 = 0x804D;
    const int GL_V2F = 0x2A20;
    const int GL_V3F = 0x2A21;
    const int GL_C4UB_V2F = 0x2A22;
    const int GL_C4UB_V3F = 0x2A23;
    const int GL_C3F_V3F = 0x2A24;
    const int GL_N3F_V3F = 0x2A25;
    const int GL_C4F_N3F_V3F = 0x2A26;
    const int GL_T2F_V3F = 0x2A27;
    const int GL_T4F_V4F = 0x2A28;
    const int GL_T2F_C4UB_V3F = 0x2A29;
    const int GL_T2F_C3F_V3F = 0x2A2A;
    const int GL_T2F_N3F_V3F = 0x2A2B;
    const int GL_T2F_C4F_N3F_V3F = 0x2A2C;
    const int GL_T4F_C4F_N3F_V4F = 0x2A2D;
    const int GL_UNSIGNED_BYTE_3_3_2 = 0x8032;
    const int GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033;
    const int GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034;
    const int GL_UNSIGNED_INT_8_8_8_8 = 0x8035;
    const int GL_UNSIGNED_INT_10_10_10_2 = 0x8036;
    const int GL_TEXTURE_BINDING_3D = 0x806A;
    const int GL_PACK_SKIP_IMAGES = 0x806B;
    const int GL_PACK_IMAGE_HEIGHT = 0x806C;
    const int GL_UNPACK_SKIP_IMAGES = 0x806D;
    const int GL_UNPACK_IMAGE_HEIGHT = 0x806E;
    const int GL_TEXTURE_3D = 0x806F;
    const int GL_PROXY_TEXTURE_3D = 0x8070;
    const int GL_TEXTURE_DEPTH = 0x8071;
    const int GL_TEXTURE_WRAP_R = 0x8072;
    const int GL_MAX_3D_TEXTURE_SIZE = 0x8073;
    const int GL_UNSIGNED_BYTE_2_3_3_REV = 0x8362;
    const int GL_UNSIGNED_SHORT_5_6_5 = 0x8363;
    const int GL_UNSIGNED_SHORT_5_6_5_REV = 0x8364;
    const int GL_UNSIGNED_SHORT_4_4_4_4_REV = 0x8365;
    const int GL_UNSIGNED_SHORT_1_5_5_5_REV = 0x8366;
    const int GL_UNSIGNED_INT_8_8_8_8_REV = 0x8367;
    const int GL_UNSIGNED_INT_2_10_10_10_REV = 0x8368;
    const int GL_BGR = 0x80E0;
    const int GL_BGRA = 0x80E1;
    const int GL_MAX_ELEMENTS_VERTICES = 0x80E8;
    const int GL_MAX_ELEMENTS_INDICES = 0x80E9;
    const int GL_CLAMP_TO_EDGE = 0x812F;
    const int GL_TEXTURE_MIN_LOD = 0x813A;
    const int GL_TEXTURE_MAX_LOD = 0x813B;
    const int GL_TEXTURE_BASE_LEVEL = 0x813C;
    const int GL_TEXTURE_MAX_LEVEL = 0x813D;
    const int GL_SMOOTH_POINT_SIZE_RANGE = 0x0B12;
    const int GL_SMOOTH_POINT_SIZE_GRANULARITY = 0x0B13;
    const int GL_SMOOTH_LINE_WIDTH_RANGE = 0x0B22;
    const int GL_SMOOTH_LINE_WIDTH_GRANULARITY = 0x0B23;
    const int GL_ALIASED_LINE_WIDTH_RANGE = 0x846E;
    const int GL_RESCALE_NORMAL = 0x803A;
    const int GL_LIGHT_MODEL_COLOR_CONTROL = 0x81F8;
    const int GL_SINGLE_COLOR = 0x81F9;
    const int GL_SEPARATE_SPECULAR_COLOR = 0x81FA;
    const int GL_ALIASED_POINT_SIZE_RANGE = 0x846D;
    const int GL_TEXTURE0 = 0x84C0;
    const int GL_TEXTURE1 = 0x84C1;
    const int GL_TEXTURE2 = 0x84C2;
    const int GL_TEXTURE3 = 0x84C3;
    const int GL_TEXTURE4 = 0x84C4;
    const int GL_TEXTURE5 = 0x84C5;
    const int GL_TEXTURE6 = 0x84C6;
    const int GL_TEXTURE7 = 0x84C7;
    const int GL_TEXTURE8 = 0x84C8;
    const int GL_TEXTURE9 = 0x84C9;
    const int GL_TEXTURE10 = 0x84CA;
    const int GL_TEXTURE11 = 0x84CB;
    const int GL_TEXTURE12 = 0x84CC;
    const int GL_TEXTURE13 = 0x84CD;
    const int GL_TEXTURE14 = 0x84CE;
    const int GL_TEXTURE15 = 0x84CF;
    const int GL_TEXTURE16 = 0x84D0;
    const int GL_TEXTURE17 = 0x84D1;
    const int GL_TEXTURE18 = 0x84D2;
    const int GL_TEXTURE19 = 0x84D3;
    const int GL_TEXTURE20 = 0x84D4;
    const int GL_TEXTURE21 = 0x84D5;
    const int GL_TEXTURE22 = 0x84D6;
    const int GL_TEXTURE23 = 0x84D7;
    const int GL_TEXTURE24 = 0x84D8;
    const int GL_TEXTURE25 = 0x84D9;
    const int GL_TEXTURE26 = 0x84DA;
    const int GL_TEXTURE27 = 0x84DB;
    const int GL_TEXTURE28 = 0x84DC;
    const int GL_TEXTURE29 = 0x84DD;
    const int GL_TEXTURE30 = 0x84DE;
    const int GL_TEXTURE31 = 0x84DF;
    const int GL_ACTIVE_TEXTURE = 0x84E0;
    const int GL_MULTISAMPLE = 0x809D;
    const int GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E;
    const int GL_SAMPLE_ALPHA_TO_ONE = 0x809F;
    const int GL_SAMPLE_COVERAGE = 0x80A0;
    const int GL_SAMPLE_BUFFERS = 0x80A8;
    const int GL_SAMPLES = 0x80A9;
    const int GL_SAMPLE_COVERAGE_VALUE = 0x80AA;
    const int GL_SAMPLE_COVERAGE_INVERT = 0x80AB;
    const int GL_TEXTURE_CUBE_MAP = 0x8513;
    const int GL_TEXTURE_BINDING_CUBE_MAP = 0x8514;
    const int GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515;
    const int GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516;
    const int GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517;
    const int GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518;
    const int GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519;
    const int GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A;
    const int GL_PROXY_TEXTURE_CUBE_MAP = 0x851B;
    const int GL_MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C;
    const int GL_COMPRESSED_RGB = 0x84ED;
    const int GL_COMPRESSED_RGBA = 0x84EE;
    const int GL_TEXTURE_COMPRESSION_HINT = 0x84EF;
    const int GL_TEXTURE_COMPRESSED_IMAGE_SIZE = 0x86A0;
    const int GL_TEXTURE_COMPRESSED = 0x86A1;
    const int GL_NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2;
    const int GL_COMPRESSED_TEXTURE_FORMATS = 0x86A3;
    const int GL_CLAMP_TO_BORDER = 0x812D;
    const int GL_CLIENT_ACTIVE_TEXTURE = 0x84E1;
    const int GL_MAX_TEXTURE_UNITS = 0x84E2;
    const int GL_TRANSPOSE_MODELVIEW_MATRIX = 0x84E3;
    const int GL_TRANSPOSE_PROJECTION_MATRIX = 0x84E4;
    const int GL_TRANSPOSE_TEXTURE_MATRIX = 0x84E5;
    const int GL_TRANSPOSE_COLOR_MATRIX = 0x84E6;
    const int GL_MULTISAMPLE_BIT = 0x20000000;
    const int GL_NORMAL_MAP = 0x8511;
    const int GL_REFLECTION_MAP = 0x8512;
    const int GL_COMPRESSED_ALPHA = 0x84E9;
    const int GL_COMPRESSED_LUMINANCE = 0x84EA;
    const int GL_COMPRESSED_LUMINANCE_ALPHA = 0x84EB;
    const int GL_COMPRESSED_INTENSITY = 0x84EC;
    const int GL_COMBINE = 0x8570;
    const int GL_COMBINE_RGB = 0x8571;
    const int GL_COMBINE_ALPHA = 0x8572;
    const int GL_SOURCE0_RGB = 0x8580;
    const int GL_SOURCE1_RGB = 0x8581;
    const int GL_SOURCE2_RGB = 0x8582;
    const int GL_SOURCE0_ALPHA = 0x8588;
    const int GL_SOURCE1_ALPHA = 0x8589;
    const int GL_SOURCE2_ALPHA = 0x858A;
    const int GL_OPERAND0_RGB = 0x8590;
    const int GL_OPERAND1_RGB = 0x8591;
    const int GL_OPERAND2_RGB = 0x8592;
    const int GL_OPERAND0_ALPHA = 0x8598;
    const int GL_OPERAND1_ALPHA = 0x8599;
    const int GL_OPERAND2_ALPHA = 0x859A;
    const int GL_RGB_SCALE = 0x8573;
    const int GL_ADD_SIGNED = 0x8574;
    const int GL_INTERPOLATE = 0x8575;
    const int GL_SUBTRACT = 0x84E7;
    const int GL_CONSTANT = 0x8576;
    const int GL_PRIMARY_COLOR = 0x8577;
    const int GL_PREVIOUS = 0x8578;
    const int GL_DOT3_RGB = 0x86AE;
    const int GL_DOT3_RGBA = 0x86AF;
    const int GL_BLEND_DST_RGB = 0x80C8;
    const int GL_BLEND_SRC_RGB = 0x80C9;
    const int GL_BLEND_DST_ALPHA = 0x80CA;
    const int GL_BLEND_SRC_ALPHA = 0x80CB;
    const int GL_POINT_FADE_THRESHOLD_SIZE = 0x8128;
    const int GL_DEPTH_COMPONENT16 = 0x81A5;
    const int GL_DEPTH_COMPONENT24 = 0x81A6;
    const int GL_DEPTH_COMPONENT32 = 0x81A7;
    const int GL_MIRRORED_REPEAT = 0x8370;
    const int GL_MAX_TEXTURE_LOD_BIAS = 0x84FD;
    const int GL_TEXTURE_LOD_BIAS = 0x8501;
    const int GL_INCR_WRAP = 0x8507;
    const int GL_DECR_WRAP = 0x8508;
    const int GL_TEXTURE_DEPTH_SIZE = 0x884A;
    const int GL_TEXTURE_COMPARE_MODE = 0x884C;
    const int GL_TEXTURE_COMPARE_FUNC = 0x884D;
    const int GL_POINT_SIZE_MIN = 0x8126;
    const int GL_POINT_SIZE_MAX = 0x8127;
    const int GL_POINT_DISTANCE_ATTENUATION = 0x8129;
    const int GL_GENERATE_MIPMAP = 0x8191;
    const int GL_GENERATE_MIPMAP_HINT = 0x8192;
    const int GL_FOG_COORDINATE_SOURCE = 0x8450;
    const int GL_FOG_COORDINATE = 0x8451;
    const int GL_FRAGMENT_DEPTH = 0x8452;
    const int GL_CURRENT_FOG_COORDINATE = 0x8453;
    const int GL_FOG_COORDINATE_ARRAY_TYPE = 0x8454;
    const int GL_FOG_COORDINATE_ARRAY_STRIDE = 0x8455;
    const int GL_FOG_COORDINATE_ARRAY_POINTER = 0x8456;
    const int GL_FOG_COORDINATE_ARRAY = 0x8457;
    const int GL_COLOR_SUM = 0x8458;
    const int GL_CURRENT_SECONDARY_COLOR = 0x8459;
    const int GL_SECONDARY_COLOR_ARRAY_SIZE = 0x845A;
    const int GL_SECONDARY_COLOR_ARRAY_TYPE = 0x845B;
    const int GL_SECONDARY_COLOR_ARRAY_STRIDE = 0x845C;
    const int GL_SECONDARY_COLOR_ARRAY_POINTER = 0x845D;
    const int GL_SECONDARY_COLOR_ARRAY = 0x845E;
    const int GL_TEXTURE_FILTER_CONTROL = 0x8500;
    const int GL_DEPTH_TEXTURE_MODE = 0x884B;
    const int GL_COMPARE_R_TO_TEXTURE = 0x884E;
    const int GL_BLEND_COLOR = 0x8005;
    const int GL_BLEND_EQUATION = 0x8009;
    const int GL_CONSTANT_COLOR = 0x8001;
    const int GL_ONE_MINUS_CONSTANT_COLOR = 0x8002;
    const int GL_CONSTANT_ALPHA = 0x8003;
    const int GL_ONE_MINUS_CONSTANT_ALPHA = 0x8004;
    const int GL_FUNC_ADD = 0x8006;
    const int GL_FUNC_REVERSE_SUBTRACT = 0x800B;
    const int GL_FUNC_SUBTRACT = 0x800A;
    const int GL_MIN = 0x8007;
    const int GL_MAX = 0x8008;
    const int GL_BUFFER_SIZE = 0x8764;
    const int GL_BUFFER_USAGE = 0x8765;
    const int GL_QUERY_COUNTER_BITS = 0x8864;
    const int GL_CURRENT_QUERY = 0x8865;
    const int GL_QUERY_RESULT = 0x8866;
    const int GL_QUERY_RESULT_AVAILABLE = 0x8867;
    const int GL_ARRAY_BUFFER = 0x8892;
    const int GL_ELEMENT_ARRAY_BUFFER = 0x8893;
    const int GL_ARRAY_BUFFER_BINDING = 0x8894;
    const int GL_ELEMENT_ARRAY_BUFFER_BINDING = 0x8895;
    const int GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F;
    const int GL_READ_ONLY = 0x88B8;
    const int GL_WRITE_ONLY = 0x88B9;
    const int GL_READ_WRITE = 0x88BA;
    const int GL_BUFFER_ACCESS = 0x88BB;
    const int GL_BUFFER_MAPPED = 0x88BC;
    const int GL_BUFFER_MAP_POINTER = 0x88BD;
    const int GL_STREAM_DRAW = 0x88E0;
    const int GL_STREAM_READ = 0x88E1;
    const int GL_STREAM_COPY = 0x88E2;
    const int GL_STATIC_DRAW = 0x88E4;
    const int GL_STATIC_READ = 0x88E5;
    const int GL_STATIC_COPY = 0x88E6;
    const int GL_DYNAMIC_DRAW = 0x88E8;
    const int GL_DYNAMIC_READ = 0x88E9;
    const int GL_DYNAMIC_COPY = 0x88EA;
    const int GL_SAMPLES_PASSED = 0x8914;
    const int GL_SRC1_ALPHA = 0x8589;
    const int GL_VERTEX_ARRAY_BUFFER_BINDING = 0x8896;
    const int GL_NORMAL_ARRAY_BUFFER_BINDING = 0x8897;
    const int GL_COLOR_ARRAY_BUFFER_BINDING = 0x8898;
    const int GL_INDEX_ARRAY_BUFFER_BINDING = 0x8899;
    const int GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = 0x889A;
    const int GL_EDGE_FLAG_ARRAY_BUFFER_BINDING = 0x889B;
    const int GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING = 0x889C;
    const int GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING = 0x889D;
    const int GL_WEIGHT_ARRAY_BUFFER_BINDING = 0x889E;
    const int GL_FOG_COORD_SRC = 0x8450;
    const int GL_FOG_COORD = 0x8451;
    const int GL_CURRENT_FOG_COORD = 0x8453;
    const int GL_FOG_COORD_ARRAY_TYPE = 0x8454;
    const int GL_FOG_COORD_ARRAY_STRIDE = 0x8455;
    const int GL_FOG_COORD_ARRAY_POINTER = 0x8456;
    const int GL_FOG_COORD_ARRAY = 0x8457;
    const int GL_FOG_COORD_ARRAY_BUFFER_BINDING = 0x889D;
    const int GL_SRC0_RGB = 0x8580;
    const int GL_SRC1_RGB = 0x8581;
    const int GL_SRC2_RGB = 0x8582;
    const int GL_SRC0_ALPHA = 0x8588;
    const int GL_SRC2_ALPHA = 0x858A;
    const int GL_BLEND_EQUATION_RGB = 0x8009;
    const int GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622;
    const int GL_VERTEX_ATTRIB_ARRAY_SIZE = 0x8623;
    const int GL_VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624;
    const int GL_VERTEX_ATTRIB_ARRAY_TYPE = 0x8625;
    const int GL_CURRENT_VERTEX_ATTRIB = 0x8626;
    const int GL_VERTEX_PROGRAM_POINT_SIZE = 0x8642;
    const int GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645;
    const int GL_STENCIL_BACK_FUNC = 0x8800;
    const int GL_STENCIL_BACK_FAIL = 0x8801;
    const int GL_STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802;
    const int GL_STENCIL_BACK_PASS_DEPTH_PASS = 0x8803;
    const int GL_MAX_DRAW_BUFFERS = 0x8824;
    const int GL_DRAW_BUFFER0 = 0x8825;
    const int GL_DRAW_BUFFER1 = 0x8826;
    const int GL_DRAW_BUFFER2 = 0x8827;
    const int GL_DRAW_BUFFER3 = 0x8828;
    const int GL_DRAW_BUFFER4 = 0x8829;
    const int GL_DRAW_BUFFER5 = 0x882A;
    const int GL_DRAW_BUFFER6 = 0x882B;
    const int GL_DRAW_BUFFER7 = 0x882C;
    const int GL_DRAW_BUFFER8 = 0x882D;
    const int GL_DRAW_BUFFER9 = 0x882E;
    const int GL_DRAW_BUFFER10 = 0x882F;
    const int GL_DRAW_BUFFER11 = 0x8830;
    const int GL_DRAW_BUFFER12 = 0x8831;
    const int GL_DRAW_BUFFER13 = 0x8832;
    const int GL_DRAW_BUFFER14 = 0x8833;
    const int GL_DRAW_BUFFER15 = 0x8834;
    const int GL_BLEND_EQUATION_ALPHA = 0x883D;
    const int GL_MAX_VERTEX_ATTRIBS = 0x8869;
    const int GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A;
    const int GL_MAX_TEXTURE_IMAGE_UNITS = 0x8872;
    const int GL_FRAGMENT_SHADER = 0x8B30;
    const int GL_VERTEX_SHADER = 0x8B31;
    const int GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49;
    const int GL_MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A;
    const int GL_MAX_VARYING_FLOATS = 0x8B4B;
    const int GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C;
    const int GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D;
    const int GL_SHADER_TYPE = 0x8B4F;
    const int GL_FLOAT_VEC2 = 0x8B50;
    const int GL_FLOAT_VEC3 = 0x8B51;
    const int GL_FLOAT_VEC4 = 0x8B52;
    const int GL_INT_VEC2 = 0x8B53;
    const int GL_INT_VEC3 = 0x8B54;
    const int GL_INT_VEC4 = 0x8B55;
    const int GL_BOOL = 0x8B56;
    const int GL_BOOL_VEC2 = 0x8B57;
    const int GL_BOOL_VEC3 = 0x8B58;
    const int GL_BOOL_VEC4 = 0x8B59;
    const int GL_FLOAT_MAT2 = 0x8B5A;
    const int GL_FLOAT_MAT3 = 0x8B5B;
    const int GL_FLOAT_MAT4 = 0x8B5C;
    const int GL_SAMPLER_1D = 0x8B5D;
    const int GL_SAMPLER_2D = 0x8B5E;
    const int GL_SAMPLER_3D = 0x8B5F;
    const int GL_SAMPLER_CUBE = 0x8B60;
    const int GL_SAMPLER_1D_SHADOW = 0x8B61;
    const int GL_SAMPLER_2D_SHADOW = 0x8B62;
    const int GL_DELETE_STATUS = 0x8B80;
    const int GL_COMPILE_STATUS = 0x8B81;
    const int GL_LINK_STATUS = 0x8B82;
    const int GL_VALIDATE_STATUS = 0x8B83;
    const int GL_INFO_LOG_LENGTH = 0x8B84;
    const int GL_ATTACHED_SHADERS = 0x8B85;
    const int GL_ACTIVE_UNIFORMS = 0x8B86;
    const int GL_ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87;
    const int GL_SHADER_SOURCE_LENGTH = 0x8B88;
    const int GL_ACTIVE_ATTRIBUTES = 0x8B89;
    const int GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A;
    const int GL_FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B;
    const int GL_SHADING_LANGUAGE_VERSION = 0x8B8C;
    const int GL_CURRENT_PROGRAM = 0x8B8D;
    const int GL_POINT_SPRITE_COORD_ORIGIN = 0x8CA0;
    const int GL_LOWER_LEFT = 0x8CA1;
    const int GL_UPPER_LEFT = 0x8CA2;
    const int GL_STENCIL_BACK_REF = 0x8CA3;
    const int GL_STENCIL_BACK_VALUE_MASK = 0x8CA4;
    const int GL_STENCIL_BACK_WRITEMASK = 0x8CA5;
    const int GL_VERTEX_PROGRAM_TWO_SIDE = 0x8643;
    const int GL_POINT_SPRITE = 0x8861;
    const int GL_COORD_REPLACE = 0x8862;
    const int GL_MAX_TEXTURE_COORDS = 0x8871;
    const int GL_PIXEL_PACK_BUFFER = 0x88EB;
    const int GL_PIXEL_UNPACK_BUFFER = 0x88EC;
    const int GL_PIXEL_PACK_BUFFER_BINDING = 0x88ED;
    const int GL_PIXEL_UNPACK_BUFFER_BINDING = 0x88EF;
    const int GL_FLOAT_MAT2x3 = 0x8B65;
    const int GL_FLOAT_MAT2x4 = 0x8B66;
    const int GL_FLOAT_MAT3x2 = 0x8B67;
    const int GL_FLOAT_MAT3x4 = 0x8B68;
    const int GL_FLOAT_MAT4x2 = 0x8B69;
    const int GL_FLOAT_MAT4x3 = 0x8B6A;
    const int GL_SRGB = 0x8C40;
    const int GL_SRGB8 = 0x8C41;
    const int GL_SRGB_ALPHA = 0x8C42;
    const int GL_SRGB8_ALPHA8 = 0x8C43;
    const int GL_COMPRESSED_SRGB = 0x8C48;
    const int GL_COMPRESSED_SRGB_ALPHA = 0x8C49;
    const int GL_CURRENT_RASTER_SECONDARY_COLOR = 0x845F;
    const int GL_SLUMINANCE_ALPHA = 0x8C44;
    const int GL_SLUMINANCE8_ALPHA8 = 0x8C45;
    const int GL_SLUMINANCE = 0x8C46;
    const int GL_SLUMINANCE8 = 0x8C47;
    const int GL_COMPRESSED_SLUMINANCE = 0x8C4A;
    const int GL_COMPRESSED_SLUMINANCE_ALPHA = 0x8C4B;
    const int GL_COMPARE_REF_TO_TEXTURE = 0x884E;
    const int GL_CLIP_DISTANCE0 = 0x3000;
    const int GL_CLIP_DISTANCE1 = 0x3001;
    const int GL_CLIP_DISTANCE2 = 0x3002;
    const int GL_CLIP_DISTANCE3 = 0x3003;
    const int GL_CLIP_DISTANCE4 = 0x3004;
    const int GL_CLIP_DISTANCE5 = 0x3005;
    const int GL_CLIP_DISTANCE6 = 0x3006;
    const int GL_CLIP_DISTANCE7 = 0x3007;
    const int GL_MAX_CLIP_DISTANCES = 0x0D32;
    const int GL_MAJOR_VERSION = 0x821B;
    const int GL_MINOR_VERSION = 0x821C;
    const int GL_NUM_EXTENSIONS = 0x821D;
    const int GL_CONTEXT_FLAGS = 0x821E;
    const int GL_COMPRESSED_RED = 0x8225;
    const int GL_COMPRESSED_RG = 0x8226;
    const int GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001;
    const int GL_RGBA32F = 0x8814;
    const int GL_RGB32F = 0x8815;
    const int GL_RGBA16F = 0x881A;
    const int GL_RGB16F = 0x881B;
    const int GL_VERTEX_ATTRIB_ARRAY_INTEGER = 0x88FD;
    const int GL_MAX_ARRAY_TEXTURE_LAYERS = 0x88FF;
    const int GL_MIN_PROGRAM_TEXEL_OFFSET = 0x8904;
    const int GL_MAX_PROGRAM_TEXEL_OFFSET = 0x8905;
    const int GL_CLAMP_READ_COLOR = 0x891C;
    const int GL_FIXED_ONLY = 0x891D;
    const int GL_MAX_VARYING_COMPONENTS = 0x8B4B;
    const int GL_TEXTURE_1D_ARRAY = 0x8C18;
    const int GL_PROXY_TEXTURE_1D_ARRAY = 0x8C19;
    const int GL_TEXTURE_2D_ARRAY = 0x8C1A;
    const int GL_PROXY_TEXTURE_2D_ARRAY = 0x8C1B;
    const int GL_TEXTURE_BINDING_1D_ARRAY = 0x8C1C;
    const int GL_TEXTURE_BINDING_2D_ARRAY = 0x8C1D;
    const int GL_R11F_G11F_B10F = 0x8C3A;
    const int GL_UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B;
    const int GL_RGB9_E5 = 0x8C3D;
    const int GL_UNSIGNED_INT_5_9_9_9_REV = 0x8C3E;
    const int GL_TEXTURE_SHARED_SIZE = 0x8C3F;
    const int GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76;
    const int GL_TRANSFORM_FEEDBACK_BUFFER_MODE = 0x8C7F;
    const int GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80;
    const int GL_TRANSFORM_FEEDBACK_VARYINGS = 0x8C83;
    const int GL_TRANSFORM_FEEDBACK_BUFFER_START = 0x8C84;
    const int GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = 0x8C85;
    const int GL_PRIMITIVES_GENERATED = 0x8C87;
    const int GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88;
    const int GL_RASTERIZER_DISCARD = 0x8C89;
    const int GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A;
    const int GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B;
    const int GL_INTERLEAVED_ATTRIBS = 0x8C8C;
    const int GL_SEPARATE_ATTRIBS = 0x8C8D;
    const int GL_TRANSFORM_FEEDBACK_BUFFER = 0x8C8E;
    const int GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F;
    const int GL_RGBA32UI = 0x8D70;
    const int GL_RGB32UI = 0x8D71;
    const int GL_RGBA16UI = 0x8D76;
    const int GL_RGB16UI = 0x8D77;
    const int GL_RGBA8UI = 0x8D7C;
    const int GL_RGB8UI = 0x8D7D;
    const int GL_RGBA32I = 0x8D82;
    const int GL_RGB32I = 0x8D83;
    const int GL_RGBA16I = 0x8D88;
    const int GL_RGB16I = 0x8D89;
    const int GL_RGBA8I = 0x8D8E;
    const int GL_RGB8I = 0x8D8F;
    const int GL_RED_INTEGER = 0x8D94;
    const int GL_GREEN_INTEGER = 0x8D95;
    const int GL_BLUE_INTEGER = 0x8D96;
    const int GL_RGB_INTEGER = 0x8D98;
    const int GL_RGBA_INTEGER = 0x8D99;
    const int GL_BGR_INTEGER = 0x8D9A;
    const int GL_BGRA_INTEGER = 0x8D9B;
    const int GL_SAMPLER_1D_ARRAY = 0x8DC0;
    const int GL_SAMPLER_2D_ARRAY = 0x8DC1;
    const int GL_SAMPLER_1D_ARRAY_SHADOW = 0x8DC3;
    const int GL_SAMPLER_2D_ARRAY_SHADOW = 0x8DC4;
    const int GL_SAMPLER_CUBE_SHADOW = 0x8DC5;
    const int GL_UNSIGNED_INT_VEC2 = 0x8DC6;
    const int GL_UNSIGNED_INT_VEC3 = 0x8DC7;
    const int GL_UNSIGNED_INT_VEC4 = 0x8DC8;
    const int GL_INT_SAMPLER_1D = 0x8DC9;
    const int GL_INT_SAMPLER_2D = 0x8DCA;
    const int GL_INT_SAMPLER_3D = 0x8DCB;
    const int GL_INT_SAMPLER_CUBE = 0x8DCC;
    const int GL_INT_SAMPLER_1D_ARRAY = 0x8DCE;
    const int GL_INT_SAMPLER_2D_ARRAY = 0x8DCF;
    const int GL_UNSIGNED_INT_SAMPLER_1D = 0x8DD1;
    const int GL_UNSIGNED_INT_SAMPLER_2D = 0x8DD2;
    const int GL_UNSIGNED_INT_SAMPLER_3D = 0x8DD3;
    const int GL_UNSIGNED_INT_SAMPLER_CUBE = 0x8DD4;
    const int GL_UNSIGNED_INT_SAMPLER_1D_ARRAY = 0x8DD6;
    const int GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = 0x8DD7;
    const int GL_QUERY_WAIT = 0x8E13;
    const int GL_QUERY_NO_WAIT = 0x8E14;
    const int GL_QUERY_BY_REGION_WAIT = 0x8E15;
    const int GL_QUERY_BY_REGION_NO_WAIT = 0x8E16;
    const int GL_BUFFER_ACCESS_FLAGS = 0x911F;
    const int GL_BUFFER_MAP_LENGTH = 0x9120;
    const int GL_BUFFER_MAP_OFFSET = 0x9121;
    const int GL_DEPTH_COMPONENT32F = 0x8CAC;
    const int GL_DEPTH32F_STENCIL8 = 0x8CAD;
    const int GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD;
    const int GL_INVALID_FRAMEBUFFER_OPERATION = 0x0506;
    const int GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = 0x8210;
    const int GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = 0x8211;
    const int GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = 0x8212;
    const int GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = 0x8213;
    const int GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = 0x8214;
    const int GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = 0x8215;
    const int GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = 0x8216;
    const int GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = 0x8217;
    const int GL_FRAMEBUFFER_DEFAULT = 0x8218;
    const int GL_FRAMEBUFFER_UNDEFINED = 0x8219;
    const int GL_DEPTH_STENCIL_ATTACHMENT = 0x821A;
    const int GL_MAX_RENDERBUFFER_SIZE = 0x84E8;
    const int GL_DEPTH_STENCIL = 0x84F9;
    const int GL_UNSIGNED_INT_24_8 = 0x84FA;
    const int GL_DEPTH24_STENCIL8 = 0x88F0;
    const int GL_TEXTURE_STENCIL_SIZE = 0x88F1;
    const int GL_TEXTURE_RED_TYPE = 0x8C10;
    const int GL_TEXTURE_GREEN_TYPE = 0x8C11;
    const int GL_TEXTURE_BLUE_TYPE = 0x8C12;
    const int GL_TEXTURE_ALPHA_TYPE = 0x8C13;
    const int GL_TEXTURE_DEPTH_TYPE = 0x8C16;
    const int GL_UNSIGNED_NORMALIZED = 0x8C17;
    const int GL_FRAMEBUFFER_BINDING = 0x8CA6;
    const int GL_DRAW_FRAMEBUFFER_BINDING = 0x8CA6;
    const int GL_RENDERBUFFER_BINDING = 0x8CA7;
    const int GL_READ_FRAMEBUFFER = 0x8CA8;
    const int GL_DRAW_FRAMEBUFFER = 0x8CA9;
    const int GL_READ_FRAMEBUFFER_BINDING = 0x8CAA;
    const int GL_RENDERBUFFER_SAMPLES = 0x8CAB;
    const int GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0;
    const int GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1;
    const int GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2;
    const int GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3;
    const int GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = 0x8CD4;
    const int GL_FRAMEBUFFER_COMPLETE = 0x8CD5;
    const int GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6;
    const int GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7;
    const int GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER = 0x8CDB;
    const int GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER = 0x8CDC;
    const int GL_FRAMEBUFFER_UNSUPPORTED = 0x8CDD;
    const int GL_MAX_COLOR_ATTACHMENTS = 0x8CDF;
    const int GL_COLOR_ATTACHMENT0 = 0x8CE0;
    const int GL_COLOR_ATTACHMENT1 = 0x8CE1;
    const int GL_COLOR_ATTACHMENT2 = 0x8CE2;
    const int GL_COLOR_ATTACHMENT3 = 0x8CE3;
    const int GL_COLOR_ATTACHMENT4 = 0x8CE4;
    const int GL_COLOR_ATTACHMENT5 = 0x8CE5;
    const int GL_COLOR_ATTACHMENT6 = 0x8CE6;
    const int GL_COLOR_ATTACHMENT7 = 0x8CE7;
    const int GL_COLOR_ATTACHMENT8 = 0x8CE8;
    const int GL_COLOR_ATTACHMENT9 = 0x8CE9;
    const int GL_COLOR_ATTACHMENT10 = 0x8CEA;
    const int GL_COLOR_ATTACHMENT11 = 0x8CEB;
    const int GL_COLOR_ATTACHMENT12 = 0x8CEC;
    const int GL_COLOR_ATTACHMENT13 = 0x8CED;
    const int GL_COLOR_ATTACHMENT14 = 0x8CEE;
    const int GL_COLOR_ATTACHMENT15 = 0x8CEF;
    const int GL_COLOR_ATTACHMENT16 = 0x8CF0;
    const int GL_COLOR_ATTACHMENT17 = 0x8CF1;
    const int GL_COLOR_ATTACHMENT18 = 0x8CF2;
    const int GL_COLOR_ATTACHMENT19 = 0x8CF3;
    const int GL_COLOR_ATTACHMENT20 = 0x8CF4;
    const int GL_COLOR_ATTACHMENT21 = 0x8CF5;
    const int GL_COLOR_ATTACHMENT22 = 0x8CF6;
    const int GL_COLOR_ATTACHMENT23 = 0x8CF7;
    const int GL_COLOR_ATTACHMENT24 = 0x8CF8;
    const int GL_COLOR_ATTACHMENT25 = 0x8CF9;
    const int GL_COLOR_ATTACHMENT26 = 0x8CFA;
    const int GL_COLOR_ATTACHMENT27 = 0x8CFB;
    const int GL_COLOR_ATTACHMENT28 = 0x8CFC;
    const int GL_COLOR_ATTACHMENT29 = 0x8CFD;
    const int GL_COLOR_ATTACHMENT30 = 0x8CFE;
    const int GL_COLOR_ATTACHMENT31 = 0x8CFF;
    const int GL_DEPTH_ATTACHMENT = 0x8D00;
    const int GL_STENCIL_ATTACHMENT = 0x8D20;
    const int GL_FRAMEBUFFER = 0x8D40;
    const int GL_RENDERBUFFER = 0x8D41;
    const int GL_RENDERBUFFER_WIDTH = 0x8D42;
    const int GL_RENDERBUFFER_HEIGHT = 0x8D43;
    const int GL_RENDERBUFFER_INTERNAL_FORMAT = 0x8D44;
    const int GL_STENCIL_INDEX1 = 0x8D46;
    const int GL_STENCIL_INDEX4 = 0x8D47;
    const int GL_STENCIL_INDEX8 = 0x8D48;
    const int GL_STENCIL_INDEX16 = 0x8D49;
    const int GL_RENDERBUFFER_RED_SIZE = 0x8D50;
    const int GL_RENDERBUFFER_GREEN_SIZE = 0x8D51;
    const int GL_RENDERBUFFER_BLUE_SIZE = 0x8D52;
    const int GL_RENDERBUFFER_ALPHA_SIZE = 0x8D53;
    const int GL_RENDERBUFFER_DEPTH_SIZE = 0x8D54;
    const int GL_RENDERBUFFER_STENCIL_SIZE = 0x8D55;
    const int GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = 0x8D56;
    const int GL_MAX_SAMPLES = 0x8D57;
    const int GL_INDEX = 0x8222;
    const int GL_TEXTURE_LUMINANCE_TYPE = 0x8C14;
    const int GL_TEXTURE_INTENSITY_TYPE = 0x8C15;
    const int GL_FRAMEBUFFER_SRGB = 0x8DB9;
    const int GL_HALF_FLOAT = 0x140B;
    const int GL_MAP_READ_BIT = 0x0001;
    const int GL_MAP_WRITE_BIT = 0x0002;
    const int GL_MAP_INVALIDATE_RANGE_BIT = 0x0004;
    const int GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008;
    const int GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010;
    const int GL_MAP_UNSYNCHRONIZED_BIT = 0x0020;
    const int GL_COMPRESSED_RED_RGTC1 = 0x8DBB;
    const int GL_COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC;
    const int GL_COMPRESSED_RG_RGTC2 = 0x8DBD;
    const int GL_COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE;
    const int GL_RG = 0x8227;
    const int GL_RG_INTEGER = 0x8228;
    const int GL_R8 = 0x8229;
    const int GL_R16 = 0x822A;
    const int GL_RG8 = 0x822B;
    const int GL_RG16 = 0x822C;
    const int GL_R16F = 0x822D;
    const int GL_R32F = 0x822E;
    const int GL_RG16F = 0x822F;
    const int GL_RG32F = 0x8230;
    const int GL_R8I = 0x8231;
    const int GL_R8UI = 0x8232;
    const int GL_R16I = 0x8233;
    const int GL_R16UI = 0x8234;
    const int GL_R32I = 0x8235;
    const int GL_R32UI = 0x8236;
    const int GL_RG8I = 0x8237;
    const int GL_RG8UI = 0x8238;
    const int GL_RG16I = 0x8239;
    const int GL_RG16UI = 0x823A;
    const int GL_RG32I = 0x823B;
    const int GL_RG32UI = 0x823C;
    const int GL_VERTEX_ARRAY_BINDING = 0x85B5;
    const int GL_CLAMP_VERTEX_COLOR = 0x891A;
    const int GL_CLAMP_FRAGMENT_COLOR = 0x891B;
    const int GL_ALPHA_INTEGER = 0x8D97;
    const int GL_SAMPLER_2D_RECT = 0x8B63;
    const int GL_SAMPLER_2D_RECT_SHADOW = 0x8B64;
    const int GL_SAMPLER_BUFFER = 0x8DC2;
    const int GL_INT_SAMPLER_2D_RECT = 0x8DCD;
    const int GL_INT_SAMPLER_BUFFER = 0x8DD0;
    const int GL_UNSIGNED_INT_SAMPLER_2D_RECT = 0x8DD5;
    const int GL_UNSIGNED_INT_SAMPLER_BUFFER = 0x8DD8;
    const int GL_TEXTURE_BUFFER = 0x8C2A;
    const int GL_MAX_TEXTURE_BUFFER_SIZE = 0x8C2B;
    const int GL_TEXTURE_BINDING_BUFFER = 0x8C2C;
    const int GL_TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D;
    const int GL_TEXTURE_RECTANGLE = 0x84F5;
    const int GL_TEXTURE_BINDING_RECTANGLE = 0x84F6;
    const int GL_PROXY_TEXTURE_RECTANGLE = 0x84F7;
    const int GL_MAX_RECTANGLE_TEXTURE_SIZE = 0x84F8;
    const int GL_R8_SNORM = 0x8F94;
    const int GL_RG8_SNORM = 0x8F95;
    const int GL_RGB8_SNORM = 0x8F96;
    const int GL_RGBA8_SNORM = 0x8F97;
    const int GL_R16_SNORM = 0x8F98;
    const int GL_RG16_SNORM = 0x8F99;
    const int GL_RGB16_SNORM = 0x8F9A;
    const int GL_RGBA16_SNORM = 0x8F9B;
    const int GL_SIGNED_NORMALIZED = 0x8F9C;
    const int GL_PRIMITIVE_RESTART = 0x8F9D;
    const int GL_PRIMITIVE_RESTART_INDEX = 0x8F9E;
    const int GL_COPY_READ_BUFFER = 0x8F36;
    const int GL_COPY_WRITE_BUFFER = 0x8F37;
    const int GL_UNIFORM_BUFFER = 0x8A11;
    const int GL_UNIFORM_BUFFER_BINDING = 0x8A28;
    const int GL_UNIFORM_BUFFER_START = 0x8A29;
    const int GL_UNIFORM_BUFFER_SIZE = 0x8A2A;
    const int GL_MAX_VERTEX_UNIFORM_BLOCKS = 0x8A2B;
    const int GL_MAX_GEOMETRY_UNIFORM_BLOCKS = 0x8A2C;
    const int GL_MAX_FRAGMENT_UNIFORM_BLOCKS = 0x8A2D;
    const int GL_MAX_COMBINED_UNIFORM_BLOCKS = 0x8A2E;
    const int GL_MAX_UNIFORM_BUFFER_BINDINGS = 0x8A2F;
    const int GL_MAX_UNIFORM_BLOCK_SIZE = 0x8A30;
    const int GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31;
    const int GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = 0x8A32;
    const int GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33;
    const int GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = 0x8A34;
    const int GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35;
    const int GL_ACTIVE_UNIFORM_BLOCKS = 0x8A36;
    const int GL_UNIFORM_TYPE = 0x8A37;
    const int GL_UNIFORM_SIZE = 0x8A38;
    const int GL_UNIFORM_NAME_LENGTH = 0x8A39;
    const int GL_UNIFORM_BLOCK_INDEX = 0x8A3A;
    const int GL_UNIFORM_OFFSET = 0x8A3B;
    const int GL_UNIFORM_ARRAY_STRIDE = 0x8A3C;
    const int GL_UNIFORM_MATRIX_STRIDE = 0x8A3D;
    const int GL_UNIFORM_IS_ROW_MAJOR = 0x8A3E;
    const int GL_UNIFORM_BLOCK_BINDING = 0x8A3F;
    const int GL_UNIFORM_BLOCK_DATA_SIZE = 0x8A40;
    const int GL_UNIFORM_BLOCK_NAME_LENGTH = 0x8A41;
    const int GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = 0x8A42;
    const int GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43;
    const int GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44;
    const int GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = 0x8A45;
    const int GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46;
    const int GL_INVALID_INDEX = 0xFFFFFFFF;
    const int GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001;
    const int GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002;
    const int GL_LINES_ADJACENCY = 0x000A;
    const int GL_LINE_STRIP_ADJACENCY = 0x000B;
    const int GL_TRIANGLES_ADJACENCY = 0x000C;
    const int GL_TRIANGLE_STRIP_ADJACENCY = 0x000D;
    const int GL_PROGRAM_POINT_SIZE = 0x8642;
    const int GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = 0x8C29;
    const int GL_FRAMEBUFFER_ATTACHMENT_LAYERED = 0x8DA7;
    const int GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = 0x8DA8;
    const int GL_GEOMETRY_SHADER = 0x8DD9;
    const int GL_GEOMETRY_VERTICES_OUT = 0x8916;
    const int GL_GEOMETRY_INPUT_TYPE = 0x8917;
    const int GL_GEOMETRY_OUTPUT_TYPE = 0x8918;
    const int GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = 0x8DDF;
    const int GL_MAX_GEOMETRY_OUTPUT_VERTICES = 0x8DE0;
    const int GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = 0x8DE1;
    const int GL_MAX_VERTEX_OUTPUT_COMPONENTS = 0x9122;
    const int GL_MAX_GEOMETRY_INPUT_COMPONENTS = 0x9123;
    const int GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = 0x9124;
    const int GL_MAX_FRAGMENT_INPUT_COMPONENTS = 0x9125;
    const int GL_CONTEXT_PROFILE_MASK = 0x9126;
    const int GL_DEPTH_CLAMP = 0x864F;
    const int GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = 0x8E4C;
    const int GL_FIRST_VERTEX_CONVENTION = 0x8E4D;
    const int GL_LAST_VERTEX_CONVENTION = 0x8E4E;
    const int GL_PROVOKING_VERTEX = 0x8E4F;
    const int GL_TEXTURE_CUBE_MAP_SEAMLESS = 0x884F;
    const int GL_MAX_SERVER_WAIT_TIMEOUT = 0x9111;
    const int GL_OBJECT_TYPE = 0x9112;
    const int GL_SYNC_CONDITION = 0x9113;
    const int GL_SYNC_STATUS = 0x9114;
    const int GL_SYNC_FLAGS = 0x9115;
    const int GL_SYNC_FENCE = 0x9116;
    const int GL_SYNC_GPU_COMMANDS_COMPLETE = 0x9117;
    const int GL_UNSIGNALED = 0x9118;
    const int GL_SIGNALED = 0x9119;
    const int GL_ALREADY_SIGNALED = 0x911A;
    const int GL_TIMEOUT_EXPIRED = 0x911B;
    const int GL_CONDITION_SATISFIED = 0x911C;
    const int GL_WAIT_FAILED = 0x911D;
    const long long GL_TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFF;
    const int GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001;
    const int GL_SAMPLE_POSITION = 0x8E50;
    const int GL_SAMPLE_MASK = 0x8E51;
    const int GL_SAMPLE_MASK_VALUE = 0x8E52;
    const int GL_MAX_SAMPLE_MASK_WORDS = 0x8E59;
    const int GL_TEXTURE_2D_MULTISAMPLE = 0x9100;
    const int GL_PROXY_TEXTURE_2D_MULTISAMPLE = 0x9101;
    const int GL_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102;
    const int GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9103;
    const int GL_TEXTURE_BINDING_2D_MULTISAMPLE = 0x9104;
    const int GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = 0x9105;
    const int GL_TEXTURE_SAMPLES = 0x9106;
    const int GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = 0x9107;
    const int GL_SAMPLER_2D_MULTISAMPLE = 0x9108;
    const int GL_INT_SAMPLER_2D_MULTISAMPLE = 0x9109;
    const int GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = 0x910A;
    const int GL_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910B;
    const int GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910C;
    const int GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910D;
    const int GL_MAX_COLOR_TEXTURE_SAMPLES = 0x910E;
    const int GL_MAX_DEPTH_TEXTURE_SAMPLES = 0x910F;
    const int GL_MAX_INTEGER_SAMPLES = 0x9110;
    const int GL_VERTEX_ATTRIB_ARRAY_DIVISOR = 0x88FE;
    const int GL_SRC1_COLOR = 0x88F9;
    const int GL_ONE_MINUS_SRC1_COLOR = 0x88FA;
    const int GL_ONE_MINUS_SRC1_ALPHA = 0x88FB;
    const int GL_MAX_DUAL_SOURCE_DRAW_BUFFERS = 0x88FC;
    const int GL_ANY_SAMPLES_PASSED = 0x8C2F;
    const int GL_SAMPLER_BINDING = 0x8919;
    const int GL_RGB10_A2UI = 0x906F;
    const int GL_TEXTURE_SWIZZLE_R = 0x8E42;
    const int GL_TEXTURE_SWIZZLE_G = 0x8E43;
    const int GL_TEXTURE_SWIZZLE_B = 0x8E44;
    const int GL_TEXTURE_SWIZZLE_A = 0x8E45;
    const int GL_TEXTURE_SWIZZLE_RGBA = 0x8E46;
    const int GL_TIME_ELAPSED = 0x88BF;
    const int GL_TIMESTAMP = 0x8E28;
    const int GL_INT_2_10_10_10_REV = 0x8D9F;
    const int GL_SAMPLE_SHADING = 0x8C36;
    const int GL_MIN_SAMPLE_SHADING_VALUE = 0x8C37;
    const int GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5E;
    const int GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5F;
    const int GL_TEXTURE_CUBE_MAP_ARRAY = 0x9009;
    const int GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = 0x900A;
    const int GL_PROXY_TEXTURE_CUBE_MAP_ARRAY = 0x900B;
    const int GL_SAMPLER_CUBE_MAP_ARRAY = 0x900C;
    const int GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = 0x900D;
    const int GL_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900E;
    const int GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900F;
    const int GL_DRAW_INDIRECT_BUFFER = 0x8F3F;
    const int GL_DRAW_INDIRECT_BUFFER_BINDING = 0x8F43;
    const int GL_GEOMETRY_SHADER_INVOCATIONS = 0x887F;
    const int GL_MAX_GEOMETRY_SHADER_INVOCATIONS = 0x8E5A;
    const int GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5B;
    const int GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5C;
    const int GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = 0x8E5D;
    const int GL_MAX_VERTEX_STREAMS = 0x8E71;
    const int GL_DOUBLE_VEC2 = 0x8FFC;
    const int GL_DOUBLE_VEC3 = 0x8FFD;
    const int GL_DOUBLE_VEC4 = 0x8FFE;
    const int GL_DOUBLE_MAT2 = 0x8F46;
    const int GL_DOUBLE_MAT3 = 0x8F47;
    const int GL_DOUBLE_MAT4 = 0x8F48;
    const int GL_DOUBLE_MAT2x3 = 0x8F49;
    const int GL_DOUBLE_MAT2x4 = 0x8F4A;
    const int GL_DOUBLE_MAT3x2 = 0x8F4B;
    const int GL_DOUBLE_MAT3x4 = 0x8F4C;
    const int GL_DOUBLE_MAT4x2 = 0x8F4D;
    const int GL_DOUBLE_MAT4x3 = 0x8F4E;
    const int GL_ACTIVE_SUBROUTINES = 0x8DE5;
    const int GL_ACTIVE_SUBROUTINE_UNIFORMS = 0x8DE6;
    const int GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS = 0x8E47;
    const int GL_ACTIVE_SUBROUTINE_MAX_LENGTH = 0x8E48;
    const int GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH = 0x8E49;
    const int GL_MAX_SUBROUTINES = 0x8DE7;
    const int GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS = 0x8DE8;
    const int GL_NUM_COMPATIBLE_SUBROUTINES = 0x8E4A;
    const int GL_COMPATIBLE_SUBROUTINES = 0x8E4B;
    const int GL_PATCHES = 0x000E;
    const int GL_PATCH_VERTICES = 0x8E72;
    const int GL_PATCH_DEFAULT_INNER_LEVEL = 0x8E73;
    const int GL_PATCH_DEFAULT_OUTER_LEVEL = 0x8E74;
    const int GL_TESS_CONTROL_OUTPUT_VERTICES = 0x8E75;
    const int GL_TESS_GEN_MODE = 0x8E76;
    const int GL_TESS_GEN_SPACING = 0x8E77;
    const int GL_TESS_GEN_VERTEX_ORDER = 0x8E78;
    const int GL_TESS_GEN_POINT_MODE = 0x8E79;
    const int GL_ISOLINES = 0x8E7A;
    const int GL_FRACTIONAL_ODD = 0x8E7B;
    const int GL_FRACTIONAL_EVEN = 0x8E7C;
    const int GL_MAX_PATCH_VERTICES = 0x8E7D;
    const int GL_MAX_TESS_GEN_LEVEL = 0x8E7E;
    const int GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E7F;
    const int GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E80;
    const int GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = 0x8E81;
    const int GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = 0x8E82;
    const int GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = 0x8E83;
    const int GL_MAX_TESS_PATCH_COMPONENTS = 0x8E84;
    const int GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = 0x8E85;
    const int GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = 0x8E86;
    const int GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = 0x8E89;
    const int GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = 0x8E8A;
    const int GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = 0x886C;
    const int GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = 0x886D;
    const int GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E1E;
    const int GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E1F;
    const int GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER = 0x84F0;
    const int GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x84F1;
    const int GL_TESS_EVALUATION_SHADER = 0x8E87;
    const int GL_TESS_CONTROL_SHADER = 0x8E88;
    const int GL_TRANSFORM_FEEDBACK = 0x8E22;
    const int GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED = 0x8E23;
    const int GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE = 0x8E24;
    const int GL_TRANSFORM_FEEDBACK_BINDING = 0x8E25;
    const int GL_MAX_TRANSFORM_FEEDBACK_BUFFERS = 0x8E70;
    const int GL_FIXED = 0x140C;
    const int GL_IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A;
    const int GL_IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B;
    const int GL_LOW_FLOAT = 0x8DF0;
    const int GL_MEDIUM_FLOAT = 0x8DF1;
    const int GL_HIGH_FLOAT = 0x8DF2;
    const int GL_LOW_INT = 0x8DF3;
    const int GL_MEDIUM_INT = 0x8DF4;
    const int GL_HIGH_INT = 0x8DF5;
    const int GL_SHADER_COMPILER = 0x8DFA;
    const int GL_SHADER_BINARY_FORMATS = 0x8DF8;
    const int GL_NUM_SHADER_BINARY_FORMATS = 0x8DF9;
    const int GL_MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB;
    const int GL_MAX_VARYING_VECTORS = 0x8DFC;
    const int GL_MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD;
    const int GL_RGB565 = 0x8D62;
    const int GL_PROGRAM_BINARY_RETRIEVABLE_HINT = 0x8257;
    const int GL_PROGRAM_BINARY_LENGTH = 0x8741;
    const int GL_NUM_PROGRAM_BINARY_FORMATS = 0x87FE;
    const int GL_PROGRAM_BINARY_FORMATS = 0x87FF;
    const int GL_VERTEX_SHADER_BIT = 0x00000001;
    const int GL_FRAGMENT_SHADER_BIT = 0x00000002;
    const int GL_GEOMETRY_SHADER_BIT = 0x00000004;
    const int GL_TESS_CONTROL_SHADER_BIT = 0x00000008;
    const int GL_TESS_EVALUATION_SHADER_BIT = 0x00000010;
    const int GL_ALL_SHADER_BITS = 0xFFFFFFFF;
    const int GL_PROGRAM_SEPARABLE = 0x8258;
    const int GL_ACTIVE_PROGRAM = 0x8259;
    const int GL_PROGRAM_PIPELINE_BINDING = 0x825A;
    const int GL_MAX_VIEWPORTS = 0x825B;
    const int GL_VIEWPORT_SUBPIXEL_BITS = 0x825C;
    const int GL_VIEWPORT_BOUNDS_RANGE = 0x825D;
    const int GL_LAYER_PROVOKING_VERTEX = 0x825E;
    const int GL_VIEWPORT_INDEX_PROVOKING_VERTEX = 0x825F;
    const int GL_UNDEFINED_VERTEX = 0x8260;
    const int GL_COPY_READ_BUFFER_BINDING = 0x8F36;
    const int GL_COPY_WRITE_BUFFER_BINDING = 0x8F37;
    const int GL_TRANSFORM_FEEDBACK_ACTIVE = 0x8E24;
    const int GL_TRANSFORM_FEEDBACK_PAUSED = 0x8E23;
    const int GL_UNPACK_COMPRESSED_BLOCK_WIDTH = 0x9127;
    const int GL_UNPACK_COMPRESSED_BLOCK_HEIGHT = 0x9128;
    const int GL_UNPACK_COMPRESSED_BLOCK_DEPTH = 0x9129;
    const int GL_UNPACK_COMPRESSED_BLOCK_SIZE = 0x912A;
    const int GL_PACK_COMPRESSED_BLOCK_WIDTH = 0x912B;
    const int GL_PACK_COMPRESSED_BLOCK_HEIGHT = 0x912C;
    const int GL_PACK_COMPRESSED_BLOCK_DEPTH = 0x912D;
    const int GL_PACK_COMPRESSED_BLOCK_SIZE = 0x912E;
    const int GL_NUM_SAMPLE_COUNTS = 0x9380;
    const int GL_MIN_MAP_BUFFER_ALIGNMENT = 0x90BC;
    const int GL_ATOMIC_COUNTER_BUFFER = 0x92C0;
    const int GL_ATOMIC_COUNTER_BUFFER_BINDING = 0x92C1;
    const int GL_ATOMIC_COUNTER_BUFFER_START = 0x92C2;
    const int GL_ATOMIC_COUNTER_BUFFER_SIZE = 0x92C3;
    const int GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE = 0x92C4;
    const int GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS = 0x92C5;
    const int GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES = 0x92C6;
    const int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER = 0x92C7;
    const int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER = 0x92C8;
    const int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x92C9;
    const int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER = 0x92CA;
    const int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER = 0x92CB;
    const int GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = 0x92CC;
    const int GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = 0x92CD;
    const int GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = 0x92CE;
    const int GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = 0x92CF;
    const int GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = 0x92D0;
    const int GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = 0x92D1;
    const int GL_MAX_VERTEX_ATOMIC_COUNTERS = 0x92D2;
    const int GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = 0x92D3;
    const int GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = 0x92D4;
    const int GL_MAX_GEOMETRY_ATOMIC_COUNTERS = 0x92D5;
    const int GL_MAX_FRAGMENT_ATOMIC_COUNTERS = 0x92D6;
    const int GL_MAX_COMBINED_ATOMIC_COUNTERS = 0x92D7;
    const int GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = 0x92D8;
    const int GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = 0x92DC;
    const int GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = 0x92D9;
    const int GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX = 0x92DA;
    const int GL_UNSIGNED_INT_ATOMIC_COUNTER = 0x92DB;
    const int GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001;
    const int GL_ELEMENT_ARRAY_BARRIER_BIT = 0x00000002;
    const int GL_UNIFORM_BARRIER_BIT = 0x00000004;
    const int GL_TEXTURE_FETCH_BARRIER_BIT = 0x00000008;
    const int GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020;
    const int GL_COMMAND_BARRIER_BIT = 0x00000040;
    const int GL_PIXEL_BUFFER_BARRIER_BIT = 0x00000080;
    const int GL_TEXTURE_UPDATE_BARRIER_BIT = 0x00000100;
    const int GL_BUFFER_UPDATE_BARRIER_BIT = 0x00000200;
    const int GL_FRAMEBUFFER_BARRIER_BIT = 0x00000400;
    const int GL_TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800;
    const int GL_ATOMIC_COUNTER_BARRIER_BIT = 0x00001000;
    const int GL_ALL_BARRIER_BITS = 0xFFFFFFFF;
    const int GL_MAX_IMAGE_UNITS = 0x8F38;
    const int GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS = 0x8F39;
    const int GL_IMAGE_BINDING_NAME = 0x8F3A;
    const int GL_IMAGE_BINDING_LEVEL = 0x8F3B;
    const int GL_IMAGE_BINDING_LAYERED = 0x8F3C;
    const int GL_IMAGE_BINDING_LAYER = 0x8F3D;
    const int GL_IMAGE_BINDING_ACCESS = 0x8F3E;
    const int GL_IMAGE_1D = 0x904C;
    const int GL_IMAGE_2D = 0x904D;
    const int GL_IMAGE_3D = 0x904E;
    const int GL_IMAGE_2D_RECT = 0x904F;
    const int GL_IMAGE_CUBE = 0x9050;
    const int GL_IMAGE_BUFFER = 0x9051;
    const int GL_IMAGE_1D_ARRAY = 0x9052;
    const int GL_IMAGE_2D_ARRAY = 0x9053;
    const int GL_IMAGE_CUBE_MAP_ARRAY = 0x9054;
    const int GL_IMAGE_2D_MULTISAMPLE = 0x9055;
    const int GL_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9056;
    const int GL_INT_IMAGE_1D = 0x9057;
    const int GL_INT_IMAGE_2D = 0x9058;
    const int GL_INT_IMAGE_3D = 0x9059;
    const int GL_INT_IMAGE_2D_RECT = 0x905A;
    const int GL_INT_IMAGE_CUBE = 0x905B;
    const int GL_INT_IMAGE_BUFFER = 0x905C;
    const int GL_INT_IMAGE_1D_ARRAY = 0x905D;
    const int GL_INT_IMAGE_2D_ARRAY = 0x905E;
    const int GL_INT_IMAGE_CUBE_MAP_ARRAY = 0x905F;
    const int GL_INT_IMAGE_2D_MULTISAMPLE = 0x9060;
    const int GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9061;
    const int GL_UNSIGNED_INT_IMAGE_1D = 0x9062;
    const int GL_UNSIGNED_INT_IMAGE_2D = 0x9063;
    const int GL_UNSIGNED_INT_IMAGE_3D = 0x9064;
    const int GL_UNSIGNED_INT_IMAGE_2D_RECT = 0x9065;
    const int GL_UNSIGNED_INT_IMAGE_CUBE = 0x9066;
    const int GL_UNSIGNED_INT_IMAGE_BUFFER = 0x9067;
    const int GL_UNSIGNED_INT_IMAGE_1D_ARRAY = 0x9068;
    const int GL_UNSIGNED_INT_IMAGE_2D_ARRAY = 0x9069;
    const int GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = 0x906A;
    const int GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE = 0x906B;
    const int GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x906C;
    const int GL_MAX_IMAGE_SAMPLES = 0x906D;
    const int GL_IMAGE_BINDING_FORMAT = 0x906E;
    const int GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = 0x90C7;
    const int GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = 0x90C8;
    const int GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = 0x90C9;
    const int GL_MAX_VERTEX_IMAGE_UNIFORMS = 0x90CA;
    const int GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = 0x90CB;
    const int GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = 0x90CC;
    const int GL_MAX_GEOMETRY_IMAGE_UNIFORMS = 0x90CD;
    const int GL_MAX_FRAGMENT_IMAGE_UNIFORMS = 0x90CE;
    const int GL_MAX_COMBINED_IMAGE_UNIFORMS = 0x90CF;
    const int GL_COMPRESSED_RGBA_BPTC_UNORM = 0x8E8C;
    const int GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM = 0x8E8D;
    const int GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT = 0x8E8E;
    const int GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = 0x8E8F;
    const int GL_TEXTURE_IMMUTABLE_FORMAT = 0x912F;
    const int GL_NUM_SHADING_LANGUAGE_VERSIONS = 0x82E9;
    const int GL_VERTEX_ATTRIB_ARRAY_LONG = 0x874E;
    const int GL_COMPRESSED_RGB8_ETC2 = 0x9274;
    const int GL_COMPRESSED_SRGB8_ETC2 = 0x9275;
    const int GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276;
    const int GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277;
    const int GL_COMPRESSED_RGBA8_ETC2_EAC = 0x9278;
    const int GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279;
    const int GL_COMPRESSED_R11_EAC = 0x9270;
    const int GL_COMPRESSED_SIGNED_R11_EAC = 0x9271;
    const int GL_COMPRESSED_RG11_EAC = 0x9272;
    const int GL_COMPRESSED_SIGNED_RG11_EAC = 0x9273;
    const int GL_PRIMITIVE_RESTART_FIXED_INDEX = 0x8D69;
    const int GL_ANY_SAMPLES_PASSED_CONSERVATIVE = 0x8D6A;
    const int GL_MAX_ELEMENT_INDEX = 0x8D6B;
    const int GL_COMPUTE_SHADER = 0x91B9;
    const int GL_MAX_COMPUTE_UNIFORM_BLOCKS = 0x91BB;
    const int GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = 0x91BC;
    const int GL_MAX_COMPUTE_IMAGE_UNIFORMS = 0x91BD;
    const int GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = 0x8262;
    const int GL_MAX_COMPUTE_UNIFORM_COMPONENTS = 0x8263;
    const int GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = 0x8264;
    const int GL_MAX_COMPUTE_ATOMIC_COUNTERS = 0x8265;
    const int GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = 0x8266;
    const int GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = 0x90EB;
    const int GL_MAX_COMPUTE_WORK_GROUP_COUNT = 0x91BE;
    const int GL_MAX_COMPUTE_WORK_GROUP_SIZE = 0x91BF;
    const int GL_COMPUTE_WORK_GROUP_SIZE = 0x8267;
    const int GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER = 0x90EC;
    const int GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER = 0x90ED;
    const int GL_DISPATCH_INDIRECT_BUFFER = 0x90EE;
    const int GL_DISPATCH_INDIRECT_BUFFER_BINDING = 0x90EF;
    const int GL_COMPUTE_SHADER_BIT = 0x00000020;
    const int GL_DEBUG_OUTPUT_SYNCHRONOUS = 0x8242;
    const int GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = 0x8243;
    const int GL_DEBUG_CALLBACK_FUNCTION = 0x8244;
    const int GL_DEBUG_CALLBACK_USER_PARAM = 0x8245;
    const int GL_DEBUG_SOURCE_API = 0x8246;
    const int GL_DEBUG_SOURCE_WINDOW_SYSTEM = 0x8247;
    const int GL_DEBUG_SOURCE_SHADER_COMPILER = 0x8248;
    const int GL_DEBUG_SOURCE_THIRD_PARTY = 0x8249;
    const int GL_DEBUG_SOURCE_APPLICATION = 0x824A;
    const int GL_DEBUG_SOURCE_OTHER = 0x824B;
    const int GL_DEBUG_TYPE_ERROR = 0x824C;
    const int GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = 0x824D;
    const int GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = 0x824E;
    const int GL_DEBUG_TYPE_PORTABILITY = 0x824F;
    const int GL_DEBUG_TYPE_PERFORMANCE = 0x8250;
    const int GL_DEBUG_TYPE_OTHER = 0x8251;
    const int GL_MAX_DEBUG_MESSAGE_LENGTH = 0x9143;
    const int GL_MAX_DEBUG_LOGGED_MESSAGES = 0x9144;
    const int GL_DEBUG_LOGGED_MESSAGES = 0x9145;
    const int GL_DEBUG_SEVERITY_HIGH = 0x9146;
    const int GL_DEBUG_SEVERITY_MEDIUM = 0x9147;
    const int GL_DEBUG_SEVERITY_LOW = 0x9148;
    const int GL_DEBUG_TYPE_MARKER = 0x8268;
    const int GL_DEBUG_TYPE_PUSH_GROUP = 0x8269;
    const int GL_DEBUG_TYPE_POP_GROUP = 0x826A;
    const int GL_DEBUG_SEVERITY_NOTIFICATION = 0x826B;
    const int GL_MAX_DEBUG_GROUP_STACK_DEPTH = 0x826C;
    const int GL_DEBUG_GROUP_STACK_DEPTH = 0x826D;
    const int GL_BUFFER = 0x82E0;
    const int GL_SHADER = 0x82E1;
    const int GL_PROGRAM = 0x82E2;
    const int GL_QUERY = 0x82E3;
    const int GL_PROGRAM_PIPELINE = 0x82E4;
    const int GL_SAMPLER = 0x82E6;
    const int GL_MAX_LABEL_LENGTH = 0x82E8;
    const int GL_DEBUG_OUTPUT = 0x92E0;
    const int GL_CONTEXT_FLAG_DEBUG_BIT = 0x00000002;
    const int GL_MAX_UNIFORM_LOCATIONS = 0x826E;
    const int GL_FRAMEBUFFER_DEFAULT_WIDTH = 0x9310;
    const int GL_FRAMEBUFFER_DEFAULT_HEIGHT = 0x9311;
    const int GL_FRAMEBUFFER_DEFAULT_LAYERS = 0x9312;
    const int GL_FRAMEBUFFER_DEFAULT_SAMPLES = 0x9313;
    const int GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = 0x9314;
    const int GL_MAX_FRAMEBUFFER_WIDTH = 0x9315;
    const int GL_MAX_FRAMEBUFFER_HEIGHT = 0x9316;
    const int GL_MAX_FRAMEBUFFER_LAYERS = 0x9317;
    const int GL_MAX_FRAMEBUFFER_SAMPLES = 0x9318;
    const int GL_INTERNALFORMAT_SUPPORTED = 0x826F;
    const int GL_INTERNALFORMAT_PREFERRED = 0x8270;
    const int GL_INTERNALFORMAT_RED_SIZE = 0x8271;
    const int GL_INTERNALFORMAT_GREEN_SIZE = 0x8272;
    const int GL_INTERNALFORMAT_BLUE_SIZE = 0x8273;
    const int GL_INTERNALFORMAT_ALPHA_SIZE = 0x8274;
    const int GL_INTERNALFORMAT_DEPTH_SIZE = 0x8275;
    const int GL_INTERNALFORMAT_STENCIL_SIZE = 0x8276;
    const int GL_INTERNALFORMAT_SHARED_SIZE = 0x8277;
    const int GL_INTERNALFORMAT_RED_TYPE = 0x8278;
    const int GL_INTERNALFORMAT_GREEN_TYPE = 0x8279;
    const int GL_INTERNALFORMAT_BLUE_TYPE = 0x827A;
    const int GL_INTERNALFORMAT_ALPHA_TYPE = 0x827B;
    const int GL_INTERNALFORMAT_DEPTH_TYPE = 0x827C;
    const int GL_INTERNALFORMAT_STENCIL_TYPE = 0x827D;
    const int GL_MAX_WIDTH = 0x827E;
    const int GL_MAX_HEIGHT = 0x827F;
    const int GL_MAX_DEPTH = 0x8280;
    const int GL_MAX_LAYERS = 0x8281;
    const int GL_MAX_COMBINED_DIMENSIONS = 0x8282;
    const int GL_COLOR_COMPONENTS = 0x8283;
    const int GL_DEPTH_COMPONENTS = 0x8284;
    const int GL_STENCIL_COMPONENTS = 0x8285;
    const int GL_COLOR_RENDERABLE = 0x8286;
    const int GL_DEPTH_RENDERABLE = 0x8287;
    const int GL_STENCIL_RENDERABLE = 0x8288;
    const int GL_FRAMEBUFFER_RENDERABLE = 0x8289;
    const int GL_FRAMEBUFFER_RENDERABLE_LAYERED = 0x828A;
    const int GL_FRAMEBUFFER_BLEND = 0x828B;
    const int GL_READ_PIXELS = 0x828C;
    const int GL_READ_PIXELS_FORMAT = 0x828D;
    const int GL_READ_PIXELS_TYPE = 0x828E;
    const int GL_TEXTURE_IMAGE_FORMAT = 0x828F;
    const int GL_TEXTURE_IMAGE_TYPE = 0x8290;
    const int GL_GET_TEXTURE_IMAGE_FORMAT = 0x8291;
    const int GL_GET_TEXTURE_IMAGE_TYPE = 0x8292;
    const int GL_MIPMAP = 0x8293;
    const int GL_MANUAL_GENERATE_MIPMAP = 0x8294;
    const int GL_AUTO_GENERATE_MIPMAP = 0x8295;
    const int GL_COLOR_ENCODING = 0x8296;
    const int GL_SRGB_READ = 0x8297;
    const int GL_SRGB_WRITE = 0x8298;
    const int GL_FILTER = 0x829A;
    const int GL_VERTEX_TEXTURE = 0x829B;
    const int GL_TESS_CONTROL_TEXTURE = 0x829C;
    const int GL_TESS_EVALUATION_TEXTURE = 0x829D;
    const int GL_GEOMETRY_TEXTURE = 0x829E;
    const int GL_FRAGMENT_TEXTURE = 0x829F;
    const int GL_COMPUTE_TEXTURE = 0x82A0;
    const int GL_TEXTURE_SHADOW = 0x82A1;
    const int GL_TEXTURE_GATHER = 0x82A2;
    const int GL_TEXTURE_GATHER_SHADOW = 0x82A3;
    const int GL_SHADER_IMAGE_LOAD = 0x82A4;
    const int GL_SHADER_IMAGE_STORE = 0x82A5;
    const int GL_SHADER_IMAGE_ATOMIC = 0x82A6;
    const int GL_IMAGE_TEXEL_SIZE = 0x82A7;
    const int GL_IMAGE_COMPATIBILITY_CLASS = 0x82A8;
    const int GL_IMAGE_PIXEL_FORMAT = 0x82A9;
    const int GL_IMAGE_PIXEL_TYPE = 0x82AA;
    const int GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST = 0x82AC;
    const int GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST = 0x82AD;
    const int GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE = 0x82AE;
    const int GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE = 0x82AF;
    const int GL_TEXTURE_COMPRESSED_BLOCK_WIDTH = 0x82B1;
    const int GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT = 0x82B2;
    const int GL_TEXTURE_COMPRESSED_BLOCK_SIZE = 0x82B3;
    const int GL_CLEAR_BUFFER = 0x82B4;
    const int GL_TEXTURE_VIEW = 0x82B5;
    const int GL_VIEW_COMPATIBILITY_CLASS = 0x82B6;
    const int GL_FULL_SUPPORT = 0x82B7;
    const int GL_CAVEAT_SUPPORT = 0x82B8;
    const int GL_IMAGE_CLASS_4_X_32 = 0x82B9;
    const int GL_IMAGE_CLASS_2_X_32 = 0x82BA;
    const int GL_IMAGE_CLASS_1_X_32 = 0x82BB;
    const int GL_IMAGE_CLASS_4_X_16 = 0x82BC;
    const int GL_IMAGE_CLASS_2_X_16 = 0x82BD;
    const int GL_IMAGE_CLASS_1_X_16 = 0x82BE;
    const int GL_IMAGE_CLASS_4_X_8 = 0x82BF;
    const int GL_IMAGE_CLASS_2_X_8 = 0x82C0;
    const int GL_IMAGE_CLASS_1_X_8 = 0x82C1;
    const int GL_IMAGE_CLASS_11_11_10 = 0x82C2;
    const int GL_IMAGE_CLASS_10_10_10_2 = 0x82C3;
    const int GL_VIEW_CLASS_128_BITS = 0x82C4;
    const int GL_VIEW_CLASS_96_BITS = 0x82C5;
    const int GL_VIEW_CLASS_64_BITS = 0x82C6;
    const int GL_VIEW_CLASS_48_BITS = 0x82C7;
    const int GL_VIEW_CLASS_32_BITS = 0x82C8;
    const int GL_VIEW_CLASS_24_BITS = 0x82C9;
    const int GL_VIEW_CLASS_16_BITS = 0x82CA;
    const int GL_VIEW_CLASS_8_BITS = 0x82CB;
    const int GL_VIEW_CLASS_S3TC_DXT1_RGB = 0x82CC;
    const int GL_VIEW_CLASS_S3TC_DXT1_RGBA = 0x82CD;
    const int GL_VIEW_CLASS_S3TC_DXT3_RGBA = 0x82CE;
    const int GL_VIEW_CLASS_S3TC_DXT5_RGBA = 0x82CF;
    const int GL_VIEW_CLASS_RGTC1_RED = 0x82D0;
    const int GL_VIEW_CLASS_RGTC2_RG = 0x82D1;
    const int GL_VIEW_CLASS_BPTC_UNORM = 0x82D2;
    const int GL_VIEW_CLASS_BPTC_FLOAT = 0x82D3;
    const int GL_UNIFORM = 0x92E1;
    const int GL_UNIFORM_BLOCK = 0x92E2;
    const int GL_PROGRAM_INPUT = 0x92E3;
    const int GL_PROGRAM_OUTPUT = 0x92E4;
    const int GL_BUFFER_VARIABLE = 0x92E5;
    const int GL_SHADER_STORAGE_BLOCK = 0x92E6;
    const int GL_VERTEX_SUBROUTINE = 0x92E8;
    const int GL_TESS_CONTROL_SUBROUTINE = 0x92E9;
    const int GL_TESS_EVALUATION_SUBROUTINE = 0x92EA;
    const int GL_GEOMETRY_SUBROUTINE = 0x92EB;
    const int GL_FRAGMENT_SUBROUTINE = 0x92EC;
    const int GL_COMPUTE_SUBROUTINE = 0x92ED;
    const int GL_VERTEX_SUBROUTINE_UNIFORM = 0x92EE;
    const int GL_TESS_CONTROL_SUBROUTINE_UNIFORM = 0x92EF;
    const int GL_TESS_EVALUATION_SUBROUTINE_UNIFORM = 0x92F0;
    const int GL_GEOMETRY_SUBROUTINE_UNIFORM = 0x92F1;
    const int GL_FRAGMENT_SUBROUTINE_UNIFORM = 0x92F2;
    const int GL_COMPUTE_SUBROUTINE_UNIFORM = 0x92F3;
    const int GL_TRANSFORM_FEEDBACK_VARYING = 0x92F4;
    const int GL_ACTIVE_RESOURCES = 0x92F5;
    const int GL_MAX_NAME_LENGTH = 0x92F6;
    const int GL_MAX_NUM_ACTIVE_VARIABLES = 0x92F7;
    const int GL_MAX_NUM_COMPATIBLE_SUBROUTINES = 0x92F8;
    const int GL_NAME_LENGTH = 0x92F9;
    const int GL_TYPE = 0x92FA;
    const int GL_ARRAY_SIZE = 0x92FB;
    const int GL_OFFSET = 0x92FC;
    const int GL_BLOCK_INDEX = 0x92FD;
    const int GL_ARRAY_STRIDE = 0x92FE;
    const int GL_MATRIX_STRIDE = 0x92FF;
    const int GL_IS_ROW_MAJOR = 0x9300;
    const int GL_ATOMIC_COUNTER_BUFFER_INDEX = 0x9301;
    const int GL_BUFFER_BINDING = 0x9302;
    const int GL_BUFFER_DATA_SIZE = 0x9303;
    const int GL_NUM_ACTIVE_VARIABLES = 0x9304;
    const int GL_ACTIVE_VARIABLES = 0x9305;
    const int GL_REFERENCED_BY_VERTEX_SHADER = 0x9306;
    const int GL_REFERENCED_BY_TESS_CONTROL_SHADER = 0x9307;
    const int GL_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x9308;
    const int GL_REFERENCED_BY_GEOMETRY_SHADER = 0x9309;
    const int GL_REFERENCED_BY_FRAGMENT_SHADER = 0x930A;
    const int GL_REFERENCED_BY_COMPUTE_SHADER = 0x930B;
    const int GL_TOP_LEVEL_ARRAY_SIZE = 0x930C;
    const int GL_TOP_LEVEL_ARRAY_STRIDE = 0x930D;
    const int GL_LOCATION = 0x930E;
    const int GL_LOCATION_INDEX = 0x930F;
    const int GL_IS_PER_PATCH = 0x92E7;
    const int GL_SHADER_STORAGE_BUFFER = 0x90D2;
    const int GL_SHADER_STORAGE_BUFFER_BINDING = 0x90D3;
    const int GL_SHADER_STORAGE_BUFFER_START = 0x90D4;
    const int GL_SHADER_STORAGE_BUFFER_SIZE = 0x90D5;
    const int GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = 0x90D6;
    const int GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = 0x90D7;
    const int GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = 0x90D8;
    const int GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = 0x90D9;
    const int GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = 0x90DA;
    const int GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = 0x90DB;
    const int GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = 0x90DC;
    const int GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = 0x90DD;
    const int GL_MAX_SHADER_STORAGE_BLOCK_SIZE = 0x90DE;
    const int GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = 0x90DF;
    const int GL_SHADER_STORAGE_BARRIER_BIT = 0x00002000;
    const int GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = 0x8F39;
    const int GL_DEPTH_STENCIL_TEXTURE_MODE = 0x90EA;
    const int GL_TEXTURE_BUFFER_OFFSET = 0x919D;
    const int GL_TEXTURE_BUFFER_SIZE = 0x919E;
    const int GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = 0x919F;
    const int GL_TEXTURE_VIEW_MIN_LEVEL = 0x82DB;
    const int GL_TEXTURE_VIEW_NUM_LEVELS = 0x82DC;
    const int GL_TEXTURE_VIEW_MIN_LAYER = 0x82DD;
    const int GL_TEXTURE_VIEW_NUM_LAYERS = 0x82DE;
    const int GL_TEXTURE_IMMUTABLE_LEVELS = 0x82DF;
    const int GL_VERTEX_ATTRIB_BINDING = 0x82D4;
    const int GL_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D5;
    const int GL_VERTEX_BINDING_DIVISOR = 0x82D6;
    const int GL_VERTEX_BINDING_OFFSET = 0x82D7;
    const int GL_VERTEX_BINDING_STRIDE = 0x82D8;
    const int GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D9;
    const int GL_MAX_VERTEX_ATTRIB_BINDINGS = 0x82DA;
    const int GL_VERTEX_BINDING_BUFFER = 0x8F4F;
    const int GL_DISPLAY_LIST = 0x82E7;
    const int GL_MAX_VERTEX_ATTRIB_STRIDE = 0x82E5;
    const int GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = 0x8221;
    const int GL_TEXTURE_BUFFER_BINDING = 0x8C2A;
    const int GL_MAP_PERSISTENT_BIT = 0x0040;
    const int GL_MAP_COHERENT_BIT = 0x0080;
    const int GL_DYNAMIC_STORAGE_BIT = 0x0100;
    const int GL_CLIENT_STORAGE_BIT = 0x0200;
    const int GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000;
    const int GL_BUFFER_IMMUTABLE_STORAGE = 0x821F;
    const int GL_BUFFER_STORAGE_FLAGS = 0x8220;
    const int GL_CLEAR_TEXTURE = 0x9365;
    const int GL_LOCATION_COMPONENT = 0x934A;
    const int GL_TRANSFORM_FEEDBACK_BUFFER_INDEX = 0x934B;
    const int GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE = 0x934C;
    const int GL_QUERY_BUFFER = 0x9192;
    const int GL_QUERY_BUFFER_BARRIER_BIT = 0x00008000;
    const int GL_QUERY_BUFFER_BINDING = 0x9193;
    const int GL_QUERY_RESULT_NO_WAIT = 0x9194;
    const int GL_MIRROR_CLAMP_TO_EDGE = 0x8743;
    const int GL_CONTEXT_LOST = 0x0507;
    const int GL_NEGATIVE_ONE_TO_ONE = 0x935E;
    const int GL_ZERO_TO_ONE = 0x935F;
    const int GL_CLIP_ORIGIN = 0x935C;
    const int GL_CLIP_DEPTH_MODE = 0x935D;
    const int GL_QUERY_WAIT_INVERTED = 0x8E17;
    const int GL_QUERY_NO_WAIT_INVERTED = 0x8E18;
    const int GL_QUERY_BY_REGION_WAIT_INVERTED = 0x8E19;
    const int GL_QUERY_BY_REGION_NO_WAIT_INVERTED = 0x8E1A;
    const int GL_MAX_CULL_DISTANCES = 0x82F9;
    const int GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES = 0x82FA;
    const int GL_TEXTURE_TARGET = 0x1006;
    const int GL_QUERY_TARGET = 0x82EA;
    const int GL_GUILTY_CONTEXT_RESET = 0x8253;
    const int GL_INNOCENT_CONTEXT_RESET = 0x8254;
    const int GL_UNKNOWN_CONTEXT_RESET = 0x8255;
    const int GL_RESET_NOTIFICATION_STRATEGY = 0x8256;
    const int GL_LOSE_CONTEXT_ON_RESET = 0x8252;
    const int GL_NO_RESET_NOTIFICATION = 0x8261;
    const int GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = 0x00000004;
    const int GL_COLOR_TABLE = 0x80D0;
    const int GL_POST_CONVOLUTION_COLOR_TABLE = 0x80D1;
    const int GL_POST_COLOR_MATRIX_COLOR_TABLE = 0x80D2;
    const int GL_PROXY_COLOR_TABLE = 0x80D3;
    const int GL_PROXY_POST_CONVOLUTION_COLOR_TABLE = 0x80D4;
    const int GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE = 0x80D5;
    const int GL_CONVOLUTION_1D = 0x8010;
    const int GL_CONVOLUTION_2D = 0x8011;
    const int GL_SEPARABLE_2D = 0x8012;
    const int GL_HISTOGRAM = 0x8024;
    const int GL_PROXY_HISTOGRAM = 0x8025;
    const int GL_MINMAX = 0x802E;
    const int GL_CONTEXT_RELEASE_BEHAVIOR = 0x82FB;
    const int GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH = 0x82FC;
    const int GL_SHADER_BINARY_FORMAT_SPIR_V = 0x9551;
    const int GL_SPIR_V_BINARY = 0x9552;
    const int GL_PARAMETER_BUFFER = 0x80EE;
    const int GL_PARAMETER_BUFFER_BINDING = 0x80EF;
    const int GL_CONTEXT_FLAG_NO_ERROR_BIT = 0x00000008;
    const int GL_VERTICES_SUBMITTED = 0x82EE;
    const int GL_PRIMITIVES_SUBMITTED = 0x82EF;
    const int GL_VERTEX_SHADER_INVOCATIONS = 0x82F0;
    const int GL_TESS_CONTROL_SHADER_PATCHES = 0x82F1;
    const int GL_TESS_EVALUATION_SHADER_INVOCATIONS = 0x82F2;
    const int GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED = 0x82F3;
    const int GL_FRAGMENT_SHADER_INVOCATIONS = 0x82F4;
    const int GL_COMPUTE_SHADER_INVOCATIONS = 0x82F5;
    const int GL_CLIPPING_INPUT_PRIMITIVES = 0x82F6;
    const int GL_CLIPPING_OUTPUT_PRIMITIVES = 0x82F7;
    const int GL_POLYGON_OFFSET_CLAMP = 0x8E1B;
    const int GL_SPIR_V_EXTENSIONS = 0x9553;
    const int GL_NUM_SPIR_V_EXTENSIONS = 0x9554;
    const int GL_TEXTURE_MAX_ANISOTROPY = 0x84FE;
    const int GL_MAX_TEXTURE_MAX_ANISOTROPY = 0x84FF;
    const int GL_TRANSFORM_FEEDBACK_OVERFLOW = 0x82EC;
    const int GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW = 0x82ED;
}//namespace gl


typedef struct __GLsync *GLsync;
namespace gl
{
    typedef unsigned int GLenum;
    typedef unsigned char GLboolean;
    typedef unsigned int GLbitfield;
    typedef void GLvoid;
    typedef khronos_int8_t GLbyte;
    typedef khronos_uint8_t GLubyte;
    typedef khronos_int16_t GLshort;
    typedef khronos_uint16_t GLushort;
    typedef int GLint;
    typedef unsigned int GLuint;
    typedef khronos_int32_t GLclampx;
    typedef int GLsizei;
    typedef khronos_float_t GLfloat;
    typedef khronos_float_t GLclampf;
    typedef double GLdouble;
    typedef double GLclampd;
    typedef void *GLeglClientBufferEXT;
    typedef void *GLeglImageOES;
    typedef char GLchar;
    typedef char GLcharARB;
    typedef khronos_ssize_t GLsizeiptr;
    typedef khronos_intptr_t GLintptr;
    typedef khronos_int64_t GLint64;
    typedef khronos_uint64_t GLuint64;
    typedef void (*GLDEBUGPROC) (GLenum source,GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);
}//namespace gl

namespace gl
{

    LWCPPGL_API void LWCPPGL_CALL glCullFace(GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glFrontFace(GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glHint(GLenum target, GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glLineWidth(GLfloat width);

    LWCPPGL_API void LWCPPGL_CALL glPointSize(GLfloat size);

    LWCPPGL_API void LWCPPGL_CALL glPolygonMode(GLenum face, GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glScissor(GLint x, GLint y, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glTexParameterf(GLenum target, GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glTexParameteri(GLenum target, GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glTexParameteriv(GLenum target, GLenum pname, const GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glDrawBuffer(GLenum buf);

    LWCPPGL_API void LWCPPGL_CALL glClear(GLbitfield mask);

    LWCPPGL_API void LWCPPGL_CALL glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

    LWCPPGL_API void LWCPPGL_CALL glClearStencil(GLint s);

    LWCPPGL_API void LWCPPGL_CALL glClearDepth(GLdouble depth);

    LWCPPGL_API void LWCPPGL_CALL glStencilMask(GLuint mask);

    LWCPPGL_API void LWCPPGL_CALL glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);

    LWCPPGL_API void LWCPPGL_CALL glDepthMask(GLboolean flag);

    LWCPPGL_API void LWCPPGL_CALL glDisable(GLenum cap);

    LWCPPGL_API void LWCPPGL_CALL glEnable(GLenum cap);

    LWCPPGL_API void LWCPPGL_CALL glFinish(void);

    LWCPPGL_API void LWCPPGL_CALL glFlush(void);

    LWCPPGL_API void LWCPPGL_CALL glBlendFunc(GLenum sfactor, GLenum dfactor);

    LWCPPGL_API void LWCPPGL_CALL glLogicOp(GLenum opcode);

    LWCPPGL_API void LWCPPGL_CALL glStencilFunc(GLenum func, GLint ref, GLuint mask);

    LWCPPGL_API void LWCPPGL_CALL glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);

    LWCPPGL_API void LWCPPGL_CALL glDepthFunc(GLenum func);

    LWCPPGL_API void LWCPPGL_CALL glPixelStoref(GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glPixelStorei(GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glReadBuffer(GLenum src);

    LWCPPGL_API void LWCPPGL_CALL glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glGetBooleanv(GLenum pname, GLboolean * data);

    LWCPPGL_API void LWCPPGL_CALL glGetDoublev(GLenum pname, GLdouble * data);

    LWCPPGL_API GLenum LWCPPGL_CALL glGetError(void);

    LWCPPGL_API void LWCPPGL_CALL glGetFloatv(GLenum pname, GLfloat * data);

    LWCPPGL_API void LWCPPGL_CALL glGetIntegerv(GLenum pname, GLint * data);

    LWCPPGL_API const GLubyte * LWCPPGL_CALL glGetString(GLenum name);

    LWCPPGL_API void LWCPPGL_CALL glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTexParameteriv(GLenum target, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsEnabled(GLenum cap);

    LWCPPGL_API void LWCPPGL_CALL glDepthRange(GLdouble n, GLdouble f);

    LWCPPGL_API void LWCPPGL_CALL glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glNewList(GLuint list, GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glEndList(void);

    LWCPPGL_API void LWCPPGL_CALL glCallList(GLuint list);

    LWCPPGL_API void LWCPPGL_CALL glCallLists(GLsizei n, GLenum type, const void* lists);

    LWCPPGL_API void LWCPPGL_CALL glDeleteLists(GLuint list, GLsizei range);

    LWCPPGL_API GLuint LWCPPGL_CALL glGenLists(GLsizei range);

    LWCPPGL_API void LWCPPGL_CALL glListBase(GLuint base);

    LWCPPGL_API void LWCPPGL_CALL glBegin(GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);

    LWCPPGL_API void LWCPPGL_CALL glColor3b(GLbyte red, GLbyte green, GLbyte blue);

    LWCPPGL_API void LWCPPGL_CALL glColor3bv(const GLbyte * v);

    LWCPPGL_API void LWCPPGL_CALL glColor3d(GLdouble red, GLdouble green, GLdouble blue);

    LWCPPGL_API void LWCPPGL_CALL glColor3dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glColor3f(GLfloat red, GLfloat green, GLfloat blue);

    LWCPPGL_API void LWCPPGL_CALL glColor3fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glColor3i(GLint red, GLint green, GLint blue);

    LWCPPGL_API void LWCPPGL_CALL glColor3iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glColor3s(GLshort red, GLshort green, GLshort blue);

    LWCPPGL_API void LWCPPGL_CALL glColor3sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glColor3ub(GLubyte red, GLubyte green, GLubyte blue);

    LWCPPGL_API void LWCPPGL_CALL glColor3ubv(const GLubyte * v);

    LWCPPGL_API void LWCPPGL_CALL glColor3ui(GLuint red, GLuint green, GLuint blue);

    LWCPPGL_API void LWCPPGL_CALL glColor3uiv(const GLuint * v);

    LWCPPGL_API void LWCPPGL_CALL glColor3us(GLushort red, GLushort green, GLushort blue);

    LWCPPGL_API void LWCPPGL_CALL glColor3usv(const GLushort * v);

    LWCPPGL_API void LWCPPGL_CALL glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);

    LWCPPGL_API void LWCPPGL_CALL glColor4bv(const GLbyte * v);

    LWCPPGL_API void LWCPPGL_CALL glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);

    LWCPPGL_API void LWCPPGL_CALL glColor4dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

    LWCPPGL_API void LWCPPGL_CALL glColor4fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glColor4i(GLint red, GLint green, GLint blue, GLint alpha);

    LWCPPGL_API void LWCPPGL_CALL glColor4iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);

    LWCPPGL_API void LWCPPGL_CALL glColor4sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);

    LWCPPGL_API void LWCPPGL_CALL glColor4ubv(const GLubyte * v);

    LWCPPGL_API void LWCPPGL_CALL glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);

    LWCPPGL_API void LWCPPGL_CALL glColor4uiv(const GLuint * v);

    LWCPPGL_API void LWCPPGL_CALL glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);

    LWCPPGL_API void LWCPPGL_CALL glColor4usv(const GLushort * v);

    LWCPPGL_API void LWCPPGL_CALL glEdgeFlag(GLboolean flag);

    LWCPPGL_API void LWCPPGL_CALL glEdgeFlagv(const GLboolean * flag);

    LWCPPGL_API void LWCPPGL_CALL glEnd(void);

    LWCPPGL_API void LWCPPGL_CALL glIndexd(GLdouble c);

    LWCPPGL_API void LWCPPGL_CALL glIndexdv(const GLdouble * c);

    LWCPPGL_API void LWCPPGL_CALL glIndexf(GLfloat c);

    LWCPPGL_API void LWCPPGL_CALL glIndexfv(const GLfloat * c);

    LWCPPGL_API void LWCPPGL_CALL glIndexi(GLint c);

    LWCPPGL_API void LWCPPGL_CALL glIndexiv(const GLint * c);

    LWCPPGL_API void LWCPPGL_CALL glIndexs(GLshort c);

    LWCPPGL_API void LWCPPGL_CALL glIndexsv(const GLshort * c);

    LWCPPGL_API void LWCPPGL_CALL glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz);

    LWCPPGL_API void LWCPPGL_CALL glNormal3bv(const GLbyte * v);

    LWCPPGL_API void LWCPPGL_CALL glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz);

    LWCPPGL_API void LWCPPGL_CALL glNormal3dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz);

    LWCPPGL_API void LWCPPGL_CALL glNormal3fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glNormal3i(GLint nx, GLint ny, GLint nz);

    LWCPPGL_API void LWCPPGL_CALL glNormal3iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glNormal3s(GLshort nx, GLshort ny, GLshort nz);

    LWCPPGL_API void LWCPPGL_CALL glNormal3sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos2d(GLdouble x, GLdouble y);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos2dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos2f(GLfloat x, GLfloat y);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos2fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos2i(GLint x, GLint y);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos2iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos2s(GLshort x, GLshort y);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos2sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos3d(GLdouble x, GLdouble y, GLdouble z);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos3dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos3f(GLfloat x, GLfloat y, GLfloat z);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos3fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos3i(GLint x, GLint y, GLint z);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos3iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos3s(GLshort x, GLshort y, GLshort z);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos3sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos4dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos4fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos4i(GLint x, GLint y, GLint z, GLint w);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos4iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);

    LWCPPGL_API void LWCPPGL_CALL glRasterPos4sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);

    LWCPPGL_API void LWCPPGL_CALL glRectdv(const GLdouble * v1, const GLdouble * v2);

    LWCPPGL_API void LWCPPGL_CALL glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);

    LWCPPGL_API void LWCPPGL_CALL glRectfv(const GLfloat * v1, const GLfloat * v2);

    LWCPPGL_API void LWCPPGL_CALL glRecti(GLint x1, GLint y1, GLint x2, GLint y2);

    LWCPPGL_API void LWCPPGL_CALL glRectiv(const GLint * v1, const GLint * v2);

    LWCPPGL_API void LWCPPGL_CALL glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);

    LWCPPGL_API void LWCPPGL_CALL glRectsv(const GLshort * v1, const GLshort * v2);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord1d(GLdouble s);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord1dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord1f(GLfloat s);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord1fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord1i(GLint s);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord1iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord1s(GLshort s);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord1sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord2d(GLdouble s, GLdouble t);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord2dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord2f(GLfloat s, GLfloat t);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord2fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord2i(GLint s, GLint t);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord2iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord2s(GLshort s, GLshort t);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord2sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord3d(GLdouble s, GLdouble t, GLdouble r);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord3dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord3f(GLfloat s, GLfloat t, GLfloat r);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord3fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord3i(GLint s, GLint t, GLint r);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord3iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord3s(GLshort s, GLshort t, GLshort r);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord3sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord4dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord4fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord4i(GLint s, GLint t, GLint r, GLint q);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord4iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);

    LWCPPGL_API void LWCPPGL_CALL glTexCoord4sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex2d(GLdouble x, GLdouble y);

    LWCPPGL_API void LWCPPGL_CALL glVertex2dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex2f(GLfloat x, GLfloat y);

    LWCPPGL_API void LWCPPGL_CALL glVertex2fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex2i(GLint x, GLint y);

    LWCPPGL_API void LWCPPGL_CALL glVertex2iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex2s(GLshort x, GLshort y);

    LWCPPGL_API void LWCPPGL_CALL glVertex2sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex3d(GLdouble x, GLdouble y, GLdouble z);

    LWCPPGL_API void LWCPPGL_CALL glVertex3dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex3f(GLfloat x, GLfloat y, GLfloat z);

    LWCPPGL_API void LWCPPGL_CALL glVertex3fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex3i(GLint x, GLint y, GLint z);

    LWCPPGL_API void LWCPPGL_CALL glVertex3iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex3s(GLshort x, GLshort y, GLshort z);

    LWCPPGL_API void LWCPPGL_CALL glVertex3sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);

    LWCPPGL_API void LWCPPGL_CALL glVertex4dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);

    LWCPPGL_API void LWCPPGL_CALL glVertex4fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex4i(GLint x, GLint y, GLint z, GLint w);

    LWCPPGL_API void LWCPPGL_CALL glVertex4iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w);

    LWCPPGL_API void LWCPPGL_CALL glVertex4sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glClipPlane(GLenum plane, const GLdouble * equation);

    LWCPPGL_API void LWCPPGL_CALL glColorMaterial(GLenum face, GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glFogf(GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glFogfv(GLenum pname, const GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glFogi(GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glFogiv(GLenum pname, const GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glLightf(GLenum light, GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glLightfv(GLenum light, GLenum pname, const GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glLighti(GLenum light, GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glLightiv(GLenum light, GLenum pname, const GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glLightModelf(GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glLightModelfv(GLenum pname, const GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glLightModeli(GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glLightModeliv(GLenum pname, const GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glLineStipple(GLint factor, GLushort pattern);

    LWCPPGL_API void LWCPPGL_CALL glMaterialf(GLenum face, GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glMaterialfv(GLenum face, GLenum pname, const GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glMateriali(GLenum face, GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glMaterialiv(GLenum face, GLenum pname, const GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glPolygonStipple(const GLubyte * mask);

    LWCPPGL_API void LWCPPGL_CALL glShadeModel(GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glTexEnvf(GLenum target, GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glTexEnvi(GLenum target, GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glTexEnviv(GLenum target, GLenum pname, const GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glTexGend(GLenum coord, GLenum pname, GLdouble param);

    LWCPPGL_API void LWCPPGL_CALL glTexGendv(GLenum coord, GLenum pname, const GLdouble * params);

    LWCPPGL_API void LWCPPGL_CALL glTexGenf(GLenum coord, GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glTexGeni(GLenum coord, GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glTexGeniv(GLenum coord, GLenum pname, const GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer);

    LWCPPGL_API void LWCPPGL_CALL glSelectBuffer(GLsizei size, GLuint * buffer);

    LWCPPGL_API GLint LWCPPGL_CALL glRenderMode(GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glInitNames(void);

    LWCPPGL_API void LWCPPGL_CALL glLoadName(GLuint name);

    LWCPPGL_API void LWCPPGL_CALL glPassThrough(GLfloat token);

    LWCPPGL_API void LWCPPGL_CALL glPopName(void);

    LWCPPGL_API void LWCPPGL_CALL glPushName(GLuint name);

    LWCPPGL_API void LWCPPGL_CALL glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

    LWCPPGL_API void LWCPPGL_CALL glClearIndex(GLfloat c);

    LWCPPGL_API void LWCPPGL_CALL glIndexMask(GLuint mask);

    LWCPPGL_API void LWCPPGL_CALL glAccum(GLenum op, GLfloat value);

    LWCPPGL_API void LWCPPGL_CALL glPopAttrib(void);

    LWCPPGL_API void LWCPPGL_CALL glPushAttrib(GLbitfield mask);

    LWCPPGL_API void LWCPPGL_CALL glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);

    LWCPPGL_API void LWCPPGL_CALL glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);

    LWCPPGL_API void LWCPPGL_CALL glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);

    LWCPPGL_API void LWCPPGL_CALL glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);

    LWCPPGL_API void LWCPPGL_CALL glMapGrid1d(GLint un, GLdouble u1, GLdouble u2);

    LWCPPGL_API void LWCPPGL_CALL glMapGrid1f(GLint un, GLfloat u1, GLfloat u2);

    LWCPPGL_API void LWCPPGL_CALL glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);

    LWCPPGL_API void LWCPPGL_CALL glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);

    LWCPPGL_API void LWCPPGL_CALL glEvalCoord1d(GLdouble u);

    LWCPPGL_API void LWCPPGL_CALL glEvalCoord1dv(const GLdouble * u);

    LWCPPGL_API void LWCPPGL_CALL glEvalCoord1f(GLfloat u);

    LWCPPGL_API void LWCPPGL_CALL glEvalCoord1fv(const GLfloat * u);

    LWCPPGL_API void LWCPPGL_CALL glEvalCoord2d(GLdouble u, GLdouble v);

    LWCPPGL_API void LWCPPGL_CALL glEvalCoord2dv(const GLdouble * u);

    LWCPPGL_API void LWCPPGL_CALL glEvalCoord2f(GLfloat u, GLfloat v);

    LWCPPGL_API void LWCPPGL_CALL glEvalCoord2fv(const GLfloat * u);

    LWCPPGL_API void LWCPPGL_CALL glEvalMesh1(GLenum mode, GLint i1, GLint i2);

    LWCPPGL_API void LWCPPGL_CALL glEvalPoint1(GLint i);

    LWCPPGL_API void LWCPPGL_CALL glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);

    LWCPPGL_API void LWCPPGL_CALL glEvalPoint2(GLint i, GLint j);

    LWCPPGL_API void LWCPPGL_CALL glAlphaFunc(GLenum func, GLfloat ref);

    LWCPPGL_API void LWCPPGL_CALL glPixelZoom(GLfloat xfactor, GLfloat yfactor);

    LWCPPGL_API void LWCPPGL_CALL glPixelTransferf(GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glPixelTransferi(GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values);

    LWCPPGL_API void LWCPPGL_CALL glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values);

    LWCPPGL_API void LWCPPGL_CALL glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values);

    LWCPPGL_API void LWCPPGL_CALL glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);

    LWCPPGL_API void LWCPPGL_CALL glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glGetClipPlane(GLenum plane, GLdouble * equation);

    LWCPPGL_API void LWCPPGL_CALL glGetLightfv(GLenum light, GLenum pname, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetLightiv(GLenum light, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetMapdv(GLenum target, GLenum query, GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glGetMapfv(GLenum target, GLenum query, GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glGetMapiv(GLenum target, GLenum query, GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetMaterialiv(GLenum face, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetPixelMapfv(GLenum map, GLfloat * values);

    LWCPPGL_API void LWCPPGL_CALL glGetPixelMapuiv(GLenum map, GLuint * values);

    LWCPPGL_API void LWCPPGL_CALL glGetPixelMapusv(GLenum map, GLushort * values);

    LWCPPGL_API void LWCPPGL_CALL glGetPolygonStipple(GLubyte * mask);

    LWCPPGL_API void LWCPPGL_CALL glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTexEnviv(GLenum target, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTexGeniv(GLenum coord, GLenum pname, GLint * params);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsList(GLuint list);

    LWCPPGL_API void LWCPPGL_CALL glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);

    LWCPPGL_API void LWCPPGL_CALL glLoadIdentity(void);

    LWCPPGL_API void LWCPPGL_CALL glLoadMatrixf(const GLfloat * m);

    LWCPPGL_API void LWCPPGL_CALL glLoadMatrixd(const GLdouble * m);

    LWCPPGL_API void LWCPPGL_CALL glMatrixMode(GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glMultMatrixf(const GLfloat * m);

    LWCPPGL_API void LWCPPGL_CALL glMultMatrixd(const GLdouble * m);

    LWCPPGL_API void LWCPPGL_CALL glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);

    LWCPPGL_API void LWCPPGL_CALL glPopMatrix(void);

    LWCPPGL_API void LWCPPGL_CALL glPushMatrix(void);

    LWCPPGL_API void LWCPPGL_CALL glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);

    LWCPPGL_API void LWCPPGL_CALL glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);

    LWCPPGL_API void LWCPPGL_CALL glScaled(GLdouble x, GLdouble y, GLdouble z);

    LWCPPGL_API void LWCPPGL_CALL glScalef(GLfloat x, GLfloat y, GLfloat z);

    LWCPPGL_API void LWCPPGL_CALL glTranslated(GLdouble x, GLdouble y, GLdouble z);

    LWCPPGL_API void LWCPPGL_CALL glTranslatef(GLfloat x, GLfloat y, GLfloat z);

    LWCPPGL_API void LWCPPGL_CALL glDrawArrays(GLenum mode, GLint first, GLsizei count);

    LWCPPGL_API void LWCPPGL_CALL glDrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices);

    LWCPPGL_API void LWCPPGL_CALL glGetPointerv(GLenum pname, void* * params);

    LWCPPGL_API void LWCPPGL_CALL glPolygonOffset(GLfloat factor, GLfloat units);

    LWCPPGL_API void LWCPPGL_CALL glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);

    LWCPPGL_API void LWCPPGL_CALL glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);

    LWCPPGL_API void LWCPPGL_CALL glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);

    LWCPPGL_API void LWCPPGL_CALL glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glBindTexture(GLenum target, GLuint texture);

    LWCPPGL_API void LWCPPGL_CALL glDeleteTextures(GLsizei n, const GLuint * textures);

    LWCPPGL_API void LWCPPGL_CALL glGenTextures(GLsizei n, GLuint * textures);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsTexture(GLuint texture);

    LWCPPGL_API void LWCPPGL_CALL glArrayElement(GLint i);

    LWCPPGL_API void LWCPPGL_CALL glColorPointer(GLint size, GLenum type, GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glDisableClientState(GLenum array);

    LWCPPGL_API void LWCPPGL_CALL glEdgeFlagPointer(GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glEnableClientState(GLenum array);

    LWCPPGL_API void LWCPPGL_CALL glIndexPointer(GLenum type, GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glInterleavedArrays(GLenum format, GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glNormalPointer(GLenum type, GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glVertexPointer(GLint size, GLenum type, GLsizei stride, const void* pointer);

    LWCPPGL_API GLboolean LWCPPGL_CALL glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences);

    LWCPPGL_API void LWCPPGL_CALL glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities);

    LWCPPGL_API void LWCPPGL_CALL glIndexub(GLubyte c);

    LWCPPGL_API void LWCPPGL_CALL glIndexubv(const GLubyte * c);

    LWCPPGL_API void LWCPPGL_CALL glPopClientAttrib(void);

    LWCPPGL_API void LWCPPGL_CALL glPushClientAttrib(GLbitfield mask);

    LWCPPGL_API void LWCPPGL_CALL glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices);

    LWCPPGL_API void LWCPPGL_CALL glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glActiveTexture(GLenum texture);

    LWCPPGL_API void LWCPPGL_CALL glSampleCoverage(GLfloat value, GLboolean invert);

    LWCPPGL_API void LWCPPGL_CALL glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glGetCompressedTexImage(GLenum target, GLint level, void* img);

    LWCPPGL_API void LWCPPGL_CALL glClientActiveTexture(GLenum texture);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord1d(GLenum target, GLdouble s);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord1dv(GLenum target, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord1f(GLenum target, GLfloat s);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord1fv(GLenum target, const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord1i(GLenum target, GLint s);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord1iv(GLenum target, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord1s(GLenum target, GLshort s);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord1sv(GLenum target, const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord2dv(GLenum target, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord2fv(GLenum target, const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord2i(GLenum target, GLint s, GLint t);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord2iv(GLenum target, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord2s(GLenum target, GLshort s, GLshort t);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord2sv(GLenum target, const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord3dv(GLenum target, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord3fv(GLenum target, const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord3iv(GLenum target, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord3sv(GLenum target, const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord4dv(GLenum target, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord4fv(GLenum target, const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord4iv(GLenum target, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoord4sv(GLenum target, const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glLoadTransposeMatrixf(const GLfloat * m);

    LWCPPGL_API void LWCPPGL_CALL glLoadTransposeMatrixd(const GLdouble * m);

    LWCPPGL_API void LWCPPGL_CALL glMultTransposeMatrixf(const GLfloat * m);

    LWCPPGL_API void LWCPPGL_CALL glMultTransposeMatrixd(const GLdouble * m);

    LWCPPGL_API void LWCPPGL_CALL glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);

    LWCPPGL_API void LWCPPGL_CALL glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount);

    LWCPPGL_API void LWCPPGL_CALL glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void* const * indices, GLsizei drawcount);

    LWCPPGL_API void LWCPPGL_CALL glPointParameterf(GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glPointParameterfv(GLenum pname, const GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glPointParameteri(GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glPointParameteriv(GLenum pname, const GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glFogCoordf(GLfloat coord);

    LWCPPGL_API void LWCPPGL_CALL glFogCoordfv(const GLfloat * coord);

    LWCPPGL_API void LWCPPGL_CALL glFogCoordd(GLdouble coord);

    LWCPPGL_API void LWCPPGL_CALL glFogCoorddv(const GLdouble * coord);

    LWCPPGL_API void LWCPPGL_CALL glFogCoordPointer(GLenum type, GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3bv(const GLbyte * v);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3i(GLint red, GLint green, GLint blue);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3s(GLshort red, GLshort green, GLshort blue);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3ubv(const GLubyte * v);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3uiv(const GLuint * v);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3us(GLushort red, GLushort green, GLushort blue);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColor3usv(const GLushort * v);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos2d(GLdouble x, GLdouble y);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos2dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos2f(GLfloat x, GLfloat y);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos2fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos2i(GLint x, GLint y);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos2iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos2s(GLshort x, GLshort y);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos2sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos3d(GLdouble x, GLdouble y, GLdouble z);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos3dv(const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos3f(GLfloat x, GLfloat y, GLfloat z);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos3fv(const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos3i(GLint x, GLint y, GLint z);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos3iv(const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos3s(GLshort x, GLshort y, GLshort z);

    LWCPPGL_API void LWCPPGL_CALL glWindowPos3sv(const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

    LWCPPGL_API void LWCPPGL_CALL glBlendEquation(GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glGenQueries(GLsizei n, GLuint * ids);

    LWCPPGL_API void LWCPPGL_CALL glDeleteQueries(GLsizei n, const GLuint * ids);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsQuery(GLuint id);

    LWCPPGL_API void LWCPPGL_CALL glBeginQuery(GLenum target, GLuint id);

    LWCPPGL_API void LWCPPGL_CALL glEndQuery(GLenum target);

    LWCPPGL_API void LWCPPGL_CALL glGetQueryiv(GLenum target, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params);

    LWCPPGL_API void LWCPPGL_CALL glBindBuffer(GLenum target, GLuint buffer);

    LWCPPGL_API void LWCPPGL_CALL glDeleteBuffers(GLsizei n, const GLuint * buffers);

    LWCPPGL_API void LWCPPGL_CALL glGenBuffers(GLsizei n, GLuint * buffers);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsBuffer(GLuint buffer);

    LWCPPGL_API void LWCPPGL_CALL glBufferData(GLenum target, GLsizeiptr size, const void* data, GLenum usage);

    LWCPPGL_API void LWCPPGL_CALL glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void* data);

    LWCPPGL_API void * LWCPPGL_CALL glMapBuffer(GLenum target, GLenum access);

    LWCPPGL_API GLboolean LWCPPGL_CALL glUnmapBuffer(GLenum target);

    LWCPPGL_API void LWCPPGL_CALL glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetBufferPointerv(GLenum target, GLenum pname, void* * params);

    LWCPPGL_API void LWCPPGL_CALL glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);

    LWCPPGL_API void LWCPPGL_CALL glDrawBuffers(GLsizei n, const GLenum * bufs);

    LWCPPGL_API void LWCPPGL_CALL glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);

    LWCPPGL_API void LWCPPGL_CALL glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);

    LWCPPGL_API void LWCPPGL_CALL glStencilMaskSeparate(GLenum face, GLuint mask);

    LWCPPGL_API void LWCPPGL_CALL glAttachShader(GLuint program, GLuint shader);

    LWCPPGL_API void LWCPPGL_CALL glBindAttribLocation(GLuint program, GLuint index, const GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glCompileShader(GLuint shader);

    LWCPPGL_API GLuint LWCPPGL_CALL glCreateProgram(void);

    LWCPPGL_API GLuint LWCPPGL_CALL glCreateShader(GLenum type);

    LWCPPGL_API void LWCPPGL_CALL glDeleteProgram(GLuint program);

    LWCPPGL_API void LWCPPGL_CALL glDeleteShader(GLuint shader);

    LWCPPGL_API void LWCPPGL_CALL glDetachShader(GLuint program, GLuint shader);

    LWCPPGL_API void LWCPPGL_CALL glDisableVertexAttribArray(GLuint index);

    LWCPPGL_API void LWCPPGL_CALL glEnableVertexAttribArray(GLuint index);

    LWCPPGL_API void LWCPPGL_CALL glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders);

    LWCPPGL_API GLint LWCPPGL_CALL glGetAttribLocation(GLuint program, const GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glGetProgramiv(GLuint program, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);

    LWCPPGL_API void LWCPPGL_CALL glGetShaderiv(GLuint shader, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog);

    LWCPPGL_API void LWCPPGL_CALL glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);

    LWCPPGL_API GLint LWCPPGL_CALL glGetUniformLocation(GLuint program, const GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glGetUniformfv(GLuint program, GLint location, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetUniformiv(GLuint program, GLint location, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params);

    LWCPPGL_API void LWCPPGL_CALL glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetVertexAttribPointerv(GLuint index, GLenum pname, void* * pointer);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsProgram(GLuint program);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsShader(GLuint shader);

    LWCPPGL_API void LWCPPGL_CALL glLinkProgram(GLuint program);

    LWCPPGL_API void LWCPPGL_CALL glShaderSource(GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length);

    LWCPPGL_API void LWCPPGL_CALL glUseProgram(GLuint program);

    LWCPPGL_API void LWCPPGL_CALL glUniform1f(GLint location, GLfloat v0);

    LWCPPGL_API void LWCPPGL_CALL glUniform2f(GLint location, GLfloat v0, GLfloat v1);

    LWCPPGL_API void LWCPPGL_CALL glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);

    LWCPPGL_API void LWCPPGL_CALL glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);

    LWCPPGL_API void LWCPPGL_CALL glUniform1i(GLint location, GLint v0);

    LWCPPGL_API void LWCPPGL_CALL glUniform2i(GLint location, GLint v0, GLint v1);

    LWCPPGL_API void LWCPPGL_CALL glUniform3i(GLint location, GLint v0, GLint v1, GLint v2);

    LWCPPGL_API void LWCPPGL_CALL glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);

    LWCPPGL_API void LWCPPGL_CALL glUniform1fv(GLint location, GLsizei count, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform2fv(GLint location, GLsizei count, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform3fv(GLint location, GLsizei count, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform4fv(GLint location, GLsizei count, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform1iv(GLint location, GLsizei count, const GLint * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform2iv(GLint location, GLsizei count, const GLint * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform3iv(GLint location, GLsizei count, const GLint * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform4iv(GLint location, GLsizei count, const GLint * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glValidateProgram(GLuint program);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib1d(GLuint index, GLdouble x);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib1dv(GLuint index, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib1f(GLuint index, GLfloat x);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib1fv(GLuint index, const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib1s(GLuint index, GLshort x);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib1sv(GLuint index, const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib2dv(GLuint index, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib2fv(GLuint index, const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib2s(GLuint index, GLshort x, GLshort y);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib2sv(GLuint index, const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib3dv(GLuint index, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib3fv(GLuint index, const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib3sv(GLuint index, const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4Nbv(GLuint index, const GLbyte * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4Niv(GLuint index, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4Nsv(GLuint index, const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4Nubv(GLuint index, const GLubyte * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4Nuiv(GLuint index, const GLuint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4Nusv(GLuint index, const GLushort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4bv(GLuint index, const GLbyte * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4dv(GLuint index, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4fv(GLuint index, const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4iv(GLuint index, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4sv(GLuint index, const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4ubv(GLuint index, const GLubyte * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4uiv(GLuint index, const GLuint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttrib4usv(GLuint index, const GLushort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);

    LWCPPGL_API void LWCPPGL_CALL glGetBooleani_v(GLenum target, GLuint index, GLboolean * data);

    LWCPPGL_API void LWCPPGL_CALL glGetIntegeri_v(GLenum target, GLuint index, GLint * data);

    LWCPPGL_API void LWCPPGL_CALL glEnablei(GLenum target, GLuint index);

    LWCPPGL_API void LWCPPGL_CALL glDisablei(GLenum target, GLuint index);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsEnabledi(GLenum target, GLuint index);

    LWCPPGL_API void LWCPPGL_CALL glBeginTransformFeedback(GLenum primitiveMode);

    LWCPPGL_API void LWCPPGL_CALL glEndTransformFeedback(void);

    LWCPPGL_API void LWCPPGL_CALL glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);

    LWCPPGL_API void LWCPPGL_CALL glBindBufferBase(GLenum target, GLuint index, GLuint buffer);

    LWCPPGL_API void LWCPPGL_CALL glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar * const * varyings, GLenum bufferMode);

    LWCPPGL_API void LWCPPGL_CALL glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glClampColor(GLenum target, GLenum clamp);

    LWCPPGL_API void LWCPPGL_CALL glBeginConditionalRender(GLuint id, GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glEndConditionalRender(void);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI1i(GLuint index, GLint x);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI2i(GLuint index, GLint x, GLint y);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI1ui(GLuint index, GLuint x);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI2ui(GLuint index, GLuint x, GLuint y);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI1iv(GLuint index, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI2iv(GLuint index, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI3iv(GLuint index, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI4iv(GLuint index, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI1uiv(GLuint index, const GLuint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI2uiv(GLuint index, const GLuint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI3uiv(GLuint index, const GLuint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI4uiv(GLuint index, const GLuint * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI4bv(GLuint index, const GLbyte * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI4sv(GLuint index, const GLshort * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI4ubv(GLuint index, const GLubyte * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribI4usv(GLuint index, const GLushort * v);

    LWCPPGL_API void LWCPPGL_CALL glGetUniformuiv(GLuint program, GLint location, GLuint * params);

    LWCPPGL_API void LWCPPGL_CALL glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name);

    LWCPPGL_API GLint LWCPPGL_CALL glGetFragDataLocation(GLuint program, const GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glUniform1ui(GLint location, GLuint v0);

    LWCPPGL_API void LWCPPGL_CALL glUniform2ui(GLint location, GLuint v0, GLuint v1);

    LWCPPGL_API void LWCPPGL_CALL glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2);

    LWCPPGL_API void LWCPPGL_CALL glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);

    LWCPPGL_API void LWCPPGL_CALL glUniform1uiv(GLint location, GLsizei count, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform2uiv(GLint location, GLsizei count, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform3uiv(GLint location, GLsizei count, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform4uiv(GLint location, GLsizei count, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glTexParameterIiv(GLenum target, GLenum pname, const GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params);

    LWCPPGL_API void LWCPPGL_CALL glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value);

    LWCPPGL_API void LWCPPGL_CALL glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);

    LWCPPGL_API const GLubyte * LWCPPGL_CALL glGetStringi(GLenum name, GLuint index);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsRenderbuffer(GLuint renderbuffer);

    LWCPPGL_API void LWCPPGL_CALL glBindRenderbuffer(GLenum target, GLuint renderbuffer);

    LWCPPGL_API void LWCPPGL_CALL glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers);

    LWCPPGL_API void LWCPPGL_CALL glGenRenderbuffers(GLsizei n, GLuint * renderbuffers);

    LWCPPGL_API void LWCPPGL_CALL glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsFramebuffer(GLuint framebuffer);

    LWCPPGL_API void LWCPPGL_CALL glBindFramebuffer(GLenum target, GLuint framebuffer);

    LWCPPGL_API void LWCPPGL_CALL glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers);

    LWCPPGL_API void LWCPPGL_CALL glGenFramebuffers(GLsizei n, GLuint * framebuffers);

    LWCPPGL_API GLenum LWCPPGL_CALL glCheckFramebufferStatus(GLenum target);

    LWCPPGL_API void LWCPPGL_CALL glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);

    LWCPPGL_API void LWCPPGL_CALL glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);

    LWCPPGL_API void LWCPPGL_CALL glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);

    LWCPPGL_API void LWCPPGL_CALL glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);

    LWCPPGL_API void LWCPPGL_CALL glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGenerateMipmap(GLenum target);

    LWCPPGL_API void LWCPPGL_CALL glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

    LWCPPGL_API void LWCPPGL_CALL glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);

    LWCPPGL_API void * LWCPPGL_CALL glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);

    LWCPPGL_API void LWCPPGL_CALL glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length);

    LWCPPGL_API void LWCPPGL_CALL glBindVertexArray(GLuint array);

    LWCPPGL_API void LWCPPGL_CALL glDeleteVertexArrays(GLsizei n, const GLuint * arrays);

    LWCPPGL_API void LWCPPGL_CALL glGenVertexArrays(GLsizei n, GLuint * arrays);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsVertexArray(GLuint array);

    LWCPPGL_API void LWCPPGL_CALL glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);

    LWCPPGL_API void LWCPPGL_CALL glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount);

    LWCPPGL_API void LWCPPGL_CALL glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer);

    LWCPPGL_API void LWCPPGL_CALL glPrimitiveRestartIndex(GLuint index);

    LWCPPGL_API void LWCPPGL_CALL glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

    LWCPPGL_API void LWCPPGL_CALL glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar * const * uniformNames, GLuint * uniformIndices);

    LWCPPGL_API void LWCPPGL_CALL glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);

    LWCPPGL_API GLuint LWCPPGL_CALL glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName);

    LWCPPGL_API void LWCPPGL_CALL glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);

    LWCPPGL_API void LWCPPGL_CALL glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);

    LWCPPGL_API void LWCPPGL_CALL glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void* indices, GLint basevertex);

    LWCPPGL_API void LWCPPGL_CALL glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices, GLint basevertex);

    LWCPPGL_API void LWCPPGL_CALL glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLint basevertex);

    LWCPPGL_API void LWCPPGL_CALL glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void* const * indices, GLsizei drawcount, const GLint * basevertex);

    LWCPPGL_API void LWCPPGL_CALL glProvokingVertex(GLenum mode);

    LWCPPGL_API GLsync LWCPPGL_CALL glFenceSync(GLenum condition, GLbitfield flags);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsSync(GLsync sync);

    LWCPPGL_API void LWCPPGL_CALL glDeleteSync(GLsync sync);

    LWCPPGL_API GLenum LWCPPGL_CALL glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);

    LWCPPGL_API void LWCPPGL_CALL glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);

    LWCPPGL_API void LWCPPGL_CALL glGetInteger64v(GLenum pname, GLint64 * data);

    LWCPPGL_API void LWCPPGL_CALL glGetSynciv(GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values);

    LWCPPGL_API void LWCPPGL_CALL glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data);

    LWCPPGL_API void LWCPPGL_CALL glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params);

    LWCPPGL_API void LWCPPGL_CALL glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level);

    LWCPPGL_API void LWCPPGL_CALL glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);

    LWCPPGL_API void LWCPPGL_CALL glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

    LWCPPGL_API void LWCPPGL_CALL glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val);

    LWCPPGL_API void LWCPPGL_CALL glSampleMaski(GLuint maskNumber, GLbitfield mask);

    LWCPPGL_API void LWCPPGL_CALL glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);

    LWCPPGL_API GLint LWCPPGL_CALL glGetFragDataIndex(GLuint program, const GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glGenSamplers(GLsizei count, GLuint * samplers);

    LWCPPGL_API void LWCPPGL_CALL glDeleteSamplers(GLsizei count, const GLuint * samplers);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsSampler(GLuint sampler);

    LWCPPGL_API void LWCPPGL_CALL glBindSampler(GLuint unit, GLuint sampler);

    LWCPPGL_API void LWCPPGL_CALL glSamplerParameteri(GLuint sampler, GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param);

    LWCPPGL_API void LWCPPGL_CALL glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param);

    LWCPPGL_API void LWCPPGL_CALL glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param);

    LWCPPGL_API void LWCPPGL_CALL glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param);

    LWCPPGL_API void LWCPPGL_CALL glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params);

    LWCPPGL_API void LWCPPGL_CALL glQueryCounter(GLuint id, GLenum target);

    LWCPPGL_API void LWCPPGL_CALL glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params);

    LWCPPGL_API void LWCPPGL_CALL glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribDivisor(GLuint index, GLuint divisor);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glVertexP2ui(GLenum type, GLuint value);

    LWCPPGL_API void LWCPPGL_CALL glVertexP2uiv(GLenum type, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glVertexP3ui(GLenum type, GLuint value);

    LWCPPGL_API void LWCPPGL_CALL glVertexP3uiv(GLenum type, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glVertexP4ui(GLenum type, GLuint value);

    LWCPPGL_API void LWCPPGL_CALL glVertexP4uiv(GLenum type, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glTexCoordP1ui(GLenum type, GLuint coords);

    LWCPPGL_API void LWCPPGL_CALL glTexCoordP1uiv(GLenum type, const GLuint * coords);

    LWCPPGL_API void LWCPPGL_CALL glTexCoordP2ui(GLenum type, GLuint coords);

    LWCPPGL_API void LWCPPGL_CALL glTexCoordP2uiv(GLenum type, const GLuint * coords);

    LWCPPGL_API void LWCPPGL_CALL glTexCoordP3ui(GLenum type, GLuint coords);

    LWCPPGL_API void LWCPPGL_CALL glTexCoordP3uiv(GLenum type, const GLuint * coords);

    LWCPPGL_API void LWCPPGL_CALL glTexCoordP4ui(GLenum type, GLuint coords);

    LWCPPGL_API void LWCPPGL_CALL glTexCoordP4uiv(GLenum type, const GLuint * coords);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords);

    LWCPPGL_API void LWCPPGL_CALL glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords);

    LWCPPGL_API void LWCPPGL_CALL glNormalP3ui(GLenum type, GLuint coords);

    LWCPPGL_API void LWCPPGL_CALL glNormalP3uiv(GLenum type, const GLuint * coords);

    LWCPPGL_API void LWCPPGL_CALL glColorP3ui(GLenum type, GLuint color);

    LWCPPGL_API void LWCPPGL_CALL glColorP3uiv(GLenum type, const GLuint * color);

    LWCPPGL_API void LWCPPGL_CALL glColorP4ui(GLenum type, GLuint color);

    LWCPPGL_API void LWCPPGL_CALL glColorP4uiv(GLenum type, const GLuint * color);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColorP3ui(GLenum type, GLuint color);

    LWCPPGL_API void LWCPPGL_CALL glSecondaryColorP3uiv(GLenum type, const GLuint * color);

    LWCPPGL_API void LWCPPGL_CALL glMinSampleShading(GLfloat value);

    LWCPPGL_API void LWCPPGL_CALL glBlendEquationi(GLuint buf, GLenum mode);

    LWCPPGL_API void LWCPPGL_CALL glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha);

    LWCPPGL_API void LWCPPGL_CALL glBlendFunci(GLuint buf, GLenum src, GLenum dst);

    LWCPPGL_API void LWCPPGL_CALL glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

    LWCPPGL_API void LWCPPGL_CALL glDrawArraysIndirect(GLenum mode, const void* indirect);

    LWCPPGL_API void LWCPPGL_CALL glDrawElementsIndirect(GLenum mode, GLenum type, const void* indirect);

    LWCPPGL_API void LWCPPGL_CALL glUniform1d(GLint location, GLdouble x);

    LWCPPGL_API void LWCPPGL_CALL glUniform2d(GLint location, GLdouble x, GLdouble y);

    LWCPPGL_API void LWCPPGL_CALL glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z);

    LWCPPGL_API void LWCPPGL_CALL glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);

    LWCPPGL_API void LWCPPGL_CALL glUniform1dv(GLint location, GLsizei count, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform2dv(GLint location, GLsizei count, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform3dv(GLint location, GLsizei count, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniform4dv(GLint location, GLsizei count, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glGetUniformdv(GLuint program, GLint location, GLdouble * params);

    LWCPPGL_API GLint LWCPPGL_CALL glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name);

    LWCPPGL_API GLuint LWCPPGL_CALL glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);

    LWCPPGL_API void LWCPPGL_CALL glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices);

    LWCPPGL_API void LWCPPGL_CALL glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values);

    LWCPPGL_API void LWCPPGL_CALL glPatchParameteri(GLenum pname, GLint value);

    LWCPPGL_API void LWCPPGL_CALL glPatchParameterfv(GLenum pname, const GLfloat * values);

    LWCPPGL_API void LWCPPGL_CALL glBindTransformFeedback(GLenum target, GLuint id);

    LWCPPGL_API void LWCPPGL_CALL glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids);

    LWCPPGL_API void LWCPPGL_CALL glGenTransformFeedbacks(GLsizei n, GLuint * ids);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsTransformFeedback(GLuint id);

    LWCPPGL_API void LWCPPGL_CALL glPauseTransformFeedback(void);

    LWCPPGL_API void LWCPPGL_CALL glResumeTransformFeedback(void);

    LWCPPGL_API void LWCPPGL_CALL glDrawTransformFeedback(GLenum mode, GLuint id);

    LWCPPGL_API void LWCPPGL_CALL glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream);

    LWCPPGL_API void LWCPPGL_CALL glBeginQueryIndexed(GLenum target, GLuint index, GLuint id);

    LWCPPGL_API void LWCPPGL_CALL glEndQueryIndexed(GLenum target, GLuint index);

    LWCPPGL_API void LWCPPGL_CALL glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glReleaseShaderCompiler(void);

    LWCPPGL_API void LWCPPGL_CALL glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void* binary, GLsizei length);

    LWCPPGL_API void LWCPPGL_CALL glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);

    LWCPPGL_API void LWCPPGL_CALL glDepthRangef(GLfloat n, GLfloat f);

    LWCPPGL_API void LWCPPGL_CALL glClearDepthf(GLfloat d);

    LWCPPGL_API void LWCPPGL_CALL glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void* binary);

    LWCPPGL_API void LWCPPGL_CALL glProgramBinary(GLuint program, GLenum binaryFormat, const void* binary, GLsizei length);

    LWCPPGL_API void LWCPPGL_CALL glProgramParameteri(GLuint program, GLenum pname, GLint value);

    LWCPPGL_API void LWCPPGL_CALL glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program);

    LWCPPGL_API void LWCPPGL_CALL glActiveShaderProgram(GLuint pipeline, GLuint program);

    LWCPPGL_API GLuint LWCPPGL_CALL glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar * const * strings);

    LWCPPGL_API void LWCPPGL_CALL glBindProgramPipeline(GLuint pipeline);

    LWCPPGL_API void LWCPPGL_CALL glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines);

    LWCPPGL_API void LWCPPGL_CALL glGenProgramPipelines(GLsizei n, GLuint * pipelines);

    LWCPPGL_API GLboolean LWCPPGL_CALL glIsProgramPipeline(GLuint pipeline);

    LWCPPGL_API void LWCPPGL_CALL glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform1i(GLuint program, GLint location, GLint v0);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform1f(GLuint program, GLint location, GLfloat v0);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform1d(GLuint program, GLint location, GLdouble v0);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform1ui(GLuint program, GLint location, GLuint v0);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

    LWCPPGL_API void LWCPPGL_CALL glValidateProgramPipeline(GLuint pipeline);

    LWCPPGL_API void LWCPPGL_CALL glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribL1d(GLuint index, GLdouble x);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribL1dv(GLuint index, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribL2dv(GLuint index, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribL3dv(GLuint index, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribL4dv(GLuint index, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);

    LWCPPGL_API void LWCPPGL_CALL glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params);

    LWCPPGL_API void LWCPPGL_CALL glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);

    LWCPPGL_API void LWCPPGL_CALL glViewportIndexedfv(GLuint index, const GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glScissorArrayv(GLuint first, GLsizei count, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glScissorIndexedv(GLuint index, const GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f);

    LWCPPGL_API void LWCPPGL_CALL glGetFloati_v(GLenum target, GLuint index, GLfloat * data);

    LWCPPGL_API void LWCPPGL_CALL glGetDoublei_v(GLenum target, GLuint index, GLdouble * data);

    LWCPPGL_API void LWCPPGL_CALL glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);

    LWCPPGL_API void LWCPPGL_CALL glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLuint baseinstance);

    LWCPPGL_API void LWCPPGL_CALL glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);

    LWCPPGL_API void LWCPPGL_CALL glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);

    LWCPPGL_API void LWCPPGL_CALL glMemoryBarrier(GLbitfield barriers);

    LWCPPGL_API void LWCPPGL_CALL glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);

    LWCPPGL_API void LWCPPGL_CALL glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

    LWCPPGL_API void LWCPPGL_CALL glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount);

    LWCPPGL_API void LWCPPGL_CALL glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);

    LWCPPGL_API void LWCPPGL_CALL glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);

    LWCPPGL_API void LWCPPGL_CALL glDispatchComputeIndirect(GLintptr indirect);

    LWCPPGL_API void LWCPPGL_CALL glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

    LWCPPGL_API void LWCPPGL_CALL glFramebufferParameteri(GLenum target, GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 * params);

    LWCPPGL_API void LWCPPGL_CALL glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);

    LWCPPGL_API void LWCPPGL_CALL glInvalidateTexImage(GLuint texture, GLint level);

    LWCPPGL_API void LWCPPGL_CALL glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length);

    LWCPPGL_API void LWCPPGL_CALL glInvalidateBufferData(GLuint buffer);

    LWCPPGL_API void LWCPPGL_CALL glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments);

    LWCPPGL_API void LWCPPGL_CALL glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glMultiDrawArraysIndirect(GLenum mode, const void* indirect, GLsizei drawcount, GLsizei stride);

    LWCPPGL_API void LWCPPGL_CALL glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void* indirect, GLsizei drawcount, GLsizei stride);

    LWCPPGL_API void LWCPPGL_CALL glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params);

    LWCPPGL_API GLuint LWCPPGL_CALL glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params);

    LWCPPGL_API GLint LWCPPGL_CALL glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name);

    LWCPPGL_API GLint LWCPPGL_CALL glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name);

    LWCPPGL_API void LWCPPGL_CALL glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);

    LWCPPGL_API void LWCPPGL_CALL glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

    LWCPPGL_API void LWCPPGL_CALL glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);

    LWCPPGL_API void LWCPPGL_CALL glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

    LWCPPGL_API void LWCPPGL_CALL glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

    LWCPPGL_API void LWCPPGL_CALL glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);

    LWCPPGL_API void LWCPPGL_CALL glVertexAttribBinding(GLuint attribindex, GLuint bindingindex);

    LWCPPGL_API void LWCPPGL_CALL glVertexBindingDivisor(GLuint bindingindex, GLuint divisor);

    LWCPPGL_API void LWCPPGL_CALL glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);

    LWCPPGL_API void LWCPPGL_CALL glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);

    LWCPPGL_API void LWCPPGL_CALL glDebugMessageCallback(GLDEBUGPROC callback, const void* userParam);

    LWCPPGL_API GLuint LWCPPGL_CALL glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);

    LWCPPGL_API void LWCPPGL_CALL glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message);

    LWCPPGL_API void LWCPPGL_CALL glPopDebugGroup(void);

    LWCPPGL_API void LWCPPGL_CALL glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label);

    LWCPPGL_API void LWCPPGL_CALL glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);

    LWCPPGL_API void LWCPPGL_CALL glObjectPtrLabel(const void* ptr, GLsizei length, const GLchar * label);

    LWCPPGL_API void LWCPPGL_CALL glGetObjectPtrLabel(const void* ptr, GLsizei bufSize, GLsizei * length, GLchar * label);

    LWCPPGL_API void LWCPPGL_CALL glBufferStorage(GLenum target, GLsizeiptr size, const void* data, GLbitfield flags);

    LWCPPGL_API void LWCPPGL_CALL glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers);

    LWCPPGL_API void LWCPPGL_CALL glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes);

    LWCPPGL_API void LWCPPGL_CALL glBindTextures(GLuint first, GLsizei count, const GLuint * textures);

    LWCPPGL_API void LWCPPGL_CALL glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers);

    LWCPPGL_API void LWCPPGL_CALL glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures);

    LWCPPGL_API void LWCPPGL_CALL glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);

    LWCPPGL_API void LWCPPGL_CALL glClipControl(GLenum origin, GLenum depth);

    LWCPPGL_API void LWCPPGL_CALL glCreateTransformFeedbacks(GLsizei n, GLuint * ids);

    LWCPPGL_API void LWCPPGL_CALL glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer);

    LWCPPGL_API void LWCPPGL_CALL glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);

    LWCPPGL_API void LWCPPGL_CALL glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param);

    LWCPPGL_API void LWCPPGL_CALL glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param);

    LWCPPGL_API void LWCPPGL_CALL glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param);

    LWCPPGL_API void LWCPPGL_CALL glCreateBuffers(GLsizei n, GLuint * buffers);

    LWCPPGL_API void LWCPPGL_CALL glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void* data, GLbitfield flags);

    LWCPPGL_API void LWCPPGL_CALL glNamedBufferData(GLuint buffer, GLsizeiptr size, const void* data, GLenum usage);

    LWCPPGL_API void LWCPPGL_CALL glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

    LWCPPGL_API void LWCPPGL_CALL glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void* data);

    LWCPPGL_API void * LWCPPGL_CALL glMapNamedBuffer(GLuint buffer, GLenum access);

    LWCPPGL_API void * LWCPPGL_CALL glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);

    LWCPPGL_API GLboolean LWCPPGL_CALL glUnmapNamedBuffer(GLuint buffer);

    LWCPPGL_API void LWCPPGL_CALL glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length);

    LWCPPGL_API void LWCPPGL_CALL glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params);

    LWCPPGL_API void LWCPPGL_CALL glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void* * params);

    LWCPPGL_API void LWCPPGL_CALL glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void* data);

    LWCPPGL_API void LWCPPGL_CALL glCreateFramebuffers(GLsizei n, GLuint * framebuffers);

    LWCPPGL_API void LWCPPGL_CALL glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);

    LWCPPGL_API void LWCPPGL_CALL glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);

    LWCPPGL_API void LWCPPGL_CALL glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);

    LWCPPGL_API void LWCPPGL_CALL glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf);

    LWCPPGL_API void LWCPPGL_CALL glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum * bufs);

    LWCPPGL_API void LWCPPGL_CALL glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src);

    LWCPPGL_API void LWCPPGL_CALL glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments);

    LWCPPGL_API void LWCPPGL_CALL glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value);

    LWCPPGL_API void LWCPPGL_CALL glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value);

    LWCPPGL_API void LWCPPGL_CALL glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value);

    LWCPPGL_API void LWCPPGL_CALL glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);

    LWCPPGL_API void LWCPPGL_CALL glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

    LWCPPGL_API GLenum LWCPPGL_CALL glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target);

    LWCPPGL_API void LWCPPGL_CALL glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param);

    LWCPPGL_API void LWCPPGL_CALL glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glCreateRenderbuffers(GLsizei n, GLuint * renderbuffers);

    LWCPPGL_API void LWCPPGL_CALL glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glCreateTextures(GLenum target, GLsizei n, GLuint * textures);

    LWCPPGL_API void LWCPPGL_CALL glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer);

    LWCPPGL_API void LWCPPGL_CALL glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

    LWCPPGL_API void LWCPPGL_CALL glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);

    LWCPPGL_API void LWCPPGL_CALL glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

    LWCPPGL_API void LWCPPGL_CALL glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);

    LWCPPGL_API void LWCPPGL_CALL glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

    LWCPPGL_API void LWCPPGL_CALL glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data);

    LWCPPGL_API void LWCPPGL_CALL glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);

    LWCPPGL_API void LWCPPGL_CALL glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);

    LWCPPGL_API void LWCPPGL_CALL glTextureParameterf(GLuint texture, GLenum pname, GLfloat param);

    LWCPPGL_API void LWCPPGL_CALL glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat * param);

    LWCPPGL_API void LWCPPGL_CALL glTextureParameteri(GLuint texture, GLenum pname, GLint param);

    LWCPPGL_API void LWCPPGL_CALL glTextureParameterIiv(GLuint texture, GLenum pname, const GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint * params);

    LWCPPGL_API void LWCPPGL_CALL glTextureParameteriv(GLuint texture, GLenum pname, const GLint * param);

    LWCPPGL_API void LWCPPGL_CALL glGenerateTextureMipmap(GLuint texture);

    LWCPPGL_API void LWCPPGL_CALL glBindTextureUnit(GLuint unit, GLuint texture);

    LWCPPGL_API void LWCPPGL_CALL glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glCreateVertexArrays(GLsizei n, GLuint * arrays);

    LWCPPGL_API void LWCPPGL_CALL glDisableVertexArrayAttrib(GLuint vaobj, GLuint index);

    LWCPPGL_API void LWCPPGL_CALL glEnableVertexArrayAttrib(GLuint vaobj, GLuint index);

    LWCPPGL_API void LWCPPGL_CALL glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer);

    LWCPPGL_API void LWCPPGL_CALL glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);

    LWCPPGL_API void LWCPPGL_CALL glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);

    LWCPPGL_API void LWCPPGL_CALL glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex);

    LWCPPGL_API void LWCPPGL_CALL glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);

    LWCPPGL_API void LWCPPGL_CALL glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);

    LWCPPGL_API void LWCPPGL_CALL glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);

    LWCPPGL_API void LWCPPGL_CALL glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor);

    LWCPPGL_API void LWCPPGL_CALL glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param);

    LWCPPGL_API void LWCPPGL_CALL glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param);

    LWCPPGL_API void LWCPPGL_CALL glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);

    LWCPPGL_API void LWCPPGL_CALL glCreateSamplers(GLsizei n, GLuint * samplers);

    LWCPPGL_API void LWCPPGL_CALL glCreateProgramPipelines(GLsizei n, GLuint * pipelines);

    LWCPPGL_API void LWCPPGL_CALL glCreateQueries(GLenum target, GLsizei n, GLuint * ids);

    LWCPPGL_API void LWCPPGL_CALL glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);

    LWCPPGL_API void LWCPPGL_CALL glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);

    LWCPPGL_API void LWCPPGL_CALL glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);

    LWCPPGL_API void LWCPPGL_CALL glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);

    LWCPPGL_API void LWCPPGL_CALL glMemoryBarrierByRegion(GLbitfield barriers);

    LWCPPGL_API void LWCPPGL_CALL glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void* pixels);

    LWCPPGL_API GLenum LWCPPGL_CALL glGetGraphicsResetStatus(void);

    LWCPPGL_API void LWCPPGL_CALL glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* pixels);

    LWCPPGL_API void LWCPPGL_CALL glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params);

    LWCPPGL_API void LWCPPGL_CALL glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params);

    LWCPPGL_API void LWCPPGL_CALL glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params);

    LWCPPGL_API void LWCPPGL_CALL glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params);

    LWCPPGL_API void LWCPPGL_CALL glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data);

    LWCPPGL_API void LWCPPGL_CALL glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v);

    LWCPPGL_API void LWCPPGL_CALL glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v);

    LWCPPGL_API void LWCPPGL_CALL glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v);

    LWCPPGL_API void LWCPPGL_CALL glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values);

    LWCPPGL_API void LWCPPGL_CALL glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values);

    LWCPPGL_API void LWCPPGL_CALL glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values);

    LWCPPGL_API void LWCPPGL_CALL glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern);

    LWCPPGL_API void LWCPPGL_CALL glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* table);

    LWCPPGL_API void LWCPPGL_CALL glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* image);

    LWCPPGL_API void LWCPPGL_CALL glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void* row, GLsizei columnBufSize, void* column, void* span);

    LWCPPGL_API void LWCPPGL_CALL glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values);

    LWCPPGL_API void LWCPPGL_CALL glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values);

    LWCPPGL_API void LWCPPGL_CALL glTextureBarrier(void);

    LWCPPGL_API void LWCPPGL_CALL glSpecializeShader(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue);

    LWCPPGL_API void LWCPPGL_CALL glMultiDrawArraysIndirectCount(GLenum mode, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);

    LWCPPGL_API void LWCPPGL_CALL glMultiDrawElementsIndirectCount(GLenum mode, GLenum type, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);

    LWCPPGL_API void LWCPPGL_CALL glPolygonOffsetClamp(GLfloat factor, GLfloat units, GLfloat clamp);
}//namespace gl

#endif//LWCPPGL_GL_H