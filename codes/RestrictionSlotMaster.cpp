void RestrictionSlotMaster___ctor(RestrictionSlotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938EF1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string___ctor__);
    byte_5938EF1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    454,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string___ctor__);
}


RestrictionSlotEntity_array *RestrictionSlotMaster__GetEntities(
        RestrictionSlotMaster_o *this,
        int32_t id,
        int32_t slotNo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+18h] [xbp-48h]

  if ( (byte_5938EF0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_RestrictionSlotEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_RestrictionSlotEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_RestrictionSlotEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_RestrictionSlotEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_RestrictionSlotEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_RestrictionSlotEntity__TypeInfo);
    byte_5938EF0 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_RestrictionSlotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_RestrictionSlotEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_RestrictionSlotEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v11);
  for ( i = Enumerator; ; i = v38 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
             i,
             *(_QWORD *)(v16 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v38 )
      sub_21FFECC(list, v8);
    v17 = v38->klass;
    v18 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_RestrictionSlotEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_RestrictionSlotEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_2237E2C(v38, System_Collections_Generic_IEnumerator_RestrictionSlotEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v38,
            *(_QWORD *)(v20 + 8));
    v28 = v21;
    if ( !v21 )
      sub_21FFECC(0, 0);
    if ( *(_DWORD *)(v21 + 16) == id && *(_DWORD *)(v21 + 20) == slotNo )
    {
      if ( !v7
        || (items = v7->fields._items,
            v30 = Method_System_Collections_Generic_List_RestrictionSlotEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_21FFECC(v21, v21);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v21,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  if ( v38 )
  {
    v33 = v38->klass;
    v34 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_35;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_35:
      v36 = sub_2237E2C(v38, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
             v38,
             *(_QWORD *)(v36 + 8));
  }
  if ( !v7 )
LABEL_43:
    sub_21FFECC(list, v8);
  return (RestrictionSlotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_RestrictionSlotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionSlotEntity_o *RestrictionSlotMaster__GetEntity(
        RestrictionSlotMaster_o *this,
        int32_t id,
        int32_t slotNo,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938EF2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__GetEntity__);
    byte_5938EF2 = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotEntity__CreatePK(id, slotNo, idx, *(const MethodInfo **)&idx);
  return (RestrictionSlotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool RestrictionSlotMaster__TryGetEntity(
        RestrictionSlotMaster_o *this,
        RestrictionSlotEntity_o **entity,
        int32_t id,
        int32_t slotNo,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938EF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__TryGetEntity__);
    byte_5938EF3 = 1;
  }
  PK = (Il2CppObject *)RestrictionSlotEntity__CreatePK(id, slotNo, idx, *(const MethodInfo **)&slotNo);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_RestrictionSlotMaster__RestrictionSlotEntity__string__TryGetEntity__);
}