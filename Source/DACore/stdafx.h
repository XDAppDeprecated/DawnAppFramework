
#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <math.h>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>
#include <sstream>
#include <thread>
#include <mutex>
#include <map>

#define GLEW_MX
#define GLEW_STATIC

#include <lpng/png.h>
#include <zlib/zconf.h>
#include <zlib/zlib.h>

#pragma comment (lib, "opengl32.lib")
#pragma comment (lib, "zlib.lib")
#pragma comment (lib, "libpng16.lib")


#include "DDefinition.h"
#include "DObject.h"