void __fastcall SkillEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4215514 & 1) == 0 )
  {
    sub_B0D8A4(&SkillEntity_TypeInfo, v1);
    byte_4215514 = 1;
  }
  SkillEntity_TypeInfo->static_fields->CHECK_SCRIPT_TRUE = 1;
}


void __fastcall SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215513 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_4215513 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_421550E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16550/*"assumedEffectId"*/, method);
    byte_421550E = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16550/*"assumedEffectId"*/, 0LL);
}


SkillAddEntity_o *__fastcall SkillEntity__GetAvailableSkillAddEntity(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x19
  SkillEntity___c_c *v10; // x0
  struct SkillEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__22_0; // x20
  Il2CppObject *v13; // x21
  struct SkillEntity___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42154F4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___, method);
    sub_B0D8A4(&Method_System_Func_SkillAddEntity__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_SkillAddEntity__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, v6);
    sub_B0D8A4(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, v7);
    sub_B0D8A4(&SkillEntity___c_TypeInfo, v8);
    byte_42154F4 = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( !SortedSkillAddEntityList_k__BackingField || SortedSkillAddEntityList_k__BackingField->fields._size < 1 )
    return 0LL;
  v10 = SkillEntity___c_TypeInfo;
  if ( (BYTE3(SkillEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillEntity___c_TypeInfo);
    v10 = SkillEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = SkillEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_SkillAddEntity__bool__TypeInfo,
                                                                                    method,
                                                                                    v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__22_0,
      v13,
      Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_SkillAddEntity__bool___ctor__);
    v14 = SkillEntity___c_TypeInfo->static_fields;
    v14->__9__22_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__22_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__22_0,
                               (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


float __fastcall SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215509 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17903/*"cutinAdditionalTime"*/, method);
    byte_4215509 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17903/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


int32_t __fastcall SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215511 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17904/*"cutinFirstId"*/, method);
    byte_4215511 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17904/*"cutinFirstId"*/, &param, v2);
  return param;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o **v7; // x8
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421550B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2799/*"BeforeFieldCallEffect"*/, isBefore);
    sub_B0D8A4(&StringLiteral_1876/*"AfterFieldCallEffect"*/, v6);
    byte_421550B = 1;
  }
  param = 0;
  v7 = (System_String_o **)&StringLiteral_2799/*"BeforeFieldCallEffect"*/;
  if ( !isBefore )
    v7 = (System_String_o **)&StringLiteral_1876/*"AfterFieldCallEffect"*/;
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
  SkillGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SkillGroupMaster_o *v9; // x21
  unsigned __int64 v10; // x24
  int32_t v11; // w22
  const MethodInfo *v12; // x4
  int32_t *p_iconId; // x8
  __int64 v15; // x0
  SkillGroupOverwriteEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4215510 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillGroupMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v3);
    this = (SkillEntity_o *)sub_B0D8A4(&DataManager_TypeInfo, v4);
    byte_4215510 = 1;
  }
  entity = 0LL;
  BaseTime = SkillLvMaster__GetBaseTime((const MethodInfo *)this);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupMaster__GetSkillGroupIdFromSkillId(
                                                           Master_WarQuestSelectionMaster,
                                                           v2->fields.id,
                                                           v7);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v9 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)MasterName_k__BackingField )
      {
        v15 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v15, 0LL);
      }
      v11 = *((_DWORD *)&v9->fields.list + v10);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_21;
      Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                               (SkillGroupOverwriteMaster_o *)Master_WarQuestSelectionMaster,
                                                               &entity,
                                                               v11,
                                                               BaseTime,
                                                               v12);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        break;
      LODWORD(MasterName_k__BackingField) = v9->fields._MasterName_k__BackingField;
      if ( (__int64)++v10 >= (int)MasterName_k__BackingField )
        goto LABEL_17;
    }
    if ( entity )
    {
      p_iconId = &entity->fields.iconId;
      return *p_iconId;
    }
LABEL_21:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
LABEL_17:
  p_iconId = &v2->fields.iconId;
  return *p_iconId;
}


int32_t __fastcall SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421550A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22220/*"skillScript_1"*/, method);
    byte_421550A = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_22220/*"skillScript_1"*/, &param, v2) )
    return param;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__GetMotionId(SkillEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  bool v9; // w0
  int32_t *p_motion; // x8
  int32_t v12; // [xsp+8h] [xbp-18h] BYREF
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215508 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&StringLiteral_10216/*"OverwriteMotion_{0}"*/, v5);
    byte_4215508 = 1;
  }
  v12 = svtId;
  param = 0;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v7 = System_String__Format((System_String_o *)StringLiteral_10216/*"OverwriteMotion_{0}"*/, v6, 0LL);
  v9 = SkillEntity__checkScript(this, v7, &param, v8);
  p_motion = &this->fields.motion;
  if ( v9 )
    p_motion = &param;
  return *p_motion;
}


int32_t __fastcall SkillEntity__GetOverWriteSkillInfoId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421550F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10210/*"OverWriteSkillInfoId"*/, method);
    byte_421550F = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10210/*"OverWriteSkillInfoId"*/, &param, v2);
  return param;
}


bool __fastcall SkillEntity__IsCheckUpdateShiftServant(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215512 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3952/*"CheckUpdateShiftServant"*/, method);
    byte_4215512 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_3952/*"CheckUpdateShiftServant"*/, &param, v2);
}


bool __fastcall SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_421550C & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_long___, method);
    sub_B0D8A4(&StringLiteral_3568/*"CanNotSkip"*/, v3);
    byte_421550C = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_3568/*"CanNotSkip"*/,
           0LL,
           (const MethodInfo_1708D88 *)Method_BasicHelper_GetValue_long___) == 0;
}


bool __fastcall SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_421550D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_long___, method);
    sub_B0D8A4(&StringLiteral_15464/*"WarBoardForcePassiveEveryBattle"*/, v3);
    byte_421550D = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_15464/*"WarBoardForcePassiveEveryBattle"*/,
           0LL,
           (const MethodInfo_1708D88 *)Method_BasicHelper_GetValue_long___) > 0;
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v11; // x8
  SkillEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42154FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    byte_42154FB = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B0D97C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v11 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *param = v11;
      }
      else
      {
        v12 = (SkillEntity_o *)sub_B0DC70(Item);
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


bool __fastcall SkillEntity__checkScriptFromIdx(SkillEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v6; // w8
  bool result; // w0
  int32_t v8; // w19
  SkillEntity_c *v9; // x0
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42154FE & 1) == 0 )
  {
    sub_B0D8A4(&SkillEntity_TypeInfo, key);
    byte_42154FE = 1;
  }
  param = 0;
  v6 = SkillEntity__checkScript(this, key, &param, v3);
  result = 0;
  if ( v6 )
  {
    v8 = param;
    v9 = SkillEntity_TypeInfo;
    if ( (BYTE3(SkillEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SkillEntity_TypeInfo->_2.cctor_finished )
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

  if ( (byte_42154FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type);
    sub_B0D8A4(&StringLiteral_17463/*"checkUseTreasure"*/, v5);
    byte_42154FD = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_17463/*"checkUseTreasure"*/,
            (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


System_Int32_array *__fastcall SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_42154FC & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_42154FC = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getEffectChargeTurn(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  SkillLvEntity_o *Entity; // x0

  if ( (byte_42154F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_42154F6 = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(v7);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v7 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  v10 = lv <= 1 ? 1 : lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, this->fields.id, v10, v9);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  SkillLvEntity_o *Entity; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  LocalizationManager_c *v16; // x0

  if ( (byte_42154F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_42154F7 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(v8);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v8 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  if ( lv <= 1 )
    v11 = 1;
  else
    v11 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, this->fields.id, v11, v10);
  if ( Entity )
    return SkillLvEntity__getDetail_26117940(Entity, lv, 0, v14);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4212885 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    byte_4212885 = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  return v16->static_fields->unknownNameText;
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
  Il2CppObject *v11; // x0
  System_String_o *v13; // x20
  const MethodInfo *v14; // x1
  Il2CppObject *Name; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42154F5 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_12289/*"SKILL_EFFECT_TITLE"*/, v6);
    sub_B0D8A4(&StringLiteral_12288/*"SKILL_EFFECT_LEVEL_TITLE"*/, v7);
    byte_42154F5 = 1;
  }
  if ( lv < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12289/*"SKILL_EFFECT_TITLE"*/, 0LL);
    Name = (Il2CppObject *)SkillEntity__getName(this, v14);
    return System_String__Format(v13, Name, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12288/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0LL);
    v10 = (Il2CppObject *)SkillEntity__getName(this, v9);
    v16 = lv;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    return System_String__Format_43845440(v8, v10, v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillEntity__getFuncExplanation(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v13; // x1
  LocalizationManager_c *v15; // x0

  if ( (byte_42154F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_42154F8 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(v8);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v8 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  if ( lv <= 1 )
    v11 = 1;
  else
    v11 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, this->fields.id, v11, v10);
  if ( Entity )
    return SkillLvEntity__getFuncDetail(Entity, v13);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4212885 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    byte_4212885 = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
  }
  return v15->static_fields->unknownNameText;
}


System_String_o *__fastcall SkillEntity__getName(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x8
  SkillAddEntity_o *AvailableSkillAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_42154F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, method);
    byte_42154F3 = 1;
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
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *Item; // x20
  __int64 v13; // x0
  SkillEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4215500 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B0D8A4(&string_TypeInfo, v9);
    byte_4215500 = 1;
  }
  script = this->fields.script;
  if ( !script )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  script = this->fields.script;
  if ( !script )
    goto LABEL_12;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                              (System_Type_o *)key,
                              (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  script = (struct System_Collections_Generic_Dictionary_string__object__o *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_12;
  if ( !LODWORD(script->fields.entries) )
  {
    v13 = sub_B0D9A8(script);
    sub_B0D948(v13, 0LL);
  }
  LOWORD(script->fields.count) = splitChar;
  if ( !Item )
LABEL_12:
    sub_B0D97C(script);
  if ( Item->klass == string_TypeInfo )
    return System_String__Split(Item, (System_Char_array *)script, 0LL);
  v14 = (SkillEntity_o *)sub_B0DC70(Item);
  return SkillEntity__getSkillCutInVoices(v14, v15);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getSkillChargeTime(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x3
  SkillLvEntity_o *Entity; // x0

  if ( (byte_42154F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42154F9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.id, lv, v7);
  if ( Entity )
    LODWORD(Entity) = Entity->fields.chargeTurn;
  return (int)Entity;
}


bool __fastcall SkillEntity__getSkillCutInCamPlayerAll(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215505 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17894/*"cutInCamPlayerAll"*/, method);
    byte_4215505 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17894/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 1;
}


int32_t __fastcall SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42154FA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17895/*"cutInId"*/, method);
    byte_42154FA = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17895/*"cutInId"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215507 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17896/*"cutInMessageMode"*/, method);
    byte_4215507 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17896/*"cutInMessageMode"*/, &param, v2);
  return param;
}


System_String_array *__fastcall SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4215502 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17897/*"cutInPrefabInfo"*/, method);
    byte_4215502 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17897/*"cutInPrefabInfo"*/, 0x2Cu, v2);
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabOffsets(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_array *ScriptStrings; // x0
  System_String_array *v7; // x19
  System_String_array *v8; // x0
  int max_length; // w8
  UnityEngine_Vector3_array *v10; // x20
  __int64 v11; // x22
  float *v12; // x23
  System_String_o *v13; // x21
  int v14; // w8
  System_String_array *v15; // x21
  float v16; // s8
  float v17; // s9
  float v18; // s10
  float v19; // s0
  float v20; // s0
  __int64 v22; // x0

  if ( (byte_4215503 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Vector3___TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_17898/*"cutInPrefabOffsets"*/, v5);
    byte_4215503 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17898/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v7 = ScriptStrings;
  v8 = (System_String_array *)sub_B0D8BC(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v7->max_length;
  v10 = (UnityEngine_Vector3_array *)v8;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    v12 = (float *)&v8->m_Items[1];
    do
    {
      if ( (unsigned int)v11 >= max_length )
        goto LABEL_24;
      v13 = v7->m_Items[v11];
      v8 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_23;
      if ( !v8->max_length )
        goto LABEL_24;
      LOWORD(v8->m_Items[0]) = 58;
      if ( !v13 )
        goto LABEL_23;
      v8 = System_String__Split(v13, (System_Char_array *)v8, 0LL);
      if ( !v8 )
        goto LABEL_23;
      v14 = v8->max_length;
      v15 = v8;
      v16 = 0.0;
      v17 = 0.0;
      v18 = 0.0;
      if ( v14 > 1 )
      {
        v19 = System_Single__Parse(v8->m_Items[1], 0LL);
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
      if ( !v10 )
LABEL_23:
        sub_B0D97C(v8);
      if ( (unsigned int)v11 >= v10->max_length )
      {
LABEL_24:
        v22 = sub_B0D9A8(v8);
        sub_B0D948(v22, 0LL);
      }
      *(v12 - 2) = v17;
      *(v12 - 1) = v18;
      *v12 = v16;
      v12 += 3;
      max_length = v7->max_length;
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
  __int64 v5; // x1
  System_String_array *ScriptStrings; // x0
  System_String_array *v7; // x19
  System_String_array *v8; // x0
  int max_length; // w8
  UnityEngine_Vector3_array *v10; // x20
  __int64 v11; // x22
  float *v12; // x23
  System_String_o *v13; // x21
  int v14; // w8
  System_String_array *v15; // x21
  float v16; // s8
  float v17; // s9
  float v18; // s10
  float v19; // s0
  float v20; // s0
  __int64 v22; // x0

  if ( (byte_4215504 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Vector3___TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_17899/*"cutInPrefabSizes"*/, v5);
    byte_4215504 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17899/*"cutInPrefabSizes"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v7 = ScriptStrings;
  v8 = (System_String_array *)sub_B0D8BC(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v7->max_length;
  v10 = (UnityEngine_Vector3_array *)v8;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    v12 = (float *)&v8->m_Items[1];
    do
    {
      if ( (unsigned int)v11 >= max_length )
        goto LABEL_24;
      v13 = v7->m_Items[v11];
      v8 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !v8 )
        goto LABEL_23;
      if ( !v8->max_length )
        goto LABEL_24;
      LOWORD(v8->m_Items[0]) = 58;
      if ( !v13 )
        goto LABEL_23;
      v8 = System_String__Split(v13, (System_Char_array *)v8, 0LL);
      if ( !v8 )
        goto LABEL_23;
      v14 = v8->max_length;
      v15 = v8;
      v16 = 0.0;
      v17 = 0.0;
      v18 = 0.0;
      if ( v14 > 1 )
      {
        v19 = System_Single__Parse(v8->m_Items[1], 0LL);
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
      if ( !v10 )
LABEL_23:
        sub_B0D97C(v8);
      if ( (unsigned int)v11 >= v10->max_length )
      {
LABEL_24:
        v22 = sub_B0D9A8(v8);
        sub_B0D948(v22, 0LL);
      }
      *(v12 - 2) = v17;
      *(v12 - 1) = v18;
      *v12 = v16;
      v12 += 3;
      max_length = v7->max_length;
      ++v11;
    }
    while ( (int)v11 < max_length );
  }
  return v10;
}


System_String_array *__fastcall SkillEntity__getSkillCutInVoices(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4215501 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17901/*"cutInVoices"*/, method);
    byte_4215501 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17901/*"cutInVoices"*/, 0x2Fu, v2);
}


void __fastcall SkillEntity__getSkillMessageInfo(
        SkillEntity_o *this,
        System_String_o **name,
        System_String_o **detail,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  System_String_o *EffectExplanation; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  v9 = SkillEntity__getName(this, (const MethodInfo *)name);
  *name = v9;
  sub_B0D840((BattleServantConfConponent_o *)name, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v16);
  *detail = EffectExplanation;
  sub_B0D840(
    (BattleServantConfConponent_o *)detail,
    (System_Int32_array **)EffectExplanation,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42154FF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6770/*"ForcedSkillSpeed"*/, method);
    byte_42154FF = 1;
  }
  param = 0;
  v4 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_6770/*"ForcedSkillSpeed"*/, &param, v2);
  return v4 && param == 1;
}


bool __fastcall SkillEntity__isPassive(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool __fastcall SkillEntity__isSkillCutInCamField(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215506 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17894/*"cutInCamPlayerAll"*/, method);
    byte_4215506 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17894/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 2;
}


void __fastcall SkillEntity__set_SortedSkillAddEntityList(
        SkillEntity_o *this,
        System_Collections_Generic_List_SkillAddEntity__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SortedSkillAddEntityList_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SortedSkillAddEntityList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  Il2CppObject *v3; // x19
  struct SkillEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42122B1 & 1) == 0 )
  {
    sub_B0D8A4(&SkillEntity___c_TypeInfo, v1);
    byte_42122B1 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SkillEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SkillEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return SkillAddEntity__IsOpen(x, 0LL);
}