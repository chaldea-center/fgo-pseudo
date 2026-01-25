void CriFsPlugin___cctor(const MethodInfo *method)
{
  struct CriFsPlugin_StaticFields *static_fields; // x8

  if ( (byte_4CE7AB0 & 1) == 0 )
  {
    sub_1C7BAE8(&CriFsPlugin_TypeInfo);
    byte_4CE7AB0 = 1;
  }
  static_fields = CriFsPlugin_TypeInfo->static_fields;
  static_fields->initializationCount = 0;
  static_fields->isConfigured = 0;
  *(_QWORD *)&static_fields->defaultInstallBufferSize = 0x40000000400000LL;
}


uint32_t CriFsPlugin__CRIWARE05FCC2E5(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)off_4CE7A68;
  if ( !off_4CE7A68 )
  {
    v4 = 0;
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "CRIWARE05FCC2E5";
    v3[3] = 15;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1C7C198(v3);
    v1 = method;
    off_4CE7A68 = method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


void CriFsPlugin__CRIWARE3F65C816(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = off_4CE7A50;
  if ( !off_4CE7A50 )
  {
    v3 = 0;
    v2[0] = "cri_ware_unity";
    v2[1] = 14;
    v2[2] = "CRIWARE3F65C816";
    v2[3] = 15;
    v2[4] = 0x200000000LL;
    v4 = 0;
    v1 = (void *)sub_1C7C198(v2);
    off_4CE7A50 = v1;
  }
  ((void (*)(void))v1)();
}


void CriFsPlugin__CRIWARE610B5BF8(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v2[5]; // [xsp+0h] [xbp-40h] BYREF
  int v3; // [xsp+28h] [xbp-18h]
  char v4; // [xsp+2Ch] [xbp-14h]

  v1 = off_4CE7A60;
  if ( !off_4CE7A60 )
  {
    v3 = 0;
    v2[0] = "cri_ware_unity";
    v2[1] = 14;
    v2[2] = "CRIWARE610B5BF8";
    v2[3] = 15;
    v2[4] = 0x200000000LL;
    v4 = 0;
    v1 = (void *)sub_1C7C198(v2);
    off_4CE7A60 = v1;
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
  void *v7; // x8
  _QWORD v14[5]; // [xsp+0h] [xbp-70h] BYREF
  int v15; // [xsp+28h] [xbp-48h]
  char v16; // [xsp+2Ch] [xbp-44h]

  v7 = off_4CE7A48;
  if ( !off_4CE7A48 )
  {
    v14[0] = "cri_ware_unity";
    v14[1] = 14;
    v14[2] = "CRIWARE7222D63A";
    v14[3] = 15;
    v15 = 24;
    v14[4] = 0x200000000LL;
    v16 = 0;
    v7 = (void *)sub_1C7C198(v14);
    off_4CE7A48 = v7;
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, bool, bool, const MethodInfo *))v7)(
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
  const MethodInfo *v1; // x8
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)off_4CE7A58;
  if ( !off_4CE7A58 )
  {
    v4 = 0;
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "CRIWARE9F3B52BA";
    v3[3] = 15;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1C7C198(v3);
    v1 = method;
    off_4CE7A58 = method;
  }
  return ((unsigned int (__fastcall *)(const MethodInfo *))v1)(method) != 0;
}


void CriFsPlugin__FinalizeLibrary(const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  struct CriFsPlugin_StaticFields *static_fields; // x8
  const MethodInfo *v4; // x1
  CriFsPlugin_c *v5; // x0
  const MethodInfo *v6; // x0

  if ( (byte_4CE7A40 & 1) == 0 )
  {
    sub_1C7BAE8(&CriDisposableObjectManager_TypeInfo);
    sub_1C7BAE8(&CriFsPlugin_TypeInfo);
    byte_4CE7A40 = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    inited = CriFsPlugin_TypeInfo;
  }
  static_fields = inited->static_fields;
  if ( --static_fields->initializationCount >= 0 )
    goto LABEL_11;
  if ( !inited->_2.cctor_finished )
  {
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(inited);
    static_fields = CriFsPlugin_TypeInfo->static_fields;
  }
  static_fields->initializationCount = 0;
  if ( CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited) )
  {
    inited = CriFsPlugin_TypeInfo;
LABEL_11:
    if ( !inited->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(inited);
      inited = CriFsPlugin_TypeInfo;
    }
    if ( !inited->static_fields->initializationCount )
    {
      CriFsServer__DestroyInstance((const MethodInfo *)inited);
      v5 = CriFsPlugin_TypeInfo;
      if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
        v5 = CriFsPlugin_TypeInfo;
      }
      v5->static_fields->installBufferSize = v5->static_fields->defaultInstallBufferSize;
      if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
      CriDisposableObjectManager__CallOnModuleFinalization(2, v4);
      CriFsPlugin__CRIWARE610B5BF8(v6);
    }
  }
}


void CriFsPlugin__InitializeLibrary(const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  struct CriFsPlugin_StaticFields *static_fields; // x8
  __int64 IsLibraryInitialized; // x0
  CriFsPlugin_c *v5; // x8

  if ( (byte_4CE7A3E & 1) == 0 )
  {
    sub_1C7BAE8(&CriFsPlugin_TypeInfo);
    byte_4CE7A3E = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    inited = CriFsPlugin_TypeInfo;
  }
  static_fields = inited->static_fields;
  if ( !static_fields->initializationCount++ )
  {
    if ( !inited->_2.cctor_finished )
      inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(inited);
    IsLibraryInitialized = CriFsPlugin__IsLibraryInitialized((const MethodInfo *)inited);
    v5 = CriFsPlugin_TypeInfo;
    if ( (IsLibraryInitialized & 1) != 0 )
    {
      if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
        IsLibraryInitialized = j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
      CriFsPlugin__FinalizeLibrary((const MethodInfo *)IsLibraryInitialized);
      v5 = CriFsPlugin_TypeInfo;
      CriFsPlugin_TypeInfo->static_fields->initializationCount = 1;
    }
    if ( !v5->_2.cctor_finished )
      IsLibraryInitialized = j_il2cpp_runtime_class_init_0(v5);
    CriFsPlugin__CRIWARE3F65C816((const MethodInfo *)IsLibraryInitialized);
  }
}


bool CriFsPlugin__IsLibraryInitialized(const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0

  if ( (byte_4CE7A3F & 1) == 0 )
  {
    sub_1C7BAE8(&CriFsPlugin_TypeInfo);
    byte_4CE7A3F = 1;
  }
  inited = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  return CriFsPlugin__CRIWARE9F3B52BA((const MethodInfo *)inited);
}


void CriFsPlugin__SetConfigAdditionalParameters_ANDROID(int32_t device_read_bps, const MethodInfo *method)
{
  if ( (byte_4CE7A3B & 1) == 0 )
  {
    sub_1C7BAE8(&CriFsPlugin_TypeInfo);
    byte_4CE7A3B = 1;
  }
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
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

  if ( (byte_4CE7A39 & 1) == 0 )
  {
    sub_1C7BAE8(&CriFsPlugin_TypeInfo);
    byte_4CE7A39 = 1;
  }
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
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
  if ( (byte_4CE7A3D & 1) == 0 )
  {
    sub_1C7BAE8(&CriFsPlugin_TypeInfo);
    byte_4CE7A3D = 1;
  }
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  CriFsPlugin__criFsUnity_SetDataDecompressionThreadPriority_ANDROID(prio, method);
}


void CriFsPlugin__SetMemoryFileSystemThreadPriorityExperimentalAndroid(int32_t prio, const MethodInfo *method)
{
  if ( (byte_4CE7A3C & 1) == 0 )
  {
    sub_1C7BAE8(&CriFsPlugin_TypeInfo);
    byte_4CE7A3C = 1;
  }
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  CriFsPlugin__criFsUnity_SetMemoryFileSystemThreadPriority_ANDROID(prio, method);
}


void CriFsPlugin__SetReadDeviceEnabled(int32_t deviceId, bool enabled, const MethodInfo *method)
{
  if ( (byte_4CE7A3A & 1) == 0 )
  {
    sub_1C7BAE8(&CriFsPlugin_TypeInfo);
    byte_4CE7A3A = 1;
  }
  if ( deviceId || enabled )
  {
    if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    CriFsPlugin__criFs_SetReadDeviceEnabled(deviceId, enabled, method);
  }
}


uint32_t CriFsPlugin__criFsLoader_GetRetryCount(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)off_4CE7A70;
  if ( !off_4CE7A70 )
  {
    v4 = 0;
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "criFsLoader_GetRetryCount";
    v3[3] = 25;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1C7C198(v3);
    v1 = method;
    off_4CE7A70 = method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


void CriFsPlugin__criFsUnity_SetConfigAdditionalParameters_ANDROID(int32_t device_read_bps, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = off_4CE7A98;
  if ( !off_4CE7A98 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "criFsUnity_SetConfigAdditionalParameters_ANDROID";
    v4[3] = 48;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void *)sub_1C7C198(v4);
    off_4CE7A98 = v2;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v2)((unsigned int)device_read_bps, method);
}


void CriFsPlugin__criFsUnity_SetDataDecompressionThreadPriority_ANDROID(int32_t prio, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = off_4CE7AA8;
  if ( !off_4CE7AA8 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "criFsUnity_SetDataDecompressionThreadPriority_ANDROID";
    v4[3] = 53;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void *)sub_1C7C198(v4);
    off_4CE7AA8 = v2;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v2)((unsigned int)prio, method);
}


void CriFsPlugin__criFsUnity_SetMemoryFileSystemThreadPriority_ANDROID(int32_t prio, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = off_4CE7AA0;
  if ( !off_4CE7AA0 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "criFsUnity_SetMemoryFileSystemThreadPriority_ANDROID";
    v4[3] = 52;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void *)sub_1C7C198(v4);
    off_4CE7AA0 = v2;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v2)((unsigned int)prio, method);
}


int32_t CriFsPlugin__criFs_GetNumBinds(int32_t *cur, int32_t *max, int32_t *limit, const MethodInfo *method)
{
  void *v4; // x8
  _QWORD v9[5]; // [xsp+0h] [xbp-60h] BYREF
  int v10; // [xsp+28h] [xbp-38h]
  char v11; // [xsp+2Ch] [xbp-34h]

  v4 = off_4CE7A78;
  if ( !off_4CE7A78 )
  {
    v9[0] = "cri_ware_unity";
    v9[1] = 14;
    v9[2] = "criFs_GetNumBinds";
    v9[3] = 17;
    v10 = 24;
    v9[4] = 0x200000000LL;
    v11 = 0;
    v4 = (void *)sub_1C7C198(v9);
    off_4CE7A78 = v4;
  }
  return ((__int64 (__fastcall *)(int32_t *, int32_t *, int32_t *, const MethodInfo *))v4)(cur, max, limit, method);
}


int32_t CriFsPlugin__criFs_GetNumUsedInstallers(int32_t *cur, int32_t *max, int32_t *limit, const MethodInfo *method)
{
  void *v4; // x8
  _QWORD v9[5]; // [xsp+0h] [xbp-60h] BYREF
  int v10; // [xsp+28h] [xbp-38h]
  char v11; // [xsp+2Ch] [xbp-34h]

  v4 = off_4CE7A88;
  if ( !off_4CE7A88 )
  {
    v9[0] = "cri_ware_unity";
    v9[1] = 14;
    v9[2] = "criFs_GetNumUsedInstallers";
    v9[3] = 26;
    v10 = 24;
    v9[4] = 0x200000000LL;
    v11 = 0;
    v4 = (void *)sub_1C7C198(v9);
    off_4CE7A88 = v4;
  }
  return ((__int64 (__fastcall *)(int32_t *, int32_t *, int32_t *, const MethodInfo *))v4)(cur, max, limit, method);
}


int32_t CriFsPlugin__criFs_GetNumUsedLoaders(int32_t *cur, int32_t *max, int32_t *limit, const MethodInfo *method)
{
  void *v4; // x8
  _QWORD v9[5]; // [xsp+0h] [xbp-60h] BYREF
  int v10; // [xsp+28h] [xbp-38h]
  char v11; // [xsp+2Ch] [xbp-34h]

  v4 = off_4CE7A80;
  if ( !off_4CE7A80 )
  {
    v9[0] = "cri_ware_unity";
    v9[1] = 14;
    v9[2] = "criFs_GetNumUsedLoaders";
    v9[3] = 23;
    v10 = 24;
    v9[4] = 0x200000000LL;
    v11 = 0;
    v4 = (void *)sub_1C7C198(v9);
    off_4CE7A80 = v4;
  }
  return ((__int64 (__fastcall *)(int32_t *, int32_t *, int32_t *, const MethodInfo *))v4)(cur, max, limit, method);
}


int32_t CriFsPlugin__criFs_SetReadDeviceEnabled(int32_t device_id, bool enabled, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v3 = off_4CE7A90;
  if ( !off_4CE7A90 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFs_SetReadDeviceEnabled";
    v7[3] = 26;
    v8 = 8;
    v7[4] = 0x200000000LL;
    v9 = 0;
    v3 = (void *)sub_1C7C198(v7);
    off_4CE7A90 = v3;
  }
  return ((__int64 (__fastcall *)(_QWORD, bool, const MethodInfo *))v3)((unsigned int)device_id, enabled, method);
}


bool CriFsPlugin__get_isInitialized(const MethodInfo *method)
{
  CriFsPlugin_c *v1; // x0

  if ( (byte_4CE7A38 & 1) == 0 )
  {
    sub_1C7BAE8(&CriFsPlugin_TypeInfo);
    byte_4CE7A38 = 1;
  }
  v1 = CriFsPlugin_TypeInfo;
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    v1 = CriFsPlugin_TypeInfo;
  }
  return v1->static_fields->initializationCount > 0;
}