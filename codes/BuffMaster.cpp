void BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C376F5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
    byte_4C376F5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    60,
    (const MethodInfo_3394514 *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
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

  if ( (byte_4C376F7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    this = (BuffMaster_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C376F7 = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !effectIdList )
      goto LABEL_11;
    this = (BuffMaster_o *)System_Collections_Generic_List_int___Contains(
                             effectIdList,
                             effectId,
                             (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    items = effectIdList->fields._items;
    v7 = Method_System_Collections_Generic_List_int__Add__;
    ++effectIdList->fields._version;
    if ( !items )
LABEL_11:
      sub_1C32E7C(this);
    size = effectIdList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        effectIdList,
        effectId,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C376FA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4C376FA = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1C32E7C(v7);
    return *(_DWORD *)((char *)&qword_48 + (_QWORD)entity);
  }
  return def;
}


int32_t BuffMaster__GetBuffType(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C376F9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4C376F9 = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1C32E7C(v7);
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
  const MethodInfo *v9; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C376F8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4C376F8 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C32E7C(0);
    return BuffEntity__getScript_41734476((BuffEntity_o *)entity, key, def, v9);
  }
  return def;
}


int32_t BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C376FC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    byte_4C376FC = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          buffId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1C32E7C(0);
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

  if ( (byte_4C376FB & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_string___);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1C32C20(&StringLiteral_5295/*"DisplayCardBottomImageName"*/);
    byte_4C376FB = 1;
  }
  entity = 0;
  v9 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_object = 0;
  if ( v9 )
  {
    if ( !entity )
      sub_1C32E7C(v9);
    Value_object = BasicHelper__GetValue_object_(
                     *(System_Collections_Generic_Dictionary_string__object__o **)((char *)&qword_60 + (_QWORD)entity),
                     (System_String_o *)StringLiteral_5295/*"DisplayCardBottomImageName"*/,
                     (Il2CppObject *)defName,
                     (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_string___);
  }
  *name = (System_String_o *)Value_object;
  sub_1C32BC4((CGThumbnailListItem_o *)name, (int32_t)Value_object, v10, v11);
  return !System_String__IsNullOrEmpty(*name, 0);
}


System_Int32_array *BuffMaster__get_StateEffectIdArray(BuffMaster_o *this, const MethodInfo *method)
{
  return this->fields._StateEffectIdArray_k__BackingField;
}


bool BuffMaster__preProcess(BuffMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  BuffEntity_o *v15; // x22
  unsigned __int64 effectId; // x1
  _BOOL8 v17; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  const MethodInfo *v21; // x1
  __int64 CardEffectId; // x0
  __int64 v23; // x0
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  BuffMaster_o *v27; // x0
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  BuffMaster_o *v30; // x0
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  struct System_Int32_array *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4C376F6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_BuffEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C376F6 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_BuffEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BuffEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_16:
      v13 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    v15 = (BuffEntity_o *)v14;
    if ( !v14 )
      sub_1C32E7C(0);
    effectId = *(unsigned int *)(v14 + 104);
    if ( (int)effectId >= 1 )
    {
      if ( !v3 )
        sub_1C32E7C(v14);
      v17 = System_Collections_Generic_List_int___Contains(
              v3,
              effectId,
              (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v17 )
      {
        effectId = (unsigned int)v15->fields.effectId;
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C32E7C(v17);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            effectId,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = effectId;
        }
      }
    }
    if ( BuffEntity__GetCardEffectId(v15, (const MethodInfo *)effectId) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v15, v21);
      if ( !v3 )
        sub_1C32E7C(CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v3,
              CardEffectId,
              (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v23 = BuffEntity__GetCardEffectId(v15, v21);
        v21 = (const MethodInfo *)(unsigned int)v23;
        v24 = v3->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !v24 )
          sub_1C32E7C(v23);
        v26 = v3->fields._size;
        if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v23,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = v26 + 1;
          v24->m_Items[v26] = v23;
        }
      }
    }
    v27 = (BuffMaster_o *)BuffEntity__GetClassIconChangeEffectId(v15, v21);
    BuffMaster__AddEffectIdToList(v27, v3, (int32_t)v27, v28);
    v30 = (BuffMaster_o *)BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(v15, -1, v29);
    BuffMaster__AddEffectIdToList(v30, v3, (int32_t)v30, v31);
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_38;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_38:
    v35 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                             Enumerator,
                                                             *(_QWORD *)(v35 + 8));
  if ( !v3 )
LABEL_47:
    sub_1C32E7C(list);
  v36 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v36;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._StateEffectIdArray_k__BackingField, (int32_t)v36, v37, v38);
  return 1;
}


void BuffMaster__set_StateEffectIdArray(BuffMaster_o *this, System_Int32_array *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._StateEffectIdArray_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}