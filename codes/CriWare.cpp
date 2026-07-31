void CriWare_Common___ctor(CriWare_Common_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CriWare_Common__CRIWARE0F286CE1(const MethodInfo *method)
{
  void *v1; // x0
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = off_59319A0;
  if ( !off_59319A0 )
  {
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "CRIWARE0F286CE1";
    v3[3] = 15;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    v1 = (void *)sub_2200304(v3);
    off_59319A0 = v1;
  }
  return ((__int64 (*)(void))v1)();
}


bool CriWare_Common__CheckBinaryVersionCompatibility(const MethodInfo *method)
{
  return CriWare_Common__CRIWARE0F286CE1(method) == 16843777;
}


CriWare_Common_CpuUsage_o CriWare_Common__GetAtomCpuUsage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_593199E & 1) == 0 )
  {
    sub_21FFC50(&CriAtomPlugin_TypeInfo);
    byte_593199E = 1;
  }
  if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v1, v2);
  return CriAtomPlugin__GetCpuUsage(0);
}


uint32_t CriWare_Common__GetAtomMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_593199C & 1) == 0 )
  {
    sub_21FFC50(&CriAtomPlugin_TypeInfo);
    byte_593199C = 1;
  }
  if ( !*(&CriAtomPlugin_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo, v1, v2);
  return CriAtomPlugin__CRIWAREEF0A73BD(0);
}


// attributes: thunk
int32_t CriWare_Common__GetBinaryVersionNumber(const MethodInfo *method)
{
  return CriWare_Common__CRIWARE0F286CE1(method);
}


uint32_t CriWare_Common__GetFsMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_593199B & 1) == 0 )
  {
    sub_21FFC50(&CriFsPlugin_TypeInfo);
    byte_593199B = 1;
  }
  if ( !*(&CriFsPlugin_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo, v1, v2);
  return CriFsPlugin__CRIWARE05FCC2E5(0);
}


uint32_t CriWare_Common__GetManaMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_593199D & 1) == 0 )
  {
    sub_21FFC50(&CriManaPlugin_TypeInfo);
    byte_593199D = 1;
  }
  if ( !*(&CriManaPlugin_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo, v1, v2);
  return CriManaPlugin__CRIWARE75B44401(0);
}


int32_t CriWare_Common__GetRequiredBinaryVersionNumber(const MethodInfo *method)
{
  return 16843777;
}


int32_t CriWare_Common__GetScriptVersionNumber(const MethodInfo *method)
{
  return 16844289;
}


System_String_o *CriWare_Common__GetScriptVersionString(const MethodInfo *method)
{
  if ( (byte_593199A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1251/*"1.01.06 (2.38.28h4-VolumeForCueInfo)"*/);
    byte_593199A = 1;
  }
  return (System_String_o *)StringLiteral_1251/*"1.01.06 (2.38.28h4-VolumeForCueInfo)"*/;
}


bool CriWare_Common__IsStreamingAssetsPath(System_String_o *path, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 IsPathRooted_76769432; // x0
  __int64 v5; // x1
  _BOOL4 v6; // w0

  if ( (byte_5931998 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_Path_TypeInfo);
    byte_5931998 = 1;
  }
  if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, method, v2);
  IsPathRooted_76769432 = System_IO_Path__IsPathRooted_76769432(path, 0);
  if ( IsPathRooted_76769432 )
  {
    LOBYTE(v6) = 0;
  }
  else
  {
    if ( !path )
      sub_21FFECC(IsPathRooted_76769432, v5);
    return (unsigned int)System_String__IndexOf(path, 0x3Au, 0) >> 31;
  }
  return v6;
}


void CriWare_Common__criWareUnity_SetRenderingEventOffsetForMana(int32_t offset, const MethodInfo *method)
{
  void *v3; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v3 = off_59319A8;
  if ( !off_59319A8 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "criWareUnity_SetRenderingEventOffsetForMana";
    v4[3] = 43;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v3 = (void *)sub_2200304(v4);
    off_59319A8 = v3;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v3)((unsigned int)offset, method);
}


System_String_o *CriWare_Common__get_installTargetPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  bool v3; // zf
  __int64 v4; // x1
  __int64 v5; // x2
  int v6; // w8

  if ( (byte_5931997 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_5931997 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1, v2);
  v3 = UnityEngine_Application__get_platform(0) == 8;
  v6 = *(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1);
  if ( v3 )
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v4, v5);
    return UnityEngine_Application__get_temporaryCachePath(0);
  }
  else
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v4, v5);
    return UnityEngine_Application__get_persistentDataPath(0);
  }
}


UnityEngine_GameObject_o *CriWare_Common__get_managerObject(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UnityEngine_Object_o *managerObject; // x19
  struct UnityEngine_GameObject_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Object_o *v11; // x19

  if ( (byte_5931999 & 1) == 0 )
  {
    sub_21FFC50(&CriWare_Common_TypeInfo);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_4066/*"CRIWARE"*/);
    sub_21FFC50(&StringLiteral_1155/*"/CRIWARE"*/);
    byte_5931999 = 1;
  }
  managerObject = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  if ( UnityEngine_Object__op_Equality(managerObject, 0, 0) )
  {
    v4 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_1155/*"/CRIWARE"*/, 0);
    CriWare_Common_TypeInfo->static_fields->_managerObject = v4;
    sub_21FFBF4(CriWare_Common_TypeInfo->static_fields, v4);
    v7 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Equality(v7, 0, 0) )
    {
      v10 = (UnityEngine_GameObject_o *)sub_21FFEBC(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(v10, (System_String_o *)StringLiteral_4066/*"CRIWARE"*/, 0);
      CriWare_Common_TypeInfo->static_fields->_managerObject = v10;
      sub_21FFBF4(CriWare_Common_TypeInfo->static_fields, v10);
    }
    v11 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__DontDestroyOnLoad(v11, 0);
  }
  return CriWare_Common_TypeInfo->static_fields->_managerObject;
}


System_String_o *CriWare_Common__get_streamingAssetsPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_5931996 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5931996 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1, v2);
  if ( UnityEngine_Application__get_platform(0) == 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v3, v4);
  return UnityEngine_Application__get_streamingAssetsPath(0);
}