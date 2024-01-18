void __fastcall OverwriteAssetSoundName___ctor(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OverwriteAssetSoundName__FindCommonKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v9; // x1
  System_String_o *UniqueKey; // x20
  const MethodInfo *v11; // x5
  struct OverwriteAssetSoundNameTable_o *v12; // x8
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v3 = kind;
  if ( (byte_41851F8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_41851F8 = 1;
  }
  data = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
  if ( !OverwriteAssetSoundName )
    goto LABEL_20;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(table, 0LL, 0LL) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v9);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !OverwriteAssetSoundName )
      goto LABEL_20;
    v12 = OverwriteAssetSoundName->fields.table;
    if ( !v12 )
      goto LABEL_20;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetCommonData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             &v12->fields.kvpPlayCommonTable,
                                                             v12->fields.playCommonTable,
                                                             UniqueKey,
                                                             &data,
                                                             v11);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.CommonSeKind;
LABEL_20:
      sub_B2C434(OverwriteAssetSoundName, v7);
    }
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall OverwriteAssetSoundName__FindKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v9; // x1
  System_String_o *UniqueKey; // x20
  const MethodInfo *v11; // x5
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v3 = kind;
  if ( (byte_41851F7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_41851F7 = 1;
  }
  data = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
  if ( !OverwriteAssetSoundName )
    goto LABEL_20;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(table, 0LL, 0LL) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v9);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !OverwriteAssetSoundName )
      goto LABEL_20;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundName->fields.table;
    if ( !OverwriteAssetSoundName )
      goto LABEL_20;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetSystemData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o **)&OverwriteAssetSoundName[2].monitor,
                                                             (OverwriteAssetSoundNameTable_SoundSystemAssetData_array *)OverwriteAssetSoundName[1].monitor,
                                                             UniqueKey,
                                                             &data,
                                                             v11);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_20:
      sub_B2C434(OverwriteAssetSoundName, v7);
    }
  }
  return v3;
}


System_String_o *__fastcall OverwriteAssetSoundName__FindSoundName(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool isPlay,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  __int64 v7; // x1
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *table; // x22
  const MethodInfo *v11; // x1
  System_String_o *UniqueKey; // x21
  const MethodInfo *v13; // x5
  OverwriteAssetSoundNameTable_SoundAssetData_array *klass; // x2
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **p_isLoading; // x1
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v5 = name;
  if ( (byte_41851F6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_41851F6 = 1;
  }
  data = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
  if ( !OverwriteAssetSoundName )
    goto LABEL_30;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(table, 0LL, 0LL) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v11);
    if ( isPlay )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !OverwriteAssetSoundName )
        goto LABEL_30;
      OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundName->fields.table;
      if ( !OverwriteAssetSoundName )
        goto LABEL_30;
      klass = *(OverwriteAssetSoundNameTable_SoundAssetData_array **)&OverwriteAssetSoundName->fields.isLoading;
      p_isLoading = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **)&OverwriteAssetSoundName[1].fields.isLoading;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !OverwriteAssetSoundName )
        goto LABEL_30;
      OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundName->fields.table;
      if ( !OverwriteAssetSoundName )
        goto LABEL_30;
      klass = (OverwriteAssetSoundNameTable_SoundAssetData_array *)OverwriteAssetSoundName[1].klass;
      p_isLoading = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **)&OverwriteAssetSoundName[2];
    }
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             p_isLoading,
                                                             klass,
                                                             UniqueKey,
                                                             &data,
                                                             v13);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( !data )
        goto LABEL_30;
      OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)System_String__IsNullOrEmpty(data->fields.SoundName, 0LL);
      if ( ((unsigned __int8)OverwriteAssetSoundName & 1) == 0 )
      {
        if ( data )
          return data->fields.SoundName;
LABEL_30:
        sub_B2C434(OverwriteAssetSoundName, v9);
      }
    }
  }
  return v5;
}


System_String_o *__fastcall OverwriteAssetSoundName__GetUniqueKey(
        System_Reflection_MethodBase_o *callMethod,
        const MethodInfo *method)
{
  System_Reflection_MethodBase_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  System_Type_o *v5; // x20
  bool v6; // w0
  System_Reflection_MethodBase_c *klass; // x8
  System_String_o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v11; // x0

  v2 = callMethod;
  if ( (byte_41851F9 & 1) == 0 )
  {
    sub_B2C35C(&System_Type_TypeInfo, method);
    sub_B2C35C(&StringLiteral_803/*"."*/, v3);
    callMethod = (System_Reflection_MethodBase_o *)sub_B2C35C(&StringLiteral_15011/*"Unknown."*/, v4);
    byte_41851F9 = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  v5 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v2->klass->vtable._10_unknown.method)(
                          v2,
                          v2->klass->vtable._11_GetCustomAttributes.methodPtr);
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6 = System_Type__op_Inequality(v5, 0LL, 0LL);
  klass = v2->klass;
  if ( v6 )
  {
    callMethod = (System_Reflection_MethodBase_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._10_unknown.method)(
                                                     v2,
                                                     klass->vtable._11_GetCustomAttributes.methodPtr);
    if ( callMethod )
    {
      v8 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))callMethod->klass->vtable._8_unknown.method)(
                                callMethod,
                                callMethod->klass->vtable._9_unknown.methodPtr);
      v9 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v2->klass->vtable._8_unknown.method)(
                                v2,
                                v2->klass->vtable._9_unknown.methodPtr);
      return System_String__Concat_44307816(v8, (System_String_o *)StringLiteral_803/*"."*/, v9, 0LL);
    }
LABEL_11:
    sub_B2C434(callMethod, method);
  }
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._8_unknown.method)(
                             v2,
                             klass->vtable._9_unknown.methodPtr);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_15011/*"Unknown."*/, v11, 0LL);
}


void __fastcall OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_41851F0 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_B2C35C(&Method_OverwriteAssetSoundName__Initialize_b__4_0__, v4);
    sub_B2C35C(&StringLiteral_13298/*"System/OverwriteAssetSoundNameTable"*/, v5);
    byte_41851F0 = 1;
  }
  this->fields.isLoading = 1;
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13298/*"System/OverwriteAssetSoundNameTable"*/, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t CommonKindName; // w19

  if ( (byte_41851F4 & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, *(_QWORD *)&kind);
    byte_41851F4 = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, method);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(CommonKindName, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *SoundName; // x19

  if ( (byte_41851F1 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, name);
    byte_41851F1 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v3);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  return SoundManager__playSe(SoundName, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeLoop(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeInTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *SoundName; // x19

  if ( (byte_41851F5 & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, name);
    byte_41851F5 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v5);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(SoundName, volume, fadeInTime, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlaySystemSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t KindName; // w19

  if ( (byte_41851F3 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_41851F3 = 1;
  }
  KindName = OverwriteAssetSoundName__FindKindName(callMethod, kind, method);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(KindName, 0LL);
}


void __fastcall OverwriteAssetSoundName__StopSe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_String_o *SoundName; // x19

  if ( (byte_41851F2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, name);
    byte_41851F2 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe_24811580(SoundName, fadeoutTime, 0LL);
}


void __fastcall OverwriteAssetSoundName___Initialize_b__4_0(
        OverwriteAssetSoundName_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  UnityEngine_Texture2D_o *Object_Texture2D; // x0

  if ( (byte_41851FA & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___, assetData);
    byte_41851FA = 1;
  }
  if ( assetData )
  {
    Object_Texture2D = AssetData__GetObject_Texture2D_(
                         assetData,
                         (const MethodInfo_1720240 *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)Object_Texture2D;
    sub_B2C2F8(&this->fields, Object_Texture2D);
  }
  this->fields.isLoading = 0;
}


bool __fastcall OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}