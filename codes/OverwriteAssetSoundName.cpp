void OverwriteAssetSoundName___ctor(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t OverwriteAssetSoundName__FindCommonKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  intptr_t OverwriteAssetSoundName; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  const MethodInfo *v8; // x1
  System_String_o *UniqueKey; // x20
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB5B5C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5B5C = 1;
  }
  data = 0;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName(0);
  if ( !OverwriteAssetSoundName )
    goto LABEL_17;
  v7 = *(UnityEngine_Object_o **)(OverwriteAssetSoundName + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v8);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName(0);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    OverwriteAssetSoundName = *(_QWORD *)(OverwriteAssetSoundName + 16);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    OverwriteAssetSoundName = OverwriteAssetSoundNameTable__TryGetPlayCommonData(
                                (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                UniqueKey,
                                &data,
                                0);
    if ( (OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.CommonSeKind;
LABEL_17:
      sub_1C6BC60(OverwriteAssetSoundName, v6);
    }
  }
  return kind;
}


int32_t OverwriteAssetSoundName__FindKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  intptr_t OverwriteAssetSoundName; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  const MethodInfo *v8; // x1
  System_String_o *UniqueKey; // x20
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB5B5B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5B5B = 1;
  }
  data = 0;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName(0);
  if ( !OverwriteAssetSoundName )
    goto LABEL_17;
  v7 = *(UnityEngine_Object_o **)(OverwriteAssetSoundName + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v8);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName(0);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    OverwriteAssetSoundName = *(_QWORD *)(OverwriteAssetSoundName + 16);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    OverwriteAssetSoundName = OverwriteAssetSoundNameTable__TryGetPlaySystemData(
                                (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                UniqueKey,
                                &data,
                                0);
    if ( (OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_17:
      sub_1C6BC60(OverwriteAssetSoundName, v6);
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
  intptr_t OverwriteAssetSoundName; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  const MethodInfo *v10; // x1
  System_String_o *UniqueKey; // x21
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB5B5A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5B5A = 1;
  }
  data = 0;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName(0);
  if ( !OverwriteAssetSoundName )
    goto LABEL_22;
  v9 = *(UnityEngine_Object_o **)(OverwriteAssetSoundName + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v10);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    OverwriteAssetSoundName = (intptr_t)SoundManager__get_OverwriteAssetSoundName(0);
    if ( OverwriteAssetSoundName )
    {
      OverwriteAssetSoundName = *(_QWORD *)(OverwriteAssetSoundName + 16);
      if ( OverwriteAssetSoundName )
      {
        if ( isPlay )
        {
          OverwriteAssetSoundName = OverwriteAssetSoundNameTable__TryGetPlayData(
                                      (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                      UniqueKey,
                                      &data,
                                      0);
          if ( (OverwriteAssetSoundName & 1) == 0 )
            return name;
        }
        else
        {
          OverwriteAssetSoundName = OverwriteAssetSoundNameTable__TryGetStopData(
                                      (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                      UniqueKey,
                                      &data,
                                      0);
          if ( (OverwriteAssetSoundName & 1) == 0 )
            return name;
        }
        if ( data )
        {
          OverwriteAssetSoundName = System_String__IsNullOrEmpty(data->fields.SoundName, 0);
          if ( (OverwriteAssetSoundName & 1) != 0 )
            return name;
          if ( data )
            return data->fields.SoundName;
        }
      }
    }
LABEL_22:
    sub_1C6BC60(OverwriteAssetSoundName, v8);
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
  if ( (byte_4CB5B5D & 1) == 0 )
  {
    sub_1C6BA08(&System_Type_TypeInfo);
    sub_1C6BA08(&StringLiteral_981/*"."*/);
    callMethod = (System_Reflection_MethodBase_o *)sub_1C6BA08(&StringLiteral_15123/*"Unknown."*/);
    byte_4CB5B5D = 1;
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
      return System_String__Concat_64005056(v6, (System_String_o *)StringLiteral_981/*"."*/, v7, 0);
    }
LABEL_10:
    sub_1C6BC60(callMethod, method);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, const MethodInfo *))klass->vtable._8_unknown.methodPtr)(
                            v2,
                            klass->vtable._8_unknown.method);
  return System_String__Concat_63966792((System_String_o *)StringLiteral_15123/*"Unknown."*/, v9, 0);
}


void OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4CB5B4C & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_OverwriteAssetSoundName__Initialize_b__4_0__);
    sub_1C6BA08(&StringLiteral_13315/*"System/OverwriteAssetSoundNameTable"*/);
    byte_4CB5B4C = 1;
  }
  this->fields.isLoading = 1;
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13315/*"System/OverwriteAssetSoundNameTable"*/, v3, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t CommonKindName; // w20

  if ( (byte_4CB5B58 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B58 = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(CommonKindName, ignorePreDelay, 0);
}


// local variable allocation has failed, the output may be wrong!
void OverwriteAssetSoundName__PlayCommonSe_41654760(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t CommonKindName; // w21

  if ( (byte_4CB5B59 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B59 = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, *(const MethodInfo **)&waitFrameCount);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe_41722512(CommonKindName, delayTime, waitFrameCount, ignorePreDelay, 0);
}


SePlayer_o *OverwriteAssetSoundName__PlaySe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  SeManager_c *v8; // x8
  System_String_o *v9; // x20

  if ( (byte_4CB5B4D & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B4D = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  v8 = SeManager_TypeInfo;
  v9 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v8 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v9, v8->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, ignorePreDelay, 0);
}


SePlayer_o *OverwriteAssetSoundName__PlaySeContinue(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  SeManager_c *v8; // x8
  System_String_o *v9; // x20

  if ( (byte_4CB5B4E & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B4E = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  v8 = SeManager_TypeInfo;
  v9 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v8 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v9, v8->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, ignorePreDelay, 0);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySeContinue_41652776(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  SeManager_c *v10; // x8
  System_String_o *v11; // x21

  if ( (byte_4CB5B4F & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B4F = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)ignorePreDelay);
  v10 = SeManager_TypeInfo;
  v11 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v10 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_41725336(v11, objectName, v10->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, ignorePreDelay, 0);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySeContinue_41652948(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  SeManager_c *v10; // x8
  System_String_o *v11; // x21

  if ( (byte_4CB5B50 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B50 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  v10 = SeManager_TypeInfo;
  v11 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v10 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v11, v10->static_fields->DEFAULT_VOLUME, 0.0, callbackFunc, 1, ignorePreDelay, 0);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySeContinue_41653116(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x21

  if ( (byte_4CB5B51 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B51 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, fadeinTime, callbackFunc, 1, ignorePreDelay, 0);
}


SePlayer_o *OverwriteAssetSoundName__PlaySeLoop(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeInTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x20

  if ( (byte_4CB5B55 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B55 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(SoundName, volume, fadeInTime, ignorePreDelay, 0);
}


SePlayer_o *OverwriteAssetSoundName__PlaySe_41653292(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x20

  if ( (byte_4CB5B52 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B52 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, fadeinTime, 0, 0, ignorePreDelay, 0);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *OverwriteAssetSoundName__PlaySe_41653456(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x21

  if ( (byte_4CB5B53 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B53 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, 0.0, callbackFunc, 0, ignorePreDelay, 0);
}


SePlayer_o *OverwriteAssetSoundName__PlaySe_41653628(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x22

  if ( (byte_4CB5B54 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B54 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)callbackFunc);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_41725336(SoundName, objectName, volume, 0.0, callbackFunc, 0, ignorePreDelay, 0);
}


// local variable allocation has failed, the output may be wrong!
void OverwriteAssetSoundName__PlaySystemSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t KindName; // w20

  if ( (byte_4CB5B57 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B57 = 1;
  }
  KindName = OverwriteAssetSoundName__FindKindName(callMethod, kind, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(KindName, ignorePreDelay, 0);
}


void OverwriteAssetSoundName__StopSe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_String_o *SoundName; // x19

  if ( (byte_4CB5B56 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5B56 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSe_41727664(SoundName, fadeoutTime, 0);
}


void OverwriteAssetSoundName___Initialize_b__4_0(
        OverwriteAssetSoundName_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB5B5E & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    byte_4CB5B5E = 1;
  }
  if ( assetData )
  {
    Object_object = AssetData__GetObject_object_(
                      assetData,
                      (const MethodInfo_311C2F8 *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)Object_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)Object_object, v6, v7);
  }
  this->fields.isLoading = 0;
}


bool OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}