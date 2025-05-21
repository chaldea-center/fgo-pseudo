void __fastcall CriWare_Common___ctor(CriWare_Common_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CriWare_Common__CRIWARE0F286CE1(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  __int64 v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)qword_4B3E998;
  if ( !qword_4B3E998 )
  {
    v4 = 0;
    v3[0] = (__int64)"cri_ware_unity";
    v3[1] = 14LL;
    v3[2] = (__int64)"CRIWARE0F286CE1";
    v3[3] = 15LL;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1BDBE54(v3);
    v1 = method;
    qword_4B3E998 = (__int64)method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


bool __fastcall CriWare_Common__CheckBinaryVersionCompatibility(const MethodInfo *method)
{
  return CriWare_Common__CRIWARE0F286CE1(method) == 16843777;
}


// local variable allocation has failed, the output may be wrong!
CriWare_Common_CpuUsage_o __fastcall CriWare_Common__GetAtomCpuUsage(const MethodInfo *method)
{
  __int64 v1; // x1
  float v2; // s0
  float v3; // s1
  float v4; // s2
  CriWare_Common_CpuUsage_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3E996 & 1) == 0 )
  {
    sub_1BDB878(&CriAtomPlugin_TypeInfo, v1);
    byte_4B3E996 = 1;
  }
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  *(CriWare_Common_CpuUsage_o *)&v2 = CriAtomPlugin__GetCpuUsage(0LL);
  result.fields.peak = v4;
  result.fields.average = v3;
  result.fields.last = v2;
  return result;
}


uint32_t __fastcall CriWare_Common__GetAtomMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3E994 & 1) == 0 )
  {
    sub_1BDB878(&CriAtomPlugin_TypeInfo, v1);
    byte_4B3E994 = 1;
  }
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  return CriAtomPlugin__CRIWAREEF0A73BD(0LL);
}


// attributes: thunk
int32_t __fastcall CriWare_Common__GetBinaryVersionNumber(const MethodInfo *method)
{
  return CriWare_Common__CRIWARE0F286CE1(method);
}


uint32_t __fastcall CriWare_Common__GetFsMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3E993 & 1) == 0 )
  {
    sub_1BDB878(&CriFsPlugin_TypeInfo, v1);
    byte_4B3E993 = 1;
  }
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  return CriFsPlugin__CRIWARE05FCC2E5(0LL);
}


uint32_t __fastcall CriWare_Common__GetManaMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3E995 & 1) == 0 )
  {
    sub_1BDB878(&CriManaPlugin_TypeInfo, v1);
    byte_4B3E995 = 1;
  }
  if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
  return CriManaPlugin__CRIWARE75B44401(0LL);
}


int32_t __fastcall CriWare_Common__GetRequiredBinaryVersionNumber(const MethodInfo *method)
{
  return 16843777;
}


int32_t __fastcall CriWare_Common__GetScriptVersionNumber(const MethodInfo *method)
{
  return 16844033;
}


System_String_o *__fastcall CriWare_Common__GetScriptVersionString(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3E992 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1197/*"1.01.05 (2.38.28h4-VolumeForCueInfo)"*/, v1);
    byte_4B3E992 = 1;
  }
  return (System_String_o *)StringLiteral_1197/*"1.01.05 (2.38.28h4-VolumeForCueInfo)"*/;
}


bool __fastcall CriWare_Common__IsStreamingAssetsPath(System_String_o *path, const MethodInfo *method)
{
  _BOOL8 IsPathRooted_63514272; // x0
  __int64 v4; // x1
  _BOOL4 v5; // w0

  if ( (byte_4B3E990 & 1) == 0 )
  {
    sub_1BDB878(&System_IO_Path_TypeInfo, method);
    byte_4B3E990 = 1;
  }
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  IsPathRooted_63514272 = System_IO_Path__IsPathRooted_63514272(path, 0LL);
  if ( IsPathRooted_63514272 )
  {
    LOBYTE(v5) = 0;
  }
  else
  {
    if ( !path )
      sub_1BDBAD4(IsPathRooted_63514272, v4);
    return (unsigned int)System_String__IndexOf(path, 0x3Au, 0LL) >> 31;
  }
  return v5;
}


void __fastcall CriWare_Common__criWareUnity_SetRenderingEventOffsetForMana(int32_t offset, const MethodInfo *method)
{
  void (__fastcall *v2)(_QWORD, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))qword_4B3E9A0;
  if ( !qword_4B3E9A0 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"criWareUnity_SetRenderingEventOffsetForMana";
    v4[3] = 43LL;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))sub_1BDBE54(v4);
    qword_4B3E9A0 = (__int64)v2;
  }
  v2((unsigned int)offset, method);
}


System_String_o *__fastcall CriWare_Common__get_installTargetPath(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t platform; // w19

  if ( (byte_4B3E98F & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Application_TypeInfo, v1);
    byte_4B3E98F = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  platform = UnityEngine_Application__get_platform(0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( platform == 8 )
    return UnityEngine_Application__get_temporaryCachePath(0LL);
  else
    return UnityEngine_Application__get_persistentDataPath(0LL);
}


UnityEngine_GameObject_o *__fastcall CriWare_Common__get_managerObject(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *managerObject; // x19
  UnityEngine_Object_o *v7; // x19
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4B3E991 & 1) == 0 )
  {
    sub_1BDB878(&CriWare_Common_TypeInfo, v1);
    sub_1BDB878(&UnityEngine_GameObject_TypeInfo, v2);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_3956/*"CRIWARE"*/, v4);
    sub_1BDB878(&StringLiteral_1092/*"/CRIWARE"*/, v5);
    byte_4B3E991 = 1;
  }
  managerObject = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(managerObject, 0LL, 0LL) )
  {
    CriWare_Common_TypeInfo->static_fields->_managerObject = UnityEngine_GameObject__Find(
                                                               (System_String_o *)StringLiteral_1092/*"/CRIWARE"*/,
                                                               0LL);
    sub_1BDB81C(CriWare_Common_TypeInfo->static_fields);
    v7 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
    {
      v8 = (UnityEngine_GameObject_o *)sub_1BDBAC4(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(v8, (System_String_o *)StringLiteral_3956/*"CRIWARE"*/, 0LL);
      CriWare_Common_TypeInfo->static_fields->_managerObject = v8;
      sub_1BDB81C(CriWare_Common_TypeInfo->static_fields);
    }
    v9 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DontDestroyOnLoad(v9, 0LL);
  }
  return CriWare_Common_TypeInfo->static_fields->_managerObject;
}


System_String_o *__fastcall CriWare_Common__get_streamingAssetsPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4B3E98E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Application_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_1/*""*/, v2);
    byte_4B3E98E = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  return UnityEngine_Application__get_streamingAssetsPath(0LL);
}