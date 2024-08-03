void __fastcall ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FCB2E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo, v3);
    sub_1B640C8(&ServantIndividualityMaster_TypeInfo, v4);
    byte_49FCB2E = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo,
                                                                 v1,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  ServantIndividualityMaster_TypeInfo->static_fields->individualityList = (struct System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___o *)v5;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantIndividualityMaster_TypeInfo->static_fields,
    (int32_t)v5,
    v6,
    v7);
}


void __fastcall ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCB2B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__, method);
    byte_49FCB2B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    229,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void __fastcall ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantIndividualityMaster_c *v4; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0

  if ( (byte_49FCB2C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, method);
    sub_1B640C8(&ServantIndividualityMaster_TypeInfo, v3);
    byte_49FCB2C = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = ServantIndividualityMaster_TypeInfo;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v4 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v4->static_fields->individualityList;
  if ( !individualityList )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *__fastcall ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCB27 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FCB27 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantIndividualityMaster__GetIndividuality(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  ServantIndividualityMaster_c *v20; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  Il2CppObject *Master_object; // x21
  __int64 v23; // x22
  System_Collections_Generic_List_int__o *v24; // x20
  _BOOL8 v25; // x0
  Il2CppObject *current; // x28
  int32_t monitor_high; // w2
  _BOOL8 v28; // x0
  int monitor; // w8
  int32_t v30; // w23
  int32_t v31; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppClass *klass; // x23
  __int64 v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49FCB29 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657208, v16);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B640C8(&NetworkManager_TypeInfo, v18);
    sub_1B640C8(&ServantIndividualityMaster_TypeInfo, v19);
    byte_49FCB29 = 1;
  }
  v20 = ServantIndividualityMaster_TypeInfo;
  value = 0LL;
  memset(&v41, 0, sizeof(v41));
  entity = 0LL;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v20 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v20->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_39;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0LL);
  if ( !value )
LABEL_39:
    sub_1B64324(individualityList);
  v23 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v41 = v39;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v25 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1B64324(v25);
    monitor_high = HIDWORD(v41.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1B64324(v25);
      v28 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v28 )
      {
        if ( !entity )
          sub_1B64324(v28);
        if ( v23 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v23 )
          continue;
      }
    }
    if ( v23 >= (__int64)current[2].klass && (__int64)current[2].monitor > v23 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v31 = (int32_t)current[3].monitor;
        v30 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v31, v30, klass_low, 0, 0LL);
        if ( IsOpen )
        {
          if ( !v24 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_1B64324(IsOpen);
            v24 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              v34,
                                                              v35);
            System_Collections_Generic_List_int____ctor_55113464(
              v24,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_348F6F8 *)Method_System_Collections_Generic_List_int___ctor___75657208);
            if ( !v24 )
              sub_1B64324(v37);
          }
          System_Collections_Generic_List_int___AddRange(
            v24,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v24 )
    return System_Collections_Generic_List_int___ToArray(
             v24,
             (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantIndividualityMaster__GetIndividualityList(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  ServantIndividualityMaster_c *v22; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  struct System_Int32_array *buckets; // x19
  Il2CppObject *Master_object; // x22
  __int64 v26; // x23
  _BOOL8 v27; // x0
  Il2CppObject *current; // x21
  int32_t monitor_high; // w2
  _BOOL8 v30; // x0
  int monitor; // w8
  int32_t v32; // w24
  int32_t v33; // w26
  int64_t klass_low; // x25
  _BOOL8 IsOpen; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_int__o *v38; // x24
  __int64 v39; // x0
  System_Collections_Generic_List_int__o *v41; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49FCB2A & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657208, v17);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B640C8(&NetworkManager_TypeInfo, v19);
    sub_1B640C8(&ServantIndividualityMaster_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_49FCB2A = 1;
  }
  value = 0LL;
  memset(&v44, 0, sizeof(v44));
  entity = 0LL;
  if ( (limitCount & 0x80000000) != 0 )
    return 0LL;
  v22 = ServantIndividualityMaster_TypeInfo;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v22 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v22->static_fields->individualityList;
  if ( !individualityList )
LABEL_44:
    sub_1B64324(individualityList);
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                (DataManager_o *)individualityList,
                                                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)individualityList,
                                                                                svtId,
                                                                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_44;
  buckets = individualityList[2].fields._buckets;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0LL);
  if ( !value )
    goto LABEL_44;
  v26 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v41 = 0LL;
  v44 = v42;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v44.fields._current;
    if ( !v44.fields._current )
      sub_1B64324(v27);
    monitor_high = HIDWORD(v44.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1B64324(v27);
      v30 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v30 )
      {
        if ( !entity )
          sub_1B64324(v30);
        if ( v26 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v26 )
          continue;
      }
    }
    if ( v26 >= (__int64)current[2].klass && (__int64)current[2].monitor > v26 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v33 = (int32_t)current[3].monitor;
        v32 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v33, v32, klass_low, 0, 0LL);
        if ( IsOpen )
        {
          v38 = v41;
          if ( !v41 )
          {
            if ( !buckets )
              sub_1B64324(IsOpen);
            v38 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              v36,
                                                              v37);
            System_Collections_Generic_List_int____ctor_55113464(
              v38,
              buckets->max_length + 20,
              (const MethodInfo_348F6F8 *)Method_System_Collections_Generic_List_int___ctor___75657208);
            if ( !v38 )
              sub_1B64324(v39);
            System_Collections_Generic_List_int___AddRange(
              v38,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v41 = v38;
          System_Collections_Generic_List_int___AddRange(
            v38,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v41 )
    return System_Collections_Generic_List_int___ToArray(
             v41,
             (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  return buckets;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantIndividualityMaster__TryGetEntity(
        ServantIndividualityMaster_o *this,
        ServantIndividualityEntity_o **entity,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FCB28 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__,
      entity);
    byte_49FCB28 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
}


bool __fastcall ServantIndividualityMaster__preProcess(ServantIndividualityMaster_o *this, const MethodInfo *method)
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
  ServantIndividualityMaster_c *v12; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  int32_t Count; // w0
  int32_t v15; // w20
  int32_t v16; // w21
  System_Collections_Generic_Dictionary_int__object__o *v17; // x22
  __int64 methodPtr_low; // x9
  ServantIndividualityMaster_c *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *v23; // x23
  ServantIndividualityMaster_c *v24; // x0
  Il2CppClass *klass; // x8
  _QWORD *v26; // x9
  __int64 entries_low; // x10
  void **v28; // x8
  int32_t v29; // w21
  __int64 v30; // x9
  ServantIndividualityMaster_c *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  int32_t v34; // w3
  System_Collections_Generic_List_object__o *v35; // x23
  ServantIndividualityMaster_c *v36; // x0
  Il2CppClass *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  void **v40; // x8
  bool result; // w0
  const MethodInfo *v42; // x0
  Il2CppObject *v43; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FCB2D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v9);
    sub_1B640C8(&ServantIndividualityEntity_TypeInfo, v10);
    sub_1B640C8(&ServantIndividualityMaster_TypeInfo, v11);
    byte_49FCB2D = 1;
  }
  v12 = ServantIndividualityMaster_TypeInfo;
  v43 = 0LL;
  value = 0LL;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v12 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v12->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_49;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)individualityList,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
    if ( !individualityList )
      goto LABEL_49;
    individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                  (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                  v16,
                                                                                  (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !individualityList )
      goto LABEL_49;
    v17 = individualityList;
    methodPtr_low = LOBYTE(ServantIndividualityEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(individualityList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantIndividualityEntity_TypeInfo )
    {
      break;
    }
    if ( ((__int64)individualityList->fields._entries & 0x80000000) != 0 )
    {
      v19 = ServantIndividualityMaster_TypeInfo;
      if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
        v19 = ServantIndividualityMaster_TypeInfo;
      }
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v19->static_fields->individualityList;
      if ( !individualityList )
        goto LABEL_49;
      if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
              individualityList,
              (int32_t)v17->fields._buckets,
              &value,
              (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
      {
        v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo,
                                                             v20,
                                                             v21);
        System_Collections_Generic_List_object____ctor(
          v23,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
        v24 = ServantIndividualityMaster_TypeInfo;
        value = (Il2CppObject *)v23;
        if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v24 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v24->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_49;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          individualityList,
          (int32_t)v17->fields._buckets,
          value,
          (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
      }
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)value;
      if ( !value )
        goto LABEL_49;
      klass = value[1].klass;
      v26 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
      ++HIDWORD(value[1].monitor);
      if ( !klass )
        goto LABEL_49;
      entries_low = SLODWORD(individualityList->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)individualityList,
          (Il2CppObject *)v17,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &klass->_1.image + entries_low;
        LODWORD(individualityList->fields._entries) = entries_low + 1;
        v28[4] = v17;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v17, v21, v22);
      }
    }
    if ( v15 == ++v16 )
    {
      v29 = 0;
      while ( 1 )
      {
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
        if ( !individualityList )
          break;
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                      (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                      v29,
                                                                                      (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !individualityList )
          break;
        v17 = individualityList;
        v30 = LOBYTE(ServantIndividualityEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(individualityList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v30
          || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v30 - 1] != ServantIndividualityEntity_TypeInfo )
        {
          goto LABEL_50;
        }
        if ( ((__int64)individualityList->fields._entries & 0x80000000) == 0 )
        {
          v31 = ServantIndividualityMaster_TypeInfo;
          if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v31 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v31->static_fields->individualityList;
          if ( !individualityList )
            break;
          if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                  individualityList,
                  (int32_t)v17->fields._buckets,
                  &v43,
                  (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
          {
            v35 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                 System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo,
                                                                 v32,
                                                                 v33);
            System_Collections_Generic_List_object____ctor(
              v35,
              (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
            v36 = ServantIndividualityMaster_TypeInfo;
            v43 = (Il2CppObject *)v35;
            if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
              v36 = ServantIndividualityMaster_TypeInfo;
            }
            individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v36->static_fields->individualityList;
            if ( !individualityList )
              break;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              individualityList,
              (int32_t)v17->fields._buckets,
              v43,
              (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v43;
          if ( !v43 )
            break;
          v37 = v43[1].klass;
          v38 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
          ++HIDWORD(v43[1].monitor);
          if ( !v37 )
            break;
          v39 = SLODWORD(individualityList->fields._entries);
          if ( (unsigned int)v39 >= LODWORD(v37->_1.namespaze) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)individualityList,
              (Il2CppObject *)v17,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &v37->_1.image + v39;
            LODWORD(individualityList->fields._entries) = v39 + 1;
            v40[4] = v17;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v17, v33, v34);
          }
        }
        if ( v15 == ++v29 )
          return 1;
      }
LABEL_49:
      sub_1B64324(individualityList);
    }
  }
LABEL_50:
  sub_1B645E4(v17);
  ServantIndividualityMaster___cctor(v42);
  return result;
}