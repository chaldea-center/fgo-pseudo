void OverwriteAssetSoundName___ctor(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void OverwriteAssetSoundName__ChangeVolumeSeByChannel(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        int32_t channelId,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_String_o *SoundName; // x20

  if ( (byte_5970092 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970092 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, method);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v11);
  SeManager__ChangeVolumeSeByChannel(SoundName, channelId, volume, fadeTime, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t OverwriteAssetSoundName__FindCommonKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v3; // w19
  SoundManager_c *v5; // x0
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v9; // x1
  System_String_o *UniqueKey; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  const MethodInfo *v13; // x5
  struct OverwriteAssetSoundNameTable_o *v14; // x8
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v3 = kind;
  if ( (byte_597008D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_597008D = 1;
  }
  v5 = SoundManager_TypeInfo;
  data = 0;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&kind);
  OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)v5);
  if ( !OverwriteAssetSoundName )
    goto LABEL_17;
  table = (UnityEngine_Object_o *)OverwriteAssetSoundName->fields.table;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality(table, 0, 0) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v9);
    v12 = UniqueKey;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v11);
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)UniqueKey);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    v14 = OverwriteAssetSoundName->fields.table;
    if ( !v14 )
      goto LABEL_17;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetCommonData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             &v14->fields.kvpPlayCommonTable,
                                                             v14->fields.playCommonTable,
                                                             v12,
                                                             &data,
                                                             v13);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.CommonSeKind;
LABEL_17:
      sub_2213CDC(OverwriteAssetSoundName, v7);
    }
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t OverwriteAssetSoundName__FindKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v3; // w19
  SoundManager_c *v5; // x0
  intptr_t OverwriteAssetSoundName; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x21
  const MethodInfo *v9; // x1
  System_String_o *UniqueKey; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  const MethodInfo *v13; // x5
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v3 = kind;
  if ( (byte_597008C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_597008C = 1;
  }
  v5 = SoundManager_TypeInfo;
  data = 0;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&kind);
  OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)v5);
  if ( !OverwriteAssetSoundName )
    goto LABEL_17;
  v8 = *(UnityEngine_Object_o **)(OverwriteAssetSoundName + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v9);
    v12 = UniqueKey;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v11);
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
                                v12,
                                &data,
                                v13);
    if ( (OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_17:
      sub_2213CDC(OverwriteAssetSoundName, v7);
    }
  }
  return v3;
}


System_String_o *OverwriteAssetSoundName__FindSoundName(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool isPlay,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  SoundManager_c *v7; // x0
  intptr_t OverwriteAssetSoundName; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x22
  const MethodInfo *v11; // x1
  System_String_o *UniqueKey; // x0
  __int64 v13; // x1
  System_String_o *v14; // x21
  int v15; // w9
  const MethodInfo *v16; // x5
  OverwriteAssetSoundNameTable_SoundAssetData_array *v17; // x2
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **v18; // x1
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-38h] BYREF

  v5 = name;
  if ( (byte_597008B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_597008B = 1;
  }
  v7 = SoundManager_TypeInfo;
  data = 0;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, name);
  OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)v7);
  if ( !OverwriteAssetSoundName )
    goto LABEL_26;
  v10 = *(UnityEngine_Object_o **)(OverwriteAssetSoundName + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v11);
    v14 = UniqueKey;
    v15 = *(&SoundManager_TypeInfo->_2.cctor_finished + 1);
    if ( isPlay )
    {
      if ( !v15 )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v13);
      OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)UniqueKey);
      if ( !OverwriteAssetSoundName )
        goto LABEL_26;
      OverwriteAssetSoundName = *(_QWORD *)(OverwriteAssetSoundName + 16);
      if ( !OverwriteAssetSoundName )
        goto LABEL_26;
      v17 = *(OverwriteAssetSoundNameTable_SoundAssetData_array **)(OverwriteAssetSoundName + 24);
      v18 = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **)(OverwriteAssetSoundName + 56);
    }
    else
    {
      if ( !v15 )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v13);
      OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName((const MethodInfo *)UniqueKey);
      if ( !OverwriteAssetSoundName )
        goto LABEL_26;
      OverwriteAssetSoundName = *(_QWORD *)(OverwriteAssetSoundName + 16);
      if ( !OverwriteAssetSoundName )
        goto LABEL_26;
      v17 = *(OverwriteAssetSoundNameTable_SoundAssetData_array **)(OverwriteAssetSoundName + 32);
      v18 = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **)(OverwriteAssetSoundName + 64);
    }
    OverwriteAssetSoundName = OverwriteAssetSoundNameTable__TryGetData(
                                (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                v18,
                                v17,
                                v14,
                                &data,
                                v16);
    if ( (OverwriteAssetSoundName & 1) != 0 )
    {
      if ( !data )
        goto LABEL_26;
      OverwriteAssetSoundName = System_String__IsNullOrEmpty(data->fields.SoundName, 0);
      if ( (OverwriteAssetSoundName & 1) == 0 )
      {
        if ( data )
          return data->fields.SoundName;
LABEL_26:
        sub_2213CDC(OverwriteAssetSoundName, v9);
      }
    }
  }
  return v5;
}


System_String_o *OverwriteAssetSoundName__GetUniqueKey(
        System_Reflection_MethodBase_o *callMethod,
        const MethodInfo *method)
{
  System_Reflection_MethodBase_o *v2; // x19
  __int64 v3; // x1
  System_Type_o *v4; // x20
  bool v5; // w0
  System_Reflection_MethodBase_c *klass; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v10; // x0

  v2 = callMethod;
  if ( (byte_597008E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1063/*"."*/);
    callMethod = (System_Reflection_MethodBase_o *)sub_2213A60(&StringLiteral_15725/*"Unknown."*/);
    byte_597008E = 1;
  }
  if ( !v2 )
    goto LABEL_10;
  v4 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))v2->klass->vtable._10_unknown.methodPtr)(
                          v2,
                          v2->klass->vtable._10_unknown.method);
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v3);
  v5 = System_Type__op_Inequality(v4, 0, 0);
  klass = v2->klass;
  if ( v5 )
  {
    callMethod = (System_Reflection_MethodBase_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))klass->vtable._10_unknown.methodPtr)(
                                                     v2,
                                                     klass->vtable._10_unknown.method);
    if ( callMethod )
    {
      v7 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))callMethod->klass->vtable._8_unknown.methodPtr)(
                                callMethod,
                                callMethod->klass->vtable._8_unknown.method);
      v8 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))v2->klass->vtable._8_unknown.methodPtr)(
                                v2,
                                v2->klass->vtable._8_unknown.method);
      return System_String__Concat_75694928(v7, (System_String_o *)StringLiteral_1063/*"."*/, v8, 0);
    }
LABEL_10:
    sub_2213CDC(callMethod, method);
  }
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))klass->vtable._8_unknown.methodPtr)(
                             v2,
                             klass->vtable._8_unknown.method);
  return System_String__Concat_75651716((System_String_o *)StringLiteral_15725/*"Unknown."*/, v10, 0);
}


void OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_c *v3; // x0
  AssetLoader_LoadEndDataHandler_o *v4; // x20
  __int64 v5; // x1

  if ( (byte_597007C & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_OverwriteAssetSoundName__Initialize_b__4_0__);
    sub_2213A60(&StringLiteral_13867/*"System/OverwriteAssetSoundNameTable"*/);
    byte_597007C = 1;
  }
  v3 = AssetLoader_LoadEndDataHandler_TypeInfo;
  this->fields.isLoading = 1;
  v4 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(v3);
  AssetLoader_LoadEndDataHandler___ctor(
    v4,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13867/*"System/OverwriteAssetSoundNameTable"*/, v4, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void OverwriteAssetSoundName__PauseSeByChannel(
        System_Reflection_MethodBase_o *callMethod,
        bool isPause,
        System_String_o *name,
        int32_t channelId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *SoundName; // x21

  if ( (byte_5970091 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970091 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, *(const MethodInfo **)&channelId);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v9);
  SeManager__PauseSeByChannel(isPause, SoundName, channelId, v10);
}


// local variable allocation has failed, the output may be wrong!
void OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t CommonKindName; // w20

  if ( (byte_5970089 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970089 = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, (const MethodInfo *)ignorePreDelay);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v7);
  SeManager__PlayCommonSe(CommonKindName, ignorePreDelay, v8);
}


// local variable allocation has failed, the output may be wrong!
void OverwriteAssetSoundName__PlayCommonSe_48404524(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int32_t CommonKindName; // w21

  if ( (byte_597008A & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_597008A = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, *(const MethodInfo **)&waitFrameCount);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v11);
  SeManager__PlayCommonSe_48404680(CommonKindName, delayTime, waitFrameCount, ignorePreDelay, v12);
}


SePlayer_o *OverwriteAssetSoundName__PlaySe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  SeManager_c *v10; // x8
  System_String_o *v11; // x20

  if ( (byte_597007D & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_597007D = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  v10 = SeManager_TypeInfo;
  v11 = SoundName;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v8);
    v10 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v11, v10->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, ignorePreDelay, v9);
}


SePlayer_o *OverwriteAssetSoundName__PlaySeByChannel(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        int32_t channelId,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v17; // x1
  const MethodInfo *v18; // x5
  System_String_o *SoundName; // x23

  if ( (byte_597008F & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_597008F = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)callbackFunc);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v17);
  return SeManager__PlaySeByChannel(
           SoundName,
           channelId,
           volume,
           fadeinTime,
           callbackFunc,
           notOverwrite,
           ignorePreDelay,
           v18);
}


SePlayer_o *OverwriteAssetSoundName__PlaySeContinue(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  SeManager_c *v10; // x8
  System_String_o *v11; // x20

  if ( (byte_597007E & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_597007E = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  v10 = SeManager_TypeInfo;
  v11 = SoundName;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v8);
    v10 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v11, v10->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, ignorePreDelay, v9);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySeContinue_48401388(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  SeManager_c *v12; // x8
  System_String_o *v13; // x21

  if ( (byte_597007F & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_597007F = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)ignorePreDelay);
  v12 = SeManager_TypeInfo;
  v13 = SoundName;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v10);
    v12 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_48401556(v13, objectName, v12->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, ignorePreDelay, v11);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySeContinue_48401824(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  SeManager_c *v12; // x8
  System_String_o *v13; // x21

  if ( (byte_5970080 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970080 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  v12 = SeManager_TypeInfo;
  v13 = SoundName;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v10);
    v12 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v13, v12->static_fields->DEFAULT_VOLUME, 0.0, callbackFunc, 1, ignorePreDelay, v11);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySeContinue_48401988(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  System_String_o *SoundName; // x21

  if ( (byte_5970081 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970081 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v13);
  return SeManager__PlaySe(SoundName, volume, fadeinTime, callbackFunc, 1, ignorePreDelay, v14);
}


SePlayer_o *OverwriteAssetSoundName__PlaySeLoop(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeInTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_String_o *SoundName; // x20

  if ( (byte_5970086 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970086 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v11);
  return SeManager__PlaySeLoop(SoundName, volume, fadeInTime, ignorePreDelay, v12);
}


SePlayer_o *OverwriteAssetSoundName__PlaySe_48402160(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  System_String_o *SoundName; // x20

  if ( (byte_5970082 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970082 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v11);
  return SeManager__PlaySe(SoundName, volume, fadeinTime, 0, 0, ignorePreDelay, v12);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySe_48402320(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  System_String_o *SoundName; // x21

  if ( (byte_5970083 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970083 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v11);
  return SeManager__PlaySe(SoundName, volume, 0.0, callbackFunc, 0, ignorePreDelay, v12);
}


SePlayer_o *OverwriteAssetSoundName__PlaySe_48402488(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v13; // x1
  const MethodInfo *v14; // x5
  System_String_o *SoundName; // x22

  if ( (byte_5970084 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970084 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)callbackFunc);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v13);
  return SeManager__PlaySe_48401556(SoundName, objectName, volume, 0.0, callbackFunc, 0, ignorePreDelay, v14);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySe_48402664(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v13; // x1
  const MethodInfo *v14; // x5
  System_String_o *SoundName; // x21

  if ( (byte_5970085 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970085 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)ignorePreDelay);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v13);
  return SeManager__PlaySe_48401556(SoundName, objectName, volume, fadeinTime, 0, 0, ignorePreDelay, v14);
}


// local variable allocation has failed, the output may be wrong!
void OverwriteAssetSoundName__PlaySystemSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t KindName; // w20

  if ( (byte_5970088 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970088 = 1;
  }
  KindName = OverwriteAssetSoundName__FindKindName(callMethod, kind, (const MethodInfo *)ignorePreDelay);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v7);
  SeManager__PlaySystemSe(KindName, ignorePreDelay, v8);
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

  if ( (byte_5970087 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970087 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v8);
  SeManager__StopSe_48403360(SoundName, fadeoutTime, v8);
}


void OverwriteAssetSoundName__StopSeByChannel(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        int32_t channelId,
        float fadeoutTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_String_o *SoundName; // x20

  if ( (byte_5970090 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970090 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, method);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v9);
  SeManager__StopSeByChannel(SoundName, channelId, fadeoutTime, v10);
}


void OverwriteAssetSoundName___Initialize_b__4_0(
        OverwriteAssetSoundName_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5970093 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    byte_5970093 = 1;
  }
  if ( assetData )
  {
    Object_object = AssetData__GetObject_object_(
                      assetData,
                      (const MethodInfo_37D239C *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)Object_object;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)Object_object, v6, v7, v8, v9, v10, v11);
  }
  this->fields.isLoading = 0;
}


bool OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}