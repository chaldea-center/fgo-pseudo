void __fastcall SkillEntity___cctor(const MethodInfo *method)
{
  if ( (byte_42B0D3F & 1) == 0 )
  {
    sub_B52984(&SkillEntity_TypeInfo);
    byte_42B0D3F = 1;
  }
  SkillEntity_TypeInfo->static_fields->CHECK_SCRIPT_TRUE = 1;
}


void __fastcall SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0D3E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B0D3E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_42B0D39 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16613/*"assumedEffectId"*/);
    byte_42B0D39 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16613/*"assumedEffectId"*/, 0LL);
}


SkillAddEntity_o *__fastcall SkillEntity__GetAvailableSkillAddEntity(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x19
  SkillEntity___c_c *v4; // x0
  struct SkillEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__22_0; // x20
  Il2CppObject *v7; // x21
  struct SkillEntity___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42B0D1F & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
    sub_B52984(&Method_System_Func_SkillAddEntity__bool___ctor__);
    sub_B52984(&System_Func_SkillAddEntity__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__);
    sub_B52984(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__);
    sub_B52984(&SkillEntity___c_TypeInfo);
    byte_42B0D1F = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( !SortedSkillAddEntityList_k__BackingField || SortedSkillAddEntityList_k__BackingField->fields._size < 1 )
    return 0LL;
  v4 = SkillEntity___c_TypeInfo;
  if ( (BYTE3(SkillEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillEntity___c_TypeInfo);
    v4 = SkillEntity___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = SkillEntity___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_SkillAddEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__22_0,
      v7,
      Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_SkillAddEntity__bool___ctor__);
    v8 = SkillEntity___c_TypeInfo->static_fields;
    v8->__9__22_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__22_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__22_0,
                               (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


float __fastcall SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0D34 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17972/*"cutinAdditionalTime"*/);
    byte_42B0D34 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17972/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


int32_t __fastcall SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0D3C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17973/*"cutinFirstId"*/);
    byte_42B0D3C = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17973/*"cutinFirstId"*/, &param, v2);
  return param;
}


int32_t __fastcall SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o **v6; // x8
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0D36 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2819/*"BeforeFieldCallEffect"*/);
    sub_B52984(&StringLiteral_1890/*"AfterFieldCallEffect"*/);
    byte_42B0D36 = 1;
  }
  param = 0;
  v6 = (System_String_o **)&StringLiteral_2819/*"BeforeFieldCallEffect"*/;
  if ( !isBefore )
    v6 = (System_String_o **)&StringLiteral_1890/*"AfterFieldCallEffect"*/;
  if ( SkillEntity__checkScript(this, *v6, &param, v3) )
    return param;
  else
    return -1;
}


int32_t __fastcall SkillEntity__GetIconId(SkillEntity_o *this, const MethodInfo *method)
{
  SkillEntity_o *v2; // x19
  int64_t BaseTime; // x20
  SkillGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SkillGroupMaster_o *v8; // x21
  unsigned __int64 v9; // x24
  int32_t v10; // w22
  const MethodInfo *v11; // x4
  int32_t *p_iconId; // x8
  __int64 v14; // x0
  SkillGroupOverwriteEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_42B0D3B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    this = (SkillEntity_o *)sub_B52984(&DataManager_TypeInfo);
    byte_42B0D3B = 1;
  }
  entity = 0LL;
  BaseTime = SkillLvMaster__GetBaseTime((const MethodInfo *)this);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupMaster__GetSkillGroupIdFromSkillId(
                                                           Master_WarQuestSelectionMaster,
                                                           v2->fields.id,
                                                           v6);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v8 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)MasterName_k__BackingField )
      {
        v14 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v14, 0LL);
      }
      v10 = *((_DWORD *)&v8->fields.list + v9);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_21;
      Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                               (SkillGroupOverwriteMaster_o *)Master_WarQuestSelectionMaster,
                                                               &entity,
                                                               v10,
                                                               BaseTime,
                                                               v11);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        break;
      LODWORD(MasterName_k__BackingField) = v8->fields._MasterName_k__BackingField;
      if ( (__int64)++v9 >= (int)MasterName_k__BackingField )
        goto LABEL_17;
    }
    if ( entity )
    {
      p_iconId = &entity->fields.iconId;
      return *p_iconId;
    }
LABEL_21:
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
  }
LABEL_17:
  p_iconId = &v2->fields.iconId;
  return *p_iconId;
}


int32_t __fastcall SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0D35 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22332/*"skillScript_1"*/);
    byte_42B0D35 = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_22332/*"skillScript_1"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__GetMotionId(SkillEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  bool v8; // w0
  int32_t *p_motion; // x8
  int32_t v11; // [xsp+8h] [xbp-18h] BYREF
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0D33 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_10256/*"OverwriteMotion_{0}"*/);
    byte_42B0D33 = 1;
  }
  v11 = svtId;
  param = 0;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v6 = System_String__Format((System_String_o *)StringLiteral_10256/*"OverwriteMotion_{0}"*/, v5, 0LL);
  v8 = SkillEntity__checkScript(this, v6, &param, v7);
  p_motion = &this->fields.motion;
  if ( v8 )
    p_motion = &param;
  return *p_motion;
}


int32_t __fastcall SkillEntity__GetOverWriteSkillInfoId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0D3A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10250/*"OverWriteSkillInfoId"*/);
    byte_42B0D3A = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10250/*"OverWriteSkillInfoId"*/, &param, v2);
  return param;
}


bool __fastcall SkillEntity__IsCheckUpdateShiftServant(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0D3D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3973/*"CheckUpdateShiftServant"*/);
    byte_42B0D3D = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_3973/*"CheckUpdateShiftServant"*/, &param, v2);
}


bool __fastcall SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0D37 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_GetValue_long___);
    sub_B52984(&StringLiteral_3588/*"CanNotSkip"*/);
    byte_42B0D37 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_3588/*"CanNotSkip"*/,
           0LL,
           (const MethodInfo_1A438BC *)Method_BasicHelper_GetValue_long___) == 0;
}


bool __fastcall SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0D38 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_GetValue_long___);
    sub_B52984(&StringLiteral_15522/*"WarBoardForcePassiveEveryBattle"*/);
    byte_42B0D38 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_15522/*"WarBoardForcePassiveEveryBattle"*/,
           0LL,
           (const MethodInfo_1A438BC *)Method_BasicHelper_GetValue_long___) > 0;
}


bool __fastcall SkillEntity__checkScript(
        SkillEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v10; // x8
  SkillEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42B0D26 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42B0D26 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B52A5C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v10 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *param = v10;
      }
      else
      {
        v11 = (SkillEntity_o *)sub_B52D50(Item);
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


bool __fastcall SkillEntity__checkScriptFromIdx(SkillEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v6; // w8
  bool result; // w0
  int32_t v8; // w19
  SkillEntity_c *v9; // x0
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0D29 & 1) == 0 )
  {
    sub_B52984(&SkillEntity_TypeInfo);
    byte_42B0D29 = 1;
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


bool __fastcall SkillEntity__checkUseTreasure(SkillEntity_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42B0D28 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&StringLiteral_17532/*"checkUseTreasure"*/);
    byte_42B0D28 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_17532/*"checkUseTreasure"*/,
            (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


System_Int32_array *__fastcall SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_42B0D27 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42B0D27 = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getEffectChargeTurn(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  SkillLvEntity_o *Entity; // x0

  if ( (byte_42B0D21 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B0D21 = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AEB684(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B52A5C(MasterData_WarQuestSelectionMaster, *(_QWORD *)&lv);
  }
  v9 = lv <= 1 ? 1 : lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, this->fields.id, v9, v8);
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
  __int64 v5; // x21
  __int64 v6; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v11; // x3
  LocalizationManager_c *v13; // x0

  if ( (byte_42B0D22 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B0D22 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AEB684(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B52A5C(MasterData_WarQuestSelectionMaster, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v9 = 1;
  else
    v9 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, this->fields.id, v9, v8);
  if ( Entity )
    return SkillLvEntity__getDetail_26526320(Entity, lv, 0, v11);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ADEE6 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ADEE6 = 1;
  }
  v13 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *v8; // x0
  System_String_o *v10; // x20
  const MethodInfo *v11; // x1
  Il2CppObject *Name; // x0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0D20 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12340/*"SKILL_EFFECT_TITLE"*/);
    sub_B52984(&StringLiteral_12339/*"SKILL_EFFECT_LEVEL_TITLE"*/);
    byte_42B0D20 = 1;
  }
  if ( lv < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12340/*"SKILL_EFFECT_TITLE"*/, 0LL);
    Name = (Il2CppObject *)SkillEntity__getName(this, v11);
    return System_String__Format(v10, Name, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12339/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0LL);
    v7 = (Il2CppObject *)SkillEntity__getName(this, v6);
    v13 = lv;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    return System_String__Format_44563852(v5, v7, v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillEntity__getFuncExplanation(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v11; // x1
  LocalizationManager_c *v13; // x0

  if ( (byte_42B0D23 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B0D23 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AEB684(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B52A5C(MasterData_WarQuestSelectionMaster, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v9 = 1;
  else
    v9 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, this->fields.id, v9, v8);
  if ( Entity )
    return SkillLvEntity__getFuncDetail(Entity, v11);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ADEE6 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ADEE6 = 1;
  }
  v13 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_42B0D1E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__);
    byte_42B0D1E = 1;
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *Item; // x20
  __int64 v10; // x0
  SkillEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42B0D2B & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&string_TypeInfo);
    byte_42B0D2B = 1;
  }
  script = this->fields.script;
  if ( !script )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  script = this->fields.script;
  if ( !script )
    goto LABEL_12;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                              (System_Type_o *)key,
                              (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  script = (struct System_Collections_Generic_Dictionary_string__object__o *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_12;
  if ( !LODWORD(script->fields.entries) )
  {
    v10 = sub_B52A88(script);
    sub_B52A28(v10, 0LL);
  }
  LOWORD(script->fields.count) = splitChar;
  if ( !Item )
LABEL_12:
    sub_B52A5C(script, key);
  if ( Item->klass == string_TypeInfo )
    return System_String__Split(Item, (System_Char_array *)script, 0LL);
  v11 = (SkillEntity_o *)sub_B52D50(Item);
  return SkillEntity__getSkillCutInVoices(v11, v12);
}


int32_t __fastcall SkillEntity__getSkillChargeTime(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  SkillLvEntity_o *Entity; // x0

  if ( (byte_42B0D24 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0D24 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
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

  if ( (byte_42B0D30 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17963/*"cutInCamPlayerAll"*/);
    byte_42B0D30 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17963/*"cutInCamPlayerAll"*/, &param, v2);
  return param == 1;
}


int32_t __fastcall SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0D25 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17964/*"cutInId"*/);
    byte_42B0D25 = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17964/*"cutInId"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0D32 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17965/*"cutInMessageMode"*/);
    byte_42B0D32 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17965/*"cutInMessageMode"*/, &param, v2);
  return param;
}


System_String_array *__fastcall SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B0D2D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17966/*"cutInPrefabInfo"*/);
    byte_42B0D2D = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17966/*"cutInPrefabInfo"*/, 0x2Cu, v2);
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabOffsets(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *ScriptStrings; // x0
  System_String_array *v5; // x19
  System_String_array *v6; // x0
  int max_length; // w8
  UnityEngine_Vector3_array *v8; // x20
  __int64 v9; // x22
  float *v10; // x23
  System_String_o *v11; // x21
  System_String_array *v12; // x1
  int v13; // w8
  System_String_array *v14; // x21
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s0
  float v19; // s0
  __int64 v21; // x0

  if ( (byte_42B0D2E & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&UnityEngine_Vector3___TypeInfo);
    sub_B52984(&StringLiteral_17967/*"cutInPrefabOffsets"*/);
    byte_42B0D2E = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17967/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v5 = ScriptStrings;
  v6 = (System_String_array *)sub_B5299C(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v5->max_length;
  v8 = (UnityEngine_Vector3_array *)v6;
  if ( max_length >= 1 )
  {
    v9 = 0LL;
    v10 = (float *)&v6->m_Items[1];
    do
    {
      if ( (unsigned int)v9 >= max_length )
        goto LABEL_24;
      v11 = v5->m_Items[v9];
      v6 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_23;
      v12 = v6;
      if ( !v6->max_length )
        goto LABEL_24;
      LOWORD(v6->m_Items[0]) = 58;
      if ( !v11 )
        goto LABEL_23;
      v6 = System_String__Split(v11, (System_Char_array *)v6, 0LL);
      if ( !v6 )
        goto LABEL_23;
      v13 = v6->max_length;
      v14 = v6;
      v15 = 0.0;
      v16 = 0.0;
      v17 = 0.0;
      if ( v13 > 1 )
      {
        v18 = System_Single__Parse(v6->m_Items[1], 0LL);
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
      if ( !v8 )
LABEL_23:
        sub_B52A5C(v6, v12);
      if ( (unsigned int)v9 >= v8->max_length )
      {
LABEL_24:
        v21 = sub_B52A88(v6);
        sub_B52A28(v21, 0LL);
      }
      *(v10 - 2) = v16;
      *(v10 - 1) = v17;
      *v10 = v15;
      v10 += 3;
      max_length = v5->max_length;
      ++v9;
    }
    while ( (int)v9 < max_length );
  }
  return v8;
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabSizes(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *ScriptStrings; // x0
  System_String_array *v5; // x19
  System_String_array *v6; // x0
  int max_length; // w8
  UnityEngine_Vector3_array *v8; // x20
  __int64 v9; // x22
  float *v10; // x23
  System_String_o *v11; // x21
  System_String_array *v12; // x1
  int v13; // w8
  System_String_array *v14; // x21
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s0
  float v19; // s0
  __int64 v21; // x0

  if ( (byte_42B0D2F & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&UnityEngine_Vector3___TypeInfo);
    sub_B52984(&StringLiteral_17968/*"cutInPrefabSizes"*/);
    byte_42B0D2F = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17968/*"cutInPrefabSizes"*/, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v5 = ScriptStrings;
  v6 = (System_String_array *)sub_B5299C(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v5->max_length;
  v8 = (UnityEngine_Vector3_array *)v6;
  if ( max_length >= 1 )
  {
    v9 = 0LL;
    v10 = (float *)&v6->m_Items[1];
    do
    {
      if ( (unsigned int)v9 >= max_length )
        goto LABEL_24;
      v11 = v5->m_Items[v9];
      v6 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
      if ( !v6 )
        goto LABEL_23;
      v12 = v6;
      if ( !v6->max_length )
        goto LABEL_24;
      LOWORD(v6->m_Items[0]) = 58;
      if ( !v11 )
        goto LABEL_23;
      v6 = System_String__Split(v11, (System_Char_array *)v6, 0LL);
      if ( !v6 )
        goto LABEL_23;
      v13 = v6->max_length;
      v14 = v6;
      v15 = 0.0;
      v16 = 0.0;
      v17 = 0.0;
      if ( v13 > 1 )
      {
        v18 = System_Single__Parse(v6->m_Items[1], 0LL);
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
      if ( !v8 )
LABEL_23:
        sub_B52A5C(v6, v12);
      if ( (unsigned int)v9 >= v8->max_length )
      {
LABEL_24:
        v21 = sub_B52A88(v6);
        sub_B52A28(v21, 0LL);
      }
      *(v10 - 2) = v16;
      *(v10 - 1) = v17;
      *v10 = v15;
      v10 += 3;
      max_length = v5->max_length;
      ++v9;
    }
    while ( (int)v9 < max_length );
  }
  return v8;
}


System_String_array *__fastcall SkillEntity__getSkillCutInVoices(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B0D2C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17970/*"cutInVoices"*/);
    byte_42B0D2C = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17970/*"cutInVoices"*/, 0x2Fu, v2);
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
  sub_B52920((BattleServantConfConponent_o *)name, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v16);
  *detail = EffectExplanation;
  sub_B52920(
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

  if ( (byte_42B0D2A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6797/*"ForcedSkillSpeed"*/);
    byte_42B0D2A = 1;
  }
  param = 0;
  v4 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_6797/*"ForcedSkillSpeed"*/, &param, v2);
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

  if ( (byte_42B0D31 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17963/*"cutInCamPlayerAll"*/);
    byte_42B0D31 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17963/*"cutInCamPlayerAll"*/, &param, v2);
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
  sub_B52920(
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
  Il2CppObject *v1; // x19
  struct SkillEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42AD3CC & 1) == 0 )
  {
    sub_B52984(&SkillEntity___c_TypeInfo);
    byte_42AD3CC = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(SkillEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SkillEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillEntity___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return SkillAddEntity__IsOpen(x, 0LL);
}