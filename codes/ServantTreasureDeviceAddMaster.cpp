void __fastcall ServantTreasureDeviceAddMaster___ctor(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C22904 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__,
      method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo, v4);
    byte_4C22904 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *)v5;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    369,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
}


void __fastcall ServantTreasureDeviceAddMaster__Clear(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0

  if ( (byte_4C228FF & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__Clear__,
      method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__, v3);
    byte_4C228FF = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_329E2B8 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__Clear__);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C3B9C0(0LL, v4);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_32F4D24 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_o *__fastcall ServantTreasureDeviceAddMaster__GetEnableEntity(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDeviceId,
        int32_t originalLimitCount,
        const MethodInfo *method)
{
  ServantTreasureDeviceAddEntity_array *EntityListFromSvtId; // x0
  const MethodInfo *v12; // x1
  int max_length; // w8
  ServantTreasureDeviceAddEntity_array *v14; // x22
  __int64 i; // x24
  ServantTreasureDeviceAddEntity_o *v16; // x23
  int32_t condLimitCount; // w8

  if ( (byte_4C22902 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&svtId);
    byte_4C22902 = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    max_length = EntityListFromSvtId->max_length;
    v14 = EntityListFromSvtId;
    if ( max_length >= 1 )
    {
      for ( i = 0LL; (int)i < max_length; ++i )
      {
        if ( (unsigned int)i >= max_length )
          sub_1C3B9C8(EntityListFromSvtId, v12);
        v16 = v14->m_Items[i];
        if ( !v16 )
          sub_1C3B9C0(EntityListFromSvtId, v12);
        if ( treasureDeviceId < 1 )
        {
          EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)ServantTreasureDeviceAddEntity__IsEnable(
                                                                          v14->m_Items[i],
                                                                          v12);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)ServantTreasureDeviceAddEntity__GetCondIgnoreSealedLimitCount(
                                                                            v16,
                                                                            v12);
            condLimitCount = v16->fields.condLimitCount;
            if ( (_DWORD)EntityListFromSvtId == 1 && condLimitCount <= originalLimitCount
              || condLimitCount <= limitCount )
            {
              return v16;
            }
          }
        }
        else if ( v16->fields.condLimitCount <= limitCount )
        {
          EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)System_Linq_Enumerable__Contains_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v16->fields.treasureDeviceIds,
                                                                          treasureDeviceId,
                                                                          (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
            return v16;
        }
        max_length = v14->max_length;
      }
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_o *__fastcall ServantTreasureDeviceAddMaster__GetEnableEntityBeforeClearQuest(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  ServantTreasureDeviceAddEntity_array *EntityListFromSvtId; // x0
  ServantTreasureDeviceAddEntity_array *v11; // x21
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  CommonReleaseMaster_o *v15; // x22
  __int64 v16; // x24
  ServantTreasureDeviceAddEntity_o *v17; // x23

  if ( (byte_4C22903 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C22903 = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    v11 = EntityListFromSvtId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    v14 = *(_QWORD *)&v11->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = (CommonReleaseMaster_o *)Instance;
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= (unsigned int)v14 )
          sub_1C3B9C8(Instance, v13);
        v17 = v11->m_Items[v16];
        if ( !v17 )
          break;
        if ( v17->fields.condLimitCount <= limitCount )
        {
          if ( !v15 )
            break;
          Instance = (Il2CppObject *)CommonReleaseMaster__IsQuestContain(
                                       v15,
                                       beforeClearQuestId,
                                       v17->fields.commonReleaseId,
                                       0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return v17;
          v14 = *(_QWORD *)&v11->max_length;
        }
        if ( (int)++v16 >= (int)v14 )
          return 0LL;
      }
LABEL_16:
      sub_1C3B9C0(Instance, v13);
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_o *__fastcall ServantTreasureDeviceAddMaster__GetEntity(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22905 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4C22905 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDeviceAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_329F900 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_array *__fastcall ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C22901 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__,
      *(_QWORD *)&svtId);
    byte_4C22901 = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C3B9C0(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
  return (ServantTreasureDeviceAddEntity_array *)value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTreasureDeviceAddMaster__TryGetEntity(
        ServantTreasureDeviceAddMaster_o *this,
        ServantTreasureDeviceAddEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C22906 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__,
      entity);
    byte_4C22906 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
}


bool __fastcall ServantTreasureDeviceAddMaster__preProcess(
        ServantTreasureDeviceAddMaster_o *this,
        const MethodInfo *method)
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
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_int__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  int32_t *v41; // x0
  __int64 v42; // x1
  int64_t v43; // x22
  __int64 methodPtr_low; // x9
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_List_object__o *v52; // x23
  System_Collections_Generic_List_object__o *v53; // x0
  Il2CppClass *v54; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  void **v57; // x8
  ServantTreasureDeviceAddMaster_o *v58; // x24
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  _BOOL8 v63; // x0
  __int64 v64; // x1
  ServantTreasureDeviceAddMaster___c_c *v65; // x8
  int32_t key; // w22
  Il2CppObject *v67; // x21
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v69; // x24
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_Dictionary_int__object__o *v77; // x23
  System_Object_array *v78; // x0
  __int64 v79; // x1
  int32_t monitor; // w2
  int v81; // w8
  ServantTreasureDeviceAddMaster_o *v83; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v84; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v85; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C22900 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceAddEntity__GetEnumerator__,
      method);
    sub_1C3B764(&System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__, v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__,
      v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__,
      v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__, v9);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__,
      v10);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo, v11);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__,
      v12);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__,
      v13);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___get_Current__,
      v14);
    sub_1C3B764(&System_IDisposable_TypeInfo, v15);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo, v16);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1C3B764(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Key__,
      v18);
    sub_1C3B764(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Value__,
      v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__, v24);
    sub_1C3B764(&System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo, v25);
    sub_1C3B764(&ServantTreasureDeviceAddEntity_TypeInfo, v26);
    sub_1C3B764(&Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__, v27);
    sub_1C3B764(&ServantTreasureDeviceAddMaster___c_TypeInfo, v28);
    byte_4C22900 = 1;
  }
  value = 0LL;
  memset(&v85, 0, sizeof(v85));
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_32F4D24 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v83 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_17;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_17:
      v40 = sub_1C8D744(
              Enumerator,
              System_Collections_Generic_IEnumerator_ServantTreasureDeviceAddEntity__TypeInfo,
              0LL);
    }
    v41 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                       Enumerator,
                       *(_QWORD *)(v40 + 8));
    v43 = (int64_t)v41;
    if ( !v41 )
      sub_1C3B9C0(0LL, v42);
    methodPtr_low = LOBYTE(ServantTreasureDeviceAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantTreasureDeviceAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDeviceAddEntity_TypeInfo )
    {
      sub_1C3BC80(v41);
LABEL_51:
      sub_1C3B9C0(v53, v45);
    }
    if ( !v30 )
      sub_1C3B9C0(v41, ServantTreasureDeviceAddEntity_TypeInfo);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v30,
            v41[4],
            &value,
            (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__) )
    {
      v52 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
      value = (Il2CppObject *)v52;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v30,
        *(_DWORD *)(v43 + 16),
        (Il2CppObject *)v52,
        (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    }
    v53 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v54 = value[1].klass;
    v55 = Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v54 )
      sub_1C3B9C0(v53, v45);
    size = v53->fields._size;
    if ( (unsigned int)size >= LODWORD(v54->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v53,
        (Il2CppObject *)v43,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->_1.image + size;
      v53->fields._size = size + 1;
      v57[4] = (void *)v43;
      sub_1C3B708((PartyOrganizationUtility_o *)(v57 + 4), v43, v46, v47, v48, v49, v50, v51);
    }
  }
  v58 = v83;
  v59 = Enumerator->klass;
  v60 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v61 = &v59->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_34;
    }
    v62 = (__int64)&v59->vtable[*v61].method;
  }
  else
  {
LABEL_34:
    v62 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v62 + 8));
  if ( !v30 )
LABEL_57:
    sub_1C3B9C0(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v84,
    v30,
    (const MethodInfo_32F4FD4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
  v85 = v84;
  while ( 1 )
  {
    v63 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v85,
            (const MethodInfo_3443968 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__);
    if ( !v63 )
      break;
    v65 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    key = (int32_t)v85.fields._current.fields.key;
    v67 = v85.fields._current.fields.value;
    if ( !ServantTreasureDeviceAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDeviceAddMaster___c_TypeInfo);
      v65 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v65->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        v65 = ServantTreasureDeviceAddMaster___c_TypeInfo;
      }
      v69 = (Il2CppObject *)v65->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__2_0,
        v69,
        Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__,
        0LL);
      static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_ServantTreasureDeviceAddEntity__o *)_9__2_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__2_0,
        (int64_t)_9__2_0,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      v58 = v83;
    }
    if ( !v67 )
      sub_1C3B9C0(v63, v64);
    System_Collections_Generic_List_object___Sort_57202480(
      (System_Collections_Generic_List_object__o *)v67,
      _9__2_0,
      (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    v77 = (System_Collections_Generic_Dictionary_int__object__o *)v58->fields.listCache;
    v78 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v67,
            (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    if ( !v77 )
      sub_1C3B9C0(v78, v79);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v77,
      key,
      &v78->obj,
      (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    monitor = (int32_t)v67[1].monitor;
    v81 = HIDWORD(v67[1].monitor) + 1;
    LODWORD(v67[1].monitor) = 0;
    HIDWORD(v67[1].monitor) = v81;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v67[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v85,
    (const MethodInfo_3443A8C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v30,
    (const MethodInfo_32F4D24 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDeviceAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C22907 & 1) == 0 )
  {
    sub_1C3B764(&ServantTreasureDeviceAddMaster___c_TypeInfo, v1);
    byte_4C22907 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ServantTreasureDeviceAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDeviceAddMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall ServantTreasureDeviceAddMaster___c___ctor(
        ServantTreasureDeviceAddMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantTreasureDeviceAddMaster___c___preProcess_b__2_0(
        ServantTreasureDeviceAddMaster___c_o *this,
        ServantTreasureDeviceAddEntity_o *a,
        ServantTreasureDeviceAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3B9C0(this, a);
  return b->fields.priority - a->fields.priority;
}