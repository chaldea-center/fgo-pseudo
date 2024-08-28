void __fastcall ServantTreasureDeviceAddMaster___ctor(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A202FD & 1) == 0 )
  {
    sub_1B715CC(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__,
      method);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__, v3);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo, v4);
    byte_4A202FD = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *)v5;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.listCache, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    363,
    (const MethodInfo_30F8A78 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
}


void __fastcall ServantTreasureDeviceAddMaster__Clear(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0

  if ( (byte_4A202F8 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__, method);
    byte_4A202F8 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1B71828(0LL, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_31489DC *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
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

  if ( (byte_4A202FB & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&svtId);
    byte_4A202FB = 1;
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
          sub_1B71830(EntityListFromSvtId, v12);
        v16 = v14->m_Items[i];
        if ( !v16 )
          sub_1B71828(EntityListFromSvtId, v12);
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
                                                                          (const MethodInfo_2E754F4 *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_4A202FC & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A202FC = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    v11 = EntityListFromSvtId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    v14 = *(_QWORD *)&v11->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = (CommonReleaseMaster_o *)Instance;
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= (unsigned int)v14 )
          sub_1B71830(Instance, v13);
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
      sub_1B71828(Instance, v13);
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

  if ( (byte_4A202FE & 1) == 0 )
  {
    sub_1B715CC(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4A202FE = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDeviceAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_30F8AB8 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_array *__fastcall ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A202FA & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__,
      *(_QWORD *)&svtId);
    byte_4A202FA = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1B71828(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_3149FE0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
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

  if ( (byte_4A202FF & 1) == 0 )
  {
    sub_1B715CC(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__,
      entity);
    byte_4A202FF = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30F8B08 *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
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
  int32_t *v43; // x22
  __int64 methodPtr_low; // x9
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_List_object__o *v48; // x23
  System_Collections_Generic_List_object__o *v49; // x0
  Il2CppClass *v50; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  void **v53; // x8
  ServantTreasureDeviceAddMaster_o *v54; // x24
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  _BOOL8 v59; // x0
  __int64 v60; // x1
  ServantTreasureDeviceAddMaster___c_c *v61; // x8
  int32_t key; // w22
  Il2CppObject *v63; // x21
  System_Comparison_T__o *_9__2_0; // x23
  Il2CppObject *v65; // x24
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_Collections_Generic_Dictionary_int__object__o *v69; // x23
  System_Object_array *v70; // x0
  __int64 v71; // x1
  int32_t monitor; // w2
  int v73; // w8
  ServantTreasureDeviceAddMaster_o *v75; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v76; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v77; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A202F9 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B715CC(&System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo, v3);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__, v5);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__,
      v6);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__,
      v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__, v9);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__,
      v10);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo, v11);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__,
      v12);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__,
      v13);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___get_Current__,
      v14);
    sub_1B715CC(&System_IDisposable_TypeInfo, v15);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B715CC(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Key__,
      v18);
    sub_1B715CC(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Value__,
      v19);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__, v20);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__, v21);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__, v22);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__, v23);
    sub_1B715CC(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__, v24);
    sub_1B715CC(&System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo, v25);
    sub_1B715CC(&ServantTreasureDeviceAddEntity_TypeInfo, v26);
    sub_1B715CC(&Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__, v27);
    sub_1B715CC(&ServantTreasureDeviceAddMaster___c_TypeInfo, v28);
    byte_4A202F9 = 1;
  }
  value = 0LL;
  memset(&v77, 0, sizeof(v77));
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_31489DC *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v75 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v31);
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
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v40 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v41 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                       Enumerator,
                       *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( !v41 )
      sub_1B71828(0LL, v42);
    methodPtr_low = LOBYTE(ServantTreasureDeviceAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantTreasureDeviceAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDeviceAddEntity_TypeInfo )
    {
      sub_1B71AE8(v41);
LABEL_51:
      sub_1B71828(v49, v45);
    }
    if ( !v30 )
      sub_1B71828(v41, ServantTreasureDeviceAddEntity_TypeInfo);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v30,
            v41[4],
            &value,
            (const MethodInfo_3149FE0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__) )
    {
      v48 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v48,
        (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
      value = (Il2CppObject *)v48;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v30,
        v43[4],
        (Il2CppObject *)v48,
        (const MethodInfo_3148840 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    }
    v49 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v50 = value[1].klass;
    v51 = Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v50 )
      sub_1B71828(v49, v45);
    size = v49->fields._size;
    if ( (unsigned int)size >= LODWORD(v50->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v49,
        (Il2CppObject *)v43,
        *(const MethodInfo_34D0260 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &v50->_1.image + size;
      v49->fields._size = size + 1;
      v53[4] = v43;
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v43, v46, v47);
    }
  }
  v54 = v75;
  v55 = Enumerator->klass;
  v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_34;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_34:
    v58 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v58 + 8));
  if ( !v30 )
LABEL_57:
    sub_1B71828(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v76,
    v30,
    (const MethodInfo_3148C8C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
  v77 = v76;
  while ( 1 )
  {
    v59 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v77,
            (const MethodInfo_328E9CC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__);
    if ( !v59 )
      break;
    v61 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    key = (int32_t)v77.fields._current.fields.key;
    v63 = v77.fields._current.fields.value;
    if ( !ServantTreasureDeviceAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDeviceAddMaster___c_TypeInfo);
      v61 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v61->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v61->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v61);
        v61 = ServantTreasureDeviceAddMaster___c_TypeInfo;
      }
      v65 = (Il2CppObject *)v61->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__2_0,
        v65,
        Method_ServantTreasureDeviceAddMaster___c__preProcess_b__2_0__,
        0LL);
      static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_ServantTreasureDeviceAddEntity__o *)_9__2_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v67, v68);
      v54 = v75;
    }
    if ( !v63 )
      sub_1B71828(v59, v60);
    System_Collections_Generic_List_object___Sort_55385380(
      (System_Collections_Generic_List_object__o *)v63,
      _9__2_0,
      (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    v69 = (System_Collections_Generic_Dictionary_int__object__o *)v54->fields.listCache;
    v70 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v63,
            (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    if ( !v69 )
      sub_1B71828(v70, v71);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v69,
      key,
      &v70->obj,
      (const MethodInfo_3148840 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    monitor = (int32_t)v63[1].monitor;
    v73 = HIDWORD(v63[1].monitor) + 1;
    LODWORD(v63[1].monitor) = 0;
    HIDWORD(v63[1].monitor) = v73;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v63[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v77,
    (const MethodInfo_328EAF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v30,
    (const MethodInfo_31489DC *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDeviceAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A20300 & 1) == 0 )
  {
    sub_1B715CC(&ServantTreasureDeviceAddMaster___c_TypeInfo, v1);
    byte_4A20300 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(ServantTreasureDeviceAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDeviceAddMaster___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B71828(this, a);
  return b->fields.priority - a->fields.priority;
}