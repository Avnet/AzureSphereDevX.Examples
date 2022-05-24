#pragma once

/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

/// <summary>
/// Exit codes for this application. Application exit codes
/// must be between 1 and 149, where 0 is reserved for successful 
//  termination.  dx_exit_codes.h owns/defines exit codes 0 and 
/// 150 - 254.
/// </summary>
typedef enum {
	APP_ExitCode_Telemetry_Buffer_Too_Small = 1,
   APP_ExitCode_OpenMutableFileFailed = 2,
   APP_ExitCode_WriteFileWriteFailed = 3,
   APP_ExitCode_ReadFile_ReadFailed = 4,
   APP_ExitCode_ReadButtonAError = 5,
   APP_ExitCode_ReadButtonBError = 6,
} App_Exit_Code;