void BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5FF6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData_____ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TypeInfo);
    byte_4CB5FF6 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData_____ctor__);
  this->fields.condBuffValueDataDict = (struct System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.condBuffValueDataDict, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    60,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
}


void BuffMaster__AddEffectIdToList(
        BuffMaster_o *this,
        System_Collections_Generic_List_int__o *effectIdList,
        int32_t effectId,
        const MethodInfo *method)
{
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4CB5FF8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    this = (BuffMaster_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4CB5FF8 = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !effectIdList )
      goto LABEL_11;
    this = (BuffMaster_o *)System_Collections_Generic_List_int___Contains(
                             effectIdList,
                             effectId,
                             (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    items = effectIdList->fields._items;
    v7 = Method_System_Collections_Generic_List_int__Add__;
    ++effectIdList->fields._version;
    if ( !items )
LABEL_11:
      sub_1C6BC60(this, effectIdList);
    size = effectIdList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        effectIdList,
        effectId,
        *(const MethodInfo_37E3950 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    }
    else
    {
      effectIdList->fields._size = size + 1;
      items->m_Items[size] = effectId;
    }
  }
}


int32_t BuffMaster__GetBuffGroup(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB5FFB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4CB5FFB = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1C6BC60(v7, v8);
    return *(_DWORD *)((char *)&qword_48 + (_QWORD)entity);
  }
  return def;
}


int32_t BuffMaster__GetBuffType(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB5FFA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4CB5FFA = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1C6BC60(v7, v8);
    return *(int *)((char *)&dword_14 + (_QWORD)entity);
  }
  return def;
}


System_String_o *BuffMaster__GetScriptStr(
        BuffMaster_o *this,
        int32_t buffId,
        System_String_o *key,
        System_String_o *def,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB5FF9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4CB5FF9 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C6BC60(0, v9);
    return BuffEntity__getScript_42070256((BuffEntity_o *)entity, key, def, v10);
  }
  return def;
}


int32_t BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB5FFD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4CB5FFD = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          buffId,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1C6BC60(0, v5);
  return BuffEntity__GetUnSubStateWhenContinueStatus((BuffEntity_o *)entity, v5);
}


bool BuffMaster__IsUnSubStateWhenAliveContinue(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  return ((unsigned int)BuffMaster__GetUnSubWhenContinueStatus(this, buffId, method) >> 1) & 1;
}


bool BuffMaster__IsUnSubStateWhenDeadContinue(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  return BuffMaster__GetUnSubWhenContinueStatus(this, buffId, method) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool BuffMaster__TryGetCondBuffValueDataArray(
        BuffMaster_o *this,
        int32_t buffId,
        BuffEntity_CondBuffValueData_array **dataArray,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *condBuffValueDataDict; // x0
  BuffEntity_CondBuffValueData_array *CondBuffValueArray; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB5FFE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TryAdd__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TryGetValue__);
    byte_4CB5FFE = 1;
  }
  entity = 0;
  condBuffValueDataDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.condBuffValueDataDict;
  if ( !condBuffValueDataDict )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          condBuffValueDataDict,
          buffId,
          (Il2CppObject **)dataArray,
          (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TryGetValue__) )
  {
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            buffId,
            (const MethodInfo_33F9128 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
      return 0;
    condBuffValueDataDict = (System_Collections_Generic_Dictionary_int__object__o *)entity;
    if ( entity )
    {
      CondBuffValueArray = BuffEntity__GetCondBuffValueArray((BuffEntity_o *)entity, *(const MethodInfo **)&buffId);
      *dataArray = CondBuffValueArray;
      sub_1C6B9AC((CGThumbnailListItem_o *)dataArray, (int32_t)CondBuffValueArray, v9, v10);
      if ( entity )
      {
        condBuffValueDataDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.condBuffValueDataDict;
        if ( condBuffValueDataDict )
        {
          System_Collections_Generic_Dictionary_int__object___TryAdd(
            condBuffValueDataDict,
            (int32_t)entity[1].klass,
            &(*dataArray)->obj,
            (const MethodInfo_3453CF4 *)Method_System_Collections_Generic_Dictionary_int__BuffEntity_CondBuffValueData____TryAdd__);
          return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*dataArray, 0);
        }
      }
    }
LABEL_13:
    sub_1C6BC60(condBuffValueDataDict, *(_QWORD *)&buffId);
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*dataArray, 0);
}


bool BuffMaster__TryGetDisplayCardBottomImageName(
        BuffMaster_o *this,
        System_String_o **name,
        int32_t buffId,
        System_String_o *defName,
        const MethodInfo *method)
{
  _BOOL8 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Value_object; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB5FFC & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_GetValue_string___);
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C6BA08(&StringLiteral_5284/*"DisplayCardBottomImageName"*/);
    byte_4CB5FFC = 1;
  }
  entity = 0;
  v9 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_object = 0;
  if ( v9 )
  {
    if ( !entity )
      sub_1C6BC60(v9, 0);
    Value_object = BasicHelper__GetValue_object_(
                     *(System_Collections_Generic_Dictionary_string__object__o **)((char *)&qword_60 + (_QWORD)entity),
                     (System_String_o *)StringLiteral_5284/*"DisplayCardBottomImageName"*/,
                     (Il2CppObject *)defName,
                     (const MethodInfo_3128A04 *)Method_BasicHelper_GetValue_string___);
  }
  *name = (System_String_o *)Value_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)name, (int32_t)Value_object, v10, v11);
  return !System_String__IsNullOrEmpty(*name, 0);
}


System_Int32_array *BuffMaster__get_StateEffectIdArray(BuffMaster_o *this, const MethodInfo *method)
{
  return this->fields._StateEffectIdArray_k__BackingField;
}


bool BuffMaster__preProcess(BuffMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x21
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  BuffEntity_o *v18; // x22
  unsigned __int64 effectId; // x1
  _BOOL8 v20; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  const MethodInfo *v24; // x1
  __int64 CardEffectId; // x0
  __int64 v26; // x0
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  BuffMaster_o *v30; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  BuffMaster_o *v33; // x0
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  struct System_Int32_array *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3

  if ( (byte_4CB5FF7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_BuffEntity__GetEnumerator__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB5FF7 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_BuffEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BuffEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v18 = (BuffEntity_o *)v16;
    if ( !v16 )
      sub_1C6BC60(0, v17);
    effectId = *(unsigned int *)(v16 + 104);
    if ( (int)effectId >= 1 )
    {
      if ( !v3 )
        sub_1C6BC60(v16, effectId);
      v20 = System_Collections_Generic_List_int___Contains(
              v3,
              effectId,
              (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v20 )
      {
        effectId = (unsigned int)v18->fields.effectId;
        items = v3->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C6BC60(v20, effectId);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            effectId,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = effectId;
        }
      }
    }
    if ( BuffEntity__GetCardEffectId(v18, (const MethodInfo *)effectId) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v18, v24);
      if ( !v3 )
        sub_1C6BC60(CardEffectId, (unsigned int)CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v3,
              CardEffectId,
              (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v26 = BuffEntity__GetCardEffectId(v18, v24);
        v24 = (const MethodInfo *)(unsigned int)v26;
        v27 = v3->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !v27 )
          sub_1C6BC60(v26, (unsigned int)v26);
        v29 = v3->fields._size;
        if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v26,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = v29 + 1;
          v27->m_Items[v29] = v26;
        }
      }
    }
    v30 = (BuffMaster_o *)BuffEntity__GetClassIconChangeEffectId(v18, v24);
    BuffMaster__AddEffectIdToList(v30, v3, (int32_t)v30, v31);
    v33 = (BuffMaster_o *)BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(v18, -1, v32);
    BuffMaster__AddEffectIdToList(v33, v3, (int32_t)v33, v34);
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_38;
    }
    v38 = (__int64)&v35->vtable[*v37];
  }
  else
  {
LABEL_38:
    v38 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                                                             Enumerator,
                                                             *(_QWORD *)(v38 + 8));
  if ( !v3 )
LABEL_47:
    sub_1C6BC60(list, v4);
  v39 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._StateEffectIdArray_k__BackingField, (int32_t)v39, v40, v41);
  return 1;
}


void BuffMaster__set_StateEffectIdArray(BuffMaster_o *this, System_Int32_array *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._StateEffectIdArray_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}