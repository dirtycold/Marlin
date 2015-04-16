// Unified Header 
// Hengtong specific Configurations

#include "hengtong_model.h"

#if HENGTONG_MODEL == 150
	#include "hengtong_150.h"
#elif HENGTONG_MODEL == 240
	#include "hengtong_240.h"
#elif HENGTONG_MODEL == 2401
	#include "hengtong_240z.h"
#elif HENGTONG_MODEL == 300
	#include "hengtong_300.h"
#elif HENGTONG_MODEL == 400
	#include "hengtong_400.h"
#eldef

#define HENGTONG_DEFAULT_Kp 12.23
#define HENGTONG_DEFAULT_Ki 0.47
#define HENGTONG_DEFAULT_Kd 80.23
