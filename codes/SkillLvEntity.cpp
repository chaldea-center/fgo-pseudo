void SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38574 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C38574 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


void SkillLvEntity___ctor_42791708(SkillLvEntity_o *this, SkillLvEntity_o *srcEntity, const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Array_o *funcId; // x0
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  struct System_Int32_array *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Array_o *svals; // x0
  Il2CppObject *v15; // x0
  struct System_String_array *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_object__object__o *v20; // x21

  if ( (byte_4C38575 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object___ctor___77965624);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    byte_4C38575 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_1C32E7C(v5);
  *(_OWORD *)&this->fields.skillId = *(_OWORD *)&srcEntity->fields.skillId;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v9 = System_Array__Clone(funcId, 0)) != 0 )
  {
    v10 = v9;
    v11 = (struct System_Int32_array *)sub_1C32D5C(v9, int___TypeInfo);
    if ( !v11 )
      goto LABEL_12;
  }
  else
  {
    v11 = 0;
  }
  this->fields.funcId = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.funcId, (int32_t)v11, v6, v7);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v15 = System_Array__Clone(svals, 0);
  if ( !v15 )
    goto LABEL_13;
  v10 = v15;
  v16 = (struct System_String_array *)sub_1C32D5C(v15, string___TypeInfo);
  if ( v16 )
    goto LABEL_14;
LABEL_12:
  sub_1C3313C(v10);
LABEL_13:
  v16 = 0;
LABEL_14:
  this->fields.svals = v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svals, (int32_t)v16, v12, v13);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v20 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor_54887672(
      v20,
      script,
      (const MethodInfo_34584F8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___77965624);
  }
  else
  {
    v20 = 0;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.script, (int32_t)v20, v17, v18);
}


System_String_o *SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4C38573 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C38573 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_30DB578 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C38599 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_2116/*"ActNpcServantId"*/);
    byte_4C38599 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_2116/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C38590 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16651/*"actRarity"*/);
    byte_4C38590 = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16651/*"actRarity"*/, v2);
}


System_Int32_array *SkillLvEntity__GetAddIndiv(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x0
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_List_int__o *v9; // x20
  int32_t v10; // w21
  __int64 v11; // x2
  __int64 v12; // x3
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  SkillLvEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4C3858C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&StringLiteral_2152/*"AddIndiv"*/);
    byte_4C3858C = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_2152/*"AddIndiv"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v4 )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v4,
           (Il2CppObject *)StringLiteral_2152/*"AddIndiv"*/,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    v7 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
       ? (System_Collections_Generic_List_object__o *)Item
       : 0LL;
  }
  else
  {
    v7 = 0;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v7 )
    goto LABEL_26;
  if ( v7->fields._size < 1 )
  {
LABEL_24:
    if ( v9 )
      return System_Collections_Generic_List_int___ToArray(
               v9,
               (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_26:
    sub_1C32E7C(v4);
  }
  v10 = 0;
  while ( 1 )
  {
    v4 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v7,
                                                                      v10,
                                                                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v9 || !v4 )
      goto LABEL_26;
    if ( v4->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v4 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(v4, long_TypeInfo, v11, v12);
    klass = (int32_t)v4->klass;
    items = v9->fields._items;
    v15 = Method_System_Collections_Generic_List_int__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v9->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v9,
        klass,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v9->fields._size = size + 1;
      items->m_Items[size] = klass;
    }
    if ( ++v10 >= v7->fields._size )
      goto LABEL_24;
  }
  sub_1C3313C(v4);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v17, v18);
}


int32_t SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C38597 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16683/*"additionalSkillActorType"*/);
    byte_4C38597 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16683/*"additionalSkillActorType"*/, -1, v2);
}


int32_t SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C38595 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16684/*"additionalSkillId"*/);
    byte_4C38595 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16684/*"additionalSkillId"*/, -1, v2);
}


int32_t SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C38596 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16686/*"additionalSkillLv"*/);
    byte_4C38596 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16686/*"additionalSkillLv"*/, 1, v2);
}


EventDropUpValInfo_array *SkillLvEntity__GetAddStateAndFriendshipUpInfoArray(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x1
  struct System_Int32_array *funcId; // x8
  Il2CppObject **v8; // x26
  System_Collections_Generic_Dictionary_string__int__array *v9; // x22
  unsigned __int64 v10; // x28
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // x27
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v13; // x8
  System_Collections_Generic_Dictionary_object__int__o *v14; // x23
  Il2CppObject *v15; // x25
  int monitor; // w8
  EventDropUpValInfo_o *v17; // x24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool v20; // w8
  Il2CppObject **v21; // x29
  int32_t Item; // w25
  Il2CppObject *v23; // x26
  bool v24; // w8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  const MethodInfo_379A314 *v29; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C385A2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C32C20(&EventDropUpValInfo_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C32C20(&StringLiteral_9997/*"OnlyMaxFuncGroupId"*/);
    sub_1C32C20(&StringLiteral_13645/*"Target"*/);
    byte_4C385A2 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !this->fields.funcId )
  {
    if ( v3 )
    {
      v29 = (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__;
      return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(v3, v29);
    }
    goto LABEL_36;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  Values = SkillLvEntity__getValues(this, v6);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_36;
  v8 = (Il2CppObject **)&StringLiteral_9997/*"OnlyMaxFuncGroupId"*/;
  v9 = Values;
  v10 = 0;
  m_Items = Values->m_Items;
  while ( 1 )
  {
    max_length_low = LODWORD(funcId->max_length);
    if ( (__int64)v10 >= (int)max_length_low )
      break;
    if ( v10 >= max_length_low )
      goto LABEL_42;
    if ( !Master_object )
      goto LABEL_36;
    Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                           &entity,
                                                                           funcId->m_Items[v10],
                                                                           (const MethodInfo_3396884 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Values & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_36;
      v13 = LODWORD(v9->max_length);
      if ( (__int64)v10 >= (int)v13 )
        break;
      if ( v10 >= v13 )
LABEL_42:
        sub_1C32E84(Values);
      v14 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v10];
      if ( v14 )
      {
        v15 = entity;
        if ( !entity )
          goto LABEL_36;
        monitor = (int)entity[1].monitor;
        switch ( monitor )
        {
          case 1:
            goto LABEL_20;
          case 111:
            v21 = v8;
            if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                   (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v10],
                   (Il2CppObject *)StringLiteral_13645/*"Target"*/,
                   (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v14,
                       (Il2CppObject *)StringLiteral_13645/*"Target"*/,
                       (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            }
            else
            {
              Item = 0;
            }
            v23 = entity;
            v17 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
            EventDropUpValInfo___ctor_41617652(v17, 0, (FunctionEntity_o *)v23, Item, 0);
            v8 = v21;
            v24 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v14,
                    *v21,
                    (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            Values = 0;
            if ( v24 )
              Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v14,
                                                                                     *v21,
                                                                                     (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !v17 )
              goto LABEL_36;
            break;
          case 16:
LABEL_20:
            v17 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
            EventDropUpValInfo___ctor(v17, 0, (FunctionEntity_o *)v15, 0);
            v20 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v14,
                    *v8,
                    (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            Values = 0;
            if ( v20 )
              Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v14,
                                                                                     *v8,
                                                                                     (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !v17 )
              goto LABEL_36;
            break;
          default:
            goto LABEL_35;
        }
        v17->fields.groupId = (int)Values;
        if ( !v3 )
          goto LABEL_36;
        items = v3->fields._items;
        v26 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v17,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v17;
          sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v17, v18, v19);
        }
      }
    }
LABEL_35:
    funcId = this->fields.funcId;
    ++v10;
    if ( !funcId )
      goto LABEL_36;
  }
  if ( !v3 )
LABEL_36:
    sub_1C32E7C(Values);
  v29 = (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__;
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(v3, v29);
}


int32_t SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C38598 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17085/*"battleStartRemainingTurn"*/);
    byte_4C38598 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17085/*"battleStartRemainingTurn"*/, 0, v2);
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
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  int32_t dispLimitCount; // [xsp+4h] [xbp-9Ch]
  int32_t limitCount; // [xsp+8h] [xbp-98h]
  EventDropUpValInfo_o *v31; // [xsp+8h] [xbp-98h]
  ServantEntity_o *v32; // [xsp+10h] [xbp-90h]
  char individuality; // [xsp+1Ch] [xbp-84h]
  int32_t individualitya; // [xsp+1Ch] [xbp-84h]
  int32_t *p_revision; // [xsp+28h] [xbp-78h]
  FunctionGroupEntity_o *v37; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C3857D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C32C20(&EventDropUpValInfo_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C32C20(&StringLiteral_1318/*"2"*/);
    sub_1C32C20(&StringLiteral_13645/*"Target"*/);
    sub_1C32C20(&StringLiteral_1172/*"1"*/);
    sub_1C32C20(&StringLiteral_6221/*"EventId"*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C3857D = 1;
  }
  v37 = 0;
  entity = 0;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (FunctionGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *eventUpVallInfo )
    {
      v10 = Values;
      if ( (*eventUpVallInfo)->fields.svtId < 1 )
      {
        v32 = 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Values = (FunctionGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*eventUpVallInfo || !Values )
          goto LABEL_61;
        v32 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Values,
                                   (*eventUpVallInfo)->fields.svtId,
                                   (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                              (const MethodInfo_3396884 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                sub_1C32E84(Values);
              if ( !v10 )
                break;
              Values = (FunctionGroupMaster_o *)FunctionGroupMaster__TryGetEntity(v10, &v37, v15->m_Items[v13], 0, 0);
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
                                                      (Il2CppObject *)StringLiteral_6221/*"EventId"*/,
                                                      (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) == 0 )
                  {
                    if ( !entity )
                      break;
                    if ( LODWORD(entity[1].monitor) == 111 )
                    {
                      Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                          v17,
                                                          (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                                          (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
                        Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                            v17,
                                                            (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                                            (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        if ( (int)Values < 1 )
                          goto LABEL_41;
                        if ( v32 )
                        {
                          v18 = *eventUpVallInfo;
                          if ( !*eventUpVallInfo )
                            break;
                          dispLimitCount = v18->fields.dispLimitCount;
                          limitCount = v18->fields.limitCount;
                          Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                                   v17,
                                   (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                   (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          Values = (FunctionGroupMaster_o *)ServantEntity__IsIndividuality(
                                                              v32,
                                                              limitCount,
                                                              dispLimitCount,
                                                              Item,
                                                              0);
                          if ( ((unsigned __int8)Values & 1) != 0 )
                          {
LABEL_41:
                            if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                   v17,
                                   (Il2CppObject *)StringLiteral_13645/*"Target"*/,
                                   (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                            {
                              individualitya = System_Collections_Generic_Dictionary_object__int___get_Item(
                                                 v17,
                                                 (Il2CppObject *)StringLiteral_13645/*"Target"*/,
                                                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                            }
                            else
                            {
                              individualitya = 0;
                            }
                            v20 = entity;
                            v31 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
                            EventDropUpValInfo___ctor_41617652(v31, 0, (FunctionEntity_o *)v20, individualitya, 0);
                            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                                   v17,
                                   (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                   (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                            {
                              Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                  v17,
                                                                  (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                  (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              if ( !*eventUpVallInfo )
                                break;
                              v21 = (Il2CppObject *)v31;
                              if ( !v31 )
                                break;
                              EventDropUpValInfo__SetAddCount(
                                v31,
                                (int32_t)Values,
                                (*eventUpVallInfo)->fields.equipSvtId > 0,
                                0,
                                0);
                            }
                            else
                            {
                              Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                  v17,
                                                                  (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                                                  (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              v21 = (Il2CppObject *)v31;
                              if ( (_DWORD)Values == 2 )
                              {
                                Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                    v17,
                                                                    (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                    (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                                if ( !*eventUpVallInfo || !v31 )
                                  break;
                                EventDropUpValInfo__SetRateCount(
                                  v31,
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
                            v24 = *(_QWORD *)&Values->fields._MasterKind_k__BackingField;
                            v25 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                            ++HIDWORD(Values->fields._MasterName_k__BackingField);
                            if ( !v24 )
                              break;
                            v26 = SLODWORD(Values->fields._MasterName_k__BackingField);
                            if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                (System_Collections_Generic_List_object__o *)Values,
                                v21,
                                *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v27 = v24 + 8 * v26;
                              LODWORD(Values->fields._MasterName_k__BackingField) = v26 + 1;
                              *(_QWORD *)(v27 + 32) = v21;
                              sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v21, v22, v23);
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
    sub_1C32E7C(Values);
  }
  return (char)funcId;
}


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
  System_Func_object__int__o *_9__61_0; // x22
  Il2CppObject *v24; // x23
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int32_t v29; // [xsp+Ch] [xbp-74h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *v31; // [xsp+18h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_4C3859C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
    sub_1C32C20(&System_Func_QuestGroupEntity__int__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1C32C20(&Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__);
    this = (SkillLvEntity_o *)sub_1C32C20(&SkillLvEntity___c_TypeInfo);
    byte_4C3859C = 1;
  }
  entity = 0;
  v31 = 0;
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
    v29 = questId;
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
                                      &v31,
                                      v19,
                                      (const MethodInfo_3396884 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(max_length) = funcId->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_20;
    }
    if ( !v31 )
      goto LABEL_40;
    questTvals = (System_Int32_array *)v31[5].klass;
LABEL_20:
    questId = v29;
  }
  if ( !questTvals )
    goto LABEL_40;
  if ( questTvals->max_length )
    return questTvals;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
  _9__61_0 = (System_Func_object__int__o *)v22->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = SkillLvEntity___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__61_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__61_0, v24, Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, 0);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__61_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__61_0,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v28,
         questId,
         (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_1C32CC8(int___TypeInfo, 1);
  if ( !this )
LABEL_40:
    sub_1C32E7C(this);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
LABEL_41:
    sub_1C32E84(this);
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
  int klass; // w9
  System_String_o *v8; // x20
  int v9; // w8
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3859B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C32C20(&StringLiteral_19531/*"followerVals"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C3859B = 1;
  }
  result = 0;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19531/*"followerVals"*/, 0, 0);
  if ( !StringArray )
    return 0;
  v4 = StringArray;
  if ( !StringArray->max_length )
    return 0;
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_344F6E4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !LODWORD(v4->max_length) )
    goto LABEL_20;
  v6 = v4->m_Items[0];
  if ( !v6
    || (v6 = System_String__Replace_63565092(
               v6,
               (System_String_o *)StringLiteral_15802/*"["*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0)) == 0
    || (v6 = System_String__Replace_63565092(
               v6,
               (System_String_o *)StringLiteral_16056/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0)) == 0
    || (v6 = (System_String_o *)System_String__Split(v6, 0x2Cu, 0, 0), v12 = 0, !v6) )
  {
LABEL_21:
    sub_1C32E7C(v6);
  }
  klass = (int)v6[1].klass;
  v8 = v6;
  if ( klass >= 1 )
  {
    v9 = 0;
    while ( v9 < (unsigned int)klass )
    {
      v6 = (System_String_o *)System_Int32__TryParse(*((System_String_o **)&v8[1].monitor + v9), &result, 0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        v6 = System_Int32__ToString((int32_t)&v12, 0);
        if ( !v5 )
          goto LABEL_21;
        System_Collections_Generic_Dictionary_object__int___Add(
          v5,
          (Il2CppObject *)v6,
          result,
          (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v9 = v12 + 1;
      v12 = v9;
      klass = (int)v8[1].klass;
      if ( v9 >= klass )
        return (System_Collections_Generic_Dictionary_string__int__o *)v5;
    }
LABEL_20:
    sub_1C32E84(v6);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_ValueTuple_FuncList_TYPE__int___o SkillLvEntity__GetFriendPointUpTypeVal(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v4; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  struct System_Int32_array *funcId; // x8
  System_Collections_Generic_Dictionary_string__int__array *v7; // x20
  unsigned __int64 v8; // x22
  unsigned __int64 max_length_low; // x9
  int monitor; // w8
  int max_length; // w8
  System_Collections_Generic_Dictionary_object__int__o *v12; // x19
  int32_t v13; // w20
  int32_t Item; // w2
  System_ValueTuple_Int32Enum__int__o v15; // x0
  System_ValueTuple_Int32Enum__int__o v16; // x2
  const MethodInfo_38B998C *v17; // x3
  __int64 v18; // x0
  int32_t v19; // w1
  Il2CppObject *v20; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  __int64 v22; // [xsp+10h] [xbp-40h] BYREF
  int32_t v23; // [xsp+18h] [xbp-38h]
  System_Nullable_ValueTuple_FuncList_TYPE__int___o result; // 0:x0.12
  System_Nullable_T__o v25; // 0:x0.16

  if ( (byte_4C3857C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C32C20(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int____ctor__);
    sub_1C32C20(&Method_System_ValueTuple_FuncList_TYPE__int___ctor__);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C3857C = 1;
  }
  entity = 0;
  if ( !this->fields.funcId )
    goto LABEL_24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  Values = SkillLvEntity__getValues(this, v4);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_16;
  v7 = Values;
  v8 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(funcId->max_length);
    if ( (__int64)v8 >= (int)max_length_low )
      goto LABEL_24;
    if ( v8 >= max_length_low )
      goto LABEL_26;
    if ( !Master_object )
      goto LABEL_16;
    Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                           &entity,
                                                                           funcId->m_Items[v8],
                                                                           (const MethodInfo_3396884 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Values & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_16;
      monitor = (int)entity[1].monitor;
      if ( monitor == 123 || monitor == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v8;
    if ( !funcId )
      goto LABEL_16;
  }
  if ( !v7 )
LABEL_16:
    sub_1C32E7C(Values);
  max_length = v7->max_length;
  if ( (int)v8 >= max_length )
    goto LABEL_24;
  if ( (unsigned int)v8 >= max_length )
LABEL_26:
    sub_1C32E84(Values);
  v12 = (System_Collections_Generic_Dictionary_object__int__o *)v7->m_Items[v8];
  if ( !v12
    || (Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                               v12,
                                                                               (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                                                               (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__),
        ((unsigned __int8)Values & 1) == 0) )
  {
LABEL_24:
    v23 = 0;
    v22 = 0;
    goto LABEL_25;
  }
  if ( !entity )
    goto LABEL_16;
  v13 = (int32_t)entity[1].monitor;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           v12,
           (Il2CppObject *)StringLiteral_1122/*"0"*/,
           (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v15 = (System_ValueTuple_Int32Enum__int__o)&v20;
  v20 = 0;
  System_ValueTuple_Int32Enum__int____ctor(
    v15,
    v13,
    Item,
    (const MethodInfo_3AF3F50 *)Method_System_ValueTuple_FuncList_TYPE__int___ctor__);
  v25.fields.value = v20;
  *(_QWORD *)&v25.fields.hasValue = &v22;
  v23 = 0;
  v22 = 0;
  v16 = (System_ValueTuple_Int32Enum__int__o)Method_System_Nullable_ValueTuple_FuncList_TYPE__int____ctor__;
  System_Nullable_ValueTuple_Int32Enum__int_____ctor(v25, v16, v17);
LABEL_25:
  v18 = v22;
  v19 = v23;
  *(_QWORD *)&result.fields.hasValue = v18;
  result.fields.value.fields.Item2 = v19;
  return result;
}


System_Nullable_int__o SkillLvEntity__GetFuncIndexForSplitFuncSequence(SkillLvEntity_o *this, const MethodInfo *method)
{
  SkillLvEntity___c_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v5; // x20
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  Il2CppObject *v7; // x22
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Nullable_int__o v11; // x3

  if ( (byte_4C3858D & 1) == 0 )
  {
    sub_1C32C20(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
    sub_1C32C20(&System_Func_long__Nullable_int___TypeInfo);
    sub_1C32C20(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__);
    sub_1C32C20(&SkillLvEntity___c_TypeInfo);
    sub_1C32C20(&StringLiteral_19708/*"funcPositionForSplitFuncSequence"*/);
    byte_4C3858D = 1;
  }
  v3 = SkillLvEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v3 = SkillLvEntity___c_TypeInfo;
  }
  v5 = (System_String_o *)StringLiteral_19708/*"funcPositionForSplitFuncSequence"*/;
  _9__44_0 = v3->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SkillLvEntity___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v3->static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_1C32E6C(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v7,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      0);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = _9__44_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v9, v10);
  }
  v11 = 0;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v5,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v11,
           (const MethodInfo_30E3A20 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
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
  _BOOL8 v9; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  int32_t *v12; // x0
  int32_t v13; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  void *v18; // x0
  void *v19; // x21
  int v20; // w1
  int v21; // w20
  __int64 v22; // x20
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C38591 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_List_object____);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C38591 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v5 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   (Il2CppObject *)v7,
                   (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_object )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)Value_object,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_18;
    }
    if ( !v5 )
      sub_1C32E7C(v9);
    if ( !v24.fields._current )
      sub_1C32E7C(0);
    if ( v24.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v12 = (int32_t *)j_il2cpp_object_unbox_0(v24.fields._current, long_TypeInfo, v10, v11);
    v13 = *v12;
    items = v5->fields._items;
    v15 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C32E7C(v12);
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        v13,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      items->m_Items[size] = v13;
    }
  }
  sub_1C3313C(v24.fields._current);
  v19 = v18;
  v21 = v20;
  __cxa_end_catch();
  if ( v21 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1D1BD54();
  }
  v22 = *(_QWORD *)__cxa_begin_catch(v19);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v22 )
    sub_1C32E74(v22);
LABEL_18:
  if ( !v5 )
LABEL_20:
    sub_1C32E7C(Value_object);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Func_object__object__o *v3; // x20

  if ( (byte_4C3858E & 1) == 0 )
  {
    sub_1C32C20(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_1C32C20(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_1C32C20(&System_Func_List_object___List_int___TypeInfo);
    sub_1C32C20(&StringLiteral_17068/*"battleEffectId"*/);
    byte_4C3858E = 1;
  }
  v3 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v3, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_17068/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v3,
                                                     0,
                                                     (const MethodInfo_30E3B88 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


System_Int32_array *SkillLvEntity__GetRevivalTargetArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C385A0 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23097/*"revivalTargetArray"*/);
    byte_4C385A0 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23097/*"revivalTargetArray"*/, 0);
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

  if ( (byte_4C38593 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    byte_4C38593 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1C32E7C(script);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v8, v9);
  sub_1C3313C(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v11, v12);
}


SelectTreasureDeviceInfo_o *SkillLvEntity__GetSelectTreasureDeviceInfo(SkillLvEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Value_object__object; // x19
  Il2CppObject *v4; // x0

  if ( (byte_4C3859F & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_string__object___);
    sub_1C32C20(&Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&StringLiteral_23254/*"selectTreasureDeviceInfo"*/);
    byte_4C3859F = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_23254/*"selectTreasureDeviceInfo"*/,
                           0,
                           (const MethodInfo_30CB510 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__Deserialize_object_(
           Value_object__object,
           (const MethodInfo_314C70C *)Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
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

  if ( (byte_4C38578 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C38578 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v5 = (FunctionMaster_o *)Master_object;
  DataValsList = SkillLvEntity__getDataValsList(this, v6);
  if ( !v5 )
    sub_1C32E7C(DataValsList);
  return FunctionMaster__GetSetTypeDataValArray(v5, funcId, DataValsList, 0);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  System_Collections_Generic_Dictionary_string__object__o *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x21
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v8; // x0
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x20
  __int64 naturalAligment; // x9
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C38592 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_List_object____);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&SkillLvEntity_SvtChangeBgm_TypeInfo);
    sub_1C32C20(&StringLiteral_23854/*"svtBgmChange"*/);
    byte_4C38592 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_23854/*"svtBgmChange"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v3;
  v5 = this->fields.script;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)BasicHelper__GetValue_object_(
                                                                        v5,
                                                                        (System_String_o *)StringLiteral_23854/*"svtBgmChange"*/,
                                                                        (Il2CppObject *)v6,
                                                                        (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_21:
    sub_1C32E7C(script);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)script,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v21.fields._current;
    v8 = (SkillLvEntity_SvtChangeBgm_o *)sub_1C32E6C(SkillLvEntity_SvtChangeBgm_TypeInfo);
    v10 = (Il2CppObject *)v8;
    if ( current )
    {
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1C3313C(current);
LABEL_19:
        sub_1C32E7C(v12);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v8, (System_Collections_Generic_Dictionary_string__object__o *)current, v9);
    if ( !v3 )
      goto LABEL_19;
    items = v3->fields._items;
    v16 = Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C32E7C(v12);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        v10,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v10;
      sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v10, v13, v14);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
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
  System_Collections_Generic_IEnumerable_T__o *v18; // x1
  const MethodInfo *v19; // x2
  SkillLvEntity_o *v21; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C3859E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4C3859E = 1;
  }
  v21 = 0;
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
      (const MethodInfo_364A434 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v6);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
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
                                                                  (const MethodInfo_3396884 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
            sub_1C32E84(isAddState);
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
          v14 = DataVals__isParam(v13, 26, 0) ? 26 : 3;
          Param = DataVals__GetParam(v13, v14, 0, 0);
          v16 = DataVals__isParam(v13, 27, 0) ? 27 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v13, v16, 0, 0);
          if ( !v10 )
            goto LABEL_32;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v10,
                                                                      &v21,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      v17);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_32;
            v18 = (System_Collections_Generic_IEnumerable_T__o *)v21->fields.funcId;
            if ( v18 )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_32;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                v18,
                (const MethodInfo_364A434 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !isAddState
      || (isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)isAddState,
                                                                      this->fields.skillId,
                                                                      (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0
      || (isAddState = (System_Collections_Generic_HashSet_int__o *)SkillEntity__GetBranchSkillFuncIds(
                                                                      (SkillEntity_o *)isAddState,
                                                                      this->fields.lv,
                                                                      v19),
          !*ret) )
    {
LABEL_32:
      sub_1C32E7C(isAddState);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      *ret,
      (System_Collections_Generic_IEnumerable_T__o *)isAddState,
      (const MethodInfo_364A434 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


int32_t SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3859A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15577/*"WarBoardBreakPointDamage"*/);
    byte_4C3859A = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15577/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3859D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16685/*"additionalSkillInsertCurrentSkillAfter"*/);
    byte_4C3859D = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16685/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C3858A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&StringLiteral_16868/*"aress"*/);
    byte_4C3858A = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_16868/*"aress"*/,
                       (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool SkillLvEntity__IsContainsTurnOrCountBuff(SkillLvEntity_o *this, const MethodInfo *method)
{
  DataVals_array *SetTypeDataValArray; // x0
  int max_length; // w8
  DataVals_array *v4; // x19
  unsigned int v5; // w22
  bool v6; // w21
  DataVals_o *v7; // x20
  int32_t funcType; // w8

  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(this, method);
  if ( !SetTypeDataValArray )
LABEL_16:
    sub_1C32E7C(SetTypeDataValArray);
  max_length = SetTypeDataValArray->max_length;
  v4 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    if ( v5 >= max_length )
      sub_1C32E84(SetTypeDataValArray);
    v7 = v4->m_Items[v5];
    if ( !v7 )
      goto LABEL_16;
    funcType = v7->fields.funcType;
    if ( funcType == 1 || funcType == 130 || funcType == 16 )
    {
      if ( DataVals__GetParam(v7, 1, 0, 0) > 0 )
        return v6;
      SetTypeDataValArray = (DataVals_array *)DataVals__GetParam(v7, 2, 0, 0);
      if ( (int)SetTypeDataValArray > 0 )
        return 1;
    }
    max_length = v4->max_length;
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


bool SkillLvEntity__IsEnableTarget(SkillLvEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  SkillLvEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C3858B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&StringLiteral_5967/*"EnableTarget"*/);
    byte_4C3858B = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_5967/*"EnableTarget"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return isCheckHate;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_5967/*"EnableTarget"*/,
                                                                            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C32E7C(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v7, v8) == 1;
  sub_1C3313C(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v10, v11);
}


bool SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3858F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20277/*"ignoreWhiteFade"*/);
    byte_4C3858F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20277/*"ignoreWhiteFade"*/, 0);
}


bool SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C38594 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22250/*"noTargetSkipSkill"*/);
    byte_4C38594 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22250/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C38589 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&StringLiteral_23098/*"revivalUnder"*/);
    byte_4C38589 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_23098/*"revivalUnder"*/,
                       (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C38588 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&StringLiteral_23099/*"revivalUp"*/);
    byte_4C38588 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_23099/*"revivalUp"*/,
                       (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool SkillLvEntity__IsSetGroupId(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__int__array *v5; // x19
  bool v6; // w20
  int v7; // w21

  if ( (byte_4C385A1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C32C20(&StringLiteral_9997/*"OnlyMaxFuncGroupId"*/);
    byte_4C385A1 = 1;
  }
  Values = SkillLvEntity__getValues(this, method);
  if ( !Values )
    goto LABEL_12;
  max_length = Values->max_length;
  v5 = Values;
  v6 = max_length > 0;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C32E84(Values);
      Values = (System_Collections_Generic_Dictionary_string__int__array *)v5->m_Items[v7];
      if ( !Values )
        break;
      Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                             (System_Collections_Generic_Dictionary_object__int__o *)Values,
                                                                             (Il2CppObject *)StringLiteral_9997/*"OnlyMaxFuncGroupId"*/,
                                                                             (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)Values & 1) == 0 )
      {
        max_length = v5->max_length;
        v6 = ++v7 < max_length;
        if ( v7 < max_length )
          continue;
      }
      return v6;
    }
LABEL_12:
    sub_1C32E7C(Values);
  }
  return v6;
}


bool SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  if ( (byte_4C38585 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (SkillLvEntity_o *)sub_1C32C20(&StringLiteral_2297/*"ApplySupportSvt"*/);
    byte_4C38585 = 1;
  }
  if ( !vals )
    sub_1C32E7C(this);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)StringLiteral_2297/*"ApplySupportSvt"*/,
           (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)vals,
            (Il2CppObject *)StringLiteral_2297/*"ApplySupportSvt"*/,
            (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C38583 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&StringLiteral_15361/*"VoiceVolume"*/);
    byte_4C38583 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15361/*"VoiceVolume"*/,
                       (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  struct System_String_array *v5; // x8
  __int64 v6; // x19
  __int64 v7; // x24
  __int64 v8; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v10; // x26
  System_String_o *v11; // x22
  DataVals_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  DataVals_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v19; // x0

  if ( (byte_4C38577 & 1) == 0 )
  {
    sub_1C32C20(&DataVals___TypeInfo);
    sub_1C32C20(&DataVals_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38577 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v6 = sub_1C32CC8(DataVals___TypeInfo, 1);
    v15 = (DataVals_o *)sub_1C32E6C(DataVals_TypeInfo);
    DataVals___ctor(v15, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v6 )
    {
      if ( v15 )
      {
        v4 = sub_1C32D5C(v15, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
        if ( !v4 )
        {
LABEL_21:
          v19 = sub_1C32EA0(v4);
          sub_1C32D48(v19, 0);
        }
      }
      if ( !*(_DWORD *)(v6 + 24) )
LABEL_20:
        sub_1C32E84(v4);
      *(_QWORD *)(v6 + 32) = v15;
      sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v15, v16, v17);
      return (DataVals_array *)v6;
    }
LABEL_13:
    sub_1C32E7C(v4);
  }
  v4 = sub_1C32CC8(DataVals___TypeInfo, LODWORD(svals->max_length));
  v5 = this->fields.svals;
  if ( !v5 )
    goto LABEL_13;
  v6 = v4;
  v7 = 4;
  v8 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v5->max_length);
    v10 = v7 - 4;
    if ( v7 - 4 >= (int)max_length_low )
      return (DataVals_array *)v6;
    if ( v10 >= max_length_low )
      goto LABEL_20;
    v11 = (System_String_o *)*((_QWORD *)&v5->obj.klass + v7);
    v12 = (DataVals_o *)sub_1C32E6C(DataVals_TypeInfo);
    DataVals___ctor(v12, v11, 0);
    if ( v6 )
    {
      if ( v12 )
      {
        v4 = sub_1C32D5C(v12, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v10 >= *(unsigned int *)(v6 + 24) )
        goto LABEL_20;
      *(_QWORD *)(v6 + 8 * v7) = v12;
      sub_1C32BC4((CGThumbnailListItem_o *)(v6 + v8), (int32_t)v12, v13, v14);
      v5 = this->fields.svals;
      ++v7;
      v8 += 8;
      if ( v5 )
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
  const MethodInfo *v8; // x3
  System_String_o *result; // x0
  System_String_o *v10; // x21

  if ( (byte_4C38579 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillDetailMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4C38579 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  result = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v8);
  v10 = result;
  if ( !isNotApply )
  {
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    return SkillDetailParamFormatResolver__Apply(v10, this, 0);
  }
  return result;
}


System_String_o *SkillLvEntity__getDetail_42778376(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  System_String_o *Detail; // x0
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3857A & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8260/*"LEVEL_DETAIL_INFO"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3857A = 1;
  }
  if ( lv <= 0 )
  {
    v15 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8260/*"LEVEL_DETAIL_INFO"*/, 0);
    v18 = lv;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v8, v9, v10, v11, v12, v13);
    v15 = (Il2CppObject *)System_String__Format(v7, v14, 0);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, 0, method);
  return System_String__Format(Detail, v15, 0);
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
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v23; // x29
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *v25; // x8
  unsigned __int64 v26; // x8
  System_Collections_Generic_Dictionary_object__int__o *v27; // x19
  Il2CppObject *v28; // x8
  int monitor; // w24
  System_Int32_array *klass; // x3
  const MethodInfo *v31; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  System_Int32_array *Individuality; // x1
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

  if ( (byte_4C3857E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C32C20(&StringLiteral_1379/*"3"*/);
    sub_1C32C20(&StringLiteral_1318/*"2"*/);
    sub_1C32C20(&StringLiteral_13645/*"Target"*/);
    sub_1C32C20(&StringLiteral_1172/*"1"*/);
    sub_1C32C20(&StringLiteral_6221/*"EventId"*/);
    byte_4C3857E = 1;
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
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
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
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !QuestPhaseIndividualList )
      goto LABEL_100;
    v41 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               QuestPhaseIndividualList,
                               wearersSvtId,
                               (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v23 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(funcId->max_length);
    if ( (__int64)v23 >= (int)max_length_low )
      goto LABEL_94;
    if ( v23 >= max_length_low )
      goto LABEL_101;
    if ( !v17 )
      goto LABEL_100;
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                                                               &entity,
                                                                               funcId->m_Items[v23],
                                                                               (const MethodInfo_3396884 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
      goto LABEL_85;
    if ( isFuncGroup )
    {
      v25 = this->fields.funcId;
      if ( !v25 )
        goto LABEL_100;
      if ( v23 >= LODWORD(v25->max_length) )
LABEL_101:
        sub_1C32E84(QuestPhaseIndividualList);
      if ( !v19 )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)FunctionGroupMaster__TryGetEntity(
                                                                                 (FunctionGroupMaster_o *)v19,
                                                                                 &v45,
                                                                                 v25->m_Items[v23],
                                                                                 eventId,
                                                                                 0);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
    }
    if ( !Values )
      goto LABEL_100;
    v26 = LODWORD(Values->max_length);
    if ( (__int64)v23 >= (int)v26 )
      goto LABEL_85;
    if ( v23 >= v26 )
      goto LABEL_101;
    v27 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23];
    if ( !v27 )
      goto LABEL_85;
    v28 = entity;
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23],
                                                                                 (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                                                                 (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v27,
                                                                                 (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                                                                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
        LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_42561632(
                                             v41,
                                             v39,
                                             wearesDispLimitCount,
                                             (System_Int32_array *)entity[2].monitor,
                                             0);
        return (unsigned __int8)QuestPhaseIndividualList & 1;
      }
LABEL_100:
      sub_1C32E7C(QuestPhaseIndividualList);
    }
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                               (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23],
                                                                               (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                               (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
    {
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v27,
                                                                                 (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList )
      {
LABEL_83:
        v28 = entity;
        if ( !entity )
          goto LABEL_100;
LABEL_84:
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                   v43,
                                                                                   questPhaseIndividualityList,
                                                                                   (System_Int32_array *)v28[5].klass,
                                                                                   0);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          goto LABEL_93;
      }
    }
LABEL_85:
    funcId = this->fields.funcId;
    ++v23;
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23],
                                                                                 (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                                                                 (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v27,
                                                                                 (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                                                                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v27,
                                                                                 (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v27,
                                                                                   (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                                                                   (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality_42561632(
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23],
                                                                                 (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                                                                 (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 v27,
                                                                                 (Il2CppObject *)StringLiteral_6221/*"EventId"*/,
                                                                                 (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v27,
                                                                                 (Il2CppObject *)StringLiteral_6221/*"EventId"*/,
                                                                                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v27,
                                                                                 (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                                                                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (int)QuestPhaseIndividualList >= 1 )
      {
        if ( !v41 )
          goto LABEL_85;
        Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                 v27,
                 (Il2CppObject *)StringLiteral_1318/*"2"*/,
                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                             v23,
                             eventId,
                             v43->fields.questId,
                             (System_Int32_array *)entity[5].klass,
                             (FunctionMaster_o *)v17,
                             (FunctionGroupMaster_o *)v19,
                             v31);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v43,
                                                                                 questPhaseIndividualityList,
                                                                                 EventIndividuality,
                                                                                 0);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
                v27,
                (Il2CppObject *)StringLiteral_13645/*"Target"*/,
                (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          goto LABEL_93;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v27,
                                                                                   (Il2CppObject *)StringLiteral_13645/*"Target"*/,
                                                                                   (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList != 1 || !v37 )
          goto LABEL_93;
      }
      goto LABEL_85;
    case 113:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23],
                                                                                 (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                                                                 (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v27,
                                                                                 (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                                                                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v27,
                                                                                 (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster__GetIndividualityList_42266720(
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23],
                                                                                 (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                                                                 (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      goto LABEL_83;
    case 117:
    case 118:
      goto LABEL_84;
    case 129:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23],
                                                                                 (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                                                                 (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      v35 = &StringLiteral_1318/*"2"*/;
      goto LABEL_79;
    case 132:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23],
                                                                                 (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                                                                 (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      v35 = &StringLiteral_1379/*"3"*/;
LABEL_79:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v27,
                                                                                 (Il2CppObject *)*v35,
                                                                                 (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      goto LABEL_83;
    default:
      goto LABEL_85;
  }
}


bool SkillLvEntity__getEventUpVal_42798424(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool isFuncGroup,
        bool isOwner,
        bool isSupport,
        bool isEquipOnly,
        int64_t nowTime,
        const MethodInfo *method)
{
  SkillLvEntity_o *v10; // x24
  Il2CppObject *Master_object; // x25
  Il2CppObject *v12; // x26
  const MethodInfo *v13; // x1
  Il2CppObject *v14; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  il2cpp_array_size_t max_length; // x8
  struct System_Int32_array *v18; // x10
  SkillLvEntity_o *v19; // x29
  unsigned __int64 v20; // x11
  EventUpValInfo_o *v21; // x8
  int32_t v22; // w21
  ServantLimitEntity_o *v23; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v25; // x19
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *v27; // x8
  struct EventUpValSetupInfo_o *v28; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_object__int__o *v30; // x28
  int monitor; // w20
  const MethodInfo *v32; // x2
  int *klass; // x3
  const MethodInfo *v34; // x2
  struct System_Int32_array *v35; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  int32_t v37; // w23
  Il2CppObject *v38; // x23
  EventUpValInfo_o *v39; // x8
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x7
  EventUpValInfo_o *v42; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w23
  int32_t v45; // w0
  struct EventUpValSetupInfo_o *v46; // x8
  SkillLvEntity_o *v47; // x2
  SkillEntity_o *v48; // x23
  const MethodInfo *v49; // x1
  SkillLvEntity_o *v50; // x20
  System_Int32_array *ActIndividuality; // x23
  int32_t v52; // w20
  const MethodInfo *v53; // x2
  int32_t v54; // w8
  int32_t v55; // w9
  int32_t v56; // w20
  Il2CppObject *v57; // x23
  EventDropUpValInfo_o *v58; // x27
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  const MethodInfo *v65; // x2
  Il2CppObject *v66; // x23
  int32_t v67; // w27
  EventDropUpValInfo_o *v68; // x20
  int32_t v69; // w1
  EventDropUpValInfo_o *v70; // x0
  bool v71; // w2
  Il2CppObject *v72; // x23
  int32_t v73; // w1
  EventDropUpValInfo_o *v74; // x0
  bool v75; // w2
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  Il2CppObject *v78; // x23
  EventUpValInfo_o *v79; // x8
  Il2CppObject *v80; // x27
  int32_t Item; // w23
  Il2CppClass *v82; // x21
  const char *namespaze; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x27
  unsigned __int64 v85; // x23
  int32_t lv; // w20
  char v87; // w8
  Il2CppObject *v88; // x1
  Il2CppObject *v89; // x23
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  Il2CppObject *v94; // x23
  EventDropUpValInfo_o *v95; // x20
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  Il2CppObject *v102; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // x0
  __int64 v104; // x23
  UserServantEntity_o *HeroineData; // x0
  bool v107; // [xsp+0h] [xbp-F0h]
  int32_t v108; // [xsp+4h] [xbp-ECh]
  int32_t v109; // [xsp+8h] [xbp-E8h]
  bool v110; // [xsp+Ch] [xbp-E4h]
  ServantEntity_o *v111; // [xsp+10h] [xbp-E0h]
  EventPointBuffEntity_o *value; // [xsp+18h] [xbp-D8h]
  SkillLvEntity_o *valuea; // [xsp+18h] [xbp-D8h]
  int32_t valueb; // [xsp+18h] [xbp-D8h]
  __int64 valuec; // [xsp+18h] [xbp-D8h]
  char v116; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v117; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v118; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v119; // [xsp+20h] [xbp-D0h]
  struct System_Int32_array *v121; // [xsp+30h] [xbp-C0h]
  char v122; // [xsp+3Ch] [xbp-B4h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+40h] [xbp-B0h]
  SkillLvEntity_o *v124; // [xsp+48h] [xbp-A8h]
  unsigned __int64 v125; // [xsp+50h] [xbp-A0h]
  FunctionGroupEntity_o *v129; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-78h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_4C3857F & 1) == 0 )
  {
    sub_1C32C20(&BuffList_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C32C20(&EventDropUpValInfo_TypeInfo);
    sub_1C32C20(&Individuality_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&StringLiteral_9997/*"OnlyMaxFuncGroupId"*/);
    sub_1C32C20(&StringLiteral_1379/*"3"*/);
    sub_1C32C20(&StringLiteral_1318/*"2"*/);
    sub_1C32C20(&StringLiteral_13645/*"Target"*/);
    sub_1C32C20(&StringLiteral_1172/*"1"*/);
    sub_1C32C20(&StringLiteral_6221/*"EventId"*/);
    this = (SkillLvEntity_o *)sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C3857F = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  v129 = 0;
  entity = 0;
  if ( !*eventUpVallInfo )
    goto LABEL_287;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v10->fields.funcId )
    goto LABEL_285;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_287;
  v124 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v14 = 0;
    goto LABEL_16;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_287:
    sub_1C32E7C(this);
  v14 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
LABEL_16:
  this = (SkillLvEntity_o *)SkillLvEntity__getValues(v10, v13);
  if ( !*eventUpVallInfo )
    goto LABEL_287;
  setupInfo = (*eventUpVallInfo)->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_287;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_287;
  v121 = eventIdList;
  max_length = eventIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v111 = (ServantEntity_o *)v14;
    v107 = isOwner;
    v116 = 0;
    v110 = v14 == 0 || isEquipOnly;
    v18 = v121;
    v19 = this;
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)max_length )
LABEL_288:
        sub_1C32E84(this);
      v21 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_287;
      v22 = v18->m_Items[v20];
      v125 = v20;
      if ( v21->fields.equipSvtId < 1 )
      {
        v122 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_287;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo )
          goto LABEL_287;
        if ( !this )
          goto LABEL_287;
        v23 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0);
        this = (SkillLvEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_287;
        if ( !v23 )
          goto LABEL_287;
        if ( !this )
          goto LABEL_287;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v23->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    v22,
                                    0);
        v122 = (char)this;
        v21 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_287;
      }
      this = (SkillLvEntity_o *)v21->fields.setupInfo;
      if ( !this )
        goto LABEL_287;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList((EventUpValSetupInfo_o *)this, v22, 0);
      funcId = v10->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_287;
      v25 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(funcId->max_length);
        if ( (__int64)v25 >= (int)max_length_low )
          break;
        if ( v25 >= max_length_low )
          goto LABEL_288;
        if ( !Master_object )
          goto LABEL_287;
        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcId->m_Items[v25],
                                    (const MethodInfo_3396884 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_273;
        if ( isFuncGroup )
        {
          v27 = v10->fields.funcId;
          if ( !v27 )
            goto LABEL_287;
          if ( v25 >= LODWORD(v27->max_length) )
            goto LABEL_288;
          if ( !v12 )
            goto LABEL_287;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                      (FunctionGroupMaster_o *)v12,
                                      &v129,
                                      v27->m_Items[v25],
                                      v22,
                                      0);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_273;
          this = (SkillLvEntity_o *)v129;
          if ( !v129 )
            goto LABEL_287;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v129, 0);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_287;
            v28 = (*eventUpVallInfo)->fields.setupInfo;
            this = v124;
            if ( !v28 || !v124 )
              goto LABEL_287;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v124,
                                        v22,
                                        v28->fields.questId,
                                        v28->fields.questPhase,
                                        12,
                                        nowTime,
                                        0);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_273;
          }
        }
        if ( !v19 )
          goto LABEL_287;
        chargeTurn = (unsigned int)v19->fields.chargeTurn;
        if ( (__int64)v25 >= (int)chargeTurn )
          goto LABEL_273;
        if ( v25 >= chargeTurn )
          goto LABEL_288;
        v30 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&v19->fields.funcId + v25);
        if ( !v30 )
          goto LABEL_273;
        if ( !entity )
          goto LABEL_287;
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
                                          v30,
                                          (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                          (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v22 != (_DWORD)this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v30,
                                            (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                            (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_273;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v30,
                                            v32);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_273;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              if ( !entity )
                goto LABEL_287;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              if ( monitor == 107 )
              {
                if ( !entity )
                  goto LABEL_287;
                klass = (int *)entity[2].monitor;
                if ( !klass || klass[6] < 1 )
                  goto LABEL_212;
              }
              else
              {
                if ( monitor != 105 )
                  goto LABEL_212;
                if ( !entity )
                  goto LABEL_287;
                klass = (int *)entity[2].klass;
                if ( !klass || !*((_QWORD *)klass + 3) )
                  goto LABEL_212;
              }
              if ( !v111 )
                goto LABEL_273;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_42561632(
                                          v111,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          (System_Int32_array *)klass,
                                          0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
LABEL_212:
              v80 = entity;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v30,
                       (Il2CppObject *)StringLiteral_1122/*"0"*/,
                       (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v117 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_41617652(v117, v22, (FunctionEntity_o *)v80, Item, 0);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v30,
                     (Il2CppObject *)StringLiteral_1172/*"1"*/,
                     (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v30,
                                            (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                            (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v39 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
LABEL_214:
                v68 = v117;
                if ( !v117 )
                  goto LABEL_287;
                v73 = (int)this;
                v74 = v117;
                v75 = v39->fields.equipSvtId > 0;
LABEL_194:
                EventDropUpValInfo__SetAddCount(v74, v73, v75, v122 & 1, 0);
              }
              else
              {
LABEL_232:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v30,
                                            (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                            (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v68 = v117;
                if ( (_DWORD)this == 2 )
                {
                  v88 = (Il2CppObject *)StringLiteral_1318/*"2"*/;
LABEL_234:
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v30,
                                              v88,
                                              (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v68 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetRateCount(
                    v68,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v122 & 1,
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
              goto LABEL_273;
            case 111:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                          (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v30,
                                          (Il2CppObject *)StringLiteral_6221/*"EventId"*/,
                                          (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_6221/*"EventId"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v22 != (_DWORD)this )
                goto LABEL_273;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v30,
                                            v40);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_273;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_117;
              if ( !v111 )
                goto LABEL_273;
              v42 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              limitCount = v42->fields.limitCount;
              dispLimitCount = v42->fields.dispLimitCount;
              v45 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v30,
                      (Il2CppObject *)StringLiteral_1318/*"2"*/,
                      (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v111, limitCount, dispLimitCount, v45, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
LABEL_117:
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v46 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v46 )
                goto LABEL_287;
              if ( !entity )
                goto LABEL_287;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v10,
                                          v25,
                                          v22,
                                          v46->fields.questId,
                                          (System_Int32_array *)entity[5].klass,
                                          (FunctionMaster_o *)Master_object,
                                          (FunctionGroupMaster_o *)v12,
                                          v41);
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v47 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v47,
                                          0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)*eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              if ( !EventUpValInfo__IsEquipSvtId((EventUpValInfo_o *)this, 0) )
                goto LABEL_137;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10->fields.skillId,
                                          (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v48 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v111;
              if ( !v111 )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v111,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0);
              if ( !v48 )
                goto LABEL_287;
              v50 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v48, v49);
              if ( !Individuality_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v50,
                                          ActIndividuality,
                                          0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v111, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_137;
              if ( !entity )
                goto LABEL_287;
              if ( HIDWORD(entity[1].monitor) )
                goto LABEL_137;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v102 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
              v104 = *(_QWORD *)&v111->fields.id.fields.currentCryptoKey;
              *(_QWORD *)&v103.fields.fakeValue = *(_QWORD *)&v111->fields.id.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valuec = *(_QWORD *)&v111->fields.id.fields.fakeValue;
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v103.fields.fakeValue = valuec;
              }
              *(_QWORD *)&v103.fields.currentCryptoKey = v104;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v103, 0);
              if ( !v102 )
                goto LABEL_287;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v102, (int32_t)this, 0);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_273;
              }
LABEL_137:
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v30,
                     (Il2CppObject *)StringLiteral_13645/*"Target"*/,
                     (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v30,
                                            (Il2CppObject *)StringLiteral_13645/*"Target"*/,
                                            (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v52 = (int)this;
                if ( (_DWORD)this == 1 && !v107 )
                  goto LABEL_273;
              }
              else
              {
                v52 = 0;
              }
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v30,
                     (Il2CppObject *)StringLiteral_9997/*"OnlyMaxFuncGroupId"*/,
                     (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                valueb = System_Collections_Generic_Dictionary_object__int___get_Item(
                           v30,
                           (Il2CppObject *)StringLiteral_9997/*"OnlyMaxFuncGroupId"*/,
                           (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              }
              else
              {
                valueb = 0;
              }
              v94 = entity;
              v119 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_41617652(v119, v22, (FunctionEntity_o *)v94, v52, 0);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v30,
                     (Il2CppObject *)StringLiteral_1122/*"0"*/,
                     (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v30,
                                            (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                            (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                v95 = v119;
                if ( !v119 )
                  goto LABEL_287;
                EventDropUpValInfo__SetAddCount(
                  v119,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v122 & 1,
                  0);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v30,
                                            (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                            (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v30,
                                              (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                              (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo )
                    goto LABEL_287;
                  v95 = v119;
                  if ( !v119 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetRateCount(
                    v119,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v122 & 1,
                    0);
                }
                else
                {
                  v95 = v119;
                  if ( !v119 )
                    goto LABEL_287;
                }
              }
              v95->fields.groupId = valueb;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_287;
              v98 = *(_QWORD *)&this->fields.skillId;
              v99 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
              ++this->fields.priority;
              if ( !v98 )
                goto LABEL_287;
              v100 = this->fields.chargeTurn;
              if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v95,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
              }
              else
              {
                v101 = v98 + 8 * v100;
                this->fields.chargeTurn = v100 + 1;
                *(_QWORD *)(v101 + 32) = v95;
                sub_1C32BC4((CGThumbnailListItem_o *)(v101 + 32), (int32_t)v95, v96, v97);
              }
              v116 = 1;
              goto LABEL_273;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                          (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v22 != (_DWORD)this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v30,
                                            (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                            (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_273;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v30,
                                            v53);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_273;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              if ( !entity )
                goto LABEL_287;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0);
              v116 |= (unsigned __int8)this;
              if ( !v111 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v111,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_287;
              v54 = this->fields.chargeTurn;
              if ( v54 < 1 )
                goto LABEL_250;
              v55 = 0;
              valuea = this;
              while ( v55 < (unsigned int)v54 )
              {
                v56 = *((_DWORD *)&this->fields.funcId + v55);
                v57 = entity;
                v58 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_41617652(v58, v22, (FunctionEntity_o *)v57, v56, 0);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v30,
                       (Il2CppObject *)StringLiteral_1122/*"0"*/,
                       (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v30,
                                              (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                              (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v58 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetAddCount(
                    v58,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v122 & 1,
                    0);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v30,
                                              (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                              (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v30,
                                                (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v58 )
                      goto LABEL_287;
                    EventDropUpValInfo__SetRateCount(
                      v58,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v122 & 1,
                      0);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_287;
                v61 = *(_QWORD *)&this->fields.skillId;
                v62 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                ++this->fields.priority;
                if ( !v61 )
                  goto LABEL_287;
                v63 = this->fields.chargeTurn;
                if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v58,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
                }
                else
                {
                  v64 = v61 + 8 * v63;
                  this->fields.chargeTurn = v63 + 1;
                  *(_QWORD *)(v64 + 32) = v58;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v64 + 32), (int32_t)v58, v59, v60);
                }
                this = valuea;
                v116 = 1;
                v55 = actMaxRarity + 1;
                actMaxRarity = v55;
                v54 = valuea->fields.chargeTurn;
                if ( v55 >= v54 )
                  goto LABEL_273;
              }
              goto LABEL_288;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                          (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v30,
                                            v65);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_273;
              }
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              if ( !entity )
                goto LABEL_287;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              v66 = entity;
              v67 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v30,
                      (Il2CppObject *)StringLiteral_1122/*"0"*/,
                      (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v68 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_41617652(v68, v22, (FunctionEntity_o *)v66, v67, 0);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v68 )
                goto LABEL_287;
              v69 = (int)this;
              v70 = v68;
              v71 = (*eventUpVallInfo)->fields.equipSvtId > 0;
              goto LABEL_204;
            case 129:
              if ( isSupport )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                          (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v22 != (_DWORD)this )
                goto LABEL_273;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              if ( !entity )
                goto LABEL_287;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              v72 = entity;
              v118 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v118, v22, (FunctionEntity_o *)v72, 0);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v30,
                     (Il2CppObject *)StringLiteral_1122/*"0"*/,
                     (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v30,
                                            (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                            (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                v68 = v118;
                if ( !v118 )
                  goto LABEL_287;
                v73 = (int)this;
                v74 = v118;
                v75 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                goto LABEL_194;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v68 = v118;
              if ( (_DWORD)this != 2 )
                goto LABEL_244;
              v88 = (Il2CppObject *)StringLiteral_1172/*"1"*/;
              goto LABEL_234;
            default:
              if ( monitor != 132 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                          (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v22 != (_DWORD)this )
                goto LABEL_273;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              if ( !entity )
                goto LABEL_287;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)entity[5].klass,
                                          0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              v38 = entity;
              v117 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v117, v22, (FunctionEntity_o *)v38, 0);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v30,
                     (Il2CppObject *)StringLiteral_1172/*"1"*/,
                     (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
                goto LABEL_232;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1318/*"2"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v39 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              goto LABEL_214;
          }
          goto LABEL_244;
        }
        if ( monitor == 1 )
          goto LABEL_77;
        if ( monitor != 7 )
        {
          if ( monitor != 16 )
            goto LABEL_273;
LABEL_77:
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                      v30,
                                      (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                      (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v30,
                                              v34),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v35 = v10->fields.funcId;
              if ( !v35 )
                goto LABEL_287;
              if ( v25 >= LODWORD(v35->max_length) )
                goto LABEL_288;
              if ( !this )
                goto LABEL_287;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               v22,
                               v35->m_Items[v25],
                               0);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( EnableEntity || (_DWORD)this )
              {
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                if ( !entity )
                  goto LABEL_287;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
                if ( !this )
                  goto LABEL_287;
                this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                            (EventUpValSetupInfo_o *)this,
                                            questPhaseIndividualityList,
                                            (System_Int32_array *)entity[5].klass,
                                            0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v110 )
                    goto LABEL_95;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_287;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_42561632(
                                              v111,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity[2].monitor,
                                              0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_95:
                    value = EnableEntity;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v30,
                           (Il2CppObject *)StringLiteral_9997/*"OnlyMaxFuncGroupId"*/,
                           (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      v37 = System_Collections_Generic_Dictionary_object__int___get_Item(
                              v30,
                              (Il2CppObject *)StringLiteral_9997/*"OnlyMaxFuncGroupId"*/,
                              (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    }
                    else
                    {
                      v37 = 0;
                    }
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_287;
                    v109 = v22;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_287;
                    v82 = entity[2].klass;
                    if ( !v82 )
                      goto LABEL_287;
                    namespaze = v82->_1.namespaze;
                    v108 = v37;
                    if ( (int)namespaze < 1 )
                    {
                      v87 = 0;
                    }
                    else
                    {
                      v84 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
                      v85 = 0;
                      while ( 1 )
                      {
                        if ( v85 >= (unsigned int)namespaze )
                          goto LABEL_288;
                        if ( !v84 )
                          goto LABEL_287;
                        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                    v84,
                                                    *((_DWORD *)&v82->_1.byval_arg.data + v85),
                                                    (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                        if ( !this )
                          goto LABEL_287;
                        lv = this->fields.lv;
                        if ( !BuffList_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                        this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                        LODWORD(namespaze) = v82->_1.namespaze;
                        if ( (__int64)++v85 >= (int)namespaze )
                        {
                          v87 = 0;
                          goto LABEL_238;
                        }
                      }
                      v87 = 1;
                    }
LABEL_238:
                    v22 = v109;
                    if ( ((unsigned __int8)v87 & (value != 0)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v30,
                                                  (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                                  (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !value )
                        goto LABEL_287;
                      System_Collections_Generic_Dictionary_object__int___set_Item(
                        v30,
                        (Il2CppObject *)StringLiteral_1379/*"3"*/,
                        value->fields.value + (_DWORD)this,
                        (const MethodInfo_3450084 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v89 = entity;
                    v68 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
                    EventDropUpValInfo___ctor(v68, v109, (FunctionEntity_o *)v89, 0);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v30,
                                                (Il2CppObject *)StringLiteral_1379/*"3"*/,
                                                (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v68 )
                      goto LABEL_287;
                    EventDropUpValInfo__SetRateCount(
                      v68,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v122 & 1,
                      0);
                    v68->fields.groupId = v108;
LABEL_244:
                    v79 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_287;
LABEL_245:
                    this = (SkillLvEntity_o *)v79->fields.dropList;
                    if ( !this )
                      goto LABEL_287;
                    v90 = *(_QWORD *)&this->fields.skillId;
                    v91 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                    ++this->fields.priority;
                    if ( !v90 )
                      goto LABEL_287;
                    v92 = this->fields.chargeTurn;
                    if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v68,
                        *(const MethodInfo_37987BC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v93 = v90 + 8 * v92;
                      this->fields.chargeTurn = v92 + 1;
                      *(_QWORD *)(v93 + 32) = v68;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v93 + 32), (int32_t)v68, v76, v77);
                    }
LABEL_250:
                    v116 = 1;
                    goto LABEL_273;
                  }
                }
              }
            }
          }
          goto LABEL_273;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                    v30,
                                    (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                    (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                      v30,
                                      (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                      (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
          if ( (_DWORD)this )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_287;
            if ( !entity )
              goto LABEL_287;
            this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
            if ( !this )
              goto LABEL_287;
            this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                        (EventUpValSetupInfo_o *)this,
                                        questPhaseIndividualityList,
                                        (System_Int32_array *)entity[5].klass,
                                        0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v78 = entity;
              v68 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v68, v22, (FunctionEntity_o *)v78, 0);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v30,
                                          (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                          (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v68 )
                goto LABEL_287;
              v69 = (int)this;
              v70 = v68;
              v71 = (*eventUpVallInfo)->fields.equipSvtId > 0;
LABEL_204:
              EventDropUpValInfo__SetRateCount(v70, v69, v71, v122 & 1, 0);
              v79 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              goto LABEL_245;
            }
          }
        }
LABEL_273:
        funcId = v10->fields.funcId;
        ++v25;
        if ( !funcId )
          goto LABEL_287;
      }
      v18 = v121;
      LODWORD(max_length) = v121->max_length;
      v20 = v125 + 1;
      if ( (__int64)(v125 + 1) >= (int)max_length )
        return v116 & 1;
    }
  }
LABEL_285:
  v116 = 0;
  return v116 & 1;
}


System_String_o *SkillLvEntity__getFuncDetail(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Instance; // x0
  struct System_Int32_array *v5; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  unsigned __int64 v7; // x21
  unsigned __int64 max_length_low; // x9
  LocalizationManager_c *v9; // x0
  System_String_o **p_monitor; // x8

  if ( (byte_4C3857B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3857B = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && funcId->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v5 = this->fields.funcId) == 0) )
    {
LABEL_13:
      sub_1C32E7C(Instance);
    }
    v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v7 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(v5->max_length);
      if ( (__int64)v7 >= (int)max_length_low )
        break;
      if ( v7 >= max_length_low )
        sub_1C32E84(Instance);
      if ( !v6 )
        goto LABEL_13;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v6,
                   v5->m_Items[v7],
                   (const MethodInfo_3396838 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_monitor = (System_String_o **)&Instance[3].monitor;
        return *p_monitor;
      }
      v5 = this->fields.funcId;
      ++v7;
      if ( !v5 )
        goto LABEL_13;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C32D4C )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32D4C = 1;
  }
  v9 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager_TypeInfo;
  }
  p_monitor = &v9->static_fields->unknownNameText;
  return *p_monitor;
}


int32_t SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v5; // x2
  __int64 v6; // x3
  SkillLvEntity_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C38587 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&StringLiteral_18665/*"down"*/);
    byte_4C38587 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18665/*"down"*/,
           (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_18665/*"down"*/,
                                                                                (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C32E7C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v5, v6);
      }
      else
      {
        sub_1C3313C(Item);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v5; // x2
  __int64 v6; // x3
  SkillLvEntity_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C38586 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&StringLiteral_24428/*"up"*/);
    byte_4C38586 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_24428/*"up"*/,
           (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_24428/*"up"*/,
                                                                                (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C32E7C(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v5, v6);
      }
      else
      {
        sub_1C3313C(Item);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C38581 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_10676/*"PlayVoiceNo"*/);
    byte_4C38581 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10676/*"PlayVoiceNo"*/,
            (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_1C32E7C(0);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10676/*"PlayVoiceNo"*/,
                                  (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C3313C(result);
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
  System_Collections_Generic_Dictionary_string__int__array *v6; // x20
  unsigned int v7; // w25
  struct System_String_array *v8; // x8
  int v9; // w29
  __int64 v10; // x22
  System_Collections_Generic_Dictionary_object__int__o *v11; // x24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppClass **v14; // x23
  CGThumbnailListItem_o *v15; // x23
  int32_t v16; // w8
  System_String_o *v17; // x24
  CGThumbnailListItem_c *v18; // x24
  int32_t v19; // w2
  const MethodInfo_3450084 *v20; // x3
  Il2CppObject *v21; // x1
  __int64 v22; // x24
  __int64 v24; // x0
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C38576 & 1) == 0 )
  {
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__int____TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C38576 = 1;
  }
  *(_QWORD *)result = 0;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_1C32CC8(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1);
  max_length = svals->max_length;
  klass = sub_1C32CC8(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v6 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = this->fields.svals;
      if ( !v8 )
        goto LABEL_37;
      if ( v7 >= LODWORD(v8->max_length) )
        goto LABEL_38;
      klass = (__int64)v8->m_Items[v7];
      if ( !klass
        || (klass = (__int64)System_String__Replace_63565092(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15802/*"["*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0)) == 0
        || (klass = (__int64)System_String__Replace_63565092(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_16056/*"]"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0)) == 0
        || (klass = (__int64)System_String__Split((System_String_o *)klass, 0x2Cu, 0, 0)) == 0
        || (v9 = *(_DWORD *)(klass + 24),
            v10 = klass,
            v11 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_object__int____ctor(
              v11,
              (const MethodInfo_344F6E4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v6) )
      {
LABEL_37:
        sub_1C32E7C(klass);
      }
      if ( v11 )
      {
        klass = sub_1C32D5C(v11, v6->obj.klass->_1.element_class);
        if ( !klass )
        {
          v24 = sub_1C32EA0(0);
          sub_1C32D48(v24, 0);
        }
      }
      if ( v7 >= LODWORD(v6->max_length) )
LABEL_38:
        sub_1C32E84(klass);
      v14 = &v6->obj.klass + (int)v7;
      v14[4] = (Il2CppClass *)v11;
      v15 = (CGThumbnailListItem_o *)(v14 + 4);
      sub_1C32BC4(v15, (int32_t)v11, v12, v13);
      result[1] = 0;
      if ( v9 >= 1 )
        break;
LABEL_33:
      if ( ++v7 == max_length )
        return v6;
    }
    v16 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= *(_DWORD *)(v10 + 24) )
        goto LABEL_38;
      v17 = *(System_String_o **)(v10 + 8LL * v16 + 32);
      klass = System_Int32__TryParse(v17, result, 0);
      if ( (klass & 1) != 0 )
        break;
      if ( !v17 )
        goto LABEL_37;
      klass = (__int64)System_String__Split(v17, 0x3Au, 0, 0);
      if ( !klass )
        goto LABEL_37;
      v22 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0);
        if ( (klass & 1) != 0 )
        {
          if ( v7 >= LODWORD(v6->max_length) || !*(_DWORD *)(v22 + 24) )
            goto LABEL_38;
          klass = (__int64)v15->klass;
          if ( !v15->klass )
            goto LABEL_37;
          v19 = result[0];
          v21 = *(Il2CppObject **)(v22 + 32);
          v20 = (const MethodInfo_3450084 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_23:
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)klass,
            v21,
            v19,
            v20);
        }
      }
      v16 = ++result[1];
      if ( result[1] >= v9 )
        goto LABEL_33;
    }
    if ( v7 >= LODWORD(v6->max_length) )
      goto LABEL_38;
    v18 = v15->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0);
    if ( !v18 )
      goto LABEL_37;
    v19 = result[0];
    v20 = (const MethodInfo_3450084 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v21 = (Il2CppObject *)klass;
    klass = (__int64)v18;
    goto LABEL_23;
  }
  return v6;
}


System_String_o *SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C38580 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_15359/*"VoiceAssetName"*/);
    byte_4C38580 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15359/*"VoiceAssetName"*/,
            (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_1C32E7C(0);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15359/*"VoiceAssetName"*/,
                                  (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C3313C(result);
      return 0;
    }
  }
  return result;
}


float SkillLvEntity__getVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v4; // s8
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  float result; // s0
  SkillLvEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4C38584 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&StringLiteral_15361/*"VoiceVolume"*/);
    byte_4C38584 = 1;
  }
  script = this->fields.script;
  v4 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15361/*"VoiceVolume"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15361/*"VoiceVolume"*/,
                                                                            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C32E7C(Item);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7) / 1000.0;
  sub_1C3313C(Item);
  SkillLvEntity__getMovePositionUp(v9, v10);
  return result;
}


bool SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C38582 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&StringLiteral_10677/*"PlayVoiceWait"*/);
    byte_4C38582 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10677/*"PlayVoiceWait"*/,
                       (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


void SkillLvEntity_SvtChangeBgm___ctor(
        SkillLvEntity_SvtChangeBgm_o *this,
        System_Collections_Generic_Dictionary_string__object__o *obj,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x2
  __int64 v15; // x3
  SkillLvEntity_o *v16; // x0
  System_String_o *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C385A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&StringLiteral_16713/*"afterClearBgmId"*/);
    sub_1C32C20(&StringLiteral_20777/*"indv"*/);
    sub_1C32C20(&StringLiteral_17125/*"beforeClearBgmId"*/);
    sub_1C32C20(&StringLiteral_22861/*"questPhase"*/);
    sub_1C32C20(&StringLiteral_22857/*"questId"*/);
    byte_4C385A3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20777/*"indv"*/,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22857/*"questId"*/,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22861/*"questPhase"*/,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_17125/*"beforeClearBgmId"*/,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16713/*"afterClearBgmId"*/,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_1C32E7C(Item);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15);
    return;
  }
LABEL_16:
  sub_1C3313C(Item);
  SkillLvEntity__GetScriptIntParam(v16, v17, v18, v19);
}


void SkillLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C385A4 & 1) == 0 )
  {
    sub_1C32C20(&SkillLvEntity___c_TypeInfo);
    byte_4C385A4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillLvEntity___c_TypeInfo->static_fields->__9 = (struct SkillLvEntity___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)SkillLvEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SkillLvEntity___c___ctor(SkillLvEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SkillLvEntity___c___GetEventIndividuality_b__61_0(
        SkillLvEntity___c_o *this,
        QuestGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.questId;
}


System_Nullable_int__o SkillLvEntity___c___GetFuncIndexForSplitFuncSequence_b__44_0(
        SkillLvEntity___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int v3; // w19
  System_Nullable_int__o v4; // x0
  System_Nullable_int__o v6; // [xsp+8h] [xbp-28h] BYREF

  v3 = x;
  if ( (byte_4C385A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    byte_4C385A5 = 1;
  }
  v4 = (System_Nullable_int__o)&v6;
  v6 = 0;
  System_Nullable_int____ctor(v4, v3 - 1, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
  return v6;
}