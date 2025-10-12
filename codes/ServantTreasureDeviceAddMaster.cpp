void ServantTreasureDeviceAddMaster___ctor(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C38442 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
    byte_4C38442 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    369,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
}


void ServantTreasureDeviceAddMaster__Clear(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0

  if ( (byte_4C3843D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
    byte_4C3843D = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_3399CA8 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__Clear__);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
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

  if ( (byte_4C38440 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C38440 = 1;
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
          sub_1C32E84(EntityListFromSvtId);
        v18 = v16->m_Items[i];
        if ( !v18 )
          sub_1C32E7C(EntityListFromSvtId);
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
                                                                          (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
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
  il2cpp_array_size_t max_length; // x8
  CommonReleaseMaster_o *v13; // x22
  __int64 v14; // x24
  ServantTreasureDeviceAddEntity_o *v15; // x23

  if ( (byte_4C38441 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38441 = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    v10 = EntityListFromSvtId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    max_length = v10->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = (CommonReleaseMaster_o *)Instance;
      v14 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= (unsigned int)max_length )
          sub_1C32E84(Instance);
        v15 = v10->m_Items[v14];
        if ( !v15 )
          break;
        if ( v15->fields.condLimitCount <= limitCount )
        {
          if ( !v13 )
            break;
          Instance = (Il2CppObject *)CommonReleaseMaster__IsQuestContain(
                                       v13,
                                       beforeClearQuestId,
                                       v15->fields.commonReleaseId,
                                       0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return v15;
          max_length = v10->max_length;
        }
        if ( (int)++v14 >= (int)max_length )
          return 0;
      }
LABEL_16:
      sub_1C32E7C(Instance);
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

  if ( (byte_4C38443 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
    byte_4C38443 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDeviceAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_339B2F0 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
}


ServantTreasureDeviceAddEntity_array *ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3843F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
    byte_4C3843F = 1;
  }
  value = 0;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
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

  if ( (byte_4C38444 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
    byte_4C38444 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
}


bool ServantTreasureDeviceAddMaster__preProcess(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
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
  int32_t *v14; // x0
  int32_t *v15; // x22
  __int64 naturalAligment; // x9
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x23
  System_Collections_Generic_List_object__o *v20; // x0
  Il2CppClass *v21; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  void **v24; // x8
  ServantTreasureDeviceAddMaster_o *v25; // x24
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  _BOOL8 v30; // x0
  ServantTreasureDeviceAddMaster___c_c *v31; // x8
  int32_t key; // w22
  Il2CppObject *v33; // x21
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v35; // x24
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_Dictionary_int__object__o *v39; // x23
  System_Object_array *v40; // x0
  int32_t monitor; // w2
  int v42; // w8
  ServantTreasureDeviceAddMaster_o *v44; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C3843E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceAddEntity__GetEnumerator__);
    sub_1C32C20(&System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___get_Current__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_1C32C20(&ServantTreasureDeviceAddEntity_TypeInfo);
    sub_1C32C20(&Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__);
    sub_1C32C20(&ServantTreasureDeviceAddMaster___c_TypeInfo);
    byte_4C3843E = 1;
  }
  value = 0;
  memset(&v46, 0, sizeof(v46));
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v44 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
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
      v9 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo )
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
      v13 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo, 0);
    }
    v14 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                       Enumerator,
                       *(_QWORD *)(v13 + 8));
    v15 = v14;
    if ( !v14 )
      sub_1C32E7C(0);
    naturalAligment = ServantTreasureDeviceAddEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) < (unsigned int)naturalAligment
      || *(ServantTreasureDeviceAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * naturalAligment - 8) != ServantTreasureDeviceAddEntity_TypeInfo )
    {
      sub_1C3313C(v14);
LABEL_51:
      sub_1C32E7C(v20);
    }
    if ( !v4 )
      sub_1C32E7C(v14);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v4,
            v14[4],
            &value,
            (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__) )
    {
      v19 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v19,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
      value = (Il2CppObject *)v19;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v4,
        v15[4],
        (Il2CppObject *)v19,
        (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    }
    v20 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v21 = value[1].klass;
    v22 = Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v21 )
      sub_1C32E7C(v20);
    size = v20->fields._size;
    if ( (unsigned int)size >= LODWORD(v21->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v15,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &v21->_1.image + size;
      v20->fields._size = size + 1;
      v24[4] = v15;
      sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v15, v17, v18);
    }
  }
  v25 = v44;
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_34;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_34:
    v29 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v29 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C32E7C(listCache);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v45,
    v4,
    (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v30 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v46,
            (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__);
    if ( !v30 )
      break;
    v31 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    key = (int32_t)v46.fields._current.fields.key;
    v33 = v46.fields._current.fields.value;
    if ( !ServantTreasureDeviceAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDeviceAddMaster___c_TypeInfo);
      v31 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v31->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = ServantTreasureDeviceAddMaster___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v31->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v35, Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__, 0);
      static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_ServantTreasureDeviceAddEntity__o *)_9__2_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v37, v38);
      v25 = v44;
    }
    if ( !v33 )
      sub_1C32E7C(v30);
    System_Collections_Generic_List_object___Sort_58303104(
      (System_Collections_Generic_List_object__o *)v33,
      _9__2_0,
      (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    v39 = (System_Collections_Generic_Dictionary_int__object__o *)v25->fields.listCache;
    v40 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v33,
            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    if ( !v39 )
      sub_1C32E7C(v40);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v39,
      key,
      &v40->obj,
      (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    monitor = (int32_t)v33[1].monitor;
    v42 = HIDWORD(v33[1].monitor) + 1;
    LODWORD(v33[1].monitor) = 0;
    HIDWORD(v33[1].monitor) = v42;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v33[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v46,
    (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
  return 1;
}


void ServantTreasureDeviceAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38445 & 1) == 0 )
  {
    sub_1C32C20(&ServantTreasureDeviceAddMaster___c_TypeInfo);
    byte_4C38445 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ServantTreasureDeviceAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDeviceAddMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}