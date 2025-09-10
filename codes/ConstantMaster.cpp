void ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C270F4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
    byte_4C270F4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    105,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


int32_t ConstantMaster__GetFlagTransformSvtRestrict(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C270FF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9298/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/);
    byte_4C270FF = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9298/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
}


int32_t ConstantMaster__GetGrandEffectId(int32_t effectId, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4C270F9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3669/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_1"*/);
    sub_1C2D490(&StringLiteral_3670/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_2"*/);
    byte_4C270F9 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_3669/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_1"*/, method) == effectId )
    return ConstantMaster__getValue((System_String_o *)StringLiteral_3670/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_2"*/, v3);
  else
    return effectId;
}


float ConstantMaster__GetRateValue(ConstantMaster_o *this, System_String_o *name, float def, const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C270F8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    byte_4C270F8 = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_338BF00 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1C2D6EC(EntityFromId, v8);
    return (float)*(int *)((char *)&off_18 + (_QWORD)result) / 1000.0;
  }
  return def;
}


int32_t ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C270F6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    byte_4C270F6 = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_338BF00 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( !EntityFromId )
    return -1;
  if ( !result )
    sub_1C2D6EC(EntityFromId, v6);
  return *(_DWORD *)((char *)&off_18 + (_QWORD)result);
}


int32_t ConstantMaster__GetValue_41671844(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C270F7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    byte_4C270F7 = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_338BF00 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1C2D6EC(EntityFromId, v8);
    return *(_DWORD *)((char *)&off_18 + (_QWORD)result);
  }
  return def;
}


bool ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C270FB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5009/*"DISABLE_SERVANT_EFFECT_FILTER"*/);
    byte_4C270FB = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5009/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1) == 1;
}


bool ConstantMaster__IsEnableFixGetQuestPhaseDetail(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C27100 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5415/*"ENABLE_FIX_GET_QUEST_PHASE_DETAIL"*/);
    byte_4C27100 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5415/*"ENABLE_FIX_GET_QUEST_PHASE_DETAIL"*/, v1) == 1;
}


bool ConstantMaster__IsFLAG20250430(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C27101 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6413/*"FLAG_20250430"*/);
    byte_4C27101 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6413/*"FLAG_20250430"*/, v1) == 1;
}


bool ConstantMaster__IsFLAG20250516(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C27102 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6414/*"FLAG_20250516"*/);
    byte_4C27102 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6414/*"FLAG_20250516"*/, v1) == 1;
}


bool ConstantMaster__IsFLAG20250803(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C27103 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6415/*"FLAG_20250803"*/);
    byte_4C27103 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6415/*"FLAG_20250803"*/, v1) == 1;
}


bool ConstantMaster__IsFlagTransformSvtRestrict(const MethodInfo *method)
{
  return ConstantMaster__GetFlagTransformSvtRestrict(method) > 0;
}


bool ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C270FD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9300/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/);
    byte_4C270FD = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9300/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1) == 1;
}


bool ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C270FC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9315/*"NOT_USE_RESTRICTION_DIALOG"*/);
    byte_4C270FC = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9315/*"NOT_USE_RESTRICTION_DIALOG"*/, v1) == 1;
}


bool ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int32_t Value; // w0
  System_DateTime_o v3; // x0
  uint64_t v4; // x19
  System_DateTime_o v5; // x0
  System_DateTime_o v6; // x1
  System_DateTime_o v7; // x0
  uint64_t v9; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4C270FA & 1) == 0 )
  {
    sub_1C2D490(&System_DateTime_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8319/*"LOGIN_DAY"*/);
    byte_4C270FA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8319/*"LOGIN_DAY"*/, v1);
  v9 = NetworkManager__getServerDateTime_41146052(Value, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&dateData;
  v4 = System_DateTime__get_Date(v3, 0).fields._dateData;
  v5.fields._dateData = (uint64_t)&v9;
  v6.fields._dateData = System_DateTime__get_Date(v5, 0).fields._dateData;
  v7.fields._dateData = v4;
  return System_DateTime__op_Equality(v7, v6, 0);
}


bool ConstantMaster__IsUseSimpleMesh(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C270FE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6408/*"FIGURE_USE_SIMPLE_MESH"*/);
    byte_4C270FE = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6408/*"FIGURE_USE_SIMPLE_MESH"*/, v1) == 1;
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

  if ( (byte_4C270F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C270F5 = 1;
  }
  result = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__object___TryGetEntityFromId(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &result,
                               name,
                               (const MethodInfo_338BF00 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return (int32_t)result[1].monitor;
LABEL_10:
    sub_1C2D6EC(Instance, v4);
  }
  return -1;
}