void __fastcall SkillEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4A5BB8E & 1) == 0 )
  {
    sub_1B885B0(&SkillEntity_TypeInfo);
    byte_4A5BB8E = 1;
  }
  SkillEntity_TypeInfo->static_fields->CHECK_SCRIPT_TRUE = 1;
}


void __fastcall SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB8D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5BB8D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_4A5BB85 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16943/*"assumedEffectId"*/);
    byte_4A5BB85 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16943/*"assumedEffectId"*/, 0LL);
}


SkillAddEntity_o *__fastcall SkillEntity__GetAvailableSkillAddEntity(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x19
  SkillEntity___c_c *v4; // x0
  System_Func_object__bool__o *_9__22_0; // x20
  Il2CppObject *v6; // x21
  struct SkillEntity___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5BB6B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
    sub_1B885B0(&System_Func_SkillAddEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__);
    sub_1B885B0(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__);
    sub_1B885B0(&SkillEntity___c_TypeInfo);
    byte_4A5BB6B = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( !SortedSkillAddEntityList_k__BackingField || SortedSkillAddEntityList_k__BackingField->fields._size < 1 )
    return 0LL;
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
    _9__22_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SkillAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__22_0, v6, Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, 0LL);
    static_fields = SkillEntity___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__22_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v8, v9);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__22_0,
                               (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


System_Int32_array *__fastcall SkillEntity__GetBattleEffectMovieIds(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB8B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3237/*"BattleEffectMovieIds"*/);
    byte_4A5BB8B = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3237/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


float __fastcall SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB80 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18416/*"cutinAdditionalTime"*/);
    byte_4A5BB80 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18416/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


int32_t __fastcall SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB88 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18417/*"cutinFirstId"*/);
    byte_4A5BB88 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18417/*"cutinFirstId"*/, &param, v2);
  return param;
}


int32_t __fastcall SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o **v6; // x8
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5BB82 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3249/*"BeforeFieldCallEffect"*/);
    sub_1B885B0(&StringLiteral_2268/*"AfterFieldCallEffect"*/);
    byte_4A5BB82 = 1;
  }
  param = 0;
  if ( isBefore )
    v6 = (System_String_o **)&StringLiteral_3249/*"BeforeFieldCallEffect"*/;
  else
    v6 = (System_String_o **)&StringLiteral_2268/*"AfterFieldCallEffect"*/;
  if ( SkillEntity__checkScript(this, *v6, &param, v3) )
    return param;
  else
    return -1;
}


int32_t __fastcall SkillEntity__GetIconId(SkillEntity_o *this, const MethodInfo *method)
{
  SkillEntity_o *v2; // x19
  int64_t BaseTime; // x20
  System_Int32_array *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x8
  System_Int32_array *v8; // x21
  unsigned __int64 v9; // x24
  int32_t v10; // w22
  const MethodInfo *v11; // x4
  int32_t *p_iconId; // x8
  SkillGroupOverwriteEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4A5BB87 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    this = (SkillEntity_o *)sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5BB87 = 1;
  }
  entity = 0LL;
  BaseTime = SkillLvMaster__GetBaseTime((const MethodInfo *)this);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = SkillGroupMaster__GetSkillGroupIdFromSkillId((SkillGroupMaster_o *)Master_object, v2->fields.id, v6);
  if ( !Master_object )
    goto LABEL_19;
  v7 = *(_QWORD *)&Master_object->max_length;
  v8 = Master_object;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
        sub_1B88814(Master_object, v5);
      v10 = v8->m_Items[v9 + 1];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
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
      LODWORD(v7) = v8->max_length;
      if ( (__int64)++v9 >= (int)v7 )
        goto LABEL_15;
    }
    if ( entity )
    {
      p_iconId = &entity->fields.iconId;
      return *p_iconId;
    }
LABEL_19:
    sub_1B8880C(Master_object, v5);
  }
LABEL_15:
  p_iconId = &v2->fields.iconId;
  return *p_iconId;
}


int32_t __fastcall SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB81 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23345/*"skillScript_1"*/);
    byte_4A5BB81 = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_23345/*"skillScript_1"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__GetMotionId(SkillEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x3
  bool v10; // w0
  int32_t *p_motion; // x8
  int32_t v13; // [xsp+8h] [xbp-38h] BYREF
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5BB7F & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_10108/*"OverwriteMotion_{0}"*/);
    byte_4A5BB7F = 1;
  }
  v13 = svtId;
  param = 0;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, method, v3, v4);
  v8 = System_String__Format((System_String_o *)StringLiteral_10108/*"OverwriteMotion_{0}"*/, v7, 0LL);
  v10 = SkillEntity__checkScript(this, v8, &param, v9);
  p_motion = &this->fields.motion;
  if ( v10 )
    p_motion = &param;
  return *p_motion;
}


int32_t __fastcall SkillEntity__GetOverWriteSkillInfoId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB86 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10103/*"OverWriteSkillInfoId"*/);
    byte_4A5BB86 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10103/*"OverWriteSkillInfoId"*/, &param, v2);
  return param;
}


bool __fastcall SkillEntity__IsCheckUpdateShiftServant(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB89 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4440/*"CheckUpdateShiftServant"*/);
    byte_4A5BB89 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_4440/*"CheckUpdateShiftServant"*/, &param, v2);
}


bool __fastcall SkillEntity__IsIgnoreBattlePointUp(
        SkillEntity_o *this,
        System_Collections_Generic_IEnumerable_int__o *battlePointIds,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4A5BB8C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1B885B0(&StringLiteral_7458/*"IgnoreBattlePointUp"*/);
    byte_4A5BB8C = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7458/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
  {
    v6 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v6,
                         (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool __fastcall SkillEntity__IsIgnoreValueUp(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB8A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7465/*"IgnoreValueUp"*/);
    byte_4A5BB8A = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_7465/*"IgnoreValueUp"*/, &param, v2);
}


bool __fastcall SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB83 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_long___);
    sub_1B885B0(&StringLiteral_4052/*"CanNotSkip"*/);
    byte_4A5BB83 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_4052/*"CanNotSkip"*/,
           0LL,
           (const MethodInfo_2E6DB7C *)Method_BasicHelper_GetValue_long___) == 0;
}


bool __fastcall SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB84 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_long___);
    sub_1B885B0(&StringLiteral_15586/*"WarBoardForcePassiveEveryBattle"*/);
    byte_4A5BB84 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_15586/*"WarBoardForcePassiveEveryBattle"*/,
           0LL,
           (const MethodInfo_2E6DB7C *)Method_BasicHelper_GetValue_long___) > 0;
}


bool __fastcall SkillEntity__checkScript(
        SkillEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x8
  SkillEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4A5BB72 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5BB72 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B8880C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
        LOBYTE(script) = 1;
        *param = v12;
      }
      else
      {
        sub_1B88ACC(Item);
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


bool __fastcall SkillEntity__checkScriptFromIdx(SkillEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v6; // w8
  bool result; // w0
  int32_t v8; // w19
  SkillEntity_c *v9; // x0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB75 & 1) == 0 )
  {
    sub_1B885B0(&SkillEntity_TypeInfo);
    byte_4A5BB75 = 1;
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


bool __fastcall SkillEntity__checkUseTreasure(SkillEntity_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5BB74 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&StringLiteral_17949/*"checkUseTreasure"*/);
    byte_4A5BB74 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_17949/*"checkUseTreasure"*/,
            (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


System_Int32_array *__fastcall SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4A5BB73 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5BB73 = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getEffectChargeTurn(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4A5BB6D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BB6D = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, *(_QWORD *)&lv);
  }
  v9 = lv <= 1 ? 1 : lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v9, v8);
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
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v11; // x3
  LocalizationManager_c *v13; // x0

  if ( (byte_4A5BB6E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BB6E = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v9 = 1;
  else
    v9 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v9, v8);
  if ( Entity )
    return SkillLvEntity__getDetail_39937016(Entity, lv, 0, v11);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
  }
  v13 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager_TypeInfo;
  }
  return v13->static_fields->unknownNameText;
}


System_Int32_array *__fastcall SkillEntity__getEffectList(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.effectList;
}


System_String_o *__fastcall SkillEntity__getEffectTitle(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  System_String_o *v5; // x21
  const MethodInfo *v6; // x1
  Il2CppObject *v7; // x19
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  System_String_o *v13; // x20
  const MethodInfo *v14; // x1
  Il2CppObject *Name; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB6C & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12148/*"SKILL_EFFECT_TITLE"*/);
    sub_1B885B0(&StringLiteral_12147/*"SKILL_EFFECT_LEVEL_TITLE"*/);
    byte_4A5BB6C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12148/*"SKILL_EFFECT_TITLE"*/, 0LL);
    Name = (Il2CppObject *)SkillEntity__getName(this, v14);
    return System_String__Format(v13, Name, 0LL);
  }
  else
  {
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0LL);
    v7 = (Il2CppObject *)SkillEntity__getName(this, v6);
    v16 = lv;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v8, v9, v10);
    return System_String__Format_61721404(v5, v7, v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillEntity__getFuncExplanation(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v11; // x1
  LocalizationManager_c *v13; // x0

  if ( (byte_4A5BB6F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BB6F = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v9 = 1;
  else
    v9 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v9, v8);
  if ( Entity )
    return SkillLvEntity__getFuncDetail(Entity, v11);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
  }
  v13 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager_TypeInfo;
  }
  return v13->static_fields->unknownNameText;
}


System_String_o *__fastcall SkillEntity__getName(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x8
  SkillAddEntity_o *AvailableSkillAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4A5BB6A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__);
    byte_4A5BB6A = 1;
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
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  SkillEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4A5BB77 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5BB77 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B8880C(script, key);
  }
  if ( (System_String_c *)script->klass == string_TypeInfo )
    return System_String__Split((System_String_o *)script, splitChar, 0, 0LL);
  sub_1B88ACC(script);
  return SkillEntity__getSkillCutInVoices(v9, v10);
}


int32_t __fastcall SkillEntity__getSkillChargeTime(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4A5BB70 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BB70 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.id, lv, v7);
  if ( Entity )
    LODWORD(Entity) = Entity->fields.chargeTurn;
  return (int)Entity;
}


bool __fastcall SkillEntity__getSkillCutInCamPlayerAll(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB7C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18407/*"cutInCamPlayerAll"*/);
    byte_4A5BB7C = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18407/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 1;
}


int32_t __fastcall SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB71 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18408/*"cutInId"*/);
    byte_4A5BB71 = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18408/*"cutInId"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB7E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18409/*"cutInMessageMode"*/);
    byte_4A5BB7E = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18409/*"cutInMessageMode"*/, &param, v2);
  return param;
}


System_String_array *__fastcall SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BB79 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18410/*"cutInPrefabInfo"*/);
    byte_4A5BB79 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18410/*"cutInPrefabInfo"*/, 0x2Cu, v2);
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabOffsets(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *ScriptStrings; // x0
  System_String_array *v5; // x19
  System_String_array *v6; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_Vector3_array *v9; // x20
  __int64 v10; // x22
  float *v11; // x23
  int v12; // w8
  System_String_array *v13; // x21
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s0
  float v18; // s0

  if ( (byte_4A5BB7A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Vector3___TypeInfo);
    sub_1B885B0(&StringLiteral_18411/*"cutInPrefabOffsets"*/);
    byte_4A5BB7A = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18411/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v5 = ScriptStrings;
  v6 = (System_String_array *)sub_1B88658(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v5->max_length;
  v9 = (UnityEngine_Vector3_array *)v6;
  if ( max_length >= 1 )
  {
    v10 = 0LL;
    v11 = (float *)&v6->m_Items[1];
    do
    {
      if ( (unsigned int)v10 >= max_length )
        goto LABEL_22;
      v6 = (System_String_array *)v5->m_Items[v10];
      if ( !v6 )
        goto LABEL_21;
      v6 = System_String__Split((System_String_o *)v6, 0x3Au, 0, 0LL);
      if ( !v6 )
        goto LABEL_21;
      v12 = v6->max_length;
      v13 = v6;
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      if ( v12 > 1 )
      {
        v17 = System_Single__Parse(v6->m_Items[1], 0LL);
        v12 = v13->max_length;
        v15 = v17;
        if ( v12 < 3 )
        {
          v16 = 0.0;
        }
        else
        {
          v18 = System_Single__Parse(v13->m_Items[2], 0LL);
          v12 = v13->max_length;
          v16 = v18;
        }
      }
      if ( v12 >= 1 )
        v14 = System_Single__Parse(v13->m_Items[0], 0LL);
      if ( !v9 )
LABEL_21:
        sub_1B8880C(v6, v7);
      if ( (unsigned int)v10 >= v9->max_length )
LABEL_22:
        sub_1B88814(v6, v7);
      *(v11 - 2) = v15;
      *(v11 - 1) = v16;
      *v11 = v14;
      v11 += 3;
      max_length = v5->max_length;
      ++v10;
    }
    while ( (int)v10 < max_length );
  }
  return v9;
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabSizes(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *ScriptStrings; // x0
  System_String_array *v5; // x19
  System_String_array *v6; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_Vector3_array *v9; // x20
  __int64 v10; // x22
  float *v11; // x23
  int v12; // w8
  System_String_array *v13; // x21
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s0
  float v18; // s0

  if ( (byte_4A5BB7B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Vector3___TypeInfo);
    sub_1B885B0(&StringLiteral_18412/*"cutInPrefabSizes"*/);
    byte_4A5BB7B = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18412/*"cutInPrefabSizes"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v5 = ScriptStrings;
  v6 = (System_String_array *)sub_1B88658(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v5->max_length;
  v9 = (UnityEngine_Vector3_array *)v6;
  if ( max_length >= 1 )
  {
    v10 = 0LL;
    v11 = (float *)&v6->m_Items[1];
    do
    {
      if ( (unsigned int)v10 >= max_length )
        goto LABEL_22;
      v6 = (System_String_array *)v5->m_Items[v10];
      if ( !v6 )
        goto LABEL_21;
      v6 = System_String__Split((System_String_o *)v6, 0x3Au, 0, 0LL);
      if ( !v6 )
        goto LABEL_21;
      v12 = v6->max_length;
      v13 = v6;
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      if ( v12 > 1 )
      {
        v17 = System_Single__Parse(v6->m_Items[1], 0LL);
        v12 = v13->max_length;
        v15 = v17;
        if ( v12 < 3 )
        {
          v16 = 0.0;
        }
        else
        {
          v18 = System_Single__Parse(v13->m_Items[2], 0LL);
          v12 = v13->max_length;
          v16 = v18;
        }
      }
      if ( v12 >= 1 )
        v14 = System_Single__Parse(v13->m_Items[0], 0LL);
      if ( !v9 )
LABEL_21:
        sub_1B8880C(v6, v7);
      if ( (unsigned int)v10 >= v9->max_length )
LABEL_22:
        sub_1B88814(v6, v7);
      *(v11 - 2) = v15;
      *(v11 - 1) = v16;
      *v11 = v14;
      v11 += 3;
      max_length = v5->max_length;
      ++v10;
    }
    while ( (int)v10 < max_length );
  }
  return v9;
}


System_String_array *__fastcall SkillEntity__getSkillCutInVoices(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BB78 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18414/*"cutInVoices"*/);
    byte_4A5BB78 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18414/*"cutInVoices"*/, 0x2Fu, v2);
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
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  System_String_o *EffectExplanation; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  v9 = SkillEntity__getName(this, (const MethodInfo *)name);
  *name = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)name, (int32_t)v9, v10, v11);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v12);
  *detail = EffectExplanation;
  sub_1B88554((ServantStatusBattleListViewItem_o *)detail, (int32_t)EffectExplanation, v14, v15);
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

  if ( (byte_4A5BB76 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6783/*"ForcedSkillSpeed"*/);
    byte_4A5BB76 = 1;
  }
  param = 0;
  v4 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_6783/*"ForcedSkillSpeed"*/, &param, v2);
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

  if ( (byte_4A5BB7D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18407/*"cutInCamPlayerAll"*/);
    byte_4A5BB7D = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18407/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 2;
}


void __fastcall SkillEntity__set_SortedSkillAddEntityList(
        SkillEntity_o *this,
        System_Collections_Generic_List_SkillAddEntity__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SortedSkillAddEntityList_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SortedSkillAddEntityList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SkillEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BB8F & 1) == 0 )
  {
    sub_1B885B0(&SkillEntity___c_TypeInfo);
    byte_4A5BB8F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SkillEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SkillEntity___c_TypeInfo->static_fields->__9 = (struct SkillEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SkillEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return SkillAddEntity__IsOpen(x, (const MethodInfo *)x);
}