void ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970650 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
    byte_5970650 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    106,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


int32_t ConstantMaster__GetFlagTransformSvtRestrict(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_5970659 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9691/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/);
    byte_5970659 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9691/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
}


int32_t ConstantMaster__GetGrandEffectId(int32_t effectId, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_5970655 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3818/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_1"*/);
    sub_2213A60(&StringLiteral_3819/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_2"*/);
    byte_5970655 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_3818/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_1"*/, method) == effectId )
    return ConstantMaster__getValue((System_String_o *)StringLiteral_3819/*"COMMAND_SPELL_CLASS_ICON_EFFECT_ID_2"*/, v3);
  else
    return effectId;
}


float ConstantMaster__GetRateValue(ConstantMaster_o *this, System_String_o *name, float def, const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970654 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    byte_5970654 = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_3F14F9C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_2213CDC(EntityFromId, v8);
    return (float)*(int *)((char *)off_18 + (_QWORD)result) / 1000.0;
  }
  return def;
}


int32_t ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970652 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    byte_5970652 = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_3F14F9C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( !EntityFromId )
    return -1;
  if ( !result )
    sub_2213CDC(EntityFromId, v6);
  return *(_DWORD *)((char *)off_18 + (_QWORD)result);
}


int32_t ConstantMaster__GetValue_48903564(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970653 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    byte_5970653 = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_3F14F9C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_2213CDC(EntityFromId, v8);
    return *(_DWORD *)((char *)off_18 + (_QWORD)result);
  }
  return def;
}


bool ConstantMaster__IsEnableFixGetQuestPhaseDetail(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_597065A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5625/*"ENABLE_FIX_GET_QUEST_PHASE_DETAIL"*/);
    byte_597065A = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5625/*"ENABLE_FIX_GET_QUEST_PHASE_DETAIL"*/, v1) == 1;
}


bool ConstantMaster__IsFlag20260802(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_597065D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6706/*"FLAG_20260802"*/);
    byte_597065D = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6706/*"FLAG_20260802"*/, v1) == 1;
}


bool ConstantMaster__IsFlagTransformSvtRestrict(const MethodInfo *method)
{
  return ConstantMaster__GetFlagTransformSvtRestrict(method) > 0;
}


bool ConstantMaster__IsHideBattleStartTimingMasterUI(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_597065B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7549/*"HIDE_BATTLE_START_TIMING_MASTER_UI"*/);
    byte_597065B = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_7549/*"HIDE_BATTLE_START_TIMING_MASTER_UI"*/, v1) == 1;
}


bool ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_5970657 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9693/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/);
    byte_5970657 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9693/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1) == 1;
}


bool ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w8
  const MethodInfo *v3; // x1
  int32_t Value; // w0
  System_DateTime_o v5; // x1
  uint64_t v6; // x19
  System_DateTime_o v7; // x0
  uint64_t v9; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_5970656 & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_8675/*"LOGIN_DAY"*/);
    byte_5970656 = 1;
  }
  v2 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  dateData = 0;
  v9 = 0;
  if ( !v2 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8675/*"LOGIN_DAY"*/, v3);
  v9 = NetworkManager__getServerDateTime_48347596(Value, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v5.fields._dateData);
  v6 = System_DateTime__get_Date((System_DateTime_o)&dateData, 0).fields._dateData;
  v7.fields._dateData = System_DateTime__get_Date((System_DateTime_o)&v9, 0).fields._dateData;
  return System_DateTime__op_Equality((System_DateTime_o)v6, v7, 0);
}


bool ConstantMaster__IsSkillChargeEnabledOnStun2(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_597065C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7836/*"IS_SKILL_CHARGE_ENABLED_ON_STUN2"*/);
    byte_597065C = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_7836/*"IS_SKILL_CHARGE_ENABLED_ON_STUN2"*/, v1) == 1;
}


bool ConstantMaster__IsUseSimpleMesh(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_5970658 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6701/*"FIGURE_USE_SIMPLE_MESH"*/);
    byte_5970658 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6701/*"FIGURE_USE_SIMPLE_MESH"*/, v1) == 1;
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

  if ( (byte_5970651 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_2213A60(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970651 = 1;
  }
  result = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__object___TryGetEntityFromId(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &result,
                               name,
                               (const MethodInfo_3F14F9C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string__TryGetEntityFromId__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return (int32_t)result[1].monitor;
LABEL_10:
    sub_2213CDC(Instance, v4);
  }
  return -1;
}