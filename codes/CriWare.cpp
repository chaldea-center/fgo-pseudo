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

  v1 = (const MethodInfo *)qword_4356818;
  if ( !qword_4356818 )
  {
    v3[0] = (__int64)"cri_ware_unity";
    v3[1] = 14LL;
    v3[2] = (__int64)"CRIWARE0F286CE1";
    v3[3] = 15LL;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    method = (const MethodInfo *)sub_B70B18(v3);
    v1 = method;
    qword_4356818 = (__int64)method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


bool __fastcall CriWare_Common__CheckBinaryVersionCompatibility(const MethodInfo *method)
{
  CriWare_Common_c *v1; // x0

  if ( (byte_4356810 & 1) == 0 )
  {
    sub_B70694(&CriWare_Common_TypeInfo);
    byte_4356810 = 1;
  }
  v1 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  return CriWare_Common__GetBinaryVersionNumber((const MethodInfo *)v1) == 16843521;
}


// local variable allocation has failed, the output may be wrong!
CriWare_Common_CpuUsage_o __fastcall CriWare_Common__GetAtomCpuUsage(const MethodInfo *method)
{
  float v1; // s0
  float v2; // s1
  float v3; // s2
  CriWare_Common_CpuUsage_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4356814 & 1) == 0 )
  {
    sub_B70694(&CriAtomPlugin_TypeInfo);
    byte_4356814 = 1;
  }
  if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  }
  *(CriWare_Common_CpuUsage_o *)&v1 = CriAtomPlugin__GetCpuUsage(0LL);
  result.fields.peak = v3;
  result.fields.average = v2;
  result.fields.last = v1;
  return result;
}


uint32_t __fastcall CriWare_Common__GetAtomMemoryUsage(const MethodInfo *method)
{
  if ( (byte_4356812 & 1) == 0 )
  {
    sub_B70694(&CriAtomPlugin_TypeInfo);
    byte_4356812 = 1;
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
  CriWare_Common_c *v1; // x0

  if ( (byte_435680F & 1) == 0 )
  {
    sub_B70694(&CriWare_Common_TypeInfo);
    byte_435680F = 1;
  }
  v1 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  return CriWare_Common__CRIWARE0F286CE1((const MethodInfo *)v1);
}


uint32_t __fastcall CriWare_Common__GetFsMemoryUsage(const MethodInfo *method)
{
  if ( (byte_4356811 & 1) == 0 )
  {
    sub_B70694(&CriFsPlugin_TypeInfo);
    byte_4356811 = 1;
  }
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  return CriFsPlugin__CRIWARE05FCC2E5(0LL);
}


uint32_t __fastcall CriWare_Common__GetManaMemoryUsage(const MethodInfo *method)
{
  if ( (byte_4356813 & 1) == 0 )
  {
    sub_B70694(&CriManaPlugin_TypeInfo);
    byte_4356813 = 1;
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
  if ( (byte_435680E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1034/*"1.01.04 (2.38.28h4-VolumeForCueInfo)"*/);
    byte_435680E = 1;
  }
  return (System_String_o *)StringLiteral_1034/*"1.01.04 (2.38.28h4-VolumeForCueInfo)"*/;
}


bool __fastcall CriWare_Common__IsStreamingAssetsPath(System_String_o *path, const MethodInfo *method)
{
  _BOOL8 IsPathRooted; // x0
  __int64 v4; // x1
  _BOOL4 v5; // w0

  if ( (byte_435680C & 1) == 0 )
  {
    sub_B70694(&System_IO_Path_TypeInfo);
    byte_435680C = 1;
  }
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  IsPathRooted = System_IO_Path__IsPathRooted(path, 0LL);
  if ( IsPathRooted )
  {
    LOBYTE(v5) = 0;
  }
  else
  {
    if ( !path )
      sub_B7076C(IsPathRooted, v4);
    return (unsigned int)System_String__IndexOf(path, 0x3Au, 0LL) >> 31;
  }
  return v5;
}


void __fastcall CriWare_Common__criWareUnity_SetRenderingEventOffsetForMana(int32_t offset, const MethodInfo *method)
{
  void (__fastcall *v2)(_QWORD, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))qword_4356820;
  if ( !qword_4356820 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"criWareUnity_SetRenderingEventOffsetForMana";
    v4[3] = 43LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))sub_B70B18(v4);
    qword_4356820 = (__int64)v2;
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
  CriWare_Common_c *v1; // x0
  UnityEngine_Object_o *managerObject; // x19
  UnityEngine_GameObject_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  CriWare_Common_c *v10; // x8
  System_Int32_array **v11; // x19
  BattleServantConfConponent_o *static_fields; // x0
  UnityEngine_Object_o *v13; // x19
  UnityEngine_GameObject_o *v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CriWare_Common_c *v21; // x0
  BattleServantConfConponent_o *v22; // x0
  CriWare_Common_c *v23; // x0
  UnityEngine_Object_o *v24; // x19
  CriWare_Common_c *v25; // x0

  if ( (byte_435680D & 1) == 0 )
  {
    sub_B70694(&CriWare_Common_TypeInfo);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_3518/*"CRIWARE"*/);
    sub_B70694(&StringLiteral_921/*"/CRIWARE"*/);
    byte_435680D = 1;
  }
  v1 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
    v1 = CriWare_Common_TypeInfo;
  }
  managerObject = (UnityEngine_Object_o *)v1->static_fields->_managerObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(managerObject, 0LL, 0LL) )
  {
    v3 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_921/*"/CRIWARE"*/, 0LL);
    v10 = CriWare_Common_TypeInfo;
    v11 = (System_Int32_array **)v3;
    if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWare_Common_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
      v10 = CriWare_Common_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v10->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v11;
    sub_B70630(static_fields, v11, v4, v5, v6, v7, v8, v9);
    v13 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v13, 0LL, 0LL) )
    {
      v14 = (UnityEngine_GameObject_o *)sub_B70764(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(v14, (System_String_o *)StringLiteral_3518/*"CRIWARE"*/, 0LL);
      v21 = CriWare_Common_TypeInfo;
      if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriWare_Common_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
        v21 = CriWare_Common_TypeInfo;
      }
      v22 = (BattleServantConfConponent_o *)v21->static_fields;
      v22->klass = (BattleServantConfConponent_c *)v14;
      sub_B70630(v22, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    }
    v23 = CriWare_Common_TypeInfo;
    if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWare_Common_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
      v23 = CriWare_Common_TypeInfo;
    }
    v24 = (UnityEngine_Object_o *)v23->static_fields->_managerObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DontDestroyOnLoad(v24, 0LL);
  }
  v25 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
    v25 = CriWare_Common_TypeInfo;
  }
  return v25->static_fields->_managerObject;
}


System_String_o *__fastcall CriWare_Common__get_streamingAssetsPath(const MethodInfo *method)
{
  if ( (byte_435680B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435680B = 1;
  }
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return UnityEngine_Application__get_streamingAssetsPath(0LL);
}