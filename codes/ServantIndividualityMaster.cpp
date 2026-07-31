void ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939046 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
    sub_21FFC50(&ServantIndividualityMaster_TypeInfo);
    byte_5939046 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  ServantIndividualityMaster_TypeInfo->static_fields->individualityList = (struct System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantIndividualityMaster_TypeInfo->static_fields,
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
  if ( (byte_5939043 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
    byte_5939043 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    237,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantIndividualityMaster_c *v4; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0

  if ( (byte_5939044 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
    sub_21FFC50(&ServantIndividualityMaster_TypeInfo);
    byte_5939044 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_3EE0B04 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__Clear__);
  v4 = ServantIndividualityMaster_TypeInfo;
  if ( !*(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, v3);
    v4 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v4->static_fields->individualityList;
  if ( !individualityList )
    sub_21FFECC(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593903F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
    byte_593903F = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantIndividualityMaster__GetIndividuality(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantIndividualityMaster_c *v6; // x0
  int v7; // w8
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  __int64 v12; // x22
  System_Collections_Generic_List_int__o *v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w2
  _BOOL8 v18; // x0
  int monitor; // w8
  int64_t klass_low; // x25
  int32_t v21; // w23
  int32_t v22; // w24
  _BOOL8 IsOpen; // x0
  __int64 v24; // x1
  Il2CppClass *klass; // x23
  __int64 v26; // x0
  __int64 v27; // x1
  struct System_Collections_Generic_List_T__o *list; // x19
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5939041 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427368);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&ServantIndividualityMaster_TypeInfo);
    byte_5939041 = 1;
  }
  v6 = ServantIndividualityMaster_TypeInfo;
  value = 0;
  memset(&v32, 0, sizeof(v32));
  v7 = *(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, *(_QWORD *)&svtId);
    v6 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v6->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_40;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0);
  if ( !value )
LABEL_40:
    sub_21FFECC(individualityList, *(_QWORD *)&svtId);
  v12 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v32 = v30;
  v13 = 0;
  v30.fields._list = 0;
  *(_QWORD *)&v30.fields._index = &v32;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v14 )
      break;
    current = v32.fields._current;
    if ( !v32.fields._current )
      sub_21FFECC(v14, v15);
    monitor_high = HIDWORD(v32.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_21FFECC(v14, v15);
      v18 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v18 )
      {
        if ( !entity )
          sub_21FFECC(v18, v15);
        if ( v12 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v12 )
          continue;
      }
    }
    if ( v12 >= (__int64)current[2].klass && (__int64)current[2].monitor > v12 )
    {
      monitor = (int)current[1].monitor;
      if ( monitor < 0 || monitor == limitCount )
      {
        klass_low = SLODWORD(current[4].klass);
        v21 = (int32_t)current[3].monitor;
        v22 = HIDWORD(current[3].monitor);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
        IsOpen = CondType__IsOpen(v21, v22, klass_low, 0, 0, 0);
        if ( IsOpen )
        {
          if ( !v13 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_21FFECC(IsOpen, v24);
            v13 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_71510304(
              v13,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_4432920 *)Method_System_Collections_Generic_List_int___ctor___91427368);
            if ( !v13 )
              sub_21FFECC(v26, v27);
          }
          System_Collections_Generic_List_int___AddRange(
            v13,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  list = v30.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v30.fields._index,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( list )
    sub_21FFEC4(list);
  if ( v13 )
    return System_Collections_Generic_List_int___ToArray(
             v13,
             (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v8; // x1
  Il2CppObject *Master_object; // x22
  __int64 v10; // x23
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x21
  int32_t monitor_high; // w2
  _BOOL8 v15; // x0
  int monitor; // w8
  int64_t klass_low; // x26
  int32_t v18; // w24
  int32_t v19; // w25
  __int64 v20; // x1
  System_Collections_Generic_List_int__o *v21; // x0
  System_Collections_Generic_List_int__o *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  struct System_Collections_Generic_List_T__o *list; // x20
  System_Collections_Generic_List_int__o *v27; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_5939042 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427368);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&ServantIndividualityMaster_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939042 = 1;
  }
  value = 0;
  memset(&v30, 0, sizeof(v30));
  entity = 0;
  if ( limitCount < 0 )
    return 0;
  v5 = ServantIndividualityMaster_TypeInfo;
  if ( !*(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, *(_QWORD *)&limitCount);
    v5 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v5->static_fields->individualityList;
  if ( !individualityList )
LABEL_45:
    sub_21FFECC(individualityList, *(_QWORD *)&limitCount);
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_45;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                (DataManager_o *)individualityList,
                                                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_45;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)individualityList,
                                                                                svtId,
                                                                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_45;
  buckets = individualityList[2].fields._buckets;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&limitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0);
  if ( !value )
    goto LABEL_45;
  v10 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v27 = 0;
  v30 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v30;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_21FFECC(v11, v12);
    monitor_high = HIDWORD(v30.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_21FFECC(v11, v12);
      v15 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v15 )
      {
        if ( !entity )
          sub_21FFECC(v15, v12);
        if ( v10 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v10 )
          continue;
      }
    }
    if ( v10 >= (__int64)current[2].klass && (__int64)current[2].monitor > v10 )
    {
      monitor = (int)current[1].monitor;
      if ( monitor < 0 || monitor == limitCount )
      {
        klass_low = SLODWORD(current[4].klass);
        v18 = (int32_t)current[3].monitor;
        v19 = HIDWORD(current[3].monitor);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
        if ( CondType__IsOpen(v18, v19, klass_low, 0, 0, 0) )
        {
          v21 = v27;
          if ( !v27 )
          {
            if ( !buckets )
              sub_21FFECC(0, v20);
            v22 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_71510304(
              v22,
              LODWORD(buckets->max_length) + 20,
              (const MethodInfo_4432920 *)Method_System_Collections_Generic_List_int___ctor___91427368);
            if ( !v22 )
              sub_21FFECC(v23, v24);
            System_Collections_Generic_List_int___AddRange(
              v22,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
            v21 = v22;
          }
          v27 = v21;
          System_Collections_Generic_List_int___AddRange(
            v21,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  list = v28.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v28.fields._index,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( list )
    sub_21FFEC4(list);
  if ( v27 )
    return System_Collections_Generic_List_int___ToArray(
             v27,
             (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_5939040 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
    byte_5939040 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x23
  ServantIndividualityMaster_c *v17; // x0
  Il2CppClass *klass; // x8
  _QWORD *v19; // x9
  __int64 entries_low; // x10
  void **v21; // x8
  int32_t v22; // w21
  System_Collections_Generic_Dictionary_int__object__o *v23; // x22
  ServantIndividualityMaster_c *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *v31; // x23
  ServantIndividualityMaster_c *v32; // x0
  Il2CppClass *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  void **v36; // x8
  Il2CppObject *v38; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5939045 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
    sub_21FFC50(&ServantIndividualityMaster_TypeInfo);
    byte_5939045 = 1;
  }
  v3 = ServantIndividualityMaster_TypeInfo;
  v38 = 0;
  value = 0;
  if ( !*(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, method);
    v3 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_45;
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)individualityList,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Count__);
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
                                                                                    (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
      if ( !individualityList )
        goto LABEL_45;
      v8 = individualityList;
      if ( ((__int64)individualityList->fields._entries & 0x80000000) != 0 )
      {
        v9 = ServantIndividualityMaster_TypeInfo;
        if ( !*(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, method);
          v9 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v9->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_45;
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                individualityList,
                (int32_t)v8->fields._buckets,
                &value,
                (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
        {
          v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v16,
            (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
          v17 = ServantIndividualityMaster_TypeInfo;
          value = (Il2CppObject *)v16;
          if ( !*(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, method);
            v17 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v17->static_fields->individualityList;
          if ( !individualityList )
            goto LABEL_45;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            individualityList,
            (int32_t)v8->fields._buckets,
            value,
            (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &klass->_1.image + entries_low;
          LODWORD(individualityList->fields._entries) = entries_low + 1;
          v21[4] = v8;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v8, v10, v11, v12, v13, v14, v15);
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
                                                                                    (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
      if ( !individualityList )
        break;
      v23 = individualityList;
      if ( ((__int64)individualityList->fields._entries & 0x80000000) == 0 )
      {
        v24 = ServantIndividualityMaster_TypeInfo;
        if ( !*(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, method);
          v24 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v24->static_fields->individualityList;
        if ( !individualityList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                individualityList,
                (int32_t)v23->fields._buckets,
                &v38,
                (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
        {
          v31 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v31,
            (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
          v32 = ServantIndividualityMaster_TypeInfo;
          v38 = (Il2CppObject *)v31;
          if ( !*(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, method);
            v32 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v32->static_fields->individualityList;
          if ( !individualityList )
            break;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            individualityList,
            (int32_t)v23->fields._buckets,
            v38,
            (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &v33->_1.image + v35;
          LODWORD(individualityList->fields._entries) = v35 + 1;
          v36[4] = v23;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v23, v25, v26, v27, v28, v29, v30);
        }
      }
      if ( v6 == ++v22 )
        return 1;
    }
LABEL_45:
    sub_21FFECC(individualityList, method);
  }
  return 1;
}