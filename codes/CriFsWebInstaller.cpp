void CriFsWebInstaller___ctor(CriFsWebInstaller_o *this, const MethodInfo *method)
{
  System_Guid_o v3; // kr00_16
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  System_Exception_o *v7; // x19
  System_String_o *v8; // x0
  __int64 v9; // x0

  if ( (byte_596974B & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    byte_596974B = 1;
  }
  this->fields.handle = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = System_Guid__NewGuid(0);
  this->fields.guid = v3;
  CriFsWebInstaller__criFsWebInstaller_Create(&this->fields.handle, *(const MethodInfo **)&v3.fields._d);
  if ( !this->fields.handle )
  {
    v6 = sub_2213A74(&System_Exception_TypeInfo);
    v7 = (System_Exception_o *)sub_2213CCC(v6);
    v8 = (System_String_o *)sub_2213A74(&StringLiteral_19163/*"criFsWebInstaller_Create() failed."*/);
    System_Exception___ctor_77375268(v7, v8, 0);
    v9 = sub_2213A74(&Method_CriFsWebInstaller__ctor__);
    sub_2213BA0(v7, v9);
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v4, v5);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 3, v5);
}


void CriFsWebInstaller__Copy(
        CriFsWebInstaller_o *this,
        System_String_o *url,
        System_String_o *dstPath,
        const MethodInfo *method)
{
  CriFsWebInstaller__criFsWebInstaller_Copy(this->fields.handle, url, dstPath, method);
}


void CriFsWebInstaller__Dispose(CriFsWebInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_596974C & 1) == 0 )
  {
    sub_2213A60(&System_GC_TypeInfo);
    byte_596974C = 1;
  }
  CriFsWebInstaller__Dispose_37014632(this, 0, v2);
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v4, v5);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CriFsWebInstaller__Dispose_37014632(CriFsWebInstaller_o *this, bool disposing, const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  intptr_t handle; // x0
  const MethodInfo *v7; // x1
  CriFsWebInstaller_StatusInfo_o v8; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_596974F & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    byte_596974F = 1;
  }
  if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, disposing, method);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  if ( this->fields.handle )
  {
    CriFsWebInstaller__GetStatusInfo(&v8, this, v4);
    if ( v8.fields.status )
    {
      handle = this->fields.handle;
      if ( handle )
        handle = CriFsWebInstaller__criFsWebInstaller_Stop(handle, v5);
      while ( 1 )
      {
        CriFsWebInstaller__criFsWebInstaller_ExecuteMain((const MethodInfo *)handle);
        CriFsWebInstaller__GetStatusInfo(&v8, this, v7);
        if ( !v8.fields.status )
          break;
        System_Threading_Thread__Sleep(1, 0);
      }
    }
    CriFsWebInstaller__criFsWebInstaller_Destroy(this->fields.handle, v5);
    this->fields.handle = 0;
  }
}


void CriFsWebInstaller__Finalize(CriFsWebInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CriFsWebInstaller__Dispose_37014632(this, 0, v2);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


void CriFsWebInstaller__FinalizeModule(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  const MethodInfo *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  CriFsPlugin_c *inited; // x0

  if ( (byte_596974E & 1) == 0 )
  {
    sub_2213A60(&CriDisposableObjectManager_TypeInfo);
    sub_2213A60(&CriFsPlugin_TypeInfo);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&StringLiteral_16523/*"[CRIWARE] CriFsWebInstaller module is not initialized."*/);
    byte_596974E = 1;
  }
  if ( !byte_59699BA )
  {
    sub_2213A60(&CriFsWebInstaller_TypeInfo);
    byte_59699BA = 1;
  }
  if ( CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField )
  {
    if ( !*(&CriDisposableObjectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo, v1, v2);
    CriDisposableObjectManager__CallOnModuleFinalization(3, v1);
    CriFsWebInstaller__criFsWebInstaller_Finalize(v3);
    inited = CriFsPlugin_TypeInfo;
    if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
      inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v4, v5);
    CriFsPlugin__FinalizeLibrary((const MethodInfo *)inited);
    if ( !byte_59699BC )
    {
      sub_2213A60(&CriFsWebInstaller_TypeInfo);
      byte_59699BC = 1;
    }
    CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField = 0;
  }
  else
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v1, v2);
    UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_16523/*"[CRIWARE] CriFsWebInstaller module is not initialized."*/, 0);
  }
}


bool CriFsWebInstaller__GetCRC32(CriFsWebInstaller_o *this, uint32_t *ret_val, const MethodInfo *method)
{
  return CriFsWebInstaller__criFsWebInstaller_GetCRC32(this->fields.handle, ret_val, method) == 0;
}


CriFsWebInstaller_StatusInfo_o *CriFsWebInstaller__GetStatusInfo(
        CriFsWebInstaller_StatusInfo_o *__return_ptr retstr,
        CriFsWebInstaller_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CriFsWebInstaller_StatusInfo_o *result; // x0
  __int128 v6; // q1
  CriFsWebInstaller_StatusInfo_o v7; // [xsp+0h] [xbp-30h] BYREF

  result = (CriFsWebInstaller_StatusInfo_o *)this->fields.handle;
  memset(&v7, 0, sizeof(v7));
  if ( result )
  {
    result = (CriFsWebInstaller_StatusInfo_o *)CriFsWebInstaller__criFsWebInstaller_GetStatusInfo(
                                                 (intptr_t)result,
                                                 &v7,
                                                 v3);
  }
  else
  {
    v7.fields.httpStatusCode = -1;
    *(_QWORD *)&v7.fields.status = 0x800000000LL;
    *(_OWORD *)&v7.fields.contentsSize = xmmword_E9DA40;
  }
  v6 = *(_OWORD *)&v7.fields.contentsSize;
  *(_OWORD *)&retstr->fields.status = *(_OWORD *)&v7.fields.status;
  *(_OWORD *)&retstr->fields.contentsSize = v6;
  return result;
}


void CriFsWebInstaller__InitializeModule(CriFsWebInstaller_ModuleConfig_o *config, const MethodInfo *method)
{
  __int64 v2; // x2
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v5; // x1
  bool crcEnabled; // w19
  int v7; // w9
  struct CriFsWebInstaller_StaticFields *static_fields; // x8

  if ( (byte_596974D & 1) == 0 )
  {
    sub_2213A60(&CriFsPlugin_TypeInfo);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&StringLiteral_16522/*"[CRIWARE] CriFsWebInstaller module is already initialized."*/);
    byte_596974D = 1;
  }
  if ( !byte_59699BA )
  {
    sub_2213A60(&CriFsWebInstaller_TypeInfo);
    byte_59699BA = 1;
  }
  if ( CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method, v2);
    UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_16522/*"[CRIWARE] CriFsWebInstaller module is already initialized."*/, 0);
  }
  else
  {
    inited = CriFsPlugin_TypeInfo;
    if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
      inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, method, v2);
    CriFsPlugin__InitializeLibrary((const MethodInfo *)inited);
    CriFsWebInstaller__criFsWebInstaller_Initialize(config, v5);
    crcEnabled = config->fields.crcEnabled;
    if ( !byte_59699BB )
    {
      sub_2213A60(&CriFsWebInstaller_TypeInfo);
      byte_59699BB = 1;
    }
    v7 = (unsigned __int8)byte_59699BC;
    static_fields = CriFsWebInstaller_TypeInfo->static_fields;
    static_fields->_isCrcEnabled_k__BackingField = crcEnabled;
    if ( !v7 )
    {
      sub_2213A60(&CriFsWebInstaller_TypeInfo);
      byte_59699BC = 1;
      static_fields = CriFsWebInstaller_TypeInfo->static_fields;
    }
    static_fields->_isInitialized_k__BackingField = 1;
  }
}


bool CriFsWebInstaller__SetRequestHeader(System_String_o *field, System_String_o *value, const MethodInfo *method)
{
  return CriFsWebInstaller__criFsWebInstaller_SetRequestHeader(field, value, method) == 0;
}


void CriFsWebInstaller__Stop(CriFsWebInstaller_o *this, const MethodInfo *method)
{
  intptr_t handle; // x0

  handle = this->fields.handle;
  if ( handle )
    CriFsWebInstaller__criFsWebInstaller_Stop(handle, method);
}


int32_t CriFsWebInstaller__criFsWebInstaller_Copy(
        intptr_t installer,
        System_String_o *url,
        System_String_o *dstPath,
        const MethodInfo *method)
{
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w20
  int v9; // w21
  __int64 v11; // x21
  int v12; // w1
  int v13; // w2
  int v14; // w3
  int v15; // w4
  int v16; // w5
  int v17; // w6
  int v18; // w7
  __int64 v19; // x20
  int32_t v20; // w19
  int v22[2]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v23; // [xsp+8h] [xbp-58h]
  int v24[2]; // [xsp+10h] [xbp-50h]
  void *v25; // [xsp+18h] [xbp-48h]
  __int64 v26; // [xsp+20h] [xbp-40h]
  int v27; // [xsp+28h] [xbp-38h]
  char v28; // [xsp+2Ch] [xbp-34h]

  v8 = (int)dstPath;
  v9 = (int)url;
  if ( !off_5969778 )
  {
    *(_QWORD *)v22 = "cri_ware_unity";
    v23 = 14;
    *(_QWORD *)v24 = "criFsWebInstaller_Copy";
    v25 = &dword_14 + 2;
    v26 = 0x200000000LL;
    v27 = 24;
    v28 = 0;
    off_5969778 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_2214114(v22);
  }
  v11 = sub_22140F0(v9, (int)url, (int)dstPath, (int)method, v4, v5, v6, v7, v22[0], v23, v24[0], v25);
  v19 = sub_22140F0(v8, v12, v13, v14, v15, v16, v17, v18, v22[0], v23, v24[0], v25);
  v20 = off_5969778(installer, v11, v19);
  sub_2214108(v11);
  sub_2214108(v19);
  return v20;
}


int32_t CriFsWebInstaller__criFsWebInstaller_Create(intptr_t *installer, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969768;
  if ( !off_5969768 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsWebInstaller_Create";
    v5[3] = 24;
    v5[4] = 0x200000000LL;
    v6 = 8;
    v7 = 0;
    v3 = (void *)sub_2214114(v5);
    off_5969768 = v3;
  }
  return ((__int64 (__fastcall *)(intptr_t *, const MethodInfo *))v3)(installer, method);
}


int32_t CriFsWebInstaller__criFsWebInstaller_Destroy(intptr_t installer, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969770;
  if ( !off_5969770 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsWebInstaller_Destroy";
    v5[3] = 25;
    v5[4] = 0x200000000LL;
    v6 = 8;
    v7 = 0;
    v3 = (void *)sub_2214114(v5);
    off_5969770 = v3;
  }
  return ((__int64 (__fastcall *)(intptr_t, const MethodInfo *))v3)(installer, method);
}


int32_t CriFsWebInstaller__criFsWebInstaller_ExecuteMain(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = off_5969760;
  if ( !off_5969760 )
  {
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "criFsWebInstaller_ExecuteMain";
    v3[3] = 29;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    v1 = (void *)sub_2214114(v3);
    off_5969760 = v1;
  }
  return ((__int64 (*)(void))v1)();
}


int32_t CriFsWebInstaller__criFsWebInstaller_Finalize(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = off_5969758;
  if ( !off_5969758 )
  {
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "criFsWebInstaller_Finalize";
    v3[3] = 26;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    v1 = (void *)sub_2214114(v3);
    off_5969758 = v1;
  }
  return ((__int64 (*)(void))v1)();
}


int32_t CriFsWebInstaller__criFsWebInstaller_GetCRC32(intptr_t installer, uint32_t *crc32, const MethodInfo *method)
{
  void *v5; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v5 = off_5969790;
  if ( !off_5969790 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsWebInstaller_GetCRC32";
    v7[3] = 26;
    v7[4] = 0x200000000LL;
    v8 = 16;
    v9 = 0;
    v5 = (void *)sub_2214114(v7);
    off_5969790 = v5;
  }
  return ((__int64 (__fastcall *)(intptr_t, uint32_t *, const MethodInfo *))v5)(installer, crc32, method);
}


int32_t CriFsWebInstaller__criFsWebInstaller_GetStatusInfo(
        intptr_t installer,
        CriFsWebInstaller_StatusInfo_o *status,
        const MethodInfo *method)
{
  void *v5; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v5 = off_5969788;
  if ( !off_5969788 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsWebInstaller_GetStatusInfo";
    v7[3] = 31;
    v7[4] = 0x200000000LL;
    v8 = 16;
    v9 = 0;
    v5 = (void *)sub_2214114(v7);
    off_5969788 = v5;
  }
  return ((__int64 (__fastcall *)(intptr_t, CriFsWebInstaller_StatusInfo_o *, const MethodInfo *))v5)(
           installer,
           status,
           method);
}


int32_t CriFsWebInstaller__criFsWebInstaller_Initialize(
        CriFsWebInstaller_ModuleConfig_o *config,
        const MethodInfo *method)
{
  int v2; // w2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  uint32_t numInstallers; // w8
  struct System_String_o *proxyHost; // x0
  __int64 v11; // x0
  uint16_t proxyPort; // w8
  struct System_String_o *userAgent; // x0
  int v14; // w1
  int v15; // w2
  int v16; // w3
  int v17; // w4
  int v18; // w5
  int v19; // w6
  int v20; // w7
  __int64 v21; // x0
  uint32_t inactiveTimeoutSec; // w8
  _BOOL4 allowInsecureSSL; // w9
  _BOOL4 crcEnabled; // w10
  char v26[16]; // [xsp+0h] [xbp-50h] BYREF
  int v27[4]; // [xsp+10h] [xbp-40h]
  __int128 v28; // [xsp+20h] [xbp-30h]

  if ( !off_5969750 )
  {
    *(_QWORD *)v26 = "cri_ware_unity";
    *(_QWORD *)&v26[8] = 14;
    *(_QWORD *)v27 = "criFsWebInstaller_Initialize";
    *(_QWORD *)&v27[2] = 28;
    *(_QWORD *)&v28 = 0x200000000LL;
    DWORD2(v28) = 8;
    BYTE12(v28) = 0;
    off_5969750 = (__int64 (__fastcall *)(_QWORD))sub_2214114(v26);
  }
  numInstallers = config->fields.numInstallers;
  proxyHost = config->fields.proxyHost;
  v28 = 0u;
  v11 = sub_22140F0((int)proxyHost, (int)method, v2, v3, v4, v5, v6, v7, numInstallers, 0, 0, 0);
  proxyPort = config->fields.proxyPort;
  *(_QWORD *)&v26[8] = v11;
  userAgent = config->fields.userAgent;
  LOWORD(v27[0]) = proxyPort;
  v21 = sub_22140F0((int)userAgent, v14, v15, v16, v17, v18, v19, v20, *(int *)v26, v26[8], v27[0], *(void **)&v27[2]);
  inactiveTimeoutSec = config->fields.inactiveTimeoutSec;
  allowInsecureSSL = config->fields.allowInsecureSSL;
  crcEnabled = config->fields.crcEnabled;
  *(_QWORD *)&v27[2] = v21;
  *(_QWORD *)&v28 = __PAIR64__(allowInsecureSSL, inactiveTimeoutSec);
  LOBYTE(inactiveTimeoutSec) = config->fields.platformConfig.fields.reserved;
  DWORD2(v28) = crcEnabled;
  BYTE12(v28) = inactiveTimeoutSec;
  return off_5969750(v26);
}


int32_t CriFsWebInstaller__criFsWebInstaller_SetRequestHeader(
        System_String_o *field,
        System_String_o *value,
        const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w19
  int v9; // w20
  __int64 v10; // x20
  int v11; // w1
  int v12; // w2
  int v13; // w3
  int v14; // w4
  int v15; // w5
  int v16; // w6
  int v17; // w7
  __int64 v18; // x19
  int32_t v19; // w21
  int v21[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v22; // [xsp+8h] [xbp-48h]
  int v23[2]; // [xsp+10h] [xbp-40h]
  void *v24; // [xsp+18h] [xbp-38h]
  __int64 v25; // [xsp+20h] [xbp-30h]
  int v26; // [xsp+28h] [xbp-28h]
  char v27; // [xsp+2Ch] [xbp-24h]

  v8 = (int)value;
  v9 = (int)field;
  if ( !off_5969798 )
  {
    *(_QWORD *)v21 = "cri_ware_unity";
    v22 = 14;
    *(_QWORD *)v23 = "criFsWebInstaller_SetRequestHeader";
    v24 = &qword_20 + 2;
    v25 = 0x200000000LL;
    v26 = 16;
    v27 = 0;
    off_5969798 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_2214114(v21);
  }
  v10 = sub_22140F0(v9, (int)value, (int)method, v3, v4, v5, v6, v7, v21[0], v22, v23[0], v24);
  v18 = sub_22140F0(v8, v11, v12, v13, v14, v15, v16, v17, v21[0], v22, v23[0], v24);
  v19 = off_5969798(v10, v18);
  sub_2214108(v10);
  sub_2214108(v18);
  return v19;
}


int32_t CriFsWebInstaller__criFsWebInstaller_Stop(intptr_t installer, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v3 = off_5969780;
  if ( !off_5969780 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsWebInstaller_Stop";
    v5[3] = 22;
    v5[4] = 0x200000000LL;
    v6 = 8;
    v7 = 0;
    v3 = (void *)sub_2214114(v5);
    off_5969780 = v3;
  }
  return ((__int64 (__fastcall *)(intptr_t, const MethodInfo *))v3)(installer, method);
}


CriFsWebInstaller_ModuleConfig_o *CriFsWebInstaller__get_defaultModuleConfig(
        CriFsWebInstaller_ModuleConfig_o *__return_ptr retstr,
        const MethodInfo *method)
{
  CriFsWebInstaller_ModuleConfig_o *result; // x0
  __int128 v4; // q1
  __int64 v5; // x8
  __int128 v6; // [xsp+0h] [xbp-50h] BYREF
  __int128 v7; // [xsp+10h] [xbp-40h] BYREF
  __int64 v8; // [xsp+20h] [xbp-30h]

  v8 = 0;
  v7 = 0u;
  v6 = 2u;
  sub_2213A04((char *)&v6 + 8, 0);
  LOWORD(v7) = 0;
  *((_QWORD *)&v7 + 1) = 0;
  result = (CriFsWebInstaller_ModuleConfig_o *)sub_2213A04((char *)&v7 + 8, 0);
  WORD2(v8) = 0;
  LODWORD(v8) = 300;
  v4 = v7;
  BYTE6(v8) = 0;
  v5 = v8;
  *(_OWORD *)&retstr->fields.numInstallers = v6;
  *(_OWORD *)&retstr->fields.proxyPort = v4;
  *(_QWORD *)&retstr->fields.inactiveTimeoutSec = v5;
  return result;
}


bool CriFsWebInstaller__get_isCrcEnabled(const MethodInfo *method)
{
  if ( (byte_5969749 & 1) == 0 )
  {
    sub_2213A60(&CriFsWebInstaller_TypeInfo);
    byte_5969749 = 1;
  }
  return CriFsWebInstaller_TypeInfo->static_fields->_isCrcEnabled_k__BackingField;
}


bool CriFsWebInstaller__get_isInitialized(const MethodInfo *method)
{
  if ( (byte_5969747 & 1) == 0 )
  {
    sub_2213A60(&CriFsWebInstaller_TypeInfo);
    byte_5969747 = 1;
  }
  return CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField;
}


void CriFsWebInstaller__set_isCrcEnabled(bool value, const MethodInfo *method)
{
  if ( (byte_596974A & 1) == 0 )
  {
    sub_2213A60(&CriFsWebInstaller_TypeInfo);
    byte_596974A = 1;
  }
  CriFsWebInstaller_TypeInfo->static_fields->_isCrcEnabled_k__BackingField = value;
}


void CriFsWebInstaller__set_isInitialized(bool value, const MethodInfo *method)
{
  if ( (byte_5969748 & 1) == 0 )
  {
    sub_2213A60(&CriFsWebInstaller_TypeInfo);
    byte_5969748 = 1;
  }
  CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField = value;
}


CriFsWebInstaller_ModulePlatformConfig_o CriFsWebInstaller_ModulePlatformConfig__get_defaultConfig(
        const MethodInfo *method)
{
  return (CriFsWebInstaller_ModulePlatformConfig_o)0;
}