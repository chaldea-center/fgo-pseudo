void __fastcall SkillEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E97D9 & 1) == 0 )
  {
    sub_B5D5C4(&SkillEntity_TypeInfo, v1, v2, v3);
    byte_42E97D9 = 1;
  }
  SkillEntity_TypeInfo->static_fields->CHECK_SCRIPT_TRUE = 1;
}


void __fastcall SkillEntity___ctor(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E97D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E97D8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E97D3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16699/*"assumedEffectId"*/, (_DWORD)method, v2, v3);
    byte_42E97D3 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16699/*"assumedEffectId"*/, 0LL);
}


SkillAddEntity_o *__fastcall SkillEntity__GetAvailableSkillAddEntity(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x19
  SkillEntity___c_c *v21; // x0
  struct SkillEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__22_0; // x20
  Il2CppObject *v24; // x21
  struct SkillEntity___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E97B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_SkillAddEntity__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_SkillAddEntity__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__, v14, v15, v16);
    sub_B5D5C4(&SkillEntity___c_TypeInfo, v17, v18, v19);
    byte_42E97B9 = 1;
  }
  SortedSkillAddEntityList_k__BackingField = this->fields._SortedSkillAddEntityList_k__BackingField;
  if ( !SortedSkillAddEntityList_k__BackingField || SortedSkillAddEntityList_k__BackingField->fields._size < 1 )
    return 0LL;
  v21 = SkillEntity___c_TypeInfo;
  if ( (BYTE3(SkillEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillEntity___c_TypeInfo);
    v21 = SkillEntity___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = SkillEntity___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_SkillAddEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__22_0,
      v24,
      Method_SkillEntity___c__GetAvailableSkillAddEntity_b__22_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_SkillAddEntity__bool___ctor__);
    v25 = SkillEntity___c_TypeInfo->static_fields;
    v25->__9__22_0 = (struct System_Func_SkillAddEntity__bool__o *)_9__22_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  return (SkillAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)SortedSkillAddEntityList_k__BackingField,
                               (System_Func_TSource__bool__o *)_9__22_0,
                               (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_SkillAddEntity___);
}


float __fastcall SkillEntity__GetCutinAdditionalTime(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E97CE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18066/*"cutinAdditionalTime"*/, (_DWORD)method, v2, v3);
    byte_42E97CE = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18066/*"cutinAdditionalTime"*/, 0.0, 0LL);
}


int32_t __fastcall SkillEntity__GetCutinFirstId(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97D6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18067/*"cutinFirstId"*/, (_DWORD)method, v2, v3);
    byte_42E97D6 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18067/*"cutinFirstId"*/, &param, v3);
  return param;
}


int32_t __fastcall SkillEntity__GetFieldCallEffectId(SkillEntity_o *this, bool isBefore, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o **v9; // x8
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97D0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2843/*"BeforeFieldCallEffect"*/, isBefore, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1895/*"AfterFieldCallEffect"*/, v6, v7, v8);
    byte_42E97D0 = 1;
  }
  param = 0;
  v9 = (System_String_o **)&StringLiteral_2843/*"BeforeFieldCallEffect"*/;
  if ( !isBefore )
    v9 = (System_String_o **)&StringLiteral_1895/*"AfterFieldCallEffect"*/;
  if ( SkillEntity__checkScript(this, *v9, &param, v3) )
    return param;
  else
    return -1;
}


int32_t __fastcall SkillEntity__GetIconId(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t BaseTime; // x20
  SkillGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SkillGroupMaster_o *v16; // x21
  unsigned __int64 v17; // x24
  int32_t v18; // w22
  const MethodInfo *v19; // x4
  int32_t *p_iconId; // x8
  __int64 v22; // x0
  SkillGroupOverwriteEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E97D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillGroupMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    byte_42E97D5 = 1;
  }
  entity = 0LL;
  BaseTime = SkillLvMaster__GetBaseTime(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupMaster__GetSkillGroupIdFromSkillId(
                                                           Master_WarQuestSelectionMaster,
                                                           this->fields.id,
                                                           v14);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v16 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)MasterName_k__BackingField )
      {
        v22 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v22, 0LL);
      }
      v18 = *((_DWORD *)&v16->fields.list + v17);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_21;
      Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                               (SkillGroupOverwriteMaster_o *)Master_WarQuestSelectionMaster,
                                                               &entity,
                                                               v18,
                                                               BaseTime,
                                                               v19);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        break;
      LODWORD(MasterName_k__BackingField) = v16->fields._MasterName_k__BackingField;
      if ( (__int64)++v17 >= (int)MasterName_k__BackingField )
        goto LABEL_17;
    }
    if ( entity )
    {
      p_iconId = &entity->fields.iconId;
      return *p_iconId;
    }
LABEL_21:
    sub_B5D69C(Master_WarQuestSelectionMaster, v13);
  }
LABEL_17:
  p_iconId = &this->fields.iconId;
  return *p_iconId;
}


int32_t __fastcall SkillEntity__GetLossCutinId(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97CF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22447/*"skillScript_1"*/, (_DWORD)method, v2, v3);
    byte_42E97CF = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_22447/*"skillScript_1"*/, &param, v3) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__GetMotionId(SkillEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x3
  bool v12; // w0
  int32_t *p_motion; // x8
  int32_t v15; // [xsp+8h] [xbp-18h] BYREF
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97CD & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_10298/*"OverwriteMotion_{0}"*/, v6, v7, v8);
    byte_42E97CD = 1;
  }
  v15 = svtId;
  param = 0;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v10 = System_String__Format((System_String_o *)StringLiteral_10298/*"OverwriteMotion_{0}"*/, v9, 0LL);
  v12 = SkillEntity__checkScript(this, v10, &param, v11);
  p_motion = &this->fields.motion;
  if ( v12 )
    p_motion = &param;
  return *p_motion;
}


int32_t __fastcall SkillEntity__GetOverWriteSkillInfoId(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97D4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10292/*"OverWriteSkillInfoId"*/, (_DWORD)method, v2, v3);
    byte_42E97D4 = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_10292/*"OverWriteSkillInfoId"*/, &param, v3);
  return param;
}


bool __fastcall SkillEntity__IsCheckUpdateShiftServant(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97D7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4006/*"CheckUpdateShiftServant"*/, (_DWORD)method, v2, v3);
    byte_42E97D7 = 1;
  }
  param = 0;
  return SkillEntity__checkScript(this, (System_String_o *)StringLiteral_4006/*"CheckUpdateShiftServant"*/, &param, v3);
}


bool __fastcall SkillEntity__IsSkippable(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E97D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_long___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3621/*"CanNotSkip"*/, v5, v6, v7);
    byte_42E97D1 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_3621/*"CanNotSkip"*/,
           0LL,
           (const MethodInfo_1AD8984 *)Method_BasicHelper_GetValue_long___) == 0;
}


bool __fastcall SkillEntity__IsWarBoardForcePassiveEveryBattle(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E97D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_long___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15607/*"WarBoardForcePassiveEveryBattle"*/, v5, v6, v7);
    byte_42E97D2 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           (System_String_o *)StringLiteral_15607/*"WarBoardForcePassiveEveryBattle"*/,
           0LL,
           (const MethodInfo_1AD8984 *)Method_BasicHelper_GetValue_long___) > 0;
}


bool __fastcall SkillEntity__checkScript(
        SkillEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v16; // x8
  SkillEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_42E97C0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)param,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42E97C0 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B5D69C(Item, v14);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v16 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *param = v16;
      }
      else
      {
        v17 = (SkillEntity_o *)sub_B5D990(Item);
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
  bool v6; // w8
  bool result; // w0
  int32_t v8; // w19
  SkillEntity_c *v9; // x0
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97C3 & 1) == 0 )
  {
    sub_B5D5C4(&SkillEntity_TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    byte_42E97C3 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E97C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, type, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17626/*"checkUseTreasure"*/, v6, v7, v8);
    byte_42E97C2 = 1;
  }
  script = this->fields.script;
  return !script
      || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_17626/*"checkUseTreasure"*/,
            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
      || Follower__isUseTreasure(type, 0LL);
}


System_Int32_array *__fastcall SkillEntity__getActIndividuality(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array *result; // x0

  if ( (byte_42E97C1 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E97C1 = 1;
  }
  result = this->fields.actIndividuality;
  if ( !result )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SkillEntity__getEffectChargeTurn(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x21
  __int64 v10; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v12; // w2
  SkillLvEntity_o *Entity; // x0

  if ( (byte_42E97BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, lv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6, v7, v8);
    byte_42E97BB = 1;
  }
  if ( this->fields.type != 1 )
    return -1;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AF52C4(v10);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v10 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, *(_QWORD *)&lv);
  }
  v12 = lv <= 1 ? 1 : lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, this->fields.id, v12, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v15; // w2
  SkillLvEntity_o *Entity; // x0
  int v17; // w1
  int v18; // w2
  const MethodInfo *v19; // x3
  LocalizationManager_c *v21; // x0

  if ( (byte_42E97BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, lv, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9, v10, v11);
    byte_42E97BC = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AF52C4(v13);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v13 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v15 = 1;
  else
    v15 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, this->fields.id, v15, 0LL);
  if ( Entity )
    return SkillLvEntity__getDetail_26810736(Entity, lv, 0, v19);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    byte_42E6772 = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager_TypeInfo;
  }
  return v21->static_fields->unknownNameText;
}


System_Int32_array *__fastcall SkillEntity__getEffectList(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.effectList;
}


System_String_o *__fastcall SkillEntity__getEffectTitle(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *v15; // x21
  const MethodInfo *v16; // x1
  Il2CppObject *v17; // x19
  Il2CppObject *v18; // x0
  System_String_o *v20; // x20
  const MethodInfo *v21; // x1
  Il2CppObject *Name; // x0
  int32_t v23; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97BA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, lv, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_12398/*"SKILL_EFFECT_TITLE"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_12397/*"SKILL_EFFECT_LEVEL_TITLE"*/, v12, v13, v14);
    byte_42E97BA = 1;
  }
  if ( lv < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12398/*"SKILL_EFFECT_TITLE"*/, 0LL);
    Name = (Il2CppObject *)SkillEntity__getName(this, v21);
    return System_String__Format(v20, Name, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12397/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0LL);
    v17 = (Il2CppObject *)SkillEntity__getName(this, v16);
    v23 = lv;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    return System_String__Format_44573324(v15, v17, v18, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillEntity__getFuncExplanation(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v15; // w2
  SkillLvEntity_o *Entity; // x0
  const MethodInfo *v17; // x1
  int v18; // w2
  __int64 v19; // x3
  LocalizationManager_c *v21; // x0

  if ( (byte_42E97BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, lv, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9, v10, v11);
    byte_42E97BD = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AF52C4(v13);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v13 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, *(_QWORD *)&lv);
  }
  if ( lv <= 1 )
    v15 = 1;
  else
    v15 = lv;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, this->fields.id, v15, 0LL);
  if ( Entity )
    return SkillLvEntity__getFuncDetail(Entity, v17);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)v17, v18, v19);
    byte_42E6772 = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager_TypeInfo;
  }
  return v21->static_fields->unknownNameText;
}


System_String_o *__fastcall SkillEntity__getName(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_SkillAddEntity__o *SortedSkillAddEntityList_k__BackingField; // x8
  SkillAddEntity_o *AvailableSkillAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_42E97B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillAddEntity__get_Count__, (_DWORD)method, v2, v3);
    byte_42E97B8 = 1;
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
  int v7; // w1
  __int16 v8; // w2
  __int64 v9; // x3
  int v10; // w1
  __int16 v11; // w2
  __int64 v12; // x3
  int v13; // w1
  __int16 v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *Item; // x20
  __int64 v19; // x0
  SkillEntity_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_42E97C5 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)key, splitChar, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10, v11, v12);
    sub_B5D5C4(&string_TypeInfo, v13, v14, v15);
    byte_42E97C5 = 1;
  }
  script = this->fields.script;
  if ( !script )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0LL;
  script = this->fields.script;
  if ( !script )
    goto LABEL_12;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                              (System_Type_o *)key,
                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  script = (struct System_Collections_Generic_Dictionary_string__object__o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_12;
  if ( !LODWORD(script->fields.entries) )
  {
    v19 = sub_B5D6C8(script);
    sub_B5D668(v19, 0LL);
  }
  LOWORD(script->fields.count) = splitChar;
  if ( !Item )
LABEL_12:
    sub_B5D69C(script, key);
  if ( Item->klass == string_TypeInfo )
    return System_String__Split(Item, (System_Char_array *)script, 0LL);
  v20 = (SkillEntity_o *)sub_B5D990(Item);
  return SkillEntity__getSkillCutInVoices(v20, v21);
}


int32_t __fastcall SkillEntity__getSkillChargeTime(SkillEntity_o *this, int32_t lv, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_42E97BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, lv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E97BE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.id, lv, 0LL);
  if ( Entity )
    LODWORD(Entity) = Entity->fields.chargeTurn;
  return (int)Entity;
}


bool __fastcall SkillEntity__getSkillCutInCamPlayerAll(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97CA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18057/*"cutInCamPlayerAll"*/, (_DWORD)method, v2, v3);
    byte_42E97CA = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18057/*"cutInCamPlayerAll"*/, &param, v3);
  return param == 1;
}


int32_t __fastcall SkillEntity__getSkillCutInId(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97BF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18058/*"cutInId"*/, (_DWORD)method, v2, v3);
    byte_42E97BF = 1;
  }
  param = 0;
  if ( SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18058/*"cutInId"*/, &param, v3) )
    return param;
  else
    return 0;
}


int32_t __fastcall SkillEntity__getSkillCutInMessageMode(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97CC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18059/*"cutInMessageMode"*/, (_DWORD)method, v2, v3);
    byte_42E97CC = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18059/*"cutInMessageMode"*/, &param, v3);
  return param;
}


System_String_array *__fastcall SkillEntity__getSkillCutInPrefabInfo(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E97C7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18060/*"cutInPrefabInfo"*/, (_DWORD)method, v2, v3);
    byte_42E97C7 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18060/*"cutInPrefabInfo"*/, 0x2Cu, v3);
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabOffsets(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_array *ScriptStrings; // x0
  System_String_array *v12; // x19
  System_String_array *v13; // x0
  int max_length; // w8
  UnityEngine_Vector3_array *v15; // x20
  __int64 v16; // x22
  float *v17; // x23
  System_String_o *v18; // x21
  System_String_array *v19; // x1
  int v20; // w8
  System_String_array *v21; // x21
  float v22; // s8
  float v23; // s9
  float v24; // s10
  float v25; // s0
  float v26; // s0
  __int64 v28; // x0

  if ( (byte_42E97C8 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Vector3___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18061/*"cutInPrefabOffsets"*/, v8, v9, v10);
    byte_42E97C8 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18061/*"cutInPrefabOffsets"*/, 0x2Fu, v3);
  if ( !ScriptStrings )
    return 0LL;
  v12 = ScriptStrings;
  v13 = (System_String_array *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v12->max_length;
  v15 = (UnityEngine_Vector3_array *)v13;
  if ( max_length >= 1 )
  {
    v16 = 0LL;
    v17 = (float *)&v13->m_Items[1];
    do
    {
      if ( (unsigned int)v16 >= max_length )
        goto LABEL_24;
      v18 = v12->m_Items[v16];
      v13 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !v13 )
        goto LABEL_23;
      v19 = v13;
      if ( !v13->max_length )
        goto LABEL_24;
      LOWORD(v13->m_Items[0]) = 58;
      if ( !v18 )
        goto LABEL_23;
      v13 = System_String__Split(v18, (System_Char_array *)v13, 0LL);
      if ( !v13 )
        goto LABEL_23;
      v20 = v13->max_length;
      v21 = v13;
      v22 = 0.0;
      v23 = 0.0;
      v24 = 0.0;
      if ( v20 > 1 )
      {
        v25 = System_Single__Parse(v13->m_Items[1], 0LL);
        v20 = v21->max_length;
        v23 = v25;
        if ( v20 < 3 )
        {
          v24 = 0.0;
        }
        else
        {
          v26 = System_Single__Parse(v21->m_Items[2], 0LL);
          v20 = v21->max_length;
          v24 = v26;
        }
      }
      if ( v20 >= 1 )
        v22 = System_Single__Parse(v21->m_Items[0], 0LL);
      if ( !v15 )
LABEL_23:
        sub_B5D69C(v13, v19);
      if ( (unsigned int)v16 >= v15->max_length )
      {
LABEL_24:
        v28 = sub_B5D6C8(v13);
        sub_B5D668(v28, 0LL);
      }
      *(v17 - 2) = v23;
      *(v17 - 1) = v24;
      *v17 = v22;
      v17 += 3;
      max_length = v12->max_length;
      ++v16;
    }
    while ( (int)v16 < max_length );
  }
  return v15;
}


UnityEngine_Vector3_array *__fastcall SkillEntity__getSkillCutInPrefabSizes(
        SkillEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_array *ScriptStrings; // x0
  System_String_array *v12; // x19
  System_String_array *v13; // x0
  int max_length; // w8
  UnityEngine_Vector3_array *v15; // x20
  __int64 v16; // x22
  float *v17; // x23
  System_String_o *v18; // x21
  System_String_array *v19; // x1
  int v20; // w8
  System_String_array *v21; // x21
  float v22; // s8
  float v23; // s9
  float v24; // s10
  float v25; // s0
  float v26; // s0
  __int64 v28; // x0

  if ( (byte_42E97C9 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Vector3___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18062/*"cutInPrefabSizes"*/, v8, v9, v10);
    byte_42E97C9 = 1;
  }
  ScriptStrings = SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18062/*"cutInPrefabSizes"*/, 0x2Fu, v3);
  if ( !ScriptStrings )
    return 0LL;
  v12 = ScriptStrings;
  v13 = (System_String_array *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, ScriptStrings->max_length);
  max_length = v12->max_length;
  v15 = (UnityEngine_Vector3_array *)v13;
  if ( max_length >= 1 )
  {
    v16 = 0LL;
    v17 = (float *)&v13->m_Items[1];
    do
    {
      if ( (unsigned int)v16 >= max_length )
        goto LABEL_24;
      v18 = v12->m_Items[v16];
      v13 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !v13 )
        goto LABEL_23;
      v19 = v13;
      if ( !v13->max_length )
        goto LABEL_24;
      LOWORD(v13->m_Items[0]) = 58;
      if ( !v18 )
        goto LABEL_23;
      v13 = System_String__Split(v18, (System_Char_array *)v13, 0LL);
      if ( !v13 )
        goto LABEL_23;
      v20 = v13->max_length;
      v21 = v13;
      v22 = 0.0;
      v23 = 0.0;
      v24 = 0.0;
      if ( v20 > 1 )
      {
        v25 = System_Single__Parse(v13->m_Items[1], 0LL);
        v20 = v21->max_length;
        v23 = v25;
        if ( v20 < 3 )
        {
          v24 = 0.0;
        }
        else
        {
          v26 = System_Single__Parse(v21->m_Items[2], 0LL);
          v20 = v21->max_length;
          v24 = v26;
        }
      }
      if ( v20 >= 1 )
        v22 = System_Single__Parse(v21->m_Items[0], 0LL);
      if ( !v15 )
LABEL_23:
        sub_B5D69C(v13, v19);
      if ( (unsigned int)v16 >= v15->max_length )
      {
LABEL_24:
        v28 = sub_B5D6C8(v13);
        sub_B5D668(v28, 0LL);
      }
      *(v17 - 2) = v23;
      *(v17 - 1) = v24;
      *v17 = v22;
      v17 += 3;
      max_length = v12->max_length;
      ++v16;
    }
    while ( (int)v16 < max_length );
  }
  return v15;
}


System_String_array *__fastcall SkillEntity__getSkillCutInVoices(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E97C6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18064/*"cutInVoices"*/, (_DWORD)method, v2, v3);
    byte_42E97C6 = 1;
  }
  return SkillEntity__getScriptStrings(this, (System_String_o *)StringLiteral_18064/*"cutInVoices"*/, 0x2Fu, v3);
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
  sub_B5D560((BattleServantConfConponent_o *)name, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  EffectExplanation = SkillEntity__getEffectExplanation(this, lv, v16);
  *detail = EffectExplanation;
  sub_B5D560(
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
  int v2; // w2
  const MethodInfo *v3; // x3
  bool v5; // w0
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97C4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6833/*"ForcedSkillSpeed"*/, (_DWORD)method, v2, v3);
    byte_42E97C4 = 1;
  }
  param = 0;
  v5 = SkillEntity__checkScript(this, (System_String_o *)StringLiteral_6833/*"ForcedSkillSpeed"*/, &param, v3);
  return v5 && param == 1;
}


bool __fastcall SkillEntity__isPassive(SkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool __fastcall SkillEntity__isSkillCutInCamField(SkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E97CB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18057/*"cutInCamPlayerAll"*/, (_DWORD)method, v2, v3);
    byte_42E97CB = 1;
  }
  param = 0;
  SkillEntity__checkScript(this, (System_String_o *)StringLiteral_18057/*"cutInCamPlayerAll"*/, &param, v3);
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SkillEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DE4 & 1) == 0 )
  {
    sub_B5D5C4(&SkillEntity___c_TypeInfo, v1, v2, v3);
    byte_42E5DE4 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SkillEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SkillEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillEntity___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return SkillAddEntity__IsOpen(x, 0LL);
}