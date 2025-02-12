void __fastcall ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4514 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__, method);
    byte_4BB4514 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    105,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


int32_t __fastcall ConstantMaster__GetFlagTransformSvtRestrict(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4BB4520 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9457/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v1);
    byte_4BB4520 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9457/*"NOTIFICATION_COMPLETE_HARVEST_MESSAGE"*/, v1);
}


float __fastcall ConstantMaster__GetRateValue(
        ConstantMaster_o *this,
        System_String_o *name,
        float def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB4518 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__, name);
    byte_4BB4518 = 1;
  }
  result = 0LL;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_323C78C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1C13F80(EntityFromId, v8);
    return (float)SLODWORD(result[1].monitor) / 1000.0;
  }
  return def;
}


int32_t __fastcall ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB4516 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__, name);
    byte_4BB4516 = 1;
  }
  result = 0LL;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_323C78C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( !EntityFromId )
    return -1;
  if ( !result )
    sub_1C13F80(EntityFromId, v6);
  return (int32_t)result[1].monitor;
}


int32_t __fastcall ConstantMaster__GetValue_40207268(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB4517 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__, name);
    byte_4BB4517 = 1;
  }
  result = 0LL;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_323C78C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1C13F80(EntityFromId, v8);
    return (int32_t)result[1].monitor;
  }
  return def;
}


bool __fastcall ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4BB451A & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5142/*"DIN_66003"*/, v1);
    byte_4BB451A = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5142/*"DIN_66003"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsEnableFixGetQuestPhaseDetail(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4BB4521 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5559/*"EFFECT_INVINCIBLE_AVOID_OFFSET_Z"*/, v1);
    byte_4BB4521 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5559/*"EFFECT_INVINCIBLE_AVOID_OFFSET_Z"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20240804(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4BB451D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_6543/*"FINISHED"*/, v1);
    byte_4BB451D = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6543/*"FINISHED"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20241004(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4BB451F & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_6544/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, v1);
    byte_4BB451F = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6544/*"FIX_EVENT_SUPPORT_DECK_NUM"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlagTransformSvtRestrict(const MethodInfo *method)
{
  return ConstantMaster__GetFlagTransformSvtRestrict(method) > 0;
}


bool __fastcall ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4BB451C & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9458/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v1);
    byte_4BB451C = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9458/*"NOTIFICATION_COMPLETE_OPERATION_MESSAGE"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4BB451B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9473/*"NOT_SELECT_COSTUME"*/, v1);
    byte_4BB451B = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9473/*"NOT_SELECT_COSTUME"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  int32_t Value; // w0
  uint64_t v6; // x19
  uint64_t v8; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x1.8

  if ( (byte_4BB4519 & 1) == 0 )
  {
    sub_1C13D24(&System_DateTime_TypeInfo, v1);
    sub_1C13D24(&NetworkManager_TypeInfo, v2);
    sub_1C13D24(&StringLiteral_8466/*"LOGIN_BONUS_TOTAL_ITEM"*/, v3);
    byte_4BB4519 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8466/*"LOGIN_BONUS_TOTAL_ITEM"*/, v4);
  v8 = NetworkManager__getServerDateTime_39707132(Value, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v10.fields._dateData = (uint64_t)&dateData;
  v6 = System_DateTime__get_Date(v10, 0LL).fields._dateData;
  v11.fields._dateData = (uint64_t)&v8;
  v13.fields._dateData = System_DateTime__get_Date(v11, 0LL).fields._dateData;
  v12.fields._dateData = v6;
  return System_DateTime__op_Equality(v12, v13, 0LL);
}


bool __fastcall ConstantMaster__IsUseSimpleMesh(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4BB451E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_6538/*"FGO_Noble/GrabPassBlur"*/, v1);
    byte_4BB451E = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6538/*"FGO_Noble/GrabPassBlur"*/, v1) == 1;
}


float __fastcall ConstantMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantMaster__getValue(name, method) / 1000.0;
}


int32_t __fastcall ConstantMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB4515 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ConstantMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BB4515 = 1;
  }
  result = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__object___TryGetEntityFromId(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &result,
                               name,
                               (const MethodInfo_323C78C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return (int32_t)result[1].monitor;
LABEL_10:
    sub_1C13F80(Instance, v6);
  }
  return -1;
}