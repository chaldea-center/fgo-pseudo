void ServantTreasureDeviceAddMaster___ctor(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597133A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
    byte_597133A = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    371,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
}


void ServantTreasureDeviceAddMaster__Clear(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0

  if ( (byte_5971335 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
    byte_5971335 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_3F142AC *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__Clear__);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_2213CDC(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
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
  il2cpp_array_size_t max_length; // x8
  ServantTreasureDeviceAddEntity_array *v16; // x23
  unsigned __int64 i; // x25
  ServantTreasureDeviceAddEntity_o *v18; // x24
  int32_t commonReleaseId; // w0
  int32_t condLimitCount; // w8
  bool v21; // zf

  if ( (byte_5971338 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5971338 = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    max_length = EntityListFromSvtId->max_length;
    v16 = EntityListFromSvtId;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_2213CE4(EntityListFromSvtId);
        v18 = v16->m_Items[i];
        if ( treasureDeviceId < 1 )
        {
          if ( !v18 )
LABEL_23:
            sub_2213CDC(EntityListFromSvtId, v14);
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
            v21 = condLimitCount <= originalLimitCount && (_DWORD)EntityListFromSvtId == 1;
            if ( v21 || condLimitCount <= limitCount )
              return v18;
          }
        }
        else
        {
          if ( !v18 )
            goto LABEL_23;
          if ( v18->fields.condLimitCount <= limitCount )
          {
            EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)System_Linq_Enumerable__Contains_int_(
                                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v18->fields.treasureDeviceIds,
                                                                            treasureDeviceId,
                                                                            (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
            if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
              return v18;
          }
        }
        LODWORD(max_length) = v16->max_length;
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

  if ( (byte_5971339 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971339 = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    v10 = EntityListFromSvtId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    max_length = v10->max_length;
    if ( (int)max_length >= 1 )
    {
      v14 = (CommonReleaseMaster_o *)Instance;
      v15 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= (unsigned int)max_length )
          sub_2213CE4(Instance);
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
      sub_2213CDC(Instance, v12);
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

  if ( (byte_597133B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
    byte_597133B = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDeviceAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_array *ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971337 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
    byte_5971337 = 1;
  }
  listCache = this->fields.listCache;
  value = 0;
  if ( !listCache )
    sub_2213CDC(0, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
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

  if ( (byte_597133C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
    byte_597133C = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
}


bool ServantTreasureDeviceAddMaster__preProcess(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
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
  int32_t *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t *v20; // x21
  __int64 naturalAligment; // x9
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_List_object__o *v29; // x22
  int32_t v30; // w1
  System_Collections_Generic_List_object__o *v31; // x0
  Il2CppClass *v32; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  void **v35; // x8
  ServantTreasureDeviceAddMaster_o *v36; // x24
  System_Collections_Generic_IEnumerator_T__o *v37; // x22
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  ServantTreasureDeviceAddMaster___c_c *v43; // x0
  int32_t key; // w22
  Il2CppObject *v45; // x21
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v48; // x24
  struct ServantTreasureDeviceAddMaster___c_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_Dictionary_int__object__o *v56; // x23
  System_Object_array *v57; // x0
  __int64 v58; // x1
  int32_t monitor; // w2
  int v60; // w8
  ServantTreasureDeviceAddMaster_o *v62; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v63; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v64; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+60h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v66; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_5971336 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceAddEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
    sub_2213A60(&ServantTreasureDeviceAddEntity_TypeInfo);
    sub_2213A60(&Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__);
    sub_2213A60(&ServantTreasureDeviceAddMaster___c_TypeInfo);
    byte_5971336 = 1;
  }
  listCache = (__int64)this->fields.listCache;
  value = 0;
  v66 = 0;
  memset(&v64, 0, sizeof(v64));
  if ( !listCache )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
  listCache = (__int64)this->fields.list;
  v62 = this;
  if ( !listCache )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceAddEntity__GetEnumerator__);
  v66 = Enumerator;
  v63.fields._dictionary = 0;
  *(_QWORD *)&v63.fields._version = &v66;
  if ( !Enumerator )
LABEL_33:
    sub_2213CDC(Enumerator, v6);
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
      v11 = sub_224BC3C(v7, System_Collections_IEnumerator_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
                  v7,
                  *(_QWORD *)(v11 + 8));
    if ( (listCache & 1) == 0 )
      break;
    v12 = v66;
    if ( !v66 )
      sub_2213CDC(listCache, method);
    v13 = v66->klass;
    v14 = *(unsigned __int16 *)&v66->klass->_2.rank;
    if ( *(_WORD *)&v66->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo )
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
      v16 = sub_224BC3C(v66, System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo, 0);
    }
    v17 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                       v12,
                       *(_QWORD *)(v16 + 8));
    v20 = v17;
    if ( !v17 )
      sub_2213CDC(0, v18);
    naturalAligment = ServantTreasureDeviceAddEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)naturalAligment
      || *(ServantTreasureDeviceAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * naturalAligment - 8) != ServantTreasureDeviceAddEntity_TypeInfo )
    {
      sub_221405C(v17, ServantTreasureDeviceAddEntity_TypeInfo, v19);
LABEL_57:
      sub_2213CDC(v31, v22);
    }
    if ( !v4 )
      sub_2213CDC(v17, ServantTreasureDeviceAddEntity_TypeInfo);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v4,
            v17[4],
            &value,
            (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__) )
    {
      v29 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v29,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
      v30 = v20[4];
      value = (Il2CppObject *)v29;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v4,
        v30,
        (Il2CppObject *)v29,
        (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    }
    v31 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_57;
    v32 = value[1].klass;
    v33 = Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v32 )
      goto LABEL_57;
    size = v31->fields._size;
    if ( (unsigned int)size >= LODWORD(v32->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        (Il2CppObject *)v20,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &v32->_1.image + size;
      v31->fields._size = size + 1;
      v35[4] = v20;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v20, v23, v24, v25, v26, v27, v28);
    }
    v7 = v66;
    if ( !v66 )
      goto LABEL_33;
  }
  v36 = v62;
  v37 = v66;
  if ( v66 )
  {
    v38 = v66->klass;
    v39 = *(unsigned __int16 *)&v66->klass->_2.rank;
    if ( *(_WORD *)&v66->klass->_2.rank )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_39;
      }
      v41 = (__int64)&v38->vtable[*v40];
    }
    else
    {
LABEL_39:
      v41 = sub_224BC3C(v66, System_IDisposable_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                  v37,
                  *(_QWORD *)(v41 + 8));
  }
  if ( !v4 )
LABEL_63:
    sub_2213CDC(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v63,
    v4,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
  v64 = v63;
  v63.fields._dictionary = 0;
  *(_QWORD *)&v63.fields._version = &v64;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v64,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__) )
  {
    v43 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    key = (int32_t)v64.fields._current.fields.key;
    v45 = v64.fields._current.fields.value;
    if ( !*(&ServantTreasureDeviceAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDeviceAddMaster___c_TypeInfo, v42);
      v43 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    }
    static_fields = v43->static_fields;
    _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !*(&v43->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v43, v42);
        static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v48, Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__, 0);
      v49 = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      v49->__9__2_0 = (struct System_Comparison_ServantTreasureDeviceAddEntity__o *)_9__2_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->__9__2_0, (int32_t)_9__2_0, v50, v51, v52, v53, v54, v55);
      v36 = v62;
    }
    if ( !v45 )
      sub_2213CDC(v43, v42);
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)v45,
      _9__2_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    v56 = (System_Collections_Generic_Dictionary_int__object__o *)v36->fields.listCache;
    v57 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v45,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    if ( !v56 )
      sub_2213CDC(v57, v58);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v56,
      key,
      &v57->obj,
      (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    monitor = (int32_t)v45[1].monitor;
    v60 = HIDWORD(v45[1].monitor) + 1;
    LODWORD(v45[1].monitor) = 0;
    HIDWORD(v45[1].monitor) = v60;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v45[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v64,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
  return 1;
}


void ServantTreasureDeviceAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597133D & 1) == 0 )
  {
    sub_2213A60(&ServantTreasureDeviceAddMaster___c_TypeInfo);
    byte_597133D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantTreasureDeviceAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDeviceAddMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}