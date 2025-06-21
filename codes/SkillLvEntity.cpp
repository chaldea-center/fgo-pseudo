void __fastcall SkillLvEntity___ctor(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D082 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1D082 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall SkillLvEntity___ctor_42034740(
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

  if ( (byte_4B1D083 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, srcEntity);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object___ctor___76822472, v5);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1BCAFF8(&int___TypeInfo, v7);
    sub_1BCAFF8(&string___TypeInfo, v8);
    byte_4B1D083 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
  if ( !srcEntity )
    sub_1BCB254(v9, v10);
  *(_OWORD *)&this->fields.skillId = *(_OWORD *)&srcEntity->fields.skillId;
  funcId = (System_Array_o *)srcEntity->fields.funcId;
  if ( funcId && (v14 = System_Array__Clone(funcId, 0LL)) != 0LL )
  {
    v15 = v14;
    v16 = (struct System_Int32_array *)sub_1BCB134(v14, int___TypeInfo);
    if ( !v16 )
      goto LABEL_12;
  }
  else
  {
    v16 = 0LL;
  }
  this->fields.funcId = v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.funcId, (int32_t)v16, v11, v12);
  svals = (System_Array_o *)srcEntity->fields.svals;
  if ( !svals )
    goto LABEL_13;
  v20 = System_Array__Clone(svals, 0LL);
  if ( !v20 )
    goto LABEL_13;
  v15 = v20;
  v21 = (struct System_String_array *)sub_1BCB134(v20, string___TypeInfo);
  if ( v21 )
    goto LABEL_14;
LABEL_12:
  sub_1BCB514(v15);
LABEL_13:
  v21 = 0LL;
LABEL_14:
  this->fields.svals = v21;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.svals, (int32_t)v21, v17, v18);
  this->fields.skillDetailId = srcEntity->fields.skillDetailId;
  script = (System_Collections_Generic_IDictionary_TKey__TValue__o *)srcEntity->fields.script;
  if ( script )
  {
    v25 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor_54023336(
      v25,
      script,
      (const MethodInfo_33854A8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___76822472);
  }
  else
  {
    v25 = 0LL;
  }
  this->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)v25;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.script, (int32_t)v25, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__CreatePK(int32_t skillId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4B1D081 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4B1D081 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           skillId,
           lv,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SkillLvEntity__CreatePrimaryKey(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SkillLvEntity__CreatePK(this->fields.skillId, this->fields.lv, v2);
}


int32_t __fastcall SkillLvEntity__GetActNpcServantId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D0A7 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_2103/*"ActNpcServantId"*/, method);
    byte_4B1D0A7 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_2103/*"ActNpcServantId"*/, -1, v2);
}


System_Int32_array *__fastcall SkillLvEntity__GetActRarity(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1D09E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16516/*"actRarity"*/, method);
    byte_4B1D09E = 1;
  }
  return SkillLvEntity__GetIntArrayFromScript(this, (System_String_o *)StringLiteral_16516/*"actRarity"*/, v2);
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

  if ( (byte_4B1D09A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BCAFF8(&long_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__get_Count__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__get_Item__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_2139/*"AddIndiv"*/, v12);
    byte_4B1D09A = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_2139/*"AddIndiv"*/,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v15 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !v15 )
    goto LABEL_26;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           v15,
           (Il2CppObject *)StringLiteral_2139/*"AddIndiv"*/,
           (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v18 )
    goto LABEL_26;
  if ( v18->fields._size < 1 )
  {
LABEL_24:
    if ( v20 )
      return System_Collections_Generic_List_int___ToArray(
               v20,
               (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_26:
    sub_1BCB254(v15, klass_low);
  }
  v21 = 0;
  while ( 1 )
  {
    v15 = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       v18,
                                                                       v21,
                                                                       (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_object__get_Item__);
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
        *(const MethodInfo_369CBAC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v20->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
    if ( ++v21 >= v18->fields._size )
      goto LABEL_24;
  }
  sub_1BCB514(v15);
  return (System_Int32_array *)SkillLvEntity__GetFuncIndexForSplitFuncSequence(v27, v28);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillActorType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D0A5 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16548/*"additionalSkillActorType"*/, method);
    byte_4B1D0A5 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16548/*"additionalSkillActorType"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillId(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D0A3 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16549/*"additionalSkillId"*/, method);
    byte_4B1D0A3 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16549/*"additionalSkillId"*/, -1, v2);
}


int32_t __fastcall SkillLvEntity__GetAddInvokeSkillLv(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D0A4 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16551/*"additionalSkillLv"*/, method);
    byte_4B1D0A4 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16551/*"additionalSkillLv"*/, 1, v2);
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
  __int64 v19; // x2
  struct System_Int32_array *funcId; // x8
  Il2CppObject **v21; // x26
  System_Collections_Generic_Dictionary_string__int__array *v22; // x22
  unsigned __int64 v23; // x28
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // x27
  unsigned __int64 max_length; // x9
  unsigned __int64 v26; // x8
  System_Collections_Generic_Dictionary_object__int__o *v27; // x23
  Il2CppObject *v28; // x25
  int monitor; // w8
  EventDropUpValInfo_o *v30; // x24
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  bool v33; // w8
  Il2CppObject **v34; // x29
  int32_t Item; // w25
  Il2CppObject *v36; // x26
  bool v37; // w8
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  const MethodInfo_36BB728 *v42; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1D0B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1BCAFF8(&EventDropUpValInfo_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_9921/*"OnlyMaxFuncGroupId"*/, v12);
    sub_1BCAFF8(&StringLiteral_13531/*"Target"*/, v13);
    byte_4B1D0B0 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !this->fields.funcId )
  {
    if ( v14 )
    {
      v42 = (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__;
      return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(v14, v42);
    }
    goto LABEL_36;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
  Values = SkillLvEntity__getValues(this, v18);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_36;
  v21 = (Il2CppObject **)&StringLiteral_9921/*"OnlyMaxFuncGroupId"*/;
  v22 = Values;
  v23 = 0LL;
  m_Items = Values->m_Items;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v23 >= (int)max_length )
      break;
    if ( v23 >= max_length )
      goto LABEL_42;
    if ( !Master_object )
      goto LABEL_36;
    Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                           &entity,
                                                                           funcId->m_Items[v23 + 1],
                                                                           (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Values & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_36;
      v26 = v22->max_length;
      if ( (__int64)v23 >= (int)v26 )
        break;
      if ( v23 >= v26 )
LABEL_42:
        sub_1BCB25C(Values, v16, v19);
      v27 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23];
      if ( v27 )
      {
        v28 = entity;
        if ( !entity )
          goto LABEL_36;
        monitor = (int)entity[1].monitor;
        switch ( monitor )
        {
          case 1:
            goto LABEL_20;
          case 111:
            v34 = v21;
            if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                   (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v23],
                   (Il2CppObject *)StringLiteral_13531/*"Target"*/,
                   (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
            {
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v27,
                       (Il2CppObject *)StringLiteral_13531/*"Target"*/,
                       (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            }
            else
            {
              Item = 0;
            }
            v36 = entity;
            v30 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
            EventDropUpValInfo___ctor_40890620(v30, 0, (FunctionEntity_o *)v36, Item, 0LL);
            v21 = v34;
            v37 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v27,
                    *v34,
                    (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            Values = 0LL;
            if ( v37 )
              Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v27,
                                                                                     *v34,
                                                                                     (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !v30 )
              goto LABEL_36;
            break;
          case 16:
LABEL_20:
            v30 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
            EventDropUpValInfo___ctor(v30, 0, (FunctionEntity_o *)v28, 0LL);
            v33 = System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v27,
                    *v21,
                    (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            Values = 0LL;
            if ( v33 )
              Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                     v27,
                                                                                     *v21,
                                                                                     (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            if ( !v30 )
              goto LABEL_36;
            break;
          default:
            goto LABEL_35;
        }
        v30->fields.groupId = (int)Values;
        if ( !v14 )
          goto LABEL_36;
        items = v14->fields._items;
        v39 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v30,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v30;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v30, v31, v32);
        }
      }
    }
LABEL_35:
    funcId = this->fields.funcId;
    ++v23;
    if ( !funcId )
      goto LABEL_36;
  }
  if ( !v14 )
LABEL_36:
    sub_1BCB254(Values, v16);
  v42 = (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__;
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(v14, v42);
}


int32_t __fastcall SkillLvEntity__GetBattleStartRemainingTurn(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D0A6 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16947/*"battleStartRemainingTurn"*/, method);
    byte_4B1D0A6 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16947/*"battleStartRemainingTurn"*/, 0, v2);
}


bool __fastcall SkillLvEntity__GetBonusUpVal(
        SkillLvEntity_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        QuestPhaseEntity_o *questPhaseEntity,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Master_object; // x22
  FunctionGroupMaster_o *Values; // x0
  const MethodInfo *v23; // x1
  FunctionGroupMaster_o *v24; // x23
  __int64 v25; // x2
  struct System_Int32_array *v26; // x8
  FunctionGroupMaster_o *v27; // x25
  unsigned __int64 v28; // x24
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v30; // x8
  unsigned __int64 MasterName_k__BackingField_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v32; // x26
  EventUpValInfo_o *v33; // x8
  int32_t Item; // w0
  Il2CppObject *v35; // x28
  Il2CppObject *v36; // x28
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  int32_t dispLimitCount; // [xsp+4h] [xbp-9Ch]
  int32_t limitCount; // [xsp+8h] [xbp-98h]
  EventDropUpValInfo_o *v46; // [xsp+8h] [xbp-98h]
  ServantEntity_o *v47; // [xsp+10h] [xbp-90h]
  char individuality; // [xsp+1Ch] [xbp-84h]
  int32_t individualitya; // [xsp+1Ch] [xbp-84h]
  int32_t *p_revision; // [xsp+28h] [xbp-78h]
  FunctionGroupEntity_o *v52; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B1D08B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionGroupMaster___, eventUpVallInfo);
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v12);
    sub_1BCAFF8(&EventDropUpValInfo_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v14);
    sub_1BCAFF8(&StringLiteral_1309/*"2"*/, v15);
    sub_1BCAFF8(&StringLiteral_13531/*"Target"*/, v16);
    sub_1BCAFF8(&StringLiteral_1164/*"1"*/, v17);
    sub_1BCAFF8(&StringLiteral_6170/*"EventId"*/, v18);
    sub_1BCAFF8(&StringLiteral_1113/*"0"*/, v19);
    byte_4B1D08B = 1;
  }
  v52 = 0LL;
  entity = 0LL;
  funcId = this->fields.funcId;
  if ( funcId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
    Values = (FunctionGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
    if ( *eventUpVallInfo )
    {
      v24 = Values;
      if ( (*eventUpVallInfo)->fields.svtId < 1 )
      {
        v47 = 0LL;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Values = (FunctionGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !*eventUpVallInfo || !Values )
          goto LABEL_61;
        v47 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Values,
                                   (*eventUpVallInfo)->fields.svtId,
                                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      Values = (FunctionGroupMaster_o *)SkillLvEntity__getValues(this, v23);
      v26 = this->fields.funcId;
      if ( v26 )
      {
        individuality = 0;
        v27 = Values;
        v28 = 0LL;
        p_revision = &Values->fields.revision;
        do
        {
          max_length = v26->max_length;
          if ( (__int64)v28 >= (int)max_length )
          {
            LOBYTE(funcId) = individuality;
            return (char)funcId;
          }
          if ( v28 >= max_length )
            goto LABEL_65;
          if ( !Master_object )
            break;
          Values = (FunctionGroupMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              v26->m_Items[v28 + 1],
                                              (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Values & 1) != 0 )
          {
            if ( !entity )
              break;
            Values = (FunctionGroupMaster_o *)BasicHelper__IsNullOrEmpty(
                                                (System_Collections_ICollection_o *)entity[5].klass,
                                                0LL);
            if ( ((unsigned __int8)Values & 1) != 0 )
              goto LABEL_25;
            if ( !entity || !questPhaseEntity )
              break;
            Values = (FunctionGroupMaster_o *)QuestPhaseEntity__IsMatchIndividuality(
                                                questPhaseEntity,
                                                (System_Int32_array *)entity[5].klass,
                                                0LL);
            if ( ((unsigned __int8)Values & 1) != 0 )
            {
LABEL_25:
              v30 = this->fields.funcId;
              if ( !v30 )
                break;
              if ( v28 >= v30->max_length )
LABEL_65:
                sub_1BCB25C(Values, v23, v25);
              if ( !v24 )
                break;
              Values = (FunctionGroupMaster_o *)FunctionGroupMaster__TryGetEntity(
                                                  v24,
                                                  &v52,
                                                  v30->m_Items[v28 + 1],
                                                  0,
                                                  0LL);
              if ( ((unsigned __int8)Values & 1) != 0 )
              {
                if ( !v27 )
                  break;
                MasterName_k__BackingField_low = LODWORD(v27->fields._MasterName_k__BackingField);
                if ( (__int64)v28 >= (int)MasterName_k__BackingField_low )
                {
                  LOBYTE(funcId) = 0;
                  return (char)funcId;
                }
                if ( v28 >= MasterName_k__BackingField_low )
                  goto LABEL_65;
                v32 = *(System_Collections_Generic_Dictionary_object__int__o **)&p_revision[2 * v28];
                if ( v32 )
                {
                  Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                      *(System_Collections_Generic_Dictionary_object__int__o **)&p_revision[2 * v28],
                                                      (Il2CppObject *)StringLiteral_6170/*"EventId"*/,
                                                      (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                  if ( ((unsigned __int8)Values & 1) == 0 )
                  {
                    if ( !entity )
                      break;
                    if ( LODWORD(entity[1].monitor) == 111 )
                    {
                      Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                          v32,
                                                          (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                                          (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
                      if ( ((unsigned __int8)Values & 1) != 0 )
                      {
                        Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                            v32,
                                                            (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                                            (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                        if ( (int)Values < 1 )
                          goto LABEL_41;
                        if ( v47 )
                        {
                          v33 = *eventUpVallInfo;
                          if ( !*eventUpVallInfo )
                            break;
                          dispLimitCount = v33->fields.dispLimitCount;
                          limitCount = v33->fields.limitCount;
                          Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                                   v32,
                                   (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                   (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                          Values = (FunctionGroupMaster_o *)ServantEntity__IsIndividuality(
                                                              v47,
                                                              limitCount,
                                                              dispLimitCount,
                                                              Item,
                                                              0LL);
                          if ( ((unsigned __int8)Values & 1) != 0 )
                          {
LABEL_41:
                            if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                   v32,
                                   (Il2CppObject *)StringLiteral_13531/*"Target"*/,
                                   (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                            {
                              individualitya = System_Collections_Generic_Dictionary_object__int___get_Item(
                                                 v32,
                                                 (Il2CppObject *)StringLiteral_13531/*"Target"*/,
                                                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                            }
                            else
                            {
                              individualitya = 0;
                            }
                            v35 = entity;
                            v46 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
                            EventDropUpValInfo___ctor_40890620(v46, 0, (FunctionEntity_o *)v35, individualitya, 0LL);
                            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                                   v32,
                                   (Il2CppObject *)StringLiteral_1113/*"0"*/,
                                   (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                            {
                              Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                  v32,
                                                                  (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                                                  (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              if ( !*eventUpVallInfo )
                                break;
                              v36 = (Il2CppObject *)v46;
                              if ( !v46 )
                                break;
                              EventDropUpValInfo__SetAddCount(
                                v46,
                                (int32_t)Values,
                                (*eventUpVallInfo)->fields.equipSvtId > 0,
                                0,
                                0LL);
                            }
                            else
                            {
                              Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                  v32,
                                                                  (Il2CppObject *)StringLiteral_1113/*"0"*/,
                                                                  (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                              v36 = (Il2CppObject *)v46;
                              if ( (_DWORD)Values == 2 )
                              {
                                Values = (FunctionGroupMaster_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                    v32,
                                                                    (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                                                    (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                                if ( !*eventUpVallInfo || !v46 )
                                  break;
                                EventDropUpValInfo__SetRateCount(
                                  v46,
                                  (int32_t)Values,
                                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                                  0,
                                  0LL);
                              }
                            }
                            if ( !*eventUpVallInfo )
                              break;
                            Values = (FunctionGroupMaster_o *)(*eventUpVallInfo)->fields.dropList;
                            if ( !Values )
                              break;
                            v39 = *(_QWORD *)&Values->fields._MasterKind_k__BackingField;
                            v40 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                            ++HIDWORD(Values->fields._MasterName_k__BackingField);
                            if ( !v39 )
                              break;
                            v41 = SLODWORD(Values->fields._MasterName_k__BackingField);
                            if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                (System_Collections_Generic_List_object__o *)Values,
                                v36,
                                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v42 = v39 + 8 * v41;
                              LODWORD(Values->fields._MasterName_k__BackingField) = v41 + 1;
                              *(_QWORD *)(v42 + 32) = v36;
                              sub_1BCAF9C((CGThumbnailListItem_o *)(v42 + 32), (int32_t)v36, v37, v38);
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
          v26 = this->fields.funcId;
          ++v28;
        }
        while ( v26 );
      }
    }
LABEL_61:
    sub_1BCB254(Values, v23);
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
  System_Func_object__int__o *_9__61_0; // x22
  Il2CppObject *v33; // x23
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  int32_t v38; // [xsp+Ch] [xbp-74h]
  FunctionGroupEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *v40; // [xsp+18h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_4B1D0AA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&index);
    sub_1BCAFF8(&DataManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v16);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v17);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___, v18);
    sub_1BCAFF8(&System_Func_QuestGroupEntity__int__TypeInfo, v19);
    sub_1BCAFF8(&int___TypeInfo, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v21);
    sub_1BCAFF8(&Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, v22);
    this = (SkillLvEntity_o *)sub_1BCAFF8(&SkillLvEntity___c_TypeInfo, v23);
    byte_4B1D0AA = 1;
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
                                      (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
  _9__61_0 = (System_Func_object__int__o *)v31->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = SkillLvEntity___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v31->static_fields->__9;
    _9__61_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_QuestGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__61_0, v33, Method_SkillLvEntity___c__GetEventIndividuality_b__61_0__, 0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Func_QuestGroupEntity__int__o *)_9__61_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                               (System_Func_TSource__TResult__o *)_9__61_0,
                                                               (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_QuestGroupEntity__int___);
  if ( System_Linq_Enumerable__Contains_int_(
         v37,
         questId,
         (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return questTvals;
  }
  this = (SkillLvEntity_o *)sub_1BCB0A0(int___TypeInfo, 1LL);
  if ( !this )
LABEL_40:
    sub_1BCB254(this, *(_QWORD *)&index);
  questTvals = (System_Int32_array *)this;
  if ( !this->fields.chargeTurn )
LABEL_41:
    sub_1BCB25C(this, *(_QWORD *)&index, *(_QWORD *)&eventId);
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
  __int64 v14; // x2
  int klass; // w9
  System_String_o *v16; // x20
  int v17; // w8
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  int v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1D0A9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_19361/*"followerVals"*/, v5);
    sub_1BCAFF8(&StringLiteral_15670/*"["*/, v6);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v7);
    sub_1BCAFF8(&StringLiteral_15923/*"]"*/, v8);
    byte_4B1D0A9 = 1;
  }
  result = 0;
  StringArray = EntityScriptUtil__GetStringArray(this->fields.script, (System_String_o *)StringLiteral_19361/*"followerVals"*/, 0LL, 0LL);
  if ( !StringArray )
    return 0LL;
  v10 = StringArray;
  if ( !*(_QWORD *)&StringArray->max_length )
    return 0LL;
  v11 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v11,
    (const MethodInfo_337C424 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v10->max_length )
    goto LABEL_20;
  v12 = v10->m_Items[0];
  if ( !v12
    || (v12 = System_String__Replace_62496972(
                v12,
                (System_String_o *)StringLiteral_15670/*"["*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL)) == 0LL
    || (v12 = System_String__Replace_62496972(
                v12,
                (System_String_o *)StringLiteral_15923/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL)) == 0LL
    || (v12 = (System_String_o *)System_String__Split(v12, 0x2Cu, 0, 0LL), v20 = 0, !v12) )
  {
LABEL_21:
    sub_1BCB254(v12, v13);
  }
  klass = (int)v12[1].klass;
  v16 = v12;
  if ( klass >= 1 )
  {
    v17 = 0;
    while ( v17 < (unsigned int)klass )
    {
      v12 = (System_String_o *)System_Int32__TryParse(*((System_String_o **)&v16[1].monitor + v17), &result, 0LL);
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        v12 = System_Int32__ToString((int32_t)&v20, 0LL);
        if ( !v11 )
          goto LABEL_21;
        System_Collections_Generic_Dictionary_object__int___Add(
          v11,
          (Il2CppObject *)v12,
          result,
          (const MethodInfo_337CDD8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
      v17 = v20 + 1;
      v20 = v17;
      klass = (int)v16[1].klass;
      if ( v17 >= klass )
        return (System_Collections_Generic_Dictionary_string__int__o *)v11;
    }
LABEL_20:
    sub_1BCB25C(v12, v13, v14);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_ValueTuple_FuncList_TYPE__int___o __fastcall SkillLvEntity__GetFriendPointUpTypeVal(
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
  Il2CppObject *Master_object; // x21
  const MethodInfo *v11; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Int32_array *funcId; // x8
  System_Collections_Generic_Dictionary_string__int__array *v16; // x20
  unsigned __int64 v17; // x22
  unsigned __int64 max_length; // x9
  int monitor; // w8
  int v20; // w8
  System_Collections_Generic_Dictionary_object__int__o *v21; // x19
  int32_t v22; // w20
  int32_t Item; // w2
  const MethodInfo_37D4878 *v24; // x3
  __int64 v25; // x0 OVERLAPPED
  int32_t v26; // w1
  Il2CppObject *v27; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  __int64 v29; // [xsp+10h] [xbp-40h] BYREF
  int32_t v30; // [xsp+18h] [xbp-38h]
  System_ValueTuple_Int32Enum__int__o v31; // 0:x0.8
  System_ValueTuple_Int32Enum__int__o v32; // 0:x2.8
  System_Nullable_ValueTuple_FuncList_TYPE__int___o result; // 0:x0.12
  System_Nullable_T__o v34; // 0:x0.16

  if ( (byte_4B1D08A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1BCAFF8(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int____ctor__, v7);
    sub_1BCAFF8(&Method_System_ValueTuple_FuncList_TYPE__int___ctor__, v8);
    sub_1BCAFF8(&StringLiteral_1113/*"0"*/, v9);
    byte_4B1D08A = 1;
  }
  entity = 0LL;
  if ( !this->fields.funcId )
    goto LABEL_24;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
  Values = SkillLvEntity__getValues(this, v11);
  funcId = this->fields.funcId;
  if ( !funcId )
    goto LABEL_16;
  v16 = Values;
  v17 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v17 >= (int)max_length )
      goto LABEL_24;
    if ( v17 >= max_length )
      goto LABEL_26;
    if ( !Master_object )
      goto LABEL_16;
    Values = (System_Collections_Generic_Dictionary_string__int__array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                           &entity,
                                                                           funcId->m_Items[v17 + 1],
                                                                           (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Values & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_16;
      monitor = (int)entity[1].monitor;
      if ( monitor == 123 || monitor == 104 )
        break;
    }
    funcId = this->fields.funcId;
    ++v17;
    if ( !funcId )
      goto LABEL_16;
  }
  if ( !v16 )
LABEL_16:
    sub_1BCB254(Values, v13);
  v20 = v16->max_length;
  if ( (int)v17 >= v20 )
    goto LABEL_24;
  if ( (unsigned int)v17 >= v20 )
LABEL_26:
    sub_1BCB25C(Values, v13, v14);
  v21 = (System_Collections_Generic_Dictionary_object__int__o *)v16->m_Items[v17];
  if ( !v21
    || (Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                               v21,
                                                                               (Il2CppObject *)StringLiteral_1113/*"0"*/,
                                                                               (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__),
        ((unsigned __int8)Values & 1) == 0) )
  {
LABEL_24:
    v30 = 0;
    v29 = 0LL;
    goto LABEL_25;
  }
  if ( !entity )
    goto LABEL_16;
  v22 = (int32_t)entity[1].monitor;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           v21,
           (Il2CppObject *)StringLiteral_1113/*"0"*/,
           (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v31 = (System_ValueTuple_Int32Enum__int__o)&v27;
  v27 = 0LL;
  System_ValueTuple_Int32Enum__int____ctor(
    v31,
    v22,
    Item,
    (const MethodInfo_3A06C84 *)Method_System_ValueTuple_FuncList_TYPE__int___ctor__);
  v34.fields.value = v27;
  *(_QWORD *)&v34.fields.hasValue = &v29;
  v30 = 0;
  v29 = 0LL;
  v32 = (System_ValueTuple_Int32Enum__int__o)Method_System_Nullable_ValueTuple_FuncList_TYPE__int____ctor__;
  System_Nullable_ValueTuple_Int32Enum__int_____ctor(v34, v32, v24);
LABEL_25:
  v25 = v29;
  v26 = v30;
  *(_QWORD *)&result.fields.hasValue = v25;
  result.fields.value.fields.Item2 = v26;
  return result;
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
  System_Func_long__Nullable_int___o *_9__44_0; // x21
  Il2CppObject *v11; // x22
  struct SkillLvEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Nullable_int__o v17; // 0:x3.8

  if ( (byte_4B1D09B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____, method);
    sub_1BCAFF8(&System_Func_long__Nullable_int___TypeInfo, v3);
    sub_1BCAFF8(&Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__, v4);
    sub_1BCAFF8(&SkillLvEntity___c_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_19537/*"funcPositionForSplitFuncSequence"*/, v6);
    byte_4B1D09B = 1;
  }
  v7 = SkillLvEntity___c_TypeInfo;
  script = this->fields.script;
  if ( !SkillLvEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillLvEntity___c_TypeInfo);
    v7 = SkillLvEntity___c_TypeInfo;
  }
  v9 = (System_String_o *)StringLiteral_19537/*"funcPositionForSplitFuncSequence"*/;
  _9__44_0 = v7->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = SkillLvEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v7->static_fields->__9;
    _9__44_0 = (System_Func_long__Nullable_int___o *)sub_1BCB244(System_Func_long__Nullable_int___TypeInfo);
    System_Func_long__Nullable_int_____ctor(
      _9__44_0,
      v11,
      Method_SkillLvEntity___c__GetFuncIndexForSplitFuncSequence_b__44_0__,
      0LL);
    static_fields = SkillLvEntity___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = _9__44_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v13, v14);
  }
  v17 = 0LL;
  return EntityScriptUtil__GetScriptValue_long__Nullable_int__(
           script,
           v9,
           (System_Func_TSource__TDestination__o *)_9__44_0,
           v17,
           (const MethodInfo_30210D4 *)Method_EntityScriptUtil_GetScriptValue_long__Nullable_int____);
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

  if ( (byte_4B1D09F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_List_object____, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_1BCAFF8(&long_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v15);
    byte_4B1D09F = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v16 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  script = this->fields.script;
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_object___ctor__);
  Value_object = BasicHelper__GetValue_object_(
                   script,
                   key,
                   (Il2CppObject *)v18,
                   (const MethodInfo_30084F0 *)Method_BasicHelper_GetValue_List_object____);
  if ( !Value_object )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)Value_object,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v21 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v37,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      goto LABEL_18;
    }
    if ( !v16 )
      sub_1BCB254(v21, v22);
    if ( !v37.fields._current )
      sub_1BCB254(0LL, v22);
    if ( v37.fields._current->klass->_1.element_class != long_TypeInfo->_1.element_class )
      break;
    v25 = (unsigned int *)j_il2cpp_object_unbox_0(v37.fields._current, long_TypeInfo, v23, v24);
    v26 = *v25;
    items = v16->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v16->fields._version;
    if ( !items )
      sub_1BCB254(v25, v26);
    size = v16->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v16,
        v26,
        *(const MethodInfo_369CBAC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = size + 1;
      items->m_Items[size + 1] = v26;
    }
  }
  sub_1BCB514(v37.fields._current);
  v32 = v31;
  v34 = v33;
  __cxa_end_catch();
  if ( v34 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1CB3D40();
  }
  v35 = *(_QWORD *)__cxa_begin_catch(v32);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v35 )
    sub_1BCB24C(v35);
LABEL_18:
  if ( !v16 )
LABEL_20:
    sub_1BCB254(Value_object, v20);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall SkillLvEntity__GetOptionalBattleEffectIdList(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Func_object__object__o *v6; // x20

  if ( (byte_4B1D09C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method);
    sub_1BCAFF8(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v3);
    sub_1BCAFF8(&System_Func_List_object___List_int___TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_16931/*"battleEffectId"*/, v5);
    byte_4B1D09C = 1;
  }
  v6 = (System_Func_object__object__o *)sub_1BCB244(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v6, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     (System_String_o *)StringLiteral_16931/*"battleEffectId"*/,
                                                     (System_Func_TSource__TDestination__o *)v6,
                                                     0LL,
                                                     (const MethodInfo_302123C *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


System_Int32_array *__fastcall SkillLvEntity__GetRevivalTargetArray(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D0AE & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22891/*"revivalTargetArray"*/, method);
    byte_4B1D0AE = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_22891/*"revivalTargetArray"*/, 0LL);
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

  if ( (byte_4B1D0A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BCAFF8(&long_TypeInfo, v8);
    byte_4B1D0A1 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)key,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BCB254(script, key);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1BCB514(script);
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

  if ( (byte_4B1D0AD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_string__object___, method);
    sub_1BCAFF8(&Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___, v3);
    sub_1BCAFF8(&JsonManager_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_23048/*"selectTreasureDeviceInfo"*/, v5);
    byte_4B1D0AD = 1;
  }
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_23048/*"selectTreasureDeviceInfo"*/,
                           0LL,
                           (const MethodInfo_3008C9C *)Method_BasicHelper_GetValue_string__object___);
  if ( Value_object__object )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__Deserialize_object_(
           Value_object__object,
           (const MethodInfo_3086544 *)Method_JsonManager_Deserialize_SelectTreasureDeviceInfo___);
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

  if ( (byte_4B1D086 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1D086 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
  funcId = this->fields.funcId;
  v6 = (FunctionMaster_o *)Master_object;
  DataValsList = SkillLvEntity__getDataValsList(this, v7);
  if ( !v6 )
    sub_1BCB254(DataValsList, v9);
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

  if ( (byte_4B1D0A0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_List_object____, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v13);
    sub_1BCAFF8(&SkillLvEntity_SvtChangeBgm_TypeInfo, v14);
    sub_1BCAFF8(&StringLiteral_23643/*"svtBgmChange"*/, v15);
    byte_4B1D0A0 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          script,
          (Il2CppObject *)StringLiteral_23643/*"svtBgmChange"*/,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__o *)v16;
  v19 = this->fields.script;
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_object___ctor__);
  script = (System_Collections_Generic_Dictionary_object__object__o *)BasicHelper__GetValue_object_(
                                                                        v19,
                                                                        (System_String_o *)StringLiteral_23643/*"svtBgmChange"*/,
                                                                        (Il2CppObject *)v20,
                                                                        (const MethodInfo_30084F0 *)Method_BasicHelper_GetValue_List_object____);
  if ( !script )
LABEL_21:
    sub_1BCB254(script, v17);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)script,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v36.fields._current;
    v22 = (SkillLvEntity_SvtChangeBgm_o *)sub_1BCB244(SkillLvEntity_SvtChangeBgm_TypeInfo);
    v24 = (Il2CppObject *)v22;
    if ( current )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_1BCB514(current);
LABEL_19:
        sub_1BCB254(v26, v27);
      }
    }
    SkillLvEntity_SvtChangeBgm___ctor(v22, (System_Collections_Generic_Dictionary_string__object__o *)current, v23);
    if ( !v16 )
      goto LABEL_19;
    items = v16->fields._items;
    v31 = Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__Add__;
    ++v16->fields._version;
    if ( !items )
      sub_1BCB254(v26, v27);
    size = v16->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v24,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v24;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v24, v28, v29);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
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
  __int64 v13; // x2
  struct System_Int32_array *v14; // x8
  SkillLvMaster_o *v15; // x23
  unsigned __int64 v16; // x27
  unsigned __int64 max_length; // x9
  DataVals_o *v18; // x24
  int32_t v19; // w1
  int32_t Param; // w25
  int32_t v21; // w1
  const MethodInfo *v22; // x4
  SkillLvEntity_o *v24; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B1D0AC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, ret);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    byte_4B1D0AC = 1;
  }
  v24 = 0LL;
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
      (const MethodInfo_3571E2C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = SkillLvEntity__getDataValsList(this, v10);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
    isAddState = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v14 = this->fields.funcId;
    if ( !v14 )
LABEL_32:
      sub_1BCB254(isAddState, funcId);
    v15 = (SkillLvMaster_o *)isAddState;
    v16 = 0LL;
    while ( 1 )
    {
      max_length = v14->max_length;
      if ( (__int64)v16 >= (int)max_length )
        break;
      if ( v16 >= max_length )
        goto LABEL_34;
      if ( !Master_object )
        goto LABEL_32;
      isAddState = (System_Collections_Generic_HashSet_int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                  &entity,
                                                                  v14->m_Items[v16 + 1],
                                                                  (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)isAddState & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_32;
        isAddState = (System_Collections_Generic_HashSet_int__o *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)isAddState & 1) != 0 )
        {
          if ( !DataValsList )
            goto LABEL_32;
          if ( v16 >= DataValsList->max_length )
LABEL_34:
            sub_1BCB25C(isAddState, funcId, v13);
          if ( !entity )
            goto LABEL_32;
          v18 = DataValsList->m_Items[v16];
          if ( !v18 )
            goto LABEL_32;
          DataVals__SetTempType(
            DataValsList->m_Items[v16],
            (FunctionMaster_o *)Master_object,
            (int32_t)entity[1].monitor,
            0LL);
          v19 = DataVals__isParam(v18, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v18, v19, 0, 0LL);
          v21 = DataVals__isParam(v18, 27, 0LL) ? 27 : 4;
          isAddState = (System_Collections_Generic_HashSet_int__o *)DataVals__GetParam(v18, v21, 0, 0LL);
          if ( !v15 )
            goto LABEL_32;
          isAddState = (System_Collections_Generic_HashSet_int__o *)SkillLvMaster__TryGetEntity(
                                                                      v15,
                                                                      &v24,
                                                                      Param,
                                                                      (int32_t)isAddState,
                                                                      v22);
          if ( ((unsigned __int8)isAddState & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_32;
            funcId = (System_Collections_Generic_IEnumerable_T__o *)v24->fields.funcId;
            if ( funcId )
            {
              isAddState = *ret;
              if ( !*ret )
                goto LABEL_32;
              System_Collections_Generic_HashSet_int___UnionWith(
                isAddState,
                funcId,
                (const MethodInfo_3571E2C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
            }
          }
        }
      }
      v14 = this->fields.funcId;
      ++v16;
      if ( !v14 )
        goto LABEL_32;
    }
  }
}


int32_t __fastcall SkillLvEntity__GetWarBoardBreakPointDamageType(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D0A8 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15445/*"WarBoardBreakPointDamage"*/, method);
    byte_4B1D0A8 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_15445/*"WarBoardBreakPointDamage"*/, 0, v2);
}


bool __fastcall SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(
        SkillLvEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D0AB & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16550/*"additionalSkillInsertCurrentSkillAfter"*/, method);
    byte_4B1D0AB = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_16550/*"additionalSkillInsertCurrentSkillAfter"*/, 0, v2) == 1;
}


bool __fastcall SkillLvEntity__IsAress(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B1D098 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&StringLiteral_16732/*"aress"*/, v3);
    byte_4B1D098 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_16732/*"aress"*/,
                       (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsContainsTurnOrCountBuff(SkillLvEntity_o *this, const MethodInfo *method)
{
  DataVals_array *SetTypeDataValArray; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  int max_length; // w8
  DataVals_array *v6; // x19
  unsigned int v7; // w22
  bool v8; // w21
  DataVals_o *v9; // x20
  int32_t funcType; // w8

  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(this, method);
  if ( !SetTypeDataValArray )
LABEL_16:
    sub_1BCB254(SetTypeDataValArray, v3);
  max_length = SetTypeDataValArray->max_length;
  v6 = SetTypeDataValArray;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  v8 = 1;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1BCB25C(SetTypeDataValArray, v3, v4);
    v9 = v6->m_Items[v7];
    if ( !v9 )
      goto LABEL_16;
    funcType = v9->fields.funcType;
    if ( funcType == 1 || funcType == 130 || funcType == 16 )
    {
      if ( DataVals__GetParam(v9, 1, 0, 0LL) > 0 )
        return v8;
      SetTypeDataValArray = (DataVals_array *)DataVals__GetParam(v9, 2, 0, 0LL);
      if ( (int)SetTypeDataValArray > 0 )
        return 1;
    }
    max_length = v6->max_length;
    if ( (int)++v7 >= max_length )
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
  if ( (byte_4B1D099 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, isCheckHate);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1BCAFF8(&long_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_5917/*"EnableTarget"*/, v7);
    byte_4B1D099 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_5917/*"EnableTarget"*/,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v3;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_5917/*"EnableTarget"*/,
                                                                            (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCB254(Item, v9);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12) == 1;
  sub_1BCB514(Item);
  return (unsigned __int8)SkillLvEntity__GetAddIndiv(v14, v15);
}


bool __fastcall SkillLvEntity__IsIgnoreWhiteFade(SkillLvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D09D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20099/*"ignoreWhiteFade"*/, method);
    byte_4B1D09D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20099/*"ignoreWhiteFade"*/, 0LL);
}


bool __fastcall SkillLvEntity__IsNoTargetSkipSkill(SkillLvEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1D0A2 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22053/*"noTargetSkipSkill"*/, method);
    byte_4B1D0A2 = 1;
  }
  return SkillLvEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22053/*"noTargetSkipSkill"*/, -1, v2) == 1;
}


bool __fastcall SkillLvEntity__IsRevivalUnder(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B1D097 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&StringLiteral_22892/*"revivalUnder"*/, v3);
    byte_4B1D097 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_22892/*"revivalUnder"*/,
                       (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsRevivalUp(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B1D096 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&StringLiteral_22893/*"revivalUp"*/, v3);
    byte_4B1D096 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_22893/*"revivalUp"*/,
                       (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall SkillLvEntity__IsSetGroupId(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_string__int__array *Values; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__int__array *v8; // x19
  bool v9; // w20
  int v10; // w21

  if ( (byte_4B1D0AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_1BCAFF8(&StringLiteral_9921/*"OnlyMaxFuncGroupId"*/, v3);
    byte_4B1D0AF = 1;
  }
  Values = SkillLvEntity__getValues(this, method);
  if ( !Values )
    goto LABEL_12;
  max_length = Values->max_length;
  v8 = Values;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1BCB25C(Values, v5, v6);
      Values = (System_Collections_Generic_Dictionary_string__int__array *)v8->m_Items[v10];
      if ( !Values )
        break;
      Values = (System_Collections_Generic_Dictionary_string__int__array *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                             (System_Collections_Generic_Dictionary_object__int__o *)Values,
                                                                             (Il2CppObject *)StringLiteral_9921/*"OnlyMaxFuncGroupId"*/,
                                                                             (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)Values & 1) == 0 )
      {
        max_length = v8->max_length;
        v9 = ++v10 < max_length;
        if ( v10 < max_length )
          continue;
      }
      return v9;
    }
LABEL_12:
    sub_1BCB254(Values, v5);
  }
  return v9;
}


bool __fastcall SkillLvEntity__IsSupportExcluded(
        SkillLvEntity_o *this,
        System_Collections_Generic_Dictionary_string__int__o *vals,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4B1D093 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, vals);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v4);
    this = (SkillLvEntity_o *)sub_1BCAFF8(&StringLiteral_2282/*"ApplySupportSvt"*/, v5);
    byte_4B1D093 = 1;
  }
  if ( !vals )
    sub_1BCB254(this, vals);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)StringLiteral_2282/*"ApplySupportSvt"*/,
           (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
      && !System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)vals,
            (Il2CppObject *)StringLiteral_2282/*"ApplySupportSvt"*/,
            (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}


bool __fastcall SkillLvEntity__IsVoiceVolume(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B1D091 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&StringLiteral_15241/*"VoiceVolume"*/, v3);
    byte_4B1D091 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_15241/*"VoiceVolume"*/,
                       (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v8; // x2
  struct System_String_array *v9; // x8
  DataVals_array *v10; // x19
  __int64 v11; // x24
  __int64 v12; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x26
  System_String_o *v15; // x22
  DataVals_o *v16; // x21
  const MethodInfo *v17; // x3
  DataVals_o *v18; // x20
  const MethodInfo *v19; // x3
  __int64 v21; // x0

  if ( (byte_4B1D085 & 1) == 0 )
  {
    sub_1BCAFF8(&DataVals___TypeInfo, method);
    sub_1BCAFF8(&DataVals_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v4);
    byte_4B1D085 = 1;
  }
  svals = this->fields.svals;
  if ( !svals )
  {
    v10 = (DataVals_array *)sub_1BCB0A0(DataVals___TypeInfo, 1LL);
    v18 = (DataVals_o *)sub_1BCB244(DataVals_TypeInfo);
    DataVals___ctor(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v10 )
    {
      if ( v18 )
      {
        v6 = sub_1BCB134(v18, v10->obj.klass->_1.element_class);
        if ( !v6 )
        {
LABEL_21:
          v21 = sub_1BCB278(v6);
          sub_1BCB120(v21, 0LL);
        }
      }
      if ( !v10->max_length )
LABEL_20:
        sub_1BCB25C(v6, v7, v8);
      v10->m_Items[0] = v18;
      sub_1BCAF9C((CGThumbnailListItem_o *)v10->m_Items, (int32_t)v18, v8, v19);
      return v10;
    }
LABEL_13:
    sub_1BCB254(v6, v7);
  }
  v6 = sub_1BCB0A0(DataVals___TypeInfo, svals->max_length);
  v9 = this->fields.svals;
  if ( !v9 )
    goto LABEL_13;
  v10 = (DataVals_array *)v6;
  v11 = 4LL;
  v12 = 32LL;
  while ( 1 )
  {
    max_length = v9->max_length;
    v14 = v11 - 4;
    if ( v11 - 4 >= (int)max_length )
      return v10;
    if ( v14 >= max_length )
      goto LABEL_20;
    v15 = (System_String_o *)*((_QWORD *)&v9->obj.klass + v11);
    v16 = (DataVals_o *)sub_1BCB244(DataVals_TypeInfo);
    DataVals___ctor(v16, v15, 0LL);
    if ( v10 )
    {
      if ( v16 )
      {
        v6 = sub_1BCB134(v16, v10->obj.klass->_1.element_class);
        if ( !v6 )
          goto LABEL_21;
      }
      if ( v14 >= v10->max_length )
        goto LABEL_20;
      *((_QWORD *)&v10->obj.klass + v11) = v16;
      sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v10 + v12), (int32_t)v16, v8, v17);
      v9 = this->fields.svals;
      ++v11;
      v12 += 8LL;
      if ( v9 )
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

  if ( (byte_4B1D087 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillDetailMaster___, isShort);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BCAFF8(&SkillDetailParamFormatResolver_TypeInfo, v6);
    byte_4B1D087 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v8);
  }
  Detail = SkillDetailMaster__getDetail((SkillDetailMaster_o *)Instance, this->fields.skillDetailId, isShort, v9);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  return SkillDetailParamFormatResolver__Apply(Detail, this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillLvEntity__getDetail_42023016(
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

  if ( (byte_4B1D088 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_8191/*"LEVEL_DETAIL_INFO"*/, v8);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v9);
    byte_4B1D088 = 1;
  }
  if ( lv <= 0 )
  {
    v15 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8191/*"LEVEL_DETAIL_INFO"*/, 0LL);
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
  __int64 v36; // x2
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v38; // x29
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v40; // x8
  unsigned __int64 v41; // x8
  System_Collections_Generic_Dictionary_object__int__o *v42; // x19
  Il2CppObject *v43; // x8
  int monitor; // w24
  System_Int32_array *klass; // x3
  const MethodInfo *v46; // x7
  int32_t Item; // w0
  System_Int32_array *EventIndividuality; // x0
  __int64 *v49; // x8
  bool v51; // [xsp+4h] [xbp-ACh]
  ItemMaster_o *Master_object; // [xsp+8h] [xbp-A8h]
  int32_t v53; // [xsp+14h] [xbp-9Ch]
  unsigned int v54; // [xsp+1Ch] [xbp-94h]
  ServantEntity_o *v55; // [xsp+20h] [xbp-90h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+28h] [xbp-88h]
  EventUpValSetupInfo_o *v57; // [xsp+30h] [xbp-80h]
  System_Collections_Generic_Dictionary_string__int__o **m_Items; // [xsp+38h] [xbp-78h]
  FunctionGroupEntity_o *v59; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B1D08C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionGroupMaster___, *(_QWORD *)&wearersSvtId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v19);
    sub_1BCAFF8(&DataManager_TypeInfo, v20);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v24);
    sub_1BCAFF8(&StringLiteral_1370/*"3"*/, v25);
    sub_1BCAFF8(&StringLiteral_1309/*"2"*/, v26);
    sub_1BCAFF8(&StringLiteral_13531/*"Target"*/, v27);
    sub_1BCAFF8(&StringLiteral_1164/*"1"*/, v28);
    sub_1BCAFF8(&StringLiteral_6170/*"EventId"*/, v29);
    byte_4B1D08C = 1;
  }
  v59 = 0LL;
  entity = 0LL;
  if ( !setupInfo || !this->fields.funcId )
  {
LABEL_94:
    LOBYTE(QuestPhaseIndividualList) = 0;
    return (unsigned __int8)QuestPhaseIndividualList & 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
  v30 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
  v32 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  v53 = wearesLimitCount;
  v54 = wearersSvtId;
  if ( wearersSvtId < 1 )
  {
    v55 = 0LL;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !QuestPhaseIndividualList )
      goto LABEL_100;
    v55 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               QuestPhaseIndividualList,
                               wearersSvtId,
                               (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  Values = SkillLvEntity__getValues(this, v31);
  v57 = setupInfo;
  QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                                                             setupInfo,
                                                                             eventId,
                                                                             0LL);
  funcId = this->fields.funcId;
  questPhaseIndividualityList = (System_Int32_array *)QuestPhaseIndividualList;
  if ( !funcId )
    goto LABEL_100;
  v51 = !isOwner;
  m_Items = Values->m_Items;
  v38 = 0LL;
  while ( 1 )
  {
    max_length = funcId->max_length;
    if ( (__int64)v38 >= (int)max_length )
      goto LABEL_94;
    if ( v38 >= max_length )
      goto LABEL_101;
    if ( !v30 )
      goto LABEL_100;
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                                                                               &entity,
                                                                               funcId->m_Items[v38 + 1],
                                                                               (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
      goto LABEL_85;
    if ( isFuncGroup )
    {
      v40 = this->fields.funcId;
      if ( !v40 )
        goto LABEL_100;
      if ( v38 >= v40->max_length )
LABEL_101:
        sub_1BCB25C(QuestPhaseIndividualList, Individuality, v36);
      if ( !v32 )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)FunctionGroupMaster__TryGetEntity(
                                                                                 (FunctionGroupMaster_o *)v32,
                                                                                 &v59,
                                                                                 v40->m_Items[v38 + 1],
                                                                                 eventId,
                                                                                 0LL);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
    }
    if ( !Values )
      goto LABEL_100;
    v41 = Values->max_length;
    if ( (__int64)v38 >= (int)v41 )
      goto LABEL_85;
    if ( v38 >= v41 )
      goto LABEL_101;
    v42 = (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v38];
    if ( !v42 )
      goto LABEL_85;
    v43 = entity;
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v38],
                                                                                 (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                                                                 (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v42,
                                                                                 (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                                                                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !(_DWORD)QuestPhaseIndividualList )
        goto LABEL_85;
      if ( !entity )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v57,
                                                                                 questPhaseIndividualityList,
                                                                                 (System_Int32_array *)entity[5].klass,
                                                                                 0LL);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)v55;
      if ( !v55 )
      {
LABEL_99:
        LODWORD(QuestPhaseIndividualList) = v54 >> 31;
        return (unsigned __int8)QuestPhaseIndividualList & 1;
      }
      if ( entity )
      {
        LOBYTE(QuestPhaseIndividualList) = ServantEntity__IsIndividuality_41810624(
                                             v55,
                                             v53,
                                             wearesDispLimitCount,
                                             (System_Int32_array *)entity[2].monitor,
                                             0LL);
        return (unsigned __int8)QuestPhaseIndividualList & 1;
      }
LABEL_100:
      sub_1BCB254(QuestPhaseIndividualList, Individuality);
    }
    QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                               (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v38],
                                                                               (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                                                               (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
    {
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v42,
                                                                                 (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                                                                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList )
      {
LABEL_83:
        v43 = entity;
        if ( !entity )
          goto LABEL_100;
LABEL_84:
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                   v57,
                                                                                   questPhaseIndividualityList,
                                                                                   (System_Int32_array *)v43[5].klass,
                                                                                   0LL);
        if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
          goto LABEL_93;
      }
    }
LABEL_85:
    funcId = this->fields.funcId;
    ++v38;
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v38],
                                                                                 (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                                                                 (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v42,
                                                                                 (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                                                                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v42,
                                                                                 (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                                                                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v42,
                                                                                   (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                                                                   (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( !(_DWORD)QuestPhaseIndividualList )
          goto LABEL_85;
      }
      if ( !entity )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v57,
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
        if ( (v54 & 0x80000000) != 0 || !*(_QWORD *)&klass->max_length )
          return (unsigned __int8)QuestPhaseIndividualList & 1;
        goto LABEL_91;
      }
      if ( !entity )
        goto LABEL_100;
      klass = (System_Int32_array *)entity[2].monitor;
      if ( klass )
      {
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)(&dword_0 + 1);
        if ( (v54 & 0x80000000) != 0 || (int)klass->max_length < 1 )
          return (unsigned __int8)QuestPhaseIndividualList & 1;
LABEL_91:
        if ( v55 )
        {
          QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality_41810624(
                                                                                     v55,
                                                                                     v53,
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v38],
                                                                                 (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                                                                 (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 v42,
                                                                                 (Il2CppObject *)StringLiteral_6170/*"EventId"*/,
                                                                                 (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v42,
                                                                                 (Il2CppObject *)StringLiteral_6170/*"EventId"*/,
                                                                                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v42,
                                                                                 (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                                                                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (int)QuestPhaseIndividualList >= 1 )
      {
        if ( !v55 )
          goto LABEL_85;
        Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                 v42,
                 (Il2CppObject *)StringLiteral_1309/*"2"*/,
                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsIndividuality(
                                                                                   v55,
                                                                                   v53,
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
                             v38,
                             eventId,
                             v57->fields.questId,
                             (System_Int32_array *)entity[5].klass,
                             (FunctionMaster_o *)v30,
                             (FunctionGroupMaster_o *)v32,
                             v46);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v57,
                                                                                 questPhaseIndividualityList,
                                                                                 EventIndividuality,
                                                                                 0LL);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) != 0 )
      {
        if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
                v42,
                (Il2CppObject *)StringLiteral_13531/*"Target"*/,
                (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          goto LABEL_93;
        QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                   v42,
                                                                                   (Il2CppObject *)StringLiteral_13531/*"Target"*/,
                                                                                   (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( (_DWORD)QuestPhaseIndividualList != 1 || !v51 )
          goto LABEL_93;
      }
      goto LABEL_85;
    case 113:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v38],
                                                                                 (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                                                                 (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v42,
                                                                                 (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                                                                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v42,
                                                                                 (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                                                                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !(_DWORD)QuestPhaseIndividualList )
        goto LABEL_85;
      if ( !entity )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)EventUpValSetupInfo__IsUpVal(
                                                                                 v57,
                                                                                 questPhaseIndividualityList,
                                                                                 (System_Int32_array *)entity[5].klass,
                                                                                 0LL);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      if ( !v55 )
        goto LABEL_99;
      Individuality = ServantEntity__getIndividuality(v55, v53, wearesDispLimitCount, 0LL);
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !Master_object )
        goto LABEL_100;
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster__GetIndividualityList_41440348(
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
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v38],
                                                                                 (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                                                                 (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      goto LABEL_83;
    case 117:
    case 118:
      goto LABEL_84;
    case 129:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v38],
                                                                                 (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                                                                 (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      v49 = &StringLiteral_1309/*"2"*/;
      goto LABEL_79;
    case 132:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)m_Items[v38],
                                                                                 (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                                                                 (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)QuestPhaseIndividualList & 1) == 0 )
        goto LABEL_85;
      v49 = &StringLiteral_1370/*"3"*/;
LABEL_79:
      QuestPhaseIndividualList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 v42,
                                                                                 (Il2CppObject *)*v49,
                                                                                 (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( (_DWORD)QuestPhaseIndividualList != eventId )
        goto LABEL_85;
      goto LABEL_83;
    default:
      goto LABEL_85;
  }
}


bool __fastcall SkillLvEntity__getEventUpVal_42041432(
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
  const MethodInfo *v44; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v47; // x8
  struct System_Int32_array *v48; // x10
  SkillLvEntity_o *v49; // x29
  unsigned __int64 v50; // x11
  EventUpValInfo_o *v51; // x8
  int32_t v52; // w21
  ServantLimitEntity_o *v53; // x19
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v55; // x19
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v57; // x8
  struct EventUpValSetupInfo_o *v58; // x8
  unsigned __int64 chargeTurn; // x8
  System_Collections_Generic_Dictionary_object__int__o *v60; // x28
  int monitor; // w20
  System_Int32_array *klass; // x3
  struct System_Int32_array *v63; // x8
  EventPointBuffEntity_o *EnableEntity; // x20
  int32_t v65; // w23
  Il2CppObject *v66; // x23
  EventUpValInfo_o *v67; // x8
  const MethodInfo *v68; // x7
  EventUpValInfo_o *v69; // x8
  int32_t limitCount; // w20
  int32_t dispLimitCount; // w23
  int32_t v72; // w0
  struct EventUpValSetupInfo_o *v73; // x8
  SkillLvEntity_o *v74; // x2
  SkillEntity_o *v75; // x23
  SkillLvEntity_o *v76; // x20
  System_Int32_array *ActIndividuality; // x23
  int32_t v78; // w20
  int32_t v79; // w8
  int32_t v80; // w9
  int32_t v81; // w20
  Il2CppObject *v82; // x23
  EventDropUpValInfo_o *v83; // x27
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  Il2CppObject *v90; // x23
  int32_t v91; // w27
  EventDropUpValInfo_o *v92; // x20
  int32_t v93; // w1
  EventDropUpValInfo_o *v94; // x0
  bool v95; // w2
  Il2CppObject *v96; // x23
  int32_t v97; // w1
  EventDropUpValInfo_o *v98; // x0
  bool v99; // w2
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  Il2CppObject *v102; // x23
  EventUpValInfo_o *v103; // x8
  Il2CppObject *v104; // x27
  int32_t Item; // w23
  Il2CppClass *v106; // x21
  const char *namespaze; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v108; // x27
  unsigned __int64 v109; // x23
  int32_t lv; // w20
  char v111; // w8
  Il2CppObject *v112; // x1
  Il2CppObject *v113; // x23
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  Il2CppObject *v118; // x23
  EventDropUpValInfo_o *v119; // x20
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  __int64 v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  __int64 v125; // x8
  Il2CppObject *v126; // x20
  __int64 v127; // x23
  UserServantEntity_o *HeroineData; // x0
  bool v130; // [xsp+0h] [xbp-F0h]
  int32_t v131; // [xsp+4h] [xbp-ECh]
  int32_t v132; // [xsp+8h] [xbp-E8h]
  bool v133; // [xsp+Ch] [xbp-E4h]
  ServantEntity_o *v134; // [xsp+10h] [xbp-E0h]
  EventPointBuffEntity_o *value; // [xsp+18h] [xbp-D8h]
  SkillLvEntity_o *valuea; // [xsp+18h] [xbp-D8h]
  int32_t valueb; // [xsp+18h] [xbp-D8h]
  __int64 valuec; // [xsp+18h] [xbp-D8h]
  char v139; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v140; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v141; // [xsp+20h] [xbp-D0h]
  EventDropUpValInfo_o *v142; // [xsp+20h] [xbp-D0h]
  struct System_Int32_array *v144; // [xsp+30h] [xbp-C0h]
  char v145; // [xsp+3Ch] [xbp-B4h]
  System_Int32_array *questPhaseIndividualityList; // [xsp+40h] [xbp-B0h]
  SkillLvEntity_o *v147; // [xsp+48h] [xbp-A8h]
  unsigned __int64 v148; // [xsp+50h] [xbp-A0h]
  FunctionGroupEntity_o *v152; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-78h] BYREF
  int32_t actMaxRarity; // [xsp+84h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16

  v10 = this;
  if ( (byte_4B1D08D & 1) == 0 )
  {
    sub_1BCAFF8(&BuffList_TypeInfo, eventUpVallInfo);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BuffMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventPointBuffMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventQuestMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionGroupMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v19);
    sub_1BCAFF8(&DataManager_TypeInfo, v20);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1BCAFF8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v22);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v23);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v27);
    sub_1BCAFF8(&EventDropUpValInfo_TypeInfo, v28);
    sub_1BCAFF8(&Individuality_TypeInfo, v29);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v30);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33);
    sub_1BCAFF8(&StringLiteral_9921/*"OnlyMaxFuncGroupId"*/, v34);
    sub_1BCAFF8(&StringLiteral_1370/*"3"*/, v35);
    sub_1BCAFF8(&StringLiteral_1309/*"2"*/, v36);
    sub_1BCAFF8(&StringLiteral_13531/*"Target"*/, v37);
    sub_1BCAFF8(&StringLiteral_1164/*"1"*/, v38);
    sub_1BCAFF8(&StringLiteral_6170/*"EventId"*/, v39);
    this = (SkillLvEntity_o *)sub_1BCAFF8(&StringLiteral_1113/*"0"*/, v40);
    byte_4B1D08D = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v152 = 0LL;
  entity = 0LL;
  if ( !*eventUpVallInfo )
    goto LABEL_287;
  if ( !(*eventUpVallInfo)->fields.setupInfo || !v10->fields.funcId )
    goto LABEL_285;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
  v42 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionGroupMaster___);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*eventUpVallInfo )
    goto LABEL_287;
  v147 = this;
  if ( (*eventUpVallInfo)->fields.svtId < 1 )
  {
    v43 = 0LL;
    goto LABEL_16;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !*eventUpVallInfo || !this )
LABEL_287:
    sub_1BCB254(this, eventUpVallInfo);
  v43 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (*eventUpVallInfo)->fields.svtId,
          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v144 = eventIdList;
  v47 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v47 >= 1 )
  {
    v134 = (ServantEntity_o *)v43;
    v130 = isOwner;
    v139 = 0;
    v133 = v43 == 0LL || isEquipOnly;
    v48 = v144;
    v49 = this;
    v50 = 0LL;
    while ( 1 )
    {
      if ( v50 >= (unsigned int)v47 )
LABEL_288:
        sub_1BCB25C(this, eventUpVallInfo, v44);
      v51 = *eventUpVallInfo;
      if ( !*eventUpVallInfo )
        goto LABEL_287;
      v52 = v48->m_Items[v50 + 1];
      v148 = v50;
      if ( v51->fields.equipSvtId < 1 )
      {
        v145 = 0;
      }
      else
      {
        this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_287;
        this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        if ( !*eventUpVallInfo )
          goto LABEL_287;
        if ( !this )
          goto LABEL_287;
        v53 = ServantLimitMaster__GetEntity(
                (ServantLimitMaster_o *)this,
                (*eventUpVallInfo)->fields.svtId,
                (*eventUpVallInfo)->fields.limitCount,
                0LL);
        this = (SkillLvEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*eventUpVallInfo )
          goto LABEL_287;
        if ( !v53 )
          goto LABEL_287;
        if ( !this )
          goto LABEL_287;
        this = (SkillLvEntity_o *)PartyOrganizationUtility__IsRarityRestriction(
                                    (PartyOrganizationUtility_o *)this,
                                    &skillName,
                                    &actMaxRarity,
                                    (*eventUpVallInfo)->fields.svtId,
                                    v53->fields.rarity,
                                    (*eventUpVallInfo)->fields.equipSvtId,
                                    v52,
                                    0LL);
        v145 = (char)this;
        v51 = *eventUpVallInfo;
        if ( !*eventUpVallInfo )
          goto LABEL_287;
      }
      this = (SkillLvEntity_o *)v51->fields.setupInfo;
      if ( !this )
        goto LABEL_287;
      this = (SkillLvEntity_o *)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                  (EventUpValSetupInfo_o *)this,
                                  v52,
                                  0LL);
      funcId = v10->fields.funcId;
      questPhaseIndividualityList = (System_Int32_array *)this;
      if ( !funcId )
        goto LABEL_287;
      v55 = 0LL;
      while ( 1 )
      {
        max_length = funcId->max_length;
        if ( (__int64)v55 >= (int)max_length )
          break;
        if ( v55 >= max_length )
          goto LABEL_288;
        if ( !Master_object )
          goto LABEL_287;
        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    funcId->m_Items[v55 + 1],
                                    (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_273;
        if ( isFuncGroup )
        {
          v57 = v10->fields.funcId;
          if ( !v57 )
            goto LABEL_287;
          if ( v55 >= v57->max_length )
            goto LABEL_288;
          if ( !v42 )
            goto LABEL_287;
          this = (SkillLvEntity_o *)FunctionGroupMaster__TryGetEntity(
                                      (FunctionGroupMaster_o *)v42,
                                      &v152,
                                      v57->m_Items[v55 + 1],
                                      v52,
                                      0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_273;
          this = (SkillLvEntity_o *)v152;
          if ( !v152 )
            goto LABEL_287;
          this = (SkillLvEntity_o *)FunctionGroupEntity__GetCheckEventQuest(v152, 0LL);
          if ( (_DWORD)this == 1 )
          {
            if ( !*eventUpVallInfo )
              goto LABEL_287;
            v58 = (*eventUpVallInfo)->fields.setupInfo;
            this = v147;
            if ( !v58 || !v147 )
              goto LABEL_287;
            this = (SkillLvEntity_o *)EventQuestMaster__IsEventNotIncluded(
                                        (EventQuestMaster_o *)v147,
                                        v52,
                                        v58->fields.questId,
                                        v58->fields.questPhase,
                                        12,
                                        nowTime,
                                        0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_273;
          }
        }
        if ( !v49 )
          goto LABEL_287;
        chargeTurn = (unsigned int)v49->fields.chargeTurn;
        if ( (__int64)v55 >= (int)chargeTurn )
          goto LABEL_273;
        if ( v55 >= chargeTurn )
          goto LABEL_288;
        v60 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&v49->fields.funcId + v55);
        if ( !v60 )
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
                                          v60,
                                          (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                          (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v52 != (_DWORD)this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v60,
                                            (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                            (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_273;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v60,
                                            v44);
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
              if ( !v134 )
                goto LABEL_273;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_41810624(
                                          v134,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          klass,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
LABEL_212:
              v104 = entity;
              Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                       v60,
                       (Il2CppObject *)StringLiteral_1113/*"0"*/,
                       (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v140 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_40890620(v140, v52, (FunctionEntity_o *)v104, Item, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v60,
                     (Il2CppObject *)StringLiteral_1164/*"1"*/,
                     (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v60,
                                            (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                            (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v67 = *eventUpVallInfo;
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
LABEL_214:
                v92 = v140;
                if ( !v140 )
                  goto LABEL_287;
                v97 = (int)this;
                v98 = v140;
                v99 = v67->fields.equipSvtId > 0;
LABEL_194:
                EventDropUpValInfo__SetAddCount(v98, v97, v99, v145 & 1, 0LL);
              }
              else
              {
LABEL_232:
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v60,
                                            (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                            (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v92 = v140;
                if ( (_DWORD)this == 2 )
                {
                  v112 = (Il2CppObject *)StringLiteral_1309/*"2"*/;
LABEL_234:
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v60,
                                              v112,
                                              (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v92 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetRateCount(
                    v92,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v145 & 1,
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
                                          v60,
                                          (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                          (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v60,
                                          (Il2CppObject *)StringLiteral_6170/*"EventId"*/,
                                          (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_6170/*"EventId"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v52 != (_DWORD)this )
                goto LABEL_273;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v60,
                                            v44);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_273;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (int)this < 1 )
                goto LABEL_117;
              if ( !v134 )
                goto LABEL_273;
              v69 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              limitCount = v69->fields.limitCount;
              dispLimitCount = v69->fields.dispLimitCount;
              v72 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v60,
                      (Il2CppObject *)StringLiteral_1309/*"2"*/,
                      (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              this = (SkillLvEntity_o *)ServantEntity__IsIndividuality(v134, limitCount, dispLimitCount, v72, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
LABEL_117:
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v73 = (*eventUpVallInfo)->fields.setupInfo;
              if ( !v73 )
                goto LABEL_287;
              if ( !entity )
                goto LABEL_287;
              this = (SkillLvEntity_o *)SkillLvEntity__GetEventIndividuality(
                                          v10,
                                          v55,
                                          v52,
                                          v73->fields.questId,
                                          (System_Int32_array *)entity[5].klass,
                                          (FunctionMaster_o *)Master_object,
                                          (FunctionGroupMaster_o *)v42,
                                          v68);
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v74 = this;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.setupInfo;
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)EventUpValSetupInfo__IsUpVal(
                                          (EventUpValSetupInfo_o *)this,
                                          questPhaseIndividualityList,
                                          (System_Int32_array *)v74,
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
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
              if ( !this )
                goto LABEL_287;
              this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          v10->fields.skillId,
                                          (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              v75 = (SkillEntity_o *)this;
              this = (SkillLvEntity_o *)v134;
              if ( !v134 )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v134,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              if ( !v75 )
                goto LABEL_287;
              v76 = this;
              ActIndividuality = SkillEntity__getActIndividuality(v75, (const MethodInfo *)eventUpVallInfo);
              if ( !Individuality_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
              this = (SkillLvEntity_o *)Individuality__CheckIndividualities(
                                          (System_Int32_array *)v76,
                                          ActIndividuality,
                                          0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)ServantEntity__checkIsHeroineSvt(v134, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_137;
              if ( !entity )
                goto LABEL_287;
              if ( HIDWORD(entity[1].monitor) )
                goto LABEL_137;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v126 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
              v127 = *(_QWORD *)&v134->fields.id.fields.currentCryptoKey;
              *(_QWORD *)&v156.fields.fakeValue = *(_QWORD *)&v134->fields.id.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                valuec = *(_QWORD *)&v134->fields.id.fields.fakeValue;
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v156.fields.fakeValue = valuec;
              }
              *(_QWORD *)&v156.fields.currentCryptoKey = v127;
              this = (SkillLvEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v156, 0LL);
              if ( !v126 )
                goto LABEL_287;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v126, (int32_t)this, 0LL);
              if ( HeroineData )
              {
                this = (SkillLvEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_273;
              }
LABEL_137:
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v60,
                     (Il2CppObject *)StringLiteral_13531/*"Target"*/,
                     (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v60,
                                            (Il2CppObject *)StringLiteral_13531/*"Target"*/,
                                            (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v78 = (int)this;
                if ( (_DWORD)this == 1 && !v130 )
                  goto LABEL_273;
              }
              else
              {
                v78 = 0;
              }
              if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                     v60,
                     (Il2CppObject *)StringLiteral_9921/*"OnlyMaxFuncGroupId"*/,
                     (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
              {
                valueb = System_Collections_Generic_Dictionary_object__int___get_Item(
                           v60,
                           (Il2CppObject *)StringLiteral_9921/*"OnlyMaxFuncGroupId"*/,
                           (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              }
              else
              {
                valueb = 0;
              }
              v118 = entity;
              v142 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_40890620(v142, v52, (FunctionEntity_o *)v118, v78, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v60,
                     (Il2CppObject *)StringLiteral_1113/*"0"*/,
                     (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v60,
                                            (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                            (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                v119 = v142;
                if ( !v142 )
                  goto LABEL_287;
                EventDropUpValInfo__SetAddCount(
                  v142,
                  (int32_t)this,
                  (*eventUpVallInfo)->fields.equipSvtId > 0,
                  v145 & 1,
                  0LL);
              }
              else
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v60,
                                            (Il2CppObject *)StringLiteral_1113/*"0"*/,
                                            (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( (_DWORD)this == 2 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v60,
                                              (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                              (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo )
                    goto LABEL_287;
                  v119 = v142;
                  if ( !v142 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetRateCount(
                    v142,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v145 & 1,
                    0LL);
                }
                else
                {
                  v119 = v142;
                  if ( !v142 )
                    goto LABEL_287;
                }
              }
              v119->fields.groupId = valueb;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
              if ( !this )
                goto LABEL_287;
              v122 = *(_QWORD *)&this->fields.skillId;
              v123 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
              ++this->fields.priority;
              if ( !v122 )
                goto LABEL_287;
              v124 = this->fields.chargeTurn;
              if ( (unsigned int)v124 >= *(_DWORD *)(v122 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v119,
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
              }
              else
              {
                v125 = v122 + 8 * v124;
                this->fields.chargeTurn = v124 + 1;
                *(_QWORD *)(v125 + 32) = v119;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v125 + 32), (int32_t)v119, v120, v121);
              }
              v139 = 1;
              goto LABEL_273;
            case 113:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                          (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v52 != (_DWORD)this )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1113/*"0"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( (_DWORD)this )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v60,
                                            (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                            (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !(_DWORD)this )
                  goto LABEL_273;
              }
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v60,
                                            v44);
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
              v139 |= (unsigned __int8)this;
              if ( !v134 || ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              this = (SkillLvEntity_o *)ServantEntity__getIndividuality(
                                          v134,
                                          (*eventUpVallInfo)->fields.limitCount,
                                          (*eventUpVallInfo)->fields.dispLimitCount,
                                          0LL);
              actMaxRarity = 0;
              if ( !this )
                goto LABEL_287;
              v79 = this->fields.chargeTurn;
              if ( v79 < 1 )
                goto LABEL_250;
              v80 = 0;
              valuea = this;
              while ( v80 < (unsigned int)v79 )
              {
                v81 = *((_DWORD *)&this->fields.funcId + v80);
                v82 = entity;
                v83 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
                EventDropUpValInfo___ctor_40890620(v83, v52, (FunctionEntity_o *)v82, v81, 0LL);
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       v60,
                       (Il2CppObject *)StringLiteral_1113/*"0"*/,
                       (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v60,
                                              (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                              (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( !*eventUpVallInfo || !v83 )
                    goto LABEL_287;
                  EventDropUpValInfo__SetAddCount(
                    v83,
                    (int32_t)this,
                    (*eventUpVallInfo)->fields.equipSvtId > 0,
                    v145 & 1,
                    0LL);
                }
                else
                {
                  this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                              v60,
                                              (Il2CppObject *)StringLiteral_1113/*"0"*/,
                                              (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                  if ( (_DWORD)this == 2 )
                  {
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v60,
                                                (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                                (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v83 )
                      goto LABEL_287;
                    EventDropUpValInfo__SetRateCount(
                      v83,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v145 & 1,
                      0LL);
                  }
                }
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                this = (SkillLvEntity_o *)(*eventUpVallInfo)->fields.dropList;
                if ( !this )
                  goto LABEL_287;
                v86 = *(_QWORD *)&this->fields.skillId;
                v87 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                ++this->fields.priority;
                if ( !v86 )
                  goto LABEL_287;
                v88 = this->fields.chargeTurn;
                if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v83,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                }
                else
                {
                  v89 = v86 + 8 * v88;
                  this->fields.chargeTurn = v88 + 1;
                  *(_QWORD *)(v89 + 32) = v83;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v89 + 32), (int32_t)v83, v84, v85);
                }
                this = valuea;
                v139 = 1;
                v80 = actMaxRarity + 1;
                actMaxRarity = v80;
                v79 = valuea->fields.chargeTurn;
                if ( v80 >= v79 )
                  goto LABEL_273;
              }
              goto LABEL_288;
            case 116:
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                          (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              if ( isSupport )
              {
                this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                            this,
                                            (System_Collections_Generic_Dictionary_string__int__o *)v60,
                                            v44);
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
              v90 = entity;
              v91 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      v60,
                      (Il2CppObject *)StringLiteral_1113/*"0"*/,
                      (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v92 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor_40890620(v92, v52, (FunctionEntity_o *)v90, v91, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v92 )
                goto LABEL_287;
              v93 = (int)this;
              v94 = v92;
              v95 = (*eventUpVallInfo)->fields.equipSvtId > 0;
              goto LABEL_204;
            case 129:
              if ( isSupport )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                          (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v52 != (_DWORD)this )
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
              v96 = entity;
              v141 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v141, v52, (FunctionEntity_o *)v96, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v60,
                     (Il2CppObject *)StringLiteral_1113/*"0"*/,
                     (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                            v60,
                                            (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                            (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                if ( !*eventUpVallInfo )
                  goto LABEL_287;
                v92 = v141;
                if ( !v141 )
                  goto LABEL_287;
                v97 = (int)this;
                v98 = v141;
                v99 = (*eventUpVallInfo)->fields.equipSvtId > 0;
                goto LABEL_194;
              }
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1113/*"0"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v92 = v141;
              if ( (_DWORD)this != 2 )
                goto LABEL_244;
              v112 = (Il2CppObject *)StringLiteral_1164/*"1"*/;
              goto LABEL_234;
            default:
              if ( monitor != 132 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                          (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_273;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( v52 != (_DWORD)this )
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
              v66 = entity;
              v140 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v140, v52, (FunctionEntity_o *)v66, 0LL);
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v60,
                     (Il2CppObject *)StringLiteral_1164/*"1"*/,
                     (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 1 )
                goto LABEL_232;
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1309/*"2"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v67 = *eventUpVallInfo;
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
                                      v60,
                                      (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                      (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !isSupport
              || (this = (SkillLvEntity_o *)SkillLvEntity__IsSupportExcluded(
                                              this,
                                              (System_Collections_Generic_Dictionary_string__int__o *)v60,
                                              v44),
                  ((unsigned __int8)this & 1) == 0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (SkillLvEntity_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
              v63 = v10->fields.funcId;
              if ( !v63 )
                goto LABEL_287;
              if ( v55 >= v63->max_length )
                goto LABEL_288;
              if ( !this )
                goto LABEL_287;
              EnableEntity = EventPointBuffMaster__GetEnableEntity(
                               (EventPointBuffMaster_o *)this,
                               v52,
                               v63->m_Items[v55 + 1],
                               0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                  if ( v133 )
                    goto LABEL_95;
                  if ( !*eventUpVallInfo || !entity )
                    goto LABEL_287;
                  this = (SkillLvEntity_o *)ServantEntity__IsIndividuality_41810624(
                                              v134,
                                              (*eventUpVallInfo)->fields.limitCount,
                                              (*eventUpVallInfo)->fields.dispLimitCount,
                                              (System_Int32_array *)entity[2].monitor,
                                              0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_95:
                    value = EnableEntity;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v60,
                           (Il2CppObject *)StringLiteral_9921/*"OnlyMaxFuncGroupId"*/,
                           (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      v65 = System_Collections_Generic_Dictionary_object__int___get_Item(
                              v60,
                              (Il2CppObject *)StringLiteral_9921/*"OnlyMaxFuncGroupId"*/,
                              (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    }
                    else
                    {
                      v65 = 0;
                    }
                    this = (SkillLvEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_287;
                    v132 = v52;
                    this = (SkillLvEntity_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BuffMaster___);
                    if ( !entity )
                      goto LABEL_287;
                    v106 = entity[2].klass;
                    if ( !v106 )
                      goto LABEL_287;
                    namespaze = v106->_1.namespaze;
                    v131 = v65;
                    if ( (int)namespaze < 1 )
                    {
                      v111 = 0;
                    }
                    else
                    {
                      v108 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
                      v109 = 0LL;
                      while ( 1 )
                      {
                        if ( v109 >= (unsigned int)namespaze )
                          goto LABEL_288;
                        if ( !v108 )
                          goto LABEL_287;
                        this = (SkillLvEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                    v108,
                                                    *((_DWORD *)&v106->_1.byval_arg.data + v109),
                                                    (const MethodInfo_32C7E00 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                        if ( !this )
                          goto LABEL_287;
                        lv = this->fields.lv;
                        if ( !BuffList_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
                        this = (SkillLvEntity_o *)BuffList__isSpHit(lv, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                        LODWORD(namespaze) = v106->_1.namespaze;
                        if ( (__int64)++v109 >= (int)namespaze )
                        {
                          v111 = 0;
                          goto LABEL_238;
                        }
                      }
                      v111 = 1;
                    }
LABEL_238:
                    v52 = v132;
                    if ( ((unsigned __int8)v111 & (value != 0LL)) != 0 )
                    {
                      this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                  v60,
                                                  (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                                  (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( !value )
                        goto LABEL_287;
                      System_Collections_Generic_Dictionary_object__int___set_Item(
                        v60,
                        (Il2CppObject *)StringLiteral_1370/*"3"*/,
                        value->fields.value + (_DWORD)this,
                        (const MethodInfo_337CDC4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
                    }
                    v113 = entity;
                    v92 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
                    EventDropUpValInfo___ctor(v92, v132, (FunctionEntity_o *)v113, 0LL);
                    this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                v60,
                                                (Il2CppObject *)StringLiteral_1370/*"3"*/,
                                                (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                    if ( !*eventUpVallInfo || !v92 )
                      goto LABEL_287;
                    EventDropUpValInfo__SetRateCount(
                      v92,
                      (int32_t)this,
                      (*eventUpVallInfo)->fields.equipSvtId > 0,
                      v145 & 1,
                      0LL);
                    v92->fields.groupId = v131;
LABEL_244:
                    v103 = *eventUpVallInfo;
                    if ( !*eventUpVallInfo )
                      goto LABEL_287;
LABEL_245:
                    this = (SkillLvEntity_o *)v103->fields.dropList;
                    if ( !this )
                      goto LABEL_287;
                    v114 = *(_QWORD *)&this->fields.skillId;
                    v115 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
                    ++this->fields.priority;
                    if ( !v114 )
                      goto LABEL_287;
                    v116 = this->fields.chargeTurn;
                    if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)this,
                        (Il2CppObject *)v92,
                        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v117 = v114 + 8 * v116;
                      this->fields.chargeTurn = v116 + 1;
                      *(_QWORD *)(v117 + 32) = v92;
                      sub_1BCAF9C((CGThumbnailListItem_o *)(v117 + 32), (int32_t)v92, v100, v101);
                    }
LABEL_250:
                    v139 = 1;
                    goto LABEL_273;
                  }
                }
              }
            }
          }
          goto LABEL_273;
        }
        this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                    v60,
                                    (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                    (const MethodInfo_337CFCC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                      v60,
                                      (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                      (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
              v102 = entity;
              v92 = (EventDropUpValInfo_o *)sub_1BCB244(EventDropUpValInfo_TypeInfo);
              EventDropUpValInfo___ctor(v92, v52, (FunctionEntity_o *)v102, 0LL);
              this = (SkillLvEntity_o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                          v60,
                                          (Il2CppObject *)StringLiteral_1164/*"1"*/,
                                          (const MethodInfo_337CD58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              if ( !*eventUpVallInfo || !v92 )
                goto LABEL_287;
              v93 = (int)this;
              v94 = v92;
              v95 = (*eventUpVallInfo)->fields.equipSvtId > 0;
LABEL_204:
              EventDropUpValInfo__SetRateCount(v94, v93, v95, v145 & 1, 0LL);
              v103 = *eventUpVallInfo;
              if ( !*eventUpVallInfo )
                goto LABEL_287;
              goto LABEL_245;
            }
          }
        }
LABEL_273:
        funcId = v10->fields.funcId;
        ++v55;
        if ( !funcId )
          goto LABEL_287;
      }
      v48 = v144;
      LODWORD(v47) = v144->max_length;
      v50 = v148 + 1;
      if ( (__int64)(v148 + 1) >= (int)v47 )
        return v139 & 1;
    }
  }
LABEL_285:
  v139 = 0;
  return v139 & 1;
}


System_String_o *__fastcall SkillLvEntity__getFuncDetail(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Int32_array *funcId; // x8
  Il2CppObject *Instance; // x0
  __int64 v8; // x2
  struct System_Int32_array *v9; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned __int64 v11; // x21
  unsigned __int64 max_length; // x9
  LocalizationManager_c *v13; // x0
  System_String_o **p_monitor; // x8

  if ( (byte_4B1D089 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1D089 = 1;
  }
  funcId = this->fields.funcId;
  if ( funcId && *(_QWORD *)&funcId->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_FunctionMaster___),
          (v9 = this->fields.funcId) == 0LL) )
    {
LABEL_13:
      sub_1BCB254(Instance, method);
    }
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0LL;
    while ( 1 )
    {
      max_length = v9->max_length;
      if ( (__int64)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        sub_1BCB25C(Instance, method, v8);
      if ( !v10 )
        goto LABEL_13;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   v9->m_Items[v11 + 1],
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        p_monitor = (System_String_o **)&Instance[3].monitor;
        return *p_monitor;
      }
      v9 = this->fields.funcId;
      ++v11;
      if ( !v9 )
        goto LABEL_13;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B1794E )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    byte_4B1794E = 1;
  }
  v13 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager_TypeInfo;
  }
  p_monitor = &v13->static_fields->unknownNameText;
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

  if ( (byte_4B1D095 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BCAFF8(&long_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_18507/*"down"*/, v5);
    byte_4B1D095 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18507/*"down"*/,
           (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_18507/*"down"*/,
                                                                                (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCB254(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1BCB514(Item);
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

  if ( (byte_4B1D094 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BCAFF8(&long_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_24216/*"up"*/, v5);
    byte_4B1D094 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_24216/*"up"*/,
           (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_24216/*"up"*/,
                                                                                (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BCB254(Item, v7);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
      }
      else
      {
        sub_1BCB514(Item);
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

  if ( (byte_4B1D08F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BCAFF8(&string_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_10595/*"PlayVoiceNo"*/, v5);
    byte_4B1D08F = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_10595/*"PlayVoiceNo"*/,
            (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1BCB254(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_10595/*"PlayVoiceNo"*/,
                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1BCB514(result);
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
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_string__int__array *v14; // x20
  il2cpp_array_size_t v15; // w25
  struct System_String_array *v16; // x8
  int v17; // w29
  __int64 v18; // x22
  System_Collections_Generic_Dictionary_object__int__o *v19; // x24
  const MethodInfo *v20; // x3
  Il2CppClass **v21; // x23
  CGThumbnailListItem_o *v22; // x23
  int32_t v23; // w8
  System_String_o *v24; // x24
  CGThumbnailListItem_c *v25; // x24
  int32_t v26; // w2
  const MethodInfo_337CDC4 *v27; // x3
  Il2CppObject *v28; // x1
  __int64 v29; // x24
  __int64 v31; // x0
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1D084 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__int____TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v4);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_15670/*"["*/, v6);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v7);
    sub_1BCAFF8(&StringLiteral_15923/*"]"*/, v8);
    byte_4B1D084 = 1;
  }
  *(_QWORD *)result = 0LL;
  svals = this->fields.svals;
  if ( !svals )
    return (System_Collections_Generic_Dictionary_string__int__array *)sub_1BCB0A0(
                                                                         System_Collections_Generic_Dictionary_string__int____TypeInfo,
                                                                         1LL);
  max_length = svals->max_length;
  klass = sub_1BCB0A0(System_Collections_Generic_Dictionary_string__int____TypeInfo, (unsigned int)max_length);
  v14 = (System_Collections_Generic_Dictionary_string__int__array *)klass;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = this->fields.svals;
      if ( !v16 )
        goto LABEL_37;
      if ( v15 >= v16->max_length )
        goto LABEL_38;
      klass = (__int64)v16->m_Items[v15];
      if ( !klass
        || (klass = (__int64)System_String__Replace_62496972(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15670/*"["*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Replace_62496972(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_15923/*"]"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL)) == 0
        || (klass = (__int64)System_String__Split((System_String_o *)klass, 0x2Cu, 0, 0LL)) == 0
        || (v17 = *(_DWORD *)(klass + 24),
            v18 = klass,
            v19 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__int__TypeInfo),
            System_Collections_Generic_Dictionary_object__int____ctor(
              v19,
              (const MethodInfo_337C424 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__),
            !v14) )
      {
LABEL_37:
        sub_1BCB254(klass, v12);
      }
      if ( v19 )
      {
        klass = sub_1BCB134(v19, v14->obj.klass->_1.element_class);
        if ( !klass )
        {
          v31 = sub_1BCB278(0LL);
          sub_1BCB120(v31, 0LL);
        }
      }
      if ( v15 >= v14->max_length )
LABEL_38:
        sub_1BCB25C(klass, v12, v13);
      v21 = &v14->obj.klass + (int)v15;
      v21[4] = (Il2CppClass *)v19;
      v22 = (CGThumbnailListItem_o *)(v21 + 4);
      sub_1BCAF9C(v22, (int32_t)v19, v13, v20);
      result[1] = 0;
      if ( v17 >= 1 )
        break;
LABEL_33:
      if ( ++v15 == max_length )
        return v14;
    }
    v23 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v23 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_38;
      v24 = *(System_String_o **)(v18 + 8LL * v23 + 32);
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
          if ( v15 >= v14->max_length || !*(_DWORD *)(v29 + 24) )
            goto LABEL_38;
          klass = (__int64)v22->klass;
          if ( !v22->klass )
            goto LABEL_37;
          v26 = result[0];
          v28 = *(Il2CppObject **)(v29 + 32);
          v27 = (const MethodInfo_337CDC4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
LABEL_23:
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)klass,
            v28,
            v26,
            v27);
        }
      }
      v23 = ++result[1];
      if ( result[1] >= v17 )
        goto LABEL_33;
    }
    if ( v15 >= v14->max_length )
      goto LABEL_38;
    v25 = v22->klass;
    klass = (__int64)System_Int32__ToString((int32_t)&result[1], 0LL);
    if ( !v25 )
      goto LABEL_37;
    v26 = result[0];
    v27 = (const MethodInfo_337CDC4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__;
    v28 = (Il2CppObject *)klass;
    klass = (__int64)v25;
    goto LABEL_23;
  }
  return v14;
}


System_String_o *__fastcall SkillLvEntity__getVoiceAssetName(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B1D08E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BCAFF8(&string_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_15239/*"VoiceAssetName"*/, v5);
    byte_4B1D08E = 1;
  }
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_15239/*"VoiceAssetName"*/,
            (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      return 0LL;
    script = this->fields.script;
    if ( !script )
      sub_1BCB254(0LL, v7);
    result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                                  (Il2CppObject *)StringLiteral_15239/*"VoiceAssetName"*/,
                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( result && result->klass != string_TypeInfo )
    {
      sub_1BCB514(result);
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

  if ( (byte_4B1D092 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BCAFF8(&long_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_15241/*"VoiceVolume"*/, v5);
    byte_4B1D092 = 1;
  }
  script = this->fields.script;
  v7 = 1.0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_15241/*"VoiceVolume"*/,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v7;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_15241/*"VoiceVolume"*/,
                                                                            (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCB254(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (float)*(__int64 *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11) / 1000.0;
  sub_1BCB514(Item);
  SkillLvEntity__getMovePositionUp(v13, v14);
  return result;
}


bool __fastcall SkillLvEntity__isPlayVoiceWait(SkillLvEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B1D090 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BCAFF8(&StringLiteral_10596/*"PlayVoiceWait"*/, v3);
    byte_4B1D090 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_10596/*"PlayVoiceWait"*/,
                       (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4B1D0B1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, obj);
    sub_1BCAFF8(&long_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_16578/*"afterClearBgmId"*/, v6);
    sub_1BCAFF8(&StringLiteral_20592/*"indv"*/, v7);
    sub_1BCAFF8(&StringLiteral_16987/*"beforeClearBgmId"*/, v8);
    sub_1BCAFF8(&StringLiteral_22658/*"questPhase"*/, v9);
    sub_1BCAFF8(&StringLiteral_22654/*"questId"*/, v10);
    byte_4B1D0B1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !obj )
    goto LABEL_15;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_20592/*"indv"*/,
           (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.svtIndv = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22654/*"questId"*/,
           (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_22658/*"questPhase"*/,
           (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.questPhase = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v17, v18);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16987/*"beforeClearBgmId"*/,
           (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_15;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_16;
  this->fields.beforeClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v19, v20);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)obj,
           (Il2CppObject *)StringLiteral_16578/*"afterClearBgmId"*/,
           (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_15:
    sub_1BCB254(Item, v12);
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    this->fields.afterClearBgmId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v21, v22);
    return;
  }
LABEL_16:
  sub_1BCB514(Item);
  SkillLvEntity__GetScriptIntParam(v23, v24, v25, v26);
}


void __fastcall SkillLvEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1D0B2 & 1) == 0 )
  {
    sub_1BCAFF8(&SkillLvEntity___c_TypeInfo, v1);
    byte_4B1D0B2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(SkillLvEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillLvEntity___c_TypeInfo->static_fields->__9 = (struct SkillLvEntity___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)SkillLvEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SkillLvEntity___c___ctor(SkillLvEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SkillLvEntity___c___GetEventIndividuality_b__61_0(
        SkillLvEntity___c_o *this,
        QuestGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCB254(this, 0LL);
  return entity->fields.questId;
}


System_Nullable_int__o __fastcall SkillLvEntity___c___GetFuncIndexForSplitFuncSequence_b__44_0(
        SkillLvEntity___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int v3; // w19
  System_Nullable_int__o v5; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v6; // 0:x0.8

  v3 = x;
  if ( (byte_4B1D0B3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_int___ctor__, x);
    byte_4B1D0B3 = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, v3 - 1, (const MethodInfo_37D8E28 *)Method_System_Nullable_int___ctor__);
  return v5;
}