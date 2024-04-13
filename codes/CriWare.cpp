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

  v1 = (const MethodInfo *)qword_42ED468;
  if ( !qword_42ED468 )
  {
    v3[0] = (__int64)"cri_ware_unity";
    v3[1] = 14LL;
    v3[2] = (__int64)"CRIWARE0F286CE1";
    v3[3] = 15LL;
    v3[4] = 0x200000000LL;
    v4 = 0;
    v5 = 0;
    method = (const MethodInfo *)sub_B5DA48(v3);
    v1 = method;
    qword_42ED468 = (__int64)method;
  }
  return ((__int64 (__fastcall *)(const MethodInfo *))v1)(method);
}


bool __fastcall CriWare_Common__CheckBinaryVersionCompatibility(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CriWare_Common_c *v4; // x0

  if ( (byte_42ED45F & 1) == 0 )
  {
    sub_B5D5C4(&CriWare_Common_TypeInfo, v1, v2, v3);
    byte_42ED45F = 1;
  }
  v4 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  return CriWare_Common__GetBinaryVersionNumber((const MethodInfo *)v4) == 16843521;
}


// local variable allocation has failed, the output may be wrong!
CriWare_Common_CpuUsage_o __fastcall CriWare_Common__GetAtomCpuUsage(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  float v4; // s0
  float v5; // s1
  float v6; // s2
  CriWare_Common_CpuUsage_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ED463 & 1) == 0 )
  {
    sub_B5D5C4(&CriAtomPlugin_TypeInfo, v1, v2, v3);
    byte_42ED463 = 1;
  }
  if ( (BYTE3(CriAtomPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriAtomPlugin_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriAtomPlugin_TypeInfo);
  }
  *(CriWare_Common_CpuUsage_o *)&v4 = CriAtomPlugin__GetCpuUsage(0LL);
  result.fields.peak = v6;
  result.fields.average = v5;
  result.fields.last = v4;
  return result;
}


uint32_t __fastcall CriWare_Common__GetAtomMemoryUsage(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED461 & 1) == 0 )
  {
    sub_B5D5C4(&CriAtomPlugin_TypeInfo, v1, v2, v3);
    byte_42ED461 = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CriWare_Common_c *v4; // x0

  if ( (byte_42ED45E & 1) == 0 )
  {
    sub_B5D5C4(&CriWare_Common_TypeInfo, v1, v2, v3);
    byte_42ED45E = 1;
  }
  v4 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
  }
  return CriWare_Common__CRIWARE0F286CE1((const MethodInfo *)v4);
}


uint32_t __fastcall CriWare_Common__GetFsMemoryUsage(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED460 & 1) == 0 )
  {
    sub_B5D5C4(&CriFsPlugin_TypeInfo, v1, v2, v3);
    byte_42ED460 = 1;
  }
  if ( (BYTE3(CriFsPlugin_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CriFsPlugin_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CriFsPlugin_TypeInfo);
  return CriFsPlugin__CRIWARE05FCC2E5(0LL);
}


uint32_t __fastcall CriWare_Common__GetManaMemoryUsage(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED462 & 1) == 0 )
  {
    sub_B5D5C4(&CriManaPlugin_TypeInfo, v1, v2, v3);
    byte_42ED462 = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED45D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1029/*"1.01.04 (2.38.28h4-VolumeForCueInfo)"*/, v1, v2, v3);
    byte_42ED45D = 1;
  }
  return (System_String_o *)StringLiteral_1029/*"1.01.04 (2.38.28h4-VolumeForCueInfo)"*/;
}


bool __fastcall CriWare_Common__IsStreamingAssetsPath(System_String_o *path, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL8 IsPathRooted; // x0
  __int64 v6; // x1
  _BOOL4 v7; // w0

  if ( (byte_42ED45B & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_Path_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED45B = 1;
  }
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  IsPathRooted = System_IO_Path__IsPathRooted(path, 0LL);
  if ( IsPathRooted )
  {
    LOBYTE(v7) = 0;
  }
  else
  {
    if ( !path )
      sub_B5D69C(IsPathRooted, v6);
    return (unsigned int)System_String__IndexOf(path, 0x3Au, 0LL) >> 31;
  }
  return v7;
}


void __fastcall CriWare_Common__criWareUnity_SetRenderingEventOffsetForMana(int32_t offset, const MethodInfo *method)
{
  void (__fastcall *v2)(_QWORD, const MethodInfo *); // x8
  __int64 v4[5]; // [xsp+0h] [xbp-40h] BYREF
  int v5; // [xsp+28h] [xbp-18h]
  char v6; // [xsp+2Ch] [xbp-14h]

  v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))qword_42ED470;
  if ( !qword_42ED470 )
  {
    v4[0] = (__int64)"cri_ware_unity";
    v4[1] = 14LL;
    v4[2] = (__int64)"criWareUnity_SetRenderingEventOffsetForMana";
    v4[3] = 43LL;
    v4[4] = 0x200000000LL;
    v5 = 4;
    v6 = 0;
    v2 = (void (__fastcall *)(_QWORD, const MethodInfo *))sub_B5DA48(v4);
    qword_42ED470 = (__int64)v2;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  CriWare_Common_c *v16; // x0
  UnityEngine_Object_o *managerObject; // x19
  UnityEngine_GameObject_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  CriWare_Common_c *v25; // x8
  System_Int32_array **v26; // x19
  BattleServantConfConponent_o *static_fields; // x0
  UnityEngine_Object_o *v28; // x19
  UnityEngine_GameObject_o *v29; // x19
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  CriWare_Common_c *v36; // x0
  BattleServantConfConponent_o *v37; // x0
  CriWare_Common_c *v38; // x0
  UnityEngine_Object_o *v39; // x19
  CriWare_Common_c *v40; // x0

  if ( (byte_42ED45C & 1) == 0 )
  {
    sub_B5D5C4(&CriWare_Common_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_3509/*"CRIWARE"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_916/*"/CRIWARE"*/, v13, v14, v15);
    byte_42ED45C = 1;
  }
  v16 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
    v16 = CriWare_Common_TypeInfo;
  }
  managerObject = (UnityEngine_Object_o *)v16->static_fields->_managerObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(managerObject, 0LL, 0LL) )
  {
    v18 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_916/*"/CRIWARE"*/, 0LL);
    v25 = CriWare_Common_TypeInfo;
    v26 = (System_Int32_array **)v18;
    if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWare_Common_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
      v25 = CriWare_Common_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v25->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v26;
    sub_B5D560(static_fields, v26, v19, v20, v21, v22, v23, v24);
    v28 = (UnityEngine_Object_o *)CriWare_Common_TypeInfo->static_fields->_managerObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v28, 0LL, 0LL) )
    {
      v29 = (UnityEngine_GameObject_o *)sub_B5D694(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(v29, (System_String_o *)StringLiteral_3509/*"CRIWARE"*/, 0LL);
      v36 = CriWare_Common_TypeInfo;
      if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CriWare_Common_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
        v36 = CriWare_Common_TypeInfo;
      }
      v37 = (BattleServantConfConponent_o *)v36->static_fields;
      v37->klass = (BattleServantConfConponent_c *)v29;
      sub_B5D560(v37, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
    }
    v38 = CriWare_Common_TypeInfo;
    if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CriWare_Common_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
      v38 = CriWare_Common_TypeInfo;
    }
    v39 = (UnityEngine_Object_o *)v38->static_fields->_managerObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DontDestroyOnLoad(v39, 0LL);
  }
  v40 = CriWare_Common_TypeInfo;
  if ( (BYTE3(CriWare_Common_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CriWare_Common_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CriWare_Common_TypeInfo);
    v40 = CriWare_Common_TypeInfo;
  }
  return v40->static_fields->_managerObject;
}


System_String_o *__fastcall CriWare_Common__get_streamingAssetsPath(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED45A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, v1, v2, v3);
    byte_42ED45A = 1;
  }
  if ( UnityEngine_Application__get_platform(0LL) == 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return UnityEngine_Application__get_streamingAssetsPath(0LL);
}