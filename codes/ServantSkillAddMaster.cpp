void ServantSkillAddMaster___ctor(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB6D1E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity_____ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TypeInfo);
    byte_4CB6D1E = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    544,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string___ctor__);
}


void ServantSkillAddMaster__Clear(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *listCache; // x0

  if ( (byte_4CB6D1A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
    byte_4CB6D1A = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_33FC54C *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__Clear__);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C6BC60(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_3452678 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillAddEntity_o *ServantSkillAddMaster__GetEnableEntity(
        ServantSkillAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t baseSkillId,
        int32_t originalLimitCount,
        int32_t dispLimitCount,
        bool isMine,
        const MethodInfo *method)
{
  ServantSkillAddEntity_array *EntityListFromSvtId; // x0
  const MethodInfo *v16; // x1
  int max_length; // w8
  ServantSkillAddEntity_array *v18; // x24
  __int64 i; // x26
  ServantSkillAddEntity_o *v20; // x25
  int32_t commonReleaseId; // w0
  int32_t condLimitCount; // w8

  if ( (byte_4CB6D1D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CB6D1D = 1;
  }
  EntityListFromSvtId = ServantSkillAddMaster__GetEntityListFromSvtId(this, svtId, *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    max_length = EntityListFromSvtId->max_length;
    v18 = EntityListFromSvtId;
    if ( max_length >= 1 )
    {
      for ( i = 0; (int)i < max_length; ++i )
      {
        if ( (unsigned int)i >= max_length )
          sub_1C6BC68(EntityListFromSvtId);
        v20 = v18->m_Items[i];
        if ( !v20 )
          sub_1C6BC60(EntityListFromSvtId, v16);
        EntityListFromSvtId = (ServantSkillAddEntity_array *)System_Linq_Enumerable__Contains_int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v20->fields.skillIds,
                                                               baseSkillId,
                                                               (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
        {
          if ( !isMine )
          {
            condLimitCount = v20->fields.condLimitCount;
            goto LABEL_15;
          }
          commonReleaseId = v20->fields.commonReleaseId;
          if ( !commonReleaseId
            || (EntityListFromSvtId = (ServantSkillAddEntity_array *)CommonReleaseExtension__IsOpenConsiderEquippedWithTargetCostume(
                                                                       commonReleaseId,
                                                                       v20->fields.svtId,
                                                                       dispLimitCount,
                                                                       0),
                ((unsigned __int8)EntityListFromSvtId & 1) != 0) )
          {
            EntityListFromSvtId = (ServantSkillAddEntity_array *)ServantSkillAddEntity__GetCondIgnoreSealedLimitCount(
                                                                   v20,
                                                                   v16);
            condLimitCount = v20->fields.condLimitCount;
            if ( (_DWORD)EntityListFromSvtId == 1 && condLimitCount <= originalLimitCount )
              return v20;
LABEL_15:
            if ( condLimitCount <= limitCount )
              return v20;
          }
        }
        max_length = v18->max_length;
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
ServantSkillAddEntity_o *ServantSkillAddMaster__GetEntity(
        ServantSkillAddMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6D1F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__GetEntity__);
    byte_4CB6D1F = 1;
  }
  PK = (Il2CppObject *)ServantSkillAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_33FDB94 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillAddEntity_array *ServantSkillAddMaster__GetEntityListFromSvtId(
        ServantSkillAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB6D1C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TryGetValue__);
    byte_4CB6D1C = 1;
  }
  value = 0;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C6BC60(0, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TryGetValue__);
  return (ServantSkillAddEntity_array *)value;
}


// local variable allocation has failed, the output may be wrong!
bool ServantSkillAddMaster__TryGetEntity(
        ServantSkillAddMaster_o *this,
        ServantSkillAddEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB6D20 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__TryGetEntity__);
    byte_4CB6D20 = 1;
  }
  PK = (Il2CppObject *)ServantSkillAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__TryGetEntity__);
}


bool ServantSkillAddMaster__preProcess(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x22
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x23
  System_Collections_Generic_List_object__o *v22; // x0
  Il2CppClass *v23; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  void **v26; // x8
  ServantSkillAddMaster_o *v27; // x24
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  const MethodInfo_3737184 *v32; // x4
  __int64 v33; // x0
  __int64 v34; // x1
  ServantSkillAddMaster___c_c *v35; // x8
  int32_t v36; // w22
  __int64 v37; // x21
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v39; // x24
  struct ServantSkillAddMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_Dictionary_int__object__o *v43; // x23
  System_Object_array *v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int v47; // w8
  ServantSkillAddMaster_o *v49; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+8h] [xbp-D8h] BYREF
  int32_t key[3]; // [xsp+30h] [xbp-B0h] BYREF
  int32_t v52; // [xsp+3Ch] [xbp-A4h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+78h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v56; // 0:x0.16

  if ( (byte_4CB6D1B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantSkillAddEntity__GetEnumerator__);
    sub_1C6BA08(&System_Comparison_ServantSkillAddEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity____ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____set_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___get_Current__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillAddEntity___Deconstruct__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantSkillAddEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantSkillAddEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantSkillAddEntity__TypeInfo);
    sub_1C6BA08(&Method_ServantSkillAddMaster___c__preProcess_b__2_0__);
    sub_1C6BA08(&ServantSkillAddMaster___c_TypeInfo);
    byte_4CB6D1B = 1;
  }
  value = 0;
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v52 = 0;
  memset(&v54, 0, sizeof(v54));
  *(_QWORD *)key = 0;
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_54;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_3452678 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_54;
  v49 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_ServantSkillAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillAddEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_17:
      v14 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( !v15 )
      sub_1C6BC60(0, v16);
    if ( !v4 )
      sub_1C6BC60(v15, v16);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v4,
            *(_DWORD *)(v15 + 16),
            &value,
            (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TryGetValue__) )
    {
      v21 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantSkillAddEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v21,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantSkillAddEntity___ctor__);
      value = (Il2CppObject *)v21;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v4,
        *(_DWORD *)(v17 + 16),
        (Il2CppObject *)v21,
        (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___set_Item__);
    }
    v22 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      sub_1C6BC60(0, v18);
    v23 = value[1].klass;
    v24 = Method_System_Collections_Generic_List_ServantSkillAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v23 )
      sub_1C6BC60(v22, v18);
    size = v22->fields._size;
    if ( (unsigned int)size >= LODWORD(v23->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v17,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &v23->_1.image + size;
      v22->fields._size = size + 1;
      v26[4] = (void *)v17;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), v17, v19, v20);
    }
  }
  v27 = v49;
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_32:
    v31 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v31 + 8));
  if ( !v4 )
LABEL_54:
    sub_1C6BC60(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v50,
    v4,
    (const MethodInfo_3452928 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___GetEnumerator__);
  v54 = v50;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v54,
            (const MethodInfo_35AA310 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___MoveNext__) )
  {
    current = v54.fields._current;
    *(_QWORD *)&v56.fields.key = &current;
    v56.fields.value = (Il2CppObject *)&v52;
    System_Collections_Generic_KeyValuePair_int__object___Deconstruct(
      v56,
      key,
      (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillAddEntity___Deconstruct__,
      v32);
    v35 = ServantSkillAddMaster___c_TypeInfo;
    v36 = v52;
    v37 = *(_QWORD *)key;
    if ( !ServantSkillAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillAddMaster___c_TypeInfo);
      v35 = ServantSkillAddMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v35->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = ServantSkillAddMaster___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v35->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ServantSkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v39, Method_ServantSkillAddMaster___c__preProcess_b__2_0__, 0);
      static_fields = ServantSkillAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_ServantSkillAddEntity__o *)_9__2_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v41, v42);
      v27 = v49;
    }
    if ( !v37 )
      sub_1C6BC60(v33, v34);
    System_Collections_Generic_List_object___Sort_58729528(
      (System_Collections_Generic_List_object__o *)v37,
      _9__2_0,
      (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ServantSkillAddEntity__Sort__);
    v43 = (System_Collections_Generic_Dictionary_int__object__o *)v27->fields.listCache;
    v44 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v37,
            (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ServantSkillAddEntity__ToArray__);
    if ( !v43 )
      sub_1C6BC60(v44, v45);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v43,
      v36,
      &v44->obj,
      (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____set_Item__);
    v46 = *(_DWORD *)(v37 + 24);
    v47 = *(_DWORD *)(v37 + 28) + 1;
    *(_DWORD *)(v37 + 24) = 0;
    *(_DWORD *)(v37 + 28) = v47;
    if ( v46 >= 1 )
      System_Array__Clear(*(System_Array_o **)(v37 + 16), 0, v46, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v54,
    (const MethodInfo_35AA434 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_3452678 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___Clear__);
  return 1;
}


void ServantSkillAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6D21 & 1) == 0 )
  {
    sub_1C6BA08(&ServantSkillAddMaster___c_TypeInfo);
    byte_4CB6D21 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ServantSkillAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSkillAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillAddMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ServantSkillAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantSkillAddMaster___c___ctor(ServantSkillAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantSkillAddMaster___c___preProcess_b__2_0(
        ServantSkillAddMaster___c_o *this,
        ServantSkillAddEntity_o *a,
        ServantSkillAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C6BC60(this, a);
  return b->fields.priority - a->fields.priority;
}