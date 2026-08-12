void RestrictionWholeMaster___ctor(RestrictionWholeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59710B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string___ctor__);
    byte_59710B6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    457,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string___ctor__);
}


RestrictionWholeEntity_array *RestrictionWholeMaster__GetEntities(
        RestrictionWholeMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  System_Collections_Generic_IEnumerator_T__o *v36; // [xsp+18h] [xbp-38h]

  if ( (byte_59710B5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_RestrictionWholeEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_RestrictionWholeEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionWholeEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionWholeEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_RestrictionWholeEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_RestrictionWholeEntity__TypeInfo);
    byte_59710B5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RestrictionWholeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RestrictionWholeEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_RestrictionWholeEntity__GetEnumerator__);
  v36 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v36 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
             i,
             *(_QWORD *)(v14 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v36 )
      sub_2213CDC(list, v6);
    v15 = v36->klass;
    v16 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_RestrictionWholeEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_RestrictionWholeEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_224BC3C(v36, System_Collections_Generic_IEnumerator_RestrictionWholeEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v36,
            *(_QWORD *)(v18 + 8));
    v26 = v19;
    if ( !v19 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v19 + 16) == id )
    {
      if ( !v5
        || (items = v5->fields._items,
            v28 = Method_System_Collections_Generic_List_RestrictionWholeEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v19, v19);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v19,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  if ( v36 )
  {
    v31 = v36->klass;
    v32 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_34;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_34:
      v34 = sub_224BC3C(v36, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
             v36,
             *(_QWORD *)(v34 + 8));
  }
  if ( !v5 )
LABEL_42:
    sub_2213CDC(list, v6);
  return (RestrictionWholeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_RestrictionWholeEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionWholeEntity_o *RestrictionWholeMaster__GetEntity(
        RestrictionWholeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59710B7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__GetEntity__);
    byte_59710B7 = 1;
  }
  PK = (Il2CppObject *)RestrictionWholeEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (RestrictionWholeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3F157EC *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool RestrictionWholeMaster__TryGetEntity(
        RestrictionWholeMaster_o *this,
        RestrictionWholeEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59710B8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__TryGetEntity__);
    byte_59710B8 = 1;
  }
  PK = (Il2CppObject *)RestrictionWholeEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_RestrictionWholeMaster__RestrictionWholeEntity__string__TryGetEntity__);
}