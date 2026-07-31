void ServantCollectionMaster___ctor(ServantCollectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938F70 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
    byte_5938F70 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    322,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCollectionEntity_o *ServantCollectionMaster__GetEntity(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938F6E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
    byte_5938F6E = 1;
  }
  PK = (Il2CppObject *)ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&priority);
  return (ServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
}


int32_t ServantCollectionMaster__GetOverrideDisplayType(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  ServantCollectionEntity_array *SortedEntities; // x0
  const MethodInfo *v4; // x1
  int max_length; // w8
  ServantCollectionEntity_array *v6; // x19
  __int64 v7; // x21
  ServantCollectionEntity_o *v8; // x20

  SortedEntities = ServantCollectionMaster__GetSortedEntities(this, collectionNo, method);
  if ( !SortedEntities )
LABEL_10:
    sub_21FFECC(SortedEntities, v4);
  max_length = SortedEntities->max_length;
  v6 = SortedEntities;
  if ( max_length < 1 )
    return -1;
  v7 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= max_length )
      sub_21FFED4(SortedEntities);
    v8 = v6->m_Items[v7];
    if ( !v8 )
      goto LABEL_10;
    SortedEntities = (ServantCollectionEntity_array *)ServantCollectionEntity__IsOpenCondition(v6->m_Items[v7], v4);
    if ( ((unsigned __int8)SortedEntities & 1) != 0 )
      return v8->fields.type;
    max_length = v6->max_length;
    if ( (int)++v7 >= max_length )
      return -1;
  }
}


ServantCollectionEntity_array *ServantCollectionMaster__GetSortedEntities(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
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
  ServantCollectionMaster___c_c *v35; // x0
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v38; // x21
  struct ServantCollectionMaster___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_IEnumerator_T__o *v47; // [xsp+18h] [xbp-38h]

  if ( (byte_5938F71 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantCollectionEntity__GetEnumerator__);
    sub_21FFC50(&System_Comparison_ServantCollectionEntity__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCollectionEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCollectionEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
    sub_21FFC50(&Method_ServantCollectionMaster___c__GetSortedEntities_b__4_0__);
    sub_21FFC50(&ServantCollectionMaster___c_TypeInfo);
    byte_5938F71 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_49;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ServantCollectionEntity__GetEnumerator__);
  v47 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v47 )
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
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
             i,
             *(_QWORD *)(v14 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v47 )
      sub_21FFECC(list, v6);
    v15 = v47->klass;
    v16 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantCollectionEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo )
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
      v18 = sub_2237E2C(v47, System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v47,
            *(_QWORD *)(v18 + 8));
    v26 = v19;
    if ( v19 && *(_DWORD *)(v19 + 16) == collectionNo )
    {
      if ( !v5
        || (items = v5->fields._items,
            v28 = Method_System_Collections_Generic_List_ServantCollectionEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_21FFECC(v19, v19);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v19,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  if ( v47 )
  {
    v31 = v47->klass;
    v32 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
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
      v34 = sub_2237E2C(v47, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
             v47,
             *(_QWORD *)(v34 + 8));
  }
  if ( !v5 )
LABEL_49:
    sub_21FFECC(list, v6);
  if ( v5->fields._size >= 1 )
  {
    v35 = ServantCollectionMaster___c_TypeInfo;
    if ( !*(&ServantCollectionMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCollectionMaster___c_TypeInfo, v6);
      v35 = ServantCollectionMaster___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !*(&v35->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v35, v6);
        static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantCollectionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v38, Method_ServantCollectionMaster___c__GetSortedEntities_b__4_0__, 0);
      v39 = ServantCollectionMaster___c_TypeInfo->static_fields;
      v39->__9__4_0 = (struct System_Comparison_ServantCollectionEntity__o *)_9__4_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v39->__9__4_0, (int32_t)_9__4_0, v40, v41, v42, v43, v44, v45);
    }
    System_Collections_Generic_List_object___Sort_71636404(
      v5,
      _9__4_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
  }
  return (ServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v5,
                                            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCollectionMaster__TryGetEntity(
        ServantCollectionMaster_o *this,
        ServantCollectionEntity_o **entity,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938F6F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
    byte_5938F6F = 1;
  }
  PK = (Il2CppObject *)ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&collectionNo);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
}


void ServantCollectionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938F72 & 1) == 0 )
  {
    sub_21FFC50(&ServantCollectionMaster___c_TypeInfo);
    byte_5938F72 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantCollectionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCollectionMaster___c_TypeInfo->static_fields->__9 = (struct ServantCollectionMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantCollectionMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantCollectionMaster___c___ctor(ServantCollectionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantCollectionMaster___c___GetSortedEntities_b__4_0(
        ServantCollectionMaster___c_o *this,
        ServantCollectionEntity_o *a,
        ServantCollectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}