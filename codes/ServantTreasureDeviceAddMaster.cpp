void ServantTreasureDeviceAddMaster___ctor(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2D315 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
    byte_4D2D315 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    369,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
}


void ServantTreasureDeviceAddMaster__Clear(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0

  if ( (byte_4D2D310 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
    byte_4D2D310 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_345E930 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__Clear__);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C942F0(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_o *ServantTreasureDeviceAddMaster__GetEnableEntity(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t treasureDeviceId,
        int32_t originalLimitCount,
        const MethodInfo *method)
{
  ServantTreasureDeviceAddEntity_array *EntityListFromSvtId; // x0
  const MethodInfo *v14; // x1
  int max_length; // w8
  ServantTreasureDeviceAddEntity_array *v16; // x23
  __int64 i; // x25
  ServantTreasureDeviceAddEntity_o *v18; // x24
  int32_t commonReleaseId; // w0
  int32_t condLimitCount; // w8

  if ( (byte_4D2D313 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2D313 = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    max_length = EntityListFromSvtId->max_length;
    v16 = EntityListFromSvtId;
    if ( max_length >= 1 )
    {
      for ( i = 0; (int)i < max_length; ++i )
      {
        if ( (unsigned int)i >= max_length )
          sub_1C942F8(EntityListFromSvtId);
        v18 = v16->m_Items[i];
        if ( !v18 )
          sub_1C942F0(EntityListFromSvtId, v14);
        if ( treasureDeviceId < 1 )
        {
          commonReleaseId = v18->fields.commonReleaseId;
          if ( !commonReleaseId
            || (EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)CommonReleaseExtension__IsOpenConsiderEquippedWithTargetCostume(
                                                                                commonReleaseId,
                                                                                v18->fields.svtId,
                                                                                dispLimitCount,
                                                                                0),
                ((unsigned __int8)EntityListFromSvtId & 1) != 0) )
          {
            EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)ServantTreasureDeviceAddEntity__GetCondIgnoreSealedLimitCount(
                                                                            v18,
                                                                            v14);
            condLimitCount = v18->fields.condLimitCount;
            if ( (_DWORD)EntityListFromSvtId == 1 && condLimitCount <= originalLimitCount
              || condLimitCount <= limitCount )
            {
              return v18;
            }
          }
        }
        else if ( v18->fields.condLimitCount <= limitCount )
        {
          EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)System_Linq_Enumerable__Contains_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v18->fields.treasureDeviceIds,
                                                                          treasureDeviceId,
                                                                          (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
            return v18;
        }
        max_length = v16->max_length;
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_o *ServantTreasureDeviceAddMaster__GetEnableEntityBeforeClearQuest(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  ServantTreasureDeviceAddEntity_array *EntityListFromSvtId; // x0
  ServantTreasureDeviceAddEntity_array *v10; // x21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  il2cpp_array_size_t max_length; // x8
  CommonReleaseMaster_o *v14; // x22
  __int64 v15; // x24
  ServantTreasureDeviceAddEntity_o *v16; // x23

  if ( (byte_4D2D314 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D314 = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    v10 = EntityListFromSvtId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    max_length = v10->max_length;
    if ( (int)max_length >= 1 )
    {
      v14 = (CommonReleaseMaster_o *)Instance;
      v15 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= (unsigned int)max_length )
          sub_1C942F8(Instance);
        v16 = v10->m_Items[v15];
        if ( !v16 )
          break;
        if ( v16->fields.condLimitCount <= limitCount )
        {
          if ( !v14 )
            break;
          Instance = (Il2CppObject *)CommonReleaseMaster__IsQuestContain(
                                       v14,
                                       beforeClearQuestId,
                                       v16->fields.commonReleaseId,
                                       0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return v16;
          max_length = v10->max_length;
        }
        if ( (int)++v15 >= (int)max_length )
          return 0;
      }
LABEL_16:
      sub_1C942F0(Instance, v12);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_o *ServantTreasureDeviceAddMaster__GetEntity(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D316 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
    byte_4D2D316 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDeviceAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_345FF78 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_array *ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2D312 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
    byte_4D2D312 = 1;
  }
  value = 0;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C942F0(0, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
  return (ServantTreasureDeviceAddEntity_array *)value;
}


// local variable allocation has failed, the output may be wrong!
bool ServantTreasureDeviceAddMaster__TryGetEntity(
        ServantTreasureDeviceAddMaster_o *this,
        ServantTreasureDeviceAddEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D317 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
    byte_4D2D317 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
}


bool ServantTreasureDeviceAddMaster__preProcess(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
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
  int32_t *v15; // x0
  __int64 v16; // x1
  int32_t *v17; // x22
  __int64 naturalAligment; // x9
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x23
  System_Collections_Generic_List_object__o *v27; // x0
  Il2CppClass *v28; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  void **v31; // x8
  ServantTreasureDeviceAddMaster_o *v32; // x24
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  ServantTreasureDeviceAddMaster___c_c *v39; // x8
  int32_t key; // w22
  Il2CppObject *v41; // x21
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v43; // x24
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_Dictionary_int__object__o *v51; // x23
  System_Object_array *v52; // x0
  __int64 v53; // x1
  int32_t monitor; // w2
  int v55; // w8
  ServantTreasureDeviceAddMaster_o *v57; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4D2D311 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceAddEntity__GetEnumerator__);
    sub_1C94098(&System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___get_Current__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Value__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_1C94098(&ServantTreasureDeviceAddEntity_TypeInfo);
    sub_1C94098(&Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__);
    sub_1C94098(&ServantTreasureDeviceAddMaster___c_TypeInfo);
    byte_4D2D311 = 1;
  }
  value = 0;
  memset(&v59, 0, sizeof(v59));
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v57 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceAddEntity__GetEnumerator__);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo )
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
      v14 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo, 0);
    }
    v15 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                       Enumerator,
                       *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( !v15 )
      sub_1C942F0(0, v16);
    naturalAligment = ServantTreasureDeviceAddEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)naturalAligment
      || *(ServantTreasureDeviceAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * naturalAligment - 8) != ServantTreasureDeviceAddEntity_TypeInfo )
    {
      sub_1C9468C(v15);
LABEL_51:
      sub_1C942F0(v27, v19);
    }
    if ( !v4 )
      sub_1C942F0(v15, ServantTreasureDeviceAddEntity_TypeInfo);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v4,
            v15[4],
            &value,
            (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__) )
    {
      v26 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
      value = (Il2CppObject *)v26;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v4,
        v17[4],
        (Il2CppObject *)v26,
        (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    }
    v27 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v28 = value[1].klass;
    v29 = Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v28 )
      sub_1C942F0(v27, v19);
    size = v27->fields._size;
    if ( (unsigned int)size >= LODWORD(v28->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        (Il2CppObject *)v17,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &v28->_1.image + size;
      v27->fields._size = size + 1;
      v31[4] = v17;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v17, v20, v21, v22, v23, v24, v25);
    }
  }
  v32 = v57;
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_34;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_34:
    v36 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v36 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C942F0(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v58,
    v4,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v37 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v59,
            (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__);
    if ( !v37 )
      break;
    v39 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    key = (int32_t)v59.fields._current.fields.key;
    v41 = v59.fields._current.fields.value;
    if ( !ServantTreasureDeviceAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDeviceAddMaster___c_TypeInfo);
      v39 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v39->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = ServantTreasureDeviceAddMaster___c_TypeInfo;
      }
      v43 = (Il2CppObject *)v39->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v43, Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__, 0);
      static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_ServantTreasureDeviceAddEntity__o *)_9__2_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0,
        (int32_t)_9__2_0,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      v32 = v57;
    }
    if ( !v41 )
      sub_1C942F0(v37, v38);
    System_Collections_Generic_List_object___Sort_59164920(
      (System_Collections_Generic_List_object__o *)v41,
      _9__2_0,
      (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    v51 = (System_Collections_Generic_Dictionary_int__object__o *)v32->fields.listCache;
    v52 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v41,
            (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    if ( !v51 )
      sub_1C942F0(v52, v53);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v51,
      key,
      &v52->obj,
      (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    monitor = (int32_t)v41[1].monitor;
    v55 = HIDWORD(v41[1].monitor) + 1;
    LODWORD(v41[1].monitor) = 0;
    HIDWORD(v41[1].monitor) = v55;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v41[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v59,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
  return 1;
}


void ServantTreasureDeviceAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D318 & 1) == 0 )
  {
    sub_1C94098(&ServantTreasureDeviceAddMaster___c_TypeInfo);
    byte_4D2D318 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ServantTreasureDeviceAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDeviceAddMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantTreasureDeviceAddMaster___c___ctor(ServantTreasureDeviceAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantTreasureDeviceAddMaster___c___preProcess_b__2_0(
        ServantTreasureDeviceAddMaster___c_o *this,
        ServantTreasureDeviceAddEntity_o *a,
        ServantTreasureDeviceAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C942F0(this, a);
  return b->fields.priority - a->fields.priority;
}