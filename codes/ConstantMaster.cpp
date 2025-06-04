void __fastcall ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01E4A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__, method);
    byte_4B01E4A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    105,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


int32_t __fastcall ConstantMaster__GetFlagTransformSvtRestrict(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B01E55 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9223/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
    byte_4B01E55 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9223/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
}


int32_t __fastcall ConstantMaster__GetGrandEffectId(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1

  if ( (byte_4B01E4F & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3639/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_1"*/, method);
    sub_1BC3008(&StringLiteral_3640/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_2"*/, v3);
    byte_4B01E4F = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_3639/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_1"*/, method) == effectId )
    return ConstantMaster__getValue((System_String_o *)StringLiteral_3640/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_2"*/, v4);
  else
    return effectId;
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

  if ( (byte_4B01E4E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__, name);
    byte_4B01E4E = 1;
  }
  result = 0LL;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_32B31D8 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1BC3264(EntityFromId, v8);
    return (float)SLODWORD(result[1].monitor) / 1000.0;
  }
  return def;
}


int32_t __fastcall ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B01E4C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__, name);
    byte_4B01E4C = 1;
  }
  result = 0LL;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_32B31D8 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( !EntityFromId )
    return -1;
  if ( !result )
    sub_1BC3264(EntityFromId, v6);
  return (int32_t)result[1].monitor;
}


int32_t __fastcall ConstantMaster__GetValue_40907608(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B01E4D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__, name);
    byte_4B01E4D = 1;
  }
  result = 0LL;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_32B31D8 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1BC3264(EntityFromId, v8);
    return (int32_t)result[1].monitor;
  }
  return def;
}


bool __fastcall ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B01E51 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4972/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1);
    byte_4B01E51 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_4972/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsEnableFixGetQuestPhaseDetail(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B01E56 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_5377/*"ENABLE_FIX_GET_QUEST_PHASE_DETAIL"*/, v1);
    byte_4B01E56 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5377/*"ENABLE_FIX_GET_QUEST_PHASE_DETAIL"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20250430(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B01E57 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6367/*"FLAG_20250430"*/, v1);
    byte_4B01E57 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6367/*"FLAG_20250430"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20250516(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B01E58 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6368/*"FLAG_20250516"*/, v1);
    byte_4B01E58 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6368/*"FLAG_20250516"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlagTransformSvtRestrict(const MethodInfo *method)
{
  return ConstantMaster__GetFlagTransformSvtRestrict(method) > 0;
}


bool __fastcall ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B01E53 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9224/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1);
    byte_4B01E53 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9224/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B01E52 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9239/*"NOT_USE_RESTRICTION_DIALOG"*/, v1);
    byte_4B01E52 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9239/*"NOT_USE_RESTRICTION_DIALOG"*/, v1) == 1;
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

  if ( (byte_4B01E50 & 1) == 0 )
  {
    sub_1BC3008(&System_DateTime_TypeInfo, v1);
    sub_1BC3008(&NetworkManager_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_8246/*"LOGIN_DAY"*/, v3);
    byte_4B01E50 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8246/*"LOGIN_DAY"*/, v4);
  v8 = NetworkManager__getServerDateTime_40297788(Value, 0LL).fields._dateData;
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

  if ( (byte_4B01E54 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6362/*"FIGURE_USE_SIMPLE_MESH"*/, v1);
    byte_4B01E54 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6362/*"FIGURE_USE_SIMPLE_MESH"*/, v1) == 1;
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

  if ( (byte_4B01E4B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ConstantMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B01E4B = 1;
  }
  result = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__object___TryGetEntityFromId(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &result,
                               name,
                               (const MethodInfo_32B31D8 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return (int32_t)result[1].monitor;
LABEL_10:
    sub_1BC3264(Instance, v6);
  }
  return -1;
}