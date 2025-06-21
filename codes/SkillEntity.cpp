void __fastcall SkillEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1D073 & 1) == 0 )
  {
    sub_1BCAFF8(&SkillEntity_TypeInfo, v1);
    byte_4B1D073 = 1;
  }
  SkillEntity_TypeInfo->static_fields->CHECK_SCRIPT_TRUE = 1;
}


void __fastcall SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D072 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1D072 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SkillEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  return id;
}


int32_t __fastcall SkillEntity__CreatePrimaryKey(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall SkillEntity__DoesCutInWorkAsEnemyCommandSpell(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D05B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18266/*"cutInWorksAsEnemyCommandSpell"*/, method);
    byte_4B1D05B = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18266/*"cutInWorksAsEnemyCommandSpell"*/, &param, v2);
}


int32_t __fastcall SkillEntity__GetAfterWaitGroup(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D06D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16580/*"afterWaitGroup"*/, method);
    byte_4B1D06D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16580/*"afterWaitGroup"*/, 0, 0LL);
}


float __fastcall SkillEntity__GetAfterWaitSecond(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D06E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16581/*"afterWaitTime"*/, method);
    byte_4B1D06E = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16581/*"afterWaitTime"*/, 0, 0LL)
       / 1000.0;
}


System_Int32_array *__fastcall SkillEntity__GetAssumedEffectId(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D062 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16784/*"assumedEffectId"*/, method);
    byte_4B1D062 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16784/*"assumedEffectId"*/, 0LL);
}


SkillAddEntity_o *__fastcall SkillEntity__GetAvailableSkillAddEntity(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x19
  SkillEntity___c_c *v8; // x0
  System_Func_object__bool__o *_9__22_0; // x20
  Il2CppObject *v10; // x21
  struct SkillEntity___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B1D047 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___, method);
    sub_1BCAFF8(&System_Func_SkillAddEntity__bool__TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, v4);
    sub_1BCAFF8(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, v5);
    sub_1BCAFF8(&SkillEntity___c_TypeInfo, v6);
    byte_4B1D047 = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( !SortedSkillAddEntityList_k__BackingField || SortedSkillAddEntityList_k__BackingField->fields._size < 1 )
    return 0LL;
  v8 = SkillEntity___c_TypeInfo;
  if ( !SkillEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillEntity___c_TypeInfo);
    v8 = SkillEntity___c_TypeInfo;
  }
  _9__22_0 = (System_Func_object__bool__o *)v8->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = SkillEntity___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__22_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_SkillAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__22_0, v10, Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, 0LL);
    static_fields = SkillEntity___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__22_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v12, v13);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__22_0,
                               (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


System_Int32_array *__fastcall SkillEntity__GetBattleEffectMovieIds(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D068 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3097/*"BattleEffectMovieIds"*/, method);
    byte_4B1D068 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3097/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


float __fastcall SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D05D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18268/*"cutinAdditionalTime"*/, method);
    byte_4B1D05D = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18268/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


int32_t __fastcall SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D065 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18269/*"cutinFirstId"*/, method);
    byte_4B1D065 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18269/*"cutinFirstId"*/, &param, v2);
  return param;
}


void __fastcall SkillEntity__GetEffectExplanation(
        SkillEntity_o *this,
        System_String_o **title,
        System_String_o **explanation,
        int32_t skillLv,
        bool isEquip,
        const MethodInfo *method)
{
  int32_t v7; // w1
  System_String_o *EffectTitle; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  System_String_o *EffectExplanation; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( isEquip )
    v7 = 0;
  else
    v7 = skillLv;
  EffectTitle = SkillEntity__getEffectTitle(this, v7, (const MethodInfo *)explanation);
  *title = EffectTitle;
  sub_1BCAF9C((CGThumbnailListItem_o *)title, (int32_t)EffectTitle, v12, v13);
  EffectExplanation = SkillEntity__getEffectExplanation(this, skillLv, v14);
  *explanation = EffectExplanation;
  sub_1BCAF9C((CGThumbnailListItem_o *)explanation, (int32_t)EffectExplanation, v16, v17);
}


System_String_o *__fastcall SkillEntity__GetEnemyCountChangeMessage(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D06A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18856/*"enemyCountChangeMessage"*/, method);
    byte_4B1D06A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18856/*"enemyCountChangeMessage"*/, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o **v7; // x8
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1D05F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3110/*"BeforeFieldCallEffect"*/, isBefore);
    sub_1BCAFF8(&StringLiteral_2165/*"AfterFieldCallEffect"*/, v6);
    byte_4B1D05F = 1;
  }
  param = 0;
  if ( isBefore )
    v7 = (System_String_o **)&StringLiteral_3110/*"BeforeFieldCallEffect"*/;
  else
    v7 = (System_String_o **)&StringLiteral_2165/*"AfterFieldCallEffect"*/;
  if ( SkillEntity__checkScript(this, *v7, &param, v3) )
    return param;
  else
    return -1;
}


int32_t __fastcall SkillEntity__GetIconId(SkillEntity_o *this, const MethodInfo *method)
{
  SkillEntity_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t BaseTime; // x20
  System_Int32_array *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x2
  __int64 v10; // x8
  System_Int32_array *v11; // x21
  unsigned __int64 v12; // x24
  int32_t v13; // w22
  const MethodInfo *v14; // x4
  int32_t *p_iconId; // x8
  SkillGroupOverwriteEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4B1D064 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillGroupMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v3);
    this = (SkillEntity_o *)sub_1BCAFF8(&DataManager_TypeInfo, v4);
    byte_4B1D064 = 1;
  }
  entity = 0LL;
  BaseTime = SkillLvMaster__GetBaseTime((const MethodInfo *)this);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = SkillGroupMaster__GetSkillGroupIdFromSkillId((SkillGroupMaster_o *)Master_object, v2->fields.id, v8);
  if ( !Master_object )
    goto LABEL_19;
  v10 = *(_QWORD *)&Master_object->max_length;
  v11 = Master_object;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v10 )
        sub_1BCB25C(Master_object, v7, v9);
      v13 = v11->m_Items[v12 + 1];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_19;
      Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                              (SkillGroupOverwriteMaster_o *)Master_object,
                                              &entity,
                                              v13,
                                              BaseTime,
                                              v14);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
      LODWORD(v10) = v11->max_length;
      if ( (__int64)++v12 >= (int)v10 )
        goto LABEL_15;
    }
    if ( entity )
    {
      p_iconId = &entity->fields.iconId;
      return *p_iconId;
    }
LABEL_19:
    sub_1BCB254(Master_object, v7);
  }
LABEL_15:
  p_iconId = &v2->fields.iconId;
  return *p_iconId;
}


int32_t __fastcall SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D05E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23309/*"skillScript_1"*/, method);
    byte_4B1D05E = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_23309/*"skillScript_1"*/, &param, v2) )
    return param;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__GetMotionId(SkillEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  bool v11; // w0
  int32_t *p_motion; // x8
  int32_t v14; // [xsp+8h] [xbp-38h] BYREF
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1D05C & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&StringLiteral_10005/*"OverwriteMotion_{0}"*/, v7);
    byte_4B1D05C = 1;
  }
  v14 = svtId;
  param = 0;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_10005/*"OverwriteMotion_{0}"*/, v8, 0LL);
  v11 = SkillEntity__checkScript(this, v9, &param, v10);
  p_motion = &this->fields.motion;
  if ( v11 )
    p_motion = &param;
  return *p_motion;
}


int32_t __fastcall SkillEntity__GetOverWriteSkillInfoId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D063 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_10000/*"OverWriteSkillInfoId"*/, method);
    byte_4B1D063 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10000/*"OverWriteSkillInfoId"*/, &param, v2);
  return param;
}


float __fastcall SkillEntity__GetTimingLastWaitTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D06F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23879/*"timingLastWaitTime"*/, method);
    byte_4B1D06F = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23879/*"timingLastWaitTime"*/, 0, 0LL)
       / 1000.0;
}


bool __fastcall SkillEntity__IsBehaveAsAssistSkill(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D06C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16992/*"behaveAsAssistSkill"*/, method);
    byte_4B1D06C = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_16992/*"behaveAsAssistSkill"*/, &param, v2);
}


bool __fastcall SkillEntity__IsCheckUpdateShiftServant(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D066 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_4364/*"CheckUpdateShiftServant"*/, method);
    byte_4B1D066 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_4364/*"CheckUpdateShiftServant"*/, &param, v2);
}


bool __fastcall SkillEntity__IsIgnoreBattlePointUp(
        SkillEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_4B1D069 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_int___, battlePointIds);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Intersect_int___, v5);
    sub_1BCAFF8(&StringLiteral_7480/*"IgnoreBattlePointUp"*/, v6);
    byte_4B1D069 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7480/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
  {
    v8 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_304117C *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v8,
                         (const MethodInfo_30260EC *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool __fastcall SkillEntity__IsIgnoreValueUp(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D067 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_7487/*"IgnoreValueUp"*/, method);
    byte_4B1D067 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_7487/*"IgnoreValueUp"*/, &param, v2);
}


bool __fastcall SkillEntity__IsNotShowRankUpIcon(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D070 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20750/*"isNotShowRankUpIcon"*/, method);
    byte_4B1D070 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20750/*"isNotShowRankUpIcon"*/, 0LL);
}


bool __fastcall SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B1D060 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_long___, method);
    sub_1BCAFF8(&StringLiteral_3993/*"CanNotSkip"*/, v3);
    byte_4B1D060 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_3993/*"CanNotSkip"*/,
           0LL,
           (const MethodInfo_3008404 *)Method_BasicHelper_GetValue_long___) == 0;
}


bool __fastcall SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B1D061 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_long___, method);
    sub_1BCAFF8(&StringLiteral_15453/*"WarBoardForcePassiveEveryBattle"*/, v3);
    byte_4B1D061 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_15453/*"WarBoardForcePassiveEveryBattle"*/,
           0LL,
           (const MethodInfo_3008404 *)Method_BasicHelper_GetValue_long___) > 0;
}


System_Nullable_bool__o __fastcall SkillEntity__PreventInvisibleWhenInstantDeath(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t IntValue; // w0
  bool v5; // w1
  System_Nullable_bool__o *v6; // x0
  System_Nullable_bool__o v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D06B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_bool___ctor__, method);
    sub_1BCAFF8(&StringLiteral_22561/*"preventInvisibleWhenInstantDeath"*/, v3);
    byte_4B1D06B = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22561/*"preventInvisibleWhenInstantDeath"*/, -1, 0LL);
  v8 = 0;
  if ( (IntValue & 0x80000000) != 0 )
  {
    return (System_Nullable_bool__o)0;
  }
  else
  {
    v5 = IntValue != 0;
    v6 = &v8;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v6,
      v5,
      (const MethodInfo_37D56C8 *)Method_System_Nullable_bool___ctor__);
    return v8;
  }
}


bool __fastcall SkillEntity__TryGetMessageDisplayTime(SkillEntity_o *this, float *time, const MethodInfo *method)
{
  bool HasKey; // w21

  if ( (byte_4B1D071 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_21354/*"messageDisplayTime"*/, time);
    byte_4B1D071 = 1;
  }
  *time = 0.0;
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21354/*"messageDisplayTime"*/, 0LL);
  if ( HasKey )
    *time = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21354/*"messageDisplayTime"*/, 0, 0LL)
          / 1000.0;
  return HasKey;
}


bool __fastcall SkillEntity__checkScript(
        SkillEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x8
  SkillEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B1D04E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BCAFF8(&long_TypeInfo, v8);
    byte_4B1D04E = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCB254(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v14 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
        LOBYTE(script) = 1;
        *param = v14;
      }
      else
      {
        sub_1BCB514(Item);
        LOBYTE(script) = (unsigned __int8)SkillEntity__getActIndividuality(v15, v16);
      }
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


bool __fastcall SkillEntity__checkScriptFromIdx(SkillEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v6; // w8
  bool result; // w0
  int32_t v8; // w19
  SkillEntity_c *v9; // x0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D051 & 1) == 0 )
  {
    sub_1BCAFF8(&SkillEntity_TypeInfo, key);
    byte_4B1D051 = 1;
  }
  param = 0;
  v6 = SkillEntity__checkScript(this, key, &param, v3);
  result = 0;
  if ( v6 )
  {
    v8 = param;
    v9 = SkillEntity_TypeInfo;
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo);
      v9 = SkillEntity_TypeInfo;
    }
    return v8 == v9->static_fields->CHECK_SCRIPT_TRUE;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillEntity__checkUseTreasure(SkillEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B1D050 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type);
    sub_1BCAFF8(&StringLiteral_17796/*"checkUseTreasure"*/, v5);
    byte_4B1D050 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_17796/*"checkUseTreasure"*/,
            (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


System_Int32_array *__fastcall SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4B1D04F & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, method);
    byte_4B1D04F = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getEffectChargeTurn(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4B1D049 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4B1D049 = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1B45C(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1B45C(v3);
  MasterData_object = **(Il2CppObject ***)(v8 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BCB254(MasterData_object, *(_QWORD *)&lv);
  }
  v11 = lv <= 1 ? 1 : lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v11, v10);
  if ( Entity )
    return Entity->fields.chargeTurn;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillEntity__getEffectExplanation(
        SkillEntity_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  SkillLvEntity_o *Entity; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  LocalizationManager_c *v17; // x0

  if ( (byte_4B1D04A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4B1D04A = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1B45C(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1B45C(v3);
  MasterData_object = **(Il2CppObject ***)(v9 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BCB254(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v12 = 1;
  else
    v12 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v12, v11);
  if ( Entity )
    return SkillLvEntity__getDetail_42023016(Entity, lv, 0, v15);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B1794E )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
    byte_4B1794E = 1;
  }
  v17 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager_TypeInfo;
  }
  return v17->static_fields->unknownNameText;
}


System_Int32_array *__fastcall SkillEntity__getEffectList(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.effectList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillEntity__getEffectTitle(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x21
  const MethodInfo *v9; // x1
  Il2CppObject *v10; // x19
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v16; // x20
  const MethodInfo *v17; // x1
  Il2CppObject *Name; // x0
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D048 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_12127/*"SKILL_EFFECT_TITLE"*/, v6);
    sub_1BCAFF8(&StringLiteral_12126/*"SKILL_EFFECT_LEVEL_TITLE"*/, v7);
    byte_4B1D048 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12127/*"SKILL_EFFECT_TITLE"*/, 0LL);
    Name = (Il2CppObject *)SkillEntity__getName(this, v17);
    return System_String__Format(v16, Name, 0LL);
  }
  else
  {
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12126/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0LL);
    v10 = (Il2CppObject *)SkillEntity__getName(this, v9);
    v19 = lv;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13);
    return System_String__Format_62491716(v8, v10, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillEntity__getFuncExplanation(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v14; // x1
  LocalizationManager_c *v16; // x0

  if ( (byte_4B1D04B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4B1D04B = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1B45C(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1B45C(v3);
  MasterData_object = **(Il2CppObject ***)(v9 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BCB254(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v12 = 1;
  else
    v12 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v12, v11);
  if ( Entity )
    return SkillLvEntity__getFuncDetail(Entity, v14);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B1794E )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
    byte_4B1794E = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  return v16->static_fields->unknownNameText;
}


System_String_o *__fastcall SkillEntity__getName(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x8
  SkillAddEntity_o *AvailableSkillAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4B1D046 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, method);
    byte_4B1D046 = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( SortedSkillAddEntityList_k__BackingField
    && SortedSkillAddEntityList_k__BackingField->fields._size > 0
    && (AvailableSkillAddEntity = SkillEntity__GetAvailableSkillAddEntity(this, method)) != 0LL )
  {
    p_name = &AvailableSkillAddEntity->fields.name;
  }
  else
  {
    p_name = &this->fields.name;
  }
  return *p_name;
}


System_String_array *__fastcall SkillEntity__getScriptStrings(
        SkillEntity_o *this,
        System_String_o *key,
        uint16_t splitChar,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  SkillEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B1D053 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BCAFF8(&string_TypeInfo, v8);
    byte_4B1D053 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BCB254(script, key);
  }
  if ( (System_String_c *)script->klass == string_TypeInfo )
    return System_String__Split((System_String_o *)script, splitChar, 0, 0LL);
  sub_1BCB514(script);
  return SkillEntity__getSkillCutInVoices(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getSkillChargeTime(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4B1D04C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D04C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.id, lv, v8);
  if ( Entity )
    LODWORD(Entity) = Entity->fields.chargeTurn;
  return (int)Entity;
}


bool __fastcall SkillEntity__getSkillCutInCamPlayerAll(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D058 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18258/*"cutInCamPlayerAll"*/, method);
    byte_4B1D058 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18258/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 1;
}


int32_t __fastcall SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D04D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18259/*"cutInId"*/, method);
    byte_4B1D04D = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18259/*"cutInId"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D05A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18260/*"cutInMessageMode"*/, method);
    byte_4B1D05A = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18260/*"cutInMessageMode"*/, &param, v2);
  return param;
}


System_String_array *__fastcall SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D055 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18261/*"cutInPrefabInfo"*/, method);
    byte_4B1D055 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18261/*"cutInPrefabInfo"*/, 0x2Cu, v2);
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabOffsets(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_array *ScriptStrings; // x0
  System_String_array *v6; // x19
  System_String_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  UnityEngine_Vector3_array *v11; // x20
  __int64 v12; // x22
  float *v13; // x23
  int v14; // w8
  System_String_array *v15; // x21
  float v16; // s8
  float v17; // s9
  float v18; // s10
  float v19; // s0
  float v20; // s0

  if ( (byte_4B1D056 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3___TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_18262/*"cutInPrefabOffsets"*/, v4);
    byte_4B1D056 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18262/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v6 = ScriptStrings;
  v7 = (System_String_array *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v6->max_length;
  v11 = (UnityEngine_Vector3_array *)v7;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    v13 = (float *)&v7->m_Items[1];
    do
    {
      if ( (unsigned int)v12 >= max_length )
        goto LABEL_22;
      v7 = (System_String_array *)v6->m_Items[v12];
      if ( !v7 )
        goto LABEL_21;
      v7 = System_String__Split((System_String_o *)v7, 0x3Au, 0, 0LL);
      if ( !v7 )
        goto LABEL_21;
      v14 = v7->max_length;
      v15 = v7;
      v16 = 0.0;
      v17 = 0.0;
      v18 = 0.0;
      if ( v14 > 1 )
      {
        v19 = System_Single__Parse(v7->m_Items[1], 0LL);
        v14 = v15->max_length;
        v17 = v19;
        if ( v14 < 3 )
        {
          v18 = 0.0;
        }
        else
        {
          v20 = System_Single__Parse(v15->m_Items[2], 0LL);
          v14 = v15->max_length;
          v18 = v20;
        }
      }
      if ( v14 >= 1 )
        v16 = System_Single__Parse(v15->m_Items[0], 0LL);
      if ( !v11 )
LABEL_21:
        sub_1BCB254(v7, v8);
      if ( (unsigned int)v12 >= v11->max_length )
LABEL_22:
        sub_1BCB25C(v7, v8, v9);
      *(v13 - 2) = v17;
      *(v13 - 1) = v18;
      *v13 = v16;
      v13 += 3;
      max_length = v6->max_length;
      ++v12;
    }
    while ( (int)v12 < max_length );
  }
  return v11;
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabSizes(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_array *ScriptStrings; // x0
  System_String_array *v6; // x19
  System_String_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  UnityEngine_Vector3_array *v11; // x20
  __int64 v12; // x22
  float *v13; // x23
  int v14; // w8
  System_String_array *v15; // x21
  float v16; // s8
  float v17; // s9
  float v18; // s10
  float v19; // s0
  float v20; // s0

  if ( (byte_4B1D057 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3___TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_18263/*"cutInPrefabSizes"*/, v4);
    byte_4B1D057 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18263/*"cutInPrefabSizes"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v6 = ScriptStrings;
  v7 = (System_String_array *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v6->max_length;
  v11 = (UnityEngine_Vector3_array *)v7;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    v13 = (float *)&v7->m_Items[1];
    do
    {
      if ( (unsigned int)v12 >= max_length )
        goto LABEL_22;
      v7 = (System_String_array *)v6->m_Items[v12];
      if ( !v7 )
        goto LABEL_21;
      v7 = System_String__Split((System_String_o *)v7, 0x3Au, 0, 0LL);
      if ( !v7 )
        goto LABEL_21;
      v14 = v7->max_length;
      v15 = v7;
      v16 = 0.0;
      v17 = 0.0;
      v18 = 0.0;
      if ( v14 > 1 )
      {
        v19 = System_Single__Parse(v7->m_Items[1], 0LL);
        v14 = v15->max_length;
        v17 = v19;
        if ( v14 < 3 )
        {
          v18 = 0.0;
        }
        else
        {
          v20 = System_Single__Parse(v15->m_Items[2], 0LL);
          v14 = v15->max_length;
          v18 = v20;
        }
      }
      if ( v14 >= 1 )
        v16 = System_Single__Parse(v15->m_Items[0], 0LL);
      if ( !v11 )
LABEL_21:
        sub_1BCB254(v7, v8);
      if ( (unsigned int)v12 >= v11->max_length )
LABEL_22:
        sub_1BCB25C(v7, v8, v9);
      *(v13 - 2) = v17;
      *(v13 - 1) = v18;
      *v13 = v16;
      v13 += 3;
      max_length = v6->max_length;
      ++v12;
    }
    while ( (int)v12 < max_length );
  }
  return v11;
}


System_String_array *__fastcall SkillEntity__getSkillCutInVoices(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D054 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18265/*"cutInVoices"*/, method);
    byte_4B1D054 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18265/*"cutInVoices"*/, 0x2Fu, v2);
}


void __fastcall SkillEntity__getSkillMessageInfo(
        SkillEntity_o *this,
        System_String_o **name,
        System_String_o **detail,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  System_String_o *EffectExplanation; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v9 = SkillEntity__getName(this, (const MethodInfo *)name);
  *name = v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)name, (int32_t)v9, v10, v11);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v12);
  *detail = EffectExplanation;
  sub_1BCAF9C((CGThumbnailListItem_o *)detail, (int32_t)EffectExplanation, v14, v15);
}


System_Collections_Generic_List_SkillAddEntity__o *__fastcall SkillEntity__get_SortedSkillAddEntityList(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields._SortedSkillAddEntityList_k__BackingField;
}


bool __fastcall SkillEntity__isActive(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 1;
}


bool __fastcall SkillEntity__isForcedSkillSpeedOne(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  bool v4; // w0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D052 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_6767/*"ForcedSkillSpeed"*/, method);
    byte_4B1D052 = 1;
  }
  param = 0;
  v4 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_6767/*"ForcedSkillSpeed"*/, &param, v2);
  return v4 && param == 1;
}


bool __fastcall SkillEntity__isPassive(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool __fastcall SkillEntity__isSkillCutInCamField(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D059 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18258/*"cutInCamPlayerAll"*/, method);
    byte_4B1D059 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18258/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 2;
}


void __fastcall SkillEntity__set_SortedSkillAddEntityList(
        SkillEntity_o *this,
        System_Collections_Generic_List_SkillAddEntity__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SortedSkillAddEntityList_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._SortedSkillAddEntityList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SkillEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1D074 & 1) == 0 )
  {
    sub_1BCAFF8(&SkillEntity___c_TypeInfo, v1);
    byte_4B1D074 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(SkillEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillEntity___c_TypeInfo->static_fields->__9 = (struct SkillEntity___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)SkillEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SkillEntity___c___ctor(SkillEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SkillEntity___c___GetAvailableSkillAddEntity_b__22_0(
        SkillEntity___c_o *this,
        SkillAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return SkillAddEntity__IsOpen(x, (const MethodInfo *)x);
}