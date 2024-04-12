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

  if ( (byte_42ADBE8 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADBE8 = 1;
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
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v8);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !OverwriteAssetSoundName )
      goto LABEL_20;
    v11 = OverwriteAssetSoundName->fields.table;
    if ( !v11 )
      goto LABEL_20;
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
LABEL_20:
      sub_B52A5C(OverwriteAssetSoundName, v6);
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

  if ( (byte_42ADBE7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADBE7 = 1;
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
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v8);
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
                                                             v10);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_20:
      sub_B52A5C(OverwriteAssetSoundName, v6);
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
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ADBE6 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADBE6 = 1;
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
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v10);
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
                                                             v12);
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
        sub_B52A5C(OverwriteAssetSoundName, v8);
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
  if ( (byte_42ADBE9 & 1) == 0 )
  {
    sub_B52984(&System_Type_TypeInfo);
    sub_B52984(&StringLiteral_814/*"."*/);
    callMethod = (System_Reflection_MethodBase_o *)sub_B52984(&StringLiteral_15110/*"Unknown."*/);
    byte_42ADBE9 = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  v3 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v2->klass->vtable._10_unknown.method)(
                          v2,
                          v2->klass->vtable._11_GetCustomAttributes.methodPtr);
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4 = System_Type__op_Inequality(v3, 0LL, 0LL);
  klass = v2->klass;
  if ( v4 )
  {
    callMethod = (System_Reflection_MethodBase_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._10_unknown.method)(
                                                     v2,
                                                     klass->vtable._11_GetCustomAttributes.methodPtr);
    if ( callMethod )
    {
      v6 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))callMethod->klass->vtable._8_unknown.method)(
                                callMethod,
                                callMethod->klass->vtable._9_unknown.methodPtr);
      v7 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v2->klass->vtable._8_unknown.method)(
                                v2,
                                v2->klass->vtable._9_unknown.methodPtr);
      return System_String__Concat_44570600(v6, (System_String_o *)StringLiteral_814/*"."*/, v7, 0LL);
    }
LABEL_11:
    sub_B52A5C(callMethod, method);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._8_unknown.method)(
                            v2,
                            klass->vtable._9_unknown.methodPtr);
  return System_String__Concat_44568316((System_String_o *)StringLiteral_15110/*"Unknown."*/, v9, 0LL);
}


void __fastcall OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_42ADBE0 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_OverwriteAssetSoundName__Initialize_b__4_0__);
    sub_B52984(&StringLiteral_13395/*"System/OverwriteAssetSoundNameTable"*/);
    byte_42ADBE0 = 1;
  }
  this->fields.isLoading = 1;
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13395/*"System/OverwriteAssetSoundNameTable"*/, v3, 1, 0LL);
}


void __fastcall OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t CommonKindName; // w19

  if ( (byte_42ADBE4 & 1) == 0 )
  {
    sub_B52984(&SeManager_TypeInfo);
    byte_42ADBE4 = 1;
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

  if ( (byte_42ADBE1 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADBE1 = 1;
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

  if ( (byte_42ADBE5 & 1) == 0 )
  {
    sub_B52984(&SeManager_TypeInfo);
    byte_42ADBE5 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, v5);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(SoundName, volume, fadeInTime, 0LL);
}


void __fastcall OverwriteAssetSoundName__PlaySystemSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t KindName; // w19

  if ( (byte_42ADBE3 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADBE3 = 1;
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

  if ( (byte_42ADBE2 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADBE2 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe_23812872(SoundName, fadeoutTime, 0LL);
}


void __fastcall OverwriteAssetSoundName___Initialize_b__4_0(
        OverwriteAssetSoundName_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  if ( (byte_42ADBEA & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    byte_42ADBEA = 1;
  }
  if ( assetData )
  {
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)AssetData__GetObject_Texture2D_(
                                                                    assetData,
                                                                    (const MethodInfo_1A3B800 *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    sub_B52920(&this->fields);
  }
  this->fields.isLoading = 0;
}


bool __fastcall OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}