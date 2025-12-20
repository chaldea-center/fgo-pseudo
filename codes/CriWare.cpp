void CriWare_Common___ctor(CriWare_Common_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CriWare_Common__CRIWARE0F286CE1(const MethodInfo *method)
{
  const MethodInfo *v1; // x8
  _QWORD v3[5]; // [xsp+0h] [xbp-40h] BYREF
  int v4; // [xsp+28h] [xbp-18h]
  char v5; // [xsp+2Ch] [xbp-14h]

  v1 = (const MethodInfo *)off_4D25F80;
  if ( !off_4D25F80 )
  {
    v4 = 0;
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "CRIWARE0F286CE1";
    v3[3] = 15;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1C94748(v3);
    v1 = method;
    off_4D25F80 = method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


bool CriWare_Common__CheckBinaryVersionCompatibility(const MethodInfo *method)
{
  return CriWare_Common__CRIWARE0F286CE1(method) == 16843777;
}


CriWare_Common_CpuUsage_o CriWare_Common__GetAtomCpuUsage(const MethodInfo *method)
{
  if ( (byte_4D25F78 & 1) == 0 )
  {
    sub_1C94098(&CriAtomPlugin_TypeInfo);
    byte_4D25F78 = 1;
  }
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  return CriAtomPlugin__GetCpuUsage(0);
}


uint32_t CriWare_Common__GetAtomMemoryUsage(const MethodInfo *method)
{
  if ( (byte_4D25F76 & 1) == 0 )
  {
    sub_1C94098(&CriAtomPlugin_TypeInfo);
    byte_4D25F76 = 1;
  }
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  return CriAtomPlugin__CRIWAREEF0A73BD(0);
}


// attributes: thunk
int32_t CriWare_Common__GetBinaryVersionNumber(const MethodInfo *method)
{
  return CriWare_Common__CRIWARE0F286CE1(method);
}


uint32_t CriWare_Common__GetFsMemoryUsage(const MethodInfo *method)
{
  if ( (byte_4D25F75 & 1) == 0 )
  {
    sub_1C94098(&CriFsPlugin_TypeInfo);
    byte_4D25F75 = 1;
  }
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  return CriFsPlugin__CRIWARE05FCC2E5(0);
}


uint32_t CriWare_Common__GetManaMemoryUsage(const MethodInfo *method)
{
  if ( (byte_4D25F77 & 1) == 0 )
  {
    sub_1C94098(&CriManaPlugin_TypeInfo);
    byte_4D25F77 = 1;
  }
  if ( !CriManaPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
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
  if ( (byte_4D25F74 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1168/*"1.01.06 (2.38.28h4-VolumeForCueInfo)"*/);
    byte_4D25F74 = 1;
  }
  return (System_String_o *)StringLiteral_1168/*"1.01.06 (2.38.28h4-VolumeForCueInfo)"*/;
}


bool CriWare_Common__IsStreamingAssetsPath(System_String_o *path, const MethodInfo *method)
{
  _BOOL8 IsPathRooted_65354620; // x0
  __int64 v4; // x1
  _BOOL4 v5; // w0

  if ( (byte_4D25F72 & 1) == 0 )
  {
    sub_1C94098(&System_IO_Path_TypeInfo);
    byte_4D25F72 = 1;
  }
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  IsPathRooted_65354620 = System_IO_Path__IsPathRooted_65354620(path, 0);
  if ( IsPathRooted_65354620 )
  {
    LOBYTE(v5) = 0;
  }
  else
  {
    if ( !path )
      sub_1C942F0(IsPathRooted_65354620, v4);
    return (unsigned int)System_String__IndexOf(path, 0x3Au, 0) >> 31;
  }
  return v5;
}


void CriWare_Common__criWareUnity_SetRenderingEventOffsetForMana(int32_t offset, const MethodInfo *method)
{
  void *v2; // x8
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  int v5; // [xsp+28h] [xbp-28h]
  char v6; // [xsp+2Ch] [xbp-24h]

  v2 = off_4D25F88;
  if ( !off_4D25F88 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "criWareUnity_SetRenderingEventOffsetForMana";
    v4[3] = 43;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void *)sub_1C94748(v4);
    off_4D25F88 = v2;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v2)((unsigned int)offset, method);
}


System_String_o *CriWare_Common__get_installTargetPath(const MethodInfo *method)
{
  int32_t platform; // w19

  if ( (byte_4D25F71 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    byte_4D25F71 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  platform = UnityEngine_Application__get_platform(0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( platform == 8 )
    return UnityEngine_Application__get_temporaryCachePath(0);
  else
    return UnityEngine_Application__get_persistentDataPath(0);
}


UnityEngine_GameObject_o *CriWare_Common__get_managerObject(const MethodInfo *method)
{
  UnityEngine_Object_o *managerObject; // x19
  struct UnityEngine_GameObject_o *v2; // x0
  UnityEngine_Object_o *v3; // x19
  UnityEngine_GameObject_o *v4; // x19
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4D25F73 & 1) == 0 )
  {
    sub_1C94098(&CriWare_Common_TypeInfo);
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_3932/*"CRIWARE"*/);
    sub_1C94098(&StringLiteral_1072/*"/CRIWARE"*/);
    byte_4D25F73 = 1;
  }
  managerObject = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(managerObject, 0, 0) )
  {
    v2 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_1072/*"/CRIWARE"*/, 0);
    CriWare_Common_TypeInfo->static_fields->_managerObject = v2;
    sub_1C9403C(CriWare_Common_TypeInfo->static_fields, v2);
    v3 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v3, 0, 0) )
    {
      v4 = (UnityEngine_GameObject_o *)sub_1C942E4(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(v4, (System_String_o *)StringLiteral_3932/*"CRIWARE"*/, 0);
      CriWare_Common_TypeInfo->static_fields->_managerObject = v4;
      sub_1C9403C(CriWare_Common_TypeInfo->static_fields, v4);
    }
    v5 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DontDestroyOnLoad(v5, 0);
  }
  return CriWare_Common_TypeInfo->static_fields->_managerObject;
}


System_String_o *CriWare_Common__get_streamingAssetsPath(const MethodInfo *method)
{
  if ( (byte_4D25F70 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D25F70 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0) == 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  return UnityEngine_Application__get_streamingAssetsPath(0);
}