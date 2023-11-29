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
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v8; // x1
  System_String_o *UniqueKey; // x20
  OverwriteAssetSoundName_o *v10; // x0
  const MethodInfo *v11; // x5
  struct OverwriteAssetSoundNameTable_o *v12; // x8
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v3 = kind;
  if ( (byte_40F8013 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F8013 = 1;
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
    v10 = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !v10 )
      goto LABEL_20;
    v12 = v10->fields.table;
    if ( !v12 )
      goto LABEL_20;
    if ( OverwriteAssetSoundNameTable__TryGetCommonData(
           (OverwriteAssetSoundNameTable_o *)v10,
           &v12->fields.kvpPlayCommonTable,
           v12->fields.playCommonTable,
           UniqueKey,
           &data,
           v11) )
    {
      if ( data )
        return data->fields.CommonSeKind;
LABEL_20:
      sub_B170D4();
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
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v8; // x1
  System_String_o *UniqueKey; // x20
  OverwriteAssetSoundName_o *v10; // x0
  const MethodInfo *v11; // x5
  OverwriteAssetSoundNameTable_o *v12; // x0
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v3 = kind;
  if ( (byte_40F8012 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F8012 = 1;
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
    v10 = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !v10 )
      goto LABEL_20;
    v12 = v10->fields.table;
    if ( !v12 )
      goto LABEL_20;
    if ( OverwriteAssetSoundNameTable__TryGetSystemData(
           v12,
           &v12->fields.kvpPlaySystemTable,
           v12->fields.playSystemTable,
           UniqueKey,
           &data,
           v11) )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_20:
      sub_B170D4();
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
  UnityEngine_Object_o *table; // x22
  const MethodInfo *v10; // x1
  System_String_o *UniqueKey; // x21
  OverwriteAssetSoundName_o *v12; // x0
  const MethodInfo *v13; // x5
  OverwriteAssetSoundNameTable_o *v14; // x0
  OverwriteAssetSoundNameTable_SoundAssetData_array *playTable; // x2
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **p_kvpPlayTable; // x1
  OverwriteAssetSoundName_o *v17; // x0
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v5 = name;
  if ( (byte_40F8011 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40F8011 = 1;
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
      v12 = SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !v12 )
        goto LABEL_30;
      v14 = v12->fields.table;
      if ( !v14 )
        goto LABEL_30;
      playTable = v14->fields.playTable;
      p_kvpPlayTable = &v14->fields.kvpPlayTable;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v17 = SoundManager__get_OverwriteAssetSoundName(0LL);
      if ( !v17 )
        goto LABEL_30;
      v14 = v17->fields.table;
      if ( !v14 )
        goto LABEL_30;
      playTable = v14->fields.stopTable;
      p_kvpPlayTable = &v14->fields.kvpStopTable;
    }
    if ( OverwriteAssetSoundNameTable__TryGetData(v14, p_kvpPlayTable, playTable, UniqueKey, &data, v13) )
    {
      if ( !data )
        goto LABEL_30;
      if ( !System_String__IsNullOrEmpty(data->fields.SoundName, 0LL) )
      {
        if ( data )
          return data->fields.SoundName;
LABEL_30:
        sub_B170D4();
      }
    }
  }
  return v5;
}


System_String_o *__fastcall OverwriteAssetSoundName__GetUniqueKey(
        System_Reflection_MethodBase_o *callMethod,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Type_o *v5; // x20
  bool v6; // w0
  System_Reflection_MethodBase_c *klass; // x8
  __int64 v8; // x0
  System_String_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v12; // x0

  if ( (byte_40F8014 & 1) == 0 )
  {
    sub_B16FFC(&System_Type_TypeInfo, method);
    sub_B16FFC(&StringLiteral_802, v3);
    sub_B16FFC(&StringLiteral_14951, v4);
    byte_40F8014 = 1;
  }
  if ( !callMethod )
    goto LABEL_11;
  v5 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))callMethod->klass->vtable._10_unknown.method)(
                          callMethod,
                          callMethod->klass->vtable._11_GetCustomAttributes.methodPtr);
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6 = System_Type__op_Inequality(v5, 0LL, 0LL);
  klass = callMethod->klass;
  if ( v6 )
  {
    v8 = ((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._10_unknown.method)(
           callMethod,
           klass->vtable._11_GetCustomAttributes.methodPtr);
    if ( v8 )
    {
      v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 440LL))(
                                v8,
                                *(_QWORD *)(*(_QWORD *)v8 + 448LL));
      v10 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))callMethod->klass->vtable._8_unknown.method)(
                                 callMethod,
                                 callMethod->klass->vtable._9_unknown.methodPtr);
      return System_String__Concat_43746016(v9, (System_String_o *)StringLiteral_802, v10, 0LL);
    }
LABEL_11:
    sub_B170D4();
  }
  v12 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._8_unknown.method)(
                             callMethod,
                             klass->vtable._9_unknown.methodPtr);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_14951, v12, 0LL);
}


void __fastcall OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AssetLoader_LoadEndDataHandler_o *v9; // x20

  if ( (byte_40F800B & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B16FFC(&Method_OverwriteAssetSoundName__Initialize_b__4_0__, v7);
    sub_B16FFC(&StringLiteral_13242, v8);
    byte_40F800B = 1;
  }
  this->fields.isLoading = 1;
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3, v4);
  AssetLoader_LoadEndDataHandler___ctor(
    v9,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13242, v9, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t CommonKindName; // w19

  if ( (byte_40F800F & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, *(_QWORD *)&kind);
    byte_40F800F = 1;
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

  if ( (byte_40F800C & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, name);
    byte_40F800C = 1;
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

  if ( (byte_40F8010 & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, name);
    byte_40F8010 = 1;
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

  if ( (byte_40F800E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_40F800E = 1;
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

  if ( (byte_40F800D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, name);
    byte_40F800D = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe_24848784(SoundName, fadeoutTime, 0LL);
}


void __fastcall OverwriteAssetSoundName___Initialize_b__4_0(
        OverwriteAssetSoundName_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  UnityEngine_Texture2D_o *Object_Texture2D; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F8015 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___, assetData);
    byte_40F8015 = 1;
  }
  if ( assetData )
  {
    Object_Texture2D = AssetData__GetObject_Texture2D_(
                         assetData,
                         (const MethodInfo_18AFB5C *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)Object_Texture2D;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields,
      (System_Int32_array **)Object_Texture2D,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  this->fields.isLoading = 0;
}


bool __fastcall OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}