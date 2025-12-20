void ServantSkillAddMaster___ctor(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2D2D5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity_____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TypeInfo);
    byte_4D2D2D5 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    544,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string___ctor__);
}


void ServantSkillAddMaster__Clear(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *listCache; // x0

  if ( (byte_4D2D2D1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
    byte_4D2D2D1 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_345E930 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__Clear__);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C942F0(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
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

  if ( (byte_4D2D2D4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2D2D4 = 1;
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
          sub_1C942F8(EntityListFromSvtId);
        v20 = v18->m_Items[i];
        if ( !v20 )
          sub_1C942F0(EntityListFromSvtId, v16);
        EntityListFromSvtId = (ServantSkillAddEntity_array *)System_Linq_Enumerable__Contains_int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v20->fields.skillIds,
                                                               baseSkillId,
                                                               (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_4D2D2D6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__GetEntity__);
    byte_4D2D2D6 = 1;
  }
  PK = (Il2CppObject *)ServantSkillAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_345FF78 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillAddEntity_array *ServantSkillAddMaster__GetEntityListFromSvtId(
        ServantSkillAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2D2D3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TryGetValue__);
    byte_4D2D2D3 = 1;
  }
  value = 0;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C942F0(0, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TryGetValue__);
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

  if ( (byte_4D2D2D7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__TryGetEntity__);
    byte_4D2D2D7 = 1;
  }
  PK = (Il2CppObject *)ServantSkillAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__TryGetEntity__);
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x23
  System_Collections_Generic_List_object__o *v26; // x0
  Il2CppClass *v27; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  void **v30; // x8
  ServantSkillAddMaster_o *v31; // x24
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  const MethodInfo_37C5BEC *v36; // x4
  __int64 v37; // x0
  __int64 v38; // x1
  ServantSkillAddMaster___c_c *v39; // x8
  int32_t v40; // w22
  __int64 v41; // x21
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v43; // x24
  struct ServantSkillAddMaster___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_Dictionary_int__object__o *v51; // x23
  System_Object_array *v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int v55; // w8
  ServantSkillAddMaster_o *v57; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+8h] [xbp-D8h] BYREF
  int32_t key[3]; // [xsp+30h] [xbp-B0h] BYREF
  int32_t v60; // [xsp+3Ch] [xbp-A4h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+78h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v64; // 0:x0.16

  if ( (byte_4D2D2D2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ServantSkillAddEntity__GetEnumerator__);
    sub_1C94098(&System_Comparison_ServantSkillAddEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____set_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___set_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___get_Current__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillAddEntity___Deconstruct__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillAddEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillAddEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ServantSkillAddEntity__TypeInfo);
    sub_1C94098(&Method_ServantSkillAddMaster___c__preProcess_b__2_0__);
    sub_1C94098(&ServantSkillAddMaster___c_TypeInfo);
    byte_4D2D2D2 = 1;
  }
  value = 0;
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v60 = 0;
  memset(&v62, 0, sizeof(v62));
  *(_QWORD *)key = 0;
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_54;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_54;
  v57 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_ServantSkillAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v5);
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
      v10 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v14 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( !v15 )
      sub_1C942F0(0, v16);
    if ( !v4 )
      sub_1C942F0(v15, v16);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v4,
            *(_DWORD *)(v15 + 16),
            &value,
            (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TryGetValue__) )
    {
      v25 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantSkillAddEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v25,
        (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantSkillAddEntity___ctor__);
      value = (Il2CppObject *)v25;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v4,
        *(_DWORD *)(v17 + 16),
        (Il2CppObject *)v25,
        (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___set_Item__);
    }
    v26 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      sub_1C942F0(0, v18);
    v27 = value[1].klass;
    v28 = Method_System_Collections_Generic_List_ServantSkillAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v27 )
      sub_1C942F0(v26, v18);
    size = v26->fields._size;
    if ( (unsigned int)size >= LODWORD(v27->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)v17,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &v27->_1.image + size;
      v26->fields._size = size + 1;
      v30[4] = (void *)v17;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 4), v17, v19, v20, v21, v22, v23, v24);
    }
  }
  v31 = v57;
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_32;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_32:
    v35 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v35 + 8));
  if ( !v4 )
LABEL_54:
    sub_1C942F0(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v58,
    v4,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___GetEnumerator__);
  v62 = v58;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v62,
            (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___MoveNext__) )
  {
    current = v62.fields._current;
    *(_QWORD *)&v64.fields.key = &current;
    v64.fields.value = (Il2CppObject *)&v60;
    System_Collections_Generic_KeyValuePair_int__object___Deconstruct(
      v64,
      key,
      (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillAddEntity___Deconstruct__,
      v36);
    v39 = ServantSkillAddMaster___c_TypeInfo;
    v40 = v60;
    v41 = *(_QWORD *)key;
    if ( !ServantSkillAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillAddMaster___c_TypeInfo);
      v39 = ServantSkillAddMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v39->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = ServantSkillAddMaster___c_TypeInfo;
      }
      v43 = (Il2CppObject *)v39->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_ServantSkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v43, Method_ServantSkillAddMaster___c__preProcess_b__2_0__, 0);
      static_fields = ServantSkillAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_ServantSkillAddEntity__o *)_9__2_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0,
        (int32_t)_9__2_0,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      v31 = v57;
    }
    if ( !v41 )
      sub_1C942F0(v37, v38);
    System_Collections_Generic_List_object___Sort_59164920(
      (System_Collections_Generic_List_object__o *)v41,
      _9__2_0,
      (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_ServantSkillAddEntity__Sort__);
    v51 = (System_Collections_Generic_Dictionary_int__object__o *)v31->fields.listCache;
    v52 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v41,
            (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_ServantSkillAddEntity__ToArray__);
    if ( !v51 )
      sub_1C942F0(v52, v53);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v51,
      v40,
      &v52->obj,
      (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____set_Item__);
    v54 = *(_DWORD *)(v41 + 24);
    v55 = *(_DWORD *)(v41 + 28) + 1;
    *(_DWORD *)(v41 + 24) = 0;
    *(_DWORD *)(v41 + 28) = v55;
    if ( v54 >= 1 )
      System_Array__Clear(*(System_Array_o **)(v41 + 16), 0, v54, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v62,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___Clear__);
  return 1;
}


void ServantSkillAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D2D8 & 1) == 0 )
  {
    sub_1C94098(&ServantSkillAddMaster___c_TypeInfo);
    byte_4D2D2D8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ServantSkillAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSkillAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillAddMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantSkillAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C942F0(this, a);
  return b->fields.priority - a->fields.priority;
}