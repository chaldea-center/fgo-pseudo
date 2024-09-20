void __fastcall RestrictionSlotDetailMaster___ctor(RestrictionSlotDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B763 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string___ctor__);
    byte_4A5B763 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    447,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string___ctor__);
}


RestrictionSlotDetailEntity_array *__fastcall RestrictionSlotDetailMaster__GetEntities(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  int32_t *v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  __int64 methodPtr_low; // x9
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4A5B762 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_RestrictionSlotDetailEntity__TypeInfo);
    sub_1B885B0(&RestrictionSlotDetailEntity_TypeInfo);
    byte_4A5B762 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RestrictionSlotDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                       Enumerator,
                       *(_QWORD *)(v17 + 8));
    v20 = (Il2CppObject *)v18;
    if ( !v18 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(RestrictionSlotDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(RestrictionSlotDetailEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != RestrictionSlotDetailEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_37:
      sub_1B8880C(v18, v19);
    }
    if ( !idList )
      sub_1B8880C(v18, RestrictionSlotDetailEntity_TypeInfo);
    v22 = System_Collections_Generic_List_int___Contains(
            idList,
            v18[4],
            (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v22 )
    {
      if ( !v5 )
        sub_1B8880C(v22, v23);
      items = v5->fields._items;
      v27 = Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v22, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v20;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v20, v24, v25);
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_32;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_32:
    v33 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                                             Enumerator,
                                                             *(_QWORD *)(v33 + 8));
  if ( !v5 )
LABEL_41:
    sub_1B8880C(list, v6);
  return (RestrictionSlotDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionSlotDetailEntity_o *__fastcall RestrictionSlotDetailMaster__GetEntity(
        RestrictionSlotDetailMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B764 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__GetEntity__);
    byte_4A5B764 = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotDetailEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (RestrictionSlotDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionSlotDetailMaster__TryGetEntity(
        RestrictionSlotDetailMaster_o *this,
        RestrictionSlotDetailEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B765 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__TryGetEntity__);
    byte_4A5B765 = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotDetailEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__TryGetEntity__);
}