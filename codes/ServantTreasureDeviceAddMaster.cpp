void __fastcall ServantTreasureDeviceAddMaster___ctor(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B16B2A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo, v7, v8);
    byte_4B16B2A = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    363,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
}


void __fastcall ServantTreasureDeviceAddMaster__Clear(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0

  if ( (byte_4B16B25 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__,
      method,
      v2);
    byte_4B16B25 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1BCAA3C(0LL, v4);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
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

  if ( (byte_4B16B28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    byte_4B16B28 = 1;
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
          sub_1BCAA44(EntityListFromSvtId, v12);
        v16 = v14->m_Items[i];
        if ( !v16 )
          sub_1BCAA3C(EntityListFromSvtId, v12);
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
                                                                          (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
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
  __int64 v10; // x2
  ServantTreasureDeviceAddEntity_array *EntityListFromSvtId; // x0
  ServantTreasureDeviceAddEntity_array *v12; // x21
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  CommonReleaseMaster_o *v16; // x22
  __int64 v17; // x24
  ServantTreasureDeviceAddEntity_o *v18; // x23

  if ( (byte_4B16B29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B16B29 = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    v12 = EntityListFromSvtId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    v15 = *(_QWORD *)&v12->max_length;
    if ( (int)v15 >= 1 )
    {
      v16 = (CommonReleaseMaster_o *)Instance;
      v17 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= (unsigned int)v15 )
          sub_1BCAA44(Instance, v14);
        v18 = v12->m_Items[v17];
        if ( !v18 )
          break;
        if ( v18->fields.condLimitCount <= limitCount )
        {
          if ( !v16 )
            break;
          Instance = (Il2CppObject *)CommonReleaseMaster__IsQuestContain(
                                       v16,
                                       beforeClearQuestId,
                                       v18->fields.commonReleaseId,
                                       0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return v18;
          v15 = *(_QWORD *)&v12->max_length;
        }
        if ( (int)++v17 >= (int)v15 )
          return 0LL;
      }
LABEL_16:
      sub_1BCAA3C(Instance, v14);
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

  if ( (byte_4B16B2B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    byte_4B16B2B = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDeviceAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_array *__fastcall ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16B27 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__,
      *(_QWORD *)&svtId,
      method);
    byte_4B16B27 = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1BCAA3C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
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

  if ( (byte_4B16B2C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16B2C = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
}


bool __fastcall ServantTreasureDeviceAddMaster__preProcess(
        ServantTreasureDeviceAddMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_Dictionary_int__object__o *listCache; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_Dictionary_int__object__o *v60; // x20
  __int64 v61; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  int32_t *v71; // x0
  __int64 v72; // x1
  int64_t v73; // x22
  __int64 methodPtr_low; // x9
  __int64 v75; // x1
  int64_t v76; // x2
  __int64 v77; // x3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_Collections_Generic_List_object__o *v82; // x23
  System_Collections_Generic_List_object__o *v83; // x0
  Il2CppClass *v84; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  void **v87; // x8
  ServantTreasureDeviceAddMaster_o *v88; // x24
  System_Collections_Generic_IEnumerator_T__c *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  _BOOL8 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  ServantTreasureDeviceAddMaster___c_c *v97; // x8
  int32_t key; // w22
  Il2CppObject *v99; // x21
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v101; // x24
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_Collections_Generic_Dictionary_int__object__o *v109; // x23
  System_Object_array *v110; // x0
  __int64 v111; // x1
  int32_t monitor; // w2
  int v113; // w8
  ServantTreasureDeviceAddMaster_o *v115; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v116; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v117; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B16B26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__, v6, v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__,
      v18,
      v19);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo, v20, v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___get_Current__,
      v26,
      v27);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v32, v33);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Key__,
      v34,
      v35);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Value__,
      v36,
      v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo, v48, v49);
    sub_1BCA7E0(&ServantTreasureDeviceAddEntity_TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__, v52, v53);
    sub_1BCA7E0(&ServantTreasureDeviceAddMaster___c_TypeInfo, v54, v55);
    byte_4B16B26 = 1;
  }
  value = 0LL;
  memset(&v117, 0, sizeof(v117));
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
  v60 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo,
                                                                  v57,
                                                                  v58,
                                                                  v59);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v60,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v115 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v61);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v64 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v64;
        p_offset += 4;
        if ( !v64 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v67 = Enumerator->klass;
    v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v69 = &v67->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v69 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v68;
        v69 += 4;
        if ( !v68 )
          goto LABEL_17;
      }
      v70 = (__int64)&v67->vtable[*v69].method;
    }
    else
    {
LABEL_17:
      v70 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v71 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
                       Enumerator,
                       *(_QWORD *)(v70 + 8));
    v73 = (int64_t)v71;
    if ( !v71 )
      sub_1BCAA3C(0LL, v72);
    methodPtr_low = LOBYTE(ServantTreasureDeviceAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v71 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantTreasureDeviceAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v71 + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDeviceAddEntity_TypeInfo )
    {
      sub_1BCACFC(v71);
LABEL_51:
      sub_1BCAA3C(v83, v75);
    }
    if ( !v60 )
      sub_1BCAA3C(v71, ServantTreasureDeviceAddEntity_TypeInfo);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v60,
            v71[4],
            &value,
            (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__) )
    {
      v82 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo,
                                                           v75,
                                                           v76,
                                                           v77);
      System_Collections_Generic_List_object____ctor(
        v82,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
      value = (Il2CppObject *)v82;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v60,
        *(_DWORD *)(v73 + 16),
        (Il2CppObject *)v82,
        (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    }
    v83 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v84 = value[1].klass;
    v85 = Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v84 )
      sub_1BCAA3C(v83, v75);
    size = v83->fields._size;
    if ( (unsigned int)size >= LODWORD(v84->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v83,
        (Il2CppObject *)v73,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
    }
    else
    {
      v87 = &v84->_1.image + size;
      v83->fields._size = size + 1;
      v87[4] = (void *)v73;
      sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 4), v73, v76, v77, v78, v79, v80, v81);
    }
  }
  v88 = v115;
  v89 = Enumerator->klass;
  v90 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v91 = &v89->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
    {
      --v90;
      v91 += 4;
      if ( !v90 )
        goto LABEL_34;
    }
    v92 = (__int64)&v89->vtable[*v91].method;
  }
  else
  {
LABEL_34:
    v92 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v92)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v92 + 8));
  if ( !v60 )
LABEL_57:
    sub_1BCAA3C(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v116,
    v60,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
  v117 = v116;
  while ( 1 )
  {
    v93 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v117,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__);
    if ( !v93 )
      break;
    v97 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    key = (int32_t)v117.fields._current.fields.key;
    v99 = v117.fields._current.fields.value;
    if ( !ServantTreasureDeviceAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDeviceAddMaster___c_TypeInfo, v94);
      v97 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v97->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v97->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v97, v94);
        v97 = ServantTreasureDeviceAddMaster___c_TypeInfo;
      }
      v101 = (Il2CppObject *)v97->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                            System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo,
                                            v94,
                                            v95,
                                            v96);
      System_Comparison_object____ctor(
        _9__2_0,
        v101,
        Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__,
        0LL);
      static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_ServantTreasureDeviceAddEntity__o *)_9__2_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__2_0,
        (int64_t)_9__2_0,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
      v88 = v115;
    }
    if ( !v99 )
      sub_1BCAA3C(v93, v94);
    System_Collections_Generic_List_object___Sort_56244000(
      (System_Collections_Generic_List_object__o *)v99,
      _9__2_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    v109 = (System_Collections_Generic_Dictionary_int__object__o *)v88->fields.listCache;
    v110 = System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)v99,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    if ( !v109 )
      sub_1BCAA3C(v110, v111);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v109,
      key,
      &v110->obj,
      (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    monitor = (int32_t)v99[1].monitor;
    v113 = HIDWORD(v99[1].monitor) + 1;
    LODWORD(v99[1].monitor) = 0;
    HIDWORD(v99[1].monitor) = v113;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v99[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v117,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v60,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDeviceAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16B2D & 1) == 0 )
  {
    sub_1BCA7E0(&ServantTreasureDeviceAddMaster___c_TypeInfo, v1, v2);
    byte_4B16B2D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantTreasureDeviceAddMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDeviceAddMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}