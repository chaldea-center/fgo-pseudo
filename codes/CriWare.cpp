void __fastcall CriWare_Common___cctor(const MethodInfo *method)
{
  ;
}


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

  v1 = (const MethodInfo *)qword_4218E78;
  if ( !qword_4218E78 )
  {
    v3[0] = (__int64)"cri_ware_unity";
    v3[1] = 14LL;
    v3[2] = (__int64)"CRIWARE0F286CE1";
    v3[3] = 15LL;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    method = (const MethodInfo *)sub_B0DD28(v3);
    v1 = method;
    qword_4218E78 = (__int64)method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


bool __fastcall CriWare_Common__CheckBinaryVersionCompatibility(const MethodInfo *method)
{
  __int64 v1; // x1
  CriWare_Common_c *v2; // x0

  if ( (byte_4218E70 & 1) == 0 )
  {
    sub_B0D8A4(&CriWare_Common_TypeInfo, v1);
    byte_4218E70 = 1;
  }
  v2 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  return CriWare_Common__GetBinaryVersionNumber((const MethodInfo *)v2) == 16843521;
}


// local variable allocation has failed, the output may be wrong!
CriWare_Common_CpuUsage_o __fastcall CriWare_Common__GetAtomCpuUsage(const MethodInfo *method)
{
  __int64 v1; // x1
  float v2; // s0
  float v3; // s1
  float v4; // s2
  CriWare_Common_CpuUsage_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218E74 & 1) == 0 )
  {
    sub_B0D8A4(&CriAtomPlugin_TypeInfo, v1);
    byte_4218E74 = 1;
  }
  if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  }
  *(CriWare_Common_CpuUsage_o *)&v2 = CriAtomPlugin__GetCpuUsage(0LL);
  result.fields.peak = v4;
  result.fields.average = v3;
  result.fields.last = v2;
  return result;
}


uint32_t __fastcall CriWare_Common__GetAtomMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4218E72 & 1) == 0 )
  {
    sub_B0D8A4(&CriAtomPlugin_TypeInfo, v1);
    byte_4218E72 = 1;
  }
  if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  }
  return CriAtomPlugin__CRIWAREEF0A73BD(0LL);
}


int32_t __fastcall CriWare_Common__GetBinaryVersionNumber(const MethodInfo *method)
{
  __int64 v1; // x1
  CriWare_Common_c *v2; // x0

  if ( (byte_4218E6F & 1) == 0 )
  {
    sub_B0D8A4(&CriWare_Common_TypeInfo, v1);
    byte_4218E6F = 1;
  }
  v2 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  return CriWare_Common__CRIWARE0F286CE1((const MethodInfo *)v2);
}


uint32_t __fastcall CriWare_Common__GetFsMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4218E71 & 1) == 0 )
  {
    sub_B0D8A4(&CriFsPlugin_TypeInfo, v1);
    byte_4218E71 = 1;
  }
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  return CriFsPlugin__CRIWARE05FCC2E5(0LL);
}


uint32_t __fastcall CriWare_Common__GetManaMemoryUsage(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4218E73 & 1) == 0 )
  {
    sub_B0D8A4(&CriManaPlugin_TypeInfo, v1);
    byte_4218E73 = 1;
  }
  if ( (BYTE3(CriManaPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriManaPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriManaPlugin_TypeInfo);
  }
  return CriManaPlugin__CRIWARE75B44401(0LL);
}


int32_t __fastcall CriWare_Common__GetRequiredBinaryVersionNumber(const MethodInfo *method)
{
  return 16843521;
}


int32_t __fastcall CriWare_Common__GetScriptVersionNumber(const MethodInfo *method)
{
  return 16843777;
}


System_String_o *__fastcall CriWare_Common__GetScriptVersionString(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4218E6E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1016/*"1.01.04 (2.38.28h4-VolumeForCueInfo)"*/, v1);
    byte_4218E6E = 1;
  }
  return (System_String_o *)StringLiteral_1016/*"1.01.04 (2.38.28h4-VolumeForCueInfo)"*/;
}


bool __fastcall CriWare_Common__IsStreamingAssetsPath(System_String_o *path, const MethodInfo *method)
{
  _BOOL8 IsPathRooted; // x0
  _BOOL4 v4; // w0

  if ( (byte_4218E6C & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_Path_TypeInfo, method);
    byte_4218E6C = 1;
  }
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  IsPathRooted = System_IO_Path__IsPathRooted(path, 0LL);
  if ( IsPathRooted )
  {
    LOBYTE(v4) = 0;
  }
  else
  {
    if ( !path )
      sub_B0D97C(IsPathRooted);
    return (unsigned int)System_String__IndexOf(path, 0x3Au, 0LL) >> 31;
  }
  return v4;
}


void __fastcall CriWare_Common__criWareUnity_SetRenderingEventOffsetForMana(int32_t offset, const MethodInfo *method)
{
  void (__fastcall *v2)(_QWORD, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))qword_4218E80;
  if ( !qword_4218E80 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"criWareUnity_SetRenderingEventOffsetForMana";
    v4[3] = 43LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))sub_B0DD28(v4);
    qword_4218E80 = (__int64)v2;
  }
  v2((unsigned int)offset, method);
}


System_String_o *__fastcall CriWare_Common__get_installTargetPath(const MethodInfo *method)
{
  if ( UnityEngine_Application__get_platform(0LL) == 8 )
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
  CriWare_Common_c *v6; // x0
  UnityEngine_Object_o *managerObject; // x19
  UnityEngine_GameObject_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  CriWare_Common_c *v15; // x8
  System_Int32_array **v16; // x19
  BattleServantConfConponent_o *static_fields; // x0
  UnityEngine_Object_o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_GameObject_o *v21; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CriWare_Common_c *v28; // x0
  BattleServantConfConponent_o *v29; // x0
  CriWare_Common_c *v30; // x0
  UnityEngine_Object_o *v31; // x19
  CriWare_Common_c *v32; // x0

  if ( (byte_4218E6D & 1) == 0 )
  {
    sub_B0D8A4(&CriWare_Common_TypeInfo, v1);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v2);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_3456/*"CRIWARE"*/, v4);
    sub_B0D8A4(&StringLiteral_907/*"/CRIWARE"*/, v5);
    byte_4218E6D = 1;
  }
  v6 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
    v6 = CriWare_Common_TypeInfo;
  }
  managerObject = (UnityEngine_Object_o *)v6->static_fields->_managerObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(managerObject, 0LL, 0LL) )
  {
    v8 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_907/*"/CRIWARE"*/, 0LL);
    v15 = CriWare_Common_TypeInfo;
    v16 = (System_Int32_array **)v8;
    if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWare_Common_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
      v15 = CriWare_Common_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v15->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v16;
    sub_B0D840(static_fields, v16, v9, v10, v11, v12, v13, v14);
    v18 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
    {
      v21 = (UnityEngine_GameObject_o *)sub_B0D974(UnityEngine_GameObject_TypeInfo, v19, v20);
      UnityEngine_GameObject___ctor(v21, (System_String_o *)StringLiteral_3456/*"CRIWARE"*/, 0LL);
      v28 = CriWare_Common_TypeInfo;
      if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriWare_Common_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
        v28 = CriWare_Common_TypeInfo;
      }
      v29 = (BattleServantConfConponent_o *)v28->static_fields;
      v29->klass = (BattleServantConfConponent_c *)v21;
      sub_B0D840(v29, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
    }
    v30 = CriWare_Common_TypeInfo;
    if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWare_Common_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
      v30 = CriWare_Common_TypeInfo;
    }
    v31 = (UnityEngine_Object_o *)v30->static_fields->_managerObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DontDestroyOnLoad(v31, 0LL);
  }
  v32 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
    v32 = CriWare_Common_TypeInfo;
  }
  return v32->static_fields->_managerObject;
}


System_String_o *__fastcall CriWare_Common__get_streamingAssetsPath(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4218E6B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, v1);
    byte_4218E6B = 1;
  }
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return UnityEngine_Application__get_streamingAssetsPath(0LL);
}