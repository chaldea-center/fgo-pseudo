void RestrictionSlotDetailMaster___ctor(RestrictionSlotDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27AB2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string___ctor__);
    byte_4C27AB2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    453,
    (const MethodInfo_338A52C *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string___ctor__);
}


RestrictionSlotDetailEntity_array *RestrictionSlotDetailMaster__GetEntities(
        RestrictionSlotDetailMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4C27AB1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_RestrictionSlotDetailEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_RestrictionSlotDetailEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_RestrictionSlotDetailEntity__TypeInfo);
    byte_4C27AB1 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_RestrictionSlotDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_RestrictionSlotDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_RestrictionSlotDetailEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_RestrictionSlotDetailEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_RestrictionSlotDetailEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v20 = (Il2CppObject *)v18;
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( !idList )
      sub_1C2D6EC(v18, v19);
    v21 = System_Collections_Generic_List_int___Contains(
            idList,
            *(_DWORD *)(v18 + 16),
            (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v21 )
    {
      if ( !v5 )
        sub_1C2D6EC(v21, v22);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v21, v22);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v20,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v20;
        sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v20, v23, v24);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_30;
    }
    v32 = (__int64)&v29->vtable[*v31];
  }
  else
  {
LABEL_30:
    v32 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                             Enumerator,
                                                             *(_QWORD *)(v32 + 8));
  if ( !v5 )
LABEL_38:
    sub_1C2D6EC(list, v6);
  return (RestrictionSlotDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionSlotDetailEntity_o *RestrictionSlotDetailMaster__GetEntity(
        RestrictionSlotDetailMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27AB3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__GetEntity__);
    byte_4C27AB3 = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotDetailEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (RestrictionSlotDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_338C850 *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool RestrictionSlotDetailMaster__TryGetEntity(
        RestrictionSlotDetailMaster_o *this,
        RestrictionSlotDetailEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27AB4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__TryGetEntity__);
    byte_4C27AB4 = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotDetailEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__TryGetEntity__);
}