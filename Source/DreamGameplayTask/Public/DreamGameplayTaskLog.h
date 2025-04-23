#pragma once

#include "Logging/LogCategory.h"
#include "Logging/LogMacros.h"
#include "Logging/LogVerbosity.h"

DECLARE_LOG_CATEGORY_EXTERN(LogDreamGameplayTask, All, All);

#define DGT_LOG(V, F, ...) UE_LOG(LogDreamGameplayTask, V, F, ##__VA_ARGS__)