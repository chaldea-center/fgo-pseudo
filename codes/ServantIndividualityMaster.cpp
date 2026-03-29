void ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3133C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
    sub_1C93AD4(&ServantIndividualityMaster_TypeInfo);
    byte_4D3133C = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  ServantIndividualityMaster_TypeInfo->static_fields->individualityList = (struct System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantIndividualityMaster_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31339 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
    byte_4D31339 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    235,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantIndividualityMaster_c *v4; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0

  if ( (byte_4D3133A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
    sub_1C93AD4(&ServantIndividualityMaster_TypeInfo);
    byte_4D3133A = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_3466B8C *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__Clear__);
  v4 = ServantIndividualityMaster_TypeInfo;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v4 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v4->static_fields->individualityList;
  if ( !individualityList )
    sub_1C93D2C(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D31335 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
    byte_4D31335 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_34681D4 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantIndividualityMaster__GetIndividuality(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantIndividualityMaster_c *v6; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  Il2CppObject *Master_object; // x21
  __int64 v9; // x22
  System_Collections_Generic_List_int__o *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w2
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int monitor; // w8
  int32_t v18; // w23
  int32_t v19; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v22; // x1
  Il2CppClass *klass; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4D31337 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008560);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&ServantIndividualityMaster_TypeInfo);
    byte_4D31337 = 1;
  }
  v6 = ServantIndividualityMaster_TypeInfo;
  value = 0;
  memset(&v29, 0, sizeof(v29));
  entity = 0;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v6 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v6->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_39;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0);
  if ( !value )
LABEL_39:
    sub_1C93D2C(individualityList, *(_QWORD *)&svtId);
  v9 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v29 = v27;
  v10 = 0;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C93D2C(v11, v12);
    monitor_high = HIDWORD(v29.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1C93D2C(v11, v12);
      v15 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_34632C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v15 )
      {
        if ( !entity )
          sub_1C93D2C(v15, v16);
        if ( v9 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v9 )
          continue;
      }
    }
    if ( v9 >= (__int64)current[2].klass && (__int64)current[2].monitor > v9 )
    {
      monitor = (int)current[1].monitor;
      if ( monitor < 0 || monitor == limitCount )
      {
        v19 = (int32_t)current[3].monitor;
        v18 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v19, v18, klass_low, 0, 0, 0);
        if ( IsOpen )
        {
          if ( !v10 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_1C93D2C(IsOpen, v22);
            v10 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_59097492(
              v10,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_385C194 *)Method_System_Collections_Generic_List_int___ctor___79008560);
            if ( !v10 )
              sub_1C93D2C(v24, v25);
          }
          System_Collections_Generic_List_int___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v10 )
    return System_Collections_Generic_List_int___ToArray(
             v10,
             (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantIndividualityMaster__GetIndividualityList(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantIndividualityMaster_c *v5; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  struct System_Int32_array *buckets; // x19
  Il2CppObject *Master_object; // x22
  __int64 v9; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x21
  int32_t monitor_high; // w2
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int monitor; // w8
  int32_t v17; // w24
  int32_t v18; // w26
  int64_t klass_low; // x25
  _BOOL8 IsOpen; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_int__o *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_int__o *v26; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4D31338 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008560);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&ServantIndividualityMaster_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31338 = 1;
  }
  value = 0;
  memset(&v29, 0, sizeof(v29));
  entity = 0;
  if ( limitCount < 0 )
    return 0;
  v5 = ServantIndividualityMaster_TypeInfo;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v5 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v5->static_fields->individualityList;
  if ( !individualityList )
LABEL_44:
    sub_1C93D2C(individualityList, *(_QWORD *)&limitCount);
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                (DataManager_o *)individualityList,
                                                                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)individualityList,
                                                                                svtId,
                                                                                (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_44;
  buckets = individualityList[2].fields._buckets;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0);
  if ( !value )
    goto LABEL_44;
  v9 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v26 = 0;
  v29 = v27;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C93D2C(v10, v11);
    monitor_high = HIDWORD(v29.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1C93D2C(v10, v11);
      v14 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_34632C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v14 )
      {
        if ( !entity )
          sub_1C93D2C(v14, v15);
        if ( v9 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v9 )
          continue;
      }
    }
    if ( v9 >= (__int64)current[2].klass && (__int64)current[2].monitor > v9 )
    {
      monitor = (int)current[1].monitor;
      if ( monitor < 0 || monitor == limitCount )
      {
        v18 = (int32_t)current[3].monitor;
        v17 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v18, v17, klass_low, 0, 0, 0);
        if ( IsOpen )
        {
          v22 = v26;
          if ( !v26 )
          {
            if ( !buckets )
              sub_1C93D2C(IsOpen, v21);
            v22 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_59097492(
              v22,
              LODWORD(buckets->max_length) + 20,
              (const MethodInfo_385C194 *)Method_System_Collections_Generic_List_int___ctor___79008560);
            if ( !v22 )
              sub_1C93D2C(v23, v24);
            System_Collections_Generic_List_int___AddRange(
              v22,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v26 = v22;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v26 )
    return System_Collections_Generic_List_int___ToArray(
             v26,
             (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  return buckets;
}


// local variable allocation has failed, the output may be wrong!
bool ServantIndividualityMaster__TryGetEntity(
        ServantIndividualityMaster_o *this,
        ServantIndividualityEntity_o **entity,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D31336 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
    byte_4D31336 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
}


bool ServantIndividualityMaster__preProcess(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  ServantIndividualityMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  int32_t Count; // w0
  int32_t v6; // w20
  int32_t i; // w21
  System_Collections_Generic_Dictionary_int__object__o *v8; // x22
  ServantIndividualityMaster_c *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *v16; // x23
  ServantIndividualityMaster_c *v17; // x0
  Il2CppClass *klass; // x8
  _QWORD *v19; // x9
  __int64 entries_low; // x10
  void **v21; // x8
  int32_t v22; // w21
  System_Collections_Generic_Dictionary_int__object__o *v23; // x22
  ServantIndividualityMaster_c *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x23
  ServantIndividualityMaster_c *v32; // x0
  Il2CppClass *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  void **v36; // x8
  Il2CppObject *v38; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D3133B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
    sub_1C93AD4(&ServantIndividualityMaster_TypeInfo);
    byte_4D3133B = 1;
  }
  v3 = ServantIndividualityMaster_TypeInfo;
  v38 = 0;
  value = 0;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v3 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_45;
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)individualityList,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Count__);
  if ( Count >= 1 )
  {
    v6 = Count;
    for ( i = 0; i != v6; ++i )
    {
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
      if ( !individualityList )
        goto LABEL_45;
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                    (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                    i,
                                                                                    (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
      if ( !individualityList )
        goto LABEL_45;
      v8 = individualityList;
      if ( ((__int64)individualityList->fields._entries & 0x80000000) != 0 )
      {
        v9 = ServantIndividualityMaster_TypeInfo;
        if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v9 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v9->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_45;
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                individualityList,
                (int32_t)v8->fields._buckets,
                &value,
                (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
        {
          v16 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v16,
            (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
          v17 = ServantIndividualityMaster_TypeInfo;
          value = (Il2CppObject *)v16;
          if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v17 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v17->static_fields->individualityList;
          if ( !individualityList )
            goto LABEL_45;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            individualityList,
            (int32_t)v8->fields._buckets,
            value,
            (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)value;
        if ( !value )
          goto LABEL_45;
        klass = value[1].klass;
        v19 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
        ++HIDWORD(value[1].monitor);
        if ( !klass )
          goto LABEL_45;
        entries_low = SLODWORD(individualityList->fields._entries);
        if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)individualityList,
            (Il2CppObject *)v8,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &klass->_1.image + entries_low;
          LODWORD(individualityList->fields._entries) = entries_low + 1;
          v21[4] = v8;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v8, v10, v11, v12, v13, v14, v15);
        }
      }
    }
    v22 = 0;
    while ( 1 )
    {
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
      if ( !individualityList )
        break;
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                    (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                    v22,
                                                                                    (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
      if ( !individualityList )
        break;
      v23 = individualityList;
      if ( ((__int64)individualityList->fields._entries & 0x80000000) == 0 )
      {
        v24 = ServantIndividualityMaster_TypeInfo;
        if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v24 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v24->static_fields->individualityList;
        if ( !individualityList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                individualityList,
                (int32_t)v23->fields._buckets,
                &v38,
                (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
        {
          v31 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v31,
            (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
          v32 = ServantIndividualityMaster_TypeInfo;
          v38 = (Il2CppObject *)v31;
          if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v32 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v32->static_fields->individualityList;
          if ( !individualityList )
            break;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            individualityList,
            (int32_t)v23->fields._buckets,
            v38,
            (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v38;
        if ( !v38 )
          break;
        v33 = v38[1].klass;
        v34 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
        ++HIDWORD(v38[1].monitor);
        if ( !v33 )
          break;
        v35 = SLODWORD(individualityList->fields._entries);
        if ( (unsigned int)v35 >= LODWORD(v33->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)individualityList,
            (Il2CppObject *)v23,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &v33->_1.image + v35;
          LODWORD(individualityList->fields._entries) = v35 + 1;
          v36[4] = v23;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v23, v25, v26, v27, v28, v29, v30);
        }
      }
      if ( v6 == ++v22 )
        return 1;
    }
LABEL_45:
    sub_1C93D2C(individualityList, method);
  }
  return 1;
}