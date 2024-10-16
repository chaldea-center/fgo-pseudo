void __fastcall BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5AB1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__, method);
    byte_4AB5AB1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    56,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
}


void __fastcall BuffMaster__AddEffectIdToList(
        BuffMaster_o *this,
        System_Collections_Generic_List_int__o *effectIdList,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10

  if ( (byte_4AB5AB3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, effectIdList);
    this = (BuffMaster_o *)sub_1BAB41C(&Method_System_Collections_Generic_List_int__Contains__, v6);
    byte_4AB5AB3 = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !effectIdList )
      goto LABEL_11;
    this = (BuffMaster_o *)System_Collections_Generic_List_int___Contains(
                             effectIdList,
                             effectId,
                             (const MethodInfo_3530C10 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    items = effectIdList->fields._items;
    v8 = Method_System_Collections_Generic_List_int__Add__;
    ++effectIdList->fields._version;
    if ( !items )
LABEL_11:
      sub_1BAB678(this, effectIdList);
    size = effectIdList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        effectIdList,
        effectId,
        *(const MethodInfo_3530898 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    }
    else
    {
      effectIdList->fields._size = size + 1;
      items->m_Items[size + 1] = effectId;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffMaster__GetBuffGroup(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB5AB6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4AB5AB6 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_3163DE4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1BAB678(v7, v8);
    return (int32_t)entity[4].monitor;
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffMaster__GetBuffType(BuffMaster_o *this, int32_t buffId, int32_t def, const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB5AB5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4AB5AB5 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_3163DE4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1BAB678(v7, v8);
    return HIDWORD(entity[1].klass);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BuffMaster__GetScriptStr(
        BuffMaster_o *this,
        int32_t buffId,
        System_String_o *key,
        System_String_o *def,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB5AB4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4AB5AB4 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_3163DE4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1BAB678(0LL, v9);
    return BuffEntity__getScript_39382852((BuffEntity_o *)entity, key, def, v10);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB5AB8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4AB5AB8 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          buffId,
          (const MethodInfo_3163DE4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1BAB678(0LL, v5);
  return BuffEntity__GetUnSubStateWhenContinueStatus((BuffEntity_o *)entity, v5);
}


bool __fastcall BuffMaster__IsUnSubStateWhenAliveContinue(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  return ((unsigned int)BuffMaster__GetUnSubWhenContinueStatus(this, buffId, method) >> 1) & 1;
}


bool __fastcall BuffMaster__IsUnSubStateWhenDeadContinue(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  return BuffMaster__GetUnSubWhenContinueStatus(this, buffId, method) & 1;
}


bool __fastcall BuffMaster__TryGetDisplayCardBottomImageName(
        BuffMaster_o *this,
        System_String_o **name,
        int32_t buffId,
        System_String_o *defName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  _BOOL8 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Value_object; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB5AB7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_GetValue_string___, name);
    sub_1BAB41C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_1BAB41C(&StringLiteral_5332/*"DisplayCardBottomImageName"*/, v10);
    byte_4AB5AB7 = 1;
  }
  entity = 0LL;
  v11 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          buffId,
          (const MethodInfo_3163DE4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_object = 0LL;
  if ( v11 )
  {
    if ( !entity )
      sub_1BAB678(v11, 0LL);
    Value_object = BasicHelper__GetValue_object_(
                     (System_Collections_Generic_Dictionary_string__object__o *)entity[6].klass,
                     (System_String_o *)StringLiteral_5332/*"DisplayCardBottomImageName"*/,
                     (Il2CppObject *)defName,
                     (const MethodInfo_2EB26D4 *)Method_BasicHelper_GetValue_string___);
  }
  *name = (System_String_o *)Value_object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)name, (int32_t)Value_object, v12, v13);
  return !System_String__IsNullOrEmpty(*name, 0LL);
}


System_Int32_array *__fastcall BuffMaster__get_StateEffectIdArray(BuffMaster_o *this, const MethodInfo *method)
{
  return this->fields._StateEffectIdArray_k__BackingField;
}


bool __fastcall BuffMaster__preProcess(BuffMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v12; // x21
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  unsigned int *v25; // x0
  __int64 v26; // x1
  BuffEntity_o *v27; // x22
  __int64 methodPtr_low; // x9
  unsigned __int64 effectId; // x1
  _BOOL8 v30; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  const MethodInfo *v34; // x1
  __int64 CardEffectId; // x0
  __int64 v36; // x0
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  BuffMaster_o *v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  BuffMaster_o *v43; // x0
  const MethodInfo *v44; // x3
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  struct System_Int32_array *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3

  if ( (byte_4AB5AB2 & 1) == 0 )
  {
    sub_1BAB41C(&BuffEntity_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v4);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4AB5AB2 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    v27 = (BuffEntity_o *)v25;
    if ( !v25 )
      goto LABEL_45;
    methodPtr_low = LOBYTE(BuffEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(BuffEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != BuffEntity_TypeInfo )
    {
      sub_1BAB938(v25);
LABEL_45:
      sub_1BAB678(v25, v26);
    }
    effectId = v25[26];
    if ( (int)effectId >= 1 )
    {
      if ( !v12 )
        sub_1BAB678(v25, effectId);
      v30 = System_Collections_Generic_List_int___Contains(
              v12,
              effectId,
              (const MethodInfo_3530C10 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v30 )
      {
        effectId = (unsigned int)v27->fields.effectId;
        items = v12->fields._items;
        v32 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1BAB678(v30, effectId);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            effectId,
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = effectId;
        }
      }
    }
    if ( BuffEntity__GetCardEffectId(v27, (const MethodInfo *)effectId) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v27, v34);
      if ( !v12 )
        sub_1BAB678(CardEffectId, (unsigned int)CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v12,
              CardEffectId,
              (const MethodInfo_3530C10 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v36 = BuffEntity__GetCardEffectId(v27, v34);
        v34 = (const MethodInfo *)(unsigned int)v36;
        v37 = v12->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !v37 )
          sub_1BAB678(v36, (unsigned int)v36);
        v39 = v12->fields._size;
        if ( (unsigned int)v39 >= v37->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v36,
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = v39 + 1;
          v37->m_Items[v39 + 1] = v36;
        }
      }
    }
    v40 = (BuffMaster_o *)BuffEntity__GetClassIconChangeEffectId(v27, v34);
    BuffMaster__AddEffectIdToList(v40, v12, (int32_t)v40, v41);
    v43 = (BuffMaster_o *)BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(v27, -1, v42);
    BuffMaster__AddEffectIdToList(v43, v12, (int32_t)v43, v44);
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_40;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_40:
    v48 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                                                             Enumerator,
                                                             *(_QWORD *)(v48 + 8));
  if ( !v12 )
LABEL_50:
    sub_1BAB678(list, v13);
  v49 = System_Collections_Generic_List_int___ToArray(
          v12,
          (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v49;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int32_t)v49,
    v50,
    v51);
  return 1;
}


void __fastcall BuffMaster__set_StateEffectIdArray(
        BuffMaster_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._StateEffectIdArray_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}