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

  v1 = (const MethodInfo *)off_4C20E28;
  if ( !off_4C20E28 )
  {
    v4 = 0;
    v3[0] = "cri_ware_unity";
    v3[1] = 14;
    v3[2] = "CRIWARE0F286CE1";
    v3[3] = 15;
    v3[4] = 0x200000000LL;
    v5 = 0;
    method = (const MethodInfo *)sub_1C2DA6C(v3);
    v1 = method;
    off_4C20E28 = method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


bool CriWare_Common__CheckBinaryVersionCompatibility(const MethodInfo *method)
{
  return CriWare_Common__CRIWARE0F286CE1(method) == 16843777;
}


CriWare_Common_CpuUsage_o CriWare_Common__GetAtomCpuUsage(const MethodInfo *method)
{
  if ( (byte_4C20E26 & 1) == 0 )
  {
    sub_1C2D490(&CriAtomPlugin_TypeInfo);
    byte_4C20E26 = 1;
  }
  if ( !CriAtomPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  return CriAtomPlugin__GetCpuUsage(0);
}


uint32_t CriWare_Common__GetAtomMemoryUsage(const MethodInfo *method)
{
  if ( (byte_4C20E24 & 1) == 0 )
  {
    sub_1C2D490(&CriAtomPlugin_TypeInfo);
    byte_4C20E24 = 1;
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
  if ( (byte_4C20E23 & 1) == 0 )
  {
    sub_1C2D490(&CriFsPlugin_TypeInfo);
    byte_4C20E23 = 1;
  }
  if ( !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  return CriFsPlugin__CRIWARE05FCC2E5(0);
}


uint32_t CriWare_Common__GetManaMemoryUsage(const MethodInfo *method)
{
  if ( (byte_4C20E25 & 1) == 0 )
  {
    sub_1C2D490(&CriManaPlugin_TypeInfo);
    byte_4C20E25 = 1;
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
  return 16844033;
}


System_String_o *CriWare_Common__GetScriptVersionString(const MethodInfo *method)
{
  if ( (byte_4C20E22 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1175/*"1.01.05 (2.38.28h4-VolumeForCueInfo)"*/);
    byte_4C20E22 = 1;
  }
  return (System_String_o *)StringLiteral_1175/*"1.01.05 (2.38.28h4-VolumeForCueInfo)"*/;
}


bool CriWare_Common__IsStreamingAssetsPath(System_String_o *path, const MethodInfo *method)
{
  _BOOL8 IsPathRooted_64397480; // x0
  __int64 v4; // x1
  _BOOL4 v5; // w0

  if ( (byte_4C20E20 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_Path_TypeInfo);
    byte_4C20E20 = 1;
  }
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  IsPathRooted_64397480 = System_IO_Path__IsPathRooted_64397480(path, 0);
  if ( IsPathRooted_64397480 )
  {
    LOBYTE(v5) = 0;
  }
  else
  {
    if ( !path )
      sub_1C2D6EC(IsPathRooted_64397480, v4);
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

  v2 = off_4C20E30;
  if ( !off_4C20E30 )
  {
    v4[0] = "cri_ware_unity";
    v4[1] = 14;
    v4[2] = "criWareUnity_SetRenderingEventOffsetForMana";
    v4[3] = 43;
    v5 = 4;
    v4[4] = 0x200000000LL;
    v6 = 0;
    v2 = (void *)sub_1C2DA6C(v4);
    off_4C20E30 = v2;
  }
  ((void (__fastcall *)(_QWORD, const MethodInfo *))v2)((unsigned int)offset, method);
}


System_String_o *CriWare_Common__get_installTargetPath(const MethodInfo *method)
{
  int32_t platform; // w19

  if ( (byte_4C20E1F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    byte_4C20E1F = 1;
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
  UnityEngine_Object_o *v2; // x19
  UnityEngine_GameObject_o *v3; // x19
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C20E21 & 1) == 0 )
  {
    sub_1C2D490(&CriWare_Common_TypeInfo);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_3920/*"CRIWARE"*/);
    sub_1C2D490(&StringLiteral_1079/*"/CRIWARE"*/);
    byte_4C20E21 = 1;
  }
  managerObject = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(managerObject, 0, 0) )
  {
    CriWare_Common_TypeInfo->static_fields->_managerObject = UnityEngine_GameObject__Find(
                                                               (System_String_o *)StringLiteral_1079/*"/CRIWARE"*/,
                                                               0);
    sub_1C2D434(CriWare_Common_TypeInfo->static_fields);
    v2 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v2, 0, 0) )
    {
      v3 = (UnityEngine_GameObject_o *)sub_1C2D6DC(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(v3, (System_String_o *)StringLiteral_3920/*"CRIWARE"*/, 0);
      CriWare_Common_TypeInfo->static_fields->_managerObject = v3;
      sub_1C2D434(CriWare_Common_TypeInfo->static_fields);
    }
    v4 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DontDestroyOnLoad(v4, 0);
  }
  return CriWare_Common_TypeInfo->static_fields->_managerObject;
}


System_String_o *CriWare_Common__get_streamingAssetsPath(const MethodInfo *method)
{
  if ( (byte_4C20E1E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C20E1E = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0) == 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  return UnityEngine_Application__get_streamingAssetsPath(0);
}