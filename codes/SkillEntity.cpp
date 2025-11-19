void SkillEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4CB6E81 & 1) == 0 )
  {
    sub_1C6BA08(&SkillEntity_TypeInfo);
    byte_4CB6E81 = 1;
  }
  SkillEntity_TypeInfo->static_fields->CHECK_SCRIPT_TRUE = 1;
}


void SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E80 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB6E80 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
}


int32_t SkillEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  return id;
}


int32_t SkillEntity__CreatePrimaryKey(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool SkillEntity__DoesCutInWorkAsEnemyCommandSpell(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E66 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18453/*"cutInWorksAsEnemyCommandSpell"*/);
    byte_4CB6E66 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18453/*"cutInWorksAsEnemyCommandSpell"*/, &param, v2);
}


int32_t SkillEntity__GetAfterWaitGroup(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E78 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16728/*"afterWaitGroup"*/);
    byte_4CB6E78 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16728/*"afterWaitGroup"*/, 0, 0);
}


float SkillEntity__GetAfterWaitSecond(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E79 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16729/*"afterWaitTime"*/);
    byte_4CB6E79 = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16729/*"afterWaitTime"*/, 0, 0)
       / 1000.0;
}


System_Int32_array *SkillEntity__GetAssumedEffectId(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E6D & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16935/*"assumedEffectId"*/);
    byte_4CB6E6D = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16935/*"assumedEffectId"*/, 0);
}


SkillAddEntity_o *SkillEntity__GetAvailableSkillAddEntity(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x19
  SkillEntity___c_c *v4; // x0
  System_Func_object__bool__o *_9__22_0; // x20
  Il2CppObject *v6; // x21
  struct SkillEntity___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB6E52 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
    sub_1C6BA08(&System_Func_SkillAddEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__);
    sub_1C6BA08(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__);
    sub_1C6BA08(&SkillEntity___c_TypeInfo);
    byte_4CB6E52 = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( !SortedSkillAddEntityList_k__BackingField || SortedSkillAddEntityList_k__BackingField->fields._size < 1 )
    return 0;
  v4 = SkillEntity___c_TypeInfo;
  if ( !SkillEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillEntity___c_TypeInfo);
    v4 = SkillEntity___c_TypeInfo;
  }
  _9__22_0 = (System_Func_object__bool__o *)v4->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = SkillEntity___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__22_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_SkillAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__22_0, v6, Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, 0);
    static_fields = SkillEntity___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__22_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v8, v9);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__22_0,
                               (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


System_Int32_array *SkillEntity__GetBattleEffectMovieIds(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E73 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3110/*"BattleEffectMovieIds"*/);
    byte_4CB6E73 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3110/*"BattleEffectMovieIds"*/, 0, 0);
}


System_Int32_array *SkillEntity__GetBranchSkillFuncIds(SkillEntity_o *this, int32_t skillLv, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x20
  const MethodInfo *v6; // x1
  SkillLvEntity_o *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct SkillEntity_CondBranchSkillInfoData_array *condBranchSkillInfos; // x22
  int max_length; // w8
  SkillLvMaster_o *v12; // x21
  unsigned int v13; // w23
  SkillEntity_CondBranchSkillInfoData_o *v14; // x8
  const MethodInfo *v15; // x2
  System_Collections_Generic_HashSet_int__o *ret; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB6E7F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4CB6E7F = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C6BC54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_36B0FBC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  ret = v5;
  SkillEntity__SetCondBranchSkillInfo(this, v6);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.condBranchSkillInfos, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
    condBranchSkillInfos = this->fields.condBranchSkillInfos;
    if ( !condBranchSkillInfos )
      goto LABEL_15;
    max_length = condBranchSkillInfos->max_length;
    if ( max_length >= 1 )
    {
      v12 = (SkillLvMaster_o *)Master_object;
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1C6BC68(Master_object);
        v14 = condBranchSkillInfos->m_Items[v13];
        if ( !v14 )
          break;
        if ( !v12 )
          break;
        Master_object = SkillLvMaster__GetEntity(v12, v14->fields.skillId, skillLv, v9);
        if ( !Master_object )
          break;
        SkillLvEntity__GetUniqueFuncIds(Master_object, &ret, v15);
        max_length = condBranchSkillInfos->max_length;
        if ( (int)++v13 >= max_length )
          return System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                   (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
LABEL_15:
      sub_1C6BC60(Master_object, v8);
    }
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


SkillEntity_CondBranchSkillInfoData_array *SkillEntity__GetCondBranchSkillInfoDatas(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB6E7E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_SkillEntity_CondBranchSkillInfoData___);
    byte_4CB6E7E = 1;
  }
  SkillEntity__SetCondBranchSkillInfo(this, method);
  return (SkillEntity_CondBranchSkillInfoData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condBranchSkillInfos,
                                                        (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_SkillEntity_CondBranchSkillInfoData___);
}


float SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E68 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18455/*"cutinAdditionalTime"*/);
    byte_4CB6E68 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18455/*"cutinAdditionalTime"*/, 0.0, 0);
}


int32_t SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E70 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18456/*"cutinFirstId"*/);
    byte_4CB6E70 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18456/*"cutinFirstId"*/, &param, v2);
  return param;
}


void SkillEntity__GetEffectExplanation(
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
  sub_1C6B9AC((CGThumbnailListItem_o *)title, (int32_t)EffectTitle, v12, v13);
  EffectExplanation = SkillEntity__getEffectExplanation(this, skillLv, v14);
  *explanation = EffectExplanation;
  sub_1C6B9AC((CGThumbnailListItem_o *)explanation, (int32_t)EffectExplanation, v16, v17);
}


System_String_o *SkillEntity__GetEnemyCountChangeMessage(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E75 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19072/*"enemyCountChangeMessage"*/);
    byte_4CB6E75 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19072/*"enemyCountChangeMessage"*/, 0, 0);
}


int32_t SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o **v6; // x8
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB6E6A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3125/*"BeforeFieldCallEffect"*/);
    sub_1C6BA08(&StringLiteral_2172/*"AfterFieldCallEffect"*/);
    byte_4CB6E6A = 1;
  }
  param = 0;
  if ( isBefore )
    v6 = (System_String_o **)&StringLiteral_3125/*"BeforeFieldCallEffect"*/;
  else
    v6 = (System_String_o **)&StringLiteral_2172/*"AfterFieldCallEffect"*/;
  if ( SkillEntity__checkScript(this, *v6, &param, v3) )
    return param;
  else
    return -1;
}


int32_t SkillEntity__GetIconId(SkillEntity_o *this, const MethodInfo *method)
{
  SkillEntity_o *v2; // x19
  int64_t BaseTime; // x20
  System_Int32_array *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v8; // x21
  unsigned __int64 v9; // x24
  int32_t v10; // w22
  const MethodInfo *v11; // x4
  int32_t *p_iconId; // x8
  SkillGroupOverwriteEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4CB6E6F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    this = (SkillEntity_o *)sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB6E6F = 1;
  }
  entity = 0;
  BaseTime = SkillLvMaster__GetBaseTime((const MethodInfo *)this);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = SkillGroupMaster__GetSkillGroupIdFromSkillId((SkillGroupMaster_o *)Master_object, v2->fields.id, v6);
  if ( !Master_object )
    goto LABEL_19;
  max_length = Master_object->max_length;
  v8 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C6BC68(Master_object);
      v10 = v8->m_Items[v9];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_19;
      Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                              (SkillGroupOverwriteMaster_o *)Master_object,
                                              &entity,
                                              v10,
                                              BaseTime,
                                              v11);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
      LODWORD(max_length) = v8->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_15;
    }
    if ( entity )
    {
      p_iconId = &entity->fields.iconId;
      return *p_iconId;
    }
LABEL_19:
    sub_1C6BC60(Master_object, v5);
  }
LABEL_15:
  p_iconId = &v2->fields.iconId;
  return *p_iconId;
}


int32_t SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E69 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23611/*"skillScript_1"*/);
    byte_4CB6E69 = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_23611/*"skillScript_1"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t SkillEntity__GetMotionId(SkillEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  bool v8; // w0
  int32_t *p_motion; // x8
  int32_t v11; // [xsp+8h] [xbp-38h] BYREF
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB6E67 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_10080/*"OverwriteMotion_{0}"*/);
    byte_4CB6E67 = 1;
  }
  v11 = svtId;
  param = 0;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v6 = System_String__Format((System_String_o *)StringLiteral_10080/*"OverwriteMotion_{0}"*/, v5, 0);
  v8 = SkillEntity__checkScript(this, v6, &param, v7);
  p_motion = &this->fields.motion;
  if ( v8 )
    p_motion = &param;
  return *p_motion;
}


int32_t SkillEntity__GetOverWriteSkillInfoId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E6E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_10075/*"OverWriteSkillInfoId"*/);
    byte_4CB6E6E = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10075/*"OverWriteSkillInfoId"*/, &param, v2);
  return param;
}


float SkillEntity__GetTimingLastWaitTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E7A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_24193/*"timingLastWaitTime"*/);
    byte_4CB6E7A = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24193/*"timingLastWaitTime"*/, 0, 0)
       / 1000.0;
}


bool SkillEntity__IsBehaveAsAssistSkill(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E77 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17146/*"behaveAsAssistSkill"*/);
    byte_4CB6E77 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17146/*"behaveAsAssistSkill"*/, &param, v2);
}


bool SkillEntity__IsCheckUpdateShiftServant(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E71 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4390/*"CheckUpdateShiftServant"*/);
    byte_4CB6E71 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_4390/*"CheckUpdateShiftServant"*/, &param, v2);
}


bool SkillEntity__IsIgnoreBattlePointUp(
        SkillEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4CB6E74 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C6BA08(&StringLiteral_7545/*"IgnoreBattlePointUp"*/);
    byte_4CB6E74 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7545/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
  {
    v6 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_3165AF4 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v6,
                         (const MethodInfo_31469B0 *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool SkillEntity__IsIgnoreValueUp(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E72 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_7552/*"IgnoreValueUp"*/);
    byte_4CB6E72 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_7552/*"IgnoreValueUp"*/, &param, v2);
}


bool SkillEntity__IsNotShowRankUpIcon(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E7B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21003/*"isNotShowRankUpIcon"*/);
    byte_4CB6E7B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21003/*"isNotShowRankUpIcon"*/, 0);
}


bool SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E6B & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_GetValue_long___);
    sub_1C6BA08(&StringLiteral_4022/*"CanNotSkip"*/);
    byte_4CB6E6B = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_4022/*"CanNotSkip"*/,
           0,
           (const MethodInfo_3128918 *)Method_BasicHelper_GetValue_long___) == 0;
}


bool SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E6C & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_GetValue_long___);
    sub_1C6BA08(&StringLiteral_15584/*"WarBoardForcePassiveEveryBattle"*/);
    byte_4CB6E6C = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_15584/*"WarBoardForcePassiveEveryBattle"*/,
           0,
           (const MethodInfo_3128918 *)Method_BasicHelper_GetValue_long___) > 0;
}


System_Nullable_bool__o SkillEntity__PreventInvisibleWhenInstantDeath(SkillEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  bool v4; // w1
  System_Nullable_bool__o *v5; // x0
  System_Nullable_bool__o v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E76 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Nullable_bool___ctor__);
    sub_1C6BA08(&StringLiteral_22859/*"preventInvisibleWhenInstantDeath"*/);
    byte_4CB6E76 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22859/*"preventInvisibleWhenInstantDeath"*/, -1, 0);
  v7 = 0;
  if ( IntValue < 0 )
  {
    return (System_Nullable_bool__o)0;
  }
  else
  {
    v4 = IntValue != 0;
    v5 = &v7;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v5,
      v4,
      (const MethodInfo_392535C *)Method_System_Nullable_bool___ctor__);
    return v7;
  }
}


void SkillEntity__SetCondBranchSkillInfo(SkillEntity_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_condBranchSkillInfos; // x19
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  long double inited; // q0
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x0
  CGThumbnailListItem_c *v10; // x1
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  CGThumbnailListItem_c **v15; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CB6E7D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&Method_JsonManager_Deserialize_SkillEntity_CondBranchSkillInfoData_____);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_18224/*"condBranchSkillInfo"*/);
    byte_4CB6E7D = 1;
  }
  value = 0;
  p_condBranchSkillInfos = (CGThumbnailListItem_o *)&this->fields.condBranchSkillInfos;
  if ( !this->fields.condBranchSkillInfos )
  {
    script = this->fields.script;
    if ( !script )
      sub_1C6BC60(0, method);
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18224/*"condBranchSkillInfo"*/,
           &value,
           (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v8 = value;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v9 = JsonManager__Deserialize_object_(
             v8,
             (const MethodInfo_31AAEC8 *)Method_JsonManager_Deserialize_SkillEntity_CondBranchSkillInfoData_____);
      LODWORD(v10) = (_DWORD)v9;
      p_condBranchSkillInfos->klass = (CGThumbnailListItem_c *)v9;
    }
    else
    {
      v11 = Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___;
      v12 = *((_QWORD *)Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___ + 7);
      if ( !v12 )
      {
        sub_1C41AF8(Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___);
        v12 = v11[7];
      }
      v13 = *(_QWORD *)(v12 + 16);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C41A9C(inited);
      if ( !*(_DWORD *)(v13 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v13);
      v14 = *(_QWORD *)(v11[7] + 16LL);
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1C41A9C(inited);
      v15 = *(CGThumbnailListItem_c ***)(v14 + 184);
      v10 = *v15;
      p_condBranchSkillInfos->klass = *v15;
    }
    sub_1C6B9AC(p_condBranchSkillInfos, (int32_t)v10, v5, v6);
  }
}


bool SkillEntity__TryGetMessageDisplayTime(SkillEntity_o *this, float *time, const MethodInfo *method)
{
  bool HasKey; // w21

  if ( (byte_4CB6E7C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21633/*"messageDisplayTime"*/);
    byte_4CB6E7C = 1;
  }
  *time = 0.0;
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21633/*"messageDisplayTime"*/, 0);
  if ( HasKey )
    *time = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21633/*"messageDisplayTime"*/, 0, 0)
          / 1000.0;
  return HasKey;
}


bool SkillEntity__checkScript(SkillEntity_o *this, System_String_o *key, int32_t *param, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x8
  SkillEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4CB6E59 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&long_TypeInfo);
    byte_4CB6E59 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C6BC60(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
        LOBYTE(script) = 1;
        *param = v12;
      }
      else
      {
        sub_1C6BFFC(Item);
        LOBYTE(script) = (unsigned __int8)SkillEntity__getActIndividuality(v13, v14);
      }
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


bool SkillEntity__checkScriptFromIdx(SkillEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v6; // w8
  bool result; // w0
  int32_t v8; // w19
  SkillEntity_c *v9; // x0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E5C & 1) == 0 )
  {
    sub_1C6BA08(&SkillEntity_TypeInfo);
    byte_4CB6E5C = 1;
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


bool SkillEntity__checkUseTreasure(SkillEntity_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4CB6E5B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&StringLiteral_17966/*"checkUseTreasure"*/);
    byte_4CB6E5B = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_17966/*"checkUseTreasure"*/,
            (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0);
}


System_Int32_array *SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4CB6E5A & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB6E5A = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t SkillEntity__getEffectChargeTurn(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4CB6E54 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CB6E54 = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C41A9C(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C41A9C(v3);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_1C6BC60(MasterData_object, *(_QWORD *)&lv);
  }
  v10 = lv <= 1 ? 1 : lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v10, v9);
  if ( Entity )
    return Entity->fields.chargeTurn;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SkillEntity__getEffectExplanation(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v12; // x3
  LocalizationManager_c *v14; // x0

  if ( (byte_4CB6E55 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CB6E55 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C41A9C(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C41A9C(v3);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_1C6BC60(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v10 = 1;
  else
    v10 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v10, v9);
  if ( Entity )
    return SkillLvEntity__getDetail_43122340(Entity, lv, 0, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4CB159D )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB159D = 1;
  }
  v14 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager_TypeInfo;
  }
  return v14->static_fields->unknownNameText;
}


System_Int32_array *SkillEntity__getEffectList(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.effectList;
}


System_String_o *SkillEntity__getEffectTitle(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  System_String_o *v5; // x21
  const MethodInfo *v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *v8; // x0
  System_String_o *v10; // x20
  const MethodInfo *v11; // x1
  Il2CppObject *Name; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E53 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12231/*"SKILL_EFFECT_TITLE"*/);
    sub_1C6BA08(&StringLiteral_12230/*"SKILL_EFFECT_LEVEL_TITLE"*/);
    byte_4CB6E53 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SKILL_EFFECT_TITLE"*/, 0);
    Name = (Il2CppObject *)SkillEntity__getName(this, v11);
    return System_String__Format(v10, Name, 0);
  }
  else
  {
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0);
    v7 = (Il2CppObject *)SkillEntity__getName(this, v6);
    v13 = lv;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    return System_String__Format_64008100(v5, v7, v8, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SkillEntity__getFuncExplanation(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v12; // x1
  LocalizationManager_c *v14; // x0

  if ( (byte_4CB6E56 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CB6E56 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C41A9C(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C41A9C(v3);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_1C6BC60(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v10 = 1;
  else
    v10 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v10, v9);
  if ( Entity )
    return SkillLvEntity__getFuncDetail(Entity, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4CB159D )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB159D = 1;
  }
  v14 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager_TypeInfo;
  }
  return v14->static_fields->unknownNameText;
}


System_String_o *SkillEntity__getName(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x8
  SkillAddEntity_o *AvailableSkillAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4CB6E51 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__);
    byte_4CB6E51 = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( SortedSkillAddEntityList_k__BackingField
    && SortedSkillAddEntityList_k__BackingField->fields._size > 0
    && (AvailableSkillAddEntity = SkillEntity__GetAvailableSkillAddEntity(this, method)) != 0 )
  {
    p_name = &AvailableSkillAddEntity->fields.name;
  }
  else
  {
    p_name = &this->fields.name;
  }
  return *p_name;
}


System_String_array *SkillEntity__getScriptStrings(
        SkillEntity_o *this,
        System_String_o *key,
        uint16_t splitChar,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  SkillEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4CB6E5E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB6E5E = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1C6BC60(script, key);
  }
  if ( (System_String_c *)script->klass == string_TypeInfo )
    return System_String__Split((System_String_o *)script, splitChar, 0, 0);
  sub_1C6BFFC(script);
  return SkillEntity__getSkillCutInVoices(v9, v10);
}


int32_t SkillEntity__getSkillChargeTime(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4CB6E57 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6E57 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v6);
  }
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.id, lv, v7);
  if ( Entity )
    LODWORD(Entity) = Entity->fields.chargeTurn;
  return (int)Entity;
}


bool SkillEntity__getSkillCutInCamPlayerAll(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E63 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18444/*"cutInCamPlayerAll"*/);
    byte_4CB6E63 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18444/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 1;
}


int32_t SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E58 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18445/*"cutInId"*/);
    byte_4CB6E58 = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18445/*"cutInId"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E65 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18446/*"cutInMessageMode"*/);
    byte_4CB6E65 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18446/*"cutInMessageMode"*/, &param, v2);
  return param;
}


System_String_array *SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6E60 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18448/*"cutInPrefabInfo"*/);
    byte_4CB6E60 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18448/*"cutInPrefabInfo"*/, 0x2Cu, v2);
}


UnityEngine_Vector3_array *SkillEntity__getSkillCutInPrefabOffsets(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *ScriptStrings; // x0
  System_String_array *v5; // x19
  System_String_array *v6; // x0
  __int64 v7; // x1
  int max_length; // w8
  System_String_array *v9; // x20
  __int64 v10; // x22
  float *v11; // x23
  int v12; // w8
  System_String_array *v13; // x21
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s0
  float v18; // s0

  if ( (byte_4CB6E61 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Vector3___TypeInfo);
    sub_1C6BA08(&StringLiteral_18449/*"cutInPrefabOffsets"*/);
    byte_4CB6E61 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18449/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0;
  v5 = ScriptStrings;
  v6 = (System_String_array *)sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, LODWORD(ScriptStrings->max_length));
  max_length = v5->max_length;
  v9 = v6;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = (float *)&v6->m_Items[1];
    do
    {
      if ( (unsigned int)v10 >= max_length )
        goto LABEL_22;
      v6 = (System_String_array *)v5->m_Items[v10];
      if ( !v6 )
        goto LABEL_21;
      v6 = System_String__Split((System_String_o *)v6, 0x3Au, 0, 0);
      if ( !v6 )
        goto LABEL_21;
      v12 = v6->max_length;
      v13 = v6;
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      if ( v12 > 1 )
      {
        v17 = System_Single__Parse(v6->m_Items[1], 0);
        v12 = v13->max_length;
        v15 = v17;
        if ( v12 < 3 )
        {
          v16 = 0.0;
        }
        else
        {
          v18 = System_Single__Parse(v13->m_Items[2], 0);
          v12 = v13->max_length;
          v16 = v18;
        }
      }
      if ( v12 >= 1 )
        v14 = System_Single__Parse(v13->m_Items[0], 0);
      if ( !v9 )
LABEL_21:
        sub_1C6BC60(v6, v7);
      if ( (unsigned int)v10 >= LODWORD(v9->max_length) )
LABEL_22:
        sub_1C6BC68(v6);
      *(v11 - 2) = v15;
      *(v11 - 1) = v16;
      *v11 = v14;
      v11 += 3;
      max_length = v5->max_length;
      ++v10;
    }
    while ( (int)v10 < max_length );
  }
  return (UnityEngine_Vector3_array *)v9;
}


UnityEngine_Vector3_array *SkillEntity__getSkillCutInPrefabSizes(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *ScriptStrings; // x0
  System_String_array *v5; // x19
  System_String_array *v6; // x0
  __int64 v7; // x1
  int max_length; // w8
  System_String_array *v9; // x20
  __int64 v10; // x22
  float *v11; // x23
  int v12; // w8
  System_String_array *v13; // x21
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s0
  float v18; // s0

  if ( (byte_4CB6E62 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Vector3___TypeInfo);
    sub_1C6BA08(&StringLiteral_18450/*"cutInPrefabSizes"*/);
    byte_4CB6E62 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18450/*"cutInPrefabSizes"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0;
  v5 = ScriptStrings;
  v6 = (System_String_array *)sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, LODWORD(ScriptStrings->max_length));
  max_length = v5->max_length;
  v9 = v6;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = (float *)&v6->m_Items[1];
    do
    {
      if ( (unsigned int)v10 >= max_length )
        goto LABEL_22;
      v6 = (System_String_array *)v5->m_Items[v10];
      if ( !v6 )
        goto LABEL_21;
      v6 = System_String__Split((System_String_o *)v6, 0x3Au, 0, 0);
      if ( !v6 )
        goto LABEL_21;
      v12 = v6->max_length;
      v13 = v6;
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      if ( v12 > 1 )
      {
        v17 = System_Single__Parse(v6->m_Items[1], 0);
        v12 = v13->max_length;
        v15 = v17;
        if ( v12 < 3 )
        {
          v16 = 0.0;
        }
        else
        {
          v18 = System_Single__Parse(v13->m_Items[2], 0);
          v12 = v13->max_length;
          v16 = v18;
        }
      }
      if ( v12 >= 1 )
        v14 = System_Single__Parse(v13->m_Items[0], 0);
      if ( !v9 )
LABEL_21:
        sub_1C6BC60(v6, v7);
      if ( (unsigned int)v10 >= LODWORD(v9->max_length) )
LABEL_22:
        sub_1C6BC68(v6);
      *(v11 - 2) = v15;
      *(v11 - 1) = v16;
      *v11 = v14;
      v11 += 3;
      max_length = v5->max_length;
      ++v10;
    }
    while ( (int)v10 < max_length );
  }
  return (UnityEngine_Vector3_array *)v9;
}


System_String_array *SkillEntity__getSkillCutInVoices(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6E5F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18452/*"cutInVoices"*/);
    byte_4CB6E5F = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18452/*"cutInVoices"*/, 0x2Fu, v2);
}


void SkillEntity__getSkillMessageInfo(
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
  sub_1C6B9AC((CGThumbnailListItem_o *)name, (int32_t)v9, v10, v11);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v12);
  *detail = EffectExplanation;
  sub_1C6B9AC((CGThumbnailListItem_o *)detail, (int32_t)EffectExplanation, v14, v15);
}


System_Collections_Generic_List_SkillAddEntity__o *SkillEntity__get_SortedSkillAddEntityList(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields._SortedSkillAddEntityList_k__BackingField;
}


bool SkillEntity__isActive(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 1;
}


bool SkillEntity__isForcedSkillSpeedOne(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  bool v4; // w0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E5D & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6813/*"ForcedSkillSpeed"*/);
    byte_4CB6E5D = 1;
  }
  param = 0;
  v4 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_6813/*"ForcedSkillSpeed"*/, &param, v2);
  return v4 && param == 1;
}


bool SkillEntity__isPassive(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool SkillEntity__isSkillCutInCamField(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB6E64 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18444/*"cutInCamPlayerAll"*/);
    byte_4CB6E64 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18444/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 2;
}


void SkillEntity__set_SortedSkillAddEntityList(
        SkillEntity_o *this,
        System_Collections_Generic_List_SkillAddEntity__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SortedSkillAddEntityList_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._SortedSkillAddEntityList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void SkillEntity_CondBranchSkillInfoData___ctor(SkillEntity_CondBranchSkillInfoData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1

  if ( (byte_4CB6E82 & 1) == 0 )
  {
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB6E82 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.condType = static_fields->Empty;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)Empty, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6E83 & 1) == 0 )
  {
    sub_1C6BA08(&SkillEntity___c_TypeInfo);
    byte_4CB6E83 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(SkillEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillEntity___c_TypeInfo->static_fields->__9 = (struct SkillEntity___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SkillEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SkillEntity___c___ctor(SkillEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SkillEntity___c___GetAvailableSkillAddEntity_b__22_0(
        SkillEntity___c_o *this,
        SkillAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return SkillAddEntity__IsOpen(x, (const MethodInfo *)x);
}