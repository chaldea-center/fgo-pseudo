void __fastcall ServantTreasureDeviceAddMaster___ctor(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FCC28 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__,
      method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo, v5);
    byte_49FCC28 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listCache, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    363,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string___ctor__);
}


void __fastcall ServantTreasureDeviceAddMaster__Clear(ServantTreasureDeviceAddMaster_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0

  if ( (byte_49FCC29 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__, method);
    byte_49FCC29 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_o *__fastcall ServantTreasureDeviceAddMaster__GetEnableEntity(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  ServantTreasureDeviceAddEntity_array *EntityListFromSvtId; // x0
  const MethodInfo *v10; // x1
  int max_length; // w8
  ServantTreasureDeviceAddEntity_array *v12; // x21
  __int64 i; // x23
  ServantTreasureDeviceAddEntity_o *v14; // x22
  int32_t condLimitCount; // w8

  if ( (byte_49FCC2C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&svtId);
    byte_49FCC2C = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    max_length = EntityListFromSvtId->max_length;
    v12 = EntityListFromSvtId;
    if ( max_length >= 1 )
    {
      for ( i = 0LL; (int)i < max_length; ++i )
      {
        if ( (unsigned int)i >= max_length )
          sub_1B6432C(EntityListFromSvtId, v10);
        v14 = v12->m_Items[i];
        if ( !v14 )
          sub_1B64324(EntityListFromSvtId);
        condLimitCount = v14->fields.condLimitCount;
        if ( treasureDeviceId < 1 )
        {
          if ( condLimitCount <= limitCount )
          {
            EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)ServantTreasureDeviceAddEntity__IsEnable(
                                                                            v12->m_Items[i],
                                                                            v10);
            if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
              return v14;
          }
        }
        else if ( condLimitCount <= limitCount )
        {
          EntityListFromSvtId = (ServantTreasureDeviceAddEntity_array *)System_Linq_Enumerable__Contains_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v14->fields.treasureDeviceIds,
                                                                          treasureDeviceId,
                                                                          (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
            return v14;
        }
        max_length = v12->max_length;
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

  if ( (byte_49FCC2D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FCC2D = 1;
  }
  EntityListFromSvtId = ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
                          this,
                          svtId,
                          *(const MethodInfo **)&limitCount);
  if ( EntityListFromSvtId )
  {
    v11 = EntityListFromSvtId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    v14 = *(_QWORD *)&v11->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = (CommonReleaseMaster_o *)Instance;
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= (unsigned int)v14 )
          sub_1B6432C(Instance, v13);
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
      sub_1B64324(Instance);
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

  if ( (byte_49FCC26 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FCC26 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDeviceAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceAddEntity_array *__fastcall ServantTreasureDeviceAddMaster__GetEntityListFromSvtId(
        ServantTreasureDeviceAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCC2B & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__,
      *(_QWORD *)&svtId);
    byte_49FCC2B = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___TryGetValue(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    svtId,
    &value,
    (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____TryGetValue__);
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

  if ( (byte_49FCC27 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__,
      entity);
    byte_49FCC27 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceAddEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantTreasureDeviceAddMaster__ServantTreasureDeviceAddEntity__string__TryGetEntity__);
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
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_Dictionary_int__object__o *v32; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  int32_t *v42; // x0
  int32_t *v43; // x22
  __int64 methodPtr_low; // x9
  __int64 v45; // x1
  __int64 v46; // x2
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
  __int64 v61; // x2
  ServantTreasureDeviceAddMaster___c_c *v62; // x8
  int32_t key; // w22
  Il2CppObject *v64; // x21
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v66; // x24
  struct ServantTreasureDeviceAddMaster___c_StaticFields *static_fields; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_Collections_Generic_Dictionary_int__object__o *v70; // x23
  System_Object_array *v71; // x0
  int32_t monitor; // w2
  int v73; // w8
  ServantTreasureDeviceAddMaster_o *v75; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v76; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v77; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_49FCC2A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__, v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__,
      v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___get_Current__,
      v14);
    sub_1B640C8(&System_IDisposable_TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Key__,
      v18);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDeviceAddEntity___get_Value__,
      v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Clear__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__, v24);
    sub_1B640C8(&System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo, v25);
    sub_1B640C8(&ServantTreasureDeviceAddEntity_TypeInfo, v26);
    sub_1B640C8(&Method_ServantTreasureDeviceAddMaster___c__preProcess_b__5_0__, v27);
    sub_1B640C8(&ServantTreasureDeviceAddMaster___c_TypeInfo, v28);
    byte_49FCC2A = 1;
  }
  value = 0LL;
  memset(&v77, 0, sizeof(v77));
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____Clear__);
  v32 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TypeInfo,
                                                                  v30,
                                                                  v31);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v32,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v75 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        p_offset += 4;
        if ( !v35 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_17;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_17:
      v41 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v42 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                       Enumerator,
                       *(_QWORD *)(v41 + 8));
    v43 = v42;
    if ( !v42 )
      sub_1B64324(0LL);
    methodPtr_low = LOBYTE(ServantTreasureDeviceAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantTreasureDeviceAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDeviceAddEntity_TypeInfo )
    {
      sub_1B645E4(v42);
LABEL_51:
      sub_1B64324(v49);
    }
    if ( !v32 )
      sub_1B64324(v42);
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            v32,
            v42[4],
            &value,
            (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___TryGetValue__) )
    {
      v48 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_ServantTreasureDeviceAddEntity__TypeInfo,
                                                           v45,
                                                           v46);
      System_Collections_Generic_List_object____ctor(
        v48,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity___ctor__);
      value = (Il2CppObject *)v48;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v32,
        v43[4],
        (Il2CppObject *)v48,
        (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___set_Item__);
    }
    v49 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v50 = value[1].klass;
    v51 = Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v50 )
      sub_1B64324(v49);
    size = v49->fields._size;
    if ( (unsigned int)size >= LODWORD(v50->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v49,
        (Il2CppObject *)v43,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &v50->_1.image + size;
      v49->fields._size = size + 1;
      v53[4] = v43;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v43, v46, v47);
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
    v58 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v58 + 8));
  if ( !v32 )
LABEL_57:
    sub_1B64324(listCache);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v76,
    v32,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___GetEnumerator__);
  v77 = v76;
  while ( 1 )
  {
    v59 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v77,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___MoveNext__);
    if ( !v59 )
      break;
    v62 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    key = (int32_t)v77.fields._current.fields.key;
    v64 = v77.fields._current.fields.value;
    if ( !ServantTreasureDeviceAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDeviceAddMaster___c_TypeInfo);
      v62 = ServantTreasureDeviceAddMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v62->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62);
        v62 = ServantTreasureDeviceAddMaster___c_TypeInfo;
      }
      v66 = (Il2CppObject *)v62->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1B64314(
                                            System_Comparison_ServantTreasureDeviceAddEntity__TypeInfo,
                                            v60,
                                            v61);
      System_Comparison_object____ctor(
        _9__5_0,
        v66,
        Method_ServantTreasureDeviceAddMaster___c__preProcess_b__5_0__,
        0LL);
      static_fields = ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantTreasureDeviceAddEntity__o *)_9__5_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v68, v69);
      v54 = v75;
    }
    if ( !v64 )
      sub_1B64324(v59);
    System_Collections_Generic_List_object___Sort_55243320(
      (System_Collections_Generic_List_object__o *)v64,
      _9__5_0,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__Sort__);
    v70 = (System_Collections_Generic_Dictionary_int__object__o *)v54->fields.listCache;
    v71 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v64,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantTreasureDeviceAddEntity__ToArray__);
    if ( !v70 )
      sub_1B64324(v71);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v70,
      key,
      &v71->obj,
      (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDeviceAddEntity____set_Item__);
    monitor = (int32_t)v64[1].monitor;
    v73 = HIDWORD(v64[1].monitor) + 1;
    LODWORD(v64[1].monitor) = 0;
    HIDWORD(v64[1].monitor) = v73;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v64[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v77,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDeviceAddEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v32,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDeviceAddEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDeviceAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCC2E & 1) == 0 )
  {
    sub_1B640C8(&ServantTreasureDeviceAddMaster___c_TypeInfo, v1);
    byte_49FCC2E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantTreasureDeviceAddMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDeviceAddMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantTreasureDeviceAddMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall ServantTreasureDeviceAddMaster___c___ctor(
        ServantTreasureDeviceAddMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantTreasureDeviceAddMaster___c___preProcess_b__5_0(
        ServantTreasureDeviceAddMaster___c_o *this,
        ServantTreasureDeviceAddEntity_o *a,
        ServantTreasureDeviceAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}