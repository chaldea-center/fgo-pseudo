void SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31581 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D31581 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4D31567 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18581/*"cutInWorksAsEnemyCommandSpell"*/);
    byte_4D31567 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18581/*"cutInWorksAsEnemyCommandSpell"*/, &param, v2);
}


int32_t SkillEntity__GetAfterWaitGroup(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31579 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16837/*"afterWaitGroup"*/);
    byte_4D31579 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16837/*"afterWaitGroup"*/, 0, 0);
}


float SkillEntity__GetAfterWaitSecond(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3157A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16838/*"afterWaitTime"*/);
    byte_4D3157A = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16838/*"afterWaitTime"*/, 0, 0)
       / 1000.0;
}


System_Int32_array *SkillEntity__GetAssumedEffectId(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3156E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17044/*"assumedEffectId"*/);
    byte_4D3156E = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17044/*"assumedEffectId"*/, 0);
}


SkillAddEntity_o *SkillEntity__GetAvailableSkillAddEntity(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x19
  SkillEntity___c_c *v4; // x0
  System_Func_object__bool__o *_9__21_0; // x20
  Il2CppObject *v6; // x21
  struct SkillEntity___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D31555 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
    sub_1C93AD4(&System_Func_SkillAddEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__);
    sub_1C93AD4(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__21_0__);
    sub_1C93AD4(&SkillEntity___c_TypeInfo);
    byte_4D31555 = 1;
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
  _9__21_0 = (System_Func_object__bool__o *)v4->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = SkillEntity___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__21_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_SkillAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__21_0, v6, Method_SkillEntity___c__GetAvailableSkillAddEntity_b__21_0__, 0);
    static_fields = SkillEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__21_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v8, v9, v10, v11, v12, v13);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__21_0,
                               (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


System_Int32_array *SkillEntity__GetBattleEffectMovieIds(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31574 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3132/*"BattleEffectMovieIds"*/);
    byte_4D31574 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3132/*"BattleEffectMovieIds"*/, 0, 0);
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

  if ( (byte_4D31580 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4D31580 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  ret = v5;
  SkillEntity__SetCondBranchSkillInfo(this, v6);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.condBranchSkillInfos, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
          sub_1C93D34(Master_object);
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
                   (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
LABEL_15:
      sub_1C93D2C(Master_object, v8);
    }
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


SkillEntity_CondBranchSkillInfoData_array *SkillEntity__GetCondBranchSkillInfoDatas(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D3157F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_SkillEntity_CondBranchSkillInfoData___);
    byte_4D3157F = 1;
  }
  SkillEntity__SetCondBranchSkillInfo(this, method);
  return (SkillEntity_CondBranchSkillInfoData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condBranchSkillInfos,
                                                        (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_SkillEntity_CondBranchSkillInfoData___);
}


float SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31569 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18583/*"cutinAdditionalTime"*/);
    byte_4D31569 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18583/*"cutinAdditionalTime"*/, 0.0, 0);
}


int32_t SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D31571 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18584/*"cutinFirstId"*/);
    byte_4D31571 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18584/*"cutinFirstId"*/, &param, v2);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2
  System_String_o *EffectExplanation; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( isEquip )
    v7 = 0;
  else
    v7 = skillLv;
  EffectTitle = SkillEntity__getEffectTitle(this, v7, (const MethodInfo *)explanation);
  *title = EffectTitle;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)title, (int32_t)EffectTitle, v12, v13, v14, v15, v16, v17);
  EffectExplanation = SkillEntity__getEffectExplanation(this, skillLv, v18);
  *explanation = EffectExplanation;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)explanation, (int32_t)EffectExplanation, v20, v21, v22, v23, v24, v25);
}


System_String_o *SkillEntity__GetEnemyCountChangeMessage(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31576 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19214/*"enemyCountChangeMessage"*/);
    byte_4D31576 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19214/*"enemyCountChangeMessage"*/, 0, 0);
}


int32_t SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o **v6; // x8
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D3156B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3148/*"BeforeFieldCallEffect"*/);
    sub_1C93AD4(&StringLiteral_2189/*"AfterFieldCallEffect"*/);
    byte_4D3156B = 1;
  }
  param = 0;
  if ( isBefore )
    v6 = (System_String_o **)&StringLiteral_3148/*"BeforeFieldCallEffect"*/;
  else
    v6 = (System_String_o **)&StringLiteral_2189/*"AfterFieldCallEffect"*/;
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
  if ( (byte_4D31570 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    this = (SkillEntity_o *)sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D31570 = 1;
  }
  entity = 0;
  BaseTime = SkillLvMaster__GetBaseTime((const MethodInfo *)this);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillGroupMaster___);
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
        sub_1C93D34(Master_object);
      v10 = v8->m_Items[v9];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
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
    sub_1C93D2C(Master_object, v5);
  }
LABEL_15:
  p_iconId = &v2->fields.iconId;
  return *p_iconId;
}


int32_t SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D3156A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23808/*"skillScript_1"*/);
    byte_4D3156A = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_23808/*"skillScript_1"*/, &param, v2) )
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

  if ( (byte_4D31568 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_10138/*"OverwriteMotion_{0}"*/);
    byte_4D31568 = 1;
  }
  v11 = svtId;
  param = 0;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v6 = System_String__Format((System_String_o *)StringLiteral_10138/*"OverwriteMotion_{0}"*/, v5, 0);
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

  if ( (byte_4D3156F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_10133/*"OverWriteSkillInfoId"*/);
    byte_4D3156F = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10133/*"OverWriteSkillInfoId"*/, &param, v2);
  return param;
}


float SkillEntity__GetTimingLastWaitTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3157B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24400/*"timingLastWaitTime"*/);
    byte_4D3157B = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24400/*"timingLastWaitTime"*/, 0, 0)
       / 1000.0;
}


bool SkillEntity__IsBehaveAsAssistSkill(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D31578 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17259/*"behaveAsAssistSkill"*/);
    byte_4D31578 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17259/*"behaveAsAssistSkill"*/, &param, v2);
}


bool SkillEntity__IsCheckUpdateShiftServant(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D31572 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4420/*"CheckUpdateShiftServant"*/);
    byte_4D31572 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_4420/*"CheckUpdateShiftServant"*/, &param, v2);
}


bool SkillEntity__IsIgnoreBattlePointUp(
        SkillEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4D31575 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C93AD4(&StringLiteral_7592/*"IgnoreBattlePointUp"*/);
    byte_4D31575 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7592/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
  {
    v6 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_31CE324 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v6,
                         (const MethodInfo_31B01E4 *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool SkillEntity__IsIgnoreValueUp(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D31573 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7599/*"IgnoreValueUp"*/);
    byte_4D31573 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_7599/*"IgnoreValueUp"*/, &param, v2);
}


bool SkillEntity__IsNotShowRankUpIcon(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3157C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21180/*"isNotShowRankUpIcon"*/);
    byte_4D3157C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21180/*"isNotShowRankUpIcon"*/, 0);
}


bool SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3156C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetValue_long___);
    sub_1C93AD4(&StringLiteral_4052/*"CanNotSkip"*/);
    byte_4D3156C = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_4052/*"CanNotSkip"*/,
           0,
           (const MethodInfo_3192060 *)Method_BasicHelper_GetValue_long___) == 0;
}


bool SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3156D & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetValue_long___);
    sub_1C93AD4(&StringLiteral_15687/*"WarBoardForcePassiveEveryBattle"*/);
    byte_4D3156D = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_15687/*"WarBoardForcePassiveEveryBattle"*/,
           0,
           (const MethodInfo_3192060 *)Method_BasicHelper_GetValue_long___) > 0;
}


System_Nullable_bool__o SkillEntity__PreventInvisibleWhenInstantDeath(SkillEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  bool v4; // w1
  System_Nullable_bool__o *v5; // x0
  System_Nullable_bool__o v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D31577 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_bool___ctor__);
    sub_1C93AD4(&StringLiteral_23050/*"preventInvisibleWhenInstantDeath"*/);
    byte_4D31577 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23050/*"preventInvisibleWhenInstantDeath"*/, -1, 0);
  v6 = 0;
  if ( IntValue < 0 )
    return 0;
  v4 = IntValue != 0;
  v5 = &v6;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v5,
    v4,
    (const MethodInfo_399C0AC *)Method_System_Nullable_bool___ctor__);
  return v6;
}


void SkillEntity__SetCondBranchSkillInfo(SkillEntity_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_condBranchSkillInfos; // x19
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  long double inited; // q0
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  GrandQuestFolderBoardItem_c *v14; // x1
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  GrandQuestFolderBoardItem_c **v19; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D3157E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&Method_JsonManager_Deserialize_SkillEntity_CondBranchSkillInfoData_____);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_18349/*"condBranchSkillInfo"*/);
    byte_4D3157E = 1;
  }
  value = 0;
  p_condBranchSkillInfos = (GrandQuestFolderBoardItem_o *)&this->fields.condBranchSkillInfos;
  if ( !this->fields.condBranchSkillInfos )
  {
    script = this->fields.script;
    if ( !script )
      sub_1C93D2C(0, method);
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18349/*"condBranchSkillInfo"*/,
           &value,
           (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v12 = value;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v13 = JsonManager__Deserialize_object_(
              v12,
              (const MethodInfo_3213E20 *)Method_JsonManager_Deserialize_SkillEntity_CondBranchSkillInfoData_____);
      LODWORD(v14) = (_DWORD)v13;
      p_condBranchSkillInfos->klass = (GrandQuestFolderBoardItem_c *)v13;
    }
    else
    {
      v15 = Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___;
      v16 = *((_QWORD *)Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___ + 7);
      if ( !v16 )
      {
        sub_1C69BC4(Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___);
        v16 = v15[7];
      }
      v17 = *(_QWORD *)(v16 + 16);
      if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
        v17 = sub_1C69B68(inited);
      if ( !*(_DWORD *)(v17 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v17);
      v18 = *(_QWORD *)(v15[7] + 16LL);
      if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
        v18 = sub_1C69B68(inited);
      v19 = *(GrandQuestFolderBoardItem_c ***)(v18 + 184);
      v14 = *v19;
      p_condBranchSkillInfos->klass = *v19;
    }
    sub_1C93A78(p_condBranchSkillInfos, (int32_t)v14, v5, v6, v7, v8, v9, v10);
  }
}


bool SkillEntity__TryGetMessageDisplayTime(SkillEntity_o *this, float *time, const MethodInfo *method)
{
  bool HasKey; // w21

  if ( (byte_4D3157D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21812/*"messageDisplayTime"*/);
    byte_4D3157D = 1;
  }
  *time = 0.0;
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21812/*"messageDisplayTime"*/, 0);
  if ( HasKey )
    *time = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21812/*"messageDisplayTime"*/, 0, 0)
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
  SkillEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4D3155B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    byte_4D3155B = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C93D2C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        *param = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
        LOBYTE(script) = 1;
      }
      else
      {
        sub_1C940C8(Item);
        LOBYTE(script) = (unsigned __int8)SkillEntity__getActIndividuality(v12, v13);
      }
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


bool SkillEntity__checkUseTreasure(SkillEntity_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D3155D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&StringLiteral_18089/*"checkUseTreasure"*/);
    byte_4D3155D = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_18089/*"checkUseTreasure"*/,
            (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0);
}


System_Int32_array *SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4D3155C & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D3155C = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
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

  if ( (byte_4D31557 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D31557 = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C69B68(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C69B68(v3);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_1C93D2C(MasterData_object, *(_QWORD *)&lv);
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

  if ( (byte_4D31558 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D31558 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C69B68(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C69B68(v3);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_1C93D2C(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v10 = 1;
  else
    v10 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v10, v9);
  if ( Entity )
    return SkillLvEntity__getDetail_43584536(Entity, lv, 0, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D2BD02 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2BD02 = 1;
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

  if ( (byte_4D31556 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_12319/*"SKILL_EFFECT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12318/*"SKILL_EFFECT_LEVEL_TITLE"*/);
    byte_4D31556 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SKILL_EFFECT_TITLE"*/, 0);
    Name = (Il2CppObject *)SkillEntity__getName(this, v11);
    return System_String__Format(v10, Name, 0);
  }
  else
  {
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0);
    v7 = (Il2CppObject *)SkillEntity__getName(this, v6);
    v13 = lv;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    return System_String__Format_64467032(v5, v7, v8, 0);
  }
}


System_String_o *SkillEntity__getName(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x8
  SkillAddEntity_o *AvailableSkillAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4D31554 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__);
    byte_4D31554 = 1;
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

  if ( (byte_4D3155F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D3155F = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1C93D2C(script, key);
  }
  if ( (System_String_c *)script->klass == string_TypeInfo )
    return System_String__Split((System_String_o *)script, splitChar, 0, 0);
  sub_1C940C8(script);
  return SkillEntity__getSkillCutInVoices(v9, v10);
}


int32_t SkillEntity__getSkillChargeTime(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4D31559 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31559 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v6);
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

  if ( (byte_4D31564 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18572/*"cutInCamPlayerAll"*/);
    byte_4D31564 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18572/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 1;
}


int32_t SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D3155A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18573/*"cutInId"*/);
    byte_4D3155A = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18573/*"cutInId"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D31566 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18574/*"cutInMessageMode"*/);
    byte_4D31566 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18574/*"cutInMessageMode"*/, &param, v2);
  return param;
}


System_String_array *SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D31561 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18576/*"cutInPrefabInfo"*/);
    byte_4D31561 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18576/*"cutInPrefabInfo"*/, 0x2Cu, v2);
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

  if ( (byte_4D31562 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    sub_1C93AD4(&StringLiteral_18577/*"cutInPrefabOffsets"*/);
    byte_4D31562 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18577/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0;
  v5 = ScriptStrings;
  v6 = (System_String_array *)sub_1C93B7C(UnityEngine_Vector3___TypeInfo, LODWORD(ScriptStrings->max_length));
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
        sub_1C93D2C(v6, v7);
      if ( (unsigned int)v10 >= LODWORD(v9->max_length) )
LABEL_22:
        sub_1C93D34(v6);
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

  if ( (byte_4D31563 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    sub_1C93AD4(&StringLiteral_18578/*"cutInPrefabSizes"*/);
    byte_4D31563 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18578/*"cutInPrefabSizes"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0;
  v5 = ScriptStrings;
  v6 = (System_String_array *)sub_1C93B7C(UnityEngine_Vector3___TypeInfo, LODWORD(ScriptStrings->max_length));
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
        sub_1C93D2C(v6, v7);
      if ( (unsigned int)v10 >= LODWORD(v9->max_length) )
LABEL_22:
        sub_1C93D34(v6);
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

  if ( (byte_4D31560 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18580/*"cutInVoices"*/);
    byte_4D31560 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18580/*"cutInVoices"*/, 0x2Fu, v2);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  System_String_o *EffectExplanation; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  v9 = SkillEntity__getName(this, (const MethodInfo *)name);
  *name = v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)name, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v16);
  *detail = EffectExplanation;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)detail, (int32_t)EffectExplanation, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_4D3155E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_6852/*"ForcedSkillSpeed"*/);
    byte_4D3155E = 1;
  }
  param = 0;
  v4 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_6852/*"ForcedSkillSpeed"*/, &param, v2);
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

  if ( (byte_4D31565 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18572/*"cutInCamPlayerAll"*/);
    byte_4D31565 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18572/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 2;
}


void SkillEntity__set_SortedSkillAddEntityList(
        SkillEntity_o *this,
        System_Collections_Generic_List_SkillAddEntity__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SortedSkillAddEntityList_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SortedSkillAddEntityList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SkillEntity_CondBranchSkillInfoData___ctor(SkillEntity_CondBranchSkillInfoData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1

  if ( (byte_4D31582 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    byte_4D31582 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.condType = static_fields->Empty;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)Empty, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31583 & 1) == 0 )
  {
    sub_1C93AD4(&SkillEntity___c_TypeInfo);
    byte_4D31583 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SkillEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillEntity___c_TypeInfo->static_fields->__9 = (struct SkillEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SkillEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SkillEntity___c___ctor(SkillEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SkillEntity___c___GetAvailableSkillAddEntity_b__21_0(
        SkillEntity___c_o *this,
        SkillAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return SkillAddEntity__IsOpen(x, (const MethodInfo *)x);
}