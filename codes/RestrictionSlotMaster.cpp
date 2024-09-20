void __fastcall RestrictionSlotMaster___ctor(RestrictionSlotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B769 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string___ctor__);
    byte_4A5B769 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    446,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string___ctor__);
}


RestrictionSlotEntity_array *__fastcall RestrictionSlotMaster__GetEntities(
        RestrictionSlotMaster_o *this,
        int32_t id,
        int32_t slotNo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  RestrictionSlotEntity_c *v25; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5B768 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionSlotEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionSlotEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionSlotEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_RestrictionSlotEntity__TypeInfo);
    sub_1B885B0(&RestrictionSlotEntity_TypeInfo);
    byte_4A5B768 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RestrictionSlotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RestrictionSlotEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
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
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      goto LABEL_37;
    v25 = RestrictionSlotEntity_TypeInfo;
    methodPtr_low = LOBYTE(RestrictionSlotEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low
      || *(RestrictionSlotEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != RestrictionSlotEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_37:
      sub_1B8880C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 16) == id && *(_DWORD *)(v20 + 20) == slotNo )
    {
      if ( !v7 )
        sub_1B8880C(v20, RestrictionSlotEntity_TypeInfo);
      items = v7->fields._items;
      v28 = Method_System_Collections_Generic_List_RestrictionSlotEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v25);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), v24, v22, v23);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                             Enumerator,
                                                             *(_QWORD *)(v34 + 8));
  if ( !v7 )
LABEL_40:
    sub_1B8880C(list, v8);
  return (RestrictionSlotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_RestrictionSlotEntity__ToArray__);
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

  if ( (byte_4A5B76A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__GetEntity__);
    byte_4A5B76A = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotEntity__CreatePK(id, slotNo, idx, *(const MethodInfo **)&idx);
  return (RestrictionSlotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__GetEntity__);
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

  if ( (byte_4A5B76B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__TryGetEntity__);
    byte_4A5B76B = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotEntity__CreatePK(id, slotNo, idx, *(const MethodInfo **)&slotNo);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__TryGetEntity__);
}