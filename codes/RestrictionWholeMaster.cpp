void __fastcall RestrictionWholeMaster___ctor(RestrictionWholeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF128 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string___ctor__, method);
    byte_49FF128 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    449,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionWholeEntity_array *__fastcall RestrictionWholeMaster__GetEntities(
        RestrictionWholeMaster_o *this,
        int32_t id,
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
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  RestrictionWholeEntity_c *v31; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_49FF127 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&id);
    sub_1B64A00(&System_IDisposable_TypeInfo, v5);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionWholeEntity__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionWholeEntity__ToArray__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionWholeEntity___ctor__, v10);
    sub_1B64A00(&System_Collections_Generic_List_RestrictionWholeEntity__TypeInfo, v11);
    sub_1B64A00(&RestrictionWholeEntity_TypeInfo, v12);
    byte_49FF127 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_RestrictionWholeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_RestrictionWholeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v30 = v26;
    if ( !v26 )
      goto LABEL_36;
    v31 = RestrictionWholeEntity_TypeInfo;
    methodPtr_low = LOBYTE(RestrictionWholeEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)methodPtr_low
      || *(RestrictionWholeEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) != RestrictionWholeEntity_TypeInfo )
    {
      sub_1B64F1C(v26);
LABEL_36:
      sub_1B64C5C(v26, v27);
    }
    if ( *(_DWORD *)(v26 + 16) == id )
    {
      if ( !v13 )
        sub_1B64C5C(v26, RestrictionWholeEntity_TypeInfo);
      items = v13->fields._items;
      v34 = Method_System_Collections_Generic_List_RestrictionWholeEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B64C5C(v26, v31);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v30;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v36 + 4), v30, v28, v29);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_31;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_31:
    v40 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                             Enumerator,
                                                             *(_QWORD *)(v40 + 8));
  if ( !v13 )
LABEL_39:
    sub_1B64C5C(list, v14);
  return (RestrictionWholeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v13,
                                           (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_RestrictionWholeEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionWholeEntity_o *__fastcall RestrictionWholeMaster__GetEntity(
        RestrictionWholeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF129 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49FF129 = 1;
  }
  PK = (Il2CppObject *)RestrictionWholeEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (RestrictionWholeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D6AF0 *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionWholeMaster__TryGetEntity(
        RestrictionWholeMaster_o *this,
        RestrictionWholeEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF12A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__TryGetEntity__, entity);
    byte_49FF12A = 1;
  }
  PK = (Il2CppObject *)RestrictionWholeEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__TryGetEntity__);
}