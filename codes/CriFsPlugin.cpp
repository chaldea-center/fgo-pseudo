void CriFsPlugin___cctor(const MethodInfo *method)
{
  struct CriFsPlugin_StaticFields *static_fields; // x8

  if ( (byte_5969738 & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_5969738 = 1;
  }
  static_fields = CriFsPlugin_TypeInfo->static_fields;
  static_fields->initializationCount = 0;
  static_fields->isConfigured = 0;
  *(_QWORD *)&static_fields->defaultInstallBufferSize = 0x40000000400000LL;
}


uint32_t CriFsPlugin__CRIWARE05FCC2E5(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = off_59696F0;
  if ( !off_59696F0 )
  {
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "CRIWARE05FCC2E5";
    v3[3] = 15;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    v1 = (void *)sub_2214114(v3);
    off_59696F0 = v1;
  }
  return ((uint32_t (*)(void))v1)();
}


void CriFsPlugin__CRIWARE3F65C816(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = off_59696D8;
  if ( !off_59696D8 )
  {
    v2[0] = "cri_ware_unity";
    v2[1] = 14;
    v2[2] = "CRIWARE3F65C816";
    v2[3] = 15;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void *)sub_2214114(v2);
    off_59696D8 = v1;
  }
  ((void (*)(void))v1)();
}


void CriFsPlugin__CRIWARE610B5BF8(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = off_59696E8;
  if ( !off_59696E8 )
  {
    v2[0] = "cri_ware_unity";
    v2[1] = 14;
    v2[2] = "CRIWARE610B5BF8";
    v2[3] = 15;
    v2[4] = 0x200000000LL;
    v3 = 0;
    v4 = 0;
    v1 = (void *)sub_2214114(v2);
    off_59696E8 = v1;
  }
  ((void (*)(void))v1)();
}


void CriFsPlugin__CRIWARE7222D63A(
        int32_t num_loaders,
        int32_t num_binders,
        int32_t num_installers,
        int32_t max_path,
        bool minimize_file_descriptor_usage,
        bool enable_crc_check,
        const MethodInfo *method)
{
  void *v9; // x8
  _QWORD v14[5]; // [xsp+0h] [xbp-70h] BYREF
  int v15; // [xsp+28h] [xbp-48h]
  char v16; // [xsp+2Ch] [xbp-44h]

  v9 = off_59696D0;
  if ( !off_59696D0 )
  {
    v14[0] = "cri_ware_unity";
    v14[1] = 14;
    v14[2] = "CRIWARE7222D63A";
    v14[3] = 15;
    v14[4] = 0x200000000LL;
    v15 = 24;
    v16 = 0;
    v9 = (void *)sub_2214114(v14);
    off_59696D0 = v9;
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, bool, bool, const MethodInfo *))v9)(
    (unsigned int)num_loaders,
    (unsigned int)num_binders,
    (unsigned int)num_installers,
    (unsigned int)max_path,
    minimize_file_descriptor_usage,
    enable_crc_check,
    method);
}


bool CriFsPlugin__CRIWARE9F3B52BA(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = off_59696E0;
  if ( !off_59696E0 )
  {
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "CRIWARE9F3B52BA";
    v3[3] = 15;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    v1 = (void *)sub_2214114(v3);
    off_59696E0 = v1;
  }
  return ((unsigned int (*)(void))v1)() != 0;
}


void CriFsPlugin__FinalizeLibrary(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CriFsPlugin_c *inited; // x0
  struct CriFsPlugin_StaticFields *static_fields; // x8
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  CriFsPlugin_c *v8; // x0
  struct CriFsPlugin_StaticFields *v9; // x9
  CriDisposableObjectManager_c *v10; // x0
  int v11; // w10
  const MethodInfo *v12; // x0

  if ( (byte_59696C8 & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_59696C8 = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v1, v2);
    inited = CriFsPlugin_TypeInfo;
  }
  static_fields = inited->static_fields;
  if ( --static_fields->initializationCount >= 0 )
    goto LABEL_11;
  if ( !*(&inited->_2.cctor_finished + 1) )
  {
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(inited, v1, v2);
    static_fields = CriFsPlugin_TypeInfo->static_fields;
  }
  static_fields->initializationCount = 0;
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    inited = CriFsPlugin_TypeInfo;
LABEL_11:
    if ( !*(&inited->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(inited, v1, v2);
      inited = CriFsPlugin_TypeInfo;
    }
    if ( !inited->static_fields->initializationCount )
    {
      CriFsServer__DestroyInstance((const MethodInfo *)inited);
      v8 = CriFsPlugin_TypeInfo;
      if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v6, v7);
        v8 = CriFsPlugin_TypeInfo;
      }
      v9 = v8->static_fields;
      v10 = CriDisposableObjectManager_TypeInfo;
      v11 = *(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1);
      v9->installBufferSize = v9->defaultInstallBufferSize;
      if ( !v11 )
        j_il2cpp_runtime_class_init_0(v10, v6, v7);
      CriDisposableObjectManager__CallOnModuleFinalization(2, v6);
      CriFsPlugin__CRIWARE610B5BF8(v12);
    }
  }
}


void CriFsPlugin__InitializeLibrary(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CriFsPlugin_c *inited; // x0
  struct CriFsPlugin_StaticFields *static_fields; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  bool IsLibraryInitialized; // w8
  CriFsPlugin_c *v9; // x0

  if ( (byte_59696C6 & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_59696C6 = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v1, v2);
    inited = CriFsPlugin_TypeInfo;
  }
  static_fields = inited->static_fields;
  if ( !static_fields->initializationCount++ )
  {
    if ( !*(&inited->_2.cctor_finished + 1) )
      inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(inited, v1, v2);
    IsLibraryInitialized = CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited);
    v9 = CriFsPlugin_TypeInfo;
    if ( IsLibraryInitialized )
    {
      if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
        v9 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v6, v7);
      CriFsPlugin__FinalizeLibrary((const MethodInfo *)v9);
      v9 = CriFsPlugin_TypeInfo;
      CriFsPlugin_TypeInfo->static_fields->initializationCount = 1;
    }
    if ( !*(&v9->_2.cctor_finished + 1) )
      v9 = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(v9, v6, v7);
    CriFsPlugin__CRIWARE3F65C816((const MethodInfo *)v9);
  }
}


bool CriFsPlugin__IsLibraryInitialized(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CriFsPlugin_c *inited; // x0

  if ( (byte_59696C7 & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_59696C7 = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v1, v2);
  return CriFsPlugin__CRIWARE9F3B52BA((const MethodInfo *)inited);
}


void CriFsPlugin__SetConfigAdditionalParameters_ANDROID(int32_t device_read_bps, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59696C3 & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_59696C3 = 1;
  }
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method, v2);
  CriFsPlugin__criFsUnity_SetConfigAdditionalParameters_ANDROID(device_read_bps, method);
}


// local variable allocation has failed, the output may be wrong!
void CriFsPlugin__SetConfigParameters(
        int32_t num_loaders,
        int32_t num_binders,
        int32_t num_installers,
        int32_t argInstallBufferSize,
        int32_t max_path,
        bool minimize_file_descriptor_usage,
        bool enable_crc_check,
        const MethodInfo *method)
{
  struct CriFsPlugin_StaticFields *static_fields; // x8

  if ( (byte_59696C1 & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_59696C1 = 1;
  }
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, *(_QWORD *)&num_binders, *(_QWORD *)&num_installers);
  CriFsPlugin__CRIWARE7222D63A(
    num_loaders,
    num_binders,
    num_installers,
    max_path,
    minimize_file_descriptor_usage,
    enable_crc_check,
    (const MethodInfo *)enable_crc_check);
  static_fields = CriFsPlugin_TypeInfo->static_fields;
  static_fields->installBufferSize = argInstallBufferSize;
  static_fields->isConfigured = 1;
}


void CriFsPlugin__SetDataDecompressionThreadPriorityExperimentalAndroid(int32_t prio, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59696C5 & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_59696C5 = 1;
  }
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method, v2);
  CriFsPlugin__criFsUnity_SetDataDecompressionThreadPriority_ANDROID(prio, method);
}


void CriFsPlugin__SetMemoryFileSystemThreadPriorityExperimentalAndroid(int32_t prio, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59696C4 & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_59696C4 = 1;
  }
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method, v2);
  CriFsPlugin__criFsUnity_SetMemoryFileSystemThreadPriority_ANDROID(prio, method);
}


// local variable allocation has failed, the output may be wrong!
void CriFsPlugin__SetReadDeviceEnabled(int32_t deviceId, bool enabled, const MethodInfo *method)
{
  if ( (byte_59696C2 & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_59696C2 = 1;
  }
  if ( deviceId || enabled )
  {
    if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, enabled, method);
    CriFsPlugin__criFs_SetReadDeviceEnabled(deviceId, enabled, method);
  }
}


uint32_t CriFsPlugin__criFsLoader_GetRetryCount(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = off_59696F8;
  if ( !off_59696F8 )
  {
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "criFsLoader_GetRetryCount";
    v3[3] = 25;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    v1 = (void *)sub_2214114(v3);
    off_59696F8 = v1;
  }
  return ((uint32_t (*)(void))v1)();
}


void CriFsPlugin__criFsUnity_SetConfigAdditionalParameters_ANDROID(int32_t device_read_bps, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969720;
  if ( !off_5969720 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "criFsUnity_SetConfigAdditionalParameters_ANDROID";
    v4[3] = 48;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v3 = (void *)sub_2214114(v4);
    off_5969720 = v3;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v3)((unsigned int)device_read_bps, method);
}


void CriFsPlugin__criFsUnity_SetDataDecompressionThreadPriority_ANDROID(int32_t prio, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969730;
  if ( !off_5969730 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "criFsUnity_SetDataDecompressionThreadPriority_ANDROID";
    v4[3] = 53;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v3 = (void *)sub_2214114(v4);
    off_5969730 = v3;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v3)((unsigned int)prio, method);
}


void CriFsPlugin__criFsUnity_SetMemoryFileSystemThreadPriority_ANDROID(int32_t prio, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969728;
  if ( !off_5969728 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "criFsUnity_SetMemoryFileSystemThreadPriority_ANDROID";
    v4[3] = 52;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v3 = (void *)sub_2214114(v4);
    off_5969728 = v3;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v3)((unsigned int)prio, method);
}


int32_t CriFsPlugin__criFs_GetNumBinds(int32_t *cur, int32_t *max, int32_t *limit, const MethodInfo *method)
{
  void *v6; // x8
  _QWORD v9[5]; // [xsp+0h] [xbp-60h] BYREF
  int v10; // [xsp+28h] [xbp-38h]
  char v11; // [xsp+2Ch] [xbp-34h]

  v6 = off_5969700;
  if ( !off_5969700 )
  {
    v9[0] = "cri_ware_unity";
    v9[1] = 14;
    v9[2] = "criFs_GetNumBinds";
    v9[3] = 17;
    v9[4] = 0x200000000LL;
    v10 = 24;
    v11 = 0;
    v6 = (void *)sub_2214114(v9);
    off_5969700 = v6;
  }
  return ((int32_t (__fastcall *)(int32_t *, int32_t *, int32_t *, const MethodInfo *))v6)(cur, max, limit, method);
}


int32_t CriFsPlugin__criFs_GetNumUsedInstallers(int32_t *cur, int32_t *max, int32_t *limit, const MethodInfo *method)
{
  void *v6; // x8
  _QWORD v9[5]; // [xsp+0h] [xbp-60h] BYREF
  int v10; // [xsp+28h] [xbp-38h]
  char v11; // [xsp+2Ch] [xbp-34h]

  v6 = off_5969710;
  if ( !off_5969710 )
  {
    v9[0] = "cri_ware_unity";
    v9[1] = 14;
    v9[2] = "criFs_GetNumUsedInstallers";
    v9[3] = 26;
    v9[4] = 0x200000000LL;
    v10 = 24;
    v11 = 0;
    v6 = (void *)sub_2214114(v9);
    off_5969710 = v6;
  }
  return ((int32_t (__fastcall *)(int32_t *, int32_t *, int32_t *, const MethodInfo *))v6)(cur, max, limit, method);
}


int32_t CriFsPlugin__criFs_GetNumUsedLoaders(int32_t *cur, int32_t *max, int32_t *limit, const MethodInfo *method)
{
  void *v6; // x8
  _QWORD v9[5]; // [xsp+0h] [xbp-60h] BYREF
  int v10; // [xsp+28h] [xbp-38h]
  char v11; // [xsp+2Ch] [xbp-34h]

  v6 = off_5969708;
  if ( !off_5969708 )
  {
    v9[0] = "cri_ware_unity";
    v9[1] = 14;
    v9[2] = "criFs_GetNumUsedLoaders";
    v9[3] = 23;
    v9[4] = 0x200000000LL;
    v10 = 24;
    v11 = 0;
    v6 = (void *)sub_2214114(v9);
    off_5969708 = v6;
  }
  return ((int32_t (__fastcall *)(int32_t *, int32_t *, int32_t *, const MethodInfo *))v6)(cur, max, limit, method);
}


int32_t CriFsPlugin__criFs_SetReadDeviceEnabled(int32_t device_id, bool enabled, const MethodInfo *method)
{
  void *v5; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v5 = off_5969718;
  if ( !off_5969718 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFs_SetReadDeviceEnabled";
    v7[3] = 26;
    v7[4] = 0x200000000LL;
    v8 = 8;
    v9 = 0;
    v5 = (void *)sub_2214114(v7);
    off_5969718 = v5;
  }
  return ((int32_t (__fastcall *)(_QWORD, bool, const MethodInfo *))v5)((unsigned int)device_id, enabled, method);
}


bool CriFsPlugin__get_isInitialized(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CriFsPlugin_c *v3; // x0

  if ( (byte_59696C0 & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    byte_59696C0 = 1;
  }
  v3 = CriFsPlugin_TypeInfo;
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v1, v2);
    v3 = CriFsPlugin_TypeInfo;
  }
  return v3->static_fields->initializationCount > 0;
}