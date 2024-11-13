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
  __int64 v6; // x2
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  System_String_o *UniqueKey; // x20
  const MethodInfo *v13; // x5
  struct OverwriteAssetSoundNameTable_o *v14; // x8
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v3 = kind;
  if ( (byte_4B15B13 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&SoundManager_TypeInfo, v5, v6);
    byte_4B15B13 = 1;
  }
  data = 0LL;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&kind);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
  if ( !OverwriteAssetSoundName )
    goto LABEL_17;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Equality(table, 0LL, 0LL) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v10);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v11);
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    v14 = OverwriteAssetSoundName->fields.table;
    if ( !v14 )
      goto LABEL_17;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetCommonData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             &v14->fields.kvpPlayCommonTable,
                                                             v14->fields.playCommonTable,
                                                             UniqueKey,
                                                             &data,
                                                             v13);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.CommonSeKind;
LABEL_17:
      sub_1BCAA3C(OverwriteAssetSoundName, v8);
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
  __int64 v6; // x2
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  System_String_o *UniqueKey; // x20
  const MethodInfo *v13; // x5
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v3 = kind;
  if ( (byte_4B15B12 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&SoundManager_TypeInfo, v5, v6);
    byte_4B15B12 = 1;
  }
  data = 0LL;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&kind);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
  if ( !OverwriteAssetSoundName )
    goto LABEL_17;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Equality(table, 0LL, 0LL) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v10);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v11);
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundName->fields.table;
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetSystemData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o **)&OverwriteAssetSoundName[2].monitor,
                                                             (OverwriteAssetSoundNameTable_SoundSystemAssetData_array *)OverwriteAssetSoundName[1].monitor,
                                                             UniqueKey,
                                                             &data,
                                                             v13);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_17:
      sub_1BCAA3C(OverwriteAssetSoundName, v8);
    }
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall OverwriteAssetSoundName__FindSoundName(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool isPlay,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *table; // x22
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  System_String_o *UniqueKey; // x21
  const MethodInfo *v15; // x5
  OverwriteAssetSoundNameTable_SoundAssetData_array *klass; // x2
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **p_isLoading; // x1
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-38h] BYREF

  v5 = name;
  if ( (byte_4B15B11 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, isPlay);
    sub_1BCA7E0(&SoundManager_TypeInfo, v7, v8);
    byte_4B15B11 = 1;
  }
  data = 0LL;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, name);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
  if ( !OverwriteAssetSoundName )
    goto LABEL_22;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Equality(table, 0LL, 0LL) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v12);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v13);
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !OverwriteAssetSoundName )
      goto LABEL_22;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundName->fields.table;
    if ( !OverwriteAssetSoundName )
      goto LABEL_22;
    if ( isPlay )
    {
      klass = *(OverwriteAssetSoundNameTable_SoundAssetData_array **)&OverwriteAssetSoundName->fields.isLoading;
      p_isLoading = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **)&OverwriteAssetSoundName[1].fields.isLoading;
    }
    else
    {
      klass = (OverwriteAssetSoundNameTable_SoundAssetData_array *)OverwriteAssetSoundName[1].klass;
      p_isLoading = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **)&OverwriteAssetSoundName[2];
    }
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             p_isLoading,
                                                             klass,
                                                             UniqueKey,
                                                             &data,
                                                             v15);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( !data )
        goto LABEL_22;
      OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)System_String__IsNullOrEmpty(data->fields.SoundName, 0LL);
      if ( ((unsigned __int8)OverwriteAssetSoundName & 1) == 0 )
      {
        if ( data )
          return data->fields.SoundName;
LABEL_22:
        sub_1BCAA3C(OverwriteAssetSoundName, v10);
      }
    }
  }
  return v5;
}


System_String_o *__fastcall OverwriteAssetSoundName__GetUniqueKey(
        System_Reflection_MethodBase_o *callMethod,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Reflection_MethodBase_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  System_Type_o *v9; // x20
  bool v10; // w0
  System_Reflection_MethodBase_c *klass; // x8
  System_String_o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v15; // x0

  v3 = callMethod;
  if ( (byte_4B15B14 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Type_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1043/*"."*/, v4, v5);
    callMethod = (System_Reflection_MethodBase_o *)sub_1BCA7E0(&StringLiteral_15289/*"Unknown."*/, v6, v7);
    byte_4B15B14 = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  v9 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v3->klass->vtable._10_unknown.method)(
                          v3,
                          v3->klass->vtable._11_get_Module.methodPtr);
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v8);
  v10 = System_Type__op_Inequality(v9, 0LL, 0LL);
  klass = v3->klass;
  if ( v10 )
  {
    callMethod = (System_Reflection_MethodBase_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._10_unknown.method)(
                                                     v3,
                                                     klass->vtable._11_get_Module.methodPtr);
    if ( callMethod )
    {
      v12 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))callMethod->klass->vtable._8_unknown.method)(
                                 callMethod,
                                 callMethod->klass->vtable._9_unknown.methodPtr);
      v13 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v3->klass->vtable._8_unknown.method)(
                                 v3,
                                 v3->klass->vtable._9_unknown.methodPtr);
      return System_String__Concat_62412480(v12, (System_String_o *)StringLiteral_1043/*"."*/, v13, 0LL);
    }
LABEL_10:
    sub_1BCAA3C(callMethod, method);
  }
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._8_unknown.method)(
                             v3,
                             klass->vtable._9_unknown.methodPtr);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_15289/*"Unknown."*/, v15, 0LL);
}


void __fastcall OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssetLoader_LoadEndDataHandler_o *v11; // x20
  __int64 v12; // x1

  if ( (byte_4B15B05 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_OverwriteAssetSoundName__Initialize_b__4_0__, v7, v8);
    sub_1BCA7E0(&StringLiteral_13389/*"System/OverwriteAssetSoundNameTable"*/, v9, v10);
    byte_4B15B05 = 1;
  }
  this->fields.isLoading = 1;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13389/*"System/OverwriteAssetSoundNameTable"*/, v11, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t CommonKindName; // w19

  if ( (byte_4B15B0F & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, *(_QWORD *)&kind, method);
    byte_4B15B0F = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v5);
  SeManager__PlayCommonSe(CommonKindName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlayCommonSe_39323312(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t CommonKindName; // w20

  if ( (byte_4B15B10 & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&waitFrameCount);
    byte_4B15B10 = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, *(const MethodInfo **)&waitFrameCount);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v9);
  SeManager__PlayCommonSe_39390016(CommonKindName, delayTime, waitFrameCount, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *SoundName; // x0
  __int64 v7; // x1
  SeManager_c *v8; // x8
  System_String_o *v9; // x19

  if ( (byte_4B15B06 & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, name, method);
    byte_4B15B06 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v3);
  v8 = SeManager_TypeInfo;
  v9 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v7);
    v8 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v9, v8->static_fields->DEFAULT_VOLUME, 0.0, 0LL, 0, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeContinue(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *SoundName; // x0
  __int64 v7; // x1
  SeManager_c *v8; // x8
  System_String_o *v9; // x19

  if ( (byte_4B15B07 & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, name, method);
    byte_4B15B07 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v3);
  v8 = SeManager_TypeInfo;
  v9 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v7);
    v8 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v9, v8->static_fields->DEFAULT_VOLUME, 0.0, 0LL, 1, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeContinue_39321728(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  __int64 v8; // x1
  SeManager_c *v9; // x8
  System_String_o *v10; // x20

  if ( (byte_4B15B08 & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, assetName, objectName);
    byte_4B15B08 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, method);
  v9 = SeManager_TypeInfo;
  v10 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v8);
    v9 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_39392792(v10, objectName, v9->static_fields->DEFAULT_VOLUME, 0.0, 0LL, 1, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeLoop(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeInTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  __int64 v10; // x1
  System_String_o *SoundName; // x19

  if ( (byte_4B15B0C & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, name, method);
    byte_4B15B0C = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v5);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v10);
  return SeManager__PlaySeLoop(SoundName, volume, fadeInTime, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_39321884(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  __int64 v10; // x1
  System_String_o *SoundName; // x19

  if ( (byte_4B15B09 & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, name, method);
    byte_4B15B09 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v5);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v10);
  return SeManager__PlaySe(SoundName, volume, fadeinTime, 0LL, 0, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_39322040(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *SoundName; // x20

  if ( (byte_4B15B0A & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, name, callbackFunc);
    byte_4B15B0A = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v9);
  return SeManager__PlaySe(SoundName, volume, 0.0, callbackFunc, 0, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_39322196(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_String_o *SoundName; // x21

  if ( (byte_4B15B0B & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, assetName, objectName);
    byte_4B15B0B = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)callbackFunc);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v11);
  return SeManager__PlaySe_39392792(SoundName, objectName, volume, 0.0, callbackFunc, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlaySystemSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t KindName; // w19

  if ( (byte_4B15B0E & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, *(_QWORD *)&kind, method);
    byte_4B15B0E = 1;
  }
  KindName = OverwriteAssetSoundName__FindKindName(callMethod, kind, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v5);
  SeManager__PlaySystemSe(KindName, 0LL);
}


void __fastcall OverwriteAssetSoundName__StopSe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  __int64 v8; // x1
  System_String_o *SoundName; // x19

  if ( (byte_4B15B0D & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, name, method);
    byte_4B15B0D = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v8);
  SeManager__StopSe_39394988(SoundName, fadeoutTime, 0LL);
}


void __fastcall OverwriteAssetSoundName___Initialize_b__4_0(
        OverwriteAssetSoundName_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15B15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___, assetData, method);
    byte_4B15B15 = 1;
  }
  if ( assetData )
  {
    Object_object = AssetData__GetObject_object_(
                      assetData,
                      (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)Object_object;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)Object_object, v6, v7, v8, v9, v10, v11);
  }
  this->fields.isLoading = 0;
}


bool __fastcall OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}