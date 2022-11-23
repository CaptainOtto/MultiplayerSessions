﻿// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Logging/LogMacros.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMultiplayerSessions, Log, All);

FString GetClientServerContextString(UObject* ContextObject = nullptr);