void __fastcall ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA735 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA735 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    100,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


float __fastcall ConstantMaster__GetRateValue(
        ConstantMaster_o *this,
        System_String_o *name,
        float def,
        const MethodInfo *method)
{
  __int64 v4; // x3
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v9; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EA739 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, (_DWORD)name, (_DWORD)method, v4);
    byte_42EA739 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1AE4724 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      sub_B5D69C(EntityFromId_ServantVoiceEntity, v9);
    return (float)result->fields.type / 1000.0;
  }
  return def;
}


int32_t __fastcall ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v7; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA737 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, (_DWORD)name, (_DWORD)method, v3);
    byte_42EA737 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1AE4724 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( !EntityFromId_ServantVoiceEntity )
    return -1;
  if ( !result )
    sub_B5D69C(EntityFromId_ServantVoiceEntity, v7);
  return result->fields.type;
}


int32_t __fastcall ConstantMaster__GetValue_28723684(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  int32_t v4; // w19
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v8; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-28h] BYREF

  v4 = def;
  if ( (byte_42EA738 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, (_DWORD)name, def, method);
    byte_42EA738 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1AE4724 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      sub_B5D69C(EntityFromId_ServantVoiceEntity, v8);
    return result->fields.type;
  }
  return v4;
}


bool __fastcall ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA740 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4672/*"DISABLE_SERVANT_EFFECT_FILTER"*/, (_DWORD)v1, v2, v3);
    byte_42EA740 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_4672/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220101(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA73B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6434/*"FLAG_20220101"*/, (_DWORD)v1, v2, v3);
    byte_42EA73B = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6434/*"FLAG_20220101"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220119(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA73C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6435/*"FLAG_20220119"*/, (_DWORD)v1, v2, v3);
    byte_42EA73C = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6435/*"FLAG_20220119"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220511(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA73D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6436/*"FLAG_20220511"*/, (_DWORD)v1, v2, v3);
    byte_42EA73D = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6436/*"FLAG_20220511"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220730(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA73F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6437/*"FLAG_20220730"*/, (_DWORD)v1, v2, v3);
    byte_42EA73F = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6437/*"FLAG_20220730"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20230402(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA741 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6438/*"FLAG_20230402"*/, (_DWORD)v1, v2, v3);
    byte_42EA741 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6438/*"FLAG_20230402"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlag20211217(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA73A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6433/*"FLAG_20211217"*/, (_DWORD)v1, v2, v3);
    byte_42EA73A = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6433/*"FLAG_20211217"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA743 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9432/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, (_DWORD)v1, v2, v3);
    byte_42EA743 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9432/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA742 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9447/*"NOT_USE_RESTRICTION_DIALOG"*/, (_DWORD)v1, v2, v3);
    byte_42EA742 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9447/*"NOT_USE_RESTRICTION_DIALOG"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x1
  int32_t Value; // w0
  uint64_t v12; // x19
  uint64_t v13; // x20
  uint64_t v15; // [xsp+0h] [xbp-20h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x1.8

  if ( (byte_42EA73E & 1) == 0 )
  {
    sub_B5D5C4(&System_DateTime_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_8525/*"LOGIN_DAY"*/, v7, v8, v9);
    byte_42EA73E = 1;
  }
  v15 = 0LL;
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8525/*"LOGIN_DAY"*/, v10);
  v15 = NetworkManager__getServerDateTime_26077756(Value, 0LL).fields.dateData;
  v17.fields.dateData = (uint64_t)&dateData;
  v12 = System_DateTime__get_Date(v17, 0LL).fields.dateData;
  v18.fields.dateData = (uint64_t)&v15;
  v13 = System_DateTime__get_Date(v18, 0LL).fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v19.fields.dateData = v12;
  v20.fields.dateData = v13;
  return System_DateTime__op_Equality(v19, v20, 0LL);
}


float __fastcall ConstantMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantMaster__getValue(name, method) / 1000.0;
}


int32_t __fastcall ConstantMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA736 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA736 = 1;
  }
  result = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                (DataMasterBase_o *)Instance,
                                &result,
                                name,
                                (const MethodInfo_1AE4724 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return result->fields.type;
LABEL_10:
    sub_B5D69C(Instance, v12);
  }
  return -1;
}