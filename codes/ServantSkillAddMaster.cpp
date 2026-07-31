void ServantSkillAddMaster___ctor(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5939134 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity_____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TypeInfo);
    byte_5939134 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    546,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string___ctor__);
}


void ServantSkillAddMaster__Clear(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *listCache; // x0

  if ( (byte_5939130 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
    byte_5939130 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_3EE0B04 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__Clear__);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_21FFECC(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
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

  if ( (byte_5939133 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5939133 = 1;
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
          sub_21FFED4(EntityListFromSvtId);
        v20 = v18->m_Items[i];
        if ( !v20 )
          sub_21FFECC(EntityListFromSvtId, v16);
        EntityListFromSvtId = (ServantSkillAddEntity_array *)System_Linq_Enumerable__Contains_int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v20->fields.skillIds,
                                                               baseSkillId,
                                                               (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
        {
          if ( !isMine )
          {
            condLimitCount = v20->fields.condLimitCount;
LABEL_19:
            if ( condLimitCount <= limitCount )
              return v20;
            goto LABEL_20;
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
            if ( condLimitCount <= originalLimitCount && (_DWORD)EntityListFromSvtId == 1 )
              return v20;
            goto LABEL_19;
          }
        }
LABEL_20:
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

  if ( (byte_5939135 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__GetEntity__);
    byte_5939135 = 1;
  }
  PK = (Il2CppObject *)ServantSkillAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillAddEntity_array *ServantSkillAddMaster__GetEntityListFromSvtId(
        ServantSkillAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939132 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TryGetValue__);
    byte_5939132 = 1;
  }
  listCache = this->fields.listCache;
  value = 0;
  if ( !listCache )
    sub_21FFECC(0, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____TryGetValue__);
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

  if ( (byte_5939136 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__TryGetEntity__);
    byte_5939136 = 1;
  }
  PK = (Il2CppObject *)ServantSkillAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantSkillAddMaster__ServantSkillAddEntity__string__TryGetEntity__);
}


bool ServantSkillAddMaster__preProcess(ServantSkillAddMaster_o *this, const MethodInfo *method)
{
  __int64 listCache; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *v7; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__o *v12; // x21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x21
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_object__o *v27; // x22
  int32_t v28; // w1
  System_Collections_Generic_List_object__o *v29; // x0
  Il2CppClass *v30; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  void **v33; // x8
  ServantSkillAddMaster_o *v34; // x24
  System_Collections_Generic_IEnumerator_T__o *v35; // x22
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  const MethodInfo_436A3AC *v40; // x4
  __int64 v41; // x1
  ServantSkillAddMaster___c_c *v42; // x0
  int32_t v43; // w22
  __int64 v44; // x21
  struct ServantSkillAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v47; // x24
  struct ServantSkillAddMaster___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_Dictionary_int__object__o *v55; // x23
  System_Object_array *v56; // x0
  __int64 v57; // x1
  int32_t v58; // w2
  int v59; // w8
  ServantSkillAddMaster_o *v61; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+8h] [xbp-E8h] BYREF
  int32_t key[3]; // [xsp+30h] [xbp-C0h] BYREF
  int32_t v64; // [xsp+3Ch] [xbp-B4h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v66; // [xsp+50h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+80h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v68; // [xsp+88h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v69; // 0:x0.16

  if ( (byte_5939131 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantSkillAddEntity__GetEnumerator__);
    sub_21FFC50(&System_Comparison_ServantSkillAddEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___get_Current__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillAddEntity___Deconstruct__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillAddEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillAddEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillAddEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantSkillAddEntity__TypeInfo);
    sub_21FFC50(&Method_ServantSkillAddMaster___c__preProcess_b__2_0__);
    sub_21FFC50(&ServantSkillAddMaster___c_TypeInfo);
    byte_5939131 = 1;
  }
  listCache = (__int64)this->fields.listCache;
  value = 0;
  v68 = 0;
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v64 = 0;
  memset(&v66, 0, sizeof(v66));
  *(_QWORD *)key = 0;
  if ( !listCache )
    goto LABEL_60;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity____ctor__);
  listCache = (__int64)this->fields.list;
  v61 = this;
  if ( !listCache )
    goto LABEL_60;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ServantSkillAddEntity__GetEnumerator__);
  v68 = Enumerator;
  v62.fields._dictionary = 0;
  *(_QWORD *)&v62.fields._version = &v68;
  if ( !Enumerator )
LABEL_31:
    sub_21FFECC(Enumerator, v6);
  v7 = Enumerator;
  while ( 1 )
  {
    klass = v7->klass;
    v9 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_2237E2C(v7, System_Collections_IEnumerator_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
                  v7,
                  *(_QWORD *)(v11 + 8));
    if ( (listCache & 1) == 0 )
      break;
    v12 = v68;
    if ( !v68 )
      sub_21FFECC(listCache, method);
    v13 = v68->klass;
    v14 = *(unsigned __int16 *)&v68->klass->_2.rank;
    if ( *(_WORD *)&v68->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantSkillAddEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_19:
      v16 = sub_2237E2C(v68, System_Collections_Generic_IEnumerator_ServantSkillAddEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v12,
            *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      sub_21FFECC(0, v18);
    if ( !v4 )
      sub_21FFECC(v17, v18);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v4,
            *(_DWORD *)(v17 + 16),
            &value,
            (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___TryGetValue__) )
    {
      v27 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantSkillAddEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v27,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantSkillAddEntity___ctor__);
      v28 = *(_DWORD *)(v19 + 16);
      value = (Il2CppObject *)v27;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v4,
        v28,
        (Il2CppObject *)v27,
        (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___set_Item__);
    }
    v29 = (System_Collections_Generic_List_object__o *)value;
    if ( !value
      || (v30 = value[1].klass,
          v31 = Method_System_Collections_Generic_List_ServantSkillAddEntity__Add__,
          ++HIDWORD(value[1].monitor),
          !v30) )
    {
      sub_21FFECC(v29, v20);
    }
    size = v29->fields._size;
    if ( (unsigned int)size >= LODWORD(v30->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v29,
        (Il2CppObject *)v19,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &v30->_1.image + size;
      v29->fields._size = size + 1;
      v33[4] = (void *)v19;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), v19, v21, v22, v23, v24, v25, v26);
    }
    v7 = v68;
    if ( !v68 )
      goto LABEL_31;
  }
  v34 = v61;
  v35 = v68;
  if ( v68 )
  {
    v36 = v68->klass;
    v37 = *(unsigned __int16 *)&v68->klass->_2.rank;
    if ( *(_WORD *)&v68->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_37;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_37:
      v39 = sub_2237E2C(v68, System_IDisposable_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                  v35,
                  *(_QWORD *)(v39 + 8));
  }
  if ( !v4 )
LABEL_60:
    sub_21FFECC(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v62,
    v4,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___GetEnumerator__);
  v66 = v62;
  v62.fields._dictionary = 0;
  *(_QWORD *)&v62.fields._version = &v66;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v66,
            (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___MoveNext__) )
  {
    current = v66.fields._current;
    *(_QWORD *)&v69.fields.key = &current;
    v69.fields.value = (Il2CppObject *)&v64;
    System_Collections_Generic_KeyValuePair_int__object___Deconstruct(
      v69,
      key,
      (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillAddEntity___Deconstruct__,
      v40);
    v42 = ServantSkillAddMaster___c_TypeInfo;
    v43 = v64;
    v44 = *(_QWORD *)key;
    if ( !*(&ServantSkillAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillAddMaster___c_TypeInfo, v41);
      v42 = ServantSkillAddMaster___c_TypeInfo;
    }
    static_fields = v42->static_fields;
    _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !*(&v42->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v42, v41);
        static_fields = ServantSkillAddMaster___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantSkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v47, Method_ServantSkillAddMaster___c__preProcess_b__2_0__, 0);
      v48 = ServantSkillAddMaster___c_TypeInfo->static_fields;
      v48->__9__2_0 = (struct System_Comparison_ServantSkillAddEntity__o *)_9__2_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v48->__9__2_0, (int32_t)_9__2_0, v49, v50, v51, v52, v53, v54);
      v34 = v61;
    }
    if ( !v44 )
      sub_21FFECC(v42, v41);
    System_Collections_Generic_List_object___Sort_71636404(
      (System_Collections_Generic_List_object__o *)v44,
      _9__2_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantSkillAddEntity__Sort__);
    v55 = (System_Collections_Generic_Dictionary_int__object__o *)v34->fields.listCache;
    v56 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v44,
            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantSkillAddEntity__ToArray__);
    if ( !v55 )
      sub_21FFECC(v56, v57);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v55,
      v43,
      &v56->obj,
      (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__ServantSkillAddEntity____set_Item__);
    v58 = *(_DWORD *)(v44 + 24);
    v59 = *(_DWORD *)(v44 + 28) + 1;
    *(_DWORD *)(v44 + 24) = 0;
    *(_DWORD *)(v44 + 28) = v59;
    if ( v58 >= 1 )
      System_Array__Clear(*(System_Array_o **)(v44 + 16), 0, v58, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v66,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillAddEntity___Clear__);
  return 1;
}


void ServantSkillAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939137 & 1) == 0 )
  {
    sub_21FFC50(&ServantSkillAddMaster___c_TypeInfo);
    byte_5939137 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantSkillAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSkillAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantSkillAddMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantSkillAddMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}