void __fastcall ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41895E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__, method);
    byte_41895E6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    99,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
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

  if ( (byte_41895EA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_41895EA = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1733EC4 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      sub_B2C434(EntityFromId_ServantVoiceEntity, v8);
    return (float)result->fields.type / 1000.0;
  }
  return def;
}


int32_t __fastcall ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v6; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41895E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_41895E8 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1733EC4 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( !EntityFromId_ServantVoiceEntity )
    return -1;
  if ( !result )
    sub_B2C434(EntityFromId_ServantVoiceEntity, v6);
  return result->fields.type;
}


int32_t __fastcall ConstantMaster__GetValue_28238692(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v8; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41895E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_41895E9 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1733EC4 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      sub_B2C434(EntityFromId_ServantVoiceEntity, v8);
    return result->fields.type;
  }
  return def;
}


bool __fastcall ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_41895F1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4598/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1);
    byte_41895F1 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_4598/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220101(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_41895EC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6355/*"FLAG_20220101"*/, v1);
    byte_41895EC = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6355/*"FLAG_20220101"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220119(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_41895ED & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6356/*"FLAG_20220119"*/, v1);
    byte_41895ED = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6356/*"FLAG_20220119"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220511(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_41895EE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6357/*"FLAG_20220511"*/, v1);
    byte_41895EE = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6357/*"FLAG_20220511"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220730(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_41895F0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6358/*"FLAG_20220730"*/, v1);
    byte_41895F0 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6358/*"FLAG_20220730"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20230402(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_41895F2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6359/*"FLAG_20230402"*/, v1);
    byte_41895F2 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6359/*"FLAG_20230402"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlag20211217(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_41895EB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6354/*"FLAG_20211217"*/, v1);
    byte_41895EB = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6354/*"FLAG_20211217"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_41895F3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9351/*"NOT_USE_RESTRICTION_DIALOG"*/, v1);
    byte_41895F3 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9351/*"NOT_USE_RESTRICTION_DIALOG"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  int32_t Value; // w0
  uint64_t v6; // x19
  uint64_t v7; // x20
  uint64_t v9; // [xsp+0h] [xbp-20h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x1.8

  if ( (byte_41895EF & 1) == 0 )
  {
    sub_B2C35C(&System_DateTime_TypeInfo, v1);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_8441/*"LOGIN_DAY"*/, v3);
    byte_41895EF = 1;
  }
  v9 = 0LL;
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8441/*"LOGIN_DAY"*/, v4);
  v9 = NetworkManager__getServerDateTime_26271756(Value, 0LL).fields.dateData;
  v11.fields.dateData = (uint64_t)&dateData;
  v6 = System_DateTime__get_Date(v11, 0LL).fields.dateData;
  v12.fields.dateData = (uint64_t)&v9;
  v7 = System_DateTime__get_Date(v12, 0LL).fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v13.fields.dateData = v6;
  v14.fields.dateData = v7;
  return System_DateTime__op_Equality(v13, v14, 0LL);
}


float __fastcall ConstantMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantMaster__getValue(name, method) / 1000.0;
}


int32_t __fastcall ConstantMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41895E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_41895E7 = 1;
  }
  result = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                (DataMasterBase_o *)Instance,
                                &result,
                                name,
                                (const MethodInfo_1733EC4 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return result->fields.type;
LABEL_10:
    sub_B2C434(Instance, v6);
  }
  return -1;
}