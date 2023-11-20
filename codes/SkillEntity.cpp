void __fastcall SkillEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F9224 & 1) == 0 )
  {
    sub_B16FFC(&SkillEntity_TypeInfo, v1);
    byte_40F9224 = 1;
  }
  SkillEntity_TypeInfo->static_fields->CHECK_SCRIPT_TRUE = 1;
}


void __fastcall SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9223 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40F9223 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_40F921F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16437, method);
    byte_40F921F = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16437, 0LL);
}


SkillAddEntity_o *__fastcall SkillEntity__GetAvailableSkillAddEntity(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x19
  SkillEntity___c_c *v12; // x0
  struct SkillEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__22_0; // x20
  Il2CppObject *v15; // x21
  struct SkillEntity___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F9205 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___, method);
    sub_B16FFC(&Method_System_Func_SkillAddEntity__bool___ctor__, v6);
    sub_B16FFC(&System_Func_SkillAddEntity__bool__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, v8);
    sub_B16FFC(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, v9);
    sub_B16FFC(&SkillEntity___c_TypeInfo, v10);
    byte_40F9205 = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( !SortedSkillAddEntityList_k__BackingField || SortedSkillAddEntityList_k__BackingField->fields._size < 1 )
    return 0LL;
  v12 = SkillEntity___c_TypeInfo;
  if ( (BYTE3(SkillEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillEntity___c_TypeInfo);
    v12 = SkillEntity___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = SkillEntity___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_SkillAddEntity__bool__TypeInfo,
                                                                                    method,
                                                                                    v2,
                                                                                    v3,
                                                                                    v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__22_0,
      v15,
      Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_SkillAddEntity__bool___ctor__);
    v16 = SkillEntity___c_TypeInfo->static_fields;
    v16->__9__22_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__22_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__22_0,
                               (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


float __fastcall SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F921A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17779, method);
    byte_40F921A = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17779, 0.0, 0LL);
}


int32_t __fastcall SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9222 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17780, method);
    byte_40F9222 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17780, &param, v2);
  return param;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o **v7; // x8
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F921C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2776, isBefore);
    sub_B16FFC(&StringLiteral_1862, v6);
    byte_40F921C = 1;
  }
  param = 0;
  v7 = (System_String_o **)&StringLiteral_2776;
  if ( !isBefore )
    v7 = (System_String_o **)&StringLiteral_1862;
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
  System_Int32_array *SkillGroupIdFromSkillId; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  System_Int32_array *v12; // x21
  unsigned __int64 v13; // x24
  int32_t v14; // w22
  SkillGroupOverwriteMaster_o *v15; // x0
  const MethodInfo *v16; // x4
  int32_t *p_iconId; // x8
  SkillGroupOverwriteEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_40F9221 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillGroupMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v3);
    this = (SkillEntity_o *)sub_B16FFC(&DataManager_TypeInfo, v4);
    byte_40F9221 = 1;
  }
  entity = 0LL;
  BaseTime = SkillLvMaster__GetBaseTime((const MethodInfo *)this);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  SkillGroupIdFromSkillId = SkillGroupMaster__GetSkillGroupIdFromSkillId(
                              Master_WarQuestSelectionMaster,
                              v2->fields.id,
                              v7);
  if ( !SkillGroupIdFromSkillId )
    goto LABEL_21;
  v11 = *(_QWORD *)&SkillGroupIdFromSkillId->max_length;
  v12 = SkillGroupIdFromSkillId;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v11 )
      {
        sub_B17100(SkillGroupIdFromSkillId, v9, v10);
        sub_B170A0();
      }
      v14 = v12->m_Items[v13 + 1];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v15 = (SkillGroupOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
      if ( !v15 )
        goto LABEL_21;
      SkillGroupIdFromSkillId = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                        v15,
                                                        &entity,
                                                        v14,
                                                        BaseTime,
                                                        v16);
      if ( ((unsigned __int8)SkillGroupIdFromSkillId & 1) != 0 )
        break;
      LODWORD(v11) = v12->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_17;
    }
    if ( entity )
    {
      p_iconId = &entity->fields.iconId;
      return *p_iconId;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_17:
  p_iconId = &v2->fields.iconId;
  return *p_iconId;
}


int32_t __fastcall SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F921B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22053, method);
    byte_40F921B = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_22053, &param, v2) )
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

  if ( (byte_40F9219 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&StringLiteral_10159, v5);
    byte_40F9219 = 1;
  }
  v12 = svtId;
  param = 0;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v7 = System_String__Format((System_String_o *)StringLiteral_10159, v6, 0LL);
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

  if ( (byte_40F9220 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10153, method);
    byte_40F9220 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10153, &param, v2);
  return param;
}


bool __fastcall SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_40F921D & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_long___, method);
    sub_B16FFC(&StringLiteral_3541, v3);
    byte_40F921D = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_3541,
           0LL,
           (const MethodInfo_18B7C18 *)Method_BasicHelper_GetValue_long___) == 0;
}


bool __fastcall SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_40F921E & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_long___, method);
    sub_B16FFC(&StringLiteral_15355, v3);
    byte_40F921E = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_15355,
           0LL,
           (const MethodInfo_18B7C18 *)Method_BasicHelper_GetValue_long___) > 0;
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
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v12; // x8
  SkillEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40F920C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40F920C = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v10 = this->fields.script;
      if ( !v10
        || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                     (System_Type_o *)key,
                     (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B170D4();
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *param = v12;
      }
      else
      {
        v13 = (SkillEntity_o *)sub_B173C8(Item);
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
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F920F & 1) == 0 )
  {
    sub_B16FFC(&SkillEntity_TypeInfo, key);
    byte_40F920F = 1;
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

  if ( (byte_40F920E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, *(_QWORD *)&type);
    sub_B16FFC(&StringLiteral_17342, v5);
    byte_40F920E = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_17342,
            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


System_Int32_array *__fastcall SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0

  if ( (byte_40F920D & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F920D = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getEffectChargeTurn(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x21
  DataManager_o *v8; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  SkillLvEntity_o *Entity; // x0

  if ( (byte_40F9207 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_40F9207 = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(v7);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  v8,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v11 = lv <= 1 ? 1 : lv;
  Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.id, v11, v10);
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
  DataManager_o *v9; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  SkillLvEntity_o *Entity; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  LocalizationManager_c *v17; // x0

  if ( (byte_40F9208 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_40F9208 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(v8);
  v9 = **(DataManager_o ***)(v8 + 184);
  if ( !v9
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  v9,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  if ( lv <= 1 )
    v12 = 1;
  else
    v12 = lv;
  Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.id, v12, v11);
  if ( Entity )
    return SkillLvEntity__getDetail_23602036(Entity, lv, 0, v15);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    byte_40F87E5 = 1;
  }
  v17 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *v11; // x0
  System_String_o *v13; // x20
  const MethodInfo *v14; // x1
  Il2CppObject *Name; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9206 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12198, v6);
    sub_B16FFC(&StringLiteral_12197, v7);
    byte_40F9206 = 1;
  }
  if ( lv < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12198, 0LL);
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
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12197, 0LL);
    v10 = (Il2CppObject *)SkillEntity__getName(this, v9);
    v16 = lv;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    return System_String__Format_43739268(v8, v10, v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillEntity__getFuncExplanation(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x21
  DataManager_o *v9; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v14; // x1
  LocalizationManager_c *v16; // x0

  if ( (byte_40F9209 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_40F9209 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(v8);
  v9 = **(DataManager_o ***)(v8 + 184);
  if ( !v9
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  v9,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  if ( lv <= 1 )
    v12 = 1;
  else
    v12 = lv;
  Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.id, v12, v11);
  if ( Entity )
    return SkillLvEntity__getFuncDetail(Entity, v14);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    byte_40F87E5 = 1;
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


System_String_o *__fastcall SkillEntity__getName(SkillEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x8
  SkillAddEntity_o *AvailableSkillAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_40F9204 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, method);
    byte_40F9204 = 1;
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
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  System_String_o *Item; // x20
  __int64 v13; // x2
  System_Char_array *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  SkillEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_40F9211 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B16FFC(&string_TypeInfo, v9);
    byte_40F9211 = 1;
  }
  script = this->fields.script;
  if ( !script )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  v11 = this->fields.script;
  if ( !v11 )
    goto LABEL_12;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11,
                              (System_Type_o *)key,
                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v14 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v13);
  if ( !v14 )
    goto LABEL_12;
  if ( !v14->max_length )
  {
    sub_B17100(v14, v15, v16);
    sub_B170A0();
  }
  v14->m_Items[2] = splitChar;
  if ( !Item )
LABEL_12:
    sub_B170D4();
  if ( Item->klass == string_TypeInfo )
    return System_String__Split(Item, v14, 0LL);
  v18 = (SkillEntity_o *)sub_B173C8(Item);
  return SkillEntity__getSkillCutInVoices(v18, v19);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getSkillChargeTime(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x3
  SkillLvEntity_o *Entity; // x0

  if ( (byte_40F920A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&lv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F920A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.id, lv, v8);
  if ( Entity )
    LODWORD(Entity) = Entity->fields.chargeTurn;
  return (int)Entity;
}


bool __fastcall SkillEntity__getSkillCutInCamPlayerAll(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9216 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17770, method);
    byte_40F9216 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17770, &param, v2);
  return param == 1;
}


int32_t __fastcall SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F920B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17771, method);
    byte_40F920B = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17771, &param, v2) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9218 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17772, method);
    byte_40F9218 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17772, &param, v2);
  return param;
}


System_String_array *__fastcall SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9213 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17773, method);
    byte_40F9213 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17773, 0x2Cu, v2);
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabOffsets(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_array *ScriptStrings; // x0
  __int64 v7; // x2
  System_String_array *v8; // x19
  System_String_array *v9; // x0
  System_String_array *v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  UnityEngine_Vector3_array *v13; // x20
  __int64 v14; // x22
  float *v15; // x23
  System_String_o *v16; // x21
  int v17; // w8
  System_String_array *v18; // x21
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float v22; // s0
  float v23; // s0

  if ( (byte_40F9214 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&UnityEngine_Vector3___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_17774, v5);
    byte_40F9214 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17774, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v8 = ScriptStrings;
  v9 = (System_String_array *)sub_B17014(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length, v7);
  max_length = v8->max_length;
  v13 = (UnityEngine_Vector3_array *)v9;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    v15 = (float *)&v9->m_Items[1];
    do
    {
      if ( (unsigned int)v14 >= max_length )
        goto LABEL_24;
      v16 = v8->m_Items[v14];
      v9 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v11);
      if ( !v9 )
        goto LABEL_23;
      v10 = v9;
      if ( !v9->max_length )
        goto LABEL_24;
      LOWORD(v9->m_Items[0]) = 58;
      if ( !v16 )
        goto LABEL_23;
      v9 = System_String__Split(v16, (System_Char_array *)v9, 0LL);
      if ( !v9 )
        goto LABEL_23;
      v17 = v9->max_length;
      v18 = v9;
      v19 = 0.0;
      v20 = 0.0;
      v21 = 0.0;
      if ( v17 > 1 )
      {
        v22 = System_Single__Parse(v9->m_Items[1], 0LL);
        v17 = v18->max_length;
        v20 = v22;
        if ( v17 < 3 )
        {
          v21 = 0.0;
        }
        else
        {
          v23 = System_Single__Parse(v18->m_Items[2], 0LL);
          v17 = v18->max_length;
          v21 = v23;
        }
      }
      if ( v17 >= 1 )
        v19 = System_Single__Parse(v18->m_Items[0], 0LL);
      if ( !v13 )
LABEL_23:
        sub_B170D4();
      if ( (unsigned int)v14 >= v13->max_length )
      {
LABEL_24:
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      *(v15 - 2) = v20;
      *(v15 - 1) = v21;
      *v15 = v19;
      v15 += 3;
      max_length = v8->max_length;
      ++v14;
    }
    while ( (int)v14 < max_length );
  }
  return v13;
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabSizes(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_array *ScriptStrings; // x0
  __int64 v7; // x2
  System_String_array *v8; // x19
  System_String_array *v9; // x0
  System_String_array *v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  UnityEngine_Vector3_array *v13; // x20
  __int64 v14; // x22
  float *v15; // x23
  System_String_o *v16; // x21
  int v17; // w8
  System_String_array *v18; // x21
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float v22; // s0
  float v23; // s0

  if ( (byte_40F9215 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&UnityEngine_Vector3___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_17775, v5);
    byte_40F9215 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17775, 0x2Fu, v2);
  if ( !ScriptStrings )
    return 0LL;
  v8 = ScriptStrings;
  v9 = (System_String_array *)sub_B17014(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length, v7);
  max_length = v8->max_length;
  v13 = (UnityEngine_Vector3_array *)v9;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    v15 = (float *)&v9->m_Items[1];
    do
    {
      if ( (unsigned int)v14 >= max_length )
        goto LABEL_24;
      v16 = v8->m_Items[v14];
      v9 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v11);
      if ( !v9 )
        goto LABEL_23;
      v10 = v9;
      if ( !v9->max_length )
        goto LABEL_24;
      LOWORD(v9->m_Items[0]) = 58;
      if ( !v16 )
        goto LABEL_23;
      v9 = System_String__Split(v16, (System_Char_array *)v9, 0LL);
      if ( !v9 )
        goto LABEL_23;
      v17 = v9->max_length;
      v18 = v9;
      v19 = 0.0;
      v20 = 0.0;
      v21 = 0.0;
      if ( v17 > 1 )
      {
        v22 = System_Single__Parse(v9->m_Items[1], 0LL);
        v17 = v18->max_length;
        v20 = v22;
        if ( v17 < 3 )
        {
          v21 = 0.0;
        }
        else
        {
          v23 = System_Single__Parse(v18->m_Items[2], 0LL);
          v17 = v18->max_length;
          v21 = v23;
        }
      }
      if ( v17 >= 1 )
        v19 = System_Single__Parse(v18->m_Items[0], 0LL);
      if ( !v13 )
LABEL_23:
        sub_B170D4();
      if ( (unsigned int)v14 >= v13->max_length )
      {
LABEL_24:
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      *(v15 - 2) = v20;
      *(v15 - 1) = v21;
      *v15 = v19;
      v15 += 3;
      max_length = v8->max_length;
      ++v14;
    }
    while ( (int)v14 < max_length );
  }
  return v13;
}


System_String_array *__fastcall SkillEntity__getSkillCutInVoices(SkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9212 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17777, method);
    byte_40F9212 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_17777, 0x2Fu, v2);
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
  sub_B16F98((BattleServantConfConponent_o *)name, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v16);
  *detail = EffectExplanation;
  sub_B16F98(
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

  if ( (byte_40F9210 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6727, method);
    byte_40F9210 = 1;
  }
  param = 0;
  v4 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_6727, &param, v2);
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

  if ( (byte_40F9217 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17770, method);
    byte_40F9217 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_17770, &param, v2);
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A06 & 1) == 0 )
  {
    sub_B16FFC(&SkillEntity___c_TypeInfo, v1);
    byte_40F7A06 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SkillEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return SkillAddEntity__IsOpen(x, 0LL);
}