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
  if ( (byte_4B4436F & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&SoundManager_TypeInfo, v5);
    byte_4B4436F = 1;
  }
  data = 0LL;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
  if ( !OverwriteAssetSoundName )
    goto LABEL_17;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(table, 0LL, 0LL) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v9);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    v12 = OverwriteAssetSoundName->fields.table;
    if ( !v12 )
      goto LABEL_17;
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
LABEL_17:
      sub_1BDBAD4(OverwriteAssetSoundName, v7);
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
  if ( (byte_4B4436E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&SoundManager_TypeInfo, v5);
    byte_4B4436E = 1;
  }
  data = 0LL;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
  if ( !OverwriteAssetSoundName )
    goto LABEL_17;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(table, 0LL, 0LL) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v9);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
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
                                                             v11);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_17:
      sub_1BDBAD4(OverwriteAssetSoundName, v7);
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
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-38h] BYREF

  v5 = name;
  if ( (byte_4B4436D & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, name);
    sub_1BDB878(&SoundManager_TypeInfo, v7);
    byte_4B4436D = 1;
  }
  data = 0LL;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
  if ( !OverwriteAssetSoundName )
    goto LABEL_22;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(table, 0LL, 0LL) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v11);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
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
                                                             v13);
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
        sub_1BDBAD4(OverwriteAssetSoundName, v9);
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
  if ( (byte_4B44370 & 1) == 0 )
  {
    sub_1BDB878(&System_Type_TypeInfo, method);
    sub_1BDB878(&StringLiteral_994/*"."*/, v3);
    callMethod = (System_Reflection_MethodBase_o *)sub_1BDB878(&StringLiteral_15097/*"Unknown."*/, v4);
    byte_4B44370 = 1;
  }
  if ( !v2 )
    goto LABEL_10;
  v5 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v2->klass->vtable._10_unknown.method)(
                          v2,
                          v2->klass->vtable._11_get_Module.methodPtr);
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6 = System_Type__op_Inequality(v5, 0LL, 0LL);
  klass = v2->klass;
  if ( v6 )
  {
    callMethod = (System_Reflection_MethodBase_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._10_unknown.method)(
                                                     v2,
                                                     klass->vtable._11_get_Module.methodPtr);
    if ( callMethod )
    {
      v8 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))callMethod->klass->vtable._8_unknown.method)(
                                callMethod,
                                callMethod->klass->vtable._9_unknown.methodPtr);
      v9 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v2->klass->vtable._8_unknown.method)(
                                v2,
                                v2->klass->vtable._9_unknown.methodPtr);
      return System_String__Concat_62610508(v8, (System_String_o *)StringLiteral_994/*"."*/, v9, 0LL);
    }
LABEL_10:
    sub_1BDBAD4(callMethod, method);
  }
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._8_unknown.method)(
                             v2,
                             klass->vtable._9_unknown.methodPtr);
  return System_String__Concat_62572260((System_String_o *)StringLiteral_15097/*"Unknown."*/, v11, 0LL);
}


void __fastcall OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4B44361 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_1BDB878(&Method_OverwriteAssetSoundName__Initialize_b__4_0__, v4);
    sub_1BDB878(&StringLiteral_13285/*"System/OverwriteAssetSoundNameTable"*/, v5);
    byte_4B44361 = 1;
  }
  this->fields.isLoading = 1;
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13285/*"System/OverwriteAssetSoundNameTable"*/, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  int32_t CommonKindName; // w20

  if ( (byte_4B4436B & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, *(_QWORD *)&kind);
    byte_4B4436B = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(CommonKindName, ignorePreDelay, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlayCommonSe_40424992(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  int32_t CommonKindName; // w21

  if ( (byte_4B4436C & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, *(_QWORD *)&kind);
    byte_4B4436C = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, *(const MethodInfo **)&waitFrameCount);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe_40425148(CommonKindName, delayTime, waitFrameCount, ignorePreDelay, v11);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  const MethodInfo *v8; // x4
  SeManager_c *v9; // x8
  System_String_o *v10; // x20

  if ( (byte_4B44362 & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, name);
    byte_4B44362 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  v9 = SeManager_TypeInfo;
  v10 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v9 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v10, v9->static_fields->DEFAULT_VOLUME, 0.0, 0LL, 0, ignorePreDelay, v8);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeContinue(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  const MethodInfo *v8; // x4
  SeManager_c *v9; // x8
  System_String_o *v10; // x20

  if ( (byte_4B44363 & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, name);
    byte_4B44363 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  v9 = SeManager_TypeInfo;
  v10 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v9 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v10, v9->static_fields->DEFAULT_VOLUME, 0.0, 0LL, 1, ignorePreDelay, v8);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeContinue_40422352(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  const MethodInfo *v10; // x5
  SeManager_c *v11; // x8
  System_String_o *v12; // x21

  if ( (byte_4B44364 & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, assetName);
    byte_4B44364 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)ignorePreDelay);
  v11 = SeManager_TypeInfo;
  v12 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v11 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_40422520(
           v12,
           objectName,
           v11->static_fields->DEFAULT_VOLUME,
           0.0,
           0LL,
           1,
           ignorePreDelay,
           v10);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeLoop(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeInTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x2
  System_String_o *SoundName; // x20

  if ( (byte_4B44368 & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, name);
    byte_4B44368 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(SoundName, volume, fadeInTime, ignorePreDelay, v11);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_40422788(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x4
  System_String_o *SoundName; // x20

  if ( (byte_4B44365 & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, name);
    byte_4B44365 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, fadeinTime, 0LL, 0, ignorePreDelay, v11);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_40422948(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x4
  System_String_o *SoundName; // x21

  if ( (byte_4B44366 & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, name);
    byte_4B44366 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, 0.0, callbackFunc, 0, ignorePreDelay, v11);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_40423116(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x5
  System_String_o *SoundName; // x22

  if ( (byte_4B44367 & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, assetName);
    byte_4B44367 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)callbackFunc);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_40422520(SoundName, objectName, volume, 0.0, callbackFunc, 0, ignorePreDelay, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlaySystemSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  int32_t KindName; // w20

  if ( (byte_4B4436A & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, *(_QWORD *)&kind);
    byte_4B4436A = 1;
  }
  KindName = OverwriteAssetSoundName__FindKindName(callMethod, kind, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(KindName, ignorePreDelay, v7);
}


void __fastcall OverwriteAssetSoundName__StopSe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  const MethodInfo *v8; // x1
  System_String_o *SoundName; // x19

  if ( (byte_4B44369 & 1) == 0 )
  {
    sub_1BDB878(&SeManager_TypeInfo, name);
    byte_4B44369 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSe_40423812(SoundName, fadeoutTime, v8);
}


void __fastcall OverwriteAssetSoundName___Initialize_b__4_0(
        OverwriteAssetSoundName_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B44371 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___, assetData);
    byte_4B44371 = 1;
  }
  if ( assetData )
  {
    Object_object = AssetData__GetObject_object_(
                      assetData,
                      (const MethodInfo_3014DA8 *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)Object_object;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)Object_object, v6, v7);
  }
  this->fields.isLoading = 0;
}


bool __fastcall OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}