void __fastcall RestrictionWholeMaster___ctor(RestrictionWholeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B770 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string___ctor__);
    byte_4A5B770 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    449,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string___ctor__);
}


RestrictionWholeEntity_array *__fastcall RestrictionWholeMaster__GetEntities(
        RestrictionWholeMaster_o *this,
        int32_t id,
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
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  RestrictionWholeEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4A5B76F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionWholeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionWholeEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionWholeEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_RestrictionWholeEntity__TypeInfo);
    sub_1B885B0(&RestrictionWholeEntity_TypeInfo);
    byte_4A5B76F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RestrictionWholeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RestrictionWholeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
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
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      goto LABEL_36;
    v23 = RestrictionWholeEntity_TypeInfo;
    methodPtr_low = LOBYTE(RestrictionWholeEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(RestrictionWholeEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != RestrictionWholeEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_36:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 16) == id )
    {
      if ( !v5 )
        sub_1B8880C(v18, RestrictionWholeEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_RestrictionWholeEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                             Enumerator,
                                                             *(_QWORD *)(v32 + 8));
  if ( !v5 )
LABEL_39:
    sub_1B8880C(list, v6);
  return (RestrictionWholeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_RestrictionWholeEntity__ToArray__);
}


RestrictionWholeEntity_o *__fastcall RestrictionWholeMaster__GetEntity(
        RestrictionWholeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B771 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__GetEntity__);
    byte_4A5B771 = 1;
  }
  PK = (Il2CppObject *)RestrictionWholeEntity__CreatePK(id, idx, 0LL);
  return (RestrictionWholeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__GetEntity__);
}


bool __fastcall RestrictionWholeMaster__TryGetEntity(
        RestrictionWholeMaster_o *this,
        RestrictionWholeEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B772 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__TryGetEntity__);
    byte_4A5B772 = 1;
  }
  PK = (Il2CppObject *)RestrictionWholeEntity__CreatePK(id, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__TryGetEntity__);
}