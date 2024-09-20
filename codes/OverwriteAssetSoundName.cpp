void __fastcall OverwriteAssetSoundName___ctor(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall OverwriteAssetSoundName__FindCommonKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v8; // x1
  System_String_o *UniqueKey; // x20
  const MethodInfo *v10; // x5
  struct OverwriteAssetSoundNameTable_o *v11; // x8
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A9EC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5A9EC = 1;
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
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v8);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !OverwriteAssetSoundName )
      goto LABEL_17;
    v11 = OverwriteAssetSoundName->fields.table;
    if ( !v11 )
      goto LABEL_17;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetCommonData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             &v11->fields.kvpPlayCommonTable,
                                                             v11->fields.playCommonTable,
                                                             UniqueKey,
                                                             &data,
                                                             v10);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.CommonSeKind;
LABEL_17:
      sub_1B8880C(OverwriteAssetSoundName, v6);
    }
  }
  return kind;
}


int32_t __fastcall OverwriteAssetSoundName__FindKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v8; // x1
  System_String_o *UniqueKey; // x20
  const MethodInfo *v10; // x5
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A9EB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5A9EB = 1;
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
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v8);
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
                                                             v10);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_17:
      sub_1B8880C(OverwriteAssetSoundName, v6);
    }
  }
  return kind;
}


System_String_o *__fastcall OverwriteAssetSoundName__FindSoundName(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool isPlay,
        const MethodInfo *method)
{
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *table; // x22
  const MethodInfo *v10; // x1
  System_String_o *UniqueKey; // x21
  const MethodInfo *v12; // x5
  OverwriteAssetSoundNameTable_SoundAssetData_array *klass; // x2
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **p_isLoading; // x1
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A9EA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5A9EA = 1;
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
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v10);
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
                                                             v12);
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
        sub_1B8880C(OverwriteAssetSoundName, v8);
      }
    }
  }
  return name;
}


System_String_o *__fastcall OverwriteAssetSoundName__GetUniqueKey(
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
  if ( (byte_4A5A9ED & 1) == 0 )
  {
    sub_1B885B0(&System_Type_TypeInfo);
    sub_1B885B0(&StringLiteral_1047/*"."*/);
    callMethod = (System_Reflection_MethodBase_o *)sub_1B885B0(&StringLiteral_15123/*"Unknown."*/);
    byte_4A5A9ED = 1;
  }
  if ( !v2 )
    goto LABEL_10;
  v3 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v2->klass->vtable._10_unknown.method)(
                          v2,
                          v2->klass->vtable._11_get_Module.methodPtr);
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4 = System_Type__op_Inequality(v3, 0LL, 0LL);
  klass = v2->klass;
  if ( v4 )
  {
    callMethod = (System_Reflection_MethodBase_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._10_unknown.method)(
                                                     v2,
                                                     klass->vtable._11_get_Module.methodPtr);
    if ( callMethod )
    {
      v6 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))callMethod->klass->vtable._8_unknown.method)(
                                callMethod,
                                callMethod->klass->vtable._9_unknown.methodPtr);
      v7 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v2->klass->vtable._8_unknown.method)(
                                v2,
                                v2->klass->vtable._9_unknown.methodPtr);
      return System_String__Concat_61718292(v6, (System_String_o *)StringLiteral_1047/*"."*/, v7, 0LL);
    }
LABEL_10:
    sub_1B8880C(callMethod, method);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._8_unknown.method)(
                            v2,
                            klass->vtable._9_unknown.methodPtr);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_15123/*"Unknown."*/, v9, 0LL);
}


void __fastcall OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4A5A9DE & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_OverwriteAssetSoundName__Initialize_b__4_0__);
    sub_1B885B0(&StringLiteral_13227/*"System/OverwriteAssetSoundNameTable"*/);
    byte_4A5A9DE = 1;
  }
  this->fields.isLoading = 1;
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13227/*"System/OverwriteAssetSoundNameTable"*/, v3, 1, 0LL);
}


void __fastcall OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t CommonKindName; // w19

  if ( (byte_4A5A9E8 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9E8 = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(CommonKindName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlayCommonSe_38531988(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        const MethodInfo *method)
{
  int32_t CommonKindName; // w20

  if ( (byte_4A5A9E9 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9E9 = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, *(const MethodInfo **)&waitFrameCount);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe_38673564(CommonKindName, delayTime, waitFrameCount, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *SoundName; // x0
  SeManager_c *v7; // x8
  System_String_o *v8; // x19

  if ( (byte_4A5A9DF & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9DF = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v3);
  v7 = SeManager_TypeInfo;
  v8 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v7 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v8, v7->static_fields->DEFAULT_VOLUME, 0.0, 0LL, 0, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeContinue(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *SoundName; // x0
  SeManager_c *v7; // x8
  System_String_o *v8; // x19

  if ( (byte_4A5A9E0 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9E0 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v3);
  v7 = SeManager_TypeInfo;
  v8 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v7 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v8, v7->static_fields->DEFAULT_VOLUME, 0.0, 0LL, 1, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeContinue_38530404(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  SeManager_c *v8; // x8
  System_String_o *v9; // x20

  if ( (byte_4A5A9E1 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9E1 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, method);
  v8 = SeManager_TypeInfo;
  v9 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v8 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_38676340(v9, objectName, v8->static_fields->DEFAULT_VOLUME, 0.0, 0LL, 1, 0LL);
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

  if ( (byte_4A5A9E5 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9E5 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v5);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(SoundName, volume, fadeInTime, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_38530560(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  System_String_o *SoundName; // x19

  if ( (byte_4A5A9E2 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9E2 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v5);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, fadeinTime, 0LL, 0, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_38530716(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x20

  if ( (byte_4A5A9E3 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9E3 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, 0.0, callbackFunc, 0, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_38530872(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x21

  if ( (byte_4A5A9E4 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9E4 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)callbackFunc);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_38676340(SoundName, objectName, volume, 0.0, callbackFunc, 0, 0LL);
}


void __fastcall OverwriteAssetSoundName__PlaySystemSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t KindName; // w19

  if ( (byte_4A5A9E7 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9E7 = 1;
  }
  KindName = OverwriteAssetSoundName__FindKindName(callMethod, kind, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(KindName, 0LL);
}


void __fastcall OverwriteAssetSoundName__StopSe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_String_o *SoundName; // x19

  if ( (byte_4A5A9E6 & 1) == 0 )
  {
    sub_1B885B0(&SeManager_TypeInfo);
    byte_4A5A9E6 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSe_38678536(SoundName, fadeoutTime, 0LL);
}


void __fastcall OverwriteAssetSoundName___Initialize_b__4_0(
        OverwriteAssetSoundName_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5A9EE & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    byte_4A5A9EE = 1;
  }
  if ( assetData )
  {
    Object_object = AssetData__GetObject_object_(
                      assetData,
                      (const MethodInfo_2E61D74 *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)Object_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)Object_object, v6, v7);
  }
  this->fields.isLoading = 0;
}


bool __fastcall OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}