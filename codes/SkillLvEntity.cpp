void SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C57924 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C57924 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


void SkillLvEntity___ctor_42945592(SkillLvEntity_o *this, SkillLvEntity_o *srcEntity, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Array_o *funcId; // x0
  Il2CppObject *v10; // x0
  Il2CppObject *v11; // x21
  struct System_Int32_array *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Array_o *svals; // x0
  Il2CppObject *v16; // x0
  struct System_String_array *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_object__object__o *v21; // x21

  if ( (byte_4C57925 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object___ctor___78091120);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    byte_4C57925 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_1C3E7C0(v5, v6);
  *(_OWORD *)&this->fields.skillId = *(_OWORD *)&srcEntity->fields.skillId;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v10 = System_Array__Clone(funcId, 0)) != 0 )
  {
    v11 = v10;
    v12 = (struct System_Int32_array *)sub_1C3E6A0(v10, int___TypeInfo);
    if ( !v12 )
      goto LABEL_12;
  }
  else
  {
    v12 = 0;
  }
  this->fields.funcId = v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.funcId, (int32_t)v12, v7, v8);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v16 = System_Array__Clone(svals, 0);
  if ( !v16 )
    goto LABEL_13;
  v11 = v16;
  v17 = (struct System_String_array *)sub_1C3E6A0(v16, string___TypeInfo);
  if ( v17 )
    goto LABEL_14;
LABEL_12:
  sub_1C3EA80(v11);
LABEL_13:
  v17 = 0;
LABEL_14:
  this->fields.svals = v17;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.svals, (int32_t)v17, v13, v14);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor_55004944(
      v21,
      script,
      (const MethodInfo_3474F10 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___78091120);
  }
  else
  {
    v21 = 0;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v21;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.script, (int32_t)v21, v18, v19);
}


System_String_o *SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4C57923 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C57923 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_30F7BF8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C57949 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_2116/*"ActNpcServantId"*/);
    byte_4C57949 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_2116/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C57940 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16663/*"actRarity"*/);
    byte_4C57940 = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16663/*"actRarity"*/, v2);
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

  if ( (byte_4C5793C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C3E564(&StringLiteral_2152/*"AddIndiv"*/);
    byte_4C5793C = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_2152/*"AddIndiv"*/,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v5 )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v5,
           (Il2CppObject *)StringLiteral_2152/*"AddIndiv"*/,
           (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v10 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v8 )
    goto LABEL_26;
  if ( v8->fields._size < 1 )
  {
LABEL_24:
    if ( v10 )
      return System_Collections_Generic_List_int___ToArray(
               v10,
               (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_26:
    sub_1C3E7C0(v5, klass_low);
  }
  v11 = 0;
  while ( 1 )
  {
    v5 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v8,
                                                                      v11,
                                                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_object__get_Item__);
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
        *(const MethodInfo_379843C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = size + 1;
      items->m_Items[size] = klass_low;
    }
    if ( ++v11 >= v8->fields._size )
      goto LABEL_24;
  }
  sub_1C3EA80(v5);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v17, v18);
}


int32_t SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C57947 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16700/*"additionalSkillActorType"*/);
    byte_4C57947 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16700/*"additionalSkillActorType"*/, -1, v2);
}


int32_t SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C57945 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16701/*"additionalSkillId"*/);
    byte_4C57945 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16701/*"additionalSkillId"*/, -1, v2);
}


int32_t SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C57946 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16703/*"additionalSkillLv"*/);
    byte_4C57946 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16703/*"additionalSkillLv"*/, 1, v2);
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
  const MethodInfo *v20; // x3
  bool v21; // w8
  Il2CppObject **v22; // x29
  int32_t Item; // w25
  Il2CppObject *v24; // x26
  bool v25; // w8
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  const MethodInfo_37B6FB8 *v30; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C57952 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C3E564(&EventDropUpValInfo_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C3E564(&StringLiteral_10000/*"OnlyMaxFuncGroupId"*/);
    sub_1C3E564(&StringLiteral_13656/*"Target"*/);
    byte_4C57952 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !this->fields.funcId )
  {
    if ( v3 )
    {
      v30 = (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__;
      return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(v3, v30);
    }
    goto LABEL_36;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionMaster___);
  Values = SkillLvEntity__getValues(this, v7);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_36;
  v9 = (Il2CppObject **)&StringLiteral_10000/*"OnlyMaxFuncGroupId"*/;
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
                                                                           (const MethodInfo_33B2FA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Values & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_36;
      v14 = LODWORD(v10->max_length);
      if ( (__int64)v11 >= (int)v14 )
        break;
      if ( v11 >= v14 )
LABEL_42:
        sub_1C3E7C8(Values, v5);
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
            v22 = v9;
            if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                   (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v11],
                   (Il2CppObject *)StringLiteral_13656/*"Target"*/,
                   (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v15,
                       (Il2CppObject *)StringLiteral_13656/*"Target"*/,
                       (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            }
            else
            {
              Item = 0;
            }
            v24 = entity;
            v18 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
            EventDropUpValInfo___ctor_41766020(v18, 0, (FunctionEntity_o *)v24, Item, 0);
            v9 = v22;
            v25 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v15,
                    *v22,
                    (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            Values = 0;
            if ( v25 )
              Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v15,
                                                                                     *v22,
                                                                                     (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !v18 )
              goto LABEL_36;
            break;
          case 16:
LABEL_20:
            v18 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
            EventDropUpValInfo___ctor(v18, 0, (FunctionEntity_o *)v16, 0);
            v21 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v15,
                    *v9,
                    (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            Values = 0;
            if ( v21 )
              Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v15,
                                                                                     *v9,
                                                                                     (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
        v27 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v18,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v18;
          sub_1C3E508((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v18, v19, v20);
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
    sub_1C3E7C0(Values, v5);
  v30 = (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__;
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(v3, v30);
}


int32_t SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C57948 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17103/*"battleStartRemainingTurn"*/);
    byte_4C57948 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_17103/*"battleStartRemainingTurn"*/, 0, v2);
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

  if ( (byte_4C5792D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C3E564(&EventDropUpValInfo_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C3E564(&StringLiteral_1317/*"2"*/);
    sub_1C3E564(&StringLiteral_13656/*"Target"*/);
    sub_1C3E564(&StringLiteral_1172/*"1"*/);
    sub_1C3E564(&StringLiteral_6222/*"EventId"*/);
    sub_1C3E564(&StringLiteral_1122/*"0"*/);
    byte_4C5792D = 1;
  }
  v37 = 0;
  entity = 0;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (FunctionGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
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
        Values = (FunctionGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*eventUpVallInfo || !Values )
          goto LABEL_61;
        v32 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Values,
                                   (*eventUpVallInfo)->fields.svtId,
                                   (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                              (const MethodInfo_33B2FA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                sub_1C3E7C8(Values, v9);
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
                                                      (Il2CppObject *)StringLiteral_6222/*"EventId"*/,
                                                      (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) == 0 )
                  {
                    if ( !entity )
                      break;
                    if ( LODWORD(entity[1].monitor) == 111 )
                    {
                      Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                          v17,
                                                          (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                                          (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
                        Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                            v17,
                                                            (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                                            (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                   (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                   (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                   (Il2CppObject *)StringLiteral_13656/*"Target"*/,
                                   (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                            {
                              individualitya = System_Collections_Generic_Dictionary_object__int___get_Item(
                                                 v17,
                                                 (Il2CppObject *)StringLiteral_13656/*"Target"*/,
                                                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                            }
                            else
                            {
                              individualitya = 0;
                            }
                            v20 = entity;
                            v31 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
                            EventDropUpValInfo___ctor_41766020(v31, 0, (FunctionEntity_o *)v20, individualitya, 0);
                            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                                   v17,
                                   (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                   (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                            {
                              Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                  v17,
                                                                  (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                  (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                                                  (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              v21 = (Il2CppObject *)v31;
                              if ( (_DWORD)Values == 2 )
                              {
                                Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                    v17,
                                                                    (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                    (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v27 = v24 + 8 * v26;
                              LODWORD(Values->fields._MasterName_k__BackingField) = v26 + 1;
                              *(_QWORD *)(v27 + 32) = v21;
                              sub_1C3E508((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v21, v22, v23);
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
    sub_1C3E7C0(Values, v9);
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
  if ( (byte_4C5794C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
    sub_1C3E564(&System_Func_QuestGroupEntity__int__TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1C3E564(&Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__);
    this = (SkillLvEntity_o *)sub_1C3E564(&SkillLvEntity___c_TypeInfo);
    byte_4C5794C = 1;
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
                                      (const MethodInfo_33B2FA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
    _9__61_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_QuestGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__61_0, v24, Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, 0);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__61_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__61_0,
                                                               (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v28,
         questId,
         (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_1C3E60C(int___TypeInfo, 1);
  if ( !this )
LABEL_40:
    sub_1C3E7C0(this, *(_QWORD *)&index);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
LABEL_41:
    sub_1C3E7C8(this, *(_QWORD *)&index);
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

  if ( (byte_4C5794B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C3E564(&StringLiteral_19552/*"followerVals"*/);
    sub_1C3E564(&StringLiteral_15814/*"["*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_16068/*"]"*/);
    byte_4C5794B = 1;
  }
  result = 0;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19552/*"followerVals"*/, 0, 0);
  if ( !StringArray )
    return 0;
  v4 = StringArray;
  if ( !StringArray->max_length )
    return 0;
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_346C0FC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !LODWORD(v4->max_length) )
    goto LABEL_20;
  v6 = v4->m_Items[0];
  if ( !v6
    || (v6 = System_String__Replace_63683016(
               v6,
               (System_String_o *)StringLiteral_15814/*"["*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0)) == 0
    || (v6 = System_String__Replace_63683016(
               v6,
               (System_String_o *)StringLiteral_16068/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0)) == 0
    || (v6 = (System_String_o *)System_String__Split(v6, 0x2Cu, 0, 0), v13 = 0, !v6) )
  {
LABEL_21:
    sub_1C3E7C0(v6, v7);
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
          (const MethodInfo_346CAB0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v10 = v13 + 1;
      v13 = v10;
      klass = (int)v9[1].klass;
      if ( v10 >= klass )
        return (System_Collections_Generic_Dictionary_string__int__o *)v5;
    }
LABEL_20:
    sub_1C3E7C8(v6, v7);
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
  __int64 v6; // x1
  struct System_Int32_array *funcId; // x8
  System_Collections_Generic_Dictionary_string__int__array *v8; // x20
  unsigned __int64 v9; // x22
  unsigned __int64 max_length_low; // x9
  int monitor; // w8
  int max_length; // w8
  System_Collections_Generic_Dictionary_object__int__o *v13; // x19
  int32_t v14; // w20
  int32_t Item; // w2
  System_ValueTuple_Int32Enum__int__o v16; // x0
  System_ValueTuple_Int32Enum__int__o v17; // x2
  const MethodInfo_38D6630 *v18; // x3
  __int64 v19; // x0
  int32_t v20; // w1
  Il2CppObject *v21; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  __int64 v23; // [xsp+10h] [xbp-40h] BYREF
  int32_t v24; // [xsp+18h] [xbp-38h]
  System_Nullable_ValueTuple_FuncList_TYPE__int___o result; // 0:x0.12
  System_Nullable_T__o v26; // 0:x0.16

  if ( (byte_4C5792C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C3E564(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int____ctor__);
    sub_1C3E564(&Method_System_ValueTuple_FuncList_TYPE__int___ctor__);
    sub_1C3E564(&StringLiteral_1122/*"0"*/);
    byte_4C5792C = 1;
  }
  entity = 0;
  if ( !this->fields.funcId )
    goto LABEL_24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionMaster___);
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
                                                                           (const MethodInfo_33B2FA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
    sub_1C3E7C0(Values, v6);
  max_length = v8->max_length;
  if ( (int)v9 >= max_length )
    goto LABEL_24;
  if ( (unsigned int)v9 >= max_length )
LABEL_26:
    sub_1C3E7C8(Values, v6);
  v13 = (System_Collections_Generic_Dictionary_object__int__o *)v8->m_Items[v9];
  if ( !v13
    || (Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                               v13,
                                                                               (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                                                               (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__),
        ((unsigned __int8)Values & 1) == 0) )
  {
LABEL_24:
    v24 = 0;
    v23 = 0;
    goto LABEL_25;
  }
  if ( !entity )
    goto LABEL_16;
  v14 = (int32_t)entity[1].monitor;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           v13,
           (Il2CppObject *)StringLiteral_1122/*"0"*/,
           (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v16 = (System_ValueTuple_Int32Enum__int__o)&v21;
  v21 = 0;
  System_ValueTuple_Int32Enum__int____ctor(
    v16,
    v14,
    Item,
    (const MethodInfo_3B10BF4 *)Method_System_ValueTuple_FuncList_TYPE__int___ctor__);
  v26.fields.value = v21;
  *(_QWORD *)&v26.fields.hasValue = &v23;
  v24 = 0;
  v23 = 0;
  v17 = (System_ValueTuple_Int32Enum__int__o)Method_System_Nullable_ValueTuple_FuncList_TYPE__int____ctor__;
  System_Nullable_ValueTuple_Int32Enum__int_____ctor(v26, v17, v18);
LABEL_25:
  v19 = v23;
  v20 = v24;
  *(_QWORD *)&result.fields.hasValue = v19;
  result.fields.value.fields.Item2 = v20;
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

  if ( (byte_4C5793D & 1) == 0 )
  {
    sub_1C3E564(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
    sub_1C3E564(&System_Func_long__Nullable_int___TypeInfo);
    sub_1C3E564(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__);
    sub_1C3E564(&SkillLvEntity___c_TypeInfo);
    sub_1C3E564(&StringLiteral_19729/*"funcPositionForSplitFuncSequence"*/);
    byte_4C5793D = 1;
  }
  v3 = SkillLvEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v3 = SkillLvEntity___c_TypeInfo;
  }
  v5 = (System_String_o *)StringLiteral_19729/*"funcPositionForSplitFuncSequence"*/;
  _9__44_0 = v3->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SkillLvEntity___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v3->static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_1C3E7B0(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v7,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      0);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = _9__44_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v9, v10);
  }
  v11 = 0;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v5,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v11,
           (const MethodInfo_31000A0 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
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

  if ( (byte_4C57941 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_GetValue_List_object____);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C57941 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v5 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_object___ctor__);
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   (Il2CppObject *)v7,
                   (const MethodInfo_30E73E4 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_object )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)Value_object,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v10 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_18;
    }
    if ( !v5 )
      sub_1C3E7C0(v10, v11);
    if ( !v26.fields._current )
      sub_1C3E7C0(0, v11);
    if ( v26.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v14 = (unsigned int *)j_il2cpp_object_unbox_0(v26.fields._current, long_TypeInfo, v12, v13);
    v15 = *v14;
    items = v5->fields._items;
    v17 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C3E7C0(v14, v15);
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        v15,
        *(const MethodInfo_379843C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      items->m_Items[size] = v15;
    }
  }
  sub_1C3EA80(v26.fields._current);
  v21 = v20;
  v23 = v22;
  __cxa_end_catch();
  if ( v23 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1D27698();
  }
  v24 = *(_QWORD *)__cxa_begin_catch(v21);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v24 )
    sub_1C3E7B8(v24);
LABEL_18:
  if ( !v5 )
LABEL_20:
    sub_1C3E7C0(Value_object, v9);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  System_Func_object__object__o *v3; // x20

  if ( (byte_4C5793E & 1) == 0 )
  {
    sub_1C3E564(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_1C3E564(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_1C3E564(&System_Func_List_object___List_int___TypeInfo);
    sub_1C3E564(&StringLiteral_17086/*"battleEffectId"*/);
    byte_4C5793E = 1;
  }
  v3 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v3, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_17086/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v3,
                                                     0,
                                                     (const MethodInfo_3100208 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


System_Int32_array *SkillLvEntity__GetRevivalTargetArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C57950 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_23120/*"revivalTargetArray"*/);
    byte_4C57950 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23120/*"revivalTargetArray"*/, 0);
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

  if ( (byte_4C57943 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&long_TypeInfo);
    byte_4C57943 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1C3E7C0(script, key);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v8, v9);
  sub_1C3EA80(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v11, v12);
}


SelectTreasureDeviceInfo_o *SkillLvEntity__GetSelectTreasureDeviceInfo(SkillLvEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Value_object__object; // x19
  Il2CppObject *v4; // x0

  if ( (byte_4C5794F & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_GetValue_string__object___);
    sub_1C3E564(&Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&StringLiteral_23277/*"selectTreasureDeviceInfo"*/);
    byte_4C5794F = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_23277/*"selectTreasureDeviceInfo"*/,
                           0,
                           (const MethodInfo_30E7B90 *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__Deserialize_object_(
           Value_object__object,
           (const MethodInfo_3168E68 *)Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
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

  if ( (byte_4C57928 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C57928 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v5 = (FunctionMaster_o *)Master_object;
  DataValsList = SkillLvEntity__getDataValsList(this, v6);
  if ( !v5 )
    sub_1C3E7C0(DataValsList, v8);
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
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C57942 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_GetValue_List_object____);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_object___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C3E564(&SkillLvEntity_SvtChangeBgm_TypeInfo);
    sub_1C3E564(&StringLiteral_23878/*"svtBgmChange"*/);
    byte_4C57942 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_23878/*"svtBgmChange"*/,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v3;
  v6 = this->fields.script;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)BasicHelper__GetValue_object_(
                                                                        v6,
                                                                        (System_String_o *)StringLiteral_23878/*"svtBgmChange"*/,
                                                                        (Il2CppObject *)v7,
                                                                        (const MethodInfo_30E73E4 *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_21:
    sub_1C3E7C0(script, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)script,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v23.fields._current;
    v9 = (SkillLvEntity_SvtChangeBgm_o *)sub_1C3E7B0(SkillLvEntity_SvtChangeBgm_TypeInfo);
    v11 = (Il2CppObject *)v9;
    if ( current )
    {
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1C3EA80(current);
LABEL_19:
        sub_1C3E7C0(v13, v14);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v9, (System_Collections_Generic_Dictionary_string__object__o *)current, v10);
    if ( !v3 )
      goto LABEL_19;
    items = v3->fields._items;
    v18 = Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C3E7C0(v13, v14);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        v11,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v20[4] = (Il2CppClass *)v11;
      sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
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

  if ( (byte_4C5794E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4C5794E = 1;
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
      (const MethodInfo_36670D8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v6);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SkillLvMaster___);
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
                                                                  (const MethodInfo_33B2FA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
            sub_1C3E7C8(isAddState, funcId);
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
                (const MethodInfo_36670D8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !isAddState
      || (isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)isAddState,
                                                                      this->fields.skillId,
                                                                      (const MethodInfo_33B2F58 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0
      || (isAddState = (System_Collections_Generic_HashSet_int__o *)SkillEntity__GetBranchSkillFuncIds(
                                                                      (SkillEntity_o *)isAddState,
                                                                      this->fields.lv,
                                                                      v18),
          !*ret) )
    {
LABEL_32:
      sub_1C3E7C0(isAddState, funcId);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      *ret,
      (System_Collections_Generic_IEnumerable_T__o *)isAddState,
      (const MethodInfo_36670D8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


int32_t SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C5794A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15589/*"WarBoardBreakPointDamage"*/);
    byte_4C5794A = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15589/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C5794D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16702/*"additionalSkillInsertCurrentSkillAfter"*/);
    byte_4C5794D = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16702/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C5793A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&StringLiteral_16885/*"aress"*/);
    byte_4C5793A = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_16885/*"aress"*/,
                       (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
    sub_1C3E7C0(SetTypeDataValArray, v3);
  max_length = SetTypeDataValArray->max_length;
  v5 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    if ( v6 >= max_length )
      sub_1C3E7C8(SetTypeDataValArray, v3);
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

  if ( (byte_4C5793B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&StringLiteral_5968/*"EnableTarget"*/);
    byte_4C5793B = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_5968/*"EnableTarget"*/,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return isCheckHate;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_5968/*"EnableTarget"*/,
                                                                            (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C3E7C0(Item, v6);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9) == 1;
  sub_1C3EA80(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v11, v12);
}


bool SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C5793F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_20298/*"ignoreWhiteFade"*/);
    byte_4C5793F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20298/*"ignoreWhiteFade"*/, 0);
}


bool SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C57944 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22271/*"noTargetSkipSkill"*/);
    byte_4C57944 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22271/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C57939 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&StringLiteral_23121/*"revivalUnder"*/);
    byte_4C57939 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_23121/*"revivalUnder"*/,
                       (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C57938 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&StringLiteral_23122/*"revivalUp"*/);
    byte_4C57938 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_23122/*"revivalUp"*/,
                       (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4C57951 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C3E564(&StringLiteral_10000/*"OnlyMaxFuncGroupId"*/);
    byte_4C57951 = 1;
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
        sub_1C3E7C8(Values, v4);
      Values = (System_Collections_Generic_Dictionary_string__int__array *)v6->m_Items[v8];
      if ( !Values )
        break;
      Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                             (System_Collections_Generic_Dictionary_object__int__o *)Values,
                                                                             (Il2CppObject *)StringLiteral_10000/*"OnlyMaxFuncGroupId"*/,
                                                                             (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
    sub_1C3E7C0(Values, v4);
  }
  return v7;
}


bool SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  if ( (byte_4C57935 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (SkillLvEntity_o *)sub_1C3E564(&StringLiteral_2297/*"ApplySupportSvt"*/);
    byte_4C57935 = 1;
  }
  if ( !vals )
    sub_1C3E7C0(this, vals);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)StringLiteral_2297/*"ApplySupportSvt"*/,
           (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)vals,
            (Il2CppObject *)StringLiteral_2297/*"ApplySupportSvt"*/,
            (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C57933 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&StringLiteral_15373/*"VoiceVolume"*/);
    byte_4C57933 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15373/*"VoiceVolume"*/,
                       (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  const MethodInfo *v15; // x3
  DataVals_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v20; // x0

  if ( (byte_4C57927 & 1) == 0 )
  {
    sub_1C3E564(&DataVals___TypeInfo);
    sub_1C3E564(&DataVals_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C57927 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v7 = sub_1C3E60C(DataVals___TypeInfo, 1);
    v16 = (DataVals_o *)sub_1C3E7B0(DataVals_TypeInfo);
    DataVals___ctor(v16, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( v7 )
    {
      if ( v16 )
      {
        v4 = sub_1C3E6A0(v16, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v4 )
        {
LABEL_21:
          v20 = sub_1C3E7E4(v4);
          sub_1C3E68C(v20, 0);
        }
      }
      if ( !*(_DWORD *)(v7 + 24) )
LABEL_20:
        sub_1C3E7C8(v4, v5);
      *(_QWORD *)(v7 + 32) = v16;
      sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v16, v17, v18);
      return (DataVals_array *)v7;
    }
LABEL_13:
    sub_1C3E7C0(v4, v5);
  }
  v4 = sub_1C3E60C(DataVals___TypeInfo, LODWORD(svals->max_length));
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
    v13 = (DataVals_o *)sub_1C3E7B0(DataVals_TypeInfo);
    DataVals___ctor(v13, v12, 0);
    if ( v7 )
    {
      if ( v13 )
      {
        v4 = sub_1C3E6A0(v13, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v4 )
          goto LABEL_21;
      }
      if ( v11 >= *(unsigned int *)(v7 + 24) )
        goto LABEL_20;
      *(_QWORD *)(v7 + 8 * v8) = v13;
      sub_1C3E508((CGThumbnailListItem_o *)(v7 + v9), (int32_t)v13, v14, v15);
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

  if ( (byte_4C57929 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillDetailMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4C57929 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
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


System_String_o *SkillLvEntity__getDetail_42932260(
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

  if ( (byte_4C5792A & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_8261/*"LEVEL_DETAIL_INFO"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5792A = 1;
  }
  if ( lv <= 0 )
  {
    v15 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8261/*"LEVEL_DETAIL_INFO"*/, 0);
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

  if ( (byte_4C5792E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C3E564(&StringLiteral_1378/*"3"*/);
    sub_1C3E564(&StringLiteral_1317/*"2"*/);
    sub_1C3E564(&StringLiteral_13656/*"Target"*/);
    sub_1C3E564(&StringLiteral_1172/*"1"*/);
    sub_1C3E564(&StringLiteral_6222/*"EventId"*/);
    byte_4C5792E = 1;
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
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
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
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !QuestPhaseIndividualList )
      goto LABEL_100;
    v41 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               QuestPhaseIndividualList,
                               wearersSvtId,
                               (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                                                               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
      goto LABEL_85;
    if ( isFuncGroup )
    {
      v26 = this->fields.funcId;
      if ( !v26 )
        goto LABEL_100;
      if ( v24 >= LODWORD(v26->max_length) )
LABEL_101:
        sub_1C3E7C8(QuestPhaseIndividualList, Individuality);
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
                                                                                 (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                                                                 (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                                                                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
        LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_42715284(
                                             v41,
                                             v39,
                                             wearesDispLimitCount,
                                             (System_Int32_array *)entity[2].monitor,
                                             0);
        return (unsigned __int8)QuestPhaseIndividualList & 1;
      }
LABEL_100:
      sub_1C3E7C0(QuestPhaseIndividualList, Individuality);
    }
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                               (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                               (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                               (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
    {
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                                                                 (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                                                                 (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                                                                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v28,
                                                                                   (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                                                                   (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality_42715284(
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
                                                                                 (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                                                                 (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_6222/*"EventId"*/,
                                                                                 (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_6222/*"EventId"*/,
                                                                                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                                                                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (int)QuestPhaseIndividualList >= 1 )
      {
        if ( !v41 )
          goto LABEL_85;
        Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                 v28,
                 (Il2CppObject *)StringLiteral_1317/*"2"*/,
                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                (Il2CppObject *)StringLiteral_13656/*"Target"*/,
                (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          goto LABEL_93;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v28,
                                                                                   (Il2CppObject *)StringLiteral_13656/*"Target"*/,
                                                                                   (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList != 1 || !v37 )
          goto LABEL_93;
      }
      goto LABEL_85;
    case 113:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                                                                 (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                                                                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                                                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster__GetIndividualityList_42420372(
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
                                                                                 (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                                                                 (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      goto LABEL_83;
    case 117:
    case 118:
      goto LABEL_84;
    case 129:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                                                                 (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      v35 = &StringLiteral_1317/*"2"*/;
      goto LABEL_79;
    case 132:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v24],
                                                                                 (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                                                                 (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      v35 = &StringLiteral_1378/*"3"*/;
LABEL_79:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v28,
                                                                                 (Il2CppObject *)*v35,
                                                                                 (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      goto LABEL_83;
    default:
      goto LABEL_85;
  }
}


bool SkillLvEntity__getEventUpVal_42952308(
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
  Il2CppObject *v13; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  il2cpp_array_size_t max_length; // x8
  struct System_Int32_array *v17; // x10
  SkillLvEntity_o *v18; // x29
  unsigned __int64 v19; // x11
  EventUpValInfo_o *v20; // x8
  int32_t v21; // w21
  ServantLimitEntity_o *v22; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v24; // x19
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *v26; // x8
  struct EventUpValSetupInfo_o *v27; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_object__int__o *v29; // x28
  int monitor; // w20
  const MethodInfo *v31; // x2
  int *klass; // x3
  const MethodInfo *v33; // x2
  struct System_Int32_array *v34; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  int32_t v36; // w23
  Il2CppObject *v37; // x23
  EventUpValInfo_o *v38; // x8
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x7
  EventUpValInfo_o *v41; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w23
  int32_t v44; // w0
  struct EventUpValSetupInfo_o *v45; // x8
  SkillLvEntity_o *v46; // x2
  SkillEntity_o *v47; // x23
  SkillLvEntity_o *v48; // x20
  System_Int32_array *ActIndividuality; // x23
  int32_t v50; // w20
  const MethodInfo *v51; // x2
  int32_t v52; // w8
  int32_t v53; // w9
  int32_t v54; // w20
  Il2CppObject *v55; // x23
  EventDropUpValInfo_o *v56; // x27
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  const MethodInfo *v63; // x2
  Il2CppObject *v64; // x23
  int32_t v65; // w27
  EventDropUpValInfo_o *v66; // x20
  int32_t v67; // w1
  EventDropUpValInfo_o *v68; // x0
  bool v69; // w2
  Il2CppObject *v70; // x23
  int32_t v71; // w1
  EventDropUpValInfo_o *v72; // x0
  bool v73; // w2
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  Il2CppObject *v76; // x23
  EventUpValInfo_o *v77; // x8
  Il2CppObject *v78; // x27
  int32_t Item; // w23
  Il2CppClass *v80; // x21
  const char *namespaze; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // x27
  unsigned __int64 v83; // x23
  int32_t lv; // w20
  char v85; // w8
  Il2CppObject *v86; // x1
  Il2CppObject *v87; // x23
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  Il2CppObject *v92; // x23
  EventDropUpValInfo_o *v93; // x20
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  __int64 v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  __int64 v99; // x8
  Il2CppObject *v100; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // x0
  __int64 v102; // x23
  UserServantEntity_o *HeroineData; // x0
  bool v105; // [xsp+0h] [xbp-F0h]
  int32_t v106; // [xsp+4h] [xbp-ECh]
  int32_t v107; // [xsp+8h] [xbp-E8h]
  bool v108; // [xsp+Ch] [xbp-E4h]
  ServantEntity_o *v109; // [xsp+10h] [xbp-E0h]
  EventPointBuffEntity_o *value; // [xsp+18h] [xbp-D8h]
  SkillLvEntity_o *valuea; // [xsp+18h] [xbp-D8h]
  int32_t valueb; // [xsp+18h] [xbp-D8h]
  __int64 valuec; // [xsp+18h] [xbp-D8h]
  char v114; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v115; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v116; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v117; // [xsp+20h] [xbp-D0h]
  struct System_Int32_array *v119; // [xsp+30h] [xbp-C0h]
  char v120; // [xsp+3Ch] [xbp-B4h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+40h] [xbp-B0h]
  SkillLvEntity_o *v122; // [xsp+48h] [xbp-A8h]
  unsigned __int64 v123; // [xsp+50h] [xbp-A0h]
  FunctionGroupEntity_o *v127; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-78h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_4C5792F & 1) == 0 )
  {
    sub_1C3E564(&BuffList_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C3E564(&EventDropUpValInfo_TypeInfo);
    sub_1C3E564(&Individuality_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C3E564(&StringLiteral_10000/*"OnlyMaxFuncGroupId"*/);
    sub_1C3E564(&StringLiteral_1378/*"3"*/);
    sub_1C3E564(&StringLiteral_1317/*"2"*/);
    sub_1C3E564(&StringLiteral_13656/*"Target"*/);
    sub_1C3E564(&StringLiteral_1172/*"1"*/);
    sub_1C3E564(&StringLiteral_6222/*"EventId"*/);
    this = (SkillLvEntity_o *)sub_1C3E564(&StringLiteral_1122/*"0"*/);
    byte_4C5792F = 1;
  }
  skillName = 0;
  actMaxRarity = 0;
  v127 = 0;
  entity = 0;
  if ( !*eventUpVallInfo )
    goto LABEL_287;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v10->fields.funcId )
    goto LABEL_285;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_287;
  v122 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v13 = 0;
    goto LABEL_16;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_287:
    sub_1C3E7C0(this, eventUpVallInfo);
  v13 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
LABEL_16:
  this = (SkillLvEntity_o *)SkillLvEntity__getValues(v10, (const MethodInfo *)eventUpVallInfo);
  if ( !*eventUpVallInfo )
    goto LABEL_287;
  setupInfo = (*eventUpVallInfo)->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_287;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_287;
  v119 = eventIdList;
  max_length = eventIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v109 = (ServantEntity_o *)v13;
    v105 = isOwner;
    v114 = 0;
    v108 = v13 == 0 || isEquipOnly;
    v17 = v119;
    v18 = this;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
LABEL_288:
        sub_1C3E7C8(this, eventUpVallInfo);
      v20 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_287;
      v21 = v17->m_Items[v19];
      v123 = v19;
      if ( v20->fields.equipSvtId < 1 )
      {
        v120 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_287;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo )
          goto LABEL_287;
        if ( !this )
          goto LABEL_287;
        v22 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0);
        this = (SkillLvEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_287;
        if ( !v22 )
          goto LABEL_287;
        if ( !this )
          goto LABEL_287;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v22->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    v21,
                                    0);
        v120 = (char)this;
        v20 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_287;
      }
      this = (SkillLvEntity_o *)v20->fields.setupInfo;
      if ( !this )
        goto LABEL_287;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList((EventUpValSetupInfo_o *)this, v21, 0);
      funcId = v10->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_287;
      v24 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(funcId->max_length);
        if ( (__int64)v24 >= (int)max_length_low )
          break;
        if ( v24 >= max_length_low )
          goto LABEL_288;
        if ( !Master_object )
          goto LABEL_287;
        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcId->m_Items[v24],
                                    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_273;
        if ( isFuncGroup )
        {
          v26 = v10->fields.funcId;
          if ( !v26 )
            goto LABEL_287;
          if ( v24 >= LODWORD(v26->max_length) )
            goto LABEL_288;
          if ( !v12 )
            goto LABEL_287;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                      (FunctionGroupMaster_o *)v12,
                                      &v127,
                                      v26->m_Items[v24],
                                      v21,
                                      0);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_273;
          this = (SkillLvEntity_o *)v127;
          if ( !v127 )
            goto LABEL_287;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v127, 0);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_287;
            v27 = (*eventUpVallInfo)->fields.setupInfo;
            this = v122;
            if ( !v27 || !v122 )
              goto LABEL_287;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v122,
                                        v21,
                                        v27->fields.questId,
                                        v27->fields.questPhase,
                                        12,
                                        nowTime,
                                        0);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_273;
          }
        }
        if ( !v18 )
          goto LABEL_287;
        chargeTurn = (unsigned int)v18->fields.chargeTurn;
        if ( (__int64)v24 >= (int)chargeTurn )
          goto LABEL_273;
        if ( v24 >= chargeTurn )
          goto LABEL_288;
        v29 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&v18->fields.funcId + v24);
        if ( !v29 )
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
                                          v29,
                                          (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                          (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v21 != (_DWORD)this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                            (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_273;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v29,
                                            v31);
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
              if ( !v109 )
                goto LABEL_273;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_42715284(
                                          v109,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          (System_Int32_array *)klass,
                                          0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
LABEL_212:
              v78 = entity;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v29,
                       (Il2CppObject *)StringLiteral_1122/*"0"*/,
                       (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v115 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_41766020(v115, v21, (FunctionEntity_o *)v78, Item, 0);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v29,
                     (Il2CppObject *)StringLiteral_1172/*"1"*/,
                     (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                            (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v38 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
LABEL_214:
                v66 = v115;
                if ( !v115 )
                  goto LABEL_287;
                v71 = (int)this;
                v72 = v115;
                v73 = v38->fields.equipSvtId > 0;
LABEL_194:
                EventDropUpValInfo__SetAddCount(v72, v71, v73, v120 & 1, 0);
              }
              else
              {
LABEL_232:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                            (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v66 = v115;
                if ( (_DWORD)this == 2 )
                {
                  v86 = (Il2CppObject *)StringLiteral_1317/*"2"*/;
LABEL_234:
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v29,
                                              v86,
                                              (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v66 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetRateCount(
                    v66,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v120 & 1,
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
                                          v29,
                                          (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                          (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_6222/*"EventId"*/,
                                          (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_6222/*"EventId"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v21 != (_DWORD)this )
                goto LABEL_273;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v29,
                                            v39);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_273;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_117;
              if ( !v109 )
                goto LABEL_273;
              v41 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              limitCount = v41->fields.limitCount;
              dispLimitCount = v41->fields.dispLimitCount;
              v44 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v29,
                      (Il2CppObject *)StringLiteral_1317/*"2"*/,
                      (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v109, limitCount, dispLimitCount, v44, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
LABEL_117:
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v45 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v45 )
                goto LABEL_287;
              if ( !entity )
                goto LABEL_287;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v10,
                                          v24,
                                          v21,
                                          v45->fields.questId,
                                          (System_Int32_array *)entity[5].klass,
                                          (FunctionMaster_o *)Master_object,
                                          (FunctionGroupMaster_o *)v12,
                                          v40);
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v46 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v46,
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
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10->fields.skillId,
                                          (const MethodInfo_33B2F58 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v47 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v109;
              if ( !v109 )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v109,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0);
              if ( !v47 )
                goto LABEL_287;
              v48 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v47, (const MethodInfo *)eventUpVallInfo);
              if ( !Individuality_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v48,
                                          ActIndividuality,
                                          0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v109, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_137;
              if ( !entity )
                goto LABEL_287;
              if ( HIDWORD(entity[1].monitor) )
                goto LABEL_137;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v100 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
              v102 = *(_QWORD *)&v109->fields.id.fields.currentCryptoKey;
              *(_QWORD *)&v101.fields.fakeValue = *(_QWORD *)&v109->fields.id.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valuec = *(_QWORD *)&v109->fields.id.fields.fakeValue;
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v101.fields.fakeValue = valuec;
              }
              *(_QWORD *)&v101.fields.currentCryptoKey = v102;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v101, 0);
              if ( !v100 )
                goto LABEL_287;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v100, (int32_t)this, 0);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_273;
              }
LABEL_137:
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v29,
                     (Il2CppObject *)StringLiteral_13656/*"Target"*/,
                     (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_13656/*"Target"*/,
                                            (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v50 = (int)this;
                if ( (_DWORD)this == 1 && !v105 )
                  goto LABEL_273;
              }
              else
              {
                v50 = 0;
              }
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v29,
                     (Il2CppObject *)StringLiteral_10000/*"OnlyMaxFuncGroupId"*/,
                     (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                valueb = System_Collections_Generic_Dictionary_object__int___get_Item(
                           v29,
                           (Il2CppObject *)StringLiteral_10000/*"OnlyMaxFuncGroupId"*/,
                           (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              }
              else
              {
                valueb = 0;
              }
              v92 = entity;
              v117 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_41766020(v117, v21, (FunctionEntity_o *)v92, v50, 0);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v29,
                     (Il2CppObject *)StringLiteral_1122/*"0"*/,
                     (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                            (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                v93 = v117;
                if ( !v117 )
                  goto LABEL_287;
                EventDropUpValInfo__SetAddCount(
                  v117,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v120 & 1,
                  0);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                            (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v29,
                                              (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                              (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo )
                    goto LABEL_287;
                  v93 = v117;
                  if ( !v117 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetRateCount(
                    v117,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v120 & 1,
                    0);
                }
                else
                {
                  v93 = v117;
                  if ( !v117 )
                    goto LABEL_287;
                }
              }
              v93->fields.groupId = valueb;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_287;
              v96 = *(_QWORD *)&this->fields.skillId;
              v97 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
              ++this->fields.priority;
              if ( !v96 )
                goto LABEL_287;
              v98 = this->fields.chargeTurn;
              if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v93,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
              }
              else
              {
                v99 = v96 + 8 * v98;
                this->fields.chargeTurn = v98 + 1;
                *(_QWORD *)(v99 + 32) = v93;
                sub_1C3E508((CGThumbnailListItem_o *)(v99 + 32), (int32_t)v93, v94, v95);
              }
              v114 = 1;
              goto LABEL_273;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                          (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v21 != (_DWORD)this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                            (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_273;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v29,
                                            v51);
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
              v114 |= (unsigned __int8)this;
              if ( !v109 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v109,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_287;
              v52 = this->fields.chargeTurn;
              if ( v52 < 1 )
                goto LABEL_250;
              v53 = 0;
              valuea = this;
              while ( v53 < (unsigned int)v52 )
              {
                v54 = *((_DWORD *)&this->fields.funcId + v53);
                v55 = entity;
                v56 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_41766020(v56, v21, (FunctionEntity_o *)v55, v54, 0);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v29,
                       (Il2CppObject *)StringLiteral_1122/*"0"*/,
                       (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v29,
                                              (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                              (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v56 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetAddCount(
                    v56,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v120 & 1,
                    0);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v29,
                                              (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                              (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v29,
                                                (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                                (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v56 )
                      goto LABEL_287;
                    EventDropUpValInfo__SetRateCount(
                      v56,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v120 & 1,
                      0);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_287;
                v59 = *(_QWORD *)&this->fields.skillId;
                v60 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                ++this->fields.priority;
                if ( !v59 )
                  goto LABEL_287;
                v61 = this->fields.chargeTurn;
                if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v56,
                    *(const MethodInfo_37B5460 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                }
                else
                {
                  v62 = v59 + 8 * v61;
                  this->fields.chargeTurn = v61 + 1;
                  *(_QWORD *)(v62 + 32) = v56;
                  sub_1C3E508((CGThumbnailListItem_o *)(v62 + 32), (int32_t)v56, v57, v58);
                }
                this = valuea;
                v114 = 1;
                v53 = actMaxRarity + 1;
                actMaxRarity = v53;
                v52 = valuea->fields.chargeTurn;
                if ( v53 >= v52 )
                  goto LABEL_273;
              }
              goto LABEL_288;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                          (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v29,
                                            v63);
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
              v64 = entity;
              v65 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v29,
                      (Il2CppObject *)StringLiteral_1122/*"0"*/,
                      (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v66 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_41766020(v66, v21, (FunctionEntity_o *)v64, v65, 0);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v66 )
                goto LABEL_287;
              v67 = (int)this;
              v68 = v66;
              v69 = (*eventUpVallInfo)->fields.equipSvtId > 0;
              goto LABEL_204;
            case 129:
              if ( isSupport )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                          (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v21 != (_DWORD)this )
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
              v70 = entity;
              v116 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v116, v21, (FunctionEntity_o *)v70, 0);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v29,
                     (Il2CppObject *)StringLiteral_1122/*"0"*/,
                     (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v29,
                                            (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                            (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                v66 = v116;
                if ( !v116 )
                  goto LABEL_287;
                v71 = (int)this;
                v72 = v116;
                v73 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                goto LABEL_194;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1122/*"0"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v66 = v116;
              if ( (_DWORD)this != 2 )
                goto LABEL_244;
              v86 = (Il2CppObject *)StringLiteral_1172/*"1"*/;
              goto LABEL_234;
            default:
              if ( monitor != 132 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                          (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v21 != (_DWORD)this )
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
              v37 = entity;
              v115 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v115, v21, (FunctionEntity_o *)v37, 0);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v29,
                     (Il2CppObject *)StringLiteral_1172/*"1"*/,
                     (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
                goto LABEL_232;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1317/*"2"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v38 = *eventUpVallInfo;
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
                                      v29,
                                      (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                      (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v29,
                                              v33),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v34 = v10->fields.funcId;
              if ( !v34 )
                goto LABEL_287;
              if ( v24 >= LODWORD(v34->max_length) )
                goto LABEL_288;
              if ( !this )
                goto LABEL_287;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               v21,
                               v34->m_Items[v24],
                               0);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                  if ( v108 )
                    goto LABEL_95;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_287;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_42715284(
                                              v109,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity[2].monitor,
                                              0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_95:
                    value = EnableEntity;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v29,
                           (Il2CppObject *)StringLiteral_10000/*"OnlyMaxFuncGroupId"*/,
                           (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      v36 = System_Collections_Generic_Dictionary_object__int___get_Item(
                              v29,
                              (Il2CppObject *)StringLiteral_10000/*"OnlyMaxFuncGroupId"*/,
                              (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    }
                    else
                    {
                      v36 = 0;
                    }
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_287;
                    v107 = v21;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_287;
                    v80 = entity[2].klass;
                    if ( !v80 )
                      goto LABEL_287;
                    namespaze = v80->_1.namespaze;
                    v106 = v36;
                    if ( (int)namespaze < 1 )
                    {
                      v85 = 0;
                    }
                    else
                    {
                      v82 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
                      v83 = 0;
                      while ( 1 )
                      {
                        if ( v83 >= (unsigned int)namespaze )
                          goto LABEL_288;
                        if ( !v82 )
                          goto LABEL_287;
                        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                    v82,
                                                    *((_DWORD *)&v80->_1.byval_arg.data + v83),
                                                    (const MethodInfo_33B2F58 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                        if ( !this )
                          goto LABEL_287;
                        lv = this->fields.lv;
                        if ( !BuffList_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                        this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                        LODWORD(namespaze) = v80->_1.namespaze;
                        if ( (__int64)++v83 >= (int)namespaze )
                        {
                          v85 = 0;
                          goto LABEL_238;
                        }
                      }
                      v85 = 1;
                    }
LABEL_238:
                    v21 = v107;
                    if ( ((unsigned __int8)v85 & (value != 0)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v29,
                                                  (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                                  (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !value )
                        goto LABEL_287;
                      System_Collections_Generic_Dictionary_object__int___set_Item(
                        v29,
                        (Il2CppObject *)StringLiteral_1378/*"3"*/,
                        value->fields.value + (_DWORD)this,
                        (const MethodInfo_346CA9C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v87 = entity;
                    v66 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
                    EventDropUpValInfo___ctor(v66, v107, (FunctionEntity_o *)v87, 0);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v29,
                                                (Il2CppObject *)StringLiteral_1378/*"3"*/,
                                                (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v66 )
                      goto LABEL_287;
                    EventDropUpValInfo__SetRateCount(
                      v66,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v120 & 1,
                      0);
                    v66->fields.groupId = v106;
LABEL_244:
                    v77 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_287;
LABEL_245:
                    this = (SkillLvEntity_o *)v77->fields.dropList;
                    if ( !this )
                      goto LABEL_287;
                    v88 = *(_QWORD *)&this->fields.skillId;
                    v89 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                    ++this->fields.priority;
                    if ( !v88 )
                      goto LABEL_287;
                    v90 = this->fields.chargeTurn;
                    if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v66,
                        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v91 = v88 + 8 * v90;
                      this->fields.chargeTurn = v90 + 1;
                      *(_QWORD *)(v91 + 32) = v66;
                      sub_1C3E508((CGThumbnailListItem_o *)(v91 + 32), (int32_t)v66, v74, v75);
                    }
LABEL_250:
                    v114 = 1;
                    goto LABEL_273;
                  }
                }
              }
            }
          }
          goto LABEL_273;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                    v29,
                                    (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                    (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                      v29,
                                      (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                      (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
              v76 = entity;
              v66 = (EventDropUpValInfo_o *)sub_1C3E7B0(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v66, v21, (FunctionEntity_o *)v76, 0);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v29,
                                          (Il2CppObject *)StringLiteral_1172/*"1"*/,
                                          (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v66 )
                goto LABEL_287;
              v67 = (int)this;
              v68 = v66;
              v69 = (*eventUpVallInfo)->fields.equipSvtId > 0;
LABEL_204:
              EventDropUpValInfo__SetRateCount(v68, v67, v69, v120 & 1, 0);
              v77 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              goto LABEL_245;
            }
          }
        }
LABEL_273:
        funcId = v10->fields.funcId;
        ++v24;
        if ( !funcId )
          goto LABEL_287;
      }
      v17 = v119;
      LODWORD(max_length) = v119->max_length;
      v19 = v123 + 1;
      if ( (__int64)(v123 + 1) >= (int)max_length )
        return v114 & 1;
    }
  }
LABEL_285:
  v114 = 0;
  return v114 & 1;
}


System_String_o *SkillLvEntity__getFuncDetail(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct System_Int32_array *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  unsigned __int64 v8; // x21
  unsigned __int64 max_length_low; // x9
  LocalizationManager_c *v10; // x0
  System_String_o **p_monitor; // x8

  if ( (byte_4C5792B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C3E564(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5792B = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && funcId->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v6 = this->fields.funcId) == 0) )
    {
LABEL_13:
      sub_1C3E7C0(Instance, v5);
    }
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v8 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(v6->max_length);
      if ( (__int64)v8 >= (int)max_length_low )
        break;
      if ( v8 >= max_length_low )
        sub_1C3E7C8(Instance, v5);
      if ( !v7 )
        goto LABEL_13;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v7,
                   v6->m_Items[v8],
                   (const MethodInfo_33B2F58 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_monitor = (System_String_o **)&Instance[3].monitor;
        return *p_monitor;
      }
      v6 = this->fields.funcId;
      ++v8;
      if ( !v6 )
        goto LABEL_13;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C5204F )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    byte_4C5204F = 1;
  }
  v10 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
  }
  p_monitor = &v10->static_fields->unknownNameText;
  return *p_monitor;
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

  if ( (byte_4C57937 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&StringLiteral_18686/*"down"*/);
    byte_4C57937 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18686/*"down"*/,
           (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_18686/*"down"*/,
                                                                                (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C3E7C0(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1C3EA80(Item);
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

  if ( (byte_4C57936 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&StringLiteral_24452/*"up"*/);
    byte_4C57936 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_24452/*"up"*/,
           (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_24452/*"up"*/,
                                                                                (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C3E7C0(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1C3EA80(Item);
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

  if ( (byte_4C57931 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_10679/*"PlayVoiceNo"*/);
    byte_4C57931 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10679/*"PlayVoiceNo"*/,
            (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_1C3E7C0(0, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10679/*"PlayVoiceNo"*/,
                                  (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C3EA80(result);
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
  const MethodInfo *v14; // x3
  Il2CppClass **v15; // x23
  CGThumbnailListItem_o *v16; // x23
  int32_t v17; // w8
  System_String_o *v18; // x24
  CGThumbnailListItem_c *v19; // x24
  int32_t v20; // w2
  const MethodInfo_346CA9C *v21; // x3
  Il2CppObject *v22; // x1
  __int64 v23; // x24
  __int64 v25; // x0
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C57926 & 1) == 0 )
  {
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__int____TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C3E564(&StringLiteral_15814/*"["*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_16068/*"]"*/);
    byte_4C57926 = 1;
  }
  *(_QWORD *)result = 0;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_1C3E60C(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1);
  max_length = svals->max_length;
  klass = sub_1C3E60C(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
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
        || (klass = (__int64)System_String__Replace_63683016(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15814/*"["*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0)) == 0
        || (klass = (__int64)System_String__Replace_63683016(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_16068/*"]"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0)) == 0
        || (klass = (__int64)System_String__Split((System_String_o *)klass, 0x2Cu, 0, 0)) == 0
        || (v10 = *(_DWORD *)(klass + 24),
            v11 = klass,
            v12 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_object__int____ctor(
              v12,
              (const MethodInfo_346C0FC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v7) )
      {
LABEL_37:
        sub_1C3E7C0(klass, v6);
      }
      if ( v12 )
      {
        klass = sub_1C3E6A0(v12, v7->obj.klass->_1.element_class);
        if ( !klass )
        {
          v25 = sub_1C3E7E4(0);
          sub_1C3E68C(v25, 0);
        }
      }
      if ( v8 >= LODWORD(v7->max_length) )
LABEL_38:
        sub_1C3E7C8(klass, v6);
      v15 = &v7->obj.klass + (int)v8;
      v15[4] = (Il2CppClass *)v12;
      v16 = (CGThumbnailListItem_o *)(v15 + 4);
      sub_1C3E508(v16, (int32_t)v12, v13, v14);
      result[1] = 0;
      if ( v10 >= 1 )
        break;
LABEL_33:
      if ( ++v8 == max_length )
        return v7;
    }
    v17 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_38;
      v18 = *(System_String_o **)(v11 + 8LL * v17 + 32);
      klass = System_Int32__TryParse(v18, result, 0);
      if ( (klass & 1) != 0 )
        break;
      if ( !v18 )
        goto LABEL_37;
      klass = (__int64)System_String__Split(v18, 0x3Au, 0, 0);
      if ( !klass )
        goto LABEL_37;
      v23 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0);
        if ( (klass & 1) != 0 )
        {
          if ( v8 >= LODWORD(v7->max_length) || !*(_DWORD *)(v23 + 24) )
            goto LABEL_38;
          klass = (__int64)v16->klass;
          if ( !v16->klass )
            goto LABEL_37;
          v20 = result[0];
          v22 = *(Il2CppObject **)(v23 + 32);
          v21 = (const MethodInfo_346CA9C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_23:
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)klass,
            v22,
            v20,
            v21);
        }
      }
      v17 = ++result[1];
      if ( result[1] >= v10 )
        goto LABEL_33;
    }
    if ( v8 >= LODWORD(v7->max_length) )
      goto LABEL_38;
    v19 = v16->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0);
    if ( !v19 )
      goto LABEL_37;
    v20 = result[0];
    v21 = (const MethodInfo_346CA9C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v22 = (Il2CppObject *)klass;
    klass = (__int64)v19;
    goto LABEL_23;
  }
  return v7;
}


System_String_o *SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C57930 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_15371/*"VoiceAssetName"*/);
    byte_4C57930 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15371/*"VoiceAssetName"*/,
            (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0;
    script = this->fields.script;
    if ( !script )
      sub_1C3E7C0(0, v4);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15371/*"VoiceAssetName"*/,
                                  (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1C3EA80(result);
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

  if ( (byte_4C57934 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&StringLiteral_15373/*"VoiceVolume"*/);
    byte_4C57934 = 1;
  }
  script = this->fields.script;
  v4 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15373/*"VoiceVolume"*/,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15373/*"VoiceVolume"*/,
                                                                            (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C3E7C0(Item, v5);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v7, v8) / 1000.0;
  sub_1C3EA80(Item);
  SkillLvEntity__getMovePositionUp(v10, v11);
  return result;
}


bool SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C57932 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&StringLiteral_10680/*"PlayVoiceWait"*/);
    byte_4C57932 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10680/*"PlayVoiceWait"*/,
                       (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4C57953 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&StringLiteral_16730/*"afterClearBgmId"*/);
    sub_1C3E564(&StringLiteral_20798/*"indv"*/);
    sub_1C3E564(&StringLiteral_17143/*"beforeClearBgmId"*/);
    sub_1C3E564(&StringLiteral_22884/*"questPhase"*/);
    sub_1C3E564(&StringLiteral_22880/*"questId"*/);
    byte_4C57953 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20798/*"indv"*/,
           (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v7, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22880/*"questId"*/,
           (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22884/*"questPhase"*/,
           (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_17143/*"beforeClearBgmId"*/,
           (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16730/*"afterClearBgmId"*/,
           (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_1C3E7C0(Item, v6);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16);
    return;
  }
LABEL_16:
  sub_1C3EA80(Item);
  SkillLvEntity__GetScriptIntParam(v17, v18, v19, v20);
}


void SkillLvEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C57954 & 1) == 0 )
  {
    sub_1C3E564(&SkillLvEntity___c_TypeInfo);
    byte_4C57954 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillLvEntity___c_TypeInfo->static_fields->__9 = (struct SkillLvEntity___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)SkillLvEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C57955 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_int___ctor__);
    byte_4C57955 = 1;
  }
  v4 = (System_Nullable_int__o)&v6;
  v6 = 0;
  System_Nullable_int____ctor(v4, v3 - 1, (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
  return v6;
}