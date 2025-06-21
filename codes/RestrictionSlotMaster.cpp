void __fastcall RestrictionSlotMaster___ctor(RestrictionSlotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CCDF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string___ctor__, method);
    byte_4B1CCDF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    452,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionSlotEntity_array *__fastcall RestrictionSlotMaster__GetEntities(
        RestrictionSlotMaster_o *this,
        int32_t id,
        int32_t slotNo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B1CCDE & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_RestrictionSlotEntity__GetEnumerator__,
      *(_QWORD *)&id);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_RestrictionSlotEntity__TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_RestrictionSlotEntity__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_RestrictionSlotEntity__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_RestrictionSlotEntity___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_RestrictionSlotEntity__TypeInfo, v13);
    byte_4B1CCDE = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_RestrictionSlotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_RestrictionSlotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_RestrictionSlotEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_RestrictionSlotEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_RestrictionSlotEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_RestrictionSlotEntity__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v31 = v27;
    if ( !v27 )
      sub_1BCB254(0LL, v28);
    if ( *(_DWORD *)(v27 + 16) == id && *(_DWORD *)(v27 + 20) == slotNo )
    {
      if ( !v14 )
        sub_1BCB254(v27, v28);
      items = v14->fields._items;
      v33 = Method_System_Collections_Generic_List_RestrictionSlotEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BCB254(v27, v28);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v27,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v31;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 4), v31, v29, v30);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_30;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_30:
    v39 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                             Enumerator,
                                                             *(_QWORD *)(v39 + 8));
  if ( !v14 )
LABEL_37:
    sub_1BCB254(list, v15);
  return (RestrictionSlotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v14,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_RestrictionSlotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionSlotEntity_o *__fastcall RestrictionSlotMaster__GetEntity(
        RestrictionSlotMaster_o *this,
        int32_t id,
        int32_t slotNo,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1CCE0 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4B1CCE0 = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotEntity__CreatePK(id, slotNo, idx, *(const MethodInfo **)&idx);
  return (RestrictionSlotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_32CC8B8 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionSlotMaster__TryGetEntity(
        RestrictionSlotMaster_o *this,
        RestrictionSlotEntity_o **entity,
        int32_t id,
        int32_t slotNo,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1CCE1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__TryGetEntity__, entity);
    byte_4B1CCE1 = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotEntity__CreatePK(id, slotNo, idx, *(const MethodInfo **)&slotNo);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__TryGetEntity__);
}