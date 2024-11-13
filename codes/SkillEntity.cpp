void __fastcall SkillEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16C40 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillEntity_TypeInfo, v1, v2);
    byte_4B16C40 = 1;
  }
  SkillEntity_TypeInfo->static_fields->CHECK_SCRIPT_TRUE = 1;
}


void __fastcall SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16C3F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SkillEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  return id;
}


int32_t __fastcall SkillEntity__CreatePrimaryKey(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Int32_array *__fastcall SkillEntity__GetAssumedEffectId(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C36 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17114/*"assumedEffectId"*/, method, v2);
    byte_4B16C36 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17114/*"assumedEffectId"*/, 0LL);
}


SkillAddEntity_o *__fastcall SkillEntity__GetAvailableSkillAddEntity(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x19
  SkillEntity___c_c *v14; // x0
  System_Func_object__bool__o *_9__22_0; // x20
  Il2CppObject *v16; // x21
  struct SkillEntity___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B16C1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___, method, v2);
    sub_1BCA7E0(&System_Func_SkillAddEntity__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, v9, v10);
    sub_1BCA7E0(&SkillEntity___c_TypeInfo, v11, v12);
    byte_4B16C1C = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( !SortedSkillAddEntityList_k__BackingField || SortedSkillAddEntityList_k__BackingField->fields._size < 1 )
    return 0LL;
  v14 = SkillEntity___c_TypeInfo;
  if ( !SkillEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillEntity___c_TypeInfo, method);
    v14 = SkillEntity___c_TypeInfo;
  }
  _9__22_0 = (System_Func_object__bool__o *)v14->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, method);
      v14 = SkillEntity___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__22_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_SkillAddEntity__bool__TypeInfo, method, v2, v3);
    System_Func_object__bool____ctor(_9__22_0, v16, Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, 0LL);
    static_fields = SkillEntity___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__22_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
      (int64_t)_9__22_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__22_0,
                               (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


System_Int32_array *__fastcall SkillEntity__GetBattleEffectMovieIds(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C3C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3261/*"BattleEffectMovieIds"*/, method, v2);
    byte_4B16C3C = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3261/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


float __fastcall SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C31 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18602/*"cutinAdditionalTime"*/, method, v2);
    byte_4B16C31 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18602/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


int32_t __fastcall SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C39 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18603/*"cutinFirstId"*/, method, v2);
    byte_4B16C39 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18603/*"cutinFirstId"*/, &param, v3);
  return param;
}


System_String_o *__fastcall SkillEntity__GetEnemyCountChangeMessage(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C3E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19209/*"enemyCountChangeMessage"*/, method, v2);
    byte_4B16C3E = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19209/*"enemyCountChangeMessage"*/, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o **v8; // x8
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16C33 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3273/*"BeforeFieldCallEffect"*/, isBefore, method);
    sub_1BCA7E0(&StringLiteral_2289/*"AfterFieldCallEffect"*/, v6, v7);
    byte_4B16C33 = 1;
  }
  param = 0;
  if ( isBefore )
    v8 = (System_String_o **)&StringLiteral_3273/*"BeforeFieldCallEffect"*/;
  else
    v8 = (System_String_o **)&StringLiteral_2289/*"AfterFieldCallEffect"*/;
  if ( SkillEntity__checkScript(this, *v8, &param, v3) )
    return param;
  else
    return -1;
}


int32_t __fastcall SkillEntity__GetIconId(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SkillEntity_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  int64_t BaseTime; // x20
  System_Int32_array *Master_object; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  System_Int32_array *v14; // x21
  unsigned __int64 v15; // x24
  int32_t v16; // w22
  const MethodInfo *v17; // x4
  int32_t *p_iconId; // x8
  SkillGroupOverwriteEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4B16C38 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillGroupMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v4, v5);
    this = (SkillEntity_o *)sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B16C38 = 1;
  }
  entity = 0LL;
  BaseTime = SkillLvMaster__GetBaseTime((const MethodInfo *)this);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = SkillGroupMaster__GetSkillGroupIdFromSkillId((SkillGroupMaster_o *)Master_object, v3->fields.id, v12);
  if ( !Master_object )
    goto LABEL_19;
  v13 = *(_QWORD *)&Master_object->max_length;
  v14 = Master_object;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
        sub_1BCAA44(Master_object, v11);
      v16 = v14->m_Items[v15 + 1];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_19;
      Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                              (SkillGroupOverwriteMaster_o *)Master_object,
                                              &entity,
                                              v16,
                                              BaseTime,
                                              v17);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
      LODWORD(v13) = v14->max_length;
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_15;
    }
    if ( entity )
    {
      p_iconId = &entity->fields.iconId;
      return *p_iconId;
    }
LABEL_19:
    sub_1BCAA3C(Master_object, v11);
  }
LABEL_15:
  p_iconId = &v3->fields.iconId;
  return *p_iconId;
}


int32_t __fastcall SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C32 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23593/*"skillScript_1"*/, method, v2);
    byte_4B16C32 = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_23593/*"skillScript_1"*/, &param, v3) )
    return param;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__GetMotionId(SkillEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x3
  bool v10; // w0
  int32_t *p_motion; // x8
  int32_t v13; // [xsp+8h] [xbp-38h] BYREF
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16C30 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&StringLiteral_10241/*"OverwriteMotion_{0}"*/, v5, v6);
    byte_4B16C30 = 1;
  }
  v13 = svtId;
  param = 0;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v8 = System_String__Format((System_String_o *)StringLiteral_10241/*"OverwriteMotion_{0}"*/, v7, 0LL);
  v10 = SkillEntity__checkScript(this, v8, &param, v9);
  p_motion = &this->fields.motion;
  if ( v10 )
    p_motion = &param;
  return *p_motion;
}


int32_t __fastcall SkillEntity__GetOverWriteSkillInfoId(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C37 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10236/*"OverWriteSkillInfoId"*/, method, v2);
    byte_4B16C37 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10236/*"OverWriteSkillInfoId"*/, &param, v3);
  return param;
}


bool __fastcall SkillEntity__IsCheckUpdateShiftServant(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C3A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4508/*"CheckUpdateShiftServant"*/, method, v2);
    byte_4B16C3A = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_4508/*"CheckUpdateShiftServant"*/, &param, v3);
}


bool __fastcall SkillEntity__IsIgnoreBattlePointUp(
        SkillEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4B16C3D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int___, battlePointIds, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int___, v5, v6);
    sub_1BCA7E0(&StringLiteral_7583/*"IgnoreBattlePointUp"*/, v7, v8);
    byte_4B16C3D = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7583/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
  {
    v10 = System_Linq_Enumerable__Intersect_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
            IntArray,
            (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v10,
                         (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool __fastcall SkillEntity__IsIgnoreValueUp(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C3B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7590/*"IgnoreValueUp"*/, method, v2);
    byte_4B16C3B = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_7590/*"IgnoreValueUp"*/, &param, v3);
}


bool __fastcall SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B16C34 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_long___, method, v2);
    sub_1BCA7E0(&StringLiteral_4118/*"CanNotSkip"*/, v4, v5);
    byte_4B16C34 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_4118/*"CanNotSkip"*/,
           0LL,
           (const MethodInfo_2F00B40 *)Method_BasicHelper_GetValue_long___) == 0;
}


bool __fastcall SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B16C35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_long___, method, v2);
    sub_1BCA7E0(&StringLiteral_15753/*"WarBoardForcePassiveEveryBattle"*/, v4, v5);
    byte_4B16C35 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_15753/*"WarBoardForcePassiveEveryBattle"*/,
           0LL,
           (const MethodInfo_2F00B40 *)Method_BasicHelper_GetValue_long___) > 0;
}


bool __fastcall SkillEntity__checkScript(
        SkillEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x8
  SkillEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4B16C23 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, param);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B16C23 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCAA3C(Item, v12);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v16 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15);
        LOBYTE(script) = 1;
        *param = v16;
      }
      else
      {
        sub_1BCACFC(Item);
        LOBYTE(script) = (unsigned __int8)SkillEntity__getActIndividuality(v17, v18);
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
  __int64 v6; // x1
  bool v7; // w8
  bool result; // w0
  int32_t v9; // w19
  SkillEntity_c *v10; // x0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C26 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillEntity_TypeInfo, key, method);
    byte_4B16C26 = 1;
  }
  param = 0;
  v7 = SkillEntity__checkScript(this, key, &param, v3);
  result = 0;
  if ( v7 )
  {
    v9 = param;
    v10 = SkillEntity_TypeInfo;
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo, v6);
      v10 = SkillEntity_TypeInfo;
    }
    return v9 == v10->static_fields->CHECK_SCRIPT_TRUE;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillEntity__checkUseTreasure(SkillEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16C25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type, method);
    sub_1BCA7E0(&StringLiteral_18130/*"checkUseTreasure"*/, v5, v6);
    byte_4B16C25 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_18130/*"checkUseTreasure"*/,
            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


System_Int32_array *__fastcall SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0

  if ( (byte_4B16C24 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B16C24 = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getEffectChargeTurn(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4B16C1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6, v7);
    byte_4B16C1E = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v3);
  MasterData_object = **(Il2CppObject ***)(v9 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BCAA3C(MasterData_object, *(_QWORD *)&lv);
  }
  v12 = lv <= 1 ? 1 : lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v12, v11);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  SkillLvEntity_o *Entity; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  LocalizationManager_c *v20; // x0

  if ( (byte_4B16C1F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9);
    byte_4B16C1F = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(v3);
  MasterData_object = **(Il2CppObject ***)(v11 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BCAA3C(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v14 = 1;
  else
    v14 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v14, v13);
  if ( Entity )
    return SkillLvEntity__getDetail_40665920(Entity, lv, 0, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    byte_4B1194D = 1;
  }
  v20 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v20 = LocalizationManager_TypeInfo;
  }
  return v20->static_fields->unknownNameText;
}


System_Int32_array *__fastcall SkillEntity__getEffectList(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.effectList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillEntity__getEffectTitle(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x21
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x19
  Il2CppObject *v14; // x0
  System_String_o *v16; // x20
  const MethodInfo *v17; // x1
  Il2CppObject *Name; // x0
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C1D & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&lv, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_12304/*"SKILL_EFFECT_TITLE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_12303/*"SKILL_EFFECT_LEVEL_TITLE"*/, v9, v10);
    byte_4B16C1D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
  if ( lv < 1 )
  {
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12304/*"SKILL_EFFECT_TITLE"*/, 0LL);
    Name = (Il2CppObject *)SkillEntity__getName(this, v17);
    return System_String__Format(v16, Name, 0LL);
  }
  else
  {
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12303/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0LL);
    v13 = (Il2CppObject *)SkillEntity__getName(this, v12);
    v19 = lv;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    return System_String__Format_62415592(v11, v13, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillEntity__getFuncExplanation(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  LocalizationManager_c *v19; // x0

  if ( (byte_4B16C20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9);
    byte_4B16C20 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(v3);
  MasterData_object = **(Il2CppObject ***)(v11 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BCAA3C(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v14 = 1;
  else
    v14 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v14, v13);
  if ( Entity )
    return SkillLvEntity__getFuncDetail(Entity, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    byte_4B1194D = 1;
  }
  v19 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v19 = LocalizationManager_TypeInfo;
  }
  return v19->static_fields->unknownNameText;
}


System_String_o *__fastcall SkillEntity__getName(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x8
  SkillAddEntity_o *AvailableSkillAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4B16C1B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, method, v2);
    byte_4B16C1B = 1;
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


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall SkillEntity__getScriptStrings(
        SkillEntity_o *this,
        System_String_o *key,
        uint16_t splitChar,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  SkillEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4B16C28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, splitChar);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&string_TypeInfo, v9, v10);
    byte_4B16C28 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BCAA3C(script, key);
  }
  if ( (System_String_c *)script->klass == string_TypeInfo )
    return System_String__Split((System_String_o *)script, splitChar, 0, 0LL);
  sub_1BCACFC(script);
  return SkillEntity__getSkillCutInVoices(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getSkillChargeTime(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4B16C21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B16C21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.id, lv, v9);
  if ( Entity )
    LODWORD(Entity) = Entity->fields.chargeTurn;
  return (int)Entity;
}


bool __fastcall SkillEntity__getSkillCutInCamPlayerAll(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C2D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18593/*"cutInCamPlayerAll"*/, method, v2);
    byte_4B16C2D = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18593/*"cutInCamPlayerAll"*/, &param, v3);
  return param == 1;
}


int32_t __fastcall SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C22 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18594/*"cutInId"*/, method, v2);
    byte_4B16C22 = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18594/*"cutInId"*/, &param, v3) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C2F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18595/*"cutInMessageMode"*/, method, v2);
    byte_4B16C2F = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18595/*"cutInMessageMode"*/, &param, v3);
  return param;
}


System_String_array *__fastcall SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16C2A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18596/*"cutInPrefabInfo"*/, method, v2);
    byte_4B16C2A = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18596/*"cutInPrefabInfo"*/, 0x2Cu, v3);
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabOffsets(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_array *ScriptStrings; // x0
  System_String_array *v8; // x19
  System_String_array *v9; // x0
  __int64 v10; // x1
  int max_length; // w8
  UnityEngine_Vector3_array *v12; // x20
  __int64 v13; // x22
  float *v14; // x23
  int v15; // w8
  System_String_array *v16; // x21
  float v17; // s8
  float v18; // s9
  float v19; // s10
  float v20; // s0
  float v21; // s0

  if ( (byte_4B16C2B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_18597/*"cutInPrefabOffsets"*/, v5, v6);
    byte_4B16C2B = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18597/*"cutInPrefabOffsets"*/, 0x2Fu, v3);
  if ( !ScriptStrings )
    return 0LL;
  v8 = ScriptStrings;
  v9 = (System_String_array *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v8->max_length;
  v12 = (UnityEngine_Vector3_array *)v9;
  if ( max_length >= 1 )
  {
    v13 = 0LL;
    v14 = (float *)&v9->m_Items[1];
    do
    {
      if ( (unsigned int)v13 >= max_length )
        goto LABEL_22;
      v9 = (System_String_array *)v8->m_Items[v13];
      if ( !v9 )
        goto LABEL_21;
      v9 = System_String__Split((System_String_o *)v9, 0x3Au, 0, 0LL);
      if ( !v9 )
        goto LABEL_21;
      v15 = v9->max_length;
      v16 = v9;
      v17 = 0.0;
      v18 = 0.0;
      v19 = 0.0;
      if ( v15 > 1 )
      {
        v20 = System_Single__Parse(v9->m_Items[1], 0LL);
        v15 = v16->max_length;
        v18 = v20;
        if ( v15 < 3 )
        {
          v19 = 0.0;
        }
        else
        {
          v21 = System_Single__Parse(v16->m_Items[2], 0LL);
          v15 = v16->max_length;
          v19 = v21;
        }
      }
      if ( v15 >= 1 )
        v17 = System_Single__Parse(v16->m_Items[0], 0LL);
      if ( !v12 )
LABEL_21:
        sub_1BCAA3C(v9, v10);
      if ( (unsigned int)v13 >= v12->max_length )
LABEL_22:
        sub_1BCAA44(v9, v10);
      *(v14 - 2) = v18;
      *(v14 - 1) = v19;
      *v14 = v17;
      v14 += 3;
      max_length = v8->max_length;
      ++v13;
    }
    while ( (int)v13 < max_length );
  }
  return v12;
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabSizes(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_array *ScriptStrings; // x0
  System_String_array *v8; // x19
  System_String_array *v9; // x0
  __int64 v10; // x1
  int max_length; // w8
  UnityEngine_Vector3_array *v12; // x20
  __int64 v13; // x22
  float *v14; // x23
  int v15; // w8
  System_String_array *v16; // x21
  float v17; // s8
  float v18; // s9
  float v19; // s10
  float v20; // s0
  float v21; // s0

  if ( (byte_4B16C2C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_18598/*"cutInPrefabSizes"*/, v5, v6);
    byte_4B16C2C = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18598/*"cutInPrefabSizes"*/, 0x2Fu, v3);
  if ( !ScriptStrings )
    return 0LL;
  v8 = ScriptStrings;
  v9 = (System_String_array *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v8->max_length;
  v12 = (UnityEngine_Vector3_array *)v9;
  if ( max_length >= 1 )
  {
    v13 = 0LL;
    v14 = (float *)&v9->m_Items[1];
    do
    {
      if ( (unsigned int)v13 >= max_length )
        goto LABEL_22;
      v9 = (System_String_array *)v8->m_Items[v13];
      if ( !v9 )
        goto LABEL_21;
      v9 = System_String__Split((System_String_o *)v9, 0x3Au, 0, 0LL);
      if ( !v9 )
        goto LABEL_21;
      v15 = v9->max_length;
      v16 = v9;
      v17 = 0.0;
      v18 = 0.0;
      v19 = 0.0;
      if ( v15 > 1 )
      {
        v20 = System_Single__Parse(v9->m_Items[1], 0LL);
        v15 = v16->max_length;
        v18 = v20;
        if ( v15 < 3 )
        {
          v19 = 0.0;
        }
        else
        {
          v21 = System_Single__Parse(v16->m_Items[2], 0LL);
          v15 = v16->max_length;
          v19 = v21;
        }
      }
      if ( v15 >= 1 )
        v17 = System_Single__Parse(v16->m_Items[0], 0LL);
      if ( !v12 )
LABEL_21:
        sub_1BCAA3C(v9, v10);
      if ( (unsigned int)v13 >= v12->max_length )
LABEL_22:
        sub_1BCAA44(v9, v10);
      *(v14 - 2) = v18;
      *(v14 - 1) = v19;
      *v14 = v17;
      v14 += 3;
      max_length = v8->max_length;
      ++v13;
    }
    while ( (int)v13 < max_length );
  }
  return v12;
}


System_String_array *__fastcall SkillEntity__getSkillCutInVoices(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16C29 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18600/*"cutInVoices"*/, method, v2);
    byte_4B16C29 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18600/*"cutInVoices"*/, 0x2Fu, v3);
}


void __fastcall SkillEntity__getSkillMessageInfo(
        SkillEntity_o *this,
        System_String_o **name,
        System_String_o **detail,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x2
  System_String_o *EffectExplanation; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  v9 = SkillEntity__getName(this, (const MethodInfo *)name);
  *name = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)name, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v16);
  *detail = EffectExplanation;
  sub_1BCA784((PartyOrganizationUtility_o *)detail, (int64_t)EffectExplanation, v18, v19, v20, v21, v22, v23);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  bool v5; // w0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C27 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6905/*"ForcedSkillSpeed"*/, method, v2);
    byte_4B16C27 = 1;
  }
  param = 0;
  v5 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_6905/*"ForcedSkillSpeed"*/, &param, v3);
  return v5 && param == 1;
}


bool __fastcall SkillEntity__isPassive(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool __fastcall SkillEntity__isSkillCutInCamField(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C2E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18593/*"cutInCamPlayerAll"*/, method, v2);
    byte_4B16C2E = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18593/*"cutInCamPlayerAll"*/, &param, v3);
  return param == 2;
}


void __fastcall SkillEntity__set_SortedSkillAddEntityList(
        SkillEntity_o *this,
        System_Collections_Generic_List_SkillAddEntity__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SortedSkillAddEntityList_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SortedSkillAddEntityList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SkillEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16C41 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillEntity___c_TypeInfo, v1, v2);
    byte_4B16C41 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SkillEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SkillEntity___c_TypeInfo->static_fields->__9 = (struct SkillEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SkillEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return SkillAddEntity__IsOpen(x, (const MethodInfo *)x);
}