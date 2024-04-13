void __fastcall OverwriteAssetSoundName___ctor(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall OverwriteAssetSoundName__FindCommonKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v12; // x1
  System_String_o *UniqueKey; // x20
  const MethodInfo *v14; // x5
  struct OverwriteAssetSoundNameTable_o *v15; // x8
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v4 = kind;
  if ( (byte_42E637F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    byte_42E637F = 1;
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
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v12);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    OverwriteAssetSoundName = SoundManager__get_OverwriteAssetSoundName(0LL);
    if ( !OverwriteAssetSoundName )
      goto LABEL_20;
    v15 = OverwriteAssetSoundName->fields.table;
    if ( !v15 )
      goto LABEL_20;
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetCommonData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             &v15->fields.kvpPlayCommonTable,
                                                             v15->fields.playCommonTable,
                                                             UniqueKey,
                                                             &data,
                                                             v14);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.CommonSeKind;
LABEL_20:
      sub_B5D69C(OverwriteAssetSoundName, v10);
    }
  }
  return v4;
}


int32_t __fastcall OverwriteAssetSoundName__FindKindName(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *table; // x21
  const MethodInfo *v12; // x1
  System_String_o *UniqueKey; // x20
  const MethodInfo *v14; // x5
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v4 = kind;
  if ( (byte_42E637E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    byte_42E637E = 1;
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
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v12);
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
                                                             v14);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_20:
      sub_B5D69C(OverwriteAssetSoundName, v10);
    }
  }
  return v4;
}


System_String_o *__fastcall OverwriteAssetSoundName__FindSoundName(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool isPlay,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  OverwriteAssetSoundName_o *OverwriteAssetSoundName; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *table; // x22
  const MethodInfo *v13; // x1
  System_String_o *UniqueKey; // x21
  const MethodInfo *v15; // x5
  OverwriteAssetSoundNameTable_SoundAssetData_array *klass; // x2
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **p_isLoading; // x1
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v5 = name;
  if ( (byte_42E637D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)name, isPlay, method);
    sub_B5D5C4(&SoundManager_TypeInfo, v7, v8, v9);
    byte_42E637D = 1;
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
    UniqueKey = OverwriteAssetSoundName__GetUniqueKey(callMethod, v13);
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
                                                             v15);
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
        sub_B5D69C(OverwriteAssetSoundName, v11);
      }
    }
  }
  return v5;
}


System_String_o *__fastcall OverwriteAssetSoundName__GetUniqueKey(
        System_Reflection_MethodBase_o *callMethod,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Reflection_MethodBase_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Type_o *v11; // x20
  bool v12; // w0
  System_Reflection_MethodBase_c *klass; // x8
  System_String_o *v14; // x20
  System_String_o *v15; // x2
  System_String_o *v17; // x0

  v4 = callMethod;
  if ( (byte_42E6380 & 1) == 0 )
  {
    sub_B5D5C4(&System_Type_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_813/*"."*/, v5, v6, v7);
    callMethod = (System_Reflection_MethodBase_o *)sub_B5D5C4(&StringLiteral_15169/*"Unknown."*/, v8, v9, v10);
    byte_42E6380 = 1;
  }
  if ( !v4 )
    goto LABEL_11;
  v11 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v4->klass->vtable._10_unknown.method)(
                           v4,
                           v4->klass->vtable._11_GetCustomAttributes.methodPtr);
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v12 = System_Type__op_Inequality(v11, 0LL, 0LL);
  klass = v4->klass;
  if ( v12 )
  {
    callMethod = (System_Reflection_MethodBase_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._10_unknown.method)(
                                                     v4,
                                                     klass->vtable._11_GetCustomAttributes.methodPtr);
    if ( callMethod )
    {
      v14 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))callMethod->klass->vtable._8_unknown.method)(
                                 callMethod,
                                 callMethod->klass->vtable._9_unknown.methodPtr);
      v15 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))v4->klass->vtable._8_unknown.method)(
                                 v4,
                                 v4->klass->vtable._9_unknown.methodPtr);
      return System_String__Concat_44580072(v14, (System_String_o *)StringLiteral_813/*"."*/, v15, 0LL);
    }
LABEL_11:
    sub_B5D69C(callMethod, method);
  }
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._8_unknown.method)(
                             v4,
                             klass->vtable._9_unknown.methodPtr);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_15169/*"Unknown."*/, v17, 0LL);
}


void __fastcall OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_42E6377 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_OverwriteAssetSoundName__Initialize_b__4_0__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_13454/*"System/OverwriteAssetSoundNameTable"*/, v11, v12, v13);
    byte_42E6377 = 1;
  }
  this->fields.isLoading = 1;
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13454/*"System/OverwriteAssetSoundNameTable"*/, v14, 1, 0LL);
}


void __fastcall OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t CommonKindName; // w19

  if ( (byte_42E637B & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, kind, (_DWORD)method, v3);
    byte_42E637B = 1;
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

  if ( (byte_42E6378 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42E6378 = 1;
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

  if ( (byte_42E637C & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)name, (_DWORD)method, v5);
    byte_42E637C = 1;
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
  __int64 v3; // x3
  int32_t KindName; // w19

  if ( (byte_42E637A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, kind, (_DWORD)method, v3);
    byte_42E637A = 1;
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

  if ( (byte_42E6379 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)name, (_DWORD)method, v4);
    byte_42E6379 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe_23416064(SoundName, fadeoutTime, 0LL);
}


void __fastcall OverwriteAssetSoundName___Initialize_b__4_0(
        OverwriteAssetSoundName_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E6381 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___, (_DWORD)assetData, (_DWORD)method, v3);
    byte_42E6381 = 1;
  }
  if ( assetData )
  {
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)AssetData__GetObject_Texture2D_(
                                                                    assetData,
                                                                    (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    sub_B5D560(&this->fields);
  }
  this->fields.isLoading = 0;
}


bool __fastcall OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}