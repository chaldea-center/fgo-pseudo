void ServantSkillAddMaster___ctor(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C439FD & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity_____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TypeInfo);
    byte_4C439FD = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    544,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string___ctor__);
}


void ServantSkillAddMaster__Clear(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *listCache; // x0

  if ( (byte_4C439F9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
    byte_4C439F9 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_33A4510 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__Clear__);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
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
  int max_length; // w8
  ServantSkillAddEntity_array *v17; // x24
  __int64 i; // x26
  ServantSkillAddEntity_o *v19; // x25
  const MethodInfo *v20; // x1
  int32_t commonReleaseId; // w0
  int32_t condLimitCount; // w8

  if ( (byte_4C439FC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C439FC = 1;
  }
  EntityListFromSvtId = ServantSkillAddMaster__GetEntityListFromSvtId(this, svtId, *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    max_length = EntityListFromSvtId->max_length;
    v17 = EntityListFromSvtId;
    if ( max_length >= 1 )
    {
      for ( i = 0; (int)i < max_length; ++i )
      {
        if ( (unsigned int)i >= max_length )
          sub_1C372BC(EntityListFromSvtId);
        v19 = v17->m_Items[i];
        if ( !v19 )
          sub_1C372B4(EntityListFromSvtId);
        EntityListFromSvtId = (ServantSkillAddEntity_array *)System_Linq_Enumerable__Contains_int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v19->fields.skillIds,
                                                               baseSkillId,
                                                               (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
        {
          if ( !isMine )
          {
            condLimitCount = v19->fields.condLimitCount;
            goto LABEL_15;
          }
          commonReleaseId = v19->fields.commonReleaseId;
          if ( !commonReleaseId
            || (EntityListFromSvtId = (ServantSkillAddEntity_array *)CommonReleaseExtension__IsOpenConsiderEquippedWithTargetCostume(
                                                                       commonReleaseId,
                                                                       v19->fields.svtId,
                                                                       dispLimitCount,
                                                                       0),
                ((unsigned __int8)EntityListFromSvtId & 1) != 0) )
          {
            EntityListFromSvtId = (ServantSkillAddEntity_array *)ServantSkillAddEntity__GetCondIgnoreSealedLimitCount(
                                                                   v19,
                                                                   v20);
            condLimitCount = v19->fields.condLimitCount;
            if ( (_DWORD)EntityListFromSvtId == 1 && condLimitCount <= originalLimitCount )
              return v19;
LABEL_15:
            if ( condLimitCount <= limitCount )
              return v19;
          }
        }
        max_length = v17->max_length;
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

  if ( (byte_4C439FE & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__GetEntity__);
    byte_4C439FE = 1;
  }
  PK = (Il2CppObject *)ServantSkillAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_33A5B58 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__GetEntity__);
}


ServantSkillAddEntity_array *ServantSkillAddMaster__GetEntityListFromSvtId(
        ServantSkillAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C439FB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TryGetValue__);
    byte_4C439FB = 1;
  }
  value = 0;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TryGetValue__);
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

  if ( (byte_4C439FF & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__TryGetEntity__);
    byte_4C439FF = 1;
  }
  PK = (Il2CppObject *)ServantSkillAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__TryGetEntity__);
}


bool ServantSkillAddMaster__preProcess(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x23
  System_Collections_Generic_List_object__o *v19; // x0
  Il2CppClass *v20; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  void **v23; // x8
  ServantSkillAddMaster_o *v24; // x24
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  const MethodInfo_36D97C4 *v29; // x4
  __int64 v30; // x0
  ServantSkillAddMaster___c_c *v31; // x8
  int32_t v32; // w22
  __int64 v33; // x21
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v35; // x24
  struct ServantSkillAddMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_Dictionary_int__object__o *v39; // x23
  System_Object_array *v40; // x0
  int32_t v41; // w2
  int v42; // w8
  ServantSkillAddMaster_o *v44; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+8h] [xbp-D8h] BYREF
  int32_t key[3]; // [xsp+30h] [xbp-B0h] BYREF
  int32_t v47; // [xsp+3Ch] [xbp-A4h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+78h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v51; // 0:x0.16

  if ( (byte_4C439FA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantSkillAddEntity__GetEnumerator__);
    sub_1C37058(&System_Comparison_ServantSkillAddEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___get_Current__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillAddEntity___Deconstruct__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantSkillAddEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantSkillAddEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantSkillAddEntity__TypeInfo);
    sub_1C37058(&Method_ServantSkillAddMaster___c__preProcess_b__2_0__);
    sub_1C37058(&ServantSkillAddMaster___c_TypeInfo);
    byte_4C439FA = 1;
  }
  value = 0;
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v47 = 0;
  memset(&v49, 0, sizeof(v49));
  *(_QWORD *)key = 0;
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_54;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_54;
  v44 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantSkillAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillAddEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_17:
      v13 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    v15 = v14;
    if ( !v14 )
      sub_1C372B4(0);
    if ( !v4 )
      sub_1C372B4(v14);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v4,
            *(_DWORD *)(v14 + 16),
            &value,
            (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TryGetValue__) )
    {
      v18 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantSkillAddEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v18,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantSkillAddEntity___ctor__);
      value = (Il2CppObject *)v18;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v4,
        *(_DWORD *)(v15 + 16),
        (Il2CppObject *)v18,
        (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___set_Item__);
    }
    v19 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      sub_1C372B4(0);
    v20 = value[1].klass;
    v21 = Method_System_Collections_Generic_List_ServantSkillAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v20 )
      sub_1C372B4(v19);
    size = v19->fields._size;
    if ( (unsigned int)size >= LODWORD(v20->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        (Il2CppObject *)v15,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &v20->_1.image + size;
      v19->fields._size = size + 1;
      v23[4] = (void *)v15;
      sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), v15, v16, v17);
    }
  }
  v24 = v44;
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_32;
    }
    v28 = (__int64)&v25->vtable[*v27];
  }
  else
  {
LABEL_32:
    v28 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v28 + 8));
  if ( !v4 )
LABEL_54:
    sub_1C372B4(listCache);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v45,
    v4,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___GetEnumerator__);
  v49 = v45;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v49,
            (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___MoveNext__) )
  {
    current = v49.fields._current;
    *(_QWORD *)&v51.fields.key = &current;
    v51.fields.value = (Il2CppObject *)&v47;
    System_Collections_Generic_KeyValuePair_int__object___Deconstruct(
      v51,
      key,
      (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillAddEntity___Deconstruct__,
      v29);
    v31 = ServantSkillAddMaster___c_TypeInfo;
    v32 = v47;
    v33 = *(_QWORD *)key;
    if ( !ServantSkillAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillAddMaster___c_TypeInfo);
      v31 = ServantSkillAddMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v31->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = ServantSkillAddMaster___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v31->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ServantSkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v35, Method_ServantSkillAddMaster___c__preProcess_b__2_0__, 0);
      static_fields = ServantSkillAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_ServantSkillAddEntity__o *)_9__2_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v37, v38);
      v24 = v44;
    }
    if ( !v33 )
      sub_1C372B4(v30);
    System_Collections_Generic_List_object___Sort_58346216(
      (System_Collections_Generic_List_object__o *)v33,
      _9__2_0,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ServantSkillAddEntity__Sort__);
    v39 = (System_Collections_Generic_Dictionary_int__object__o *)v24->fields.listCache;
    v40 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v33,
            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ServantSkillAddEntity__ToArray__);
    if ( !v39 )
      sub_1C372B4(v40);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v39,
      v32,
      &v40->obj,
      (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____set_Item__);
    v41 = *(_DWORD *)(v33 + 24);
    v42 = *(_DWORD *)(v33 + 28) + 1;
    *(_DWORD *)(v33 + 24) = 0;
    *(_DWORD *)(v33 + 28) = v42;
    if ( v41 >= 1 )
      System_Array__Clear(*(System_Array_o **)(v33 + 16), 0, v41, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v49,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___Clear__);
  return 1;
}


void ServantSkillAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43A00 & 1) == 0 )
  {
    sub_1C37058(&ServantSkillAddMaster___c_TypeInfo);
    byte_4C43A00 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantSkillAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSkillAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillAddMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantSkillAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}