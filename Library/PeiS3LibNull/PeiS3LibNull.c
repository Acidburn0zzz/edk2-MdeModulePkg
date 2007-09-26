/**@file
  S3 Library. This library class defines a set of methods related do S3 mode

Copyright (c) 2006 - 2007 Intel Corporation
All rights reserved. This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/
#include <PiPei.h>

/**
  Calling this function causes the system restore config from S3.
  
  @retval EFI_SUCESS   Sucess to restore config from S3.
  @retval Others       Fail to restore config from S3.
**/
EFI_STATUS
EFIAPI
S3RestoreConfig (
  VOID
  )
{
  return EFI_UNSUPPORTED;
}

