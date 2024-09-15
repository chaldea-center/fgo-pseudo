void __fastcall RestrictionSlotDetailMaster___ctor(RestrictionSlotDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E543 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string___ctor__,
      method);
    byte_4A2E543 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    447,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string___ctor__);
}


RestrictionSlotDetailEntity_array *__fastcall RestrictionSlotDetailMaster__GetEntities(
        RestrictionSlotDetailMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
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
  int32_t *v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x22
  __int64 methodPtr_low; // x9
  _BOOL8 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4A2E542 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, idList);
    sub_1B761C0(&System_IDisposable_TypeInfo, v5);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__Add__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__ToArray__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_RestrictionSlotDetailEntity___ctor__, v11);
    sub_1B761C0(&System_Collections_Generic_List_RestrictionSlotDetailEntity__TypeInfo, v12);
    sub_1B761C0(&RestrictionSlotDetailEntity_TypeInfo, v13);
    byte_4A2E542 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_RestrictionSlotDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v17);
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
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v26 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                       Enumerator,
                       *(_QWORD *)(v26 + 8));
    v29 = (Il2CppObject *)v27;
    if ( !v27 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(RestrictionSlotDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(RestrictionSlotDetailEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != RestrictionSlotDetailEntity_TypeInfo )
    {
      sub_1B766DC(v27);
LABEL_37:
      sub_1B7641C(v27, v28);
    }
    if ( !idList )
      sub_1B7641C(v27, RestrictionSlotDetailEntity_TypeInfo);
    v31 = System_Collections_Generic_List_int___Contains(
            idList,
            v27[4],
            (const MethodInfo_34BA928 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v31 )
    {
      if ( !v14 )
        sub_1B7641C(v31, v32);
      items = v14->fields._items;
      v36 = Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1B7641C(v31, v32);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v29,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v29;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v29, v33, v34);
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_32;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_32:
    v42 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                             Enumerator,
                                                             *(_QWORD *)(v42 + 8));
  if ( !v14 )
LABEL_41:
    sub_1B7641C(list, v15);
  return (RestrictionSlotDetailEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v14,
                                                (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_RestrictionSlotDetailEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionSlotDetailEntity_o *__fastcall RestrictionSlotDetailMaster__GetEntity(
        RestrictionSlotDetailMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A2E544 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4A2E544 = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotDetailEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (RestrictionSlotDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_30FFAD8 *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__GetEntity__);
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

  if ( (byte_4A2E545 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__TryGetEntity__,
      entity);
    byte_4A2E545 = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotDetailEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_RestrictionSlotDetailMaster__RestrictionSlotDetailEntity__string__TryGetEntity__);
}