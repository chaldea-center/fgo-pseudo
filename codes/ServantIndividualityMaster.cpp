void ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43905 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
    sub_1C37058(&ServantIndividualityMaster_TypeInfo);
    byte_4C43905 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  ServantIndividualityMaster_TypeInfo->static_fields->individualityList = (struct System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantIndividualityMaster_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43902 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
    byte_4C43902 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    235,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  ServantIndividualityMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0

  if ( (byte_4C43903 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
    sub_1C37058(&ServantIndividualityMaster_TypeInfo);
    byte_4C43903 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_33A4510 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__Clear__);
  v3 = ServantIndividualityMaster_TypeInfo;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v3 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->individualityList;
  if ( !individualityList )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C438FE & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
    byte_4C438FE = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_33A5B58 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
}


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
  Il2CppObject *current; // x28
  int32_t monitor_high; // w2
  _BOOL8 v14; // x0
  int monitor; // w8
  int32_t v16; // w23
  int32_t v17; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  Il2CppClass *klass; // x23
  __int64 v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C43900 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055984);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&ServantIndividualityMaster_TypeInfo);
    byte_4C43900 = 1;
  }
  v6 = ServantIndividualityMaster_TypeInfo;
  value = 0;
  memset(&v25, 0, sizeof(v25));
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
          (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0);
  if ( !value )
LABEL_39:
    sub_1C372B4(individualityList);
  v9 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v25 = v23;
  v10 = 0;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1C372B4(v11);
    monitor_high = HIDWORD(v25.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1C372B4(v11);
      v14 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v14 )
      {
        if ( !entity )
          sub_1C372B4(v14);
        if ( v9 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v9 )
          continue;
      }
    }
    if ( v9 >= (__int64)current[2].klass && (__int64)current[2].monitor > v9 )
    {
      monitor = (int)current[1].monitor;
      if ( monitor < 0 || monitor == limitCount )
      {
        v17 = (int32_t)current[3].monitor;
        v16 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v17, v16, klass_low, 0, 0, 0);
        if ( IsOpen )
        {
          if ( !v10 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_1C372B4(IsOpen);
            v10 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_58218524(
              v10,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_378581C *)Method_System_Collections_Generic_List_int___ctor___78055984);
            if ( !v10 )
              sub_1C372B4(v21);
          }
          System_Collections_Generic_List_int___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v10 )
    return System_Collections_Generic_List_int___ToArray(
             v10,
             (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  return 0;
}


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
  Il2CppObject *current; // x21
  int32_t monitor_high; // w2
  _BOOL8 v13; // x0
  int monitor; // w8
  int32_t v15; // w24
  int32_t v16; // w26
  int64_t klass_low; // x25
  _BOOL8 IsOpen; // x0
  System_Collections_Generic_List_int__o *v19; // x24
  __int64 v20; // x0
  System_Collections_Generic_List_int__o *v22; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C43901 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055984);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&ServantIndividualityMaster_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43901 = 1;
  }
  value = 0;
  memset(&v25, 0, sizeof(v25));
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
    sub_1C372B4(individualityList);
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                (DataManager_o *)individualityList,
                                                                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)individualityList,
                                                                                svtId,
                                                                                (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_44;
  buckets = individualityList[2].fields._buckets;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0);
  if ( !value )
    goto LABEL_44;
  v9 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v22 = 0;
  v25 = v23;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1C372B4(v10);
    monitor_high = HIDWORD(v25.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1C372B4(v10);
      v13 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v13 )
      {
        if ( !entity )
          sub_1C372B4(v13);
        if ( v9 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v9 )
          continue;
      }
    }
    if ( v9 >= (__int64)current[2].klass && (__int64)current[2].monitor > v9 )
    {
      monitor = (int)current[1].monitor;
      if ( monitor < 0 || monitor == limitCount )
      {
        v16 = (int32_t)current[3].monitor;
        v15 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v16, v15, klass_low, 0, 0, 0);
        if ( IsOpen )
        {
          v19 = v22;
          if ( !v22 )
          {
            if ( !buckets )
              sub_1C372B4(IsOpen);
            v19 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_58218524(
              v19,
              LODWORD(buckets->max_length) + 20,
              (const MethodInfo_378581C *)Method_System_Collections_Generic_List_int___ctor___78055984);
            if ( !v19 )
              sub_1C372B4(v20);
            System_Collections_Generic_List_int___AddRange(
              v19,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v22 = v19;
          System_Collections_Generic_List_int___AddRange(
            v19,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v22 )
    return System_Collections_Generic_List_int___ToArray(
             v22,
             (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4C438FF & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
    byte_4C438FF = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
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
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x23
  ServantIndividualityMaster_c *v13; // x0
  Il2CppClass *klass; // x8
  _QWORD *v15; // x9
  __int64 entries_low; // x10
  void **v17; // x8
  int32_t v18; // w21
  System_Collections_Generic_Dictionary_int__object__o *v19; // x22
  ServantIndividualityMaster_c *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x23
  ServantIndividualityMaster_c *v24; // x0
  Il2CppClass *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  void **v28; // x8
  Il2CppObject *v30; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C43904 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
    sub_1C37058(&ServantIndividualityMaster_TypeInfo);
    byte_4C43904 = 1;
  }
  v3 = ServantIndividualityMaster_TypeInfo;
  v30 = 0;
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
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)individualityList,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Count__);
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
                                                                                    (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
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
                (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
        {
          v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v12,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
          v13 = ServantIndividualityMaster_TypeInfo;
          value = (Il2CppObject *)v12;
          if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v13 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v13->static_fields->individualityList;
          if ( !individualityList )
            goto LABEL_45;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            individualityList,
            (int32_t)v8->fields._buckets,
            value,
            (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)value;
        if ( !value )
          goto LABEL_45;
        klass = value[1].klass;
        v15 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
        ++HIDWORD(value[1].monitor);
        if ( !klass )
          goto LABEL_45;
        entries_low = SLODWORD(individualityList->fields._entries);
        if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)individualityList,
            (Il2CppObject *)v8,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &klass->_1.image + entries_low;
          LODWORD(individualityList->fields._entries) = entries_low + 1;
          v17[4] = v8;
          sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v8, v10, v11);
        }
      }
    }
    v18 = 0;
    while ( 1 )
    {
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
      if ( !individualityList )
        break;
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                    (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                    v18,
                                                                                    (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
      if ( !individualityList )
        break;
      v19 = individualityList;
      if ( ((__int64)individualityList->fields._entries & 0x80000000) == 0 )
      {
        v20 = ServantIndividualityMaster_TypeInfo;
        if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v20 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v20->static_fields->individualityList;
        if ( !individualityList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                individualityList,
                (int32_t)v19->fields._buckets,
                &v30,
                (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
        {
          v23 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v23,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
          v24 = ServantIndividualityMaster_TypeInfo;
          v30 = (Il2CppObject *)v23;
          if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v24 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v24->static_fields->individualityList;
          if ( !individualityList )
            break;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            individualityList,
            (int32_t)v19->fields._buckets,
            v30,
            (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v30;
        if ( !v30 )
          break;
        v25 = v30[1].klass;
        v26 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
        ++HIDWORD(v30[1].monitor);
        if ( !v25 )
          break;
        v27 = SLODWORD(individualityList->fields._entries);
        if ( (unsigned int)v27 >= LODWORD(v25->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)individualityList,
            (Il2CppObject *)v19,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &v25->_1.image + v27;
          LODWORD(individualityList->fields._entries) = v27 + 1;
          v28[4] = v19;
          sub_1C36FFC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v19, v21, v22);
        }
      }
      if ( v6 == ++v18 )
        return 1;
    }
LABEL_45:
    sub_1C372B4(individualityList);
  }
  return 1;
}