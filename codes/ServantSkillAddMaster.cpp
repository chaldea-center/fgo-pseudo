void __fastcall ServantSkillAddMaster___ctor(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4EE5C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity_____ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TypeInfo, v4);
    byte_4A4EE5C = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *)v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    544,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string___ctor__);
}


void __fastcall ServantSkillAddMaster__Clear(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *listCache; // x0

  if ( (byte_4A4EE58 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__Clear__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__, v3);
    byte_4A4EE58 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_32176F0 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__Clear__);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1B86614(0LL, v4);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_326D8EC *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillAddEntity_o *__fastcall ServantSkillAddMaster__GetEnableEntity(
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

  if ( (byte_4A4EE5B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&svtId);
    byte_4A4EE5B = 1;
  }
  EntityListFromSvtId = ServantSkillAddMaster__GetEntityListFromSvtId(this, svtId, *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    max_length = EntityListFromSvtId->max_length;
    v18 = EntityListFromSvtId;
    if ( max_length >= 1 )
    {
      for ( i = 0LL; (int)i < max_length; ++i )
      {
        if ( (unsigned int)i >= max_length )
          sub_1B8661C(EntityListFromSvtId, v16);
        v20 = v18->m_Items[i];
        if ( !v20 )
          sub_1B86614(EntityListFromSvtId, v16);
        EntityListFromSvtId = (ServantSkillAddEntity_array *)System_Linq_Enumerable__Contains_int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v20->fields.skillIds,
                                                               baseSkillId,
                                                               (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___);
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
                                                                       0LL),
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
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantSkillAddEntity_o *__fastcall ServantSkillAddMaster__GetEntity(
        ServantSkillAddMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4EE5D & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4A4EE5D = 1;
  }
  PK = (Il2CppObject *)ServantSkillAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3218D38 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillAddEntity_array *__fastcall ServantSkillAddMaster__GetEntityListFromSvtId(
        ServantSkillAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4EE5A & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TryGetValue__,
      *(_QWORD *)&svtId);
    byte_4A4EE5A = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1B86614(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_326EEF0 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TryGetValue__);
  return (ServantSkillAddEntity_array *)value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillAddMaster__TryGetEntity(
        ServantSkillAddMaster_o *this,
        ServantSkillAddEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A4EE5E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__TryGetEntity__, entity);
    byte_4A4EE5E = 1;
  }
  PK = (Il2CppObject *)ServantSkillAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__TryGetEntity__);
}


bool __fastcall ServantSkillAddMaster__preProcess(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_Dictionary_int__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__object__o *v28; // x20
  __int64 v29; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x22
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_object__o *v45; // x23
  System_Collections_Generic_List_object__o *v46; // x0
  Il2CppClass *v47; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  void **v50; // x8
  ServantSkillAddMaster_o *v51; // x24
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  const MethodInfo_353B504 *v56; // x4
  __int64 v57; // x0
  __int64 v58; // x1
  ServantSkillAddMaster___c_c *v59; // x8
  int32_t v60; // w22
  __int64 v61; // x21
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v63; // x24
  struct ServantSkillAddMaster___c_StaticFields *static_fields; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_Dictionary_int__object__o *v67; // x23
  System_Object_array *v68; // x0
  __int64 v69; // x1
  int32_t v70; // w2
  int v71; // w8
  ServantSkillAddMaster_o *v73; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v74; // [xsp+8h] [xbp-D8h] BYREF
  int32_t key[2]; // [xsp+30h] [xbp-B0h] BYREF
  int32_t v76; // [xsp+3Ch] [xbp-A4h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v78; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+78h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v80; // 0:x0.16

  if ( (byte_4A4EE59 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_ServantSkillAddEntity__GetEnumerator__, method);
    sub_1B863B8(&System_Comparison_ServantSkillAddEntity__TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___Clear__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TryGetValue__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity____ctor__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____set_Item__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___set_Item__, v10);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TypeInfo, v11);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___Dispose__,
      v12);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___MoveNext__,
      v13);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___get_Current__,
      v14);
    sub_1B863B8(&System_IDisposable_TypeInfo, v15);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo, v16);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillAddEntity___Deconstruct__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Add__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Clear__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Sort__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillAddEntity__ToArray__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillAddEntity___ctor__, v23);
    sub_1B863B8(&System_Collections_Generic_List_ServantSkillAddEntity__TypeInfo, v24);
    sub_1B863B8(&Method_ServantSkillAddMaster___c__preProcess_b__2_0__, v25);
    sub_1B863B8(&ServantSkillAddMaster___c_TypeInfo, v26);
    byte_4A4EE59 = 1;
  }
  value = 0LL;
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v76 = 0;
  memset(&v78, 0, sizeof(v78));
  *(_QWORD *)key = 0LL;
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_54;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_326D8EC *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
  v28 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v28,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_54;
  v73 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_31B0EE0 *)Method_System_Collections_ObjectModel_Collection_ServantSkillAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B86614(0LL, v29);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillAddEntity__c **)v37 - 1) != System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_17;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_17:
      v38 = sub_1BD6B4C(Enumerator, System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
            Enumerator,
            *(_QWORD *)(v38 + 8));
    v41 = v39;
    if ( !v39 )
      sub_1B86614(0LL, v40);
    if ( !v28 )
      sub_1B86614(v39, v40);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v28,
            *(_DWORD *)(v39 + 16),
            &value,
            (const MethodInfo_326EEF0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TryGetValue__) )
    {
      v45 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantSkillAddEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v45,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantSkillAddEntity___ctor__);
      value = (Il2CppObject *)v45;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v28,
        *(_DWORD *)(v41 + 16),
        (Il2CppObject *)v45,
        (const MethodInfo_326D750 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___set_Item__);
    }
    v46 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      sub_1B86614(0LL, v42);
    v47 = value[1].klass;
    v48 = Method_System_Collections_Generic_List_ServantSkillAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v47 )
      sub_1B86614(v46, v42);
    size = v46->fields._size;
    if ( (unsigned int)size >= LODWORD(v47->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v46,
        (Il2CppObject *)v41,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = &v47->_1.image + size;
      v46->fields._size = size + 1;
      v50[4] = (void *)v41;
      sub_1B8635C((CGThumbnailListItem_o *)(v50 + 4), v41, v43, v44);
    }
  }
  v51 = v73;
  v52 = Enumerator->klass;
  v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_32;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_32:
    v55 = sub_1BD6B4C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v55 + 8));
  if ( !v28 )
LABEL_54:
    sub_1B86614(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v74,
    v28,
    (const MethodInfo_326DB9C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___GetEnumerator__);
  v78 = v74;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v78,
            (const MethodInfo_33BBE28 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___MoveNext__) )
  {
    current = v78.fields._current;
    *(_QWORD *)&v80.fields.key = &current;
    v80.fields.value = (Il2CppObject *)&v76;
    System_Collections_Generic_KeyValuePair_int__object___Deconstruct(
      v80,
      key,
      (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillAddEntity___Deconstruct__,
      v56);
    v59 = ServantSkillAddMaster___c_TypeInfo;
    v60 = v76;
    v61 = *(_QWORD *)key;
    if ( !ServantSkillAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillAddMaster___c_TypeInfo);
      v59 = ServantSkillAddMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v59->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        v59 = ServantSkillAddMaster___c_TypeInfo;
      }
      v63 = (Il2CppObject *)v59->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_ServantSkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v63, Method_ServantSkillAddMaster___c__preProcess_b__2_0__, 0LL);
      static_fields = ServantSkillAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_ServantSkillAddEntity__o *)_9__2_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v65, v66);
      v51 = v73;
    }
    if ( !v61 )
      sub_1B86614(v57, v58);
    System_Collections_Generic_List_object___Sort_56615964(
      (System_Collections_Generic_List_object__o *)v61,
      _9__2_0,
      (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_ServantSkillAddEntity__Sort__);
    v67 = (System_Collections_Generic_Dictionary_int__object__o *)v51->fields.listCache;
    v68 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v61,
            (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_ServantSkillAddEntity__ToArray__);
    if ( !v67 )
      sub_1B86614(v68, v69);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v67,
      v60,
      &v68->obj,
      (const MethodInfo_326D750 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____set_Item__);
    v70 = *(_DWORD *)(v61 + 24);
    v71 = *(_DWORD *)(v61 + 28) + 1;
    *(_DWORD *)(v61 + 24) = 0;
    *(_DWORD *)(v61 + 28) = v71;
    if ( v70 >= 1 )
      System_Array__Clear(*(System_Array_o **)(v61 + 16), 0, v70, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v78,
    (const MethodInfo_33BBF4C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v28,
    (const MethodInfo_326D8EC *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___Clear__);
  return 1;
}


void __fastcall ServantSkillAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4EE5F & 1) == 0 )
  {
    sub_1B863B8(&ServantSkillAddMaster___c_TypeInfo, v1);
    byte_4A4EE5F = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(ServantSkillAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantSkillAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillAddMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)ServantSkillAddMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantSkillAddMaster___c___ctor(ServantSkillAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantSkillAddMaster___c___preProcess_b__2_0(
        ServantSkillAddMaster___c_o *this,
        ServantSkillAddEntity_o *a,
        ServantSkillAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}