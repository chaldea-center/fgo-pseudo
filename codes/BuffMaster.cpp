void __fastcall BuffMaster___ctor(BuffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01D55 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__, method);
    byte_4B01D55 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    60,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int___ctor__);
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

  if ( (byte_4B01D57 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, effectIdList);
    this = (BuffMaster_o *)sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v6);
    byte_4B01D57 = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !effectIdList )
      goto LABEL_11;
    this = (BuffMaster_o *)System_Collections_Generic_List_int___Contains(
                             effectIdList,
                             effectId,
                             (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    items = effectIdList->fields._items;
    v8 = Method_System_Collections_Generic_List_int__Add__;
    ++effectIdList->fields._version;
    if ( !items )
LABEL_11:
      sub_1BC3264(this, effectIdList);
    size = effectIdList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        effectIdList,
        effectId,
        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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

  if ( (byte_4B01D5A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4B01D5A = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1BC3264(v7, v8);
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

  if ( (byte_4B01D59 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4B01D59 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1BC3264(v7, v8);
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

  if ( (byte_4B01D58 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4B01D58 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         buffId,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1BC3264(0LL, v9);
    return BuffEntity__getScript_40848324((BuffEntity_o *)entity, key, def, v10);
  }
  return def;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffMaster__GetUnSubWhenContinueStatus(BuffMaster_o *this, int32_t buffId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B01D5C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, *(_QWORD *)&buffId);
    byte_4B01D5C = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          buffId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1BC3264(0LL, v5);
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
  const MethodInfo *v13; // x3
  Il2CppObject *Value_object; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B01D5B & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_GetValue_string___, name);
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_1BC3008(&StringLiteral_5249/*"DisplayCardBottomImageName"*/, v10);
    byte_4B01D5B = 1;
  }
  entity = 0LL;
  v11 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          buffId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
  Value_object = 0LL;
  if ( v11 )
  {
    if ( !entity )
      sub_1BC3264(v11, 0LL);
    Value_object = BasicHelper__GetValue_object_(
                     (System_Collections_Generic_Dictionary_string__object__o *)entity[6].klass,
                     (System_String_o *)StringLiteral_5249/*"DisplayCardBottomImageName"*/,
                     (Il2CppObject *)defName,
                     (const MethodInfo_2FEF8B0 *)Method_BasicHelper_GetValue_string___);
  }
  *name = (System_String_o *)Value_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)name, (int32_t)Value_object, v12, v13);
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
  System_Collections_Generic_List_int__o *v11; // x21
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  BuffEntity_o *v26; // x22
  unsigned __int64 effectId; // x1
  _BOOL8 v28; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  const MethodInfo *v32; // x1
  __int64 CardEffectId; // x0
  __int64 v34; // x0
  struct System_Int32_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  BuffMaster_o *v38; // x0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  BuffMaster_o *v41; // x0
  const MethodInfo *v42; // x3
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  struct System_Int32_array *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3

  if ( (byte_4B01D56 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_BuffEntity__GetEnumerator__, method);
    sub_1BC3008(&System_IDisposable_TypeInfo, v3);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo, v4);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4B01D56 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_BuffEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BuffEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_BuffEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v26 = (BuffEntity_o *)v24;
    if ( !v24 )
      sub_1BC3264(0LL, v25);
    effectId = *(unsigned int *)(v24 + 104);
    if ( (int)effectId >= 1 )
    {
      if ( !v11 )
        sub_1BC3264(v24, effectId);
      v28 = System_Collections_Generic_List_int___Contains(
              v11,
              effectId,
              (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v28 )
      {
        effectId = (unsigned int)v26->fields.effectId;
        items = v11->fields._items;
        v30 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BC3264(v28, effectId);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            effectId,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = effectId;
        }
      }
    }
    if ( BuffEntity__GetCardEffectId(v26, (const MethodInfo *)effectId) >= 1 )
    {
      CardEffectId = BuffEntity__GetCardEffectId(v26, v32);
      if ( !v11 )
        sub_1BC3264(CardEffectId, (unsigned int)CardEffectId);
      if ( !System_Collections_Generic_List_int___Contains(
              v11,
              CardEffectId,
              (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        v34 = BuffEntity__GetCardEffectId(v26, v32);
        v32 = (const MethodInfo *)(unsigned int)v34;
        v35 = v11->fields._items;
        v36 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !v35 )
          sub_1BC3264(v34, (unsigned int)v34);
        v37 = v11->fields._size;
        if ( (unsigned int)v37 >= v35->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v34,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = v37 + 1;
          v35->m_Items[v37 + 1] = v34;
        }
      }
    }
    v38 = (BuffMaster_o *)BuffEntity__GetClassIconChangeEffectId(v26, v32);
    BuffMaster__AddEffectIdToList(v38, v11, (int32_t)v38, v39);
    v41 = (BuffMaster_o *)BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(v26, -1, v40);
    BuffMaster__AddEffectIdToList(v41, v11, (int32_t)v41, v42);
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_38;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_38:
    v46 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                                                             Enumerator,
                                                             *(_QWORD *)(v46 + 8));
  if ( !v11 )
LABEL_47:
    sub_1BC3264(list, v12);
  v47 = System_Collections_Generic_List_int___ToArray(
          v11,
          (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._StateEffectIdArray_k__BackingField = v47;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._StateEffectIdArray_k__BackingField, (int32_t)v47, v48, v49);
  return 1;
}


void __fastcall BuffMaster__set_StateEffectIdArray(
        BuffMaster_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._StateEffectIdArray_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._StateEffectIdArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}