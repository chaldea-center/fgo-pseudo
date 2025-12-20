void CriFsWebInstaller___ctor(CriFsWebInstaller_o *this, const MethodInfo *method)
{
  System_Guid_o v3; // kr00_16
  const MethodInfo *v4; // x2
  __int64 v5; // x0
  System_Exception_o *v6; // x19
  System_String_o *v7; // x0
  __int64 v8; // x0

  if ( (byte_4D25B83 & 1) == 0 )
  {
    sub_1C94098(&CriDisposableObjectManager_TypeInfo);
    byte_4D25B83 = 1;
  }
  this->fields.handle = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = System_Guid__NewGuid(0);
  this->fields.guid = v3;
  CriFsWebInstaller__criFsWebInstaller_Create(&this->fields.handle, *(const MethodInfo **)&v3.fields._d);
  if ( System_IntPtr__op_Equality(this->fields.handle, 0, 0) )
  {
    v5 = sub_1C940AC(&System_Exception_TypeInfo);
    v6 = (System_Exception_o *)sub_1C942E4(v5);
    v7 = (System_String_o *)sub_1C940AC(&StringLiteral_18444/*"criFsWebInstaller_Create() failed."*/);
    System_Exception___ctor_66163836(v6, v7, 0);
    v8 = sub_1C940AC(&Method_CriFsWebInstaller__ctor__);
    sub_1C941C0(v6, v8);
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Register((CriDisposable_o *)this, 3, v4);
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

  if ( (byte_4D25B84 & 1) == 0 )
  {
    sub_1C94098(&System_GC_TypeInfo);
    byte_4D25B84 = 1;
  }
  CriFsWebInstaller__Dispose_31218668(this, 0, v2);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CriFsWebInstaller__Dispose_31218668(CriFsWebInstaller_o *this, bool disposing, const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x0
  const MethodInfo *v7; // x1
  CriFsWebInstaller_StatusInfo_o v8; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4D25B87 & 1) == 0 )
  {
    sub_1C94098(&CriDisposableObjectManager_TypeInfo);
    byte_4D25B87 = 1;
  }
  if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
  CriDisposableObjectManager__Unregister((CriDisposable_o *)this, (const MethodInfo *)disposing);
  if ( System_IntPtr__op_Inequality(this->fields.handle, 0, 0) )
  {
    CriFsWebInstaller__GetStatusInfo(&v8, this, v4);
    if ( v8.fields.status )
    {
      CriFsWebInstaller__Stop(this, v5);
      while ( 1 )
      {
        CriFsWebInstaller__criFsWebInstaller_ExecuteMain(v6);
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


// positive sp value has been detected, the output may be wrong!
void CriFsWebInstaller__Finalize(CriFsWebInstaller_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CriFsWebInstaller__Dispose_31218668(this, 0, v2);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


void CriFsWebInstaller__FinalizeModule(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  const MethodInfo *v2; // x0
  CriFsPlugin_c *inited; // x0

  if ( (byte_4D25B86 & 1) == 0 )
  {
    sub_1C94098(&CriDisposableObjectManager_TypeInfo);
    sub_1C94098(&CriFsPlugin_TypeInfo);
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15956/*"[CRIWARE] CriFsWebInstaller module is not initialized."*/);
    byte_4D25B86 = 1;
  }
  if ( !byte_4D25DF3 )
  {
    sub_1C94098(&CriFsWebInstaller_TypeInfo);
    byte_4D25DF3 = 1;
  }
  if ( CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField )
  {
    if ( !CriDisposableObjectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CriDisposableObjectManager_TypeInfo);
    CriDisposableObjectManager__CallOnModuleFinalization(3, v1);
    CriFsWebInstaller__criFsWebInstaller_Finalize(v2);
    inited = CriFsPlugin_TypeInfo;
    if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
      inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    CriFsPlugin__FinalizeLibrary((const MethodInfo *)inited);
    if ( !byte_4D25DF5 )
    {
      sub_1C94098(&CriFsWebInstaller_TypeInfo);
      byte_4D25DF5 = 1;
    }
    CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField = 0;
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_15956/*"[CRIWARE] CriFsWebInstaller module is not initialized."*/, 0);
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
  CriFsWebInstaller_StatusInfo_o *result; // x0
  const MethodInfo *v6; // x2
  __int128 v7; // q0
  CriFsWebInstaller_StatusInfo_o v8; // [xsp+0h] [xbp-40h] BYREF

  memset(&v8, 0, sizeof(v8));
  result = (CriFsWebInstaller_StatusInfo_o *)System_IntPtr__op_Inequality(this->fields.handle, 0, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    result = (CriFsWebInstaller_StatusInfo_o *)CriFsWebInstaller__criFsWebInstaller_GetStatusInfo(
                                                 this->fields.handle,
                                                 &v8,
                                                 v6);
  }
  else
  {
    v8.fields.httpStatusCode = -1;
    *(_QWORD *)&v8.fields.status = 0x800000000LL;
    *(_OWORD *)&v8.fields.contentsSize = xmmword_CFEEF0;
  }
  v7 = *(_OWORD *)&v8.fields.contentsSize;
  *(_OWORD *)&retstr->fields.status = *(_OWORD *)&v8.fields.status;
  *(_OWORD *)&retstr->fields.contentsSize = v7;
  return result;
}


void CriFsWebInstaller__InitializeModule(CriFsWebInstaller_ModuleConfig_o *config, const MethodInfo *method)
{
  CriFsPlugin_c *inited; // x0
  const MethodInfo *v4; // x1
  bool crcEnabled; // w19
  struct CriFsWebInstaller_StaticFields *static_fields; // x8

  if ( (byte_4D25B85 & 1) == 0 )
  {
    sub_1C94098(&CriFsPlugin_TypeInfo);
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&StringLiteral_15955/*"[CRIWARE] CriFsWebInstaller module is already initialized."*/);
    byte_4D25B85 = 1;
  }
  if ( !byte_4D25DF3 )
  {
    sub_1C94098(&CriFsWebInstaller_TypeInfo);
    byte_4D25DF3 = 1;
  }
  if ( CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_15955/*"[CRIWARE] CriFsWebInstaller module is already initialized."*/, 0);
  }
  else
  {
    inited = CriFsPlugin_TypeInfo;
    if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
      inited = (CriFsPlugin_c *)j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
    CriFsPlugin__InitializeLibrary((const MethodInfo *)inited);
    CriFsWebInstaller__criFsWebInstaller_Initialize(config, v4);
    crcEnabled = config->fields.crcEnabled;
    if ( !byte_4D25DF4 )
    {
      sub_1C94098(&CriFsWebInstaller_TypeInfo);
      byte_4D25DF4 = 1;
    }
    static_fields = CriFsWebInstaller_TypeInfo->static_fields;
    static_fields->_isCrcEnabled_k__BackingField = crcEnabled;
    if ( !byte_4D25DF5 )
    {
      sub_1C94098(&CriFsWebInstaller_TypeInfo);
      byte_4D25DF5 = 1;
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
  const MethodInfo *v3; // x1

  if ( System_IntPtr__op_Inequality(this->fields.handle, 0, 0) )
    CriFsWebInstaller__criFsWebInstaller_Stop(this->fields.handle, v3);
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
  if ( !off_4D25BB0 )
  {
    *(_QWORD *)v22 = "cri_ware_unity";
    v23 = 14;
    *(_QWORD *)v24 = "criFsWebInstaller_Copy";
    v25 = &dword_14 + 2;
    v27 = 24;
    v26 = 0x200000000LL;
    v28 = 0;
    off_4D25BB0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1C94748(v22);
  }
  v11 = sub_1C94728(v9, (int)url, (int)dstPath, (int)method, v4, v5, v6, v7, v22[0], v23, v24[0], v25);
  v19 = sub_1C94728(v8, v12, v13, v14, v15, v16, v17, v18, v22[0], v23, v24[0], v25);
  v20 = off_4D25BB0(installer, v11, v19);
  sub_1C94740(v11);
  sub_1C94740(v19);
  return v20;
}


int32_t CriFsWebInstaller__criFsWebInstaller_Create(intptr_t *installer, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4D25BA0;
  if ( !off_4D25BA0 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsWebInstaller_Create";
    v5[3] = 24;
    v6 = 8;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C94748(v5);
    off_4D25BA0 = v2;
  }
  return ((__int64 (__fastcall *)(intptr_t *, const MethodInfo *))v2)(installer, method);
}


int32_t CriFsWebInstaller__criFsWebInstaller_Destroy(intptr_t installer, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4D25BA8;
  if ( !off_4D25BA8 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsWebInstaller_Destroy";
    v5[3] = 25;
    v6 = 8;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C94748(v5);
    off_4D25BA8 = v2;
  }
  return ((__int64 (__fastcall *)(intptr_t, const MethodInfo *))v2)(installer, method);
}


int32_t CriFsWebInstaller__criFsWebInstaller_ExecuteMain(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)off_4D25B98;
  if ( !off_4D25B98 )
  {
    v4 = 0;
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "criFsWebInstaller_ExecuteMain";
    v3[3] = 29;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1C94748(v3);
    v1 = method;
    off_4D25B98 = method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


int32_t CriFsWebInstaller__criFsWebInstaller_Finalize(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)off_4D25B90;
  if ( !off_4D25B90 )
  {
    v4 = 0;
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "criFsWebInstaller_Finalize";
    v3[3] = 26;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1C94748(v3);
    v1 = method;
    off_4D25B90 = method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


int32_t CriFsWebInstaller__criFsWebInstaller_GetCRC32(intptr_t installer, uint32_t *crc32, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v3 = off_4D25BC8;
  if ( !off_4D25BC8 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsWebInstaller_GetCRC32";
    v7[3] = 26;
    v8 = 16;
    v7[4] = 0x200000000LL;
    v9 = 0;
    v3 = (void *)sub_1C94748(v7);
    off_4D25BC8 = v3;
  }
  return ((__int64 (__fastcall *)(intptr_t, uint32_t *, const MethodInfo *))v3)(installer, crc32, method);
}


int32_t CriFsWebInstaller__criFsWebInstaller_GetStatusInfo(
        intptr_t installer,
        CriFsWebInstaller_StatusInfo_o *status,
        const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  int v8; // [xsp+28h] [xbp-28h]
  char v9; // [xsp+2Ch] [xbp-24h]

  v3 = off_4D25BC0;
  if ( !off_4D25BC0 )
  {
    v7[0] = "cri_ware_unity";
    v7[1] = 14;
    v7[2] = "criFsWebInstaller_GetStatusInfo";
    v7[3] = 31;
    v8 = 16;
    v7[4] = 0x200000000LL;
    v9 = 0;
    v3 = (void *)sub_1C94748(v7);
    off_4D25BC0 = v3;
  }
  return ((__int64 (__fastcall *)(intptr_t, CriFsWebInstaller_StatusInfo_o *, const MethodInfo *))v3)(
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
  int v9; // w1
  int v10; // w2
  int v11; // w3
  int v12; // w4
  int v13; // w5
  int v14; // w6
  int v15; // w7
  _BOOL4 allowInsecureSSL; // w8
  char v18[16]; // [xsp+0h] [xbp-50h] BYREF
  int v19[4]; // [xsp+10h] [xbp-40h]
  __int128 v20; // [xsp+20h] [xbp-30h]

  if ( !off_4D25B88 )
  {
    *(_QWORD *)v18 = "cri_ware_unity";
    *(_QWORD *)&v18[8] = 14;
    *(_QWORD *)v19 = "criFsWebInstaller_Initialize";
    *(_QWORD *)&v19[2] = 28;
    DWORD2(v20) = 8;
    *(_QWORD *)&v20 = 0x200000000LL;
    BYTE12(v20) = 0;
    off_4D25B88 = (__int64 (__fastcall *)(_QWORD))sub_1C94748(v18);
  }
  v20 = 0u;
  *(_QWORD *)&v18[8] = sub_1C94728(
                         (int)config->fields.proxyHost,
                         (int)method,
                         v2,
                         v3,
                         v4,
                         v5,
                         v6,
                         v7,
                         config->fields.numInstallers,
                         0,
                         0,
                         0);
  LOWORD(v19[0]) = config->fields.proxyPort;
  *(_QWORD *)&v19[2] = sub_1C94728(
                         (int)config->fields.userAgent,
                         v9,
                         v10,
                         v11,
                         v12,
                         v13,
                         v14,
                         v15,
                         *(int *)v18,
                         v18[8],
                         v19[0],
                         *(void **)&v19[2]);
  allowInsecureSSL = config->fields.allowInsecureSSL;
  LODWORD(v20) = config->fields.inactiveTimeoutSec;
  DWORD1(v20) = allowInsecureSSL;
  DWORD2(v20) = config->fields.crcEnabled;
  BYTE12(v20) = config->fields.platformConfig.fields.reserved;
  return off_4D25B88(v18);
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
  if ( !off_4D25BD0 )
  {
    *(_QWORD *)v21 = "cri_ware_unity";
    v22 = 14;
    *(_QWORD *)v23 = "criFsWebInstaller_SetRequestHeader";
    v24 = &qword_20 + 2;
    v26 = 16;
    v25 = 0x200000000LL;
    v27 = 0;
    off_4D25BD0 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_1C94748(v21);
  }
  v10 = sub_1C94728(v9, (int)value, (int)method, v3, v4, v5, v6, v7, v21[0], v22, v23[0], v24);
  v18 = sub_1C94728(v8, v11, v12, v13, v14, v15, v16, v17, v21[0], v22, v23[0], v24);
  v19 = off_4D25BD0(v10, v18);
  sub_1C94740(v10);
  sub_1C94740(v18);
  return v19;
}


int32_t CriFsWebInstaller__criFsWebInstaller_Stop(intptr_t installer, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v5[5]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+28h] [xbp-28h]
  char v7; // [xsp+2Ch] [xbp-24h]

  v2 = off_4D25BB8;
  if ( !off_4D25BB8 )
  {
    v5[0] = "cri_ware_unity";
    v5[1] = 14;
    v5[2] = "criFsWebInstaller_Stop";
    v5[3] = 22;
    v6 = 8;
    v5[4] = 0x200000000LL;
    v7 = 0;
    v2 = (void *)sub_1C94748(v5);
    off_4D25BB8 = v2;
  }
  return ((__int64 (__fastcall *)(intptr_t, const MethodInfo *))v2)(installer, method);
}


CriFsWebInstaller_ModuleConfig_o *CriFsWebInstaller__get_defaultModuleConfig(
        CriFsWebInstaller_ModuleConfig_o *__return_ptr retstr,
        const MethodInfo *method)
{
  CriFsWebInstaller_ModuleConfig_o *result; // x0
  __int128 v4; // q0
  __int128 v5; // q1
  __int128 v6; // [xsp+0h] [xbp-50h] BYREF
  __int128 v7; // [xsp+10h] [xbp-40h] BYREF
  __int64 v8; // [xsp+20h] [xbp-30h]

  v7 = 0u;
  v6 = 2u;
  v8 = 0;
  sub_1C9403C((char *)&v6 + 8, 0);
  LOWORD(v7) = 0;
  *((_QWORD *)&v7 + 1) = 0;
  result = (CriFsWebInstaller_ModuleConfig_o *)sub_1C9403C((char *)&v7 + 8, 0);
  WORD2(v8) = 0;
  BYTE6(v8) = 0;
  LODWORD(v8) = 300;
  v5 = v6;
  v4 = v7;
  *(_QWORD *)&retstr->fields.inactiveTimeoutSec = v8;
  *(_OWORD *)&retstr->fields.numInstallers = v5;
  *(_OWORD *)&retstr->fields.proxyPort = v4;
  return result;
}


bool CriFsWebInstaller__get_isCrcEnabled(const MethodInfo *method)
{
  if ( (byte_4D25B81 & 1) == 0 )
  {
    sub_1C94098(&CriFsWebInstaller_TypeInfo);
    byte_4D25B81 = 1;
  }
  return CriFsWebInstaller_TypeInfo->static_fields->_isCrcEnabled_k__BackingField;
}


bool CriFsWebInstaller__get_isInitialized(const MethodInfo *method)
{
  if ( (byte_4D25B7F & 1) == 0 )
  {
    sub_1C94098(&CriFsWebInstaller_TypeInfo);
    byte_4D25B7F = 1;
  }
  return CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField;
}


void CriFsWebInstaller__set_isCrcEnabled(bool value, const MethodInfo *method)
{
  if ( (byte_4D25B82 & 1) == 0 )
  {
    sub_1C94098(&CriFsWebInstaller_TypeInfo);
    byte_4D25B82 = 1;
  }
  CriFsWebInstaller_TypeInfo->static_fields->_isCrcEnabled_k__BackingField = value;
}


void CriFsWebInstaller__set_isInitialized(bool value, const MethodInfo *method)
{
  if ( (byte_4D25B80 & 1) == 0 )
  {
    sub_1C94098(&CriFsWebInstaller_TypeInfo);
    byte_4D25B80 = 1;
  }
  CriFsWebInstaller_TypeInfo->static_fields->_isInitialized_k__BackingField = value;
}


CriFsWebInstaller_ModulePlatformConfig_o CriFsWebInstaller_ModulePlatformConfig__get_defaultConfig(
        const MethodInfo *method)
{
  return (CriFsWebInstaller_ModulePlatformConfig_o)0;
}