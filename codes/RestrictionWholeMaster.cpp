void __fastcall RestrictionWholeMaster___ctor(RestrictionWholeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCBA5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string___ctor__);
    byte_4BDCBA5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    453,
    (const MethodInfo_325E55C *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string___ctor__);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4BDCBA4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_RestrictionWholeEntity__GetEnumerator__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_RestrictionWholeEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionWholeEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionWholeEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionWholeEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_RestrictionWholeEntity__TypeInfo);
    byte_4BDCBA4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_RestrictionWholeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_RestrictionWholeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_RestrictionWholeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v8);
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
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_RestrictionWholeEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_RestrictionWholeEntity__TypeInfo )
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
      v17 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_RestrictionWholeEntity__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v26 = v18;
    if ( !v18 )
      sub_1C22094(0LL, v19);
    if ( *(_DWORD *)(v18 + 16) == id )
    {
      if ( !v5 )
        sub_1C22094(v18, v19);
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_RestrictionWholeEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C22094(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
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
        goto LABEL_29;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_29:
    v34 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                             Enumerator,
                                                             *(_QWORD *)(v34 + 8));
  if ( !v5 )
LABEL_36:
    sub_1C22094(list, v6);
  return (RestrictionWholeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_RestrictionWholeEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionWholeEntity_o *__fastcall RestrictionWholeMaster__GetEntity(
        RestrictionWholeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDCBA6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__GetEntity__);
    byte_4BDCBA6 = 1;
  }
  PK = (Il2CppObject *)RestrictionWholeEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (RestrictionWholeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3260880 *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__GetEntity__);
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

  if ( (byte_4BDCBA7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__TryGetEntity__);
    byte_4BDCBA7 = 1;
  }
  PK = (Il2CppObject *)RestrictionWholeEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__TryGetEntity__);
}