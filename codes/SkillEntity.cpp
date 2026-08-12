void SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597146B & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_597146B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_597144A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19254/*"cutInWorksAsEnemyCommandSpell"*/);
    byte_597144A = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_19254/*"cutInWorksAsEnemyCommandSpell"*/, &param, v2);
}


int32_t SkillEntity__GetAfterWaitGroup(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597145E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17413/*"afterWaitGroup"*/);
    byte_597145E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17413/*"afterWaitGroup"*/, 0, 0);
}


float SkillEntity__GetAfterWaitSecond(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597145F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17414/*"afterWaitTime"*/);
    byte_597145F = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17414/*"afterWaitTime"*/, 0, 0)
       / 1000.0;
}


System_Int32_array *SkillEntity__GetAssumedEffectId(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971451 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17638/*"assumedEffectId"*/);
    byte_5971451 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17638/*"assumedEffectId"*/, 0);
}


SkillAddEntity_o *SkillEntity__GetAvailableSkillAddEntity(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x19
  SkillEntity___c_c *v4; // x0
  struct SkillEntity___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__21_0; // x20
  Il2CppObject *v7; // x21
  struct SkillEntity___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5971438 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
    sub_2213A60(&System_Func_SkillAddEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__);
    sub_2213A60(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__21_0__);
    sub_2213A60(&SkillEntity___c_TypeInfo);
    byte_5971438 = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( !SortedSkillAddEntityList_k__BackingField || SortedSkillAddEntityList_k__BackingField->fields._size < 1 )
    return 0;
  v4 = SkillEntity___c_TypeInfo;
  if ( !*(&SkillEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SkillEntity___c_TypeInfo, method);
    v4 = SkillEntity___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__21_0 = (System_Func_object__bool__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = SkillEntity___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SkillAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__21_0, v7, Method_SkillEntity___c__GetAvailableSkillAddEntity_b__21_0__, 0);
    v8 = SkillEntity___c_TypeInfo->static_fields;
    v8->__9__21_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__21_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__21_0, (int32_t)_9__21_0, v9, v10, v11, v12, v13, v14);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__21_0,
                               (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


System_Int32_array *SkillEntity__GetBattleEffectMovieIds(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971459 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3240/*"BattleEffectMovieIds"*/);
    byte_5971459 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3240/*"BattleEffectMovieIds"*/, 0, 0);
}


System_String_o *SkillEntity__GetBattleSkillUseMessage(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971468 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17818/*"battleSkillUseMessageLabel"*/);
    byte_5971468 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17818/*"battleSkillUseMessageLabel"*/, 0, 0);
}


System_Int32_array *SkillEntity__GetBranchSkillFuncIds(SkillEntity_o *this, int32_t skillLv, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  SkillLvEntity_o *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  struct SkillEntity_CondBranchSkillInfoData_array *condBranchSkillInfos; // x22
  int max_length; // w8
  SkillLvMaster_o *v13; // x21
  __int64 v14; // x23
  SkillEntity_CondBranchSkillInfoData_o *v15; // x8
  const MethodInfo *v16; // x2
  System_Collections_Generic_HashSet_int__o *ret; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5971467 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_5971467 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  ret = v5;
  SkillEntity__SetCondBranchSkillInfo(this, v6);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.condBranchSkillInfos, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
    Master_object = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
    condBranchSkillInfos = this->fields.condBranchSkillInfos;
    if ( !condBranchSkillInfos )
      goto LABEL_15;
    max_length = condBranchSkillInfos->max_length;
    if ( max_length >= 1 )
    {
      v13 = (SkillLvMaster_o *)Master_object;
      v14 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= max_length )
          sub_2213CE4(Master_object);
        v15 = condBranchSkillInfos->m_Items[v14];
        if ( !v15 )
          break;
        if ( !v13 )
          break;
        Master_object = SkillLvMaster__GetEntity(v13, v15->fields.skillId, skillLv, v10);
        if ( !Master_object )
          break;
        SkillLvEntity__GetUniqueFuncIds(Master_object, &ret, v16);
        max_length = condBranchSkillInfos->max_length;
        if ( (int)++v14 >= max_length )
          return System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                   (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
LABEL_15:
      sub_2213CDC(Master_object, v9);
    }
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t SkillEntity__GetCameraFocusTargetPosition(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971469 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18488/*"cameraFocusTargetPosition"*/);
    byte_5971469 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18488/*"cameraFocusTargetPosition"*/, 0, 0);
}


SkillEntity_CondBranchSkillInfoData_array *SkillEntity__GetCondBranchSkillInfoDatas(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971466 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_SkillEntity_CondBranchSkillInfoData___);
    byte_5971466 = 1;
  }
  SkillEntity__SetCondBranchSkillInfo(this, method);
  return (SkillEntity_CondBranchSkillInfoData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condBranchSkillInfos,
                                                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_SkillEntity_CondBranchSkillInfoData___);
}


float SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597144C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19256/*"cutinAdditionalTime"*/);
    byte_597144C = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_19256/*"cutinAdditionalTime"*/, 0.0, 0);
}


int32_t SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971456 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19257/*"cutinFirstId"*/);
    byte_5971456 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_19257/*"cutinFirstId"*/, &param, v2);
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
  int32_t v8; // w1
  System_String_o *EffectTitle; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  System_String_o *EffectExplanation; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( isEquip )
    v8 = 0;
  else
    v8 = skillLv;
  EffectTitle = SkillEntity__getEffectTitle(this, v8, (const MethodInfo *)explanation);
  *title = EffectTitle;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)EffectTitle, v12, v13, v14, v15, v16, v17);
  EffectExplanation = SkillEntity__getEffectExplanation(this, skillLv, v18);
  *explanation = EffectExplanation;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)EffectExplanation, v20, v21, v22, v23, v24, v25);
}


System_String_o *SkillEntity__GetEnemyCountChangeMessage(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597145B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19911/*"enemyCountChangeMessage"*/);
    byte_597145B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19911/*"enemyCountChangeMessage"*/, 0, 0);
}


int32_t SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o **v6; // x8
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597144E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3258/*"BeforeFieldCallEffect"*/);
    sub_2213A60(&StringLiteral_2282/*"AfterFieldCallEffect"*/);
    byte_597144E = 1;
  }
  param = 0;
  if ( isBefore )
    v6 = (System_String_o **)&StringLiteral_3258/*"BeforeFieldCallEffect"*/;
  else
    v6 = (System_String_o **)&StringLiteral_2282/*"AfterFieldCallEffect"*/;
  if ( SkillEntity__checkScript(this, *v6, &param, v3) )
    return param;
  else
    return -1;
}


int32_t SkillEntity__GetIconId(SkillEntity_o *this, const MethodInfo *method)
{
  SkillEntity_o *v2; // x19
  __int64 v3; // x1
  int64_t BaseTime; // x20
  System_Int32_array *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v9; // x21
  unsigned __int64 v10; // x24
  int32_t v11; // w22
  const MethodInfo *v12; // x4
  int32_t *p_iconId; // x8
  SkillGroupOverwriteEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_5971455 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    this = (SkillEntity_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_5971455 = 1;
  }
  entity = 0;
  BaseTime = SkillLvMaster__GetBaseTime((const MethodInfo *)this);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = SkillGroupMaster__GetSkillGroupIdFromSkillId((SkillGroupMaster_o *)Master_object, v2->fields.id, v7);
  if ( !Master_object )
    goto LABEL_19;
  max_length = Master_object->max_length;
  v9 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(Master_object);
      v11 = v9->m_Items[v10];
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_19;
      Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                              (SkillGroupOverwriteMaster_o *)Master_object,
                                              &entity,
                                              v11,
                                              BaseTime,
                                              v12);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
      LODWORD(max_length) = v9->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_15;
    }
    if ( entity )
    {
      p_iconId = &entity->fields.iconId;
      return *p_iconId;
    }
LABEL_19:
    sub_2213CDC(Master_object, v6);
  }
LABEL_15:
  p_iconId = &v2->fields.iconId;
  return *p_iconId;
}


int32_t SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597144D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24761/*"skillScript_1"*/);
    byte_597144D = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_24761/*"skillScript_1"*/, &param, v2) )
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
  int32_t v11; // [xsp+8h] [xbp-28h] BYREF
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597144B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10487/*"OverwriteMotion_{0}"*/);
    byte_597144B = 1;
  }
  v11 = svtId;
  param = 0;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
  v6 = System_String__Format((System_String_o *)StringLiteral_10487/*"OverwriteMotion_{0}"*/, v5, 0);
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

  if ( (byte_5971454 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10482/*"OverWriteSkillInfoId"*/);
    byte_5971454 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10482/*"OverWriteSkillInfoId"*/, &param, v2);
  return param;
}


int32_t SkillEntity__GetPlayerAttackPreselectExecuteSkillId(
        SkillEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5971452 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23893/*"playerAttackPreselectExecuteSkillId"*/);
    byte_5971452 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23893/*"playerAttackPreselectExecuteSkillId"*/, defaultValue, 0);
}


int32_t SkillEntity__GetPlayerAttackPreselectExecuteSkillLv(
        SkillEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5971453 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23894/*"playerAttackPreselectExecuteSkillLv"*/);
    byte_5971453 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23894/*"playerAttackPreselectExecuteSkillLv"*/, defaultValue, 0);
}


float SkillEntity__GetTimingLastWaitTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971460 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25390/*"timingLastWaitTime"*/);
    byte_5971460 = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25390/*"timingLastWaitTime"*/, 0, 0)
       / 1000.0;
}


bool SkillEntity__IsBehaveAsAssistSkill(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597145D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17867/*"behaveAsAssistSkill"*/);
    byte_597145D = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17867/*"behaveAsAssistSkill"*/, &param, v2);
}


bool SkillEntity__IsCheckUpdateShiftServant(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971457 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4571/*"CheckUpdateShiftServant"*/);
    byte_5971457 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_4571/*"CheckUpdateShiftServant"*/, &param, v2);
}


bool SkillEntity__IsIgnoreBattlePointUp(
        SkillEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_597145A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_2213A60(&StringLiteral_7875/*"IgnoreBattlePointUp"*/);
    byte_597145A = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7875/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
  {
    v6 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_38834C4 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v6,
                         (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool SkillEntity__IsIgnoreValueUp(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971458 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7882/*"IgnoreValueUp"*/);
    byte_5971458 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_7882/*"IgnoreValueUp"*/, &param, v2);
}


bool SkillEntity__IsNotShowRankUpIcon(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971461 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21958/*"isNotShowRankUpIcon"*/);
    byte_5971461 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21958/*"isNotShowRankUpIcon"*/, 0);
}


bool SkillEntity__IsReActPassiveForSummonedEnemy(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597146A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24163/*"reActPassiveSkillForSummonedEnemy"*/);
    byte_597146A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24163/*"reActPassiveSkillForSummonedEnemy"*/, 0, 0) == 1;
}


bool SkillEntity__IsSkipCameraReset(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971463 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24771/*"skipCameraReset"*/);
    byte_5971463 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24771/*"skipCameraReset"*/, 0, 0) == 1;
}


bool SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597144F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_long___);
    sub_2213A60(&StringLiteral_4177/*"CanNotSkip"*/);
    byte_597144F = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_4177/*"CanNotSkip"*/,
           0,
           (const MethodInfo_3813FA0 *)Method_BasicHelper_GetValue_long___) == 0;
}


bool SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971450 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_long___);
    sub_2213A60(&StringLiteral_16199/*"WarBoardForcePassiveEveryBattle"*/);
    byte_5971450 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_16199/*"WarBoardForcePassiveEveryBattle"*/,
           0,
           (const MethodInfo_3813FA0 *)Method_BasicHelper_GetValue_long___) > 0;
}


System_Nullable_bool__o SkillEntity__PreventInvisibleWhenInstantDeath(SkillEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  bool v4; // zf
  System_Nullable_bool__o *v5; // x0
  bool v6; // w1
  System_Nullable_bool__o v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597145C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_bool___ctor__);
    sub_2213A60(&StringLiteral_23950/*"preventInvisibleWhenInstantDeath"*/);
    byte_597145C = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23950/*"preventInvisibleWhenInstantDeath"*/, -1, 0);
  v7 = 0;
  if ( IntValue < 0 )
    return 0;
  v4 = IntValue == 0;
  v5 = &v7;
  v6 = !v4;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v5,
    v6,
    (const MethodInfo_45E0940 *)Method_System_Nullable_bool___ctor__);
  return v7;
}


void SkillEntity__SetCondBranchSkillInfo(SkillEntity_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_condBranchSkillInfos; // x19
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  long double v12; // q0
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x1
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5971465 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_JsonManager_Deserialize_SkillEntity_CondBranchSkillInfoData_____);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_19012/*"condBranchSkillInfo"*/);
    byte_5971465 = 1;
  }
  value = 0;
  p_condBranchSkillInfos = (MissionNaviTransitionBoardItem_o *)&this->fields.condBranchSkillInfos;
  if ( !this->fields.condBranchSkillInfos )
  {
    script = this->fields.script;
    if ( !script )
      sub_2213CDC(0, method);
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19012/*"condBranchSkillInfo"*/,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v13 = value;
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5);
      v14 = JsonManager__Deserialize_object_(
              v13,
              (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_SkillEntity_CondBranchSkillInfoData_____);
    }
    else
    {
      v15 = Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___;
      v16 = *((_QWORD *)Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___ + 7);
      if ( !v16 )
      {
        sub_224B964(Method_System_Array_Empty_SkillEntity_CondBranchSkillInfoData___);
        v16 = v15[7];
      }
      v17 = *(_QWORD *)(v16 + 16);
      if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
        v17 = sub_224B908(v12);
      if ( !*(_DWORD *)(v17 + 228) )
        *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(v17, v5);
      v18 = *(_QWORD *)(v15[7] + 16LL);
      if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
        v18 = sub_224B908(v12);
      v14 = **(Il2CppObject ***)(v18 + 184);
    }
    p_condBranchSkillInfos->klass = (MissionNaviTransitionBoardItem_c *)v14;
    sub_2213A04(p_condBranchSkillInfos, (int32_t)v14, v6, v7, v8, v9, v10, v11);
  }
}


bool SkillEntity__TryGetMessageDisplayTime(SkillEntity_o *this, float *time, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v6; // x1
  bool HasKey; // w21

  if ( (byte_5971462 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22646/*"messageDisplayTime"*/);
    byte_5971462 = 1;
  }
  script = this->fields.script;
  v6 = (System_String_o *)StringLiteral_22646/*"messageDisplayTime"*/;
  *time = 0.0;
  HasKey = EntityScriptUtil__ScriptHasKey(script, v6, 0);
  if ( HasKey )
    *time = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22646/*"messageDisplayTime"*/, 0, 0)
          / 1000.0;
  return HasKey;
}


bool SkillEntity__TryGetSkipCameraResetStates(
        SkillEntity_o *this,
        System_String_array **states,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  bool HasKey; // w21
  System_String_array *StringArray; // x1

  if ( (byte_5971464 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24772/*"skipCameraResetStates"*/);
    byte_5971464 = 1;
  }
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_24772/*"skipCameraResetStates"*/, 0);
  StringArray = 0;
  if ( HasKey )
    StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_24772/*"skipCameraResetStates"*/, 0, 0);
  *states = StringArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)states, (int32_t)StringArray, v5, v6, v7, v8, v9, v10);
  return HasKey;
}


bool SkillEntity__checkScript(SkillEntity_o *this, System_String_o *key, int32_t *param, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  SkillEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_597143E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_597143E = 1;
  }
  script = this->fields.script;
  *param = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_2213CDC(Item, v8);
      }
      if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
      {
        *param = *(_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v10);
        LOBYTE(script) = 1;
      }
      else
      {
        sub_221405C(Item, qword_5984368, v10);
        LOBYTE(script) = (unsigned __int8)SkillEntity__getActIndividuality(v11, v12);
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

  if ( (byte_5971440 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_18739/*"checkUseTreasure"*/);
    byte_5971440 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_18739/*"checkUseTreasure"*/,
            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0);
}


System_Int32_array *SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_597143F & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_597143F = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
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

  if ( (byte_597143A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_597143A = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v3);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_2213CDC(MasterData_object, *(_QWORD *)&lv);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  LocalizationManager_c *v15; // x0

  if ( (byte_597143B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_597143B = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v3);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_2213CDC(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v10 = 1;
  else
    v10 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v10, v9);
  if ( Entity )
    return SkillLvEntity__getDetail_49901180(Entity, lv, 0, v13);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v15 = LocalizationManager_TypeInfo;
  }
  return v15->static_fields->unknownNameText;
}


System_Int32_array *SkillEntity__getEffectList(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.effectList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SkillEntity__getEffectTitle(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  int v5; // w8
  System_String_o *v6; // x21
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x19
  Il2CppObject *v9; // x0
  System_String_o *v11; // x20
  const MethodInfo *v12; // x1
  Il2CppObject *Name; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971439 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12748/*"SKILL_EFFECT_TITLE"*/);
    sub_2213A60(&StringLiteral_12747/*"SKILL_EFFECT_LEVEL_TITLE"*/);
    byte_5971439 = 1;
  }
  v5 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( lv < 1 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12748/*"SKILL_EFFECT_TITLE"*/, 0);
    Name = (Il2CppObject *)SkillEntity__getName(this, v12);
    return System_String__Format(v11, Name, 0);
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12747/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0);
    v8 = (Il2CppObject *)SkillEntity__getName(this, v7);
    v14 = lv;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v14);
    return System_String__Format_75697880(v6, v8, v9, 0);
  }
}


System_String_o *SkillEntity__getName(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x8
  SkillAddEntity_o *AvailableSkillAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_5971437 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__);
    byte_5971437 = 1;
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
  __int64 v8; // x2
  SkillEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5971442 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5971442 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_2213CDC(script, key);
  }
  if ( script->klass == (System_Collections_Generic_Dictionary_object__object__c *)qword_5984390 )
    return System_String__Split((System_String_o *)script, splitChar, 0, 0);
  sub_221405C(script, qword_5984390, v8);
  return SkillEntity__getSkillCutInVoices(v10, v11);
}


int32_t SkillEntity__getSkillChargeTime(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  SkillLvEntity_o *Entity; // x0

  if ( (byte_597143C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597143C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
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

  if ( (byte_5971447 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19245/*"cutInCamPlayerAll"*/);
    byte_5971447 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_19245/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 1;
}


int32_t SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597143D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19246/*"cutInId"*/);
    byte_597143D = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_19246/*"cutInId"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971449 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19247/*"cutInMessageMode"*/);
    byte_5971449 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_19247/*"cutInMessageMode"*/, &param, v2);
  return param;
}


System_String_array *SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971444 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19249/*"cutInPrefabInfo"*/);
    byte_5971444 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_19249/*"cutInPrefabInfo"*/, 0x2Cu, v2);
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
  float *v11; // x24
  float v12; // s8
  float v13; // s9
  int v14; // w8
  float v15; // s10
  System_String_array *v16; // x21

  if ( (byte_5971445 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_19250/*"cutInPrefabOffsets"*/);
    byte_5971445 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_19250/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0;
  v5 = ScriptStrings;
  v6 = (System_String_array *)sub_2213B20(UnityEngine_Vector3___TypeInfo, LODWORD(ScriptStrings->max_length));
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
      v12 = 0.0;
      v13 = 0.0;
      v14 = v6->max_length;
      v15 = 0.0;
      v16 = v6;
      if ( v14 > 1 )
      {
        v13 = System_Single__Parse(v6->m_Items[1], 0);
        v14 = v16->max_length;
        if ( v14 < 3 )
        {
          v15 = 0.0;
        }
        else
        {
          v15 = System_Single__Parse(v16->m_Items[2], 0);
          v14 = v16->max_length;
        }
      }
      if ( v14 >= 1 )
        v12 = System_Single__Parse(v16->m_Items[0], 0);
      if ( !v9 )
LABEL_21:
        sub_2213CDC(v6, v7);
      if ( (unsigned int)v10 >= LODWORD(v9->max_length) )
LABEL_22:
        sub_2213CE4(v6);
      *(v11 - 2) = v13;
      *(v11 - 1) = v15;
      ++v10;
      *v11 = v12;
      v11 += 3;
      max_length = v5->max_length;
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
  float *v11; // x24
  float v12; // s8
  float v13; // s9
  int v14; // w8
  float v15; // s10
  System_String_array *v16; // x21

  if ( (byte_5971446 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_19251/*"cutInPrefabSizes"*/);
    byte_5971446 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_19251/*"cutInPrefabSizes"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0;
  v5 = ScriptStrings;
  v6 = (System_String_array *)sub_2213B20(UnityEngine_Vector3___TypeInfo, LODWORD(ScriptStrings->max_length));
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
      v12 = 0.0;
      v13 = 0.0;
      v14 = v6->max_length;
      v15 = 0.0;
      v16 = v6;
      if ( v14 > 1 )
      {
        v13 = System_Single__Parse(v6->m_Items[1], 0);
        v14 = v16->max_length;
        if ( v14 < 3 )
        {
          v15 = 0.0;
        }
        else
        {
          v15 = System_Single__Parse(v16->m_Items[2], 0);
          v14 = v16->max_length;
        }
      }
      if ( v14 >= 1 )
        v12 = System_Single__Parse(v16->m_Items[0], 0);
      if ( !v9 )
LABEL_21:
        sub_2213CDC(v6, v7);
      if ( (unsigned int)v10 >= LODWORD(v9->max_length) )
LABEL_22:
        sub_2213CE4(v6);
      *(v11 - 2) = v13;
      *(v11 - 1) = v15;
      ++v10;
      *v11 = v12;
      v11 += 3;
      max_length = v5->max_length;
    }
    while ( (int)v10 < max_length );
  }
  return (UnityEngine_Vector3_array *)v9;
}


System_String_array *SkillEntity__getSkillCutInVoices(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971443 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19253/*"cutInVoices"*/);
    byte_5971443 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_19253/*"cutInVoices"*/, 0x2Fu, v2);
}


void SkillEntity__getSkillMessageInfo(
        SkillEntity_o *this,
        System_String_o **name,
        System_String_o **detail,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x2
  System_String_o *EffectExplanation; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  v9 = SkillEntity__getName(this, (const MethodInfo *)name);
  *name = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)name, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v16);
  *detail = EffectExplanation;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)detail, (int32_t)EffectExplanation, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_5971441 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7107/*"ForcedSkillSpeed"*/);
    byte_5971441 = 1;
  }
  param = 0;
  v4 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_7107/*"ForcedSkillSpeed"*/, &param, v2);
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

  if ( (byte_5971448 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19245/*"cutInCamPlayerAll"*/);
    byte_5971448 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_19245/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 2;
}


void SkillEntity__set_SortedSkillAddEntityList(
        SkillEntity_o *this,
        System_Collections_Generic_List_SkillAddEntity__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SortedSkillAddEntityList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SortedSkillAddEntityList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SkillEntity_CondBranchSkillInfoData___ctor(SkillEntity_CondBranchSkillInfoData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **v9; // x8
  struct System_String_o *v10; // x1

  v9 = *(struct System_String_o ***)(qword_5984390 + 184);
  v10 = *v9;
  this->fields.condType = *v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v10, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597146C & 1) == 0 )
  {
    sub_2213A60(&SkillEntity___c_TypeInfo);
    byte_597146C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SkillEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillEntity___c_TypeInfo->static_fields->__9 = (struct SkillEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SkillEntity___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return SkillAddEntity__IsOpen(x, (const MethodInfo *)x);
}