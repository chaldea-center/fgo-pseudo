void OverwriteAssetSoundName___ctor(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t OverwriteAssetSoundName__FindCommonKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  SoundManager_c *v5; // x0
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v9; // x1
  System_String_o *UniqueKey; // x0
  System_String_o *v11; // x20
  const MethodInfo *v12; // x5
  struct OverwriteAssetSoundNameTable_o *v13; // x8
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEDF56 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEDF56 = 1;
  }
  v5 = SoundManager_TypeInfo;
  data = 0;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)v5);
  if ( !OverwriteAssetSoundName )
    goto LABEL_17;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(table, 0, 0) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v9);
    v11 = UniqueKey;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)UniqueKey);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    v13 = OverwriteAssetSoundName->fields.table;
    if ( !v13 )
      goto LABEL_17;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetCommonData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             &v13->fields.kvpPlayCommonTable,
                                                             v13->fields.playCommonTable,
                                                             v11,
                                                             &data,
                                                             v12);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.CommonSeKind;
LABEL_17:
      sub_1C7BD40(OverwriteAssetSoundName, v7);
    }
  }
  return kind;
}


int32_t OverwriteAssetSoundName__FindKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  SoundManager_c *v5; // x0
  intptr_t OverwriteAssetSoundName; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x21
  const MethodInfo *v9; // x1
  System_String_o *UniqueKey; // x0
  System_String_o *v11; // x20
  const MethodInfo *v12; // x5
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEDF55 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEDF55 = 1;
  }
  v5 = SoundManager_TypeInfo;
  data = 0;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)v5);
  if ( !OverwriteAssetSoundName )
    goto LABEL_17;
  v8 = *(UnityEngine_Object_o **)(OverwriteAssetSoundName + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v9);
    v11 = UniqueKey;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)UniqueKey);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    OverwriteAssetSoundName = *(_QWORD *)(OverwriteAssetSoundName + 16);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    OverwriteAssetSoundName = OverwriteAssetSoundNameTable__TryGetSystemData(
                                (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o **)(OverwriteAssetSoundName + 72),
                                *(OverwriteAssetSoundNameTable_SoundSystemAssetData_array **)(OverwriteAssetSoundName
                                                                                            + 40),
                                v11,
                                &data,
                                v12);
    if ( (OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_17:
      sub_1C7BD40(OverwriteAssetSoundName, v7);
    }
  }
  return kind;
}


System_String_o *OverwriteAssetSoundName__FindSoundName(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool isPlay,
        const MethodInfo *method)
{
  SoundManager_c *v7; // x0
  intptr_t OverwriteAssetSoundName; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x22
  const MethodInfo *v11; // x1
  System_String_o *UniqueKey; // x0
  System_String_o *v13; // x21
  const MethodInfo *v14; // x5
  OverwriteAssetSoundNameTable_SoundAssetData_array *v15; // x2
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **v16; // x1
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEDF54 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEDF54 = 1;
  }
  v7 = SoundManager_TypeInfo;
  data = 0;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)v7);
  if ( !OverwriteAssetSoundName )
    goto LABEL_22;
  v10 = *(UnityEngine_Object_o **)(OverwriteAssetSoundName + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v11);
    v13 = UniqueKey;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)UniqueKey);
    if ( !OverwriteAssetSoundName )
      goto LABEL_22;
    OverwriteAssetSoundName = *(_QWORD *)(OverwriteAssetSoundName + 16);
    if ( !OverwriteAssetSoundName )
      goto LABEL_22;
    if ( isPlay )
    {
      v15 = *(OverwriteAssetSoundNameTable_SoundAssetData_array **)(OverwriteAssetSoundName + 24);
      v16 = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **)(OverwriteAssetSoundName + 56);
    }
    else
    {
      v15 = *(OverwriteAssetSoundNameTable_SoundAssetData_array **)(OverwriteAssetSoundName + 32);
      v16 = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **)(OverwriteAssetSoundName + 64);
    }
    OverwriteAssetSoundName = OverwriteAssetSoundNameTable__TryGetData(
                                (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                v16,
                                v15,
                                v13,
                                &data,
                                v14);
    if ( (OverwriteAssetSoundName & 1) != 0 )
    {
      if ( !data )
        goto LABEL_22;
      OverwriteAssetSoundName = System_String__IsNullOrEmpty(data->fields.SoundName, 0);
      if ( (OverwriteAssetSoundName & 1) == 0 )
      {
        if ( data )
          return data->fields.SoundName;
LABEL_22:
        sub_1C7BD40(OverwriteAssetSoundName, v9);
      }
    }
  }
  return name;
}


System_String_o *OverwriteAssetSoundName__GetUniqueKey(
        System_Reflection_MethodBase_o *callMethod,
        const MethodInfo *method)
{
  System_Reflection_MethodBase_o *v2; // x19
  System_Type_o *v3; // x20
  bool v4; // w0
  System_Reflection_MethodBase_c *klass; // x8
  System_String_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v9; // x0

  v2 = callMethod;
  if ( (byte_4CEDF57 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Type_TypeInfo);
    sub_1C7BAE8(&StringLiteral_982/*"."*/);
    callMethod = (System_Reflection_MethodBase_o *)sub_1C7BAE8(&StringLiteral_15184/*"Unknown."*/);
    byte_4CEDF57 = 1;
  }
  if ( !v2 )
    goto LABEL_10;
  v3 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))v2->klass->vtable._10_unknown.methodPtr)(
                          v2,
                          v2->klass->vtable._10_unknown.method);
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4 = System_Type__op_Inequality(v3, 0, 0);
  klass = v2->klass;
  if ( v4 )
  {
    callMethod = (System_Reflection_MethodBase_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))klass->vtable._10_unknown.methodPtr)(
                                                     v2,
                                                     klass->vtable._10_unknown.method);
    if ( callMethod )
    {
      v6 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))callMethod->klass->vtable._8_unknown.methodPtr)(
                                callMethod,
                                callMethod->klass->vtable._8_unknown.method);
      v7 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))v2->klass->vtable._8_unknown.methodPtr)(
                                v2,
                                v2->klass->vtable._8_unknown.method);
      return System_String__Concat_64215176(v6, (System_String_o *)StringLiteral_982/*"."*/, v7, 0);
    }
LABEL_10:
    sub_1C7BD40(callMethod, method);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))klass->vtable._8_unknown.methodPtr)(
                            v2,
                            klass->vtable._8_unknown.method);
  return System_String__Concat_64176912((System_String_o *)StringLiteral_15184/*"Unknown."*/, v9, 0);
}


void OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4CEDF45 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_OverwriteAssetSoundName__Initialize_b__4_0__);
    sub_1C7BAE8(&StringLiteral_13368/*"System/OverwriteAssetSoundNameTable"*/);
    byte_4CEDF45 = 1;
  }
  this->fields.isLoading = 1;
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13368/*"System/OverwriteAssetSoundNameTable"*/, v3, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  int32_t CommonKindName; // w20

  if ( (byte_4CEDF52 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF52 = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(CommonKindName, ignorePreDelay, v7);
}


// local variable allocation has failed, the output may be wrong!
void OverwriteAssetSoundName__PlayCommonSe_41999012(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  int32_t CommonKindName; // w21

  if ( (byte_4CEDF53 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF53 = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, *(const MethodInfo **)&waitFrameCount);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe_41999168(CommonKindName, delayTime, waitFrameCount, ignorePreDelay, v11);
}


SePlayer_o *OverwriteAssetSoundName__PlaySe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  const MethodInfo *v8; // x4
  SeManager_c *v9; // x8
  System_String_o *v10; // x20

  if ( (byte_4CEDF46 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF46 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  v9 = SeManager_TypeInfo;
  v10 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v9 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v10, v9->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, ignorePreDelay, v8);
}


SePlayer_o *OverwriteAssetSoundName__PlaySeContinue(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  const MethodInfo *v8; // x4
  SeManager_c *v9; // x8
  System_String_o *v10; // x20

  if ( (byte_4CEDF47 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF47 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  v9 = SeManager_TypeInfo;
  v10 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v9 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v10, v9->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, ignorePreDelay, v8);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySeContinue_41995876(
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

  if ( (byte_4CEDF48 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF48 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)ignorePreDelay);
  v11 = SeManager_TypeInfo;
  v12 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v11 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_41996044(v12, objectName, v11->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, ignorePreDelay, v10);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySeContinue_41996312(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  const MethodInfo *v10; // x4
  SeManager_c *v11; // x8
  System_String_o *v12; // x21

  if ( (byte_4CEDF49 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF49 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  v11 = SeManager_TypeInfo;
  v12 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v11 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v12, v11->static_fields->DEFAULT_VOLUME, 0.0, callbackFunc, 1, ignorePreDelay, v10);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySeContinue_41996476(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x4
  System_String_o *SoundName; // x21

  if ( (byte_4CEDF4A & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF4A = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, fadeinTime, callbackFunc, 1, ignorePreDelay, v13);
}


SePlayer_o *OverwriteAssetSoundName__PlaySeLoop(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeInTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x2
  System_String_o *SoundName; // x20

  if ( (byte_4CEDF4F & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF4F = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(SoundName, volume, fadeInTime, ignorePreDelay, v11);
}


SePlayer_o *OverwriteAssetSoundName__PlaySe_41996648(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x4
  System_String_o *SoundName; // x20

  if ( (byte_4CEDF4B & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF4B = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, fadeinTime, 0, 0, ignorePreDelay, v11);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySe_41996808(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x4
  System_String_o *SoundName; // x21

  if ( (byte_4CEDF4C & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF4C = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, 0.0, callbackFunc, 0, ignorePreDelay, v11);
}


SePlayer_o *OverwriteAssetSoundName__PlaySe_41996976(
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

  if ( (byte_4CEDF4D & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF4D = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)callbackFunc);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_41996044(SoundName, objectName, volume, 0.0, callbackFunc, 0, ignorePreDelay, v13);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySe_41997152(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x5
  System_String_o *SoundName; // x21

  if ( (byte_4CEDF4E & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF4E = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_41996044(SoundName, objectName, volume, fadeinTime, 0, 0, ignorePreDelay, v13);
}


// local variable allocation has failed, the output may be wrong!
void OverwriteAssetSoundName__PlaySystemSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  int32_t KindName; // w20

  if ( (byte_4CEDF51 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF51 = 1;
  }
  KindName = OverwriteAssetSoundName__FindKindName(callMethod, kind, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(KindName, ignorePreDelay, v7);
}


void OverwriteAssetSoundName__StopSe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  const MethodInfo *v8; // x1
  System_String_o *SoundName; // x19

  if ( (byte_4CEDF50 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEDF50 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSe_41997848(SoundName, fadeoutTime, v8);
}


void OverwriteAssetSoundName___Initialize_b__4_0(
        OverwriteAssetSoundName_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CEDF58 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    byte_4CEDF58 = 1;
  }
  if ( assetData )
  {
    Object_object = AssetData__GetObject_object_(
                      assetData,
                      (const MethodInfo_3151490 *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)Object_object;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)Object_object, v6, v7, v8, v9, v10, v11);
  }
  this->fields.isLoading = 0;
}


bool OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}