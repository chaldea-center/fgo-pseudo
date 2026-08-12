void SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597147A & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597147A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


void SkillLvEntity___ctor_49914028(SkillLvEntity_o *this, SkillLvEntity_o *srcEntity, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Array_o *funcId; // x0
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  Il2CppClass *v16; // x22
  struct System_Int32_array *v17; // x1
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Array_o *svals; // x0
  Il2CppObject *v24; // x0
  struct System_String_array *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t skillDetailId; // w8
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_object__object__o *v34; // x21

  if ( (byte_597147B & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object___ctor___91604328);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&string___TypeInfo);
    byte_597147B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_2213CDC(v5, v6);
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  *(_OWORD *)&this->fields.skillId = *(_OWORD *)&srcEntity->fields.skillId;
  if ( funcId && (v14 = System_Array__Clone(funcId, 0)) != 0 )
  {
    v15 = v14;
    v16 = int___TypeInfo;
    v17 = (struct System_Int32_array *)sub_2213BB4(v14, int___TypeInfo);
    if ( !v17 )
      goto LABEL_12;
  }
  else
  {
    v17 = 0;
  }
  this->fields.funcId = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.funcId, (int32_t)v17, v7, v8, v9, v10, v11, v12);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v24 = System_Array__Clone(svals, 0);
  if ( !v24 )
    goto LABEL_13;
  v15 = v24;
  v16 = string___TypeInfo;
  v25 = (struct System_String_array *)sub_2213BB4(v24, string___TypeInfo);
  if ( v25 )
    goto LABEL_14;
LABEL_12:
  sub_221405C(v15, v16, v7);
LABEL_13:
  v25 = 0;
LABEL_14:
  this->fields.svals = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.svals, (int32_t)v25, v7, v18, v19, v20, v21, v22);
  skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  this->fields.skillDetailId = skillDetailId;
  if ( script )
  {
    v34 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor_67097436(
      v34,
      script,
      (const MethodInfo_3FFD35C *)Method_System_Collections_Generic_Dictionary_string__object___ctor___91604328);
  }
  else
  {
    v34 = 0;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v34;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.script, (int32_t)v34, v26, v27, v28, v29, v30, v31);
}


System_String_o *SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_5971479 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5971479 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597149E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_2215/*"ActNpcServantId"*/);
    byte_597149E = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_2215/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5971495 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17330/*"actRarity"*/);
    byte_5971495 = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_17330/*"actRarity"*/, v2);
}


System_Int32_array *SkillLvEntity__GetAddIndiv(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 klass_low; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x0
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v8; // x19
  System_Collections_Generic_List_int__o *v10; // x20
  int32_t v11; // w21
  __int64 v12; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  SkillLvEntity_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_5971491 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&StringLiteral_2252/*"AddIndiv"*/);
    byte_5971491 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_2252/*"AddIndiv"*/,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v5 )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v5,
           (Il2CppObject *)StringLiteral_2252/*"AddIndiv"*/,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    v8 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
       ? (System_Collections_Generic_List_object__o *)Item
       : 0LL;
  }
  else
  {
    v8 = 0;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v8 )
    goto LABEL_26;
  if ( v8->fields._size < 1 )
  {
LABEL_24:
    if ( v10 )
      return System_Collections_Generic_List_int___ToArray(
               v10,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_26:
    sub_2213CDC(v5, klass_low);
  }
  v11 = 0;
  while ( 1 )
  {
    v5 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v8,
                                                                      v11,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v10 || !v5 )
      goto LABEL_26;
    if ( v5->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
      break;
    v5 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(v5, qword_5984368, v12);
    items = v10->fields._items;
    klass_low = LODWORD(v5->klass);
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v10->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        klass_low,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = size + 1;
      items->m_Items[size] = klass_low;
    }
    if ( ++v11 >= v8->fields._size )
      goto LABEL_24;
  }
  sub_221405C(v5, qword_5984368, v12);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v16, v17);
}


int32_t SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597149C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17377/*"additionalSkillActorType"*/);
    byte_597149C = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17377/*"additionalSkillActorType"*/, -1, v2);
}


int32_t SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597149A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17378/*"additionalSkillId"*/);
    byte_597149A = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17378/*"additionalSkillId"*/, -1, v2);
}


int32_t SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597149B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17380/*"additionalSkillLv"*/);
    byte_597149B = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17380/*"additionalSkillLv"*/, 1, v2);
}


EventDropUpValInfo_array *SkillLvEntity__GetAddStateAndFriendshipUpInfoArray(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  const MethodInfo *v7; // x1
  struct System_Int32_array *funcId; // x8
  Il2CppObject **v9; // x26
  System_Collections_Generic_Dictionary_string__int__array *v10; // x22
  unsigned __int64 v11; // x28
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // x27
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v14; // x8
  System_Collections_Generic_Dictionary_object__int__o *v15; // x23
  Il2CppObject *v16; // x25
  int monitor; // w8
  EventDropUpValInfo_o *v18; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  bool v25; // w8
  Il2CppObject **v26; // x29
  int32_t Item; // w25
  Il2CppObject *v28; // x26
  bool v29; // w8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_59714A6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&EventDropUpValInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_2213A60(&StringLiteral_10403/*"OnlyMaxFuncGroupId"*/);
    sub_2213A60(&StringLiteral_14209/*"Target"*/);
    byte_59714A6 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( this->fields.funcId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = SkillLvEntity__getValues(this, v7);
    funcId = this->fields.funcId;
    if ( !funcId )
      goto LABEL_34;
    v9 = (Il2CppObject **)&StringLiteral_10403/*"OnlyMaxFuncGroupId"*/;
    v10 = Values;
    v11 = 0;
    m_Items = Values->m_Items;
    while ( 1 )
    {
      max_length_low = LODWORD(funcId->max_length);
      if ( (__int64)v11 >= (int)max_length_low )
      {
LABEL_35:
        if ( v3 )
          return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                               v3,
                                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
LABEL_34:
        sub_2213CDC(Values, v5);
      }
      if ( v11 >= max_length_low )
        goto LABEL_39;
      if ( !Master_object )
        goto LABEL_34;
      Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                             &entity,
                                                                             funcId->m_Items[v11],
                                                                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Values & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_34;
        v14 = LODWORD(v10->max_length);
        if ( (__int64)v11 >= (int)v14 )
          goto LABEL_35;
        if ( v11 >= v14 )
LABEL_39:
          sub_2213CE4(Values);
        v15 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v11];
        if ( v15 )
          break;
      }
LABEL_33:
      funcId = this->fields.funcId;
      ++v11;
      if ( !funcId )
        goto LABEL_34;
    }
    v16 = entity;
    if ( !entity )
      goto LABEL_34;
    monitor = (int)entity[1].monitor;
    if ( monitor != 1 )
    {
      if ( monitor == 111 )
      {
        v26 = v9;
        if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
               (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v11],
               (Il2CppObject *)StringLiteral_14209/*"Target"*/,
               (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                   v15,
                   (Il2CppObject *)StringLiteral_14209/*"Target"*/,
                   (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        }
        else
        {
          Item = 0;
        }
        v28 = entity;
        v18 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
        EventDropUpValInfo___ctor_48722364(v18, 0, (FunctionEntity_o *)v28, Item, 0);
        v9 = v26;
        v29 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                v15,
                *v26,
                (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        Values = 0;
        if ( v29 )
          Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v15,
                                                                                 *v26,
                                                                                 (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        goto LABEL_27;
      }
      if ( monitor != 16 )
        goto LABEL_33;
    }
    v18 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
    EventDropUpValInfo___ctor(v18, 0, (FunctionEntity_o *)v16, 0);
    v25 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
            v15,
            *v9,
            (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    Values = 0;
    if ( v25 )
      Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                             v15,
                                                                             *v9,
                                                                             (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_27:
    if ( !v18 )
      goto LABEL_34;
    v18->fields.groupId = (int)Values;
    if ( !v3 )
      goto LABEL_34;
    items = v3->fields._items;
    v31 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_34;
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v18,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v18;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v18, v19, v20, v21, v22, v23, v24);
    }
    goto LABEL_33;
  }
  if ( !v3 )
    goto LABEL_34;
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v3,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


int32_t SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597149D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17820/*"battleStartRemainingTurn"*/);
    byte_597149D = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17820/*"battleStartRemainingTurn"*/, 0, v2);
}


bool SkillLvEntity__GetBonusUpVal(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Master_object; // x22
  FunctionGroupMaster_o *Values; // x0
  const MethodInfo *v9; // x1
  FunctionGroupMaster_o *v10; // x23
  struct System_Int32_array *v11; // x8
  FunctionGroupMaster_o *v12; // x25
  unsigned __int64 v13; // x24
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *v15; // x8
  unsigned __int64 MasterName_k__BackingField_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v17; // x26
  EventUpValInfo_o *v18; // x8
  int32_t Item; // w0
  Il2CppObject *v20; // x28
  Il2CppObject *v21; // x28
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  int32_t dispLimitCount; // [xsp+4h] [xbp-9Ch]
  int32_t limitCount; // [xsp+8h] [xbp-98h]
  EventDropUpValInfo_o *v35; // [xsp+8h] [xbp-98h]
  ServantEntity_o *v36; // [xsp+10h] [xbp-90h]
  char individuality; // [xsp+1Ch] [xbp-84h]
  int32_t individualitya; // [xsp+1Ch] [xbp-84h]
  int32_t *p_revision; // [xsp+28h] [xbp-78h]
  FunctionGroupEntity_o *v41; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5971482 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&EventDropUpValInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_2213A60(&StringLiteral_1393/*"2"*/);
    sub_2213A60(&StringLiteral_14209/*"Target"*/);
    sub_2213A60(&StringLiteral_1248/*"1"*/);
    sub_2213A60(&StringLiteral_6482/*"EventId"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_5971482 = 1;
  }
  funcId = this->fields.funcId;
  v41 = 0;
  entity = 0;
  if ( funcId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpVallInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (FunctionGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *eventUpVallInfo )
    {
      v10 = Values;
      if ( (*eventUpVallInfo)->fields.svtId < 1 )
      {
        v36 = 0;
      }
      else
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
        Values = (FunctionGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*eventUpVallInfo || !Values )
          goto LABEL_61;
        v36 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Values,
                                   (*eventUpVallInfo)->fields.svtId,
                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      Values = (FunctionGroupMaster_o *)SkillLvEntity__getValues(this, v9);
      v11 = this->fields.funcId;
      if ( v11 )
      {
        individuality = 0;
        v12 = Values;
        v13 = 0;
        p_revision = &Values->fields.revision;
        do
        {
          max_length_low = LODWORD(v11->max_length);
          if ( (__int64)v13 >= (int)max_length_low )
          {
            LOBYTE(funcId) = individuality;
            return (char)funcId;
          }
          if ( v13 >= max_length_low )
            goto LABEL_65;
          if ( !Master_object )
            break;
          Values = (FunctionGroupMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              v11->m_Items[v13],
                                              (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Values & 1) != 0 )
          {
            if ( !entity )
              break;
            Values = (FunctionGroupMaster_o *)BasicHelper__IsNullOrEmpty(
                                                (System_Collections_ICollection_o *)entity[5].klass,
                                                0);
            if ( ((unsigned __int8)Values & 1) != 0 )
              goto LABEL_25;
            if ( !entity || !questPhaseEntity )
              break;
            Values = (FunctionGroupMaster_o *)QuestPhaseEntity__IsMatchIndividuality(
                                                questPhaseEntity,
                                                (System_Int32_array *)entity[5].klass,
                                                0);
            if ( ((unsigned __int8)Values & 1) != 0 )
            {
LABEL_25:
              v15 = this->fields.funcId;
              if ( !v15 )
                break;
              if ( v13 >= LODWORD(v15->max_length) )
LABEL_65:
                sub_2213CE4(Values);
              if ( !v10 )
                break;
              Values = (FunctionGroupMaster_o *)FunctionGroupMaster__TryGetEntity(v10, &v41, v15->m_Items[v13], 0, 0);
              if ( ((unsigned __int8)Values & 1) != 0 )
              {
                if ( !v12 )
                  break;
                MasterName_k__BackingField_low = LODWORD(v12->fields._MasterName_k__BackingField);
                if ( (__int64)v13 >= (int)MasterName_k__BackingField_low )
                {
                  LOBYTE(funcId) = 0;
                  return (char)funcId;
                }
                if ( v13 >= MasterName_k__BackingField_low )
                  goto LABEL_65;
                v17 = *(System_Collections_Generic_Dictionary_object__int__o **)&p_revision[2 * v13];
                if ( v17 )
                {
                  Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                      *(System_Collections_Generic_Dictionary_object__int__o **)&p_revision[2 * v13],
                                                      (Il2CppObject *)StringLiteral_6482/*"EventId"*/,
                                                      (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) == 0 )
                  {
                    if ( !entity )
                      break;
                    if ( LODWORD(entity[1].monitor) == 111 )
                    {
                      Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                          v17,
                                                          (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                          (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
                        Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                            v17,
                                                            (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                            (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        if ( (int)Values < 1 )
                          goto LABEL_41;
                        if ( v36 )
                        {
                          v18 = *eventUpVallInfo;
                          if ( !*eventUpVallInfo )
                            break;
                          dispLimitCount = v18->fields.dispLimitCount;
                          limitCount = v18->fields.limitCount;
                          Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                                   v17,
                                   (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                   (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          Values = (FunctionGroupMaster_o *)ServantEntity__IsIndividuality(
                                                              v36,
                                                              limitCount,
                                                              dispLimitCount,
                                                              Item,
                                                              0);
                          if ( ((unsigned __int8)Values & 1) != 0 )
                          {
LABEL_41:
                            if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                   v17,
                                   (Il2CppObject *)StringLiteral_14209/*"Target"*/,
                                   (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                            {
                              individualitya = System_Collections_Generic_Dictionary_object__int___get_Item(
                                                 v17,
                                                 (Il2CppObject *)StringLiteral_14209/*"Target"*/,
                                                 (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                            }
                            else
                            {
                              individualitya = 0;
                            }
                            v20 = entity;
                            v35 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
                            EventDropUpValInfo___ctor_48722364(v35, 0, (FunctionEntity_o *)v20, individualitya, 0);
                            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                                   v17,
                                   (Il2CppObject *)StringLiteral_1198/*"0"*/,
                                   (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                            {
                              Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                  v17,
                                                                  (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                                  (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              if ( !*eventUpVallInfo )
                                break;
                              v21 = (Il2CppObject *)v35;
                              if ( !v35 )
                                break;
                              EventDropUpValInfo__SetAddCount(
                                v35,
                                (int32_t)Values,
                                (*eventUpVallInfo)->fields.equipSvtId > 0,
                                0,
                                0);
                            }
                            else
                            {
                              Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                  v17,
                                                                  (Il2CppObject *)StringLiteral_1198/*"0"*/,
                                                                  (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              v21 = (Il2CppObject *)v35;
                              if ( (_DWORD)Values == 2 )
                              {
                                Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                    v17,
                                                                    (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                                    (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                                if ( !*eventUpVallInfo || !v35 )
                                  break;
                                EventDropUpValInfo__SetRateCount(
                                  v35,
                                  (int32_t)Values,
                                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                                  0,
                                  0);
                              }
                            }
                            if ( !*eventUpVallInfo )
                              break;
                            Values = (FunctionGroupMaster_o *)(*eventUpVallInfo)->fields.dropList;
                            if ( !Values )
                              break;
                            v28 = *(_QWORD *)&Values->fields._MasterKind_k__BackingField;
                            v29 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                            ++HIDWORD(Values->fields._MasterName_k__BackingField);
                            if ( !v28 )
                              break;
                            v30 = SLODWORD(Values->fields._MasterName_k__BackingField);
                            if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                (System_Collections_Generic_List_object__o *)Values,
                                v21,
                                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v31 = v28 + 8 * v30;
                              LODWORD(Values->fields._MasterName_k__BackingField) = v30 + 1;
                              *(_QWORD *)(v31 + 32) = v21;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)(v31 + 32),
                                (int32_t)v21,
                                v22,
                                v23,
                                v24,
                                v25,
                                v26,
                                v27);
                            }
                            individuality = 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v11 = this->fields.funcId;
          ++v13;
        }
        while ( v11 );
      }
    }
LABEL_61:
    sub_2213CDC(Values, v9);
  }
  return (char)funcId;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *SkillLvEntity__GetEventIndividuality(
        SkillLvEntity_o *this,
        int32_t index,
        int32_t eventId,
        int32_t questId,
        System_Int32_array *questTvals,
        FunctionMaster_o *funcMaster,
        FunctionGroupMaster_o *funcGroupMaster,
        const MethodInfo *method)
{
  SkillLvEntity_o *v14; // x25
  struct System_Int32_array *funcId; // x27
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x28
  struct System_Int32_array *v18; // x8
  int32_t v19; // w26
  SkillLvEntity_o *v21; // x21
  SkillLvEntity___c_c *v22; // x0
  struct SkillLvEntity___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__59_0; // x22
  Il2CppObject *v25; // x23
  struct SkillLvEntity___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-74h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *v36; // [xsp+18h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_59714A0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
    sub_2213A60(&System_Func_QuestGroupEntity__int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_SkillLvEntity___c__GetEventIndividuality_b__59_0__);
    this = (SkillLvEntity_o *)sub_2213A60(&SkillLvEntity___c_TypeInfo);
    byte_59714A0 = 1;
  }
  entity = 0;
  v36 = 0;
  if ( !questTvals )
    goto LABEL_40;
  if ( questTvals->max_length )
    return questTvals;
  funcId = v14->fields.funcId;
  if ( !funcId )
    goto LABEL_40;
  max_length = funcId->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    v34 = questId;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)max_length )
        goto LABEL_41;
      v18 = v14->fields.funcId;
      if ( !v18 )
        goto LABEL_40;
      if ( LODWORD(v18->max_length) <= index )
        goto LABEL_41;
      v19 = funcId->m_Items[v17];
      if ( v19 != v18->m_Items[index] )
      {
        if ( !funcGroupMaster )
          goto LABEL_40;
        this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(funcGroupMaster, &entity, v19, eventId, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !funcMaster )
            goto LABEL_40;
          this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)funcMaster,
                                      &v36,
                                      v19,
                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(max_length) = funcId->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_20;
    }
    if ( !v36 )
      goto LABEL_40;
    questTvals = (System_Int32_array *)v36[5].klass;
LABEL_20:
    questId = v34;
  }
  if ( !questTvals )
    goto LABEL_40;
  if ( questTvals->max_length )
    return questTvals;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&index);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this )
    goto LABEL_40;
  this = (SkillLvEntity_o *)QuestGroupMaster__GetEntityListByGroupId((QuestGroupMaster_o *)this, eventId, 1, 0);
  if ( !this )
    goto LABEL_40;
  if ( questId < 1 )
    return questTvals;
  v21 = this;
  if ( this->fields.chargeTurn < 1 )
    return questTvals;
  v22 = SkillLvEntity___c_TypeInfo;
  if ( !*(&SkillLvEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo, *(_QWORD *)&index);
    v22 = SkillLvEntity___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__59_0 = (System_Func_object__int__o *)static_fields->__9__59_0;
  if ( !_9__59_0 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, *(_QWORD *)&index);
      static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__59_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__59_0, v25, Method_SkillLvEntity___c__GetEventIndividuality_b__59_0__, 0);
    v26 = SkillLvEntity___c_TypeInfo->static_fields;
    v26->__9__59_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__59_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__59_0, (int32_t)_9__59_0, v27, v28, v29, v30, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__59_0,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v33,
         questId,
         (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_2213B20(int___TypeInfo, 1);
  if ( !this )
LABEL_40:
    sub_2213CDC(this, *(_QWORD *)&index);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
LABEL_41:
    sub_2213CE4(this);
  LODWORD(this->fields.funcId) = -1;
  return questTvals;
}


System_Collections_Generic_Dictionary_string__int__o *SkillLvEntity__GetFollowerValsDictionary(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_array *StringArray; // x0
  System_String_array *v5; // x20
  System_Collections_Generic_Dictionary_object__int__o *v6; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1
  int klass; // w8
  System_String_o *v10; // x20
  int32_t v11; // w9
  int32_t result[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597149F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&StringLiteral_20463/*"followerVals"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_597149F = 1;
  }
  script = this->fields.script;
  *(_QWORD *)result = 0;
  StringArray = EntityScriptUtil__GetStringArray(script, (System_String_o *)StringLiteral_20463/*"followerVals"*/, 0, 0);
  if ( !StringArray )
    return 0;
  v5 = StringArray;
  if ( !StringArray->max_length )
    return 0;
  v6 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v6,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !LODWORD(v5->max_length) )
    goto LABEL_20;
  v7 = v5->m_Items[0];
  if ( !v7
    || (v7 = System_String__Replace_75703400(
               v7,
               (System_String_o *)StringLiteral_16427/*"["*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0)) == 0
    || (v7 = System_String__Replace_75703400(
               v7,
               (System_String_o *)StringLiteral_16691/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0)) == 0
    || (v7 = (System_String_o *)System_String__Split(v7, 0x2Cu, 0, 0), result[1] = 0, !v7) )
  {
LABEL_21:
    sub_2213CDC(v7, v8);
  }
  klass = (int)v7[1].klass;
  v10 = v7;
  if ( klass >= 1 )
  {
    v11 = 0;
    while ( v11 < (unsigned int)klass )
    {
      v7 = (System_String_o *)System_Int32__TryParse(*((System_String_o **)&v10[1].monitor + v11), result, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        v7 = System_Int32__ToString((int32_t)&result[1], 0);
        if ( !v6 )
          goto LABEL_21;
        System_Collections_Generic_Dictionary_object__int___Add(
          v6,
          (Il2CppObject *)v7,
          result[0],
          (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      klass = (int)v10[1].klass;
      v11 = ++result[1];
      if ( result[1] >= klass )
        return (System_Collections_Generic_Dictionary_string__int__o *)v6;
    }
LABEL_20:
    sub_2213CE4(v7);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v6;
}


System_Nullable_ValueTuple_FuncList_TYPE__int___o SkillLvEntity__GetFriendPointUpTypeVal(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v5; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v7; // x1
  struct System_Int32_array *v8; // x8
  System_Collections_Generic_Dictionary_string__int__array *v9; // x20
  unsigned __int64 v10; // x22
  unsigned __int64 max_length_low; // x9
  int monitor; // w8
  int max_length; // w8
  Il2CppClass **v14; // x8
  System_Collections_Generic_Dictionary_object__int__o *v15; // x19
  int32_t v16; // w20
  int32_t Item; // w0
  const MethodInfo_45DF1D8 *v18; // x3
  Il2CppObject *v21; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  __int64 v23; // [xsp+10h] [xbp-40h] BYREF
  int32_t v24; // [xsp+18h] [xbp-38h]
  System_Nullable_ValueTuple_FuncList_TYPE__int___o result; // 0:x0.12
  System_Nullable_T__o v26; // 0:x0.16

  if ( (byte_5971481 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int____ctor__);
    sub_2213A60(&Method_System_ValueTuple_FuncList_TYPE__int___ctor__);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_5971481 = 1;
  }
  funcId = this->fields.funcId;
  entity = 0;
  if ( !funcId )
    goto LABEL_24;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
  Values = SkillLvEntity__getValues(this, v5);
  v8 = this->fields.funcId;
  if ( !v8 )
    goto LABEL_16;
  v9 = Values;
  v10 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v8->max_length);
    if ( (__int64)v10 >= (int)max_length_low )
      goto LABEL_24;
    if ( v10 >= max_length_low )
      goto LABEL_26;
    if ( !Master_object )
      goto LABEL_16;
    Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                           &entity,
                                                                           v8->m_Items[v10],
                                                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Values & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_16;
      monitor = (int)entity[1].monitor;
      if ( monitor == 123 || monitor == 104 )
        break;
    }
    v8 = this->fields.funcId;
    ++v10;
    if ( !v8 )
      goto LABEL_16;
  }
  if ( !v9 )
LABEL_16:
    sub_2213CDC(Values, v7);
  max_length = v9->max_length;
  if ( (int)v10 >= max_length )
    goto LABEL_24;
  if ( (unsigned int)v10 >= max_length )
LABEL_26:
    sub_2213CE4(Values);
  v14 = &v9->obj.klass + v10;
  v15 = (System_Collections_Generic_Dictionary_object__int__o *)v14[4];
  if ( !v15
    || (Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                               (System_Collections_Generic_Dictionary_object__int__o *)v14[4],
                                                                               (Il2CppObject *)StringLiteral_1198/*"0"*/,
                                                                               (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__),
        ((unsigned __int8)Values & 1) == 0) )
  {
LABEL_24:
    v24 = 0;
    v23 = 0;
    goto LABEL_25;
  }
  if ( !entity )
    goto LABEL_16;
  v16 = (int32_t)entity[1].monitor;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           v15,
           (Il2CppObject *)StringLiteral_1198/*"0"*/,
           (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v21 = 0;
  System_ValueTuple_Int32Enum__int____ctor(
    (System_ValueTuple_Int32Enum__int__o)&v21,
    v16,
    Item,
    (const MethodInfo_3CF2600 *)Method_System_ValueTuple_FuncList_TYPE__int___ctor__);
  *(_QWORD *)&v26.fields.hasValue = &v23;
  v26.fields.value = v21;
  v24 = 0;
  v23 = 0;
  System_Nullable_ValueTuple_Int32Enum__int_____ctor(
    v26,
    (System_ValueTuple_Int32Enum__int__o)Method_System_Nullable_ValueTuple_FuncList_TYPE__int____ctor__,
    v18);
LABEL_25:
  *(_QWORD *)&result.fields.hasValue = v23;
  result.fields.value.fields.Item2 = v24;
  return result;
}


System_Nullable_int__o SkillLvEntity__GetFuncIndexForSplitFuncSequence(SkillLvEntity_o *this, const MethodInfo *method)
{
  SkillLvEntity___c_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  struct SkillLvEntity___c_StaticFields *static_fields; // x8
  System_Func_long__Nullable_int___o *_9__43_0; // x21
  System_String_o *v7; // x20
  Il2CppObject *v8; // x22
  struct SkillLvEntity___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5971492 & 1) == 0 )
  {
    sub_2213A60(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
    sub_2213A60(&System_Func_long__Nullable_int___TypeInfo);
    sub_2213A60(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__43_0__);
    sub_2213A60(&SkillLvEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_20641/*"funcPositionForSplitFuncSequence"*/);
    byte_5971492 = 1;
  }
  v3 = SkillLvEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !*(&SkillLvEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo, method);
    v3 = SkillLvEntity___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__43_0 = static_fields->__9__43_0;
  v7 = (System_String_o *)StringLiteral_20641/*"funcPositionForSplitFuncSequence"*/;
  if ( !_9__43_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Func_long__Nullable_int___o *)sub_2213CCC(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__43_0,
      v8,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__43_0__,
      0);
    v9 = SkillLvEntity___c_TypeInfo->static_fields;
    v9->__9__43_0 = _9__43_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__43_0, (int32_t)_9__43_0, v10, v11, v12, v13, v14, v15);
  }
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v7,
           (System_Func_TSource__TDestination__o *)_9__43_0,
           0,
           (const MethodInfo_3860E58 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
}


System_Int32_array *SkillLvEntity__GetIntArrayFromScript(
        SkillLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  Il2CppObject *Value_object; // x0
  __int64 v9; // x1
  __int64 current; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  struct System_Collections_Generic_List_T__o *list; // x20
  _QWORD *exception; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-98h] BYREF
  int v20; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_5971496 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_List_object____);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_object___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    byte_5971496 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v20 = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_object___ctor__);
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   (Il2CppObject *)v7,
                   (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_object )
    goto LABEL_18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)Value_object,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v21 = v19;
  v19.fields._list = 0;
  *(_QWORD *)&v19.fields._index = &v21;
  while ( 1 )
  {
    current = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v21,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( (current & 1) == 0 )
      break;
    if ( !v5 )
      goto LABEL_13;
    current = (__int64)v21.fields._current;
    if ( !v21.fields._current )
      goto LABEL_13;
    if ( v21.fields._current->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
    {
      sub_221405C(v21.fields._current, qword_5984368, v12);
      exception = __cxa_allocate_exception(8u);
      *exception = script->klass;
      __cxa_throw(exception, (struct type_info *)`typeinfo for'Il2CppExceptionWrapper, 0);
    }
    current = j_il2cpp_object_unbox_0(v21.fields._current, qword_5984368, v12);
    items = v5->fields._items;
    v11 = *(unsigned int *)current;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !items )
LABEL_13:
      sub_2213CDC(current, v11);
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        v11,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      items->m_Items[size] = v11;
    }
  }
  list = v19.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v19.fields._index,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( list )
    sub_2213CD4(list);
  if ( !v5 )
LABEL_18:
    sub_2213CDC(Value_object, v9);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Func_object__object__o *v3; // x20

  if ( (byte_5971493 & 1) == 0 )
  {
    sub_2213A60(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_2213A60(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_2213A60(&System_Func_List_object___List_int___TypeInfo);
    sub_2213A60(&StringLiteral_17798/*"battleEffectId"*/);
    byte_5971493 = 1;
  }
  v3 = (System_Func_object__object__o *)sub_2213CCC(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v3, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_17798/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v3,
                                                     0,
                                                     (const MethodInfo_3861168 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


System_Int32_array *SkillLvEntity__GetRevivalTargetArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59714A4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24309/*"revivalTargetArray"*/);
    byte_59714A4 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_24309/*"revivalTargetArray"*/, 0);
}


int32_t SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v8; // x2
  SkillLvEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5971498 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5971498 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
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
  if ( script->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, qword_5984368, v8);
  sub_221405C(script, qword_5984368, v8);
  return SkillLvEntity__IsNoTargetSkipSkill(v10, v11);
}


SelectTreasureDeviceInfo_o *SkillLvEntity__GetSelectTreasureDeviceInfo(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Value_object__object; // x19
  Il2CppObject *v5; // x0

  if ( (byte_59714A3 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string__object___);
    sub_2213A60(&Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_24488/*"selectTreasureDeviceInfo"*/);
    byte_59714A3 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_24488/*"selectTreasureDeviceInfo"*/,
                           0,
                           (const MethodInfo_3814850 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v3);
    v5 = JsonManager__Deserialize_object_(
           Value_object__object,
           (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
    Value_object__object = v5;
    if ( v5 )
      SelectTreasureDeviceInfo__AssignTdIndexAutomatically((SelectTreasureDeviceInfo_o *)v5, 0);
  }
  return (SelectTreasureDeviceInfo_o *)Value_object__object;
}


DataVals_array *SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Int32_array *funcId; // x20
  FunctionMaster_o *v5; // x21
  const MethodInfo *v6; // x1
  DataVals_array *DataValsList; // x0
  __int64 v8; // x1

  if ( (byte_597147E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_597147E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v5 = (FunctionMaster_o *)Master_object;
  DataValsList = SkillLvEntity__getDataValsList(this, v6);
  if ( !v5 )
    sub_2213CDC(DataValsList, v8);
  return FunctionMaster__GetSetTypeDataValArray(v5, funcId, DataValsList, 0);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *script; // x0
  System_Collections_Generic_Dictionary_string__object__o *v6; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v9; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x20
  __int64 naturalAligment; // x9
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5971497 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_List_object____);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_object___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&SkillLvEntity_SvtChangeBgm_TypeInfo);
    sub_2213A60(&StringLiteral_25129/*"svtBgmChange"*/);
    byte_5971497 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_List_object__o *)this->fields.script;
  if ( !script )
LABEL_20:
    sub_2213CDC(script, v4);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_25129/*"svtBgmChange"*/,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v6 = this->fields.script;
    v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_object__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_object___ctor__);
    script = (System_Collections_Generic_List_object__o *)BasicHelper__GetValue_object_(
                                                            v6,
                                                            (System_String_o *)StringLiteral_25129/*"svtBgmChange"*/,
                                                            (Il2CppObject *)v7,
                                                            (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_List_object____);
    if ( !script )
      goto LABEL_20;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      script,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v27 = v26;
    v26.fields._list = 0;
    *(_QWORD *)&v26.fields._index = &v27;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      current = v27.fields._current;
      v9 = (SkillLvEntity_SvtChangeBgm_o *)sub_2213CCC(SkillLvEntity_SvtChangeBgm_TypeInfo);
      v11 = (Il2CppObject *)v9;
      if ( current )
      {
        naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
        if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          sub_221405C(current, System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
          goto LABEL_20;
        }
      }
      SkillLvEntity_SvtChangeBgm___ctor(v9, (System_Collections_Generic_Dictionary_string__object__o *)current, v10);
      if ( !v3
        || (items = v3->fields._items,
            v22 = Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(v13, v14);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v11,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v11;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v11, v15, v16, v17, v18, v19, v20);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v3;
}


void SkillLvEntity__GetUniqueFuncIds(
        SkillLvEntity_o *this,
        System_Collections_Generic_HashSet_int__o **ret,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *isAddState; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  DataVals_array *DataValsList; // x21
  Il2CppObject *Master_object; // x22
  struct System_Int32_array *v10; // x8
  SkillLvMaster_o *v11; // x23
  unsigned __int64 v12; // x28
  unsigned __int64 max_length_low; // x9
  DataVals_o *v14; // x24
  int32_t v15; // w1
  int32_t Param; // w25
  int32_t v17; // w1
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x2
  SkillLvEntity_o *v21; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59714A2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_59714A2 = 1;
  }
  funcId = (System_Collections_Generic_IEnumerable_T__o *)this->fields.funcId;
  v21 = 0;
  entity = 0;
  if ( funcId )
  {
    isAddState = *ret;
    if ( !*ret )
      goto LABEL_32;
    System_Collections_Generic_HashSet_int___UnionWith(
      isAddState,
      funcId,
      (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v6);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v10 = this->fields.funcId;
    if ( !v10 )
      goto LABEL_32;
    v11 = (SkillLvMaster_o *)isAddState;
    v12 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(v10->max_length);
      if ( (__int64)v12 >= (int)max_length_low )
        break;
      if ( v12 >= max_length_low )
        goto LABEL_40;
      if ( !Master_object )
        goto LABEL_32;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                  &entity,
                                                                  v10->m_Items[v12],
                                                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_32;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity[1].monitor, 0);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_32;
          if ( v12 >= LODWORD(DataValsList->max_length) )
LABEL_40:
            sub_2213CE4(isAddState);
          if ( !entity )
            goto LABEL_32;
          v14 = DataValsList->m_Items[v12];
          if ( !v14 )
            goto LABEL_32;
          DataVals__SetTempType(
            DataValsList->m_Items[v12],
            (FunctionMaster_o *)Master_object,
            (int32_t)entity[1].monitor,
            0);
          v15 = DataVals__isParam(v14, 28, 0) ? 28 : 3;
          Param = DataVals__GetParam(v14, v15, 0, 0);
          v17 = DataVals__isParam(v14, 29, 0) ? 29 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v14, v17, 0, 0);
          if ( !v11 )
            goto LABEL_32;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v11,
                                                                      &v21,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      v18);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_32;
            funcId = (System_Collections_Generic_IEnumerable_T__o *)v21->fields.funcId;
            if ( funcId )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_32;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                funcId,
                (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v10 = this->fields.funcId;
      ++v12;
      if ( !v10 )
        goto LABEL_32;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, funcId);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !isAddState
      || (isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)isAddState,
                                                                      this->fields.skillId,
                                                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0
      || (isAddState = (System_Collections_Generic_HashSet_int__o *)SkillEntity__GetBranchSkillFuncIds(
                                                                      (SkillEntity_o *)isAddState,
                                                                      this->fields.lv,
                                                                      v19),
          !*ret) )
    {
LABEL_32:
      sub_2213CDC(isAddState, funcId);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      *ret,
      (System_Collections_Generic_IEnumerable_T__o *)isAddState,
      (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


bool SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59714A1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17379/*"additionalSkillInsertCurrentSkillAfter"*/);
    byte_59714A1 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17379/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_597148F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_17580/*"aress"*/);
    byte_597148F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_17580/*"aress"*/,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool SkillLvEntity__IsContainsTurnOrCountBuff(SkillLvEntity_o *this, const MethodInfo *method)
{
  DataVals_array *SetTypeDataValArray; // x0
  __int64 v3; // x1
  int max_length; // w8
  DataVals_array *v5; // x19
  bool v6; // w21
  int v7; // w22
  DataVals_o *v8; // x20
  int32_t funcType; // w8

  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(this, method);
  if ( !SetTypeDataValArray )
    goto LABEL_13;
  max_length = SetTypeDataValArray->max_length;
  v5 = SetTypeDataValArray;
  v6 = max_length > 0;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_2213CE4(SetTypeDataValArray);
      v8 = v5->m_Items[v7];
      if ( !v8 )
        break;
      funcType = v8->fields.funcType;
      if ( funcType != 1 && funcType != 130 && funcType != 16
        || DataVals__GetParam(v8, 1, 0, 0) <= 0
        && (SetTypeDataValArray = (DataVals_array *)DataVals__GetParam(v8, 2, 0, 0), (int)SetTypeDataValArray <= 0) )
      {
        max_length = v5->max_length;
        v6 = ++v7 < max_length;
        if ( v7 < max_length )
          continue;
      }
      return v6;
    }
LABEL_13:
    sub_2213CDC(SetTypeDataValArray, v3);
  }
  return v6;
}


bool SkillLvEntity__IsEnableTarget(SkillLvEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v8; // x2
  SkillLvEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5971490 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_6221/*"EnableTarget"*/);
    byte_5971490 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_6221/*"EnableTarget"*/,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return isCheckHate;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_6221/*"EnableTarget"*/,
                                                                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(Item, v6);
  }
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v8) == 1;
  sub_221405C(Item, qword_5984368, v8);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v10, v11);
}


bool SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971494 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21261/*"ignoreWhiteFade"*/);
    byte_5971494 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21261/*"ignoreWhiteFade"*/, 0);
}


bool SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971499 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23375/*"noTargetSkipSkill"*/);
    byte_5971499 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23375/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_597148E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_24310/*"revivalUnder"*/);
    byte_597148E = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_24310/*"revivalUnder"*/,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_597148D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_24311/*"revivalUp"*/);
    byte_597148D = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_24311/*"revivalUp"*/,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool SkillLvEntity__IsSetGroupId(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v4; // x1
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__int__array *v6; // x19
  bool v7; // w20
  __int64 v8; // x21

  if ( (byte_59714A5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&StringLiteral_10403/*"OnlyMaxFuncGroupId"*/);
    byte_59714A5 = 1;
  }
  Values = SkillLvEntity__getValues(this, method);
  if ( !Values )
    goto LABEL_11;
  max_length = Values->max_length;
  v6 = Values;
  v7 = max_length > 0;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_2213CE4(Values);
      Values = (System_Collections_Generic_Dictionary_string__int__array *)v6->m_Items[v8];
      if ( !Values )
        break;
      Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                             (System_Collections_Generic_Dictionary_object__int__o *)Values,
                                                                             (Il2CppObject *)StringLiteral_10403/*"OnlyMaxFuncGroupId"*/,
                                                                             (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)Values & 1) == 0 )
      {
        max_length = v6->max_length;
        v7 = (int)++v8 < max_length;
        if ( (int)v8 < max_length )
          continue;
      }
      return v7;
    }
LABEL_11:
    sub_2213CDC(Values, v4);
  }
  return v7;
}


bool SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  if ( (byte_597148A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (SkillLvEntity_o *)sub_2213A60(&StringLiteral_2402/*"ApplySupportSvt"*/);
    byte_597148A = 1;
  }
  if ( !vals )
    sub_2213CDC(this, vals);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)StringLiteral_2402/*"ApplySupportSvt"*/,
           (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)vals,
            (Il2CppObject *)StringLiteral_2402/*"ApplySupportSvt"*/,
            (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_5971488 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_15974/*"VoiceVolume"*/);
    byte_5971488 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15974/*"VoiceVolume"*/,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


System_Collections_Generic_Dictionary_string__object__o *SkillLvEntity__getCondition(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.script;
}


DataVals_array *SkillLvEntity__getDataValsList(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *svals; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  __int64 v7; // x19
  __int64 v8; // x24
  __int64 v9; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v11; // x26
  System_String_o *v12; // x22
  DataVals_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  DataVals_o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v29; // x0

  if ( (byte_597147D & 1) == 0 )
  {
    sub_2213A60(&DataVals___TypeInfo);
    sub_2213A60(&DataVals_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597147D = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = sub_2213B20(DataVals___TypeInfo, 1);
    v21 = (DataVals_o *)sub_2213CCC(DataVals_TypeInfo);
    DataVals___ctor(v21, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v7 )
    {
      if ( v21 )
      {
        v4 = sub_2213BB4(v21, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v4 )
        {
LABEL_21:
          v29 = sub_2213D00(v4, v20);
          sub_2213BA0(v29, 0);
        }
      }
      if ( !*(_DWORD *)(v7 + 24) )
LABEL_20:
        sub_2213CE4(v4);
      *(_QWORD *)(v7 + 32) = v21;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v21, v22, v23, v24, v25, v26, v27);
      return (DataVals_array *)v7;
    }
LABEL_13:
    sub_2213CDC(v4, v5);
  }
  v4 = sub_2213B20(DataVals___TypeInfo, LODWORD(svals->max_length));
  v6 = this->fields.svals;
  if ( !v6 )
    goto LABEL_13;
  v7 = v4;
  v8 = 4;
  v9 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v6->max_length);
    v11 = v8 - 4;
    if ( v8 - 4 >= (int)max_length_low )
      return (DataVals_array *)v7;
    if ( v11 >= max_length_low )
      goto LABEL_20;
    v12 = (System_String_o *)*((_QWORD *)&v6->obj.klass + v8);
    v13 = (DataVals_o *)sub_2213CCC(DataVals_TypeInfo);
    DataVals___ctor(v13, v12, 0);
    if ( v7 )
    {
      if ( v13 )
      {
        v4 = sub_2213BB4(v13, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v11 >= *(unsigned int *)(v7 + 24) )
        goto LABEL_20;
      *(_QWORD *)(v7 + 8 * v8) = v13;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + v9), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      v6 = this->fields.svals;
      ++v8;
      v9 += 8;
      if ( v6 )
        continue;
    }
    goto LABEL_13;
  }
}


System_String_o *SkillLvEntity__getDetail(
        SkillLvEntity_o *this,
        bool isShort,
        bool isNotApply,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_String_o *result; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21

  if ( (byte_597147F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillDetailMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SkillDetailParamFormatResolver_TypeInfo);
    byte_597147F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  result = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v9);
  v12 = result;
  if ( !isNotApply )
  {
    if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v11);
    return SkillDetailParamFormatResolver__Apply(v12, this, 0);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SkillLvEntity__getDetail_49901180(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x21
  System_String_o *Detail; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971480 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8609/*"LEVEL_DETAIL_INFO"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971480 = 1;
  }
  if ( lv <= 0 )
  {
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8609/*"LEVEL_DETAIL_INFO"*/, 0);
    v12 = lv;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
    v9 = (Il2CppObject *)System_String__Format(v7, v8, 0);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, 0, method);
  return System_String__Format(Detail, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
bool SkillLvEntity__getEventUpVal(
        SkillLvEntity_o *this,
        int32_t wearersSvtId,
        int32_t wearesLimitCount,
        int32_t wearesDispLimitCount,
        EventUpValSetupInfo_o *setupInfo,
        int32_t eventId,
        bool isFuncGroup,
        bool isOwner,
        const MethodInfo *method)
{
  Il2CppObject *v16; // x28
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *QuestPhaseIndividualList; // x0
  System_Int32_array *Individuality; // x1
  unsigned int v21; // w19
  System_Collections_Generic_Dictionary_string__int__array *Values; // x27
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v25; // x21
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *v27; // x8
  unsigned __int64 v28; // x8
  System_Collections_Generic_Dictionary_object__int__o *v29; // x20
  Il2CppObject *v30; // x8
  int monitor; // w25
  const MethodInfo *v32; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  int *klass; // x3
  __int64 *v36; // x8
  ItemMaster_o *Master_object; // [xsp+10h] [xbp-B0h]
  int32_t v38; // [xsp+1Ch] [xbp-A4h]
  int32_t v39; // [xsp+20h] [xbp-A0h]
  unsigned int v40; // [xsp+24h] [xbp-9Ch]
  ServantEntity_o *v41; // [xsp+28h] [xbp-98h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+30h] [xbp-90h]
  EventUpValSetupInfo_o *v43; // [xsp+38h] [xbp-88h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+40h] [xbp-80h]
  FunctionGroupEntity_o *v46; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_5971483 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&StringLiteral_1455/*"3"*/);
    sub_2213A60(&StringLiteral_1393/*"2"*/);
    sub_2213A60(&StringLiteral_14209/*"Target"*/);
    sub_2213A60(&StringLiteral_1248/*"1"*/);
    sub_2213A60(&StringLiteral_6482/*"EventId"*/);
    byte_5971483 = 1;
  }
  v46 = 0;
  entity = 0;
  if ( setupInfo && this->fields.funcId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&wearersSvtId);
    Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
    v16 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
    v18 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    v38 = wearesLimitCount;
    v39 = wearesDispLimitCount;
    v40 = wearersSvtId;
    v43 = setupInfo;
    if ( wearersSvtId < 1 )
    {
      v41 = 0;
    }
    else
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !QuestPhaseIndividualList )
        goto LABEL_110;
      v41 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 QuestPhaseIndividualList,
                                 wearersSvtId,
                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    Values = SkillLvEntity__getValues(this, v17);
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                                                               v43,
                                                                               eventId,
                                                                               0);
    funcId = this->fields.funcId;
    questPhaseIndividualityList = (System_Int32_array *)QuestPhaseIndividualList;
    if ( !funcId )
      goto LABEL_110;
    v25 = 0;
    m_Items = Values->m_Items;
    while ( 1 )
    {
      max_length_low = LODWORD(funcId->max_length);
      LOBYTE(v21) = (__int64)v25 < (int)max_length_low;
      if ( (__int64)v25 >= (int)max_length_low )
        return v21 & 1;
      if ( v25 >= max_length_low )
        goto LABEL_111;
      if ( !v16 )
        goto LABEL_110;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                                                                                 &entity,
                                                                                 funcId->m_Items[v25],
                                                                                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_97;
      if ( isFuncGroup )
      {
        v27 = this->fields.funcId;
        if ( !v27 )
          goto LABEL_110;
        if ( v25 >= LODWORD(v27->max_length) )
LABEL_111:
          sub_2213CE4(QuestPhaseIndividualList);
        if ( !v18 )
          goto LABEL_110;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)FunctionGroupMaster__TryGetEntity(
                                                                                   (FunctionGroupMaster_o *)v18,
                                                                                   &v46,
                                                                                   v27->m_Items[v25],
                                                                                   eventId,
                                                                                   0);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
          goto LABEL_97;
      }
      if ( !Values )
        goto LABEL_110;
      v28 = LODWORD(Values->max_length);
      if ( (__int64)v25 >= (int)v28 )
        goto LABEL_97;
      if ( v25 >= v28 )
        goto LABEL_111;
      v29 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v25];
      if ( !v29 )
        goto LABEL_97;
      v30 = entity;
      if ( !entity )
        goto LABEL_110;
      monitor = (int)entity[1].monitor;
      if ( monitor > 112 )
      {
        if ( monitor > 116 )
        {
          if ( (unsigned int)(monitor - 117) < 2 )
            goto LABEL_96;
          if ( monitor == 129 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v25],
                                                                                       (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                                                       (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_97;
            v36 = &StringLiteral_1393/*"2"*/;
          }
          else
          {
            if ( monitor != 132 )
              goto LABEL_97;
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v25],
                                                                                       (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                                                                       (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
              goto LABEL_97;
            v36 = &StringLiteral_1455/*"3"*/;
          }
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v29,
                                                                                     (Il2CppObject *)*v36,
                                                                                     (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
          if ( (_DWORD)QuestPhaseIndividualList == eventId )
            goto LABEL_95;
        }
        else
        {
          if ( (unsigned int)(monitor - 114) < 2 )
            goto LABEL_53;
          if ( monitor == 113 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v25],
                                                                                       (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                                                       (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v29,
                                                                                         (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                                                         (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)QuestPhaseIndividualList == eventId )
              {
                QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                           v29,
                                                                                           (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                                                           (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)QuestPhaseIndividualList )
                {
                  if ( !entity )
                    goto LABEL_110;
                  QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                             v43,
                                                                                             questPhaseIndividualityList,
                                                                                             (System_Int32_array *)entity[5].klass,
                                                                                             0);
                  if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                  {
                    if ( !v41 )
                      goto LABEL_109;
                    Individuality = ServantEntity__getIndividuality(v41, v38, v39, 0);
                    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
                    if ( !Master_object )
                      goto LABEL_110;
                    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster__GetIndividualityList_49383144(
                                                                                               Master_object,
                                                                                               Individuality,
                                                                                               0);
                    if ( !QuestPhaseIndividualList )
                      goto LABEL_110;
                    if ( QuestPhaseIndividualList->fields._MasterName_k__BackingField )
                      return v21 & 1;
                  }
                }
              }
            }
          }
          else if ( monitor == 116 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                       (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v25],
                                                                                       (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                                                       (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
            {
LABEL_95:
              v30 = entity;
              if ( !entity )
                goto LABEL_110;
LABEL_96:
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                         v43,
                                                                                         questPhaseIndividualityList,
                                                                                         (System_Int32_array *)v30[5].klass,
                                                                                         0);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                return v21 & 1;
            }
          }
        }
      }
      else
      {
        if ( monitor > 104 )
        {
          if ( (unsigned int)(monitor - 105) >= 4 )
          {
            if ( monitor == 111 )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                         (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v25],
                                                                                         (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                                                         (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
              {
                QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                           v29,
                                                                                           (Il2CppObject *)StringLiteral_6482/*"EventId"*/,
                                                                                           (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                {
                  QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                             v29,
                                                                                             (Il2CppObject *)StringLiteral_6482/*"EventId"*/,
                                                                                             (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)QuestPhaseIndividualList == eventId )
                  {
                    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                               v29,
                                                                                               (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                                                               (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( (int)QuestPhaseIndividualList < 1
                      || v41
                      && (Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                                   v29,
                                   (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                   (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
                          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                                                     v41,
                                                                                                     v38,
                                                                                                     v39,
                                                                                                     Item,
                                                                                                     0),
                          ((unsigned __int8)QuestPhaseIndividualList & 1) != 0) )
                    {
                      if ( !entity )
                        goto LABEL_110;
                      EventIndividuality = SkillLvEntity__GetEventIndividuality(
                                             this,
                                             v25,
                                             eventId,
                                             v43->fields.questId,
                                             (System_Int32_array *)entity[5].klass,
                                             (FunctionMaster_o *)v16,
                                             (FunctionGroupMaster_o *)v18,
                                             v32);
                      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                                 v43,
                                                                                                 questPhaseIndividualityList,
                                                                                                 EventIndividuality,
                                                                                                 0);
                      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                      {
                        if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                v29,
                                (Il2CppObject *)StringLiteral_14209/*"Target"*/,
                                (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                          return v21 & 1;
                        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                                   v29,
                                                                                                   (Il2CppObject *)StringLiteral_14209/*"Target"*/,
                                                                                                   (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        if ( (_DWORD)QuestPhaseIndividualList != 1 || isOwner )
                          return v21 & 1;
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_97;
          }
LABEL_53:
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                     (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v25],
                                                                                     (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                                                                     (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v29,
                                                                                       (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                                                                       (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList == eventId )
            {
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v29,
                                                                                         (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                                                         (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !(_DWORD)QuestPhaseIndividualList
                || (QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                               v29,
                                                                                               (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                                                               (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
                    (_DWORD)QuestPhaseIndividualList) )
              {
                if ( !entity )
                  goto LABEL_110;
                QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                           v43,
                                                                                           questPhaseIndividualityList,
                                                                                           (System_Int32_array *)entity[5].klass,
                                                                                           0);
                if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                {
                  if ( monitor == 107 )
                  {
                    if ( !entity )
                      goto LABEL_110;
                    klass = (int *)entity[2].monitor;
                    if ( !klass || (v40 & 0x80000000) != 0 || klass[6] < 1 )
                      return v21 & 1;
                  }
                  else
                  {
                    if ( monitor != 105 )
                      return v21 & 1;
                    if ( !entity )
                      goto LABEL_110;
                    klass = (int *)entity[2].klass;
                    if ( !klass || (v40 & 0x80000000) != 0 || !*((_QWORD *)klass + 3) )
                      return v21 & 1;
                  }
                  if ( v41 )
                  {
                    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality_49684904(
                                                                                               v41,
                                                                                               v38,
                                                                                               v39,
                                                                                               (System_Int32_array *)klass,
                                                                                               0);
                    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
                      return v21 & 1;
                  }
                }
              }
            }
          }
          goto LABEL_97;
        }
        if ( monitor == 1 )
          goto LABEL_74;
        if ( monitor != 7 )
        {
          if ( monitor != 16 )
            goto LABEL_97;
LABEL_74:
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                     (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v25],
                                                                                     (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                                                                     (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          {
            QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                       v29,
                                                                                       (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                                                                       (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)QuestPhaseIndividualList )
            {
              if ( !entity )
                goto LABEL_110;
              QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                         v43,
                                                                                         questPhaseIndividualityList,
                                                                                         (System_Int32_array *)entity[5].klass,
                                                                                         0);
              if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
              {
                if ( !v41 )
                {
LABEL_109:
                  v21 = v40 >> 31;
                  return v21 & 1;
                }
                if ( entity )
                {
                  LOBYTE(v21) = ServantEntity__IsIndividuality_49684904(
                                  v41,
                                  v38,
                                  v39,
                                  (System_Int32_array *)entity[2].monitor,
                                  0);
                  return v21 & 1;
                }
LABEL_110:
                sub_2213CDC(QuestPhaseIndividualList, Individuality);
              }
            }
          }
          goto LABEL_97;
        }
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                   (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v25],
                                                                                   (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                                                   (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
        {
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v29,
                                                                                     (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                                                     (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
          if ( (_DWORD)QuestPhaseIndividualList )
            goto LABEL_95;
        }
      }
LABEL_97:
      funcId = this->fields.funcId;
      ++v25;
      if ( !funcId )
        goto LABEL_110;
    }
  }
  LOBYTE(v21) = 0;
  return v21 & 1;
}


bool SkillLvEntity__getEventUpVal_49920836(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isFuncGroup,
        bool isOwner,
        bool isSupport,
        bool isEquipOnly,
        int64_t nowTime,
        int32_t exclusionEventId,
        const MethodInfo *method)
{
  SkillLvEntity_o *v12; // x25
  EventUpValInfo_o *v13; // x8
  bool v14; // w20
  Il2CppObject *Master_object; // x26
  Il2CppObject *v16; // x23
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  il2cpp_array_size_t max_length; // x8
  bool v20; // w9
  SkillLvEntity_o *v21; // x22
  unsigned __int64 v22; // x23
  const MethodInfo_3F10B80 **v23; // x27
  const MethodInfo_3FF401C **v24; // x28
  Il2CppObject **v25; // x24
  struct System_Int32_array *v26; // x9
  int32_t v27; // w21
  int32_t v28; // w29
  EventUpValInfo_o *v29; // x8
  ServantLimitEntity_o *v30; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v32; // x19
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *v34; // x8
  struct EventUpValSetupInfo_o *v35; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_object__int__o *v37; // x21
  int monitor; // w20
  const MethodInfo *v39; // x2
  int32_t v40; // w8
  int32_t v41; // w9
  Il2CppObject *v42; // x20
  int32_t v43; // w24
  EventDropUpValInfo_o *v44; // x28
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  const MethodInfo *v55; // x2
  bool v56; // zf
  int *klass; // x3
  const MethodInfo *v58; // x2
  const MethodInfo_3F10B80 **v59; // x29
  struct System_Int32_array *v60; // x8
  const MethodInfo_3FF401C **v61; // x27
  Il2CppObject **v62; // x28
  EventPointBuffEntity_o *EnableEntity; // x24
  Il2CppObject *v64; // x24
  EventDropUpValInfo_o *v65; // x20
  int32_t v66; // w0
  const MethodInfo_3FF401C *v67; // x2
  __int64 *v68; // x8
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x7
  EventUpValInfo_o *v71; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w24
  int32_t v74; // w0
  struct EventUpValSetupInfo_o *v75; // x8
  SkillLvEntity_o *v76; // x2
  __int64 v77; // x1
  SkillEntity_o *v78; // x24
  SkillLvEntity_o *v79; // x20
  __int64 v80; // x1
  System_Int32_array *ActIndividuality; // x24
  const MethodInfo *v82; // x2
  Il2CppObject *v83; // x24
  int32_t Item; // w28
  EventDropUpValInfo_o *v85; // x0
  int32_t v86; // w3
  Il2CppObject *v87; // x24
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  EventUpValInfo_o *v94; // x8
  Il2CppObject *v95; // x24
  int32_t v96; // w0
  int32_t v97; // w20
  Il2CppObject *v98; // x28
  int32_t v99; // w20
  EventDropUpValInfo_o *v100; // x0
  FunctionEntity_o *v101; // x2
  EventDropUpValInfo_o *v102; // x24
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x8
  Il2CppClass *v113; // x9
  const char *namespaze; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v115; // x28
  unsigned __int64 v116; // x24
  unsigned __int64 v117; // x29
  Il2CppClass *v118; // x23
  int32_t lv; // w20
  __int64 *v120; // x8
  int32_t v121; // w0
  Il2CppObject *v122; // x20
  EventDropUpValInfo_o *v123; // x28
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  EventUpValInfo_o *v130; // x8
  __int64 v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x8
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  Il2CppObject *v139; // x24
  EventDropUpValInfo_o *v140; // x20
  int32_t v141; // w0
  const MethodInfo_3FF401C *v142; // x2
  EventUpValInfo_o *v143; // x8
  Il2CppObject *v144; // x20
  __int64 v145; // x24
  UserServantEntity_o *HeroineData; // x0
  int32_t v148; // [xsp+Ch] [xbp-F4h]
  bool v149; // [xsp+10h] [xbp-F0h]
  bool v150; // [xsp+14h] [xbp-ECh]
  ServantEntity_o *v151; // [xsp+18h] [xbp-E8h]
  SkillLvEntity_o *value; // [xsp+20h] [xbp-E0h]
  EventPointBuffEntity_o *valuea; // [xsp+20h] [xbp-E0h]
  int32_t valueb; // [xsp+20h] [xbp-E0h]
  __int64 valuec; // [xsp+20h] [xbp-E0h]
  int32_t eventId; // [xsp+28h] [xbp-D8h]
  int32_t v157; // [xsp+2Ch] [xbp-D4h]
  char individuality; // [xsp+30h] [xbp-D0h]
  int32_t individualitya[2]; // [xsp+30h] [xbp-D0h]
  int32_t individualityb; // [xsp+30h] [xbp-D0h]
  struct System_Int32_array *v162; // [xsp+40h] [xbp-C0h]
  char v163; // [xsp+4Ch] [xbp-B4h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+50h] [xbp-B0h]
  SkillLvEntity_o *v165; // [xsp+58h] [xbp-A8h]
  Il2CppObject *funcGroupMaster; // [xsp+78h] [xbp-88h]
  FunctionGroupEntity_o *v170; // [xsp+80h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-78h] BYREF
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16

  v12 = this;
  if ( (byte_5971484 & 1) == 0 )
  {
    sub_2213A60(&BuffList_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_2213A60(&EventDropUpValInfo_TypeInfo);
    sub_2213A60(&Individuality_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_10403/*"OnlyMaxFuncGroupId"*/);
    sub_2213A60(&StringLiteral_1455/*"3"*/);
    sub_2213A60(&StringLiteral_1393/*"2"*/);
    sub_2213A60(&StringLiteral_14209/*"Target"*/);
    sub_2213A60(&StringLiteral_1248/*"1"*/);
    sub_2213A60(&StringLiteral_6482/*"EventId"*/);
    this = (SkillLvEntity_o *)sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_5971484 = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  v13 = *eventUpVallInfo;
  v170 = 0;
  entity = 0;
  if ( !v13 )
    goto LABEL_311;
  v14 = isFuncGroup;
  if ( v13->fields.setupInfo && v12->fields.funcId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpVallInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
    funcGroupMaster = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !*eventUpVallInfo )
      goto LABEL_311;
    v165 = this;
    if ( (*eventUpVallInfo)->fields.svtId < 1 )
    {
      v16 = 0;
    }
    else
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpVallInfo);
      this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !*eventUpVallInfo || !this )
        goto LABEL_311;
      v16 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (*eventUpVallInfo)->fields.svtId,
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    this = (SkillLvEntity_o *)SkillLvEntity__getValues(v12, (const MethodInfo *)eventUpVallInfo);
    if ( !*eventUpVallInfo )
      goto LABEL_311;
    setupInfo = (*eventUpVallInfo)->fields.setupInfo;
    if ( !setupInfo )
      goto LABEL_311;
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_311;
    v162 = eventIdList;
    max_length = eventIdList->max_length;
    v20 = v16 == 0;
    if ( (int)max_length >= 1 )
    {
      v151 = (ServantEntity_o *)v16;
      v149 = isOwner;
      individuality = 0;
      v21 = this;
      v22 = 0;
      v23 = (const MethodInfo_3F10B80 **)&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__;
      v24 = (const MethodInfo_3FF401C **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
      v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
      v150 = v20 || isEquipOnly;
      v26 = v162;
      v27 = exclusionEventId;
      v157 = exclusionEventId;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)max_length )
          goto LABEL_312;
        v28 = v26->m_Items[v22];
        if ( v28 != v27 )
          break;
LABEL_307:
        LODWORD(max_length) = v26->max_length;
        if ( (__int64)++v22 >= (int)max_length )
          return individuality & 1;
      }
      v29 = *eventUpVallInfo;
      if ( *eventUpVallInfo )
      {
        if ( v29->fields.equipSvtId < 1 )
        {
          v163 = 0;
        }
        else
        {
          this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_311;
          this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
          if ( !*eventUpVallInfo )
            goto LABEL_311;
          if ( !this )
            goto LABEL_311;
          v30 = ServantLimitMaster__GetEntity(
                  (ServantLimitMaster_o *)this,
                  (*eventUpVallInfo)->fields.svtId,
                  (*eventUpVallInfo)->fields.limitCount,
                  0);
          this = (SkillLvEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !*eventUpVallInfo )
            goto LABEL_311;
          if ( !v30 )
            goto LABEL_311;
          if ( !this )
            goto LABEL_311;
          this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                      (PartyOrganizationUtility_o *)this,
                                      &skillName,
                                      &actMaxRarity,
                                      (*eventUpVallInfo)->fields.svtId,
                                      v30->fields.rarity,
                                      (*eventUpVallInfo)->fields.equipSvtId,
                                      v28,
                                      0);
          v163 = (char)this;
          v29 = *eventUpVallInfo;
          if ( !*eventUpVallInfo )
            goto LABEL_311;
        }
        this = (SkillLvEntity_o *)v29->fields.setupInfo;
        if ( !this )
          goto LABEL_311;
        this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                    (EventUpValSetupInfo_o *)this,
                                    v28,
                                    0);
        funcId = v12->fields.funcId;
        questPhaseIndividualityList = (System_Int32_array *)this;
        if ( !funcId )
          goto LABEL_311;
        v32 = 0;
        do
        {
          max_length_low = LODWORD(funcId->max_length);
          if ( (__int64)v32 >= (int)max_length_low )
          {
            v26 = v162;
            v27 = v157;
            goto LABEL_307;
          }
          if ( v32 >= max_length_low )
            goto LABEL_312;
          if ( !Master_object )
            break;
          this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      funcId->m_Items[v32],
                                      *v23);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_279;
          if ( v14 )
          {
            v34 = v12->fields.funcId;
            if ( !v34 )
              break;
            if ( v32 >= LODWORD(v34->max_length) )
              goto LABEL_312;
            this = (SkillLvEntity_o *)funcGroupMaster;
            if ( !funcGroupMaster )
              break;
            this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                        (FunctionGroupMaster_o *)funcGroupMaster,
                                        &v170,
                                        v34->m_Items[v32],
                                        v28,
                                        0);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_279;
            this = (SkillLvEntity_o *)v170;
            if ( !v170 )
              break;
            this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v170, 0);
            if ( (_DWORD)this == 1 )
            {
              if ( !*eventUpVallInfo )
                break;
              v35 = (*eventUpVallInfo)->fields.setupInfo;
              this = v165;
              if ( !v35 || !v165 )
                break;
              this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                          (EventQuestMaster_o *)v165,
                                          v28,
                                          v35->fields.questId,
                                          v35->fields.questPhase,
                                          12,
                                          nowTime,
                                          0);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_279;
            }
          }
          if ( !v21 )
            break;
          chargeTurn = (unsigned int)v21->fields.chargeTurn;
          if ( (__int64)v32 >= (int)chargeTurn )
            goto LABEL_279;
          if ( v32 >= chargeTurn )
            goto LABEL_312;
          v37 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&v21->fields.funcId + v32);
          if ( !v37 )
            goto LABEL_279;
          if ( !entity )
            break;
          monitor = (int)entity[1].monitor;
          if ( monitor > 110 )
          {
            if ( monitor > 115 )
            {
              switch ( monitor )
              {
                case 116:
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                              v37,
                                              (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                              (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_278;
                  v14 = isFuncGroup;
                  if ( !isSupport
                    || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                                    this,
                                                    (System_Collections_Generic_Dictionary_string__int__o *)v37,
                                                    v82),
                        ((unsigned __int8)this & 1) == 0) )
                  {
                    if ( !*eventUpVallInfo )
                      goto LABEL_311;
                    if ( !entity )
                      goto LABEL_311;
                    this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                    if ( !this )
                      goto LABEL_311;
                    this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                                (EventUpValSetupInfo_o *)this,
                                                questPhaseIndividualityList,
                                                (System_Int32_array *)entity[5].klass,
                                                0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v83 = entity;
                      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                               v37,
                               (Il2CppObject *)StringLiteral_1198/*"0"*/,
                               *v24);
                      v85 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
                      v86 = Item;
                      v24 = (const MethodInfo_3FF401C **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
                      v65 = v85;
                      EventDropUpValInfo___ctor_48722364(v85, v28, (FunctionEntity_o *)v83, v86, 0);
                      goto LABEL_189;
                    }
                  }
                  break;
                case 129:
                  if ( isSupport )
                    goto LABEL_278;
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                              v37,
                                              (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                              (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  v14 = isFuncGroup;
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_238;
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v37,
                                              (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                              *v24);
                  if ( v28 != (_DWORD)this )
                    goto LABEL_238;
                  v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                  if ( !*eventUpVallInfo )
                    goto LABEL_311;
                  if ( !entity )
                    goto LABEL_311;
                  this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                  if ( !this )
                    goto LABEL_311;
                  this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                              (EventUpValSetupInfo_o *)this,
                                              questPhaseIndividualityList,
                                              (System_Int32_array *)entity[5].klass,
                                              0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v95 = entity;
                    v65 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
                    EventDropUpValInfo___ctor(v65, v28, (FunctionEntity_o *)v95, 0);
                    v96 = System_Collections_Generic_Dictionary_object__int___get_Item(
                            v37,
                            (Il2CppObject *)StringLiteral_1198/*"0"*/,
                            *v24);
                    v67 = *v24;
                    if ( v96 == 1 )
                    {
                      v68 = &StringLiteral_1248/*"1"*/;
                      goto LABEL_202;
                    }
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v37,
                                                (Il2CppObject *)StringLiteral_1198/*"0"*/,
                                                v67);
                    v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                    if ( (_DWORD)this == 2 )
                    {
                      v120 = &StringLiteral_1248/*"1"*/;
                      goto LABEL_268;
                    }
LABEL_271:
                    v94 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_311;
                    goto LABEL_272;
                  }
                  break;
                case 132:
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                              v37,
                                              (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                              (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  v14 = isFuncGroup;
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_140;
                  v24 = (const MethodInfo_3FF401C **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v37,
                                              (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                              (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( v28 == (_DWORD)this )
                  {
                    if ( !*eventUpVallInfo )
                      goto LABEL_311;
                    if ( !entity )
                      goto LABEL_311;
                    this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                    if ( !this )
                      goto LABEL_311;
                    this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                                (EventUpValSetupInfo_o *)this,
                                                questPhaseIndividualityList,
                                                (System_Int32_array *)entity[5].klass,
                                                0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v64 = entity;
                      v65 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
                      EventDropUpValInfo___ctor(v65, v28, (FunctionEntity_o *)v64, 0);
                      v66 = System_Collections_Generic_Dictionary_object__int___get_Item(
                              v37,
                              (Il2CppObject *)StringLiteral_1248/*"1"*/,
                              (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      v67 = (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
                      if ( v66 == 1 )
                      {
                        v68 = &StringLiteral_1393/*"2"*/;
LABEL_202:
                        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                    v37,
                                                    (Il2CppObject *)*v68,
                                                    v67);
                        if ( !*eventUpVallInfo )
                          goto LABEL_311;
                        v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                        if ( !v65 )
                          goto LABEL_311;
                        EventDropUpValInfo__SetAddCount(
                          v65,
                          (int32_t)this,
                          (*eventUpVallInfo)->fields.equipSvtId > 0,
                          v163 & 1,
                          0);
                      }
                      else
                      {
                        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                    v37,
                                                    (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                    (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                        if ( (_DWORD)this == 2 )
                        {
                          v120 = &StringLiteral_1393/*"2"*/;
LABEL_268:
                          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                      v37,
                                                      (Il2CppObject *)*v120,
                                                      *v24);
                          if ( !*eventUpVallInfo || !v65 )
                            goto LABEL_311;
                          EventDropUpValInfo__SetRateCount(
                            v65,
                            (int32_t)this,
                            (*eventUpVallInfo)->fields.equipSvtId > 0,
                            v163 & 1,
                            0);
                        }
                      }
                      goto LABEL_271;
                    }
                  }
                  break;
                default:
                  goto LABEL_278;
              }
            }
            else
            {
              if ( (unsigned int)(monitor - 114) < 2 )
                goto LABEL_97;
              if ( monitor == 111 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v37,
                                            (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                            (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_278;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v37,
                                            *v25,
                                            (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                v14 = isFuncGroup;
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v37,
                                              *v25,
                                              *v24);
                  if ( v28 == (_DWORD)this )
                  {
                    if ( !isSupport
                      || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                                      this,
                                                      (System_Collections_Generic_Dictionary_string__int__o *)v37,
                                                      v69),
                          ((unsigned __int8)this & 1) == 0) )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v37,
                                                  (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                  *v24);
                      if ( (int)this < 1 )
                        goto LABEL_315;
                      if ( v151 )
                      {
                        v71 = *eventUpVallInfo;
                        if ( !*eventUpVallInfo )
                          break;
                        limitCount = v71->fields.limitCount;
                        dispLimitCount = v71->fields.dispLimitCount;
                        v74 = System_Collections_Generic_Dictionary_object__int___get_Item(
                                v37,
                                (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                *v24);
                        this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(
                                                    v151,
                                                    limitCount,
                                                    dispLimitCount,
                                                    v74,
                                                    0);
                        v14 = isFuncGroup;
                        v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
LABEL_315:
                          if ( !*eventUpVallInfo )
                            break;
                          v75 = (*eventUpVallInfo)->fields.setupInfo;
                          if ( !v75 )
                            break;
                          if ( !entity )
                            break;
                          this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                                      v12,
                                                      v32,
                                                      v28,
                                                      v75->fields.questId,
                                                      (System_Int32_array *)entity[5].klass,
                                                      (FunctionMaster_o *)Master_object,
                                                      (FunctionGroupMaster_o *)funcGroupMaster,
                                                      v70);
                          if ( !*eventUpVallInfo )
                            break;
                          v76 = this;
                          this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                          if ( !this )
                            break;
                          this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                                      (EventUpValSetupInfo_o *)this,
                                                      questPhaseIndividualityList,
                                                      (System_Int32_array *)v76,
                                                      0);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (SkillLvEntity_o *)*eventUpVallInfo;
                            if ( !*eventUpVallInfo )
                              break;
                            if ( !EventUpValInfo__IsEquipSvtId((EventUpValInfo_o *)this, 0) )
                              goto LABEL_170;
                            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v77);
                            this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
                            if ( !this )
                              break;
                            this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                        v12->fields.skillId,
                                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                            if ( !*eventUpVallInfo )
                              break;
                            v78 = (SkillEntity_o *)this;
                            this = (SkillLvEntity_o *)v151;
                            if ( !v151 )
                              break;
                            this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                                        v151,
                                                        (*eventUpVallInfo)->fields.limitCount,
                                                        (*eventUpVallInfo)->fields.dispLimitCount,
                                                        0);
                            if ( !v78 )
                              break;
                            v79 = this;
                            ActIndividuality = SkillEntity__getActIndividuality(
                                                 v78,
                                                 (const MethodInfo *)eventUpVallInfo);
                            if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v80);
                            this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                                        (System_Int32_array *)v79,
                                                        ActIndividuality,
                                                        0);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
LABEL_216:
                              v14 = isFuncGroup;
LABEL_238:
                              v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                              goto LABEL_279;
                            }
                            this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v151, 0);
                            v14 = isFuncGroup;
                            v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                            if ( ((unsigned __int8)this & 1) == 0 )
                              goto LABEL_170;
                            if ( !entity )
                              break;
                            if ( HIDWORD(entity[1].monitor) )
                              goto LABEL_170;
                            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpVallInfo);
                            v144 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
                            v145 = *(_QWORD *)&v151->fields.id.fields.currentCryptoKey;
                            *(_QWORD *)&v174.fields.fakeValue = *(_QWORD *)&v151->fields.id.fields.fakeValue;
                            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                            {
                              valuec = *(_QWORD *)&v151->fields.id.fields.fakeValue;
                              j_il2cpp_runtime_class_init_0(
                                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                *(_QWORD *)&v174.fields.fakeValue);
                              *(_QWORD *)&v174.fields.fakeValue = valuec;
                            }
                            *(_QWORD *)&v174.fields.currentCryptoKey = v145;
                            this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                        v174,
                                                        0);
                            if ( !v144 )
                              break;
                            HeroineData = UserServantMaster__getHeroineData(
                                            (UserServantMaster_o *)v144,
                                            (int32_t)this,
                                            0);
                            v14 = isFuncGroup;
                            v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                            if ( !HeroineData
                              || (this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0),
                                  ((unsigned __int8)this & 1) != 0) )
                            {
LABEL_170:
                              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                     v37,
                                     (Il2CppObject *)StringLiteral_14209/*"Target"*/,
                                     (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                              {
                                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                            v37,
                                                            (Il2CppObject *)StringLiteral_14209/*"Target"*/,
                                                            *v24);
                                if ( (_DWORD)this == 1 && !v149 )
                                  goto LABEL_279;
                              }
                              else
                              {
                                LODWORD(this) = 0;
                              }
                              individualityb = (int)this;
                              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                     v37,
                                     (Il2CppObject *)StringLiteral_10403/*"OnlyMaxFuncGroupId"*/,
                                     (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                              {
                                valueb = System_Collections_Generic_Dictionary_object__int___get_Item(
                                           v37,
                                           (Il2CppObject *)StringLiteral_10403/*"OnlyMaxFuncGroupId"*/,
                                           *v24);
                              }
                              else
                              {
                                valueb = 0;
                              }
                              v139 = entity;
                              v140 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
                              EventDropUpValInfo___ctor_48722364(v140, v28, (FunctionEntity_o *)v139, individualityb, 0);
                              v141 = System_Collections_Generic_Dictionary_object__int___get_Item(
                                       v37,
                                       (Il2CppObject *)StringLiteral_1198/*"0"*/,
                                       *v24);
                              v142 = *v24;
                              if ( v141 == 1 )
                              {
                                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                            v37,
                                                            (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                            v142);
                                if ( !*eventUpVallInfo )
                                  break;
                                v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                                if ( !v140 )
                                  break;
                                EventDropUpValInfo__SetAddCount(
                                  v140,
                                  (int32_t)this,
                                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                                  v163 & 1,
                                  0);
                              }
                              else
                              {
                                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                            v37,
                                                            (Il2CppObject *)StringLiteral_1198/*"0"*/,
                                                            v142);
                                if ( (_DWORD)this == 2 )
                                {
                                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                              v37,
                                                              (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                              *v24);
                                  v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                                  if ( !*eventUpVallInfo || !v140 )
                                    break;
                                  EventDropUpValInfo__SetRateCount(
                                    v140,
                                    (int32_t)this,
                                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                                    v163 & 1,
                                    0);
                                }
                                else
                                {
                                  v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                                  if ( !v140 )
                                    break;
                                }
                              }
                              v143 = *eventUpVallInfo;
                              v140->fields.groupId = valueb;
                              if ( !v143 )
                                break;
                              this = (SkillLvEntity_o *)v143->fields.dropList;
                              if ( !this )
                                break;
                              this = (SkillLvEntity_o *)sub_1FFEDA8(
                                                          this,
                                                          v140,
                                                          Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
                              goto LABEL_277;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                if ( monitor != 113 )
                  goto LABEL_216;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v37,
                                            (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                            (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                v14 = isFuncGroup;
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_238;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v37,
                                            (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                            *v24);
                if ( v28 != (_DWORD)this )
                  goto LABEL_238;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v37,
                                            (Il2CppObject *)StringLiteral_1198/*"0"*/,
                                            *v24);
                v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                if ( !(_DWORD)this
                  || (this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v37,
                                                  (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                  *v24),
                      (_DWORD)this) )
                {
                  if ( !isSupport
                    || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                                    this,
                                                    (System_Collections_Generic_Dictionary_string__int__o *)v37,
                                                    v39),
                        ((unsigned __int8)this & 1) == 0) )
                  {
                    if ( !*eventUpVallInfo )
                      break;
                    if ( !entity )
                      break;
                    this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                    if ( !this )
                      break;
                    this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                                (EventUpValSetupInfo_o *)this,
                                                questPhaseIndividualityList,
                                                (System_Int32_array *)entity[5].klass,
                                                0);
                    individuality |= (unsigned __int8)this;
                    if ( v151 )
                    {
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        if ( !*eventUpVallInfo )
                          break;
                        this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                                    v151,
                                                    (*eventUpVallInfo)->fields.limitCount,
                                                    (*eventUpVallInfo)->fields.dispLimitCount,
                                                    0);
                        actMaxRarity = 0;
                        if ( !this )
                          break;
                        v40 = this->fields.chargeTurn;
                        if ( v40 >= 1 )
                        {
                          v41 = 0;
                          value = this;
                          while ( v41 < (unsigned int)v40 )
                          {
                            v42 = entity;
                            v43 = *((_DWORD *)&this->fields.funcId + v41);
                            v44 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
                            EventDropUpValInfo___ctor_48722364(v44, v28, (FunctionEntity_o *)v42, v43, 0);
                            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                                   v37,
                                   (Il2CppObject *)StringLiteral_1198/*"0"*/,
                                   (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                            {
                              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                          v37,
                                                          (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                          (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              if ( !*eventUpVallInfo )
                                goto LABEL_311;
                              v14 = isFuncGroup;
                              v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                              if ( !v44 )
                                goto LABEL_311;
                              EventDropUpValInfo__SetAddCount(
                                v44,
                                (int32_t)this,
                                (*eventUpVallInfo)->fields.equipSvtId > 0,
                                v163 & 1,
                                0);
                            }
                            else
                            {
                              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                          v37,
                                                          (Il2CppObject *)StringLiteral_1198/*"0"*/,
                                                          (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              v14 = isFuncGroup;
                              v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                              if ( (_DWORD)this == 2 )
                              {
                                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                            v37,
                                                            (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                            (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                                if ( !*eventUpVallInfo || !v44 )
                                  goto LABEL_311;
                                EventDropUpValInfo__SetRateCount(
                                  v44,
                                  (int32_t)this,
                                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                                  v163 & 1,
                                  0);
                              }
                            }
                            if ( !*eventUpVallInfo )
                              goto LABEL_311;
                            this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                            if ( !this )
                              goto LABEL_311;
                            v51 = *(_QWORD *)&this->fields.skillId;
                            v52 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                            ++this->fields.priority;
                            if ( !v51 )
                              goto LABEL_311;
                            v53 = this->fields.chargeTurn;
                            if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                (System_Collections_Generic_List_object__o *)this,
                                (Il2CppObject *)v44,
                                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v54 = v51 + 8 * v53;
                              this->fields.chargeTurn = v53 + 1;
                              *(_QWORD *)(v54 + 32) = v44;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)(v54 + 32),
                                (int32_t)v44,
                                v45,
                                v46,
                                v47,
                                v48,
                                v49,
                                v50);
                            }
                            this = value;
                            individuality = 1;
                            v41 = actMaxRarity + 1;
                            v40 = value->fields.chargeTurn;
                            actMaxRarity = v41;
                            v24 = (const MethodInfo_3FF401C **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
                            if ( v41 >= v40 )
                              goto LABEL_279;
                          }
LABEL_312:
                          sub_2213CE4(this);
                        }
                        individuality = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            if ( monitor > 104 )
            {
              if ( (unsigned int)(monitor - 105) >= 4 )
                goto LABEL_278;
LABEL_97:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v37,
                                          (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                          (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v24 = (const MethodInfo_3FF401C **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v37,
                                            (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                            (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( v28 != (_DWORD)this )
                  goto LABEL_278;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v37,
                                            (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                            (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v37,
                                              (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                              (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !(_DWORD)this )
                    goto LABEL_278;
                }
                if ( isSupport )
                {
                  this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v37,
                                              v55);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    goto LABEL_278;
                }
                if ( !*eventUpVallInfo )
                  break;
                if ( !entity )
                  break;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  break;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            (System_Int32_array *)entity[5].klass,
                                            0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_278;
                if ( monitor == 107 )
                {
                  if ( !entity )
                    break;
                  klass = (int *)entity[2].monitor;
                  v14 = isFuncGroup;
                  if ( !klass || klass[6] < 1 )
                    goto LABEL_223;
                }
                else
                {
                  v56 = monitor == 105;
                  v14 = isFuncGroup;
                  if ( !v56 )
                    goto LABEL_223;
                  if ( !entity )
                    break;
                  klass = (int *)entity[2].klass;
                  if ( !klass || !*((_QWORD *)klass + 3) )
                  {
LABEL_223:
                    v98 = entity;
                    v99 = System_Collections_Generic_Dictionary_object__int___get_Item(
                            v37,
                            (Il2CppObject *)StringLiteral_1198/*"0"*/,
                            (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    v100 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
                    v101 = (FunctionEntity_o *)v98;
                    v24 = (const MethodInfo_3FF401C **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
                    v102 = v100;
                    EventDropUpValInfo___ctor_48722364(v100, v28, v101, v99, 0);
                    if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                           v37,
                           (Il2CppObject *)StringLiteral_1248/*"1"*/,
                           (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v37,
                                                  (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                  (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !*eventUpVallInfo )
                        break;
                      v14 = isFuncGroup;
                      if ( !v102 )
                        break;
                      EventDropUpValInfo__SetAddCount(
                        v102,
                        (int32_t)this,
                        (*eventUpVallInfo)->fields.equipSvtId > 0,
                        v163 & 1,
                        0);
                    }
                    else
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v37,
                                                  (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                  (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      v14 = isFuncGroup;
                      if ( (_DWORD)this == 2 )
                      {
                        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                    v37,
                                                    (Il2CppObject *)StringLiteral_1393/*"2"*/,
                                                    (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        if ( !*eventUpVallInfo || !v102 )
                          break;
                        EventDropUpValInfo__SetRateCount(
                          v102,
                          (int32_t)this,
                          (*eventUpVallInfo)->fields.equipSvtId > 0,
                          v163 & 1,
                          0);
                      }
                    }
                    if ( !*eventUpVallInfo )
                      break;
                    this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                    if ( !this )
                      break;
                    v109 = *(_QWORD *)&this->fields.skillId;
                    v110 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                    ++this->fields.priority;
                    if ( !v109 )
                      break;
                    v111 = this->fields.chargeTurn;
                    if ( (unsigned int)v111 >= *(_DWORD *)(v109 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v102,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v112 = v109 + 8 * v111;
                      this->fields.chargeTurn = v111 + 1;
                      *(_QWORD *)(v112 + 32) = v102;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v112 + 32),
                        (int32_t)v102,
                        v103,
                        v104,
                        v105,
                        v106,
                        v107,
                        v108);
                    }
                    individuality = 1;
                    goto LABEL_238;
                  }
                }
                if ( !v151 )
                  goto LABEL_279;
                if ( !*eventUpVallInfo )
                  break;
                this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_49684904(
                                            v151,
                                            (*eventUpVallInfo)->fields.limitCount,
                                            (*eventUpVallInfo)->fields.dispLimitCount,
                                            (System_Int32_array *)klass,
                                            0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_279;
                goto LABEL_223;
              }
              v14 = isFuncGroup;
LABEL_140:
              v24 = (const MethodInfo_3FF401C **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
              goto LABEL_279;
            }
            if ( monitor != 1 )
            {
              if ( monitor == 7 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v37,
                                            (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                            (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_278;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v37,
                                            (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                            *v24);
                v14 = isFuncGroup;
                if ( (_DWORD)this )
                {
                  if ( !*eventUpVallInfo )
                    break;
                  if ( !entity )
                    break;
                  this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                  if ( !this )
                    break;
                  this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                              (EventUpValSetupInfo_o *)this,
                                              questPhaseIndividualityList,
                                              (System_Int32_array *)entity[5].klass,
                                              0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v87 = entity;
                    v65 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
                    EventDropUpValInfo___ctor(v65, v28, (FunctionEntity_o *)v87, 0);
LABEL_189:
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v37,
                                                (Il2CppObject *)StringLiteral_1248/*"1"*/,
                                                *v24);
                    if ( !*eventUpVallInfo )
                      break;
                    if ( !v65 )
                      break;
                    EventDropUpValInfo__SetRateCount(
                      v65,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v163 & 1,
                      0);
                    v94 = *eventUpVallInfo;
                    v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
                    if ( !*eventUpVallInfo )
                      break;
LABEL_272:
                    this = (SkillLvEntity_o *)v94->fields.dropList;
                    if ( !this )
                      break;
                    v135 = *(_QWORD *)&this->fields.skillId;
                    v136 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                    ++this->fields.priority;
                    if ( !v135 )
                      break;
                    v137 = this->fields.chargeTurn;
                    if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v65,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v138 = v135 + 8 * v137;
                      this->fields.chargeTurn = v137 + 1;
                      *(_QWORD *)(v138 + 32) = v65;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v138 + 32),
                        (int32_t)v65,
                        v88,
                        v89,
                        v90,
                        v91,
                        v92,
                        v93);
                    }
LABEL_277:
                    individuality = 1;
LABEL_278:
                    v14 = isFuncGroup;
                    goto LABEL_279;
                  }
                }
                goto LABEL_279;
              }
              if ( monitor != 16 )
                goto LABEL_278;
            }
            this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                        v37,
                                        (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                        (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_278;
            v14 = isFuncGroup;
            if ( isSupport )
            {
              this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                          this,
                                          (System_Collections_Generic_Dictionary_string__int__o *)v37,
                                          v58);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_279;
            }
            eventId = v28;
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpVallInfo);
            v59 = v23;
            this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
            v60 = v12->fields.funcId;
            if ( !v60 )
              break;
            if ( v32 >= LODWORD(v60->max_length) )
              goto LABEL_312;
            if ( !this )
              break;
            v61 = v24;
            v62 = v25;
            EnableEntity = EventPointBuffMaster__GetEnableEntity(
                             (EventPointBuffMaster_o *)this,
                             eventId,
                             v60->m_Items[v32],
                             0);
            this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                        v37,
                                        (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                        *v61);
            if ( !(_DWORD)this && !EnableEntity )
            {
              v25 = v62;
              v24 = v61;
LABEL_215:
              v23 = v59;
              v28 = eventId;
              goto LABEL_279;
            }
            valuea = EnableEntity;
            if ( !*eventUpVallInfo )
              break;
            if ( !entity )
              break;
            this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
            if ( !this )
              break;
            v25 = v62;
            this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                        (EventUpValSetupInfo_o *)this,
                                        questPhaseIndividualityList,
                                        (System_Int32_array *)entity[5].klass,
                                        0);
            v24 = v61;
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_215;
            v23 = v59;
            v28 = eventId;
            if ( v150 )
              goto LABEL_213;
            if ( !*eventUpVallInfo || !entity )
              break;
            this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_49684904(
                                        v151,
                                        (*eventUpVallInfo)->fields.limitCount,
                                        (*eventUpVallInfo)->fields.dispLimitCount,
                                        (System_Int32_array *)entity[2].monitor,
                                        0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
LABEL_213:
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v37,
                     (Il2CppObject *)StringLiteral_10403/*"OnlyMaxFuncGroupId"*/,
                     (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                v97 = System_Collections_Generic_Dictionary_object__int___get_Item(
                        v37,
                        (Il2CppObject *)StringLiteral_10403/*"OnlyMaxFuncGroupId"*/,
                        *v24);
              }
              else
              {
                v97 = 0;
              }
              this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                break;
              this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BuffMaster___);
              if ( !entity )
                break;
              v113 = entity[2].klass;
              v148 = v97;
              if ( !v113 )
                break;
              namespaze = v113->_1.namespaze;
              if ( (int)namespaze >= 1 )
              {
                v115 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
                v116 = 0;
                *(_QWORD *)individualitya = &v113->_1.byval_arg;
                while ( 1 )
                {
                  if ( v116 >= (unsigned int)namespaze )
                    goto LABEL_312;
                  if ( !v115 )
                    goto LABEL_311;
                  v117 = v22;
                  v118 = v113;
                  this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                              v115,
                                              *(_DWORD *)(*(_QWORD *)individualitya + 4 * v116),
                                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                  if ( !this )
                    goto LABEL_311;
                  lv = this->fields.lv;
                  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, eventUpVallInfo);
                  this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                  LODWORD(namespaze) = v118->_1.namespaze;
                  ++v116;
                  v113 = v118;
                  v22 = v117;
                  if ( (__int64)v116 >= (int)namespaze )
                    goto LABEL_257;
                }
                v22 = v117;
                if ( valuea )
                {
                  v121 = System_Collections_Generic_Dictionary_object__int___get_Item(
                           v37,
                           (Il2CppObject *)StringLiteral_1455/*"3"*/,
                           (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  System_Collections_Generic_Dictionary_object__int___set_Item(
                    v37,
                    (Il2CppObject *)StringLiteral_1455/*"3"*/,
                    valuea->fields.value + v121,
                    (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                }
              }
LABEL_257:
              v122 = entity;
              v28 = eventId;
              v123 = (EventDropUpValInfo_o *)sub_2213CCC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v123, eventId, (FunctionEntity_o *)v122, 0);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v37,
                                          (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                          (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo )
                break;
              v14 = isFuncGroup;
              v25 = (Il2CppObject **)&StringLiteral_6482/*"EventId"*/;
              if ( !v123 )
                break;
              EventDropUpValInfo__SetRateCount(
                v123,
                (int32_t)this,
                (*eventUpVallInfo)->fields.equipSvtId > 0,
                v163 & 1,
                0);
              v130 = *eventUpVallInfo;
              v123->fields.groupId = v148;
              if ( !v130 )
                break;
              this = (SkillLvEntity_o *)v130->fields.dropList;
              if ( !this )
                break;
              v131 = *(_QWORD *)&this->fields.skillId;
              v132 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
              ++this->fields.priority;
              if ( !v131 )
                break;
              v133 = this->fields.chargeTurn;
              if ( (unsigned int)v133 >= *(_DWORD *)(v131 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v123,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
              }
              else
              {
                v134 = v131 + 8 * v133;
                this->fields.chargeTurn = v133 + 1;
                *(_QWORD *)(v134 + 32) = v123;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v134 + 32),
                  (int32_t)v123,
                  v124,
                  v125,
                  v126,
                  v127,
                  v128,
                  v129);
              }
              individuality = 1;
              goto LABEL_140;
            }
          }
LABEL_279:
          funcId = v12->fields.funcId;
          ++v32;
        }
        while ( funcId );
      }
LABEL_311:
      sub_2213CDC(this, eventUpVallInfo);
    }
  }
  individuality = 0;
  return individuality & 1;
}


int32_t SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  SkillLvEntity_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_597148C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_19519/*"down"*/);
    byte_597148C = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19519/*"down"*/,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_19519/*"down"*/,
                                                                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_2213CDC(Item, v4);
      }
      if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v6);
      }
      else
      {
        sub_221405C(Item, qword_5984368, v6);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v7, v8);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t SkillLvEntity__getMovePositionUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  SkillLvEntity_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_597148B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_25778/*"up"*/);
    byte_597148B = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_25778/*"up"*/,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_25778/*"up"*/,
                                                                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_2213CDC(Item, v4);
      }
      if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v6);
      }
      else
      {
        sub_221405C(Item, qword_5984368, v6);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v7, v8);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


System_String_o *SkillLvEntity__getPlayVoiceNo(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x2

  if ( (byte_5971486 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_11131/*"PlayVoiceNo"*/);
    byte_5971486 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_11131/*"PlayVoiceNo"*/,
            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_2213CDC(0, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_11131/*"PlayVoiceNo"*/,
                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != (System_String_c *)qword_5984390 )
    {
      sub_221405C(result, qword_5984390, v6);
      return 0;
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__array *SkillLvEntity__getValues(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *svals; // x9
  int max_length; // w20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_string__int__array *v6; // x21
  unsigned int v7; // w24
  struct System_String_array *v8; // x8
  int v9; // w28
  __int64 v10; // x22
  System_Collections_Generic_Dictionary_object__int__o *v11; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  Il2CppClass **v19; // x29
  __int64 *v20; // x29
  int32_t v21; // w8
  System_String_o *v22; // x23
  __int64 v23; // x23
  int32_t v24; // w2
  const MethodInfo_3FF4088 *v25; // x3
  Il2CppObject *v26; // x1
  __int64 v27; // x23
  __int64 v29; // x0
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_597147C & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_597147C = 1;
  }
  svals = this->fields.svals;
  *(_QWORD *)result = 0;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_2213B20(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1);
  max_length = svals->max_length;
  v4 = sub_2213B20(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v6 = (System_Collections_Generic_Dictionary_string__int__array *)v4;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = this->fields.svals;
      if ( !v8 )
        goto LABEL_36;
      if ( v7 >= LODWORD(v8->max_length) )
        goto LABEL_37;
      v4 = (__int64)v8->m_Items[v7];
      if ( !v4
        || (v4 = (__int64)System_String__Replace_75703400(
                            (System_String_o *)v4,
                            (System_String_o *)StringLiteral_16427/*"["*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0)) == 0
        || (v4 = (__int64)System_String__Replace_75703400(
                            (System_String_o *)v4,
                            (System_String_o *)StringLiteral_16691/*"]"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0)) == 0
        || (v4 = (__int64)System_String__Split((System_String_o *)v4, 0x2Cu, 0, 0)) == 0
        || (v9 = *(_DWORD *)(v4 + 24),
            v10 = v4,
            v11 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_object__int____ctor(
              v11,
              (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v6) )
      {
LABEL_36:
        sub_2213CDC(v4, v5);
      }
      if ( v11 )
      {
        v4 = sub_2213BB4(v11, v6->obj.klass->_1.element_class);
        if ( !v4 )
        {
          v29 = sub_2213D00(0, v18);
          sub_2213BA0(v29, 0);
        }
      }
      if ( v7 >= LODWORD(v6->max_length) )
LABEL_37:
        sub_2213CE4(v4);
      v19 = &v6->obj.klass + v7;
      v19[4] = (Il2CppClass *)v11;
      v20 = (__int64 *)(v19 + 4);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->m_Items[v7], (int32_t)v11, v12, v13, v14, v15, v16, v17);
      result[1] = 0;
      if ( v9 >= 1 )
        break;
LABEL_33:
      if ( ++v7 == max_length )
        return v6;
    }
    v21 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v21 >= *(_DWORD *)(v10 + 24) )
        goto LABEL_37;
      v22 = *(System_String_o **)(v10 + 8LL * v21 + 32);
      v4 = System_Int32__TryParse(v22, result, 0);
      if ( (v4 & 1) != 0 )
        break;
      if ( !v22 )
        goto LABEL_36;
      v4 = (__int64)System_String__Split(v22, 0x3Au, 0, 0);
      if ( !v4 )
        goto LABEL_36;
      v27 = v4;
      if ( *(int *)(v4 + 24) >= 2 )
      {
        v4 = System_Int32__TryParse(*(System_String_o **)(v4 + 40), result, 0);
        if ( (v4 & 1) != 0 )
        {
          if ( v7 >= LODWORD(v6->max_length) || !*(_DWORD *)(v27 + 24) )
            goto LABEL_37;
          v4 = *v20;
          if ( !*v20 )
            goto LABEL_36;
          v24 = result[0];
          v26 = *(Il2CppObject **)(v27 + 32);
          v25 = (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_23:
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)v4,
            v26,
            v24,
            v25);
        }
      }
      v21 = ++result[1];
      if ( result[1] >= v9 )
        goto LABEL_33;
    }
    if ( v7 >= LODWORD(v6->max_length) )
      goto LABEL_37;
    v23 = *v20;
    v4 = (__int64)System_Int32__ToString((int32_t)&result[1], 0);
    if ( !v23 )
      goto LABEL_36;
    v24 = result[0];
    v25 = (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v26 = (Il2CppObject *)v4;
    v4 = v23;
    goto LABEL_23;
  }
  return v6;
}


System_String_o *SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x2

  if ( (byte_5971485 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_15971/*"VoiceAssetName"*/);
    byte_5971485 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15971/*"VoiceAssetName"*/,
            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_2213CDC(0, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15971/*"VoiceAssetName"*/,
                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != (System_String_c *)qword_5984390 )
    {
      sub_221405C(result, qword_5984390, v6);
      return 0;
    }
  }
  return result;
}


float SkillLvEntity__getVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  float v3; // s8
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v7; // x2
  float result; // s0
  SkillLvEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_5971489 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_15974/*"VoiceVolume"*/);
    byte_5971489 = 1;
  }
  v3 = 1.0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15974/*"VoiceVolume"*/,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v3;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15974/*"VoiceVolume"*/,
                                                                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(Item, v5);
  }
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, qword_5984368, v7) / 1000.0;
  sub_221405C(Item, qword_5984368, v7);
  SkillLvEntity__getMovePositionUp(v9, v10);
  return result;
}


bool SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_5971487 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_11132/*"PlayVoiceWait"*/);
    byte_5971487 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_11132/*"PlayVoiceWait"*/,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


void SkillLvEntity_SvtChangeBgm___ctor(
        SkillLvEntity_SvtChangeBgm_o *this,
        System_Collections_Generic_Dictionary_string__object__o *obj,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  _QWORD *v9; // x0
  Il2CppObject *v10; // x1
  const MethodInfo_3FFDB90 *v11; // x2
  _QWORD *v12; // x0
  Il2CppObject *v13; // x1
  const MethodInfo_3FFDB90 *v14; // x2
  _QWORD *v15; // x0
  Il2CppObject *v16; // x1
  const MethodInfo_3FFDB90 *v17; // x2
  _QWORD *v18; // x0
  Il2CppObject *v19; // x1
  const MethodInfo_3FFDB90 *v20; // x2
  SkillLvEntity_o *v21; // x0
  System_String_o *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_59714A7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_17411/*"afterClearBgmId"*/);
    sub_2213A60(&StringLiteral_21786/*"indv"*/);
    sub_2213A60(&StringLiteral_17861/*"beforeClearBgmId"*/);
    sub_2213A60(&StringLiteral_24055/*"questPhase"*/);
    sub_2213A60(&StringLiteral_24051/*"questId"*/);
    byte_59714A7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_21786/*"indv"*/,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  v8 = qword_5984368;
  if ( Item->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
    goto LABEL_16;
  v9 = (_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v7);
  v10 = (Il2CppObject *)StringLiteral_24051/*"questId"*/;
  v11 = (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  this->fields.svtIndv = *v9;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           v10,
           v11);
  if ( !Item )
    goto LABEL_15;
  v8 = qword_5984368;
  if ( Item->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
    goto LABEL_16;
  v12 = (_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v7);
  v13 = (Il2CppObject *)StringLiteral_24055/*"questPhase"*/;
  v14 = (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  this->fields.questId = *v12;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           v13,
           v14);
  if ( !Item )
    goto LABEL_15;
  v8 = qword_5984368;
  if ( Item->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
    goto LABEL_16;
  v15 = (_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v7);
  v16 = (Il2CppObject *)StringLiteral_17861/*"beforeClearBgmId"*/;
  v17 = (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  this->fields.questPhase = *v15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           v16,
           v17);
  if ( !Item )
    goto LABEL_15;
  v8 = qword_5984368;
  if ( Item->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
    goto LABEL_16;
  v18 = (_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v7);
  v19 = (Il2CppObject *)StringLiteral_17411/*"afterClearBgmId"*/;
  v20 = (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  this->fields.beforeClearBgmId = *v18;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           v19,
           v20);
  if ( !Item )
LABEL_15:
    sub_2213CDC(Item, v6);
  v8 = qword_5984368;
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v7);
    return;
  }
LABEL_16:
  sub_221405C(Item, v8, v7);
  SkillLvEntity__GetScriptIntParam(v21, v22, v23, v24);
}


void SkillLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59714A8 & 1) == 0 )
  {
    sub_2213A60(&SkillLvEntity___c_TypeInfo);
    byte_59714A8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillLvEntity___c_TypeInfo->static_fields->__9 = (struct SkillLvEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SkillLvEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SkillLvEntity___c___ctor(SkillLvEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SkillLvEntity___c___GetEventIndividuality_b__59_0(
        SkillLvEntity___c_o *this,
        QuestGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.questId;
}


System_Nullable_int__o SkillLvEntity___c___GetFuncIndexForSplitFuncSequence_b__43_0(
        SkillLvEntity___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int v3; // w19
  System_Nullable_int__o v4; // [xsp+8h] [xbp-28h] BYREF

  v3 = x;
  if ( (byte_59714A9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    byte_59714A9 = 1;
  }
  v4 = 0;
  System_Nullable_int____ctor(
    (System_Nullable_int__o)&v4,
    v3 - 1,
    (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  return v4;
}