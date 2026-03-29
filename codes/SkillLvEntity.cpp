void SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31591 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31591 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


void SkillLvEntity___ctor_43597008(SkillLvEntity_o *this, SkillLvEntity_o *srcEntity, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Array_o *funcId; // x0
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  struct System_Int32_array *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v24; // x0
  struct System_String_array *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_object__object__o *v33; // x21

  if ( (byte_4D31592 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object___ctor___78963352);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    byte_4D31592 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_1C93D2C(v5, v6);
  *(_OWORD *)&this->fields.skillId = *(_OWORD *)&srcEntity->fields.skillId;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v14 = System_Array__Clone(funcId, 0)) != 0 )
  {
    v15 = v14;
    v16 = (struct System_Int32_array *)sub_1C93C10(v14, int___TypeInfo);
    if ( !v16 )
      goto LABEL_12;
  }
  else
  {
    v16 = 0;
  }
  this->fields.funcId = v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.funcId, (int32_t)v16, v7, v8, v9, v10, v11, v12);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v24 = System_Array__Clone(svals, 0);
  if ( !v24 )
    goto LABEL_13;
  v15 = v24;
  v25 = (struct System_String_array *)sub_1C93C10(v24, string___TypeInfo);
  if ( v25 )
    goto LABEL_14;
LABEL_12:
  sub_1C940C8(v15);
LABEL_13:
  v25 = 0;
LABEL_14:
  this->fields.svals = v25;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.svals, (int32_t)v25, v17, v18, v19, v20, v21, v22);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v33 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor_55763672(
      v33,
      script,
      (const MethodInfo_352E2D8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___78963352);
  }
  else
  {
    v33 = 0;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v33;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.script, (int32_t)v33, v26, v27, v28, v29, v30, v31);
}


System_String_o *SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4D31590 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D31590 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D315B5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_2126/*"ActNpcServantId"*/);
    byte_4D315B5 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_2126/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D315AC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16758/*"actRarity"*/);
    byte_4D315AC = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16758/*"actRarity"*/, v2);
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
  __int64 v13; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  SkillLvEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4D315A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&StringLiteral_2162/*"AddIndiv"*/);
    byte_4D315A8 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_2162/*"AddIndiv"*/,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v5 )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v5,
           (Il2CppObject *)StringLiteral_2162/*"AddIndiv"*/,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v10 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v8 )
    goto LABEL_26;
  if ( v8->fields._size < 1 )
  {
LABEL_24:
    if ( v10 )
      return System_Collections_Generic_List_int___ToArray(
               v10,
               (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_26:
    sub_1C93D2C(v5, klass_low);
  }
  v11 = 0;
  while ( 1 )
  {
    v5 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v8,
                                                                      v11,
                                                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v10 || !v5 )
      goto LABEL_26;
    if ( v5->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v5 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(v5, long_TypeInfo, v12, v13);
    klass_low = LODWORD(v5->klass);
    items = v10->fields._items;
    v15 = Method_System_Collections_Generic_List_int__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v10->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        klass_low,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = size + 1;
      items->m_Items[size] = klass_low;
    }
    if ( ++v11 >= v8->fields._size )
      goto LABEL_24;
  }
  sub_1C940C8(v5);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v17, v18);
}


int32_t SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D315B3 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16804/*"additionalSkillActorType"*/);
    byte_4D315B3 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16804/*"additionalSkillActorType"*/, -1, v2);
}


int32_t SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D315B1 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16805/*"additionalSkillId"*/);
    byte_4D315B1 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16805/*"additionalSkillId"*/, -1, v2);
}


int32_t SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D315B2 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16807/*"additionalSkillLv"*/);
    byte_4D315B2 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16807/*"additionalSkillLv"*/, 1, v2);
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  bool v25; // w8
  Il2CppObject **v26; // x29
  int32_t Item; // w25
  Il2CppObject *v28; // x26
  bool v29; // w8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  const MethodInfo_387B4F4 *v34; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D315BD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C93AD4(&EventDropUpValInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C93AD4(&StringLiteral_10056/*"OnlyMaxFuncGroupId"*/);
    sub_1C93AD4(&StringLiteral_13745/*"Target"*/);
    byte_4D315BD = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !this->fields.funcId )
  {
    if ( v3 )
    {
      v34 = (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__;
      return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(v3, v34);
    }
    goto LABEL_36;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  Values = SkillLvEntity__getValues(this, v7);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_36;
  v9 = (Il2CppObject **)&StringLiteral_10056/*"OnlyMaxFuncGroupId"*/;
  v10 = Values;
  v11 = 0;
  m_Items = Values->m_Items;
  while ( 1 )
  {
    max_length_low = LODWORD(funcId->max_length);
    if ( (__int64)v11 >= (int)max_length_low )
      break;
    if ( v11 >= max_length_low )
      goto LABEL_42;
    if ( !Master_object )
      goto LABEL_36;
    Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                           &entity,
                                                                           funcId->m_Items[v11],
                                                                           (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Values & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_36;
      v14 = LODWORD(v10->max_length);
      if ( (__int64)v11 >= (int)v14 )
        break;
      if ( v11 >= v14 )
LABEL_42:
        sub_1C93D34(Values);
      v15 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v11];
      if ( v15 )
      {
        v16 = entity;
        if ( !entity )
          goto LABEL_36;
        monitor = (int)entity[1].monitor;
        switch ( monitor )
        {
          case 1:
            goto LABEL_20;
          case 111:
            v26 = v9;
            if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                   (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v11],
                   (Il2CppObject *)StringLiteral_13745/*"Target"*/,
                   (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v15,
                       (Il2CppObject *)StringLiteral_13745/*"Target"*/,
                       (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            }
            else
            {
              Item = 0;
            }
            v28 = entity;
            v18 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
            EventDropUpValInfo___ctor_42446848(v18, 0, (FunctionEntity_o *)v28, Item, 0);
            v9 = v26;
            v29 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v15,
                    *v26,
                    (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            Values = 0;
            if ( v29 )
              Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v15,
                                                                                     *v26,
                                                                                     (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !v18 )
              goto LABEL_36;
            break;
          case 16:
LABEL_20:
            v18 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
            EventDropUpValInfo___ctor(v18, 0, (FunctionEntity_o *)v16, 0);
            v25 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v15,
                    *v9,
                    (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            Values = 0;
            if ( v25 )
              Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v15,
                                                                                     *v9,
                                                                                     (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !v18 )
              goto LABEL_36;
            break;
          default:
            goto LABEL_35;
        }
        v18->fields.groupId = (int)Values;
        if ( !v3 )
          goto LABEL_36;
        items = v3->fields._items;
        v31 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v18,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v18;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v18, v19, v20, v21, v22, v23, v24);
        }
      }
    }
LABEL_35:
    funcId = this->fields.funcId;
    ++v11;
    if ( !funcId )
      goto LABEL_36;
  }
  if ( !v3 )
LABEL_36:
    sub_1C93D2C(Values, v5);
  v34 = (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__;
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(v3, v34);
}


int32_t SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D315B4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17213/*"battleStartRemainingTurn"*/);
    byte_4D315B4 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17213/*"battleStartRemainingTurn"*/, 0, v2);
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
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
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

  if ( (byte_4D31599 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C93AD4(&EventDropUpValInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C93AD4(&StringLiteral_1311/*"2"*/);
    sub_1C93AD4(&StringLiteral_13745/*"Target"*/);
    sub_1C93AD4(&StringLiteral_1166/*"1"*/);
    sub_1C93AD4(&StringLiteral_6253/*"EventId"*/);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D31599 = 1;
  }
  v41 = 0;
  entity = 0;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (FunctionGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *eventUpVallInfo )
    {
      v10 = Values;
      if ( (*eventUpVallInfo)->fields.svtId < 1 )
      {
        v36 = 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Values = (FunctionGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*eventUpVallInfo || !Values )
          goto LABEL_61;
        v36 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Values,
                                   (*eventUpVallInfo)->fields.svtId,
                                   (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                              (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                sub_1C93D34(Values);
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
                                                      (Il2CppObject *)StringLiteral_6253/*"EventId"*/,
                                                      (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) == 0 )
                  {
                    if ( !entity )
                      break;
                    if ( LODWORD(entity[1].monitor) == 111 )
                    {
                      Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                          v17,
                                                          (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                                          (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
                        Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                            v17,
                                                            (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                   (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                   (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                   (Il2CppObject *)StringLiteral_13745/*"Target"*/,
                                   (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                            {
                              individualitya = System_Collections_Generic_Dictionary_object__int___get_Item(
                                                 v17,
                                                 (Il2CppObject *)StringLiteral_13745/*"Target"*/,
                                                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                            }
                            else
                            {
                              individualitya = 0;
                            }
                            v20 = entity;
                            v35 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
                            EventDropUpValInfo___ctor_42446848(v35, 0, (FunctionEntity_o *)v20, individualitya, 0);
                            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                                   v17,
                                   (Il2CppObject *)StringLiteral_1116/*"0"*/,
                                   (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                            {
                              Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                  v17,
                                                                  (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                                                  (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                                                  (Il2CppObject *)StringLiteral_1116/*"0"*/,
                                                                  (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              v21 = (Il2CppObject *)v35;
                              if ( (_DWORD)Values == 2 )
                              {
                                Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                    v17,
                                                                    (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                                                    (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                *(const MethodInfo_387999C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v31 = v28 + 8 * v30;
                              LODWORD(Values->fields._MasterName_k__BackingField) = v30 + 1;
                              *(_QWORD *)(v31 + 32) = v21;
                              sub_1C93A78(
                                (GrandQuestFolderBoardItem_o *)(v31 + 32),
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
    sub_1C93D2C(Values, v9);
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
  System_Func_object__int__o *_9__59_0; // x22
  Il2CppObject *v24; // x23
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // [xsp+Ch] [xbp-74h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *v35; // [xsp+18h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_4D315B7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
    sub_1C93AD4(&System_Func_QuestGroupEntity__int__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_SkillLvEntity___c__GetEventIndividuality_b__59_0__);
    this = (SkillLvEntity_o *)sub_1C93AD4(&SkillLvEntity___c_TypeInfo);
    byte_4D315B7 = 1;
  }
  entity = 0;
  v35 = 0;
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
    v33 = questId;
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
                                      &v35,
                                      v19,
                                      (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(max_length) = funcId->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_20;
    }
    if ( !v35 )
      goto LABEL_40;
    questTvals = (System_Int32_array *)v35[5].klass;
LABEL_20:
    questId = v33;
  }
  if ( !questTvals )
    goto LABEL_40;
  if ( questTvals->max_length )
    return questTvals;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v22 = SkillLvEntity___c_TypeInfo;
  }
  _9__59_0 = (System_Func_object__int__o *)v22->static_fields->__9__59_0;
  if ( !_9__59_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = SkillLvEntity___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__59_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_QuestGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__59_0, v24, Method_SkillLvEntity___c__GetEventIndividuality_b__59_0__, 0);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__59_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__59_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__59_0,
      (int32_t)_9__59_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__59_0,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v32,
         questId,
         (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_1C93B7C(int___TypeInfo, 1);
  if ( !this )
LABEL_40:
    sub_1C93D2C(this, *(_QWORD *)&index);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
LABEL_41:
    sub_1C93D34(this);
  LODWORD(this->fields.funcId) = -1;
  return questTvals;
}


System_Collections_Generic_Dictionary_string__int__o *SkillLvEntity__GetFollowerValsDictionary(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_String_array *StringArray; // x0
  System_String_array *v4; // x20
  System_Collections_Generic_Dictionary_object__int__o *v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  int klass; // w9
  System_String_o *v9; // x20
  int v10; // w8
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D315B6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C93AD4(&StringLiteral_19743/*"followerVals"*/);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D315B6 = 1;
  }
  result = 0;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19743/*"followerVals"*/, 0, 0);
  if ( !StringArray )
    return 0;
  v4 = StringArray;
  if ( !StringArray->max_length )
    return 0;
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_3525324 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !LODWORD(v4->max_length) )
    goto LABEL_20;
  v6 = v4->m_Items[0];
  if ( !v6
    || (v6 = System_String__Replace_64472288(
               v6,
               (System_String_o *)StringLiteral_15904/*"["*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0)) == 0
    || (v6 = System_String__Replace_64472288(
               v6,
               (System_String_o *)StringLiteral_16156/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0)) == 0
    || (v6 = (System_String_o *)System_String__Split(v6, 0x2Cu, 0, 0), v13 = 0, !v6) )
  {
LABEL_21:
    sub_1C93D2C(v6, v7);
  }
  klass = (int)v6[1].klass;
  v9 = v6;
  if ( klass >= 1 )
  {
    v10 = 0;
    while ( v10 < (unsigned int)klass )
    {
      v6 = (System_String_o *)System_Int32__TryParse(*((System_String_o **)&v9[1].monitor + v10), &result, 0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        v6 = System_Int32__ToString((int32_t)&v13, 0);
        if ( !v5 )
          goto LABEL_21;
        System_Collections_Generic_Dictionary_object__int___Add(
          v5,
          (Il2CppObject *)v6,
          result,
          (const MethodInfo_3525CD8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v10 = v13 + 1;
      v13 = v10;
      klass = (int)v9[1].klass;
      if ( v10 >= klass )
        return (System_Collections_Generic_Dictionary_string__int__o *)v5;
    }
LABEL_20:
    sub_1C93D34(v6);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v5;
}


System_Nullable_ValueTuple_FuncList_TYPE__int___o SkillLvEntity__GetFriendPointUpTypeVal(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v4; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v6; // x1
  struct System_Int32_array *funcId; // x8
  System_Collections_Generic_Dictionary_string__int__array *v8; // x20
  unsigned __int64 v9; // x22
  unsigned __int64 max_length_low; // x9
  int monitor; // w8
  int max_length; // w8
  System_Collections_Generic_Dictionary_object__int__o *v13; // x19
  int32_t v14; // w20
  int32_t Item; // w0
  const MethodInfo_399B25C *v16; // x3
  Il2CppObject *v19; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  __int64 v21; // [xsp+10h] [xbp-40h] BYREF
  int32_t v22; // [xsp+18h] [xbp-38h]
  System_Nullable_ValueTuple_FuncList_TYPE__int___o result; // 0:x0.12
  System_Nullable_T__o v24; // 0:x0.16

  if ( (byte_4D31598 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C93AD4(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int____ctor__);
    sub_1C93AD4(&Method_System_ValueTuple_FuncList_TYPE__int___ctor__);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D31598 = 1;
  }
  entity = 0;
  if ( !this->fields.funcId )
    goto LABEL_24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  Values = SkillLvEntity__getValues(this, v4);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_16;
  v8 = Values;
  v9 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(funcId->max_length);
    if ( (__int64)v9 >= (int)max_length_low )
      goto LABEL_24;
    if ( v9 >= max_length_low )
      goto LABEL_26;
    if ( !Master_object )
      goto LABEL_16;
    Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                           &entity,
                                                                           funcId->m_Items[v9],
                                                                           (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Values & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_16;
      monitor = (int)entity[1].monitor;
      if ( monitor == 123 || monitor == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v9;
    if ( !funcId )
      goto LABEL_16;
  }
  if ( !v8 )
LABEL_16:
    sub_1C93D2C(Values, v6);
  max_length = v8->max_length;
  if ( (int)v9 >= max_length )
    goto LABEL_24;
  if ( (unsigned int)v9 >= max_length )
LABEL_26:
    sub_1C93D34(Values);
  v13 = (System_Collections_Generic_Dictionary_object__int__o *)v8->m_Items[v9];
  if ( !v13
    || (Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                               v13,
                                                                               (Il2CppObject *)StringLiteral_1116/*"0"*/,
                                                                               (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__),
        ((unsigned __int8)Values & 1) == 0) )
  {
LABEL_24:
    v22 = 0;
    v21 = 0;
    goto LABEL_25;
  }
  if ( !entity )
    goto LABEL_16;
  v14 = (int32_t)entity[1].monitor;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           v13,
           (Il2CppObject *)StringLiteral_1116/*"0"*/,
           (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v19 = 0;
  System_ValueTuple_Int32Enum__int____ctor(
    (System_ValueTuple_Int32Enum__int__o)&v19,
    v14,
    Item,
    (const MethodInfo_3BDC0FC *)Method_System_ValueTuple_FuncList_TYPE__int___ctor__);
  v24.fields.value = v19;
  *(_QWORD *)&v24.fields.hasValue = &v21;
  v22 = 0;
  v21 = 0;
  System_Nullable_ValueTuple_Int32Enum__int_____ctor(
    v24,
    (System_ValueTuple_Int32Enum__int__o)Method_System_Nullable_ValueTuple_FuncList_TYPE__int____ctor__,
    v16);
LABEL_25:
  *(_QWORD *)&result.fields.hasValue = v21;
  result.fields.value.fields.Item2 = v22;
  return result;
}


System_Nullable_int__o SkillLvEntity__GetFuncIndexForSplitFuncSequence(SkillLvEntity_o *this, const MethodInfo *method)
{
  SkillLvEntity___c_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v5; // x20
  System_Func_long__Nullable_int___o *_9__43_0; // x21
  Il2CppObject *v7; // x22
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D315A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
    sub_1C93AD4(&System_Func_long__Nullable_int___TypeInfo);
    sub_1C93AD4(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__43_0__);
    sub_1C93AD4(&SkillLvEntity___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_19921/*"funcPositionForSplitFuncSequence"*/);
    byte_4D315A9 = 1;
  }
  v3 = SkillLvEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v3 = SkillLvEntity___c_TypeInfo;
  }
  v5 = (System_String_o *)StringLiteral_19921/*"funcPositionForSplitFuncSequence"*/;
  _9__43_0 = v3->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SkillLvEntity___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v3->static_fields->__9;
    _9__43_0 = (System_Func_long__Nullable_int___o *)sub_1C93D20(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__43_0,
      v7,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__43_0__,
      0);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = _9__43_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__43_0,
      (int32_t)_9__43_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v5,
           (System_Func_TSource__TDestination__o *)_9__43_0,
           0,
           (const MethodInfo_31AB06C *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
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
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  unsigned int *v14; // x0
  __int64 v15; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  void *v20; // x0
  void *v21; // x21
  int v22; // w1
  int v23; // w20
  __int64 v24; // x20
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D315AD & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetValue_List_object____);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    byte_4D315AD = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   (Il2CppObject *)v7,
                   (const MethodInfo_319214C *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_object )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)Value_object,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v10 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_18;
    }
    if ( !v5 )
      sub_1C93D2C(v10, v11);
    if ( !v26.fields._current )
      sub_1C93D2C(0, v11);
    if ( v26.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v14 = (unsigned int *)j_il2cpp_object_unbox_0(v26.fields._current, long_TypeInfo, v12, v13);
    v15 = *v14;
    items = v5->fields._items;
    v17 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C93D2C(v14, v15);
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        v15,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      items->m_Items[size] = v15;
    }
  }
  sub_1C940C8(v26.fields._current);
  v21 = v20;
  v23 = v22;
  __cxa_end_catch();
  if ( v23 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1D77CB0();
  }
  v24 = *(_QWORD *)__cxa_begin_catch(v21);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v24 )
    sub_1C93D24(v24);
LABEL_18:
  if ( !v5 )
LABEL_20:
    sub_1C93D2C(Value_object, v9);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Func_object__object__o *v3; // x20

  if ( (byte_4D315AA & 1) == 0 )
  {
    sub_1C93AD4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_1C93AD4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_1C93AD4(&System_Func_List_object___List_int___TypeInfo);
    sub_1C93AD4(&StringLiteral_17195/*"battleEffectId"*/);
    byte_4D315AA = 1;
  }
  v3 = (System_Func_object__object__o *)sub_1C93D20(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v3, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_17195/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v3,
                                                     0,
                                                     (const MethodInfo_31AB334 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


System_Int32_array *SkillLvEntity__GetRevivalTargetArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D315BB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23390/*"revivalTargetArray"*/);
    byte_4D315BB = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23390/*"revivalTargetArray"*/, 0);
}


int32_t SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D315AF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    byte_4D315AF = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
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
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v8, v9);
  sub_1C940C8(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v11, v12);
}


SelectTreasureDeviceInfo_o *SkillLvEntity__GetSelectTreasureDeviceInfo(SkillLvEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Value_object__object; // x19
  Il2CppObject *v4; // x0

  if ( (byte_4D315BA & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetValue_string__object___);
    sub_1C93AD4(&Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_23554/*"selectTreasureDeviceInfo"*/);
    byte_4D315BA = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_23554/*"selectTreasureDeviceInfo"*/,
                           0,
                           (const MethodInfo_31928F8 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__Deserialize_object_(
           Value_object__object,
           (const MethodInfo_3213E20 *)Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
    Value_object__object = v4;
    if ( v4 )
      SelectTreasureDeviceInfo__AssignTdIndexAutomatically((SelectTreasureDeviceInfo_o *)v4, 0);
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

  if ( (byte_4D31595 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D31595 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v5 = (FunctionMaster_o *)Master_object;
  DataValsList = SkillLvEntity__getDataValsList(this, v6);
  if ( !v5 )
    sub_1C93D2C(DataValsList, v8);
  return FunctionMaster__GetSetTypeDataValArray(v5, funcId, DataValsList, 0);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  System_Collections_Generic_Dictionary_string__object__o *v6; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v9; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x20
  __int64 naturalAligment; // x9
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D315AE & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetValue_List_object____);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&SkillLvEntity_SvtChangeBgm_TypeInfo);
    sub_1C93AD4(&StringLiteral_24156/*"svtBgmChange"*/);
    byte_4D315AE = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_24156/*"svtBgmChange"*/,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v3;
  v6 = this->fields.script;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)BasicHelper__GetValue_object_(
                                                                        v6,
                                                                        (System_String_o *)StringLiteral_24156/*"svtBgmChange"*/,
                                                                        (Il2CppObject *)v7,
                                                                        (const MethodInfo_319214C *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_21:
    sub_1C93D2C(script, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)script,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v27.fields._current;
    v9 = (SkillLvEntity_SvtChangeBgm_o *)sub_1C93D20(SkillLvEntity_SvtChangeBgm_TypeInfo);
    v11 = (Il2CppObject *)v9;
    if ( current )
    {
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1C940C8(current);
LABEL_19:
        sub_1C93D2C(v13, v14);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v9, (System_Collections_Generic_Dictionary_string__object__o *)current, v10);
    if ( !v3 )
      goto LABEL_19;
    items = v3->fields._items;
    v22 = Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C93D2C(v13, v14);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        v11,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v24[4] = (Il2CppClass *)v11;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v11, v15, v16, v17, v18, v19, v20);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
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
  DataVals_array *DataValsList; // x21
  Il2CppObject *Master_object; // x22
  struct System_Int32_array *v9; // x8
  SkillLvMaster_o *v10; // x23
  unsigned __int64 v11; // x28
  unsigned __int64 max_length_low; // x9
  DataVals_o *v13; // x24
  int32_t v14; // w1
  int32_t Param; // w25
  int32_t v16; // w1
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  SkillLvEntity_o *v20; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D315B9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4D315B9 = 1;
  }
  v20 = 0;
  entity = 0;
  funcId = (System_Collections_Generic_IEnumerable_T__o *)this->fields.funcId;
  if ( funcId )
  {
    isAddState = *ret;
    if ( !*ret )
      goto LABEL_32;
    System_Collections_Generic_HashSet_int___UnionWith(
      isAddState,
      funcId,
      (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v6);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v9 = this->fields.funcId;
    if ( !v9 )
      goto LABEL_32;
    v10 = (SkillLvMaster_o *)isAddState;
    v11 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(v9->max_length);
      if ( (__int64)v11 >= (int)max_length_low )
        break;
      if ( v11 >= max_length_low )
        goto LABEL_40;
      if ( !Master_object )
        goto LABEL_32;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                  &entity,
                                                                  v9->m_Items[v11],
                                                                  (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_32;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity[1].monitor, 0);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_32;
          if ( v11 >= LODWORD(DataValsList->max_length) )
LABEL_40:
            sub_1C93D34(isAddState);
          if ( !entity )
            goto LABEL_32;
          v13 = DataValsList->m_Items[v11];
          if ( !v13 )
            goto LABEL_32;
          DataVals__SetTempType(
            DataValsList->m_Items[v11],
            (FunctionMaster_o *)Master_object,
            (int32_t)entity[1].monitor,
            0);
          v14 = DataVals__isParam(v13, 28, 0) ? 28 : 3;
          Param = DataVals__GetParam(v13, v14, 0, 0);
          v16 = DataVals__isParam(v13, 29, 0) ? 29 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v13, v16, 0, 0);
          if ( !v10 )
            goto LABEL_32;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v10,
                                                                      &v20,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      v17);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_32;
            funcId = (System_Collections_Generic_IEnumerable_T__o *)v20->fields.funcId;
            if ( funcId )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_32;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                funcId,
                (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v9 = this->fields.funcId;
      ++v11;
      if ( !v9 )
        goto LABEL_32;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !isAddState
      || (isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)isAddState,
                                                                      this->fields.skillId,
                                                                      (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0
      || (isAddState = (System_Collections_Generic_HashSet_int__o *)SkillEntity__GetBranchSkillFuncIds(
                                                                      (SkillEntity_o *)isAddState,
                                                                      this->fields.lv,
                                                                      v18),
          !*ret) )
    {
LABEL_32:
      sub_1C93D2C(isAddState, funcId);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      *ret,
      (System_Collections_Generic_IEnumerable_T__o *)isAddState,
      (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


bool SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D315B8 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16806/*"additionalSkillInsertCurrentSkillAfter"*/);
    byte_4D315B8 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16806/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D315A6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&StringLiteral_16991/*"aress"*/);
    byte_4D315A6 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_16991/*"aress"*/,
                       (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool SkillLvEntity__IsContainsTurnOrCountBuff(SkillLvEntity_o *this, const MethodInfo *method)
{
  DataVals_array *SetTypeDataValArray; // x0
  __int64 v3; // x1
  int max_length; // w8
  DataVals_array *v5; // x19
  unsigned int v6; // w22
  bool v7; // w21
  DataVals_o *v8; // x20
  int32_t funcType; // w8

  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(this, method);
  if ( !SetTypeDataValArray )
LABEL_16:
    sub_1C93D2C(SetTypeDataValArray, v3);
  max_length = SetTypeDataValArray->max_length;
  v5 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    if ( v6 >= max_length )
      sub_1C93D34(SetTypeDataValArray);
    v8 = v5->m_Items[v6];
    if ( !v8 )
      goto LABEL_16;
    funcType = v8->fields.funcType;
    if ( funcType == 1 || funcType == 130 || funcType == 16 )
    {
      if ( DataVals__GetParam(v8, 1, 0, 0) > 0 )
        return v7;
      SetTypeDataValArray = (DataVals_array *)DataVals__GetParam(v8, 2, 0, 0);
      if ( (int)SetTypeDataValArray > 0 )
        return 1;
    }
    max_length = v5->max_length;
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


bool SkillLvEntity__IsEnableTarget(SkillLvEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D315A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&StringLiteral_5995/*"EnableTarget"*/);
    byte_4D315A7 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_5995/*"EnableTarget"*/,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return isCheckHate;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_5995/*"EnableTarget"*/,
                                                                            (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C93D2C(Item, v6);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9) == 1;
  sub_1C940C8(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v11, v12);
}


bool SkillLvEntity__IsIgnoreUpHateTargetChange(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D315BE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20507/*"ignoreUpHateTargetChange"*/);
    byte_4D315BE = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_20507/*"ignoreUpHateTargetChange"*/, 0, v2) == 1;
}


bool SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D315AB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20508/*"ignoreWhiteFade"*/);
    byte_4D315AB = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20508/*"ignoreWhiteFade"*/, 0);
}


bool SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D315B0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22522/*"noTargetSkipSkill"*/);
    byte_4D315B0 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22522/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D315A5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&StringLiteral_23391/*"revivalUnder"*/);
    byte_4D315A5 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_23391/*"revivalUnder"*/,
                       (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D315A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&StringLiteral_23392/*"revivalUp"*/);
    byte_4D315A4 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_23392/*"revivalUp"*/,
                       (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool SkillLvEntity__IsSetGroupId(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v4; // x1
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__int__array *v6; // x19
  bool v7; // w20
  int v8; // w21

  if ( (byte_4D315BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C93AD4(&StringLiteral_10056/*"OnlyMaxFuncGroupId"*/);
    byte_4D315BC = 1;
  }
  Values = SkillLvEntity__getValues(this, method);
  if ( !Values )
    goto LABEL_12;
  max_length = Values->max_length;
  v6 = Values;
  v7 = max_length > 0;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C93D34(Values);
      Values = (System_Collections_Generic_Dictionary_string__int__array *)v6->m_Items[v8];
      if ( !Values )
        break;
      Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                             (System_Collections_Generic_Dictionary_object__int__o *)Values,
                                                                             (Il2CppObject *)StringLiteral_10056/*"OnlyMaxFuncGroupId"*/,
                                                                             (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)Values & 1) == 0 )
      {
        max_length = v6->max_length;
        v7 = ++v8 < max_length;
        if ( v8 < max_length )
          continue;
      }
      return v7;
    }
LABEL_12:
    sub_1C93D2C(Values, v4);
  }
  return v7;
}


bool SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  if ( (byte_4D315A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (SkillLvEntity_o *)sub_1C93AD4(&StringLiteral_2306/*"ApplySupportSvt"*/);
    byte_4D315A1 = 1;
  }
  if ( !vals )
    sub_1C93D2C(this, vals);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)StringLiteral_2306/*"ApplySupportSvt"*/,
           (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)vals,
            (Il2CppObject *)StringLiteral_2306/*"ApplySupportSvt"*/,
            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D3159F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&StringLiteral_15462/*"VoiceVolume"*/);
    byte_4D3159F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15462/*"VoiceVolume"*/,
                       (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  DataVals_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v28; // x0

  if ( (byte_4D31594 & 1) == 0 )
  {
    sub_1C93AD4(&DataVals___TypeInfo);
    sub_1C93AD4(&DataVals_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31594 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = sub_1C93B7C(DataVals___TypeInfo, 1);
    v20 = (DataVals_o *)sub_1C93D20(DataVals_TypeInfo);
    DataVals___ctor(v20, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v7 )
    {
      if ( v20 )
      {
        v4 = sub_1C93C10(v20, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v4 )
        {
LABEL_21:
          v28 = sub_1C93D50(v4);
          sub_1C93BFC(v28, 0);
        }
      }
      if ( !*(_DWORD *)(v7 + 24) )
LABEL_20:
        sub_1C93D34(v4);
      *(_QWORD *)(v7 + 32) = v20;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v20, v21, v22, v23, v24, v25, v26);
      return (DataVals_array *)v7;
    }
LABEL_13:
    sub_1C93D2C(v4, v5);
  }
  v4 = sub_1C93B7C(DataVals___TypeInfo, LODWORD(svals->max_length));
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
    v13 = (DataVals_o *)sub_1C93D20(DataVals_TypeInfo);
    DataVals___ctor(v13, v12, 0);
    if ( v7 )
    {
      if ( v13 )
      {
        v4 = sub_1C93C10(v13, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v11 >= *(unsigned int *)(v7 + 24) )
        goto LABEL_20;
      *(_QWORD *)(v7 + 8 * v8) = v13;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + v9), (int32_t)v13, v14, v15, v16, v17, v18, v19);
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
  System_String_o *v11; // x21

  if ( (byte_4D31596 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillDetailMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4D31596 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v8);
  }
  result = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v9);
  v11 = result;
  if ( !isNotApply )
  {
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    return SkillDetailParamFormatResolver__Apply(v11, this, 0);
  }
  return result;
}


System_String_o *SkillLvEntity__getDetail_43584536(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x21
  System_String_o *Detail; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D31597 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8309/*"LEVEL_DETAIL_INFO"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31597 = 1;
  }
  if ( lv <= 0 )
  {
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8309/*"LEVEL_DETAIL_INFO"*/, 0);
    v12 = lv;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    v9 = (Il2CppObject *)System_String__Format(v7, v8, 0);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, 0, method);
  return System_String__Format(Detail, v9, 0);
}


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
  Il2CppObject *v17; // x27
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *QuestPhaseIndividualList; // x0
  System_Int32_array *Individuality; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v24; // x29
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *v26; // x8
  unsigned __int64 v27; // x8
  System_Collections_Generic_Dictionary_object__int__o *v28; // x19
  Il2CppObject *v29; // x8
  int monitor; // w24
  System_Int32_array *klass; // x3
  const MethodInfo *v32; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  __int64 *v35; // x8
  bool v37; // [xsp+4h] [xbp-ACh]
  ItemMaster_o *Master_object; // [xsp+8h] [xbp-A8h]
  int32_t v39; // [xsp+14h] [xbp-9Ch]
  unsigned int v40; // [xsp+1Ch] [xbp-94h]
  ServantEntity_o *v41; // [xsp+20h] [xbp-90h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+28h] [xbp-88h]
  EventUpValSetupInfo_o *v43; // [xsp+30h] [xbp-80h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+38h] [xbp-78h]
  FunctionGroupEntity_o *v45; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4D3159A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C93AD4(&StringLiteral_1372/*"3"*/);
    sub_1C93AD4(&StringLiteral_1311/*"2"*/);
    sub_1C93AD4(&StringLiteral_13745/*"Target"*/);
    sub_1C93AD4(&StringLiteral_1166/*"1"*/);
    sub_1C93AD4(&StringLiteral_6253/*"EventId"*/);
    byte_4D3159A = 1;
  }
  v45 = 0;
  entity = 0;
  if ( !setupInfo || !this->fields.funcId )
  {
LABEL_94:
    LOBYTE(QuestPhaseIndividualList) = 0;
    return (unsigned __int8)QuestPhaseIndividualList & 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  v39 = wearesLimitCount;
  v40 = wearersSvtId;
  if ( wearersSvtId < 1 )
  {
    v41 = 0;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !QuestPhaseIndividualList )
      goto LABEL_100;
    v41 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               QuestPhaseIndividualList,
                               wearersSvtId,
                               (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  Values = SkillLvEntity__getValues(this, v18);
  v43 = setupInfo;
  QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                                                             setupInfo,
                                                                             eventId,
                                                                             0);
  funcId = this->fields.funcId;
  questPhaseIndividualityList = (System_Int32_array *)QuestPhaseIndividualList;
  if ( !funcId )
    goto LABEL_100;
  v37 = !isOwner;
  m_Items = Values->m_Items;
  v24 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(funcId->max_length);
    if ( (__int64)v24 >= (int)max_length_low )
      goto LABEL_94;
    if ( v24 >= max_length_low )
      goto LABEL_101;
    if ( !v17 )
      goto LABEL_100;
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                                                               &entity,
                                                                               funcId->m_Items[v24],
                                                                               (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
      goto LABEL_85;
    if ( isFuncGroup )
    {
      v26 = this->fields.funcId;
      if ( !v26 )
        goto LABEL_100;
      if ( v24 >= LODWORD(v26->max_length) )
LABEL_101:
        sub_1C93D34(QuestPhaseIndividualList);
      if ( !v19 )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)FunctionGroupMaster__TryGetEntity(
                                                                                 (FunctionGroupMaster_o *)v19,
                                                                                 &v45,
                                                                                 v26->m_Items[v24],
                                                                                 eventId,
                                                                                 0);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
    }
    if ( !Values )
      goto LABEL_100;
    v27 = LODWORD(Values->max_length);
    if ( (__int64)v24 >= (int)v27 )
      goto LABEL_85;
    if ( v24 >= v27 )
      goto LABEL_101;
    v28 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24];
    if ( !v28 )
      goto LABEL_85;
    v29 = entity;
    if ( !entity )
      goto LABEL_100;
    monitor = (int)entity[1].monitor;
    if ( monitor > 104 )
      break;
    if ( monitor == 1 )
      goto LABEL_47;
    if ( monitor != 7 )
    {
      if ( monitor != 16 )
        goto LABEL_85;
LABEL_47:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                                                                 (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                                                                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !(_DWORD)QuestPhaseIndividualList )
        goto LABEL_85;
      if ( !entity )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v43,
                                                                                 questPhaseIndividualityList,
                                                                                 (System_Int32_array *)entity[5].klass,
                                                                                 0);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)v41;
      if ( !v41 )
      {
LABEL_99:
        LODWORD(QuestPhaseIndividualList) = v40 >> 31;
        return (unsigned __int8)QuestPhaseIndividualList & 1;
      }
      if ( entity )
      {
        LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_43376636(
                                             v41,
                                             v39,
                                             wearesDispLimitCount,
                                             (System_Int32_array *)entity[2].monitor,
                                             0);
        return (unsigned __int8)QuestPhaseIndividualList & 1;
      }
LABEL_100:
      sub_1C93D2C(QuestPhaseIndividualList, Individuality);
    }
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                               (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                               (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                                                               (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
    {
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                                                                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList )
      {
LABEL_83:
        v29 = entity;
        if ( !entity )
          goto LABEL_100;
LABEL_84:
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                   v43,
                                                                                   questPhaseIndividualityList,
                                                                                   (System_Int32_array *)v29[5].klass,
                                                                                   0);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          goto LABEL_93;
      }
    }
LABEL_85:
    funcId = this->fields.funcId;
    ++v24;
    if ( !funcId )
      goto LABEL_100;
  }
  switch ( monitor )
  {
    case 105:
    case 106:
    case 107:
    case 108:
    case 114:
    case 115:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                                                                 (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                                                                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                                                                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v28,
                                                                                   (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                                                                   (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( !(_DWORD)QuestPhaseIndividualList )
          goto LABEL_85;
      }
      if ( !entity )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v43,
                                                                                 questPhaseIndividualityList,
                                                                                 (System_Int32_array *)entity[5].klass,
                                                                                 0);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      if ( monitor != 107 )
      {
        if ( monitor != 105 )
          goto LABEL_93;
        if ( !entity )
          goto LABEL_100;
        klass = (System_Int32_array *)entity[2].klass;
        if ( !klass )
          goto LABEL_93;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)(&dword_0 + 1);
        if ( (v40 & 0x80000000) != 0 || !klass->max_length )
          return (unsigned __int8)QuestPhaseIndividualList & 1;
        goto LABEL_91;
      }
      if ( !entity )
        goto LABEL_100;
      klass = (System_Int32_array *)entity[2].monitor;
      if ( klass )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)(&dword_0 + 1);
        if ( (v40 & 0x80000000) != 0 || SLODWORD(klass->max_length) < 1 )
          return (unsigned __int8)QuestPhaseIndividualList & 1;
LABEL_91:
        if ( v41 )
        {
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality_43376636(
                                                                                     v41,
                                                                                     v39,
                                                                                     wearesDispLimitCount,
                                                                                     klass,
                                                                                     0);
          if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
            goto LABEL_93;
        }
        goto LABEL_85;
      }
LABEL_93:
      LOBYTE(QuestPhaseIndividualList) = 1;
      return (unsigned __int8)QuestPhaseIndividualList & 1;
    case 111:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                                                                 (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_6253/*"EventId"*/,
                                                                                 (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_6253/*"EventId"*/,
                                                                                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                                                                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (int)QuestPhaseIndividualList >= 1 )
      {
        if ( !v41 )
          goto LABEL_85;
        Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                 v28,
                 (Il2CppObject *)StringLiteral_1311/*"2"*/,
                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                                   v41,
                                                                                   v39,
                                                                                   wearesDispLimitCount,
                                                                                   Item,
                                                                                   0);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
          goto LABEL_85;
      }
      if ( !entity )
        goto LABEL_100;
      EventIndividuality = SkillLvEntity__GetEventIndividuality(
                             this,
                             v24,
                             eventId,
                             v43->fields.questId,
                             (System_Int32_array *)entity[5].klass,
                             (FunctionMaster_o *)v17,
                             (FunctionGroupMaster_o *)v19,
                             v32);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v43,
                                                                                 questPhaseIndividualityList,
                                                                                 EventIndividuality,
                                                                                 0);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
                v28,
                (Il2CppObject *)StringLiteral_13745/*"Target"*/,
                (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          goto LABEL_93;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v28,
                                                                                   (Il2CppObject *)StringLiteral_13745/*"Target"*/,
                                                                                   (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList != 1 || !v37 )
          goto LABEL_93;
      }
      goto LABEL_85;
    case 113:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                                                                 (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                                                                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                                                                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !(_DWORD)QuestPhaseIndividualList )
        goto LABEL_85;
      if ( !entity )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v43,
                                                                                 questPhaseIndividualityList,
                                                                                 (System_Int32_array *)entity[5].klass,
                                                                                 0);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      if ( !v41 )
        goto LABEL_99;
      Individuality = ServantEntity__getIndividuality(v41, v39, wearesDispLimitCount, 0);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !Master_object )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster__GetIndividualityList_43088316(
                                                                                 Master_object,
                                                                                 Individuality,
                                                                                 0);
      if ( !QuestPhaseIndividualList )
        goto LABEL_100;
      if ( QuestPhaseIndividualList->fields._MasterName_k__BackingField )
        goto LABEL_93;
      goto LABEL_85;
    case 116:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                                                                 (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      goto LABEL_83;
    case 117:
    case 118:
      goto LABEL_84;
    case 129:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                                                                 (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      v35 = &StringLiteral_1311/*"2"*/;
      goto LABEL_79;
    case 132:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                                                                 (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      v35 = &StringLiteral_1372/*"3"*/;
LABEL_79:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)*v35,
                                                                                 (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      goto LABEL_83;
    default:
      goto LABEL_85;
  }
}


bool SkillLvEntity__getEventUpVal_43603724(
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
  Il2CppObject *Master_object; // x26
  Il2CppObject *v14; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  il2cpp_array_size_t max_length; // x8
  struct System_Int32_array *v18; // x9
  SkillLvEntity_o *v19; // x22
  unsigned __int64 v20; // x23
  int32_t v21; // w20
  int32_t v22; // w29
  EventUpValInfo_o *v23; // x8
  ServantLimitEntity_o *v24; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v26; // x19
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *v28; // x8
  struct EventUpValSetupInfo_o *v29; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_object__int__o *v31; // x21
  int monitor; // w20
  const MethodInfo *v33; // x2
  int *klass; // x3
  const MethodInfo *v35; // x2
  struct System_Int32_array *v36; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  int32_t v38; // w24
  Il2CppObject *v39; // x24
  EventUpValInfo_o *v40; // x8
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x7
  EventUpValInfo_o *v43; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w24
  int32_t v46; // w0
  struct EventUpValSetupInfo_o *v47; // x8
  SkillLvEntity_o *v48; // x2
  SkillEntity_o *v49; // x24
  SkillLvEntity_o *v50; // x20
  System_Int32_array *ActIndividuality; // x24
  int32_t v52; // w20
  const MethodInfo *v53; // x2
  int32_t v54; // w8
  int32_t v55; // w9
  int32_t v56; // w20
  Il2CppObject *v57; // x24
  EventDropUpValInfo_o *v58; // x28
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  const MethodInfo *v69; // x2
  Il2CppObject *v70; // x24
  int32_t v71; // w28
  EventDropUpValInfo_o *v72; // x20
  int32_t v73; // w1
  EventDropUpValInfo_o *v74; // x0
  bool v75; // w2
  Il2CppObject *v76; // x24
  int32_t v77; // w1
  EventDropUpValInfo_o *v78; // x0
  bool v79; // w2
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  Il2CppObject *v86; // x24
  EventUpValInfo_o *v87; // x8
  Il2CppObject *v88; // x28
  int32_t Item; // w24
  Il2CppClass *v90; // x27
  const char *namespaze; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x28
  unsigned __int64 v93; // x24
  int32_t lv; // w20
  char v95; // w8
  Il2CppObject *v96; // x1
  Il2CppObject *v97; // x24
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  Il2CppObject *v102; // x24
  EventDropUpValInfo_o *v103; // x21
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  __int64 v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  __int64 v113; // x8
  Il2CppObject *v114; // x20
  __int64 v115; // x24
  UserServantEntity_o *HeroineData; // x0
  int32_t v118; // [xsp+Ch] [xbp-F4h]
  bool v119; // [xsp+10h] [xbp-F0h]
  bool v120; // [xsp+14h] [xbp-ECh]
  ServantEntity_o *v121; // [xsp+18h] [xbp-E8h]
  EventPointBuffEntity_o *value; // [xsp+20h] [xbp-E0h]
  SkillLvEntity_o *valuea; // [xsp+20h] [xbp-E0h]
  int32_t valueb; // [xsp+20h] [xbp-E0h]
  __int64 valuec; // [xsp+20h] [xbp-E0h]
  int32_t v126; // [xsp+2Ch] [xbp-D4h]
  char v127; // [xsp+30h] [xbp-D0h]
  EventDropUpValInfo_o *v128; // [xsp+30h] [xbp-D0h]
  EventDropUpValInfo_o *v129; // [xsp+30h] [xbp-D0h]
  EventDropUpValInfo_o *v130; // [xsp+30h] [xbp-D0h]
  struct System_Int32_array *v132; // [xsp+40h] [xbp-C0h]
  char v133; // [xsp+4Ch] [xbp-B4h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+50h] [xbp-B0h]
  SkillLvEntity_o *v135; // [xsp+58h] [xbp-A8h]
  Il2CppObject *funcGroupMaster; // [xsp+70h] [xbp-90h]
  FunctionGroupEntity_o *v140; // [xsp+80h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-78h] BYREF
  int32_t actMaxRarity; // [xsp+94h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  v12 = this;
  if ( (byte_4D3159B & 1) == 0 )
  {
    sub_1C93AD4(&BuffList_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C93AD4(&EventDropUpValInfo_TypeInfo);
    sub_1C93AD4(&Individuality_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&StringLiteral_10056/*"OnlyMaxFuncGroupId"*/);
    sub_1C93AD4(&StringLiteral_1372/*"3"*/);
    sub_1C93AD4(&StringLiteral_1311/*"2"*/);
    sub_1C93AD4(&StringLiteral_13745/*"Target"*/);
    sub_1C93AD4(&StringLiteral_1166/*"1"*/);
    sub_1C93AD4(&StringLiteral_6253/*"EventId"*/);
    this = (SkillLvEntity_o *)sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D3159B = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  v140 = 0;
  entity = 0;
  if ( !*eventUpVallInfo )
    goto LABEL_289;
  if ( (*eventUpVallInfo)->fields.setupInfo && v12->fields.funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
    funcGroupMaster = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( !*eventUpVallInfo )
      goto LABEL_289;
    v135 = this;
    if ( (*eventUpVallInfo)->fields.svtId < 1 )
    {
      v14 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !*eventUpVallInfo || !this )
        goto LABEL_289;
      v14 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (*eventUpVallInfo)->fields.svtId,
              (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    this = (SkillLvEntity_o *)SkillLvEntity__getValues(v12, (const MethodInfo *)eventUpVallInfo);
    if ( !*eventUpVallInfo )
      goto LABEL_289;
    setupInfo = (*eventUpVallInfo)->fields.setupInfo;
    if ( !setupInfo )
      goto LABEL_289;
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_289;
    v132 = eventIdList;
    max_length = eventIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v121 = (ServantEntity_o *)v14;
      v127 = 0;
      v119 = isOwner;
      v120 = v14 == 0 || isEquipOnly;
      v18 = v132;
      v19 = this;
      v20 = 0;
      v21 = exclusionEventId;
      v126 = exclusionEventId;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)max_length )
LABEL_290:
          sub_1C93D34(this);
        v22 = v18->m_Items[v20];
        if ( v22 != v21 )
          break;
LABEL_285:
        LODWORD(max_length) = v18->max_length;
        if ( (__int64)++v20 >= (int)max_length )
          return v127 & 1;
      }
      v23 = *eventUpVallInfo;
      if ( *eventUpVallInfo )
      {
        if ( v23->fields.equipSvtId < 1 )
        {
          v133 = 0;
        }
        else
        {
          this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_289;
          this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
          if ( !*eventUpVallInfo )
            goto LABEL_289;
          if ( !this )
            goto LABEL_289;
          v24 = ServantLimitMaster__GetEntity(
                  (ServantLimitMaster_o *)this,
                  (*eventUpVallInfo)->fields.svtId,
                  (*eventUpVallInfo)->fields.limitCount,
                  0);
          this = (SkillLvEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !*eventUpVallInfo )
            goto LABEL_289;
          if ( !v24 )
            goto LABEL_289;
          if ( !this )
            goto LABEL_289;
          this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                      (PartyOrganizationUtility_o *)this,
                                      &skillName,
                                      &actMaxRarity,
                                      (*eventUpVallInfo)->fields.svtId,
                                      v24->fields.rarity,
                                      (*eventUpVallInfo)->fields.equipSvtId,
                                      v22,
                                      0);
          v133 = (char)this;
          v23 = *eventUpVallInfo;
          if ( !*eventUpVallInfo )
            goto LABEL_289;
        }
        this = (SkillLvEntity_o *)v23->fields.setupInfo;
        if ( !this )
          goto LABEL_289;
        this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                    (EventUpValSetupInfo_o *)this,
                                    v22,
                                    0);
        funcId = v12->fields.funcId;
        questPhaseIndividualityList = (System_Int32_array *)this;
        if ( !funcId )
          goto LABEL_289;
        v26 = 0;
        while ( 1 )
        {
          max_length_low = LODWORD(funcId->max_length);
          if ( (__int64)v26 >= (int)max_length_low )
          {
            v18 = v132;
            v21 = v126;
            goto LABEL_285;
          }
          if ( v26 >= max_length_low )
            goto LABEL_290;
          if ( !Master_object )
            goto LABEL_289;
          this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      funcId->m_Items[v26],
                                      (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_274;
          if ( isFuncGroup )
          {
            v28 = v12->fields.funcId;
            if ( !v28 )
              goto LABEL_289;
            if ( v26 >= LODWORD(v28->max_length) )
              goto LABEL_290;
            this = (SkillLvEntity_o *)funcGroupMaster;
            if ( !funcGroupMaster )
              goto LABEL_289;
            this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                        (FunctionGroupMaster_o *)funcGroupMaster,
                                        &v140,
                                        v28->m_Items[v26],
                                        v22,
                                        0);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_274;
            this = (SkillLvEntity_o *)v140;
            if ( !v140 )
              goto LABEL_289;
            this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v140, 0);
            if ( (_DWORD)this == 1 )
            {
              if ( !*eventUpVallInfo )
                goto LABEL_289;
              v29 = (*eventUpVallInfo)->fields.setupInfo;
              this = v135;
              if ( !v29 || !v135 )
                goto LABEL_289;
              this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                          (EventQuestMaster_o *)v135,
                                          v22,
                                          v29->fields.questId,
                                          v29->fields.questPhase,
                                          12,
                                          nowTime,
                                          0);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_274;
            }
          }
          if ( !v19 )
            goto LABEL_289;
          chargeTurn = (unsigned int)v19->fields.chargeTurn;
          if ( (__int64)v26 >= (int)chargeTurn )
            goto LABEL_274;
          if ( v26 >= chargeTurn )
            goto LABEL_290;
          v31 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&v19->fields.funcId + v26);
          if ( !v31 )
            goto LABEL_274;
          if ( !entity )
            goto LABEL_289;
          monitor = (int)entity[1].monitor;
          if ( monitor > 104 )
          {
            switch ( monitor )
            {
              case 105:
              case 106:
              case 107:
              case 108:
              case 114:
              case 115:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                            (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( v22 != (_DWORD)this )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v31,
                                              (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                              (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !(_DWORD)this )
                    goto LABEL_274;
                }
                if ( isSupport )
                {
                  this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v31,
                                              v33);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    goto LABEL_274;
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                if ( !entity )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            (System_Int32_array *)entity[5].klass,
                                            0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                if ( monitor == 107 )
                {
                  if ( !entity )
                    goto LABEL_289;
                  klass = (int *)entity[2].monitor;
                  if ( !klass || klass[6] < 1 )
                    goto LABEL_213;
                }
                else
                {
                  if ( monitor != 105 )
                    goto LABEL_213;
                  if ( !entity )
                    goto LABEL_289;
                  klass = (int *)entity[2].klass;
                  if ( !klass || !*((_QWORD *)klass + 3) )
                    goto LABEL_213;
                }
                if ( !v121 )
                  goto LABEL_274;
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_43376636(
                                            v121,
                                            (*eventUpVallInfo)->fields.limitCount,
                                            (*eventUpVallInfo)->fields.dispLimitCount,
                                            (System_Int32_array *)klass,
                                            0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
LABEL_213:
                v88 = entity;
                Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                         v31,
                         (Il2CppObject *)StringLiteral_1116/*"0"*/,
                         (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v128 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_42446848(v128, v22, (FunctionEntity_o *)v88, Item, 0);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v31,
                       (Il2CppObject *)StringLiteral_1166/*"1"*/,
                       (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v31,
                                              (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                              (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  v40 = *eventUpVallInfo;
                  if ( !*eventUpVallInfo )
                    goto LABEL_289;
LABEL_215:
                  v72 = v128;
                  if ( !v128 )
                    goto LABEL_289;
                  v77 = (int)this;
                  v78 = v128;
                  v79 = v40->fields.equipSvtId > 0;
LABEL_195:
                  EventDropUpValInfo__SetAddCount(v78, v77, v79, v133 & 1, 0);
                }
                else
                {
LABEL_233:
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v31,
                                              (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                              (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  v72 = v128;
                  if ( (_DWORD)this == 2 )
                  {
                    v96 = (Il2CppObject *)StringLiteral_1311/*"2"*/;
LABEL_235:
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v31,
                                                v96,
                                                (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v72 )
                      goto LABEL_289;
                    EventDropUpValInfo__SetRateCount(
                      v72,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v133 & 1,
                      0);
                  }
                }
                break;
              case 109:
              case 110:
              case 112:
              case 117:
              case 118:
              case 119:
              case 120:
              case 121:
              case 122:
              case 123:
              case 124:
              case 125:
              case 126:
              case 127:
              case 128:
                goto LABEL_274;
              case 111:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                            (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v31,
                                            (Il2CppObject *)StringLiteral_6253/*"EventId"*/,
                                            (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_6253/*"EventId"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( v22 != (_DWORD)this )
                  goto LABEL_274;
                if ( isSupport )
                {
                  this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v31,
                                              v41);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    goto LABEL_274;
                }
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (int)this < 1 )
                  goto LABEL_118;
                if ( !v121 )
                  goto LABEL_274;
                v43 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                limitCount = v43->fields.limitCount;
                dispLimitCount = v43->fields.dispLimitCount;
                v46 = System_Collections_Generic_Dictionary_object__int___get_Item(
                        v31,
                        (Il2CppObject *)StringLiteral_1311/*"2"*/,
                        (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v121, limitCount, dispLimitCount, v46, 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
LABEL_118:
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                v47 = (*eventUpVallInfo)->fields.setupInfo;
                if ( !v47 )
                  goto LABEL_289;
                if ( !entity )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                            v12,
                                            v26,
                                            v22,
                                            v47->fields.questId,
                                            (System_Int32_array *)entity[5].klass,
                                            (FunctionMaster_o *)Master_object,
                                            (FunctionGroupMaster_o *)funcGroupMaster,
                                            v42);
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                v48 = this;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            (System_Int32_array *)v48,
                                            0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)*eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                if ( !EventUpValInfo__IsEquipSvtId((EventUpValInfo_o *)this, 0) )
                  goto LABEL_138;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
                if ( !this )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            v12->fields.skillId,
                                            (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                v49 = (SkillEntity_o *)this;
                this = (SkillLvEntity_o *)v121;
                if ( !v121 )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                            v121,
                                            (*eventUpVallInfo)->fields.limitCount,
                                            (*eventUpVallInfo)->fields.dispLimitCount,
                                            0);
                if ( !v49 )
                  goto LABEL_289;
                v50 = this;
                ActIndividuality = SkillEntity__getActIndividuality(v49, (const MethodInfo *)eventUpVallInfo);
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                            (System_Int32_array *)v50,
                                            ActIndividuality,
                                            0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v121, 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_138;
                if ( !entity )
                  goto LABEL_289;
                if ( HIDWORD(entity[1].monitor) )
                  goto LABEL_138;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v114 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
                v115 = *(_QWORD *)&v121->fields.id.fields.currentCryptoKey;
                *(_QWORD *)&v144.fields.fakeValue = *(_QWORD *)&v121->fields.id.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  valuec = *(_QWORD *)&v121->fields.id.fields.fakeValue;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v144.fields.fakeValue = valuec;
                }
                *(_QWORD *)&v144.fields.currentCryptoKey = v115;
                this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v144, 0);
                if ( !v114 )
                  goto LABEL_289;
                HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v114, (int32_t)this, 0);
                if ( HeroineData )
                {
                  this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_274;
                }
LABEL_138:
                if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                       v31,
                       (Il2CppObject *)StringLiteral_13745/*"Target"*/,
                       (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v31,
                                              (Il2CppObject *)StringLiteral_13745/*"Target"*/,
                                              (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  v52 = (int)this;
                  if ( (_DWORD)this == 1 && !v119 )
                    goto LABEL_274;
                }
                else
                {
                  v52 = 0;
                }
                if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                       v31,
                       (Il2CppObject *)StringLiteral_10056/*"OnlyMaxFuncGroupId"*/,
                       (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                {
                  valueb = System_Collections_Generic_Dictionary_object__int___get_Item(
                             v31,
                             (Il2CppObject *)StringLiteral_10056/*"OnlyMaxFuncGroupId"*/,
                             (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                }
                else
                {
                  valueb = 0;
                }
                v102 = entity;
                v130 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_42446848(v130, v22, (FunctionEntity_o *)v102, v52, 0);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v31,
                       (Il2CppObject *)StringLiteral_1116/*"0"*/,
                       (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v31,
                                              (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                              (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo )
                    goto LABEL_289;
                  v103 = v130;
                  if ( !v130 )
                    goto LABEL_289;
                  EventDropUpValInfo__SetAddCount(
                    v130,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v133 & 1,
                    0);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v31,
                                              (Il2CppObject *)StringLiteral_1116/*"0"*/,
                                              (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v31,
                                                (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                                (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo )
                      goto LABEL_289;
                    v103 = v130;
                    if ( !v130 )
                      goto LABEL_289;
                    EventDropUpValInfo__SetRateCount(
                      v130,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v133 & 1,
                      0);
                  }
                  else
                  {
                    v103 = v130;
                    if ( !v130 )
                      goto LABEL_289;
                  }
                }
                v103->fields.groupId = valueb;
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_289;
                v110 = *(_QWORD *)&this->fields.skillId;
                v111 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                ++this->fields.priority;
                if ( !v110 )
                  goto LABEL_289;
                v112 = this->fields.chargeTurn;
                if ( (unsigned int)v112 >= *(_DWORD *)(v110 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v103,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
                }
                else
                {
                  v113 = v110 + 8 * v112;
                  this->fields.chargeTurn = v112 + 1;
                  *(_QWORD *)(v113 + 32) = v103;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)(v113 + 32),
                    (int32_t)v103,
                    v104,
                    v105,
                    v106,
                    v107,
                    v108,
                    v109);
                }
                v127 = 1;
                goto LABEL_274;
              case 113:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                            (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( v22 != (_DWORD)this )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1116/*"0"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v31,
                                              (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                              (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !(_DWORD)this )
                    goto LABEL_274;
                }
                if ( isSupport )
                {
                  this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v31,
                                              v53);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    goto LABEL_274;
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                if ( !entity )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            (System_Int32_array *)entity[5].klass,
                                            0);
                v127 |= (unsigned __int8)this;
                if ( !v121 || ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                            v121,
                                            (*eventUpVallInfo)->fields.limitCount,
                                            (*eventUpVallInfo)->fields.dispLimitCount,
                                            0);
                actMaxRarity = 0;
                if ( !this )
                  goto LABEL_289;
                v54 = this->fields.chargeTurn;
                if ( v54 < 1 )
                  goto LABEL_251;
                v55 = 0;
                valuea = this;
                while ( v55 < (unsigned int)v54 )
                {
                  v56 = *((_DWORD *)&this->fields.funcId + v55);
                  v57 = entity;
                  v58 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
                  EventDropUpValInfo___ctor_42446848(v58, v22, (FunctionEntity_o *)v57, v56, 0);
                  if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                         v31,
                         (Il2CppObject *)StringLiteral_1116/*"0"*/,
                         (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v31,
                                                (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                                (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v58 )
                      goto LABEL_289;
                    EventDropUpValInfo__SetAddCount(
                      v58,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v133 & 1,
                      0);
                  }
                  else
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v31,
                                                (Il2CppObject *)StringLiteral_1116/*"0"*/,
                                                (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( (_DWORD)this == 2 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v31,
                                                  (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                                  (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !*eventUpVallInfo || !v58 )
                        goto LABEL_289;
                      EventDropUpValInfo__SetRateCount(
                        v58,
                        (int32_t)this,
                        (*eventUpVallInfo)->fields.equipSvtId > 0,
                        v133 & 1,
                        0);
                    }
                  }
                  if ( !*eventUpVallInfo )
                    goto LABEL_289;
                  this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                  if ( !this )
                    goto LABEL_289;
                  v65 = *(_QWORD *)&this->fields.skillId;
                  v66 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                  ++this->fields.priority;
                  if ( !v65 )
                    goto LABEL_289;
                  v67 = this->fields.chargeTurn;
                  if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)v58,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v68 = v65 + 8 * v67;
                    this->fields.chargeTurn = v67 + 1;
                    *(_QWORD *)(v68 + 32) = v58;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v68 + 32), (int32_t)v58, v59, v60, v61, v62, v63, v64);
                  }
                  this = valuea;
                  v127 = 1;
                  v55 = actMaxRarity + 1;
                  actMaxRarity = v55;
                  v54 = valuea->fields.chargeTurn;
                  if ( v55 >= v54 )
                    goto LABEL_274;
                }
                goto LABEL_290;
              case 116:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                            (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                if ( isSupport )
                {
                  this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v31,
                                              v69);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    goto LABEL_274;
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                if ( !entity )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            (System_Int32_array *)entity[5].klass,
                                            0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                v70 = entity;
                v71 = System_Collections_Generic_Dictionary_object__int___get_Item(
                        v31,
                        (Il2CppObject *)StringLiteral_1116/*"0"*/,
                        (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v72 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_42446848(v72, v22, (FunctionEntity_o *)v70, v71, 0);
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo || !v72 )
                  goto LABEL_289;
                v73 = (int)this;
                v74 = v72;
                v75 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                goto LABEL_205;
              case 129:
                if ( isSupport )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                            (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( v22 != (_DWORD)this )
                  goto LABEL_274;
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                if ( !entity )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            (System_Int32_array *)entity[5].klass,
                                            0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                v76 = entity;
                v129 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor(v129, v22, (FunctionEntity_o *)v76, 0);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v31,
                       (Il2CppObject *)StringLiteral_1116/*"0"*/,
                       (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v31,
                                              (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                              (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo )
                    goto LABEL_289;
                  v72 = v129;
                  if ( !v129 )
                    goto LABEL_289;
                  v77 = (int)this;
                  v78 = v129;
                  v79 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                  goto LABEL_195;
                }
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1116/*"0"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v72 = v129;
                if ( (_DWORD)this != 2 )
                  goto LABEL_245;
                v96 = (Il2CppObject *)StringLiteral_1166/*"1"*/;
                goto LABEL_235;
              default:
                if ( monitor != 132 )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                            (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( v22 != (_DWORD)this )
                  goto LABEL_274;
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                if ( !entity )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            (System_Int32_array *)entity[5].klass,
                                            0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_274;
                v39 = entity;
                v128 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor(v128, v22, (FunctionEntity_o *)v39, 0);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v31,
                       (Il2CppObject *)StringLiteral_1166/*"1"*/,
                       (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
                  goto LABEL_233;
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1311/*"2"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v40 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                goto LABEL_215;
            }
            goto LABEL_245;
          }
          if ( monitor == 1 )
            goto LABEL_78;
          if ( monitor != 7 )
            break;
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                      v31,
                                      (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                      (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                        v31,
                                        (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                        (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( (_DWORD)this )
            {
              if ( !*eventUpVallInfo )
                goto LABEL_289;
              if ( !entity )
                goto LABEL_289;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_289;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v86 = entity;
                v72 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor(v72, v22, (FunctionEntity_o *)v86, 0);
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v31,
                                            (Il2CppObject *)StringLiteral_1166/*"1"*/,
                                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo || !v72 )
                  goto LABEL_289;
                v73 = (int)this;
                v74 = v72;
                v75 = (*eventUpVallInfo)->fields.equipSvtId > 0;
LABEL_205:
                EventDropUpValInfo__SetRateCount(v74, v73, v75, v133 & 1, 0);
                v87 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_289;
                goto LABEL_246;
              }
            }
          }
LABEL_274:
          funcId = v12->fields.funcId;
          ++v26;
          if ( !funcId )
            goto LABEL_289;
        }
        if ( monitor != 16 )
          goto LABEL_274;
LABEL_78:
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                    v31,
                                    (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                    (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !isSupport
            || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v31,
                                            v35),
                ((unsigned __int8)this & 1) == 0) )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
            v36 = v12->fields.funcId;
            if ( !v36 )
              goto LABEL_289;
            if ( v26 >= LODWORD(v36->max_length) )
              goto LABEL_290;
            if ( !this )
              goto LABEL_289;
            EnableEntity = EventPointBuffMaster__GetEnableEntity(
                             (EventPointBuffMaster_o *)this,
                             v22,
                             v36->m_Items[v26],
                             0);
            this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                        v31,
                                        (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                        (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( EnableEntity || (_DWORD)this )
            {
              if ( !*eventUpVallInfo )
                goto LABEL_289;
              if ( !entity )
                goto LABEL_289;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_289;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v120 )
                  goto LABEL_96;
                if ( !*eventUpVallInfo || !entity )
                  goto LABEL_289;
                this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_43376636(
                                            v121,
                                            (*eventUpVallInfo)->fields.limitCount,
                                            (*eventUpVallInfo)->fields.dispLimitCount,
                                            (System_Int32_array *)entity[2].monitor,
                                            0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
LABEL_96:
                  value = EnableEntity;
                  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                         v31,
                         (Il2CppObject *)StringLiteral_10056/*"OnlyMaxFuncGroupId"*/,
                         (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                  {
                    v38 = System_Collections_Generic_Dictionary_object__int___get_Item(
                            v31,
                            (Il2CppObject *)StringLiteral_10056/*"OnlyMaxFuncGroupId"*/,
                            (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  }
                  else
                  {
                    v38 = 0;
                  }
                  this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !this )
                    goto LABEL_289;
                  this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_BuffMaster___);
                  if ( !entity )
                    goto LABEL_289;
                  v90 = entity[2].klass;
                  if ( !v90 )
                    goto LABEL_289;
                  namespaze = v90->_1.namespaze;
                  v118 = v38;
                  if ( (int)namespaze < 1 )
                  {
                    v95 = 0;
                  }
                  else
                  {
                    v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
                    v93 = 0;
                    while ( 1 )
                    {
                      if ( v93 >= (unsigned int)namespaze )
                        goto LABEL_290;
                      if ( !v92 )
                        goto LABEL_289;
                      this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                  v92,
                                                  *((_DWORD *)&v90->_1.byval_arg.data + v93),
                                                  (const MethodInfo_3463274 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                      if ( !this )
                        goto LABEL_289;
                      lv = this->fields.lv;
                      if ( !BuffList_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                      this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0);
                      if ( ((unsigned __int8)this & 1) != 0 )
                        break;
                      LODWORD(namespaze) = v90->_1.namespaze;
                      if ( (__int64)++v93 >= (int)namespaze )
                      {
                        v95 = 0;
                        goto LABEL_239;
                      }
                    }
                    v95 = 1;
                  }
LABEL_239:
                  if ( ((unsigned __int8)v95 & (value != 0)) != 0 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v31,
                                                (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                                (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !value )
                      goto LABEL_289;
                    System_Collections_Generic_Dictionary_object__int___set_Item(
                      v31,
                      (Il2CppObject *)StringLiteral_1372/*"3"*/,
                      value->fields.value + (_DWORD)this,
                      (const MethodInfo_3525CC4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                  }
                  v97 = entity;
                  v72 = (EventDropUpValInfo_o *)sub_1C93D20(EventDropUpValInfo_TypeInfo);
                  EventDropUpValInfo___ctor(v72, v22, (FunctionEntity_o *)v97, 0);
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v31,
                                              (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                              (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v72 )
                    goto LABEL_289;
                  EventDropUpValInfo__SetRateCount(
                    v72,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v133 & 1,
                    0);
                  v72->fields.groupId = v118;
LABEL_245:
                  v87 = *eventUpVallInfo;
                  if ( !*eventUpVallInfo )
                    goto LABEL_289;
LABEL_246:
                  this = (SkillLvEntity_o *)v87->fields.dropList;
                  if ( !this )
                    goto LABEL_289;
                  v98 = *(_QWORD *)&this->fields.skillId;
                  v99 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                  ++this->fields.priority;
                  if ( !v98 )
                    goto LABEL_289;
                  v100 = this->fields.chargeTurn;
                  if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)v72,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v101 = v98 + 8 * v100;
                    this->fields.chargeTurn = v100 + 1;
                    *(_QWORD *)(v101 + 32) = v72;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v101 + 32), (int32_t)v72, v80, v81, v82, v83, v84, v85);
                  }
LABEL_251:
                  v127 = 1;
                  goto LABEL_274;
                }
              }
            }
          }
        }
        goto LABEL_274;
      }
LABEL_289:
      sub_1C93D2C(this, eventUpVallInfo);
    }
  }
  v127 = 0;
  return v127 & 1;
}


int32_t SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  SkillLvEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4D315A3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&StringLiteral_18830/*"down"*/);
    byte_4D315A3 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18830/*"down"*/,
           (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_18830/*"down"*/,
                                                                                (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C93D2C(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1C940C8(Item);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v8, v9);
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
  __int64 v7; // x3
  SkillLvEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4D315A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&StringLiteral_24745/*"up"*/);
    byte_4D315A2 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_24745/*"up"*/,
           (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_24745/*"up"*/,
                                                                                (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C93D2C(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1C940C8(Item);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v8, v9);
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

  if ( (byte_4D3159D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_10754/*"PlayVoiceNo"*/);
    byte_4D3159D = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10754/*"PlayVoiceNo"*/,
            (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_1C93D2C(0, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10754/*"PlayVoiceNo"*/,
                                  (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C940C8(result);
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
  int max_length; // w21
  __int64 klass; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_string__int__array *v7; // x20
  unsigned int v8; // w25
  struct System_String_array *v9; // x8
  int v10; // w29
  __int64 v11; // x22
  System_Collections_Generic_Dictionary_object__int__o *v12; // x24
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppClass **v19; // x23
  GrandQuestFolderBoardItem_o *v20; // x23
  int32_t v21; // w8
  System_String_o *v22; // x24
  GrandQuestFolderBoardItem_c *v23; // x24
  int32_t v24; // w2
  const MethodInfo_3525CC4 *v25; // x3
  Il2CppObject *v26; // x1
  __int64 v27; // x24
  __int64 v29; // x0
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D31593 & 1) == 0 )
  {
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__int____TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D31593 = 1;
  }
  *(_QWORD *)result = 0;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_1C93B7C(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1);
  max_length = svals->max_length;
  klass = sub_1C93B7C(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v7 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = this->fields.svals;
      if ( !v9 )
        goto LABEL_37;
      if ( v8 >= LODWORD(v9->max_length) )
        goto LABEL_38;
      klass = (__int64)v9->m_Items[v8];
      if ( !klass
        || (klass = (__int64)System_String__Replace_64472288(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15904/*"["*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0)) == 0
        || (klass = (__int64)System_String__Replace_64472288(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_16156/*"]"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0)) == 0
        || (klass = (__int64)System_String__Split((System_String_o *)klass, 0x2Cu, 0, 0)) == 0
        || (v10 = *(_DWORD *)(klass + 24),
            v11 = klass,
            v12 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_object__int____ctor(
              v12,
              (const MethodInfo_3525324 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v7) )
      {
LABEL_37:
        sub_1C93D2C(klass, v6);
      }
      if ( v12 )
      {
        klass = sub_1C93C10(v12, v7->obj.klass->_1.element_class);
        if ( !klass )
        {
          v29 = sub_1C93D50(0);
          sub_1C93BFC(v29, 0);
        }
      }
      if ( v8 >= LODWORD(v7->max_length) )
LABEL_38:
        sub_1C93D34(klass);
      v19 = &v7->obj.klass + (int)v8;
      v19[4] = (Il2CppClass *)v12;
      v20 = (GrandQuestFolderBoardItem_o *)(v19 + 4);
      sub_1C93A78(v20, (int32_t)v12, v13, v14, v15, v16, v17, v18);
      result[1] = 0;
      if ( v10 >= 1 )
        break;
LABEL_33:
      if ( ++v8 == max_length )
        return v7;
    }
    v21 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v21 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_38;
      v22 = *(System_String_o **)(v11 + 8LL * v21 + 32);
      klass = System_Int32__TryParse(v22, result, 0);
      if ( (klass & 1) != 0 )
        break;
      if ( !v22 )
        goto LABEL_37;
      klass = (__int64)System_String__Split(v22, 0x3Au, 0, 0);
      if ( !klass )
        goto LABEL_37;
      v27 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0);
        if ( (klass & 1) != 0 )
        {
          if ( v8 >= LODWORD(v7->max_length) || !*(_DWORD *)(v27 + 24) )
            goto LABEL_38;
          klass = (__int64)v20->klass;
          if ( !v20->klass )
            goto LABEL_37;
          v24 = result[0];
          v26 = *(Il2CppObject **)(v27 + 32);
          v25 = (const MethodInfo_3525CC4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_23:
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)klass,
            v26,
            v24,
            v25);
        }
      }
      v21 = ++result[1];
      if ( result[1] >= v10 )
        goto LABEL_33;
    }
    if ( v8 >= LODWORD(v7->max_length) )
      goto LABEL_38;
    v23 = v20->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0);
    if ( !v23 )
      goto LABEL_37;
    v24 = result[0];
    v25 = (const MethodInfo_3525CC4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v26 = (Il2CppObject *)klass;
    klass = (__int64)v23;
    goto LABEL_23;
  }
  return v7;
}


System_String_o *SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D3159C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_15460/*"VoiceAssetName"*/);
    byte_4D3159C = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15460/*"VoiceAssetName"*/,
            (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_1C93D2C(0, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15460/*"VoiceAssetName"*/,
                                  (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C940C8(result);
      return 0;
    }
  }
  return result;
}


float SkillLvEntity__getVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v4; // s8
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  float result; // s0
  SkillLvEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4D315A0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&StringLiteral_15462/*"VoiceVolume"*/);
    byte_4D315A0 = 1;
  }
  script = this->fields.script;
  v4 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15462/*"VoiceVolume"*/,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15462/*"VoiceVolume"*/,
                                                                            (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C93D2C(Item, v5);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v7, v8) / 1000.0;
  sub_1C940C8(Item);
  SkillLvEntity__getMovePositionUp(v10, v11);
  return result;
}


bool SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D3159E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&StringLiteral_10755/*"PlayVoiceWait"*/);
    byte_4D3159E = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10755/*"PlayVoiceWait"*/,
                       (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v8; // x3
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x2
  __int64 v16; // x3
  SkillLvEntity_o *v17; // x0
  System_String_o *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4D315BF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&StringLiteral_16835/*"afterClearBgmId"*/);
    sub_1C93AD4(&StringLiteral_21014/*"indv"*/);
    sub_1C93AD4(&StringLiteral_17253/*"beforeClearBgmId"*/);
    sub_1C93AD4(&StringLiteral_23150/*"questPhase"*/);
    sub_1C93AD4(&StringLiteral_23146/*"questId"*/);
    byte_4D315BF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_21014/*"indv"*/,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v7, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_23146/*"questId"*/,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_23150/*"questPhase"*/,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_17253/*"beforeClearBgmId"*/,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16835/*"afterClearBgmId"*/,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_1C93D2C(Item, v6);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16);
    return;
  }
LABEL_16:
  sub_1C940C8(Item);
  SkillLvEntity__GetScriptIntParam(v17, v18, v19, v20);
}


void SkillLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D315C0 & 1) == 0 )
  {
    sub_1C93AD4(&SkillLvEntity___c_TypeInfo);
    byte_4D315C0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillLvEntity___c_TypeInfo->static_fields->__9 = (struct SkillLvEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SkillLvEntity___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
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
  if ( (byte_4D315C1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    byte_4D315C1 = 1;
  }
  v4 = 0;
  System_Nullable_int____ctor(
    (System_Nullable_int__o)&v4,
    v3 - 1,
    (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
  return v4;
}