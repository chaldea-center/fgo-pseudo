void __fastcall RestrictionWholeMaster___ctor(RestrictionWholeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B027DD & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string___ctor__, method);
    byte_4B027DD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    455,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string___ctor__);
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
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4B027DC & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_RestrictionWholeEntity__GetEnumerator__,
      *(_QWORD *)&id);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_RestrictionWholeEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_RestrictionWholeEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_RestrictionWholeEntity__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_RestrictionWholeEntity___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_RestrictionWholeEntity__TypeInfo, v11);
    byte_4B027DC = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_RestrictionWholeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_RestrictionWholeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_RestrictionWholeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v15);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_RestrictionWholeEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_RestrictionWholeEntity__TypeInfo )
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
      v24 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_RestrictionWholeEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v29 = v25;
    if ( !v25 )
      sub_1BC3264(0LL, v26);
    if ( *(_DWORD *)(v25 + 16) == id )
    {
      if ( !v12 )
        sub_1BC3264(v25, v26);
      items = v12->fields._items;
      v31 = Method_System_Collections_Generic_List_RestrictionWholeEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BC3264(v25, v26);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v33 + 4), v29, v27, v28);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_29;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_29:
    v37 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                             Enumerator,
                                                             *(_QWORD *)(v37 + 8));
  if ( !v12 )
LABEL_36:
    sub_1BC3264(list, v13);
  return (RestrictionWholeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v12,
                                           (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_RestrictionWholeEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionWholeEntity_o *__fastcall RestrictionWholeMaster__GetEntity(
        RestrictionWholeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B027DE & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4B027DE = 1;
  }
  PK = (Il2CppObject *)RestrictionWholeEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (RestrictionWholeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_32B3B28 *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__GetEntity__);
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

  if ( (byte_4B027DF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__TryGetEntity__, entity);
    byte_4B027DF = 1;
  }
  PK = (Il2CppObject *)RestrictionWholeEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__TryGetEntity__);
}