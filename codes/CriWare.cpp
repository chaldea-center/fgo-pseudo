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

  v1 = (const MethodInfo *)qword_4B10A48;
  if ( !qword_4B10A48 )
  {
    v4 = 0;
    v3[0] = (__int64)"cri_ware_unity";
    v3[1] = 14LL;
    v3[2] = (__int64)"CRIWARE0F286CE1";
    v3[3] = 15LL;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1BCADBC(v3);
    v1 = method;
    qword_4B10A48 = (__int64)method;
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
  __int64 v2; // x2
  float v3; // s0
  float v4; // s1
  float v5; // s2
  CriWare_Common_CpuUsage_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B10A46 & 1) == 0 )
  {
    sub_1BCA7E0(&CriAtomPlugin_TypeInfo, v1, v2);
    byte_4B10A46 = 1;
  }
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v1);
  *(CriWare_Common_CpuUsage_o *)&v3 = CriAtomPlugin__GetCpuUsage(0LL);
  result.fields.peak = v5;
  result.fields.average = v4;
  result.fields.last = v3;
  return result;
}


uint32_t __fastcall CriWare_Common__GetAtomMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B10A44 & 1) == 0 )
  {
    sub_1BCA7E0(&CriAtomPlugin_TypeInfo, v1, v2);
    byte_4B10A44 = 1;
  }
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v1);
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
  __int64 v2; // x2

  if ( (byte_4B10A43 & 1) == 0 )
  {
    sub_1BCA7E0(&CriFsPlugin_TypeInfo, v1, v2);
    byte_4B10A43 = 1;
  }
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v1);
  return CriFsPlugin__CRIWARE05FCC2E5(0LL);
}


uint32_t __fastcall CriWare_Common__GetManaMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B10A45 & 1) == 0 )
  {
    sub_1BCA7E0(&CriManaPlugin_TypeInfo, v1, v2);
    byte_4B10A45 = 1;
  }
  if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v1);
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
  __int64 v2; // x2

  if ( (byte_4B10A42 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1265/*"1.01.05 (2.38.28h4-VolumeForCueInfo)"*/, v1, v2);
    byte_4B10A42 = 1;
  }
  return (System_String_o *)StringLiteral_1265/*"1.01.05 (2.38.28h4-VolumeForCueInfo)"*/;
}


bool __fastcall CriWare_Common__IsStreamingAssetsPath(System_String_o *path, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 IsPathRooted_62667412; // x0
  __int64 v5; // x1
  _BOOL4 v6; // w0

  if ( (byte_4B10A40 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_Path_TypeInfo, method, v2);
    byte_4B10A40 = 1;
  }
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, method);
  IsPathRooted_62667412 = System_IO_Path__IsPathRooted_62667412(path, 0LL);
  if ( IsPathRooted_62667412 )
  {
    LOBYTE(v6) = 0;
  }
  else
  {
    if ( !path )
      sub_1BCAA3C(IsPathRooted_62667412, v5);
    return (unsigned int)System_String__IndexOf(path, 0x3Au, 0LL) >> 31;
  }
  return v6;
}


void __fastcall CriWare_Common__criWareUnity_SetRenderingEventOffsetForMana(int32_t offset, const MethodInfo *method)
{
  void (__fastcall *v2)(_QWORD, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))qword_4B10A50;
  if ( !qword_4B10A50 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"criWareUnity_SetRenderingEventOffsetForMana";
    v4[3] = 43LL;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))sub_1BCADBC(v4);
    qword_4B10A50 = (__int64)v2;
  }
  v2((unsigned int)offset, method);
}


System_String_o *__fastcall CriWare_Common__get_installTargetPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  int32_t platform; // w19

  if ( (byte_4B10A3F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v1, v2);
    byte_4B10A3F = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
  platform = UnityEngine_Application__get_platform(0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v3);
  if ( platform == 8 )
    return UnityEngine_Application__get_temporaryCachePath(0LL);
  else
    return UnityEngine_Application__get_persistentDataPath(0LL);
}


UnityEngine_GameObject_o *__fastcall CriWare_Common__get_managerObject(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *managerObject; // x19
  struct UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  UnityEngine_GameObject_o *v18; // x19
  UnityEngine_Object_o *v19; // x19

  if ( (byte_4B10A41 & 1) == 0 )
  {
    sub_1BCA7E0(&CriWare_Common_TypeInfo, v1, v2);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v3, v4);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_4006/*"CRIWARE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1151/*"/CRIWARE"*/, v9, v10);
    byte_4B10A41 = 1;
  }
  managerObject = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( UnityEngine_Object__op_Equality(managerObject, 0LL, 0LL) )
  {
    v12 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_1151/*"/CRIWARE"*/, 0LL);
    CriWare_Common_TypeInfo->static_fields->_managerObject = v12;
    sub_1BCA784(CriWare_Common_TypeInfo->static_fields, v12);
    v14 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
    {
      v18 = (UnityEngine_GameObject_o *)sub_1BCAA2C(UnityEngine_GameObject_TypeInfo, v15, v16, v17);
      UnityEngine_GameObject___ctor(v18, (System_String_o *)StringLiteral_4006/*"CRIWARE"*/, 0LL);
      CriWare_Common_TypeInfo->static_fields->_managerObject = v18;
      sub_1BCA784(CriWare_Common_TypeInfo->static_fields, v18);
    }
    v19 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    UnityEngine_Object__DontDestroyOnLoad(v19, 0LL);
  }
  return CriWare_Common_TypeInfo->static_fields->_managerObject;
}


System_String_o *__fastcall CriWare_Common__get_streamingAssetsPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1

  if ( (byte_4B10A3E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v3, v4);
    byte_4B10A3E = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v5);
  return UnityEngine_Application__get_streamingAssetsPath(0LL);
}