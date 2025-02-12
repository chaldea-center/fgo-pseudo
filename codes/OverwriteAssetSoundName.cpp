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
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v3 = kind;
  if ( (byte_4BB3FF2 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&SoundManager_TypeInfo, v5);
    byte_4BB3FF2 = 1;
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
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetPlayCommonData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             UniqueKey,
                                                             &data,
                                                             0LL);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.CommonSeKind;
LABEL_17:
      sub_1C13F80(OverwriteAssetSoundName, v7);
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
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *data; // [xsp+8h] [xbp-28h] BYREF

  v3 = kind;
  if ( (byte_4BB3FF1 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&SoundManager_TypeInfo, v5);
    byte_4BB3FF1 = 1;
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
    OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetPlaySystemData(
                                                             (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                             UniqueKey,
                                                             &data,
                                                             0LL);
    if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
    {
      if ( data )
        return data->fields.SeKind;
LABEL_17:
      sub_1C13F80(OverwriteAssetSoundName, v7);
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
  OverwriteAssetSoundNameTable_SoundAssetData_o *data; // [xsp+8h] [xbp-38h] BYREF

  v5 = name;
  if ( (byte_4BB3FF0 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, name);
    sub_1C13D24(&SoundManager_TypeInfo, v7);
    byte_4BB3FF0 = 1;
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
    if ( OverwriteAssetSoundName )
    {
      OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundName->fields.table;
      if ( OverwriteAssetSoundName )
      {
        if ( isPlay )
        {
          OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetPlayData(
                                                                   (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                                   UniqueKey,
                                                                   &data,
                                                                   0LL);
          if ( ((unsigned __int8)OverwriteAssetSoundName & 1) == 0 )
            return v5;
        }
        else
        {
          OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)OverwriteAssetSoundNameTable__TryGetStopData(
                                                                   (OverwriteAssetSoundNameTable_o *)OverwriteAssetSoundName,
                                                                   UniqueKey,
                                                                   &data,
                                                                   0LL);
          if ( ((unsigned __int8)OverwriteAssetSoundName & 1) == 0 )
            return v5;
        }
        if ( data )
        {
          OverwriteAssetSoundName = (OverwriteAssetSoundName_o *)System_String__IsNullOrEmpty(
                                                                   data->fields.SoundName,
                                                                   0LL);
          if ( ((unsigned __int8)OverwriteAssetSoundName & 1) != 0 )
            return v5;
          if ( data )
            return data->fields.SoundName;
        }
      }
    }
LABEL_22:
    sub_1C13F80(OverwriteAssetSoundName, v9);
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
  if ( (byte_4BB3FF3 & 1) == 0 )
  {
    sub_1C13D24(&System_Type_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1046/*"."*/, v3);
    callMethod = (System_Reflection_MethodBase_o *)sub_1C13D24(&StringLiteral_15363/*"Unknown member type"*/, v4);
    byte_4BB3FF3 = 1;
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
      return System_String__Concat_62979204(v8, (System_String_o *)StringLiteral_1046/*"."*/, v9, 0LL);
    }
LABEL_10:
    sub_1C13F80(callMethod, method);
  }
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodBase_o *, Il2CppMethodPointer))klass->vtable._8_unknown.method)(
                             v2,
                             klass->vtable._9_unknown.methodPtr);
  return System_String__Concat_62967944((System_String_o *)StringLiteral_15363/*"Unknown member type"*/, v11, 0LL);
}


void __fastcall OverwriteAssetSoundName__Initialize(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4BB3FE4 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_1C13D24(&Method_OverwriteAssetSoundName__Initialize_b__4_0__, v4);
    sub_1C13D24(&StringLiteral_13459/*"System.Security.Cryptography.X509Certificates.X509Chain, System"*/, v5);
    byte_4BB3FE4 = 1;
  }
  this->fields.isLoading = 1;
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_OverwriteAssetSoundName__Initialize_b__4_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13459/*"System.Security.Cryptography.X509Certificates.X509Chain, System"*/, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlayCommonSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t CommonKindName; // w20

  if ( (byte_4BB3FEE & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, *(_QWORD *)&kind);
    byte_4BB3FEE = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(CommonKindName, ignorePreDelay, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlayCommonSe_39760340(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t CommonKindName; // w21

  if ( (byte_4BB3FEF & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, *(_QWORD *)&kind);
    byte_4BB3FEF = 1;
  }
  CommonKindName = OverwriteAssetSoundName__FindCommonKindName(callMethod, kind, *(const MethodInfo **)&waitFrameCount);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe_39827444(CommonKindName, delayTime, waitFrameCount, ignorePreDelay, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  SeManager_c *v8; // x8
  System_String_o *v9; // x20

  if ( (byte_4BB3FE5 & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, name);
    byte_4BB3FE5 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  v8 = SeManager_TypeInfo;
  v9 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v8 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v9, v8->static_fields->DEFAULT_VOLUME, 0.0, 0LL, 0, ignorePreDelay, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeContinue(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  SeManager_c *v8; // x8
  System_String_o *v9; // x20

  if ( (byte_4BB3FE6 & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, name);
    byte_4BB3FE6 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  v8 = SeManager_TypeInfo;
  v9 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v8 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(v9, v8->static_fields->DEFAULT_VOLUME, 0.0, 0LL, 1, ignorePreDelay, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeContinue_39758700(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x0
  SeManager_c *v10; // x8
  System_String_o *v11; // x21

  if ( (byte_4BB3FE7 & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, assetName);
    byte_4BB3FE7 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)ignorePreDelay);
  v10 = SeManager_TypeInfo;
  v11 = SoundName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v10 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_39830268(
           v11,
           objectName,
           v10->static_fields->DEFAULT_VOLUME,
           0.0,
           0LL,
           1,
           ignorePreDelay,
           0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySeLoop(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeInTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x20

  if ( (byte_4BB3FEB & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, name);
    byte_4BB3FEB = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(SoundName, volume, fadeInTime, ignorePreDelay, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_39758872(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x20

  if ( (byte_4BB3FE8 & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, name);
    byte_4BB3FE8 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, method);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, fadeinTime, 0LL, 0, ignorePreDelay, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_39759036(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x21

  if ( (byte_4BB3FE9 & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, name);
    byte_4BB3FE9 = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 1, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(SoundName, volume, 0.0, callbackFunc, 0, ignorePreDelay, 0LL);
}


SePlayer_o *__fastcall OverwriteAssetSoundName__PlaySe_39759208(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *SoundName; // x22

  if ( (byte_4BB3FEA & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, assetName);
    byte_4BB3FEA = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, assetName, 1, (const MethodInfo *)callbackFunc);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_39830268(SoundName, objectName, volume, 0.0, callbackFunc, 0, ignorePreDelay, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteAssetSoundName__PlaySystemSe(
        System_Reflection_MethodBase_o *callMethod,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t KindName; // w20

  if ( (byte_4BB3FED & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, *(_QWORD *)&kind);
    byte_4BB3FED = 1;
  }
  KindName = OverwriteAssetSoundName__FindKindName(callMethod, kind, (const MethodInfo *)ignorePreDelay);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(KindName, ignorePreDelay, 0LL);
}


void __fastcall OverwriteAssetSoundName__StopSe(
        System_Reflection_MethodBase_o *callMethod,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_String_o *SoundName; // x19

  if ( (byte_4BB3FEC & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, name);
    byte_4BB3FEC = 1;
  }
  SoundName = OverwriteAssetSoundName__FindSoundName(callMethod, name, 0, v4);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSe_39832596(SoundName, fadeoutTime, 0LL);
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

  if ( (byte_4BB3FF4 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_OverwriteAssetSoundNameTable___, assetData);
    byte_4BB3FF4 = 1;
  }
  if ( assetData )
  {
    Object_object = AssetData__GetObject_object_(
                      assetData,
                      (const MethodInfo_2F71428 *)Method_AssetData_GetObject_OverwriteAssetSoundNameTable___);
    this->fields.table = (struct OverwriteAssetSoundNameTable_o *)Object_object;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)Object_object, v6, v7, v8, v9, v10, v11);
  }
  this->fields.isLoading = 0;
}


bool __fastcall OverwriteAssetSoundName__get_IsLoading(OverwriteAssetSoundName_o *this, const MethodInfo *method)
{
  return this->fields.isLoading;
}