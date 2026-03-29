void ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3081C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
    byte_4D3081C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    105,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


int32_t ConstantMaster__GetFlagTransformSvtRestrict(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4D30825 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9359/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/);
    byte_4D30825 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9359/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
}


int32_t ConstantMaster__GetGrandEffectId(int32_t effectId, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4D30821 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3697/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_1"*/);
    sub_1C93AD4(&StringLiteral_3698/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_2"*/);
    byte_4D30821 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_3697/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_1"*/, method) == effectId )
    return ConstantMaster__getValue((System_String_o *)StringLiteral_3698/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_2"*/, v3);
  else
    return effectId;
}


float ConstantMaster__GetRateValue(ConstantMaster_o *this, System_String_o *name, float def, const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D30820 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    byte_4D30820 = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_3467884 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1C93D2C(EntityFromId, v8);
    return (float)*(int *)((char *)&off_18 + (_QWORD)result) / 1000.0;
  }
  return def;
}


int32_t ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D3081E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    byte_4D3081E = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_3467884 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( !EntityFromId )
    return -1;
  if ( !result )
    sub_1C93D2C(EntityFromId, v6);
  return *(_DWORD *)((char *)&off_18 + (_QWORD)result);
}


int32_t ConstantMaster__GetValue_42627972(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D3081F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    byte_4D3081F = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_3467884 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1C93D2C(EntityFromId, v8);
    return *(_DWORD *)((char *)&off_18 + (_QWORD)result);
  }
  return def;
}


bool ConstantMaster__IsEnableFixGetQuestPhaseDetail(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4D30826 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5448/*"ENABLE_FIX_GET_QUEST_PHASE_DETAIL"*/);
    byte_4D30826 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5448/*"ENABLE_FIX_GET_QUEST_PHASE_DETAIL"*/, v1) == 1;
}


bool ConstantMaster__IsFlagTransformSvtRestrict(const MethodInfo *method)
{
  return ConstantMaster__GetFlagTransformSvtRestrict(method) > 0;
}


bool ConstantMaster__IsHideBattleStartTimingMasterUI(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4D30827 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7288/*"HIDE_BATTLE_START_TIMING_MASTER_UI"*/);
    byte_4D30827 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_7288/*"HIDE_BATTLE_START_TIMING_MASTER_UI"*/, v1) == 1;
}


bool ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4D30823 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9361/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/);
    byte_4D30823 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9361/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1) == 1;
}


bool ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int32_t Value; // w0
  uint64_t v3; // x19
  System_DateTime_o v4; // x0
  uint64_t v6; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4D30822 & 1) == 0 )
  {
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8375/*"LOGIN_DAY"*/);
    byte_4D30822 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8375/*"LOGIN_DAY"*/, v1);
  v6 = NetworkManager__getServerDateTime_42097084(Value, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3 = System_DateTime__get_Date((System_DateTime_o)&dateData, 0).fields._dateData;
  v4.fields._dateData = System_DateTime__get_Date((System_DateTime_o)&v6, 0).fields._dateData;
  return System_DateTime__op_Equality((System_DateTime_o)v3, v4, 0);
}


bool ConstantMaster__IsUseSimpleMesh(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4D30824 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_6447/*"FIGURE_USE_SIMPLE_MESH"*/);
    byte_4D30824 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6447/*"FIGURE_USE_SIMPLE_MESH"*/, v1) == 1;
}


float ConstantMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantMaster__getValue(name, method) / 1000.0;
}


int32_t ConstantMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D3081D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3081D = 1;
  }
  result = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__object___TryGetEntityFromId(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &result,
                               name,
                               (const MethodInfo_3467884 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return (int32_t)result[1].monitor;
LABEL_10:
    sub_1C93D2C(Instance, v4);
  }
  return -1;
}