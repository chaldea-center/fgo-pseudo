void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB95A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB95A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_40536124(
        SkillLvEntity_o *this,
        SkillLvEntity_o *srcEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Array_o *funcId; // x0
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  struct System_Int32_array *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Array_o *svals; // x0
  Il2CppObject *v20; // x0
  struct System_String_array *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IDictionary_TKey__TValue__o *script; // x20
  System_Collections_Generic_Dictionary_object__object__o *v25; // x21

  if ( (byte_49BB95B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, srcEntity);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object___ctor___75400592, v5);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B4CF90(&int___TypeInfo, v7);
    sub_1B4CF90(&string___TypeInfo, v8);
    byte_49BB95B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_1B4D1EC(v9, v10);
  *(_OWORD *)&this->fields.skillId = *(_OWORD *)&srcEntity->fields.skillId;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v14 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v15 = v14;
    v16 = (struct System_Int32_array *)sub_1B4D0CC(v14, int___TypeInfo);
    if ( !v16 )
      goto LABEL_12;
  }
  else
  {
    v16 = 0LL;
  }
  this->fields.funcId = v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.funcId, (int32_t)v16, v11, v12);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v20 = System_Array__Clone(svals, 0LL);
  if ( !v20 )
    goto LABEL_13;
  v15 = v20;
  v21 = (struct System_String_array *)sub_1B4D0CC(v20, string___TypeInfo);
  if ( v21 )
    goto LABEL_14;
LABEL_12:
  sub_1B4D4AC(v15);
LABEL_13:
  v21 = 0LL;
LABEL_14:
  this->fields.svals = v21;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.svals, (int32_t)v21, v17, v18);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor_52785736(
      v25,
      script,
      (const MethodInfo_3257248 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___75400592);
  }
  else
  {
    v25 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v25;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.script, (int32_t)v25, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_49BB959 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_49BB959 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB980 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_2122/*"ActNpcServantId"*/, method);
    byte_49BB980 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_2122/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49BB977 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16339/*"actRarity"*/, method);
    byte_49BB977 = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16339/*"actRarity"*/, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetAddIndiv(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 klass_low; // x1
  System_Collections_Generic_Dictionary_object__object__o *v15; // x0
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v18; // x19
  System_Collections_Generic_List_int__o *v20; // x20
  int32_t v21; // w21
  __int64 v22; // x2
  __int64 v23; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  SkillLvEntity_o *v27; // x0
  const MethodInfo *v28; // x1

  if ( (byte_49BB973 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B4CF90(&long_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__get_Count__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__get_Item__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B4CF90(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_1B4CF90(&StringLiteral_2159/*"AddIndiv"*/, v12);
    byte_49BB973 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_2159/*"AddIndiv"*/,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v15 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v15 )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v15,
           (Il2CppObject *)StringLiteral_2159/*"AddIndiv"*/,
           (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    v18 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
        ? (System_Collections_Generic_List_object__o *)Item
        : 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v18 )
    goto LABEL_26;
  if ( v18->fields._size < 1 )
  {
LABEL_24:
    if ( v20 )
      return System_Collections_Generic_List_int___ToArray(
               v20,
               (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_26:
    sub_1B4D1EC(v15, klass_low);
  }
  v21 = 0;
  while ( 1 )
  {
    v15 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       v18,
                                                                       v21,
                                                                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !v20 || !v15 )
      goto LABEL_26;
    if ( v15->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v15 = (System_Collections_Generic_Dictionary_object__object__o *)j_il2cpp_object_unbox_0(
                                                                       v15,
                                                                       long_TypeInfo,
                                                                       v22,
                                                                       v23);
    klass_low = LODWORD(v15->klass);
    items = v20->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_26;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v20,
        klass_low,
        *(const MethodInfo_35631B8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v20->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
    if ( ++v21 >= v18->fields._size )
      goto LABEL_24;
  }
  sub_1B4D4AC(v15);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v27, v28);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB97E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16373/*"additionalSkillActorType"*/, method);
    byte_49BB97E = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16373/*"additionalSkillActorType"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB97C & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16374/*"additionalSkillId"*/, method);
    byte_49BB97C = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16374/*"additionalSkillId"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB97D & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16376/*"additionalSkillLv"*/, method);
    byte_49BB97D = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16376/*"additionalSkillLv"*/, 1, v2);
}


EventDropUpValInfo_array *__fastcall SkillLvEntity__GetAddStateAndFriendshipUpInfoArray(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v16; // x1
  Il2CppObject *Master_object; // x21
  const MethodInfo *v18; // x1
  struct System_Int32_array *funcId; // x8
  Il2CppObject **v20; // x26
  System_Collections_Generic_Dictionary_string__int__array *v21; // x22
  unsigned __int64 v22; // x28
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // x27
  unsigned __int64 max_length; // x9
  unsigned __int64 v25; // x8
  System_Collections_Generic_Dictionary_object__int__o *v26; // x23
  Il2CppObject *v27; // x25
  int monitor; // w8
  EventDropUpValInfo_o *v29; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  bool v32; // w8
  Il2CppObject **v33; // x29
  int32_t Item; // w25
  Il2CppObject *v35; // x26
  bool v36; // w8
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  const MethodInfo_3581D34 *v41; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49BB989 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1B4CF90(&EventDropUpValInfo_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v11);
    sub_1B4CF90(&StringLiteral_9792/*"OnlyMaxFuncGroupId"*/, v12);
    sub_1B4CF90(&StringLiteral_13348/*"Target"*/, v13);
    byte_49BB989 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !this->fields.funcId )
  {
    if ( v14 )
    {
      v41 = (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__;
      return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(v14, v41);
    }
    goto LABEL_36;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
  Values = SkillLvEntity__getValues(this, v18);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_36;
  v20 = (Il2CppObject **)&StringLiteral_9792/*"OnlyMaxFuncGroupId"*/;
  v21 = Values;
  v22 = 0LL;
  m_Items = Values->m_Items;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v22 >= (int)max_length )
      break;
    if ( v22 >= max_length )
      goto LABEL_42;
    if ( !Master_object )
      goto LABEL_36;
    Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                           &entity,
                                                                           funcId->m_Items[v22 + 1],
                                                                           (const MethodInfo_319D9E8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Values & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_36;
      v25 = v21->max_length;
      if ( (__int64)v22 >= (int)v25 )
        break;
      if ( v22 >= v25 )
LABEL_42:
        sub_1B4D1F4(Values, v16);
      v26 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v22];
      if ( v26 )
      {
        v27 = entity;
        if ( !entity )
          goto LABEL_36;
        monitor = (int)entity[1].monitor;
        switch ( monitor )
        {
          case 1:
            goto LABEL_20;
          case 111:
            v33 = v20;
            if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                   (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v22],
                   (Il2CppObject *)StringLiteral_13348/*"Target"*/,
                   (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v26,
                       (Il2CppObject *)StringLiteral_13348/*"Target"*/,
                       (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            }
            else
            {
              Item = 0;
            }
            v35 = entity;
            v29 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
            EventDropUpValInfo___ctor_39449288(v29, 0, (FunctionEntity_o *)v35, Item, 0LL);
            v20 = v33;
            v36 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v26,
                    *v33,
                    (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            Values = 0LL;
            if ( v36 )
              Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v26,
                                                                                     *v33,
                                                                                     (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !v29 )
              goto LABEL_36;
            break;
          case 16:
LABEL_20:
            v29 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
            EventDropUpValInfo___ctor(v29, 0, (FunctionEntity_o *)v27, 0LL);
            v32 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v26,
                    *v20,
                    (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            Values = 0LL;
            if ( v32 )
              Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v26,
                                                                                     *v20,
                                                                                     (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !v29 )
              goto LABEL_36;
            break;
          default:
            goto LABEL_35;
        }
        v29->fields.groupId = (int)Values;
        if ( !v14 )
          goto LABEL_36;
        items = v14->fields._items;
        v38 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v29,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v29;
          sub_1B4CF34((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v29, v30, v31);
        }
      }
    }
LABEL_35:
    funcId = this->fields.funcId;
    ++v22;
    if ( !funcId )
      goto LABEL_36;
  }
  if ( !v14 )
LABEL_36:
    sub_1B4D1EC(Values, v16);
  v41 = (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__;
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(v14, v41);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB97F & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16802/*"battleStartRemainingTurn"*/, method);
    byte_49BB97F = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16802/*"battleStartRemainingTurn"*/, 0, v2);
}


bool __fastcall SkillLvEntity__GetBonusUpVal(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
  EventUpValInfo_o **v5; // x28
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Values; // x0
  const MethodInfo *v23; // x1
  struct System_Int32_array *v24; // x8
  const MethodInfo_324ED68 **v25; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x24
  unsigned __int64 v27; // x29
  unsigned __int64 max_length; // x9
  unsigned __int64 MasterName_k__BackingField_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v30; // x25
  EventUpValInfo_o *v31; // x8
  const MethodInfo_324ED68 **v32; // x10
  const MethodInfo_324ED68 *v33; // x2
  EventUpValInfo_o **v34; // x27
  const MethodInfo_324ED68 **v35; // x28
  int32_t Item; // w0
  EventUpValInfo_o **v37; // x8
  int32_t v38; // w26
  Il2CppObject *v39; // x28
  EventDropUpValInfo_o *v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppArrayBounds *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppArrayBounds *v46; // x8
  int32_t dispLimitCount; // [xsp+0h] [xbp-90h]
  int32_t limitCount; // [xsp+4h] [xbp-8Ch]
  EventUpValInfo_o **v50; // [xsp+8h] [xbp-88h]
  ServantEntity_o *v51; // [xsp+10h] [xbp-80h]
  char v52; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_Dictionary_string__int__o **p_revision; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v5 = eventUpVallInfo;
  if ( (byte_49BB964 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionGroupMaster___, eventUpVallInfo);
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B4CF90(&DataManager_TypeInfo, v9);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v13);
    sub_1B4CF90(&EventDropUpValInfo_TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v15);
    sub_1B4CF90(&StringLiteral_1335/*"2"*/, v16);
    sub_1B4CF90(&StringLiteral_13348/*"Target"*/, v17);
    sub_1B4CF90(&StringLiteral_1190/*"1"*/, v18);
    sub_1B4CF90(&StringLiteral_1138/*"0"*/, v19);
    byte_49BB964 = 1;
  }
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *v5 )
    {
      if ( (*v5)->fields.svtId < 1 )
      {
        v51 = 0LL;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*v5 || !Values )
          goto LABEL_53;
        v51 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   Values,
                                   (*v5)->fields.svtId,
                                   (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      Values = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getValues(this, v23);
      v24 = this->fields.funcId;
      if ( v24 )
      {
        v52 = 0;
        v25 = (const MethodInfo_324ED68 **)&Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
        v26 = Values;
        v27 = 0LL;
        p_revision = (System_Collections_Generic_Dictionary_string__int__o **)&Values->fields.revision;
        do
        {
          max_length = v24->max_length;
          if ( (__int64)v27 >= (int)max_length )
          {
            LOBYTE(funcId) = v52;
            return (char)funcId;
          }
          if ( v27 >= max_length )
            goto LABEL_57;
          if ( !Master_object )
            break;
          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                   &entity,
                                                                   v24->m_Items[v27 + 1],
                                                                   (const MethodInfo_319D9E8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Values & 1) != 0 )
          {
            if ( !entity || !questPhaseEntity )
              break;
            Values = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestPhaseEntity__IsMatchIndividuality(
                                                                     questPhaseEntity,
                                                                     (System_Int32_array *)entity[5].klass,
                                                                     0LL);
            if ( ((unsigned __int8)Values & 1) != 0 )
            {
              if ( !v26 )
                break;
              MasterName_k__BackingField_low = LODWORD(v26->fields._MasterName_k__BackingField);
              if ( (__int64)v27 >= (int)MasterName_k__BackingField_low )
              {
                LOBYTE(funcId) = 0;
                return (char)funcId;
              }
              if ( v27 >= MasterName_k__BackingField_low )
LABEL_57:
                sub_1B4D1F4(Values, v23);
              v30 = (System_Collections_Generic_Dictionary_object__int__o *)p_revision[v27];
              if ( v30 )
              {
                if ( !entity )
                  break;
                if ( LODWORD(entity[1].monitor) == 111 )
                {
                  Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_object__int__o *)p_revision[v27],
                                                                           (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                                                           (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) != 0 )
                  {
                    Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                             v30,
                                                                             (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                                                             *v25);
                    if ( (int)Values < 1 )
                      goto LABEL_34;
                    if ( v51 )
                    {
                      v31 = *v5;
                      if ( !*v5 )
                        break;
                      v32 = v25;
                      v33 = *v25;
                      v34 = v5;
                      dispLimitCount = v31->fields.dispLimitCount;
                      limitCount = v31->fields.limitCount;
                      v35 = v32;
                      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                               v30,
                               (Il2CppObject *)StringLiteral_1335/*"2"*/,
                               v33);
                      Values = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                               v51,
                                                                               limitCount,
                                                                               dispLimitCount,
                                                                               Item,
                                                                               0LL);
                      v37 = v34;
                      v25 = v35;
                      v5 = v37;
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
LABEL_34:
                        v50 = v5;
                        if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                               v30,
                               (Il2CppObject *)StringLiteral_13348/*"Target"*/,
                               (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                        {
                          v38 = System_Collections_Generic_Dictionary_object__int___get_Item(
                                  v30,
                                  (Il2CppObject *)StringLiteral_13348/*"Target"*/,
                                  *v25);
                        }
                        else
                        {
                          v38 = 0;
                        }
                        v39 = entity;
                        v40 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
                        EventDropUpValInfo___ctor_39449288(v40, 0, (FunctionEntity_o *)v39, v38, 0LL);
                        if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                               v30,
                               (Il2CppObject *)StringLiteral_1138/*"0"*/,
                               *v25) == 1 )
                        {
                          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v30,
                                                                                   (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                                                                   *v25);
                          v5 = v50;
                          if ( !*v50 || !v40 )
                            break;
                          EventDropUpValInfo__SetAddCount(v40, (int32_t)Values, (*v50)->fields.equipSvtId > 0, 0, 0LL);
                        }
                        else
                        {
                          Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v30,
                                                                                   (Il2CppObject *)StringLiteral_1138/*"0"*/,
                                                                                   *v25);
                          v5 = v50;
                          if ( (_DWORD)Values == 2 )
                          {
                            Values = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v30,
                                                                                     (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                                                                     *v25);
                            if ( !*v50 || !v40 )
                              break;
                            EventDropUpValInfo__SetRateCount(
                              v40,
                              (int32_t)Values,
                              (*v50)->fields.equipSvtId > 0,
                              0,
                              0LL);
                          }
                        }
                        if ( !*v5 )
                          break;
                        Values = (DataMasterBase_TMaster__TEntity__PKType__o *)(*v5)->fields.dropList;
                        if ( !Values )
                          break;
                        v43 = *(Il2CppArrayBounds **)&Values->fields._MasterKind_k__BackingField;
                        v44 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                        ++HIDWORD(Values->fields._MasterName_k__BackingField);
                        if ( !v43 )
                          break;
                        v45 = SLODWORD(Values->fields._MasterName_k__BackingField);
                        if ( (unsigned int)v45 >= v43[3].length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            (System_Collections_Generic_List_object__o *)Values,
                            (Il2CppObject *)v40,
                            *(const MethodInfo_35801DC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v46 = &v43[v45];
                          LODWORD(Values->fields._MasterName_k__BackingField) = v45 + 1;
                          v46[4] = (Il2CppArrayBounds)v40;
                          sub_1B4CF34((CGThumbnailListItem_o *)&v46[4], (int32_t)v40, v41, v42);
                        }
                        v52 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          v24 = this->fields.funcId;
          ++v27;
        }
        while ( v24 );
      }
    }
LABEL_53:
    sub_1B4D1EC(Values, v23);
  }
  return (char)funcId;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillLvEntity__GetEventIndividuality(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct System_Int32_array *funcId; // x27
  __int64 v25; // x8
  unsigned __int64 v26; // x28
  struct System_Int32_array *v27; // x8
  int32_t v28; // w26
  SkillLvEntity_o *v30; // x21
  SkillLvEntity___c_c *v31; // x0
  System_Func_object__int__o *_9__62_0; // x22
  Il2CppObject *v33; // x23
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  int32_t v38; // [xsp+Ch] [xbp-74h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *v40; // [xsp+18h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_49BB983 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&index);
    sub_1B4CF90(&DataManager_TypeInfo, v15);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v16);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, v17);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___, v18);
    sub_1B4CF90(&System_Func_QuestGroupEntity__int__TypeInfo, v19);
    sub_1B4CF90(&int___TypeInfo, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v21);
    sub_1B4CF90(&Method_SkillLvEntity___c__GetEventIndividuality_b__62_0__, v22);
    this = (SkillLvEntity_o *)sub_1B4CF90(&SkillLvEntity___c_TypeInfo, v23);
    byte_49BB983 = 1;
  }
  entity = 0LL;
  v40 = 0LL;
  if ( !questTvals )
    goto LABEL_40;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  funcId = v14->fields.funcId;
  if ( !funcId )
    goto LABEL_40;
  v25 = *(_QWORD *)&funcId->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    v38 = questId;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v25 )
        goto LABEL_41;
      v27 = v14->fields.funcId;
      if ( !v27 )
        goto LABEL_40;
      if ( v27->max_length <= index )
        goto LABEL_41;
      v28 = funcId->m_Items[v26 + 1];
      if ( v28 != v27->m_Items[index + 1] )
      {
        if ( !funcGroupMaster )
          goto LABEL_40;
        this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(funcGroupMaster, &entity, v28, eventId, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !funcMaster )
            goto LABEL_40;
          this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)funcMaster,
                                      &v40,
                                      v28,
                                      (const MethodInfo_319D9E8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
      }
      LODWORD(v25) = funcId->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_20;
    }
    if ( !v40 )
      goto LABEL_40;
    questTvals = (System_Int32_array *)v40[5].klass;
LABEL_20:
    questId = v38;
  }
  if ( !questTvals )
    goto LABEL_40;
  if ( *(_QWORD *)&questTvals->max_length )
    return questTvals;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this )
    goto LABEL_40;
  this = (SkillLvEntity_o *)QuestGroupMaster__GetEntityListByGroupId((QuestGroupMaster_o *)this, eventId, 1, 0LL);
  if ( !this )
    goto LABEL_40;
  if ( questId < 1 )
    return questTvals;
  v30 = this;
  if ( this->fields.chargeTurn < 1 )
    return questTvals;
  v31 = SkillLvEntity___c_TypeInfo;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v31 = SkillLvEntity___c_TypeInfo;
  }
  _9__62_0 = (System_Func_object__int__o *)v31->static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = SkillLvEntity___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v31->static_fields->__9;
    _9__62_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_QuestGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__62_0, v33, Method_SkillLvEntity___c__GetEventIndividuality_b__62_0__, 0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__62_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                               (System_Func_TSource__TResult__o *)_9__62_0,
                                                               (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v37,
         questId,
         (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_1B4D038(int___TypeInfo, 1LL);
  if ( !this )
LABEL_40:
    sub_1B4D1EC(this, *(_QWORD *)&index);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
LABEL_41:
    sub_1B4D1F4(this, *(_QWORD *)&index);
  LODWORD(this->fields.funcId) = -1;
  return questTvals;
}


System_Collections_Generic_Dictionary_string__int__o *__fastcall SkillLvEntity__GetFollowerValsDictionary(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array *StringArray; // x0
  System_String_array *v10; // x20
  System_Collections_Generic_Dictionary_object__int__o *v11; // x19
  System_String_o *v12; // x0
  __int64 v13; // x1
  int klass; // w9
  System_String_o *v15; // x20
  int v16; // w8
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49BB982 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_19209/*"followerVals"*/, v5);
    sub_1B4CF90(&StringLiteral_15507/*"["*/, v6);
    sub_1B4CF90(&StringLiteral_1/*""*/, v7);
    sub_1B4CF90(&StringLiteral_15763/*"]"*/, v8);
    byte_49BB982 = 1;
  }
  result = 0;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19209/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v10 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v11 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v11,
    (const MethodInfo_324E434 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v10->max_length )
    goto LABEL_20;
  v12 = v10->m_Items[0];
  if ( !v12
    || (v12 = System_String__Replace_61140016(
                v12,
                (System_String_o *)StringLiteral_15507/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL)) == 0LL
    || (v12 = System_String__Replace_61140016(
                v12,
                (System_String_o *)StringLiteral_15763/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL)) == 0LL
    || (v12 = (System_String_o *)System_String__Split(v12, 0x2Cu, 0, 0LL), v19 = 0, !v12) )
  {
LABEL_21:
    sub_1B4D1EC(v12, v13);
  }
  klass = (int)v12[1].klass;
  v15 = v12;
  if ( klass >= 1 )
  {
    v16 = 0;
    while ( v16 < (unsigned int)klass )
    {
      v12 = (System_String_o *)System_Int32__TryParse(*((System_String_o **)&v15[1].monitor + v16), &result, 0LL);
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        v12 = System_Int32__ToString((int32_t)&v19, 0LL);
        if ( !v11 )
          goto LABEL_21;
        System_Collections_Generic_Dictionary_object__int___Add(
          v11,
          (Il2CppObject *)v12,
          result,
          (const MethodInfo_324EDE8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v16 = v19 + 1;
      v19 = v16;
      klass = (int)v15[1].klass;
      if ( v16 >= klass )
        return (System_Collections_Generic_Dictionary_string__int__o *)v11;
    }
LABEL_20:
    sub_1B4D1F4(v12, v13);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v11;
}


System_Nullable_int__o __fastcall SkillLvEntity__GetFuncIndexForSplitFuncSequence(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  SkillLvEntity___c_c *v7; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *v9; // x20
  System_Func_long__Nullable_int___o *_9__45_0; // x21
  Il2CppObject *v11; // x22
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Nullable_int__o v17; // 0:x3.8

  if ( (byte_49BB974 & 1) == 0 )
  {
    sub_1B4CF90(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____, method);
    sub_1B4CF90(&System_Func_long__Nullable_int___TypeInfo, v3);
    sub_1B4CF90(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__45_0__, v4);
    sub_1B4CF90(&SkillLvEntity___c_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_19369/*"funcPositionForSplitFuncSequence"*/, v6);
    byte_49BB974 = 1;
  }
  v7 = SkillLvEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v7 = SkillLvEntity___c_TypeInfo;
  }
  v9 = (System_String_o *)StringLiteral_19369/*"funcPositionForSplitFuncSequence"*/;
  _9__45_0 = v7->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = SkillLvEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v7->static_fields->__9;
    _9__45_0 = (System_Func_long__Nullable_int___o *)sub_1B4D1DC(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__45_0,
      v11,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__45_0__,
      0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = _9__45_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v13, v14);
  }
  v17 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v9,
           (System_Func_TSource__TDestination__o *)_9__45_0,
           v17,
           (const MethodInfo_2F08154 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
}


System_Int32_array *__fastcall SkillLvEntity__GetIntArrayFromScript(
        SkillLvEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_int__o *v16; // x19
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  System_Collections_Generic_List_object__o *v18; // x22
  Il2CppObject *Value_object; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  unsigned int *v25; // x0
  __int64 v26; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  void *v31; // x0
  void *v32; // x21
  int v33; // w1
  int v34; // w20
  __int64 v35; // x20
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49BB978 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_GetValue_List_object____, key);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_1B4CF90(&long_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object___ctor__, v13);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B4CF90(&System_Collections_Generic_List_object__TypeInfo, v15);
    byte_49BB978 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v16 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_object___ctor__);
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   (Il2CppObject *)v18,
                   (const MethodInfo_2EEF7D0 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_object )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)Value_object,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v21 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v37,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_18;
    }
    if ( !v16 )
      sub_1B4D1EC(v21, v22);
    if ( !v37.fields._current )
      sub_1B4D1EC(0LL, v22);
    if ( v37.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v25 = (unsigned int *)j_il2cpp_object_unbox_0(v37.fields._current, long_TypeInfo, v23, v24);
    v26 = *v25;
    items = v16->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v16->fields._version;
    if ( !items )
      sub_1B4D1EC(v25, v26);
    size = v16->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v16,
        v26,
        *(const MethodInfo_35631B8 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = size + 1;
      items->m_Items[size + 1] = v26;
    }
  }
  sub_1B4D4AC(v37.fields._current);
  v32 = v31;
  v34 = v33;
  __cxa_end_catch();
  if ( v34 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C36024();
  }
  v35 = *(_QWORD *)__cxa_begin_catch(v32);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v35 )
    sub_1B4D1E4(v35);
LABEL_18:
  if ( !v16 )
LABEL_20:
    sub_1B4D1EC(Value_object, v20);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Func_object__object__o *v6; // x20

  if ( (byte_49BB975 & 1) == 0 )
  {
    sub_1B4CF90(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method);
    sub_1B4CF90(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v3);
    sub_1B4CF90(&System_Func_List_object___List_int___TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_16788/*"battleEffectId"*/, v5);
    byte_49BB975 = 1;
  }
  v6 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v6, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_16788/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v6,
                                                     0LL,
                                                     (const MethodInfo_2F082BC *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


System_Int32_array *__fastcall SkillLvEntity__GetRevivalTargetArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB987 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22649/*"revivalTargetArray"*/, method);
    byte_49BB987 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22649/*"revivalTargetArray"*/, 0LL);
}


int32_t __fastcall SkillLvEntity__GetScriptIntParam(
        SkillLvEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  SkillLvEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_49BB97A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B4CF90(&long_TypeInfo, v8);
    byte_49BB97A = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B4D1EC(script, key);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1B4D4AC(script);
  return SkillLvEntity__IsNoTargetSkipSkill(v13, v14);
}


SelectTreasureDeviceInfo_o *__fastcall SkillLvEntity__GetSelectTreasureDeviceInfo(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Value_object__object; // x19
  Il2CppObject *v7; // x0

  if ( (byte_49BB986 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_GetValue_string__object___, method);
    sub_1B4CF90(&Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___, v3);
    sub_1B4CF90(&JsonManager_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_22812/*"selectTreasureDeviceInfo"*/, v5);
    byte_49BB986 = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22812/*"selectTreasureDeviceInfo"*/,
                           0LL,
                           (const MethodInfo_2EEFF7C *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__Deserialize_object_(
           Value_object__object,
           (const MethodInfo_2F6ACA0 *)Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
    Value_object__object = v7;
    if ( v7 )
      SelectTreasureDeviceInfo__AssignTdIndexAutomatically((SelectTreasureDeviceInfo_o *)v7, 0LL);
  }
  return (SelectTreasureDeviceInfo_o *)Value_object__object;
}


DataVals_array *__fastcall SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  System_Int32_array *funcId; // x20
  FunctionMaster_o *v6; // x21
  const MethodInfo *v7; // x1
  DataVals_array *DataValsList; // x0
  __int64 v9; // x1

  if ( (byte_49BB95E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    byte_49BB95E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v6 = (FunctionMaster_o *)Master_object;
  DataValsList = SkillLvEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_1B4D1EC(DataValsList, v9);
  return FunctionMaster__GetSetTypeDataValArray(v6, funcId, DataValsList, 0LL);
}


System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *__fastcall SkillLvEntity__GetSvtChangeBgm(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  System_Collections_Generic_Dictionary_string__object__o *v19; // x20
  System_Collections_Generic_List_object__o *v20; // x21
  Il2CppObject *current; // x21
  SkillLvEntity_SvtChangeBgm_o *v22; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x20
  __int64 methodPtr_low; // x9
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49BB979 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_GetValue_List_object____, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__GetEnumerator__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object___ctor__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo, v12);
    sub_1B4CF90(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_1B4CF90(&SkillLvEntity_SvtChangeBgm_TypeInfo, v14);
    sub_1B4CF90(&StringLiteral_23414/*"svtBgmChange"*/, v15);
    byte_49BB979 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_23414/*"svtBgmChange"*/,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v16;
  v19 = this->fields.script;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)BasicHelper__GetValue_object_(
                                                                        v19,
                                                                        (System_String_o *)StringLiteral_23414/*"svtBgmChange"*/,
                                                                        (Il2CppObject *)v20,
                                                                        (const MethodInfo_2EEF7D0 *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_21:
    sub_1B4D1EC(script, v17);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)script,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v36.fields._current;
    v22 = (SkillLvEntity_SvtChangeBgm_o *)sub_1B4D1DC(SkillLvEntity_SvtChangeBgm_TypeInfo);
    v24 = (Il2CppObject *)v22;
    if ( current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1B4D4AC(current);
LABEL_19:
        sub_1B4D1EC(v26, v27);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v22, (System_Collections_Generic_Dictionary_string__object__o *)current, v23);
    if ( !v16 )
      goto LABEL_19;
    items = v16->fields._items;
    v31 = Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__;
    ++v16->fields._version;
    if ( !items )
      sub_1B4D1EC(v26, v27);
    size = v16->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v24,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v24;
      sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v24, v28, v29);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v16;
}


void __fastcall SkillLvEntity__GetUniqueFuncIds(
        SkillLvEntity_o *this,
        System_Collections_Generic_HashSet_int__o **ret,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *funcId; // x1
  System_Collections_Generic_HashSet_int__o *isAddState; // x0
  const MethodInfo *v10; // x1
  DataVals_array *DataValsList; // x21
  Il2CppObject *Master_object; // x22
  struct System_Int32_array *v13; // x8
  SkillLvMaster_o *v14; // x23
  unsigned __int64 v15; // x27
  unsigned __int64 max_length; // x9
  DataVals_o *v17; // x24
  int32_t v18; // w1
  int32_t Param; // w25
  int32_t v20; // w1
  const MethodInfo *v21; // x4
  SkillLvEntity_o *v23; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49BB985 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, ret);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    byte_49BB985 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  funcId = (System_Collections_Generic_IEnumerable_T__o *)this->fields.funcId;
  if ( funcId )
  {
    isAddState = *ret;
    if ( !*ret )
      goto LABEL_32;
    System_Collections_Generic_HashSet_int___UnionWith(
      isAddState,
      funcId,
      (const MethodInfo_343F5F0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v10);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v13 = this->fields.funcId;
    if ( !v13 )
LABEL_32:
      sub_1B4D1EC(isAddState, funcId);
    v14 = (SkillLvMaster_o *)isAddState;
    v15 = 0LL;
    while ( 1 )
    {
      max_length = v13->max_length;
      if ( (__int64)v15 >= (int)max_length )
        break;
      if ( v15 >= max_length )
        goto LABEL_34;
      if ( !Master_object )
        goto LABEL_32;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                  &entity,
                                                                  v13->m_Items[v15 + 1],
                                                                  (const MethodInfo_319D9E8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_32;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_32;
          if ( v15 >= DataValsList->max_length )
LABEL_34:
            sub_1B4D1F4(isAddState, funcId);
          if ( !entity )
            goto LABEL_32;
          v17 = DataValsList->m_Items[v15];
          if ( !v17 )
            goto LABEL_32;
          DataVals__SetTempType(
            DataValsList->m_Items[v15],
            (FunctionMaster_o *)Master_object,
            (int32_t)entity[1].monitor,
            0LL);
          v18 = DataVals__isParam(v17, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v17, v18, 0, 0LL);
          v20 = DataVals__isParam(v17, 27, 0LL) ? 27 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v17, v20, 0, 0LL);
          if ( !v14 )
            goto LABEL_32;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v14,
                                                                      &v23,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      v21);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_32;
            funcId = (System_Collections_Generic_IEnumerable_T__o *)v23->fields.funcId;
            if ( funcId )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_32;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                funcId,
                (const MethodInfo_343F5F0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v13 = this->fields.funcId;
      ++v15;
      if ( !v13 )
        goto LABEL_32;
    }
  }
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB981 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_15279/*"WarBoardBreakPointDamage"*/, method);
    byte_49BB981 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15279/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool __fastcall SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB984 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16375/*"additionalSkillInsertCurrentSkillAfter"*/, method);
    byte_49BB984 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16375/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49BB971 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&StringLiteral_16581/*"aress"*/, v3);
    byte_49BB971 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_16581/*"aress"*/,
                       (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsContainsTurnOrCountBuff(SkillLvEntity_o *this, const MethodInfo *method)
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
    sub_1B4D1EC(SetTypeDataValArray, v3);
  max_length = SetTypeDataValArray->max_length;
  v5 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    if ( v6 >= max_length )
      sub_1B4D1F4(SetTypeDataValArray, v3);
    v8 = v5->m_Items[v6];
    if ( !v8 )
      goto LABEL_16;
    funcType = v8->fields.funcType;
    if ( funcType == 1 || funcType == 130 || funcType == 16 )
    {
      if ( DataVals__GetParam(v8, 1, 0, 0LL) > 0 )
        return v7;
      SetTypeDataValArray = (DataVals_array *)DataVals__GetParam(v8, 2, 0, 0LL);
      if ( (int)SetTypeDataValArray > 0 )
        return 1;
    }
    max_length = v5->max_length;
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillLvEntity__IsEnableTarget(SkillLvEntity_o *this, bool isCheckHate, const MethodInfo *method)
{
  bool v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  SkillLvEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  v3 = isCheckHate;
  if ( (byte_49BB972 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, isCheckHate);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B4CF90(&long_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_5859/*"EnableTarget"*/, v7);
    byte_49BB972 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_5859/*"EnableTarget"*/,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v3;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_5859/*"EnableTarget"*/,
                                                                            (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B4D1EC(Item, v9);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12) == 1;
  sub_1B4D4AC(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v14, v15);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB976 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19925/*"ignoreWhiteFade"*/, method);
    byte_49BB976 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19925/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB97B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21817/*"noTargetSkipSkill"*/, method);
    byte_49BB97B = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_21817/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49BB970 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&StringLiteral_22650/*"revivalUnder"*/, v3);
    byte_49BB970 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_22650/*"revivalUnder"*/,
                       (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49BB96F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&StringLiteral_22651/*"revivalUp"*/, v3);
    byte_49BB96F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_22651/*"revivalUp"*/,
                       (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSetGroupId(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v5; // x1
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__int__array *v7; // x19
  bool v8; // w20
  int v9; // w21

  if ( (byte_49BB988 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_1B4CF90(&StringLiteral_9792/*"OnlyMaxFuncGroupId"*/, v3);
    byte_49BB988 = 1;
  }
  Values = SkillLvEntity__getValues(this, method);
  if ( !Values )
    goto LABEL_12;
  max_length = Values->max_length;
  v7 = Values;
  v8 = max_length > 0;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1B4D1F4(Values, v5);
      Values = (System_Collections_Generic_Dictionary_string__int__array *)v7->m_Items[v9];
      if ( !Values )
        break;
      Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                             (System_Collections_Generic_Dictionary_object__int__o *)Values,
                                                                             (Il2CppObject *)StringLiteral_9792/*"OnlyMaxFuncGroupId"*/,
                                                                             (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)Values & 1) == 0 )
      {
        max_length = v7->max_length;
        v8 = ++v9 < max_length;
        if ( v9 < max_length )
          continue;
      }
      return v8;
    }
LABEL_12:
    sub_1B4D1EC(Values, v5);
  }
  return v8;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_49BB96C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, vals);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v4);
    this = (SkillLvEntity_o *)sub_1B4CF90(&StringLiteral_2308/*"ApplySupportSvt"*/, v5);
    byte_49BB96C = 1;
  }
  if ( !vals )
    sub_1B4D1EC(this, vals);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)StringLiteral_2308/*"ApplySupportSvt"*/,
           (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)vals,
            (Il2CppObject *)StringLiteral_2308/*"ApplySupportSvt"*/,
            (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49BB96A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&StringLiteral_15075/*"VoiceVolume"*/, v3);
    byte_49BB96A = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15075/*"VoiceVolume"*/,
                       (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall SkillLvEntity__getCondition(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.script;
}


DataVals_array *__fastcall SkillLvEntity__getDataValsList(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_array *svals; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_String_array *v8; // x8
  DataVals_array *v9; // x19
  __int64 v10; // x24
  __int64 v11; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x26
  System_String_o *v14; // x22
  DataVals_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  DataVals_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v22; // x0

  if ( (byte_49BB95D & 1) == 0 )
  {
    sub_1B4CF90(&DataVals___TypeInfo, method);
    sub_1B4CF90(&DataVals_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49BB95D = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v9 = (DataVals_array *)sub_1B4D038(DataVals___TypeInfo, 1LL);
    v18 = (DataVals_o *)sub_1B4D1DC(DataVals_TypeInfo);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v9 )
    {
      if ( v18 )
      {
        v6 = sub_1B4D0CC(v18, v9->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v22 = sub_1B4D210(v6);
          sub_1B4D0B8(v22, 0LL);
        }
      }
      if ( !v9->max_length )
LABEL_20:
        sub_1B4D1F4(v6, v7);
      v9->m_Items[0] = v18;
      sub_1B4CF34((CGThumbnailListItem_o *)v9->m_Items, (int32_t)v18, v19, v20);
      return v9;
    }
LABEL_13:
    sub_1B4D1EC(v6, v7);
  }
  v6 = sub_1B4D038(DataVals___TypeInfo, svals->max_length);
  v8 = this->fields.svals;
  if ( !v8 )
    goto LABEL_13;
  v9 = (DataVals_array *)v6;
  v10 = 4LL;
  v11 = 32LL;
  while ( 1 )
  {
    max_length = v8->max_length;
    v13 = v10 - 4;
    if ( v10 - 4 >= (int)max_length )
      return v9;
    if ( v13 >= max_length )
      goto LABEL_20;
    v14 = (System_String_o *)*((_QWORD *)&v8->obj.klass + v10);
    v15 = (DataVals_o *)sub_1B4D1DC(DataVals_TypeInfo);
    DataVals___ctor(v15, v14, 0LL);
    if ( v9 )
    {
      if ( v15 )
      {
        v6 = sub_1B4D0CC(v15, v9->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v13 >= v9->max_length )
        goto LABEL_20;
      *((_QWORD *)&v9->obj.klass + v10) = v15;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)v9 + v11), (int32_t)v15, v16, v17);
      v8 = this->fields.svals;
      ++v10;
      v11 += 8LL;
      if ( v8 )
        continue;
    }
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail(SkillLvEntity_o *this, bool isShort, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_String_o *Detail; // x20

  if ( (byte_49BB95F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillDetailMaster___, isShort);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B4CF90(&SkillDetailParamFormatResolver_TypeInfo, v6);
    byte_49BB95F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_1B4D1EC(Instance, v8);
  }
  Detail = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v9);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  return SkillDetailParamFormatResolver__Apply(Detail, this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_40524720(
        SkillLvEntity_o *this,
        int32_t lv,
        bool isShort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x22
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  System_String_o *Detail; // x0
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49BB960 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_8067/*"LEVEL_DETAIL_INFO"*/, v8);
    sub_1B4CF90(&StringLiteral_1/*""*/, v9);
    byte_49BB960 = 1;
  }
  if ( lv <= 0 )
  {
    v15 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8067/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v18 = lv;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
    v15 = (Il2CppObject *)System_String__Format(v10, v14, 0LL);
  }
  Detail = SkillLvEntity__getDetail(this, isShort, (const MethodInfo *)isShort);
  return System_String__Format(Detail, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillLvEntity__getEventUpVal(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  Il2CppObject *v30; // x27
  const MethodInfo *v31; // x1
  Il2CppObject *v32; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *QuestPhaseIndividualList; // x0
  System_Int32_array *Individuality; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x26
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v37; // x29
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v39; // x8
  unsigned __int64 v40; // x8
  System_Collections_Generic_Dictionary_object__int__o *v41; // x19
  Il2CppObject *v42; // x8
  int monitor; // w24
  System_Int32_array *klass; // x3
  const MethodInfo *v45; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  __int64 *v48; // x8
  bool v50; // [xsp+4h] [xbp-ACh]
  ItemMaster_o *Master_object; // [xsp+8h] [xbp-A8h]
  int32_t v52; // [xsp+14h] [xbp-9Ch]
  unsigned int v53; // [xsp+1Ch] [xbp-94h]
  ServantEntity_o *v54; // [xsp+20h] [xbp-90h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+28h] [xbp-88h]
  EventUpValSetupInfo_o *v56; // [xsp+30h] [xbp-80h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+38h] [xbp-78h]
  FunctionGroupEntity_o *v58; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49BB965 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionGroupMaster___, *(_QWORD *)&wearersSvtId);
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v19);
    sub_1B4CF90(&DataManager_TypeInfo, v20);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v24);
    sub_1B4CF90(&StringLiteral_1396/*"3"*/, v25);
    sub_1B4CF90(&StringLiteral_1335/*"2"*/, v26);
    sub_1B4CF90(&StringLiteral_13348/*"Target"*/, v27);
    sub_1B4CF90(&StringLiteral_1190/*"1"*/, v28);
    sub_1B4CF90(&StringLiteral_6111/*"EventId"*/, v29);
    byte_49BB965 = 1;
  }
  v58 = 0LL;
  entity = 0LL;
  if ( !setupInfo || !this->fields.funcId )
  {
LABEL_94:
    LOBYTE(QuestPhaseIndividualList) = 0;
    return (unsigned __int8)QuestPhaseIndividualList & 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
  v30 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
  v32 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  v52 = wearesLimitCount;
  v53 = wearersSvtId;
  if ( wearersSvtId < 1 )
  {
    v54 = 0LL;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !QuestPhaseIndividualList )
      goto LABEL_100;
    v54 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               QuestPhaseIndividualList,
                               wearersSvtId,
                               (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  Values = SkillLvEntity__getValues(this, v31);
  v56 = setupInfo;
  QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                                                             setupInfo,
                                                                             eventId,
                                                                             0LL);
  funcId = this->fields.funcId;
  questPhaseIndividualityList = (System_Int32_array *)QuestPhaseIndividualList;
  if ( !funcId )
    goto LABEL_100;
  v50 = !isOwner;
  m_Items = Values->m_Items;
  v37 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v37 >= (int)max_length )
      goto LABEL_94;
    if ( v37 >= max_length )
      goto LABEL_101;
    if ( !v30 )
      goto LABEL_100;
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                                                                               &entity,
                                                                               funcId->m_Items[v37 + 1],
                                                                               (const MethodInfo_319D9E8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
      goto LABEL_85;
    if ( isFuncGroup )
    {
      v39 = this->fields.funcId;
      if ( !v39 )
        goto LABEL_100;
      if ( v37 >= v39->max_length )
LABEL_101:
        sub_1B4D1F4(QuestPhaseIndividualList, Individuality);
      if ( !v32 )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)FunctionGroupMaster__TryGetEntity(
                                                                                 (FunctionGroupMaster_o *)v32,
                                                                                 &v58,
                                                                                 v39->m_Items[v37 + 1],
                                                                                 eventId,
                                                                                 0LL);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
    }
    if ( !Values )
      goto LABEL_100;
    v40 = Values->max_length;
    if ( (__int64)v37 >= (int)v40 )
      goto LABEL_85;
    if ( v37 >= v40 )
      goto LABEL_101;
    v41 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37];
    if ( !v41 )
      goto LABEL_85;
    v42 = entity;
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                 (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                                                                 (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v41,
                                                                                 (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                                                                 (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !(_DWORD)QuestPhaseIndividualList )
        goto LABEL_85;
      if ( !entity )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v56,
                                                                                 questPhaseIndividualityList,
                                                                                 (System_Int32_array *)entity[5].klass,
                                                                                 0LL);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)v54;
      if ( !v54 )
      {
LABEL_99:
        LODWORD(QuestPhaseIndividualList) = v53 >> 31;
        return (unsigned __int8)QuestPhaseIndividualList & 1;
      }
      if ( entity )
      {
        LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_40231512(
                                             v54,
                                             v52,
                                             wearesDispLimitCount,
                                             (System_Int32_array *)entity[2].monitor,
                                             0LL);
        return (unsigned __int8)QuestPhaseIndividualList & 1;
      }
LABEL_100:
      sub_1B4D1EC(QuestPhaseIndividualList, Individuality);
    }
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                               (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                               (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                                                               (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
    {
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v41,
                                                                                 (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                                                                 (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList )
      {
LABEL_83:
        v42 = entity;
        if ( !entity )
          goto LABEL_100;
LABEL_84:
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                   v56,
                                                                                   questPhaseIndividualityList,
                                                                                   (System_Int32_array *)v42[5].klass,
                                                                                   0LL);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          goto LABEL_93;
      }
    }
LABEL_85:
    funcId = this->fields.funcId;
    ++v37;
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                 (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                                                                 (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v41,
                                                                                 (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                                                                 (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v41,
                                                                                 (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                                                                 (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v41,
                                                                                   (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                                                                   (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( !(_DWORD)QuestPhaseIndividualList )
          goto LABEL_85;
      }
      if ( !entity )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v56,
                                                                                 questPhaseIndividualityList,
                                                                                 (System_Int32_array *)entity[5].klass,
                                                                                 0LL);
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
        if ( (v53 & 0x80000000) != 0 || !*(_QWORD *)&klass->max_length )
          return (unsigned __int8)QuestPhaseIndividualList & 1;
        goto LABEL_91;
      }
      if ( !entity )
        goto LABEL_100;
      klass = (System_Int32_array *)entity[2].monitor;
      if ( klass )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)(&dword_0 + 1);
        if ( (v53 & 0x80000000) != 0 || (int)klass->max_length < 1 )
          return (unsigned __int8)QuestPhaseIndividualList & 1;
LABEL_91:
        if ( v54 )
        {
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality_40231512(
                                                                                     v54,
                                                                                     v52,
                                                                                     wearesDispLimitCount,
                                                                                     klass,
                                                                                     0LL);
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                 (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                                                                 (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 v41,
                                                                                 (Il2CppObject *)StringLiteral_6111/*"EventId"*/,
                                                                                 (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v41,
                                                                                 (Il2CppObject *)StringLiteral_6111/*"EventId"*/,
                                                                                 (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v41,
                                                                                 (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                                                                 (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (int)QuestPhaseIndividualList >= 1 )
      {
        if ( !v54 )
          goto LABEL_85;
        Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                 v41,
                 (Il2CppObject *)StringLiteral_1335/*"2"*/,
                 (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                                   v54,
                                                                                   v52,
                                                                                   wearesDispLimitCount,
                                                                                   Item,
                                                                                   0LL);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
          goto LABEL_85;
      }
      if ( !entity )
        goto LABEL_100;
      EventIndividuality = SkillLvEntity__GetEventIndividuality(
                             this,
                             v37,
                             eventId,
                             v56->fields.questId,
                             (System_Int32_array *)entity[5].klass,
                             (FunctionMaster_o *)v30,
                             (FunctionGroupMaster_o *)v32,
                             v45);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v56,
                                                                                 questPhaseIndividualityList,
                                                                                 EventIndividuality,
                                                                                 0LL);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
                v41,
                (Il2CppObject *)StringLiteral_13348/*"Target"*/,
                (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          goto LABEL_93;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v41,
                                                                                   (Il2CppObject *)StringLiteral_13348/*"Target"*/,
                                                                                   (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList != 1 || !v50 )
          goto LABEL_93;
      }
      goto LABEL_85;
    case 113:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                 (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                                                                 (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v41,
                                                                                 (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                                                                 (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v41,
                                                                                 (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                                                                 (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !(_DWORD)QuestPhaseIndividualList )
        goto LABEL_85;
      if ( !entity )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v56,
                                                                                 questPhaseIndividualityList,
                                                                                 (System_Int32_array *)entity[5].klass,
                                                                                 0LL);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      if ( !v54 )
        goto LABEL_99;
      Individuality = ServantEntity__getIndividuality(v54, v52, wearesDispLimitCount, 0LL);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !Master_object )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster__GetIndividualityList_39960056(
                                                                                 Master_object,
                                                                                 Individuality,
                                                                                 0LL);
      if ( !QuestPhaseIndividualList )
        goto LABEL_100;
      if ( QuestPhaseIndividualList->fields._MasterName_k__BackingField )
        goto LABEL_93;
      goto LABEL_85;
    case 116:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                 (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                                                                 (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      goto LABEL_83;
    case 117:
    case 118:
      goto LABEL_84;
    case 129:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                 (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                                                                 (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      v48 = &StringLiteral_1335/*"2"*/;
      goto LABEL_79;
    case 132:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v37],
                                                                                 (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                                                                 (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      v48 = &StringLiteral_1396/*"3"*/;
LABEL_79:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v41,
                                                                                 (Il2CppObject *)*v48,
                                                                                 (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      goto LABEL_83;
    default:
      goto LABEL_85;
  }
}


bool __fastcall SkillLvEntity__getEventUpVal_40542824(
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  Il2CppObject *Master_object; // x25
  Il2CppObject *v42; // x26
  Il2CppObject *v43; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v46; // x8
  struct System_Int32_array *v47; // x10
  SkillLvEntity_o *v48; // x29
  unsigned __int64 v49; // x11
  EventUpValInfo_o *v50; // x8
  int32_t v51; // w21
  ServantLimitEntity_o *v52; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v54; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v56; // x8
  struct EventUpValSetupInfo_o *v57; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_object__int__o *v59; // x28
  int monitor; // w20
  const MethodInfo *v61; // x2
  System_Int32_array *klass; // x3
  const MethodInfo *v63; // x2
  struct System_Int32_array *v64; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  int32_t v66; // w23
  Il2CppObject *v67; // x23
  EventUpValInfo_o *v68; // x8
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x7
  EventUpValInfo_o *v71; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w23
  int32_t v74; // w0
  struct EventUpValSetupInfo_o *v75; // x8
  SkillLvEntity_o *v76; // x2
  SkillEntity_o *v77; // x23
  SkillLvEntity_o *v78; // x20
  System_Int32_array *ActIndividuality; // x23
  int32_t v80; // w20
  const MethodInfo *v81; // x2
  int32_t v82; // w8
  int32_t v83; // w9
  int32_t v84; // w20
  Il2CppObject *v85; // x23
  EventDropUpValInfo_o *v86; // x27
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  __int64 v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  __int64 v92; // x8
  const MethodInfo *v93; // x2
  Il2CppObject *v94; // x23
  int32_t v95; // w27
  EventDropUpValInfo_o *v96; // x20
  int32_t v97; // w1
  EventDropUpValInfo_o *v98; // x0
  bool v99; // w2
  Il2CppObject *v100; // x23
  int32_t v101; // w1
  EventDropUpValInfo_o *v102; // x0
  bool v103; // w2
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  Il2CppObject *v106; // x23
  EventUpValInfo_o *v107; // x8
  Il2CppObject *v108; // x27
  int32_t Item; // w23
  Il2CppClass *v110; // x21
  const char *namespaze; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v112; // x27
  unsigned __int64 v113; // x23
  int32_t lv; // w20
  char v115; // w8
  Il2CppObject *v116; // x1
  Il2CppObject *v117; // x23
  __int64 v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  __int64 v121; // x8
  Il2CppObject *v122; // x23
  EventDropUpValInfo_o *v123; // x20
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  __int64 v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  __int64 v129; // x8
  Il2CppObject *v130; // x20
  __int64 v131; // x23
  UserServantEntity_o *HeroineData; // x0
  bool v134; // [xsp+0h] [xbp-F0h]
  int32_t v135; // [xsp+4h] [xbp-ECh]
  int32_t v136; // [xsp+8h] [xbp-E8h]
  bool v137; // [xsp+Ch] [xbp-E4h]
  ServantEntity_o *v138; // [xsp+10h] [xbp-E0h]
  EventPointBuffEntity_o *value; // [xsp+18h] [xbp-D8h]
  SkillLvEntity_o *valuea; // [xsp+18h] [xbp-D8h]
  int32_t valueb; // [xsp+18h] [xbp-D8h]
  __int64 valuec; // [xsp+18h] [xbp-D8h]
  char v143; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v144; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v145; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v146; // [xsp+20h] [xbp-D0h]
  struct System_Int32_array *v148; // [xsp+30h] [xbp-C0h]
  char v149; // [xsp+3Ch] [xbp-B4h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+40h] [xbp-B0h]
  SkillLvEntity_o *v151; // [xsp+48h] [xbp-A8h]
  unsigned __int64 v152; // [xsp+50h] [xbp-A0h]
  FunctionGroupEntity_o *v156; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-78h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16

  v10 = this;
  if ( (byte_49BB966 & 1) == 0 )
  {
    sub_1B4CF90(&BuffList_TypeInfo, eventUpVallInfo);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BuffMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventPointBuffMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventQuestMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionGroupMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, v19);
    sub_1B4CF90(&DataManager_TypeInfo, v20);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B4CF90(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v22);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v23);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v25);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v26);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v27);
    sub_1B4CF90(&EventDropUpValInfo_TypeInfo, v28);
    sub_1B4CF90(&Individuality_TypeInfo, v29);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v30);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33);
    sub_1B4CF90(&StringLiteral_9792/*"OnlyMaxFuncGroupId"*/, v34);
    sub_1B4CF90(&StringLiteral_1396/*"3"*/, v35);
    sub_1B4CF90(&StringLiteral_1335/*"2"*/, v36);
    sub_1B4CF90(&StringLiteral_13348/*"Target"*/, v37);
    sub_1B4CF90(&StringLiteral_1190/*"1"*/, v38);
    sub_1B4CF90(&StringLiteral_6111/*"EventId"*/, v39);
    this = (SkillLvEntity_o *)sub_1B4CF90(&StringLiteral_1138/*"0"*/, v40);
    byte_49BB966 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v156 = 0LL;
  entity = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_287;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v10->fields.funcId )
    goto LABEL_285;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
  v42 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_287;
  v151 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v43 = 0LL;
    goto LABEL_16;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_287:
    sub_1B4D1EC(this, eventUpVallInfo);
  v43 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v148 = eventIdList;
  v46 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v46 >= 1 )
  {
    v138 = (ServantEntity_o *)v43;
    v134 = isOwner;
    v143 = 0;
    v137 = v43 == 0LL || isEquipOnly;
    v47 = v148;
    v48 = this;
    v49 = 0LL;
    while ( 1 )
    {
      if ( v49 >= (unsigned int)v46 )
LABEL_288:
        sub_1B4D1F4(this, eventUpVallInfo);
      v50 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_287;
      v51 = v47->m_Items[v49 + 1];
      v152 = v49;
      if ( v50->fields.equipSvtId < 1 )
      {
        v149 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_287;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo )
          goto LABEL_287;
        if ( !this )
          goto LABEL_287;
        v52 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0LL);
        this = (SkillLvEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_287;
        if ( !v52 )
          goto LABEL_287;
        if ( !this )
          goto LABEL_287;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v52->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    v51,
                                    0LL);
        v149 = (char)this;
        v50 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_287;
      }
      this = (SkillLvEntity_o *)v50->fields.setupInfo;
      if ( !this )
        goto LABEL_287;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                  (EventUpValSetupInfo_o *)this,
                                  v51,
                                  0LL);
      funcId = v10->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_287;
      v54 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v54 >= (int)max_length )
          break;
        if ( v54 >= max_length )
          goto LABEL_288;
        if ( !Master_object )
          goto LABEL_287;
        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcId->m_Items[v54 + 1],
                                    (const MethodInfo_319D9E8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_273;
        if ( isFuncGroup )
        {
          v56 = v10->fields.funcId;
          if ( !v56 )
            goto LABEL_287;
          if ( v54 >= v56->max_length )
            goto LABEL_288;
          if ( !v42 )
            goto LABEL_287;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                      (FunctionGroupMaster_o *)v42,
                                      &v156,
                                      v56->m_Items[v54 + 1],
                                      v51,
                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_273;
          this = (SkillLvEntity_o *)v156;
          if ( !v156 )
            goto LABEL_287;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v156, 0LL);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_287;
            v57 = (*eventUpVallInfo)->fields.setupInfo;
            this = v151;
            if ( !v57 || !v151 )
              goto LABEL_287;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v151,
                                        v51,
                                        v57->fields.questId,
                                        v57->fields.questPhase,
                                        12,
                                        nowTime,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_273;
          }
        }
        if ( !v48 )
          goto LABEL_287;
        chargeTurn = (unsigned int)v48->fields.chargeTurn;
        if ( (__int64)v54 >= (int)chargeTurn )
          goto LABEL_273;
        if ( v54 >= chargeTurn )
          goto LABEL_288;
        v59 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&v48->fields.funcId + v54);
        if ( !v59 )
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
                                          v59,
                                          (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                          (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v51 != (_DWORD)this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                            (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_273;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v59,
                                            v61);
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
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              if ( monitor == 107 )
              {
                if ( !entity )
                  goto LABEL_287;
                klass = (System_Int32_array *)entity[2].monitor;
                if ( !klass || (int)klass->max_length < 1 )
                  goto LABEL_212;
              }
              else
              {
                if ( monitor != 105 )
                  goto LABEL_212;
                if ( !entity )
                  goto LABEL_287;
                klass = (System_Int32_array *)entity[2].klass;
                if ( !klass || !*(_QWORD *)&klass->max_length )
                  goto LABEL_212;
              }
              if ( !v138 )
                goto LABEL_273;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_40231512(
                                          v138,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
LABEL_212:
              v108 = entity;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v59,
                       (Il2CppObject *)StringLiteral_1138/*"0"*/,
                       (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v144 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_39449288(v144, v51, (FunctionEntity_o *)v108, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v59,
                     (Il2CppObject *)StringLiteral_1190/*"1"*/,
                     (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                            (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v68 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
LABEL_214:
                v96 = v144;
                if ( !v144 )
                  goto LABEL_287;
                v101 = (int)this;
                v102 = v144;
                v103 = v68->fields.equipSvtId > 0;
LABEL_194:
                EventDropUpValInfo__SetAddCount(v102, v101, v103, v149 & 1, 0LL);
              }
              else
              {
LABEL_232:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                            (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v96 = v144;
                if ( (_DWORD)this == 2 )
                {
                  v116 = (Il2CppObject *)StringLiteral_1335/*"2"*/;
LABEL_234:
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v59,
                                              v116,
                                              (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v96 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetRateCount(
                    v96,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v149 & 1,
                    0LL);
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
                                          v59,
                                          (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                          (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v59,
                                          (Il2CppObject *)StringLiteral_6111/*"EventId"*/,
                                          (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_6111/*"EventId"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v51 != (_DWORD)this )
                goto LABEL_273;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v59,
                                            v69);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_273;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_117;
              if ( !v138 )
                goto LABEL_273;
              v71 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              limitCount = v71->fields.limitCount;
              dispLimitCount = v71->fields.dispLimitCount;
              v74 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v59,
                      (Il2CppObject *)StringLiteral_1335/*"2"*/,
                      (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v138, limitCount, dispLimitCount, v74, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
LABEL_117:
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v75 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v75 )
                goto LABEL_287;
              if ( !entity )
                goto LABEL_287;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v10,
                                          v54,
                                          v51,
                                          v75->fields.questId,
                                          (System_Int32_array *)entity[5].klass,
                                          (FunctionMaster_o *)Master_object,
                                          (FunctionGroupMaster_o *)v42,
                                          v70);
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v76 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v76,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)*eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              if ( !EventUpValInfo__IsEquipSvtId((EventUpValInfo_o *)this, 0LL) )
                goto LABEL_137;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10->fields.skillId,
                                          (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v77 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v138;
              if ( !v138 )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v138,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !v77 )
                goto LABEL_287;
              v78 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v77, (const MethodInfo *)eventUpVallInfo);
              if ( !Individuality_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v78,
                                          ActIndividuality,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v138, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_137;
              if ( !entity )
                goto LABEL_287;
              if ( HIDWORD(entity[1].monitor) )
                goto LABEL_137;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v130 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
              v131 = *(_QWORD *)&v138->fields.id.fields.currentCryptoKey;
              *(_QWORD *)&v160.fields.fakeValue = *(_QWORD *)&v138->fields.id.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valuec = *(_QWORD *)&v138->fields.id.fields.fakeValue;
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v160.fields.fakeValue = valuec;
              }
              *(_QWORD *)&v160.fields.currentCryptoKey = v131;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v160, 0LL);
              if ( !v130 )
                goto LABEL_287;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v130, (int32_t)this, 0LL);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_273;
              }
LABEL_137:
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v59,
                     (Il2CppObject *)StringLiteral_13348/*"Target"*/,
                     (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_13348/*"Target"*/,
                                            (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v80 = (int)this;
                if ( (_DWORD)this == 1 && !v134 )
                  goto LABEL_273;
              }
              else
              {
                v80 = 0;
              }
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v59,
                     (Il2CppObject *)StringLiteral_9792/*"OnlyMaxFuncGroupId"*/,
                     (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                valueb = System_Collections_Generic_Dictionary_object__int___get_Item(
                           v59,
                           (Il2CppObject *)StringLiteral_9792/*"OnlyMaxFuncGroupId"*/,
                           (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              }
              else
              {
                valueb = 0;
              }
              v122 = entity;
              v146 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_39449288(v146, v51, (FunctionEntity_o *)v122, v80, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v59,
                     (Il2CppObject *)StringLiteral_1138/*"0"*/,
                     (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                            (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                v123 = v146;
                if ( !v146 )
                  goto LABEL_287;
                EventDropUpValInfo__SetAddCount(
                  v146,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v149 & 1,
                  0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1138/*"0"*/,
                                            (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v59,
                                              (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                              (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo )
                    goto LABEL_287;
                  v123 = v146;
                  if ( !v146 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetRateCount(
                    v146,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v149 & 1,
                    0LL);
                }
                else
                {
                  v123 = v146;
                  if ( !v146 )
                    goto LABEL_287;
                }
              }
              v123->fields.groupId = valueb;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_287;
              v126 = *(_QWORD *)&this->fields.skillId;
              v127 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
              ++this->fields.priority;
              if ( !v126 )
                goto LABEL_287;
              v128 = this->fields.chargeTurn;
              if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v123,
                  *(const MethodInfo_35801DC **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
              }
              else
              {
                v129 = v126 + 8 * v128;
                this->fields.chargeTurn = v128 + 1;
                *(_QWORD *)(v129 + 32) = v123;
                sub_1B4CF34((CGThumbnailListItem_o *)(v129 + 32), (int32_t)v123, v124, v125);
              }
              v143 = 1;
              goto LABEL_273;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                          (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v51 != (_DWORD)this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1138/*"0"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                            (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_273;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v59,
                                            v81);
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
                                          0LL);
              v143 |= (unsigned __int8)this;
              if ( !v138 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v138,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_287;
              v82 = this->fields.chargeTurn;
              if ( v82 < 1 )
                goto LABEL_250;
              v83 = 0;
              valuea = this;
              while ( v83 < (unsigned int)v82 )
              {
                v84 = *((_DWORD *)&this->fields.funcId + v83);
                v85 = entity;
                v86 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_39449288(v86, v51, (FunctionEntity_o *)v85, v84, 0LL);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v59,
                       (Il2CppObject *)StringLiteral_1138/*"0"*/,
                       (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v59,
                                              (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                              (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v86 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetAddCount(
                    v86,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v149 & 1,
                    0LL);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v59,
                                              (Il2CppObject *)StringLiteral_1138/*"0"*/,
                                              (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v59,
                                                (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                                (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v86 )
                      goto LABEL_287;
                    EventDropUpValInfo__SetRateCount(
                      v86,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v149 & 1,
                      0LL);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_287;
                v89 = *(_QWORD *)&this->fields.skillId;
                v90 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                ++this->fields.priority;
                if ( !v89 )
                  goto LABEL_287;
                v91 = this->fields.chargeTurn;
                if ( (unsigned int)v91 >= *(_DWORD *)(v89 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v86,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
                }
                else
                {
                  v92 = v89 + 8 * v91;
                  this->fields.chargeTurn = v91 + 1;
                  *(_QWORD *)(v92 + 32) = v86;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v92 + 32), (int32_t)v86, v87, v88);
                }
                this = valuea;
                v143 = 1;
                v83 = actMaxRarity + 1;
                actMaxRarity = v83;
                v82 = valuea->fields.chargeTurn;
                if ( v83 >= v82 )
                  goto LABEL_273;
              }
              goto LABEL_288;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                          (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v59,
                                            v93);
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
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              v94 = entity;
              v95 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v59,
                      (Il2CppObject *)StringLiteral_1138/*"0"*/,
                      (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v96 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_39449288(v96, v51, (FunctionEntity_o *)v94, v95, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v96 )
                goto LABEL_287;
              v97 = (int)this;
              v98 = v96;
              v99 = (*eventUpVallInfo)->fields.equipSvtId > 0;
              goto LABEL_204;
            case 129:
              if ( isSupport )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                          (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v51 != (_DWORD)this )
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
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              v100 = entity;
              v145 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v145, v51, (FunctionEntity_o *)v100, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v59,
                     (Il2CppObject *)StringLiteral_1138/*"0"*/,
                     (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v59,
                                            (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                            (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                v96 = v145;
                if ( !v145 )
                  goto LABEL_287;
                v101 = (int)this;
                v102 = v145;
                v103 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                goto LABEL_194;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1138/*"0"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v96 = v145;
              if ( (_DWORD)this != 2 )
                goto LABEL_244;
              v116 = (Il2CppObject *)StringLiteral_1190/*"1"*/;
              goto LABEL_234;
            default:
              if ( monitor != 132 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                          (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v51 != (_DWORD)this )
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
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              v67 = entity;
              v144 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v144, v51, (FunctionEntity_o *)v67, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v59,
                     (Il2CppObject *)StringLiteral_1190/*"1"*/,
                     (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
                goto LABEL_232;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1335/*"2"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v68 = *eventUpVallInfo;
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
                                      v59,
                                      (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                      (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v59,
                                              v63),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v64 = v10->fields.funcId;
              if ( !v64 )
                goto LABEL_287;
              if ( v54 >= v64->max_length )
                goto LABEL_288;
              if ( !this )
                goto LABEL_287;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               v51,
                               v64->m_Items[v54 + 1],
                               0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                            0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v137 )
                    goto LABEL_95;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_287;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_40231512(
                                              v138,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity[2].monitor,
                                              0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_95:
                    value = EnableEntity;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v59,
                           (Il2CppObject *)StringLiteral_9792/*"OnlyMaxFuncGroupId"*/,
                           (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      v66 = System_Collections_Generic_Dictionary_object__int___get_Item(
                              v59,
                              (Il2CppObject *)StringLiteral_9792/*"OnlyMaxFuncGroupId"*/,
                              (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    }
                    else
                    {
                      v66 = 0;
                    }
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_287;
                    v136 = v51;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_287;
                    v110 = entity[2].klass;
                    if ( !v110 )
                      goto LABEL_287;
                    namespaze = v110->_1.namespaze;
                    v135 = v66;
                    if ( (int)namespaze < 1 )
                    {
                      v115 = 0;
                    }
                    else
                    {
                      v112 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
                      v113 = 0LL;
                      while ( 1 )
                      {
                        if ( v113 >= (unsigned int)namespaze )
                          goto LABEL_288;
                        if ( !v112 )
                          goto LABEL_287;
                        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                    v112,
                                                    *((_DWORD *)&v110->_1.byval_arg.data + v113),
                                                    (const MethodInfo_319D99C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                        if ( !this )
                          goto LABEL_287;
                        lv = this->fields.lv;
                        if ( !BuffList_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                        this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                        LODWORD(namespaze) = v110->_1.namespaze;
                        if ( (__int64)++v113 >= (int)namespaze )
                        {
                          v115 = 0;
                          goto LABEL_238;
                        }
                      }
                      v115 = 1;
                    }
LABEL_238:
                    v51 = v136;
                    if ( ((unsigned __int8)v115 & (value != 0LL)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v59,
                                                  (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                                  (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !value )
                        goto LABEL_287;
                      System_Collections_Generic_Dictionary_object__int___set_Item(
                        v59,
                        (Il2CppObject *)StringLiteral_1396/*"3"*/,
                        value->fields.value + (_DWORD)this,
                        (const MethodInfo_324EDD4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v117 = entity;
                    v96 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
                    EventDropUpValInfo___ctor(v96, v136, (FunctionEntity_o *)v117, 0LL);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v59,
                                                (Il2CppObject *)StringLiteral_1396/*"3"*/,
                                                (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v96 )
                      goto LABEL_287;
                    EventDropUpValInfo__SetRateCount(
                      v96,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v149 & 1,
                      0LL);
                    v96->fields.groupId = v135;
LABEL_244:
                    v107 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_287;
LABEL_245:
                    this = (SkillLvEntity_o *)v107->fields.dropList;
                    if ( !this )
                      goto LABEL_287;
                    v118 = *(_QWORD *)&this->fields.skillId;
                    v119 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                    ++this->fields.priority;
                    if ( !v118 )
                      goto LABEL_287;
                    v120 = this->fields.chargeTurn;
                    if ( (unsigned int)v120 >= *(_DWORD *)(v118 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v96,
                        *(const MethodInfo_35801DC **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v121 = v118 + 8 * v120;
                      this->fields.chargeTurn = v120 + 1;
                      *(_QWORD *)(v121 + 32) = v96;
                      sub_1B4CF34((CGThumbnailListItem_o *)(v121 + 32), (int32_t)v96, v104, v105);
                    }
LABEL_250:
                    v143 = 1;
                    goto LABEL_273;
                  }
                }
              }
            }
          }
          goto LABEL_273;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                    v59,
                                    (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                    (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                      v59,
                                      (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                      (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v106 = entity;
              v96 = (EventDropUpValInfo_o *)sub_1B4D1DC(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v96, v51, (FunctionEntity_o *)v106, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v59,
                                          (Il2CppObject *)StringLiteral_1190/*"1"*/,
                                          (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v96 )
                goto LABEL_287;
              v97 = (int)this;
              v98 = v96;
              v99 = (*eventUpVallInfo)->fields.equipSvtId > 0;
LABEL_204:
              EventDropUpValInfo__SetRateCount(v98, v97, v99, v149 & 1, 0LL);
              v107 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              goto LABEL_245;
            }
          }
        }
LABEL_273:
        funcId = v10->fields.funcId;
        ++v54;
        if ( !funcId )
          goto LABEL_287;
      }
      v47 = v148;
      LODWORD(v46) = v148->max_length;
      v49 = v152 + 1;
      if ( (__int64)(v152 + 1) >= (int)v46 )
        return v143 & 1;
    }
  }
LABEL_285:
  v143 = 0;
  return v143 & 1;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpType(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  unsigned __int64 v9; // x21
  unsigned __int64 max_length; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BB963 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49BB963 = 1;
  }
  entity = 0LL;
  if ( this->fields.funcId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (funcId = this->fields.funcId) == 0LL) )
    {
LABEL_15:
      sub_1B4D1EC(Instance, v6);
    }
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v9 >= (int)max_length )
        break;
      if ( v9 >= max_length )
        sub_1B4D1F4(Instance, v6);
      if ( !v8 )
        goto LABEL_15;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v8,
                                   &entity,
                                   funcId->m_Items[v9 + 1],
                                   (const MethodInfo_319D9E8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_15;
        Instance = (Il2CppObject *)LODWORD(entity[1].monitor);
        if ( (_DWORD)Instance == 104 || (_DWORD)Instance == 123 )
          return (int)Instance;
      }
      funcId = this->fields.funcId;
      ++v9;
      if ( !funcId )
        goto LABEL_15;
    }
  }
  LODWORD(Instance) = 0;
  return (int)Instance;
}


int32_t __fastcall SkillLvEntity__getFriendPointUpVal(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_string__int__array *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v11; // x1
  struct System_Int32_array *funcId; // x8
  System_Collections_Generic_Dictionary_string__int__array *v13; // x20
  unsigned __int64 v14; // x22
  unsigned __int64 max_length; // x9
  int monitor; // w8
  int v17; // w8
  System_Collections_Generic_Dictionary_object__int__o *v18; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BB962 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B4CF90(&StringLiteral_1138/*"0"*/, v7);
    byte_49BB962 = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    return 0;
  Instance = (System_Collections_Generic_Dictionary_string__int__array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_FunctionMaster___);
  Instance = SkillLvEntity__getValues(this, v11);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_15;
  v13 = Instance;
  v14 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v14 >= (int)max_length )
      return 0;
    if ( v14 >= max_length )
      goto LABEL_24;
    if ( !MasterData_object )
      goto LABEL_15;
    Instance = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                                             &entity,
                                                                             funcId->m_Items[v14 + 1],
                                                                             (const MethodInfo_319D9E8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_15;
      monitor = (int)entity[1].monitor;
      if ( monitor == 123 || monitor == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v14;
    if ( !funcId )
      goto LABEL_15;
  }
  if ( !v13 )
LABEL_15:
    sub_1B4D1EC(Instance, v9);
  v17 = v13->max_length;
  if ( (int)v14 >= v17 )
    return 0;
  if ( (unsigned int)v14 >= v17 )
LABEL_24:
    sub_1B4D1F4(Instance, v9);
  v18 = (System_Collections_Generic_Dictionary_object__int__o *)v13->m_Items[v14];
  if ( v18
    && System_Collections_Generic_Dictionary_object__int___ContainsKey(
         v18,
         (Il2CppObject *)StringLiteral_1138/*"0"*/,
         (const MethodInfo_324EFDC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_object__int___get_Item(
             v18,
             (Il2CppObject *)StringLiteral_1138/*"0"*/,
             (const MethodInfo_324ED68 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  }
  else
  {
    return 0;
  }
}


System_String_o *__fastcall SkillLvEntity__getFuncDetail(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Instance; // x0
  struct System_Int32_array *v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  unsigned __int64 v10; // x21
  unsigned __int64 max_length; // x9
  LocalizationManager_c *v12; // x0
  System_String_o **p_monitor; // x8

  if ( (byte_49BB961 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v3);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49BB961 = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v8 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_1B4D1EC(Instance, method);
    }
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v10 = 0LL;
    while ( 1 )
    {
      max_length = v8->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
        sub_1B4D1F4(Instance, method);
      if ( !v9 )
        goto LABEL_13;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v9,
                   v8->m_Items[v10 + 1],
                   (const MethodInfo_319D99C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_monitor = (System_String_o **)&Instance[3].monitor;
        return *p_monitor;
      }
      v8 = this->fields.funcId;
      ++v10;
      if ( !v8 )
        goto LABEL_13;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49B64D5 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    byte_49B64D5 = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  p_monitor = &v12->static_fields->unknownNameText;
  return *p_monitor;
}


int32_t __fastcall SkillLvEntity__getMovePositionDown(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49BB96E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B4CF90(&long_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_18357/*"down"*/, v5);
    byte_49BB96E = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18357/*"down"*/,
           (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_18357/*"down"*/,
                                                                                (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B4D1EC(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1B4D4AC(Item);
        LODWORD(script) = SkillLvEntity__IsRevivalUp(v11, v12);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t __fastcall SkillLvEntity__getMovePositionUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  SkillLvEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49BB96D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B4CF90(&long_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_24017/*"up"*/, v5);
    byte_49BB96D = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_24017/*"up"*/,
           (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_24017/*"up"*/,
                                                                                (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1B4D1EC(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1B4D4AC(Item);
        LODWORD(script) = SkillLvEntity__getMovePositionDown(v11, v12);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


System_String_o *__fastcall SkillLvEntity__getPlayVoiceNo(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49BB968 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B4CF90(&string_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_10460/*"PlayVoiceNo"*/, v5);
    byte_49BB968 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10460/*"PlayVoiceNo"*/,
            (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B4D1EC(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10460/*"PlayVoiceNo"*/,
                                  (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B4D4AC(result);
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__array *__fastcall SkillLvEntity__getValues(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_String_array *svals; // x9
  int max_length; // w21
  __int64 klass; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_string__int__array *v13; // x20
  il2cpp_array_size_t v14; // w25
  struct System_String_array *v15; // x8
  int v16; // w29
  __int64 v17; // x22
  System_Collections_Generic_Dictionary_object__int__o *v18; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppClass **v21; // x23
  CGThumbnailListItem_o *v22; // x23
  int32_t v23; // w8
  System_String_o *v24; // x24
  CGThumbnailListItem_c *v25; // x24
  int32_t v26; // w2
  const MethodInfo_324EDD4 *v27; // x3
  Il2CppObject *v28; // x1
  __int64 v29; // x24
  __int64 v31; // x0
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49BB95C & 1) == 0 )
  {
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__int____TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v4);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_15507/*"["*/, v6);
    sub_1B4CF90(&StringLiteral_1/*""*/, v7);
    sub_1B4CF90(&StringLiteral_15763/*"]"*/, v8);
    byte_49BB95C = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_1B4D038(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL);
  max_length = svals->max_length;
  klass = sub_1B4D038(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v13 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = this->fields.svals;
      if ( !v15 )
        goto LABEL_37;
      if ( v14 >= v15->max_length )
        goto LABEL_38;
      klass = (__int64)v15->m_Items[v14];
      if ( !klass
        || (klass = (__int64)System_String__Replace_61140016(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15507/*"["*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Replace_61140016(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15763/*"]"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Split((System_String_o *)klass, 0x2Cu, 0, 0LL)) == 0
        || (v16 = *(_DWORD *)(klass + 24),
            v17 = klass,
            v18 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_object__int____ctor(
              v18,
              (const MethodInfo_324E434 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v13) )
      {
LABEL_37:
        sub_1B4D1EC(klass, v12);
      }
      if ( v18 )
      {
        klass = sub_1B4D0CC(v18, v13->obj.klass->_1.element_class);
        if ( !klass )
        {
          v31 = sub_1B4D210(0LL);
          sub_1B4D0B8(v31, 0LL);
        }
      }
      if ( v14 >= v13->max_length )
LABEL_38:
        sub_1B4D1F4(klass, v12);
      v21 = &v13->obj.klass + (int)v14;
      v21[4] = (Il2CppClass *)v18;
      v22 = (CGThumbnailListItem_o *)(v21 + 4);
      sub_1B4CF34(v22, (int32_t)v18, v19, v20);
      result[1] = 0;
      if ( v16 >= 1 )
        break;
LABEL_33:
      if ( ++v14 == max_length )
        return v13;
    }
    v23 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v23 >= *(_DWORD *)(v17 + 24) )
        goto LABEL_38;
      v24 = *(System_String_o **)(v17 + 8LL * v23 + 32);
      klass = System_Int32__TryParse(v24, result, 0LL);
      if ( (klass & 1) != 0 )
        break;
      if ( !v24 )
        goto LABEL_37;
      klass = (__int64)System_String__Split(v24, 0x3Au, 0, 0LL);
      if ( !klass )
        goto LABEL_37;
      v29 = klass;
      if ( *(int *)(klass + 24) >= 2 )
      {
        klass = System_Int32__TryParse(*(System_String_o **)(klass + 40), result, 0LL);
        if ( (klass & 1) != 0 )
        {
          if ( v14 >= v13->max_length || !*(_DWORD *)(v29 + 24) )
            goto LABEL_38;
          klass = (__int64)v22->klass;
          if ( !v22->klass )
            goto LABEL_37;
          v26 = result[0];
          v28 = *(Il2CppObject **)(v29 + 32);
          v27 = (const MethodInfo_324EDD4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_23:
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)klass,
            v28,
            v26,
            v27);
        }
      }
      v23 = ++result[1];
      if ( result[1] >= v16 )
        goto LABEL_33;
    }
    if ( v14 >= v13->max_length )
      goto LABEL_38;
    v25 = v22->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v25 )
      goto LABEL_37;
    v26 = result[0];
    v27 = (const MethodInfo_324EDD4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v28 = (Il2CppObject *)klass;
    klass = (__int64)v25;
    goto LABEL_23;
  }
  return v13;
}


System_String_o *__fastcall SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49BB967 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B4CF90(&string_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_15073/*"VoiceAssetName"*/, v5);
    byte_49BB967 = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15073/*"VoiceAssetName"*/,
            (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1B4D1EC(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15073/*"VoiceAssetName"*/,
                                  (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1B4D4AC(result);
      return 0LL;
    }
  }
  return result;
}


float __fastcall SkillLvEntity__getVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  float v7; // s8
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  float result; // s0
  SkillLvEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_49BB96B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B4CF90(&long_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_15075/*"VoiceVolume"*/, v5);
    byte_49BB96B = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15075/*"VoiceVolume"*/,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15075/*"VoiceVolume"*/,
                                                                            (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B4D1EC(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) / 1000.0;
  sub_1B4D4AC(Item);
  SkillLvEntity__getMovePositionUp(v13, v14);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49BB969 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B4CF90(&StringLiteral_10461/*"PlayVoiceWait"*/, v3);
    byte_49BB969 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10461/*"PlayVoiceWait"*/,
                       (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


void __fastcall SkillLvEntity_SvtChangeBgm___ctor(
        SkillLvEntity_SvtChangeBgm_o *this,
        System_Collections_Generic_Dictionary_string__object__o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x2
  __int64 v22; // x3
  SkillLvEntity_o *v23; // x0
  System_String_o *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_49BB98A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, obj);
    sub_1B4CF90(&long_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_16403/*"afterClearBgmId"*/, v6);
    sub_1B4CF90(&StringLiteral_20361/*"indv"*/, v7);
    sub_1B4CF90(&StringLiteral_16841/*"beforeClearBgmId"*/, v8);
    sub_1B4CF90(&StringLiteral_22418/*"questPhase"*/, v9);
    sub_1B4CF90(&StringLiteral_22416/*"questId"*/, v10);
    byte_49BB98A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20361/*"indv"*/,
           (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22416/*"questId"*/,
           (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22418/*"questPhase"*/,
           (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v17, v18);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16841/*"beforeClearBgmId"*/,
           (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v19, v20);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16403/*"afterClearBgmId"*/,
           (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_1B4D1EC(Item, v12);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v21, v22);
    return;
  }
LABEL_16:
  sub_1B4D4AC(Item);
  SkillLvEntity__GetScriptIntParam(v23, v24, v25, v26);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB98B & 1) == 0 )
  {
    sub_1B4CF90(&SkillLvEntity___c_TypeInfo, v1);
    byte_49BB98B = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillLvEntity___c_TypeInfo->static_fields->__9 = (struct SkillLvEntity___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)SkillLvEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SkillLvEntity___c___ctor(SkillLvEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SkillLvEntity___c___GetEventIndividuality_b__62_0(
        SkillLvEntity___c_o *this,
        QuestGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B4D1EC(this, 0LL);
  return entity->fields.questId;
}


System_Nullable_int__o __fastcall SkillLvEntity___c___GetFuncIndexForSplitFuncSequence_b__45_0(
        SkillLvEntity___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int v3; // w19
  System_Nullable_int__o v5; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v6; // 0:x0.8

  v3 = x;
  if ( (byte_49BB98C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Nullable_int___ctor__, x);
    byte_49BB98C = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, v3 - 1, (const MethodInfo_3699C2C *)Method_System_Nullable_int___ctor__);
  return v5;
}