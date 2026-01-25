void ServantCollectionMaster___ctor(ServantCollectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEEF8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
    byte_4CEEEF8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    320,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCollectionEntity_o *ServantCollectionMaster__GetEntity(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEEF6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
    byte_4CEEEF6 = 1;
  }
  PK = (Il2CppObject *)ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&priority);
  return (ServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3432DB4 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
}


int32_t ServantCollectionMaster__GetOverrideDisplayType(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  ServantCollectionEntity_array *SortedEntities; // x0
  const MethodInfo *v4; // x1
  il2cpp_array_size_t max_length; // x8
  ServantCollectionEntity_array *v6; // x19
  __int64 v7; // x21
  ServantCollectionEntity_o *v8; // x20

  SortedEntities = ServantCollectionMaster__GetSortedEntities(this, collectionNo, method);
  if ( !SortedEntities )
LABEL_13:
    sub_1C7BD40(SortedEntities, v4);
  max_length = SortedEntities->max_length;
  v6 = SortedEntities;
  SortedEntities = (ServantCollectionEntity_array *)0xFFFFFFFFLL;
  if ( max_length && (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= (unsigned int)max_length )
        sub_1C7BD48(SortedEntities);
      v8 = v6->m_Items[v7];
      if ( !v8 )
        goto LABEL_13;
      SortedEntities = (ServantCollectionEntity_array *)ServantCollectionEntity__IsOpenCondition(v6->m_Items[v7], v4);
      if ( ((unsigned __int8)SortedEntities & 1) != 0 )
        break;
      LODWORD(max_length) = v6->max_length;
      if ( (int)++v7 >= (int)max_length )
      {
        LODWORD(SortedEntities) = -1;
        return (int)SortedEntities;
      }
    }
    LODWORD(SortedEntities) = v8->fields.type;
  }
  return (int)SortedEntities;
}


ServantCollectionEntity_array *ServantCollectionMaster__GetSortedEntities(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  ServantCollectionMaster___c_c *v34; // x0
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v36; // x21
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7

  if ( (byte_4CEEEF9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantCollectionEntity__GetEnumerator__);
    sub_1C7BAE8(&System_Comparison_ServantCollectionEntity__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCollectionEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCollectionEntity__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
    sub_1C7BAE8(&Method_ServantCollectionMaster___c__GetSortedEntities_b__4_0__);
    sub_1C7BAE8(&ServantCollectionMaster___c_TypeInfo);
    byte_4CEEEF9 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_ServantCollectionEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v8);
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
      v13 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantCollectionEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo )
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
      v17 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v25 = v18;
    if ( v18 && *(_DWORD *)(v18 + 16) == collectionNo )
    {
      if ( !v5 )
        sub_1C7BD40(v18, v18);
      items = v5->fields._items;
      v27 = Method_System_Collections_Generic_List_ServantCollectionEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C7BD40(v18, v18);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v25;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v29 + 4), v25, v19, v20, v21, v22, v23, v24);
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_29;
    }
    v33 = (__int64)&v30->vtable[*v32];
  }
  else
  {
LABEL_29:
    v33 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                                             Enumerator,
                                                             *(_QWORD *)(v33 + 8));
  if ( !v5 )
LABEL_43:
    sub_1C7BD40(list, v6);
  if ( v5->fields._size >= 1 )
  {
    v34 = ServantCollectionMaster___c_TypeInfo;
    if ( !ServantCollectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCollectionMaster___c_TypeInfo);
      v34 = ServantCollectionMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v34->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = ServantCollectionMaster___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_ServantCollectionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v36, Method_ServantCollectionMaster___c__GetSortedEntities_b__4_0__, 0);
      static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_ServantCollectionEntity__o *)_9__4_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0,
        (int32_t)_9__4_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    System_Collections_Generic_List_object___Sort_58984640(
      v5,
      _9__4_0,
      (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
  }
  return (ServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v5,
                                            (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
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

  if ( (byte_4CEEEF7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
    byte_4CEEEF7 = 1;
  }
  PK = (Il2CppObject *)ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&collectionNo);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
}


void ServantCollectionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEEEFA & 1) == 0 )
  {
    sub_1C7BAE8(&ServantCollectionMaster___c_TypeInfo);
    byte_4CEEEFA = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(ServantCollectionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCollectionMaster___c_TypeInfo->static_fields->__9 = (struct ServantCollectionMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ServantCollectionMaster___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}