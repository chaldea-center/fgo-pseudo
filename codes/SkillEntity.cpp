void __fastcall SkillEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB678E & 1) == 0 )
  {
    sub_1BAB41C(&SkillEntity_TypeInfo, v1);
    byte_4AB678E = 1;
  }
  SkillEntity_TypeInfo->static_fields->CHECK_SCRIPT_TRUE = 1;
}


void __fastcall SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB678D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB678D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_4AB6785 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_16976/*"assumedEffectId"*/, method);
    byte_4AB6785 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16976/*"assumedEffectId"*/, 0LL);
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
  int32_t v13; // w3

  if ( (byte_4AB676B & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___, method);
    sub_1BAB41C(&System_Func_SkillAddEntity__bool__TypeInfo, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, v4);
    sub_1BAB41C(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, v5);
    sub_1BAB41C(&SkillEntity___c_TypeInfo, v6);
    byte_4AB676B = 1;
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
    _9__22_0 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_SkillAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__22_0, v10, Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, 0LL);
    static_fields = SkillEntity___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__22_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v12, v13);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49186032(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__22_0,
                               (const MethodInfo_2EE84F0 *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


System_Int32_array *__fastcall SkillEntity__GetBattleEffectMovieIds(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB678B & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_3233/*"BattleEffectMovieIds"*/, method);
    byte_4AB678B = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3233/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


float __fastcall SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6780 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18446/*"cutinAdditionalTime"*/, method);
    byte_4AB6780 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18446/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


int32_t __fastcall SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AB6788 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18447/*"cutinFirstId"*/, method);
    byte_4AB6788 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18447/*"cutinFirstId"*/, &param, v2);
  return param;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o **v7; // x8
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AB6782 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_3245/*"BeforeFieldCallEffect"*/, isBefore);
    sub_1BAB41C(&StringLiteral_2265/*"AfterFieldCallEffect"*/, v6);
    byte_4AB6782 = 1;
  }
  param = 0;
  if ( isBefore )
    v7 = (System_String_o **)&StringLiteral_3245/*"BeforeFieldCallEffect"*/;
  else
    v7 = (System_String_o **)&StringLiteral_2265/*"AfterFieldCallEffect"*/;
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
  __int64 v9; // x8
  System_Int32_array *v10; // x21
  unsigned __int64 v11; // x24
  int32_t v12; // w22
  const MethodInfo *v13; // x4
  int32_t *p_iconId; // x8
  SkillGroupOverwriteEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4AB6787 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_SkillGroupMaster___, method);
    sub_1BAB41C(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v3);
    this = (SkillEntity_o *)sub_1BAB41C(&DataManager_TypeInfo, v4);
    byte_4AB6787 = 1;
  }
  entity = 0LL;
  BaseTime = SkillLvMaster__GetBaseTime((const MethodInfo *)this);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = SkillGroupMaster__GetSkillGroupIdFromSkillId((SkillGroupMaster_o *)Master_object, v2->fields.id, v8);
  if ( !Master_object )
    goto LABEL_19;
  v9 = *(_QWORD *)&Master_object->max_length;
  v10 = Master_object;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1BAB680(Master_object, v7);
      v12 = v10->m_Items[v11 + 1];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_19;
      Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                              (SkillGroupOverwriteMaster_o *)Master_object,
                                              &entity,
                                              v12,
                                              BaseTime,
                                              v13);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
      LODWORD(v9) = v10->max_length;
      if ( (__int64)++v11 >= (int)v9 )
        goto LABEL_15;
    }
    if ( entity )
    {
      p_iconId = &entity->fields.iconId;
      return *p_iconId;
    }
LABEL_19:
    sub_1BAB678(Master_object, v7);
  }
LABEL_15:
  p_iconId = &v2->fields.iconId;
  return *p_iconId;
}


int32_t __fastcall SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AB6781 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_23384/*"skillScript_1"*/, method);
    byte_4AB6781 = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_23384/*"skillScript_1"*/, &param, v2) )
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

  if ( (byte_4AB677F & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_1BAB41C(&StringLiteral_10114/*"OverwriteMotion_{0}"*/, v7);
    byte_4AB677F = 1;
  }
  v14 = svtId;
  param = 0;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_10114/*"OverwriteMotion_{0}"*/, v8, 0LL);
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

  if ( (byte_4AB6786 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_10109/*"OverWriteSkillInfoId"*/, method);
    byte_4AB6786 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10109/*"OverWriteSkillInfoId"*/, &param, v2);
  return param;
}


bool __fastcall SkillEntity__IsCheckUpdateShiftServant(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AB6789 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4439/*"CheckUpdateShiftServant"*/, method);
    byte_4AB6789 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_4439/*"CheckUpdateShiftServant"*/, &param, v2);
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

  if ( (byte_4AB678C & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_int___, battlePointIds);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Intersect_int___, v5);
    sub_1BAB41C(&StringLiteral_7462/*"IgnoreBattlePointUp"*/, v6);
    byte_4AB678C = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7462/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
  {
    v8 = System_Linq_Enumerable__Intersect_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)battlePointIds,
           IntArray,
           (const MethodInfo_2EE9068 *)Method_System_Linq_Enumerable_Intersect_int___);
    LOBYTE(IntArray) = System_Linq_Enumerable__Any_int_(
                         v8,
                         (const MethodInfo_2ED0C4C *)Method_System_Linq_Enumerable_Any_int___);
  }
  return (char)IntArray;
}


bool __fastcall SkillEntity__IsIgnoreValueUp(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AB678A & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_7469/*"IgnoreValueUp"*/, method);
    byte_4AB678A = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_7469/*"IgnoreValueUp"*/, &param, v2);
}


bool __fastcall SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4AB6783 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_GetValue_long___, method);
    sub_1BAB41C(&StringLiteral_4050/*"CanNotSkip"*/, v3);
    byte_4AB6783 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_4050/*"CanNotSkip"*/,
           0LL,
           (const MethodInfo_2EB25E8 *)Method_BasicHelper_GetValue_long___) == 0;
}


bool __fastcall SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4AB6784 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_GetValue_long___, method);
    sub_1BAB41C(&StringLiteral_15617/*"WarBoardForcePassiveEveryBattle"*/, v3);
    byte_4AB6784 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_15617/*"WarBoardForcePassiveEveryBattle"*/,
           0LL,
           (const MethodInfo_2EB25E8 *)Method_BasicHelper_GetValue_long___) > 0;
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

  if ( (byte_4AB6772 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BAB41C(&long_TypeInfo, v8);
    byte_4AB6772 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BAB678(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v14 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
        LOBYTE(script) = 1;
        *param = v14;
      }
      else
      {
        sub_1BAB938(Item);
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

  if ( (byte_4AB6775 & 1) == 0 )
  {
    sub_1BAB41C(&SkillEntity_TypeInfo, key);
    byte_4AB6775 = 1;
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

  if ( (byte_4AB6774 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type);
    sub_1BAB41C(&StringLiteral_17978/*"checkUseTreasure"*/, v5);
    byte_4AB6774 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_17978/*"checkUseTreasure"*/,
            (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


System_Int32_array *__fastcall SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4AB6773 & 1) == 0 )
  {
    sub_1BAB41C(&int___TypeInfo, method);
    byte_4AB6773 = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 0LL);
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

  if ( (byte_4AB676D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4AB676D = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BFD2F8(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BFD2F8(v3);
  MasterData_object = **(Il2CppObject ***)(v8 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BAB678(MasterData_object, *(_QWORD *)&lv);
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

  if ( (byte_4AB676E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4AB676E = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BFD2F8(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BFD2F8(v3);
  MasterData_object = **(Il2CppObject ***)(v9 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BAB678(MasterData_object, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v12 = 1;
  else
    v12 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, this->fields.id, v12, v11);
  if ( Entity )
    return SkillLvEntity__getDetail_40328356(Entity, lv, 0, v15);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4AB1560 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, v14);
    byte_4AB1560 = 1;
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

  if ( (byte_4AB676C & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_12175/*"SKILL_EFFECT_TITLE"*/, v6);
    sub_1BAB41C(&StringLiteral_12174/*"SKILL_EFFECT_LEVEL_TITLE"*/, v7);
    byte_4AB676C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( lv < 1 )
  {
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12175/*"SKILL_EFFECT_TITLE"*/, 0LL);
    Name = (Il2CppObject *)SkillEntity__getName(this, v17);
    return System_String__Format(v16, Name, 0LL);
  }
  else
  {
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12174/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0LL);
    v10 = (Il2CppObject *)SkillEntity__getName(this, v9);
    v19 = lv;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13);
    return System_String__Format_62062500(v8, v10, v14, 0LL);
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

  if ( (byte_4AB676F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4AB676F = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BFD2F8(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BFD2F8(v3);
  MasterData_object = **(Il2CppObject ***)(v9 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BAB678(MasterData_object, *(_QWORD *)&lv);
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
  if ( !byte_4AB1560 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, v14);
    byte_4AB1560 = 1;
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

  if ( (byte_4AB676A & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, method);
    byte_4AB676A = 1;
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

  if ( (byte_4AB6777 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BAB41C(&string_TypeInfo, v8);
    byte_4AB6777 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BAB678(script, key);
  }
  if ( (System_String_c *)script->klass == string_TypeInfo )
    return System_String__Split((System_String_o *)script, splitChar, 0, 0LL);
  sub_1BAB938(script);
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

  if ( (byte_4AB6770 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AB6770 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BAB678(Instance, v7);
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

  if ( (byte_4AB677C & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18437/*"cutInCamPlayerAll"*/, method);
    byte_4AB677C = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18437/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 1;
}


int32_t __fastcall SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AB6771 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18438/*"cutInId"*/, method);
    byte_4AB6771 = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18438/*"cutInId"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AB677E & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18439/*"cutInMessageMode"*/, method);
    byte_4AB677E = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18439/*"cutInMessageMode"*/, &param, v2);
  return param;
}


System_String_array *__fastcall SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB6779 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18440/*"cutInPrefabInfo"*/, method);
    byte_4AB6779 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18440/*"cutInPrefabInfo"*/, 0x2Cu, v2);
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
  int max_length; // w8
  UnityEngine_Vector3_array *v10; // x20
  __int64 v11; // x22
  float *v12; // x23
  int v13; // w8
  System_String_array *v14; // x21
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s0
  float v19; // s0

  if ( (byte_4AB677A & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Vector3___TypeInfo, method);
    sub_1BAB41C(&StringLiteral_18441/*"cutInPrefabOffsets"*/, v4);
    byte_4AB677A = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18441/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v6 = ScriptStrings;
  v7 = (System_String_array *)sub_1BAB4C4(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v6->max_length;
  v10 = (UnityEngine_Vector3_array *)v7;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    v12 = (float *)&v7->m_Items[1];
    do
    {
      if ( (unsigned int)v11 >= max_length )
        goto LABEL_22;
      v7 = (System_String_array *)v6->m_Items[v11];
      if ( !v7 )
        goto LABEL_21;
      v7 = System_String__Split((System_String_o *)v7, 0x3Au, 0, 0LL);
      if ( !v7 )
        goto LABEL_21;
      v13 = v7->max_length;
      v14 = v7;
      v15 = 0.0;
      v16 = 0.0;
      v17 = 0.0;
      if ( v13 > 1 )
      {
        v18 = System_Single__Parse(v7->m_Items[1], 0LL);
        v13 = v14->max_length;
        v16 = v18;
        if ( v13 < 3 )
        {
          v17 = 0.0;
        }
        else
        {
          v19 = System_Single__Parse(v14->m_Items[2], 0LL);
          v13 = v14->max_length;
          v17 = v19;
        }
      }
      if ( v13 >= 1 )
        v15 = System_Single__Parse(v14->m_Items[0], 0LL);
      if ( !v10 )
LABEL_21:
        sub_1BAB678(v7, v8);
      if ( (unsigned int)v11 >= v10->max_length )
LABEL_22:
        sub_1BAB680(v7, v8);
      *(v12 - 2) = v16;
      *(v12 - 1) = v17;
      *v12 = v15;
      v12 += 3;
      max_length = v6->max_length;
      ++v11;
    }
    while ( (int)v11 < max_length );
  }
  return v10;
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
  int max_length; // w8
  UnityEngine_Vector3_array *v10; // x20
  __int64 v11; // x22
  float *v12; // x23
  int v13; // w8
  System_String_array *v14; // x21
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s0
  float v19; // s0

  if ( (byte_4AB677B & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Vector3___TypeInfo, method);
    sub_1BAB41C(&StringLiteral_18442/*"cutInPrefabSizes"*/, v4);
    byte_4AB677B = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18442/*"cutInPrefabSizes"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v6 = ScriptStrings;
  v7 = (System_String_array *)sub_1BAB4C4(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v6->max_length;
  v10 = (UnityEngine_Vector3_array *)v7;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    v12 = (float *)&v7->m_Items[1];
    do
    {
      if ( (unsigned int)v11 >= max_length )
        goto LABEL_22;
      v7 = (System_String_array *)v6->m_Items[v11];
      if ( !v7 )
        goto LABEL_21;
      v7 = System_String__Split((System_String_o *)v7, 0x3Au, 0, 0LL);
      if ( !v7 )
        goto LABEL_21;
      v13 = v7->max_length;
      v14 = v7;
      v15 = 0.0;
      v16 = 0.0;
      v17 = 0.0;
      if ( v13 > 1 )
      {
        v18 = System_Single__Parse(v7->m_Items[1], 0LL);
        v13 = v14->max_length;
        v16 = v18;
        if ( v13 < 3 )
        {
          v17 = 0.0;
        }
        else
        {
          v19 = System_Single__Parse(v14->m_Items[2], 0LL);
          v13 = v14->max_length;
          v17 = v19;
        }
      }
      if ( v13 >= 1 )
        v15 = System_Single__Parse(v14->m_Items[0], 0LL);
      if ( !v10 )
LABEL_21:
        sub_1BAB678(v7, v8);
      if ( (unsigned int)v11 >= v10->max_length )
LABEL_22:
        sub_1BAB680(v7, v8);
      *(v12 - 2) = v16;
      *(v12 - 1) = v17;
      *v12 = v15;
      v12 += 3;
      max_length = v6->max_length;
      ++v11;
    }
    while ( (int)v11 < max_length );
  }
  return v10;
}


System_String_array *__fastcall SkillEntity__getSkillCutInVoices(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB6778 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18444/*"cutInVoices"*/, method);
    byte_4AB6778 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18444/*"cutInVoices"*/, 0x2Fu, v2);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)name, (int32_t)v9, v10, v11);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v12);
  *detail = EffectExplanation;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)detail, (int32_t)EffectExplanation, v14, v15);
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

  if ( (byte_4AB6776 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_6786/*"ForcedSkillSpeed"*/, method);
    byte_4AB6776 = 1;
  }
  param = 0;
  v4 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_6786/*"ForcedSkillSpeed"*/, &param, v2);
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

  if ( (byte_4AB677D & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18437/*"cutInCamPlayerAll"*/, method);
    byte_4AB677D = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18437/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 2;
}


void __fastcall SkillEntity__set_SortedSkillAddEntityList(
        SkillEntity_o *this,
        System_Collections_Generic_List_SkillAddEntity__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SortedSkillAddEntityList_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._SortedSkillAddEntityList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SkillEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB678F & 1) == 0 )
  {
    sub_1BAB41C(&SkillEntity___c_TypeInfo, v1);
    byte_4AB678F = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(SkillEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillEntity___c_TypeInfo->static_fields->__9 = (struct SkillEntity___c_o *)v2;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)SkillEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BAB678(this, 0LL);
  return SkillAddEntity__IsOpen(x, (const MethodInfo *)x);
}