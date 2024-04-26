void __fastcall ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4353516 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
    byte_4353516 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    100,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


int32_t __fastcall ConstantMaster__GetFlagTransformSvtRestrict(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4353525 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9447/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/);
    byte_4353525 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9447/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
}


float __fastcall ConstantMaster__GetRateValue(
        ConstantMaster_o *this,
        System_String_o *name,
        float def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v8; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435351A & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
    byte_435351A = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1CA3A78 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      sub_B7076C(EntityFromId_ServantVoiceEntity, v8);
    return (float)result->fields.type / 1000.0;
  }
  return def;
}


int32_t __fastcall ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v6; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4353518 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
    byte_4353518 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1CA3A78 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( !EntityFromId_ServantVoiceEntity )
    return -1;
  if ( !result )
    sub_B7076C(EntityFromId_ServantVoiceEntity, v6);
  return result->fields.type;
}


int32_t __fastcall ConstantMaster__GetValue_28086212(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v8; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4353519 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
    byte_4353519 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1CA3A78 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      sub_B7076C(EntityFromId_ServantVoiceEntity, v8);
    return result->fields.type;
  }
  return def;
}


bool __fastcall ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4353521 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4682/*"DISABLE_SERVANT_EFFECT_FILTER"*/);
    byte_4353521 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_4682/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220101(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_435351C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6447/*"FLAG_20220101"*/);
    byte_435351C = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6447/*"FLAG_20220101"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220119(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_435351D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6448/*"FLAG_20220119"*/);
    byte_435351D = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6448/*"FLAG_20220119"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220511(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_435351E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6449/*"FLAG_20220511"*/);
    byte_435351E = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6449/*"FLAG_20220511"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220730(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4353520 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6450/*"FLAG_20220730"*/);
    byte_4353520 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6450/*"FLAG_20220730"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20230402(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4353522 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6451/*"FLAG_20230402"*/);
    byte_4353522 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6451/*"FLAG_20230402"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlag20211217(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_435351B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6446/*"FLAG_20211217"*/);
    byte_435351B = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6446/*"FLAG_20211217"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlagTransformSvtRestrict(const MethodInfo *method)
{
  return ConstantMaster__GetFlagTransformSvtRestrict(method) > 0;
}


bool __fastcall ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4353524 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9448/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/);
    byte_4353524 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9448/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4353523 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9463/*"NOT_USE_RESTRICTION_DIALOG"*/);
    byte_4353523 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9463/*"NOT_USE_RESTRICTION_DIALOG"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int32_t Value; // w0
  uint64_t v3; // x19
  uint64_t v4; // x20
  uint64_t v6; // [xsp+0h] [xbp-20h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x1.8

  if ( (byte_435351F & 1) == 0 )
  {
    sub_B70694(&System_DateTime_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_8540/*"LOGIN_DAY"*/);
    byte_435351F = 1;
  }
  v6 = 0LL;
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8540/*"LOGIN_DAY"*/, v1);
  v6 = NetworkManager__getServerDateTime_25948096(Value, 0LL).fields.dateData;
  v8.fields.dateData = (uint64_t)&dateData;
  v3 = System_DateTime__get_Date(v8, 0LL).fields.dateData;
  v9.fields.dateData = (uint64_t)&v6;
  v4 = System_DateTime__get_Date(v9, 0LL).fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v10.fields.dateData = v3;
  v11.fields.dateData = v4;
  return System_DateTime__op_Equality(v10, v11, 0LL);
}


float __fastcall ConstantMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantMaster__getValue(name, method) / 1000.0;
}


int32_t __fastcall ConstantMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4353517 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B70694(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353517 = 1;
  }
  result = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                (DataMasterBase_o *)Instance,
                                &result,
                                name,
                                (const MethodInfo_1CA3A78 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return result->fields.type;
LABEL_10:
    sub_B7076C(Instance, v4);
  }
  return -1;
}