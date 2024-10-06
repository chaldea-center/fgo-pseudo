void __fastcall ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A705A9 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__, v1);
    sub_1B90010(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo, v2);
    sub_1B90010(&ServantIndividualityMaster_TypeInfo, v3);
    byte_4A705A9 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_317BBF8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  ServantIndividualityMaster_TypeInfo->static_fields->individualityList = (struct System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___o *)v4;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)ServantIndividualityMaster_TypeInfo->static_fields,
    (int32_t)v4,
    v5,
    v6);
}


void __fastcall ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A705A6 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__, method);
    byte_4A705A6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    229,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void __fastcall ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantIndividualityMaster_c *v5; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0

  if ( (byte_4A705A7 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, method);
    sub_1B90010(&ServantIndividualityMaster_TypeInfo, v3);
    byte_4A705A7 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v5 = ServantIndividualityMaster_TypeInfo;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v5 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v5->static_fields->individualityList;
  if ( !individualityList )
    sub_1B9026C(0LL, v4);
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_317C754 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *__fastcall ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A705A2 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4A705A2 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_312C900 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
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
  __int64 v26; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w2
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int monitor; // w8
  int32_t v32; // w23
  int32_t v33; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v36; // x1
  Il2CppClass *klass; // x23
  __int64 v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A705A4 & 1) == 0 )
  {
    sub_1B90010(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_1B90010(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor___76120656, v16);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B90010(&NetworkManager_TypeInfo, v18);
    sub_1B90010(&ServantIndividualityMaster_TypeInfo, v19);
    byte_4A705A4 = 1;
  }
  v20 = ServantIndividualityMaster_TypeInfo;
  value = 0LL;
  memset(&v43, 0, sizeof(v43));
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
          (const MethodInfo_317DD58 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0LL);
  if ( !value )
LABEL_39:
    sub_1B9026C(individualityList, *(_QWORD *)&svtId);
  v23 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v43 = v41;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v25 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_1B9026C(v25, v26);
    monitor_high = HIDWORD(v43.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1B9026C(v25, v26);
      v29 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_312C5FC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v29 )
      {
        if ( !entity )
          sub_1B9026C(v29, v30);
        if ( v23 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v23 )
          continue;
      }
    }
    if ( v23 >= (__int64)current[2].klass && (__int64)current[2].monitor > v23 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v33 = (int32_t)current[3].monitor;
        v32 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v33, v32, klass_low, 0, 0LL, 0LL);
        if ( IsOpen )
        {
          if ( !v24 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_1B9026C(IsOpen, v36);
            v24 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_55521720(
              v24,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_34F31B8 *)Method_System_Collections_Generic_List_int___ctor___76120656);
            if ( !v24 )
              sub_1B9026C(v38, v39);
          }
          System_Collections_Generic_List_int___AddRange(
            v24,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_34F3BA8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v24 )
    return System_Collections_Generic_List_int___ToArray(
             v24,
             (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v28; // x1
  Il2CppObject *current; // x21
  int32_t monitor_high; // w2
  _BOOL8 v31; // x0
  __int64 v32; // x1
  int monitor; // w8
  int32_t v34; // w24
  int32_t v35; // w26
  int64_t klass_low; // x25
  _BOOL8 IsOpen; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_int__o *v39; // x24
  __int64 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_int__o *v43; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A705A5 & 1) == 0 )
  {
    sub_1B90010(&CondType_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B90010(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor___76120656, v17);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B90010(&NetworkManager_TypeInfo, v19);
    sub_1B90010(&ServantIndividualityMaster_TypeInfo, v20);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4A705A5 = 1;
  }
  value = 0LL;
  memset(&v46, 0, sizeof(v46));
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
    sub_1B9026C(individualityList, *(_QWORD *)&limitCount);
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_317DD58 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                (DataManager_o *)individualityList,
                                                                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)individualityList,
                                                                                svtId,
                                                                                (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_44;
  buckets = individualityList[2].fields._buckets;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0LL);
  if ( !value )
    goto LABEL_44;
  v26 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v43 = 0LL;
  v46 = v44;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1B9026C(v27, v28);
    monitor_high = HIDWORD(v46.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1B9026C(v27, v28);
      v31 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_312C5FC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v31 )
      {
        if ( !entity )
          sub_1B9026C(v31, v32);
        if ( v26 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v26 )
          continue;
      }
    }
    if ( v26 >= (__int64)current[2].klass && (__int64)current[2].monitor > v26 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v35 = (int32_t)current[3].monitor;
        v34 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v35, v34, klass_low, 0, 0LL, 0LL);
        if ( IsOpen )
        {
          v39 = v43;
          if ( !v43 )
          {
            if ( !buckets )
              sub_1B9026C(IsOpen, v38);
            v39 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_55521720(
              v39,
              buckets->max_length + 20,
              (const MethodInfo_34F31B8 *)Method_System_Collections_Generic_List_int___ctor___76120656);
            if ( !v39 )
              sub_1B9026C(v40, v41);
            System_Collections_Generic_List_int___AddRange(
              v39,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_34F3BA8 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v43 = v39;
          System_Collections_Generic_List_int___AddRange(
            v39,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_34F3BA8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v43 )
    return System_Collections_Generic_List_int___ToArray(
             v43,
             (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4A705A3 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__,
      entity);
    byte_4A705A3 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x23
  ServantIndividualityMaster_c *v23; // x0
  Il2CppClass *klass; // x8
  _QWORD *v25; // x9
  __int64 entries_low; // x10
  void **v27; // x8
  int32_t v28; // w21
  __int64 v29; // x9
  ServantIndividualityMaster_c *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_List_object__o *v33; // x23
  ServantIndividualityMaster_c *v34; // x0
  Il2CppClass *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  void **v38; // x8
  bool result; // w0
  const MethodInfo *v40; // x0
  Il2CppObject *v41; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A705A8 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, v4);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v5);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v9);
    sub_1B90010(&ServantIndividualityEntity_TypeInfo, v10);
    sub_1B90010(&ServantIndividualityMaster_TypeInfo, v11);
    byte_4A705A8 = 1;
  }
  v12 = ServantIndividualityMaster_TypeInfo;
  v41 = 0LL;
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
    (const MethodInfo_317C754 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_49;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)individualityList,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                  (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !individualityList )
      goto LABEL_49;
    method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
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
              (const MethodInfo_317DD58 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
      {
        v22 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v22,
          (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
        v23 = ServantIndividualityMaster_TypeInfo;
        value = (Il2CppObject *)v22;
        if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v23 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v23->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_49;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          individualityList,
          (int32_t)v17->fields._buckets,
          value,
          (const MethodInfo_317C5B8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
      }
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)value;
      if ( !value )
        goto LABEL_49;
      klass = value[1].klass;
      v25 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
      ++HIDWORD(value[1].monitor);
      if ( !klass )
        goto LABEL_49;
      entries_low = SLODWORD(individualityList->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)individualityList,
          (Il2CppObject *)v17,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &klass->_1.image + entries_low;
        LODWORD(individualityList->fields._entries) = entries_low + 1;
        v27[4] = v17;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v17, v20, v21);
      }
    }
    if ( v15 == ++v16 )
    {
      v28 = 0;
      while ( 1 )
      {
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
        if ( !individualityList )
          break;
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                      (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                      v28,
                                                                                      (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !individualityList )
          break;
        method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
        v17 = individualityList;
        v29 = LOBYTE(ServantIndividualityEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(individualityList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v29
          || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v29 - 1] != ServantIndividualityEntity_TypeInfo )
        {
          goto LABEL_50;
        }
        if ( ((__int64)individualityList->fields._entries & 0x80000000) == 0 )
        {
          v30 = ServantIndividualityMaster_TypeInfo;
          if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v30 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v30->static_fields->individualityList;
          if ( !individualityList )
            break;
          if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                  individualityList,
                  (int32_t)v17->fields._buckets,
                  &v41,
                  (const MethodInfo_317DD58 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
          {
            v33 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v33,
              (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
            v34 = ServantIndividualityMaster_TypeInfo;
            v41 = (Il2CppObject *)v33;
            if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
              v34 = ServantIndividualityMaster_TypeInfo;
            }
            individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v34->static_fields->individualityList;
            if ( !individualityList )
              break;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              individualityList,
              (int32_t)v17->fields._buckets,
              v41,
              (const MethodInfo_317C5B8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v41;
          if ( !v41 )
            break;
          v35 = v41[1].klass;
          v36 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
          ++HIDWORD(v41[1].monitor);
          if ( !v35 )
            break;
          v37 = SLODWORD(individualityList->fields._entries);
          if ( (unsigned int)v37 >= LODWORD(v35->_1.namespaze) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)individualityList,
              (Il2CppObject *)v17,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &v35->_1.image + v37;
            LODWORD(individualityList->fields._entries) = v37 + 1;
            v38[4] = v17;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v17, v31, v32);
          }
        }
        if ( v15 == ++v28 )
          return 1;
      }
LABEL_49:
      sub_1B9026C(individualityList, method);
    }
  }
LABEL_50:
  sub_1B9052C(v17);
  ServantIndividualityMaster___cctor(v40);
  return result;
}