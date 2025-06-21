void __fastcall ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1CE2A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__, v1);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo, v2);
    sub_1BCAFF8(&ServantIndividualityMaster_TypeInfo, v3);
    byte_4B1CE2A = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  ServantIndividualityMaster_TypeInfo->static_fields->individualityList = (struct System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantIndividualityMaster_TypeInfo->static_fields, (int32_t)v4, v5, v6);
}


void __fastcall ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE27 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__, method);
    byte_4B1CE27 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    235,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void __fastcall ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantIndividualityMaster_c *v6; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0

  if ( (byte_4B1CE28 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__Clear__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, v3);
    sub_1BCAFF8(&ServantIndividualityMaster_TypeInfo, v4);
    byte_4B1CE28 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_32CB270 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__Clear__);
  v6 = ServantIndividualityMaster_TypeInfo;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v6 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v6->static_fields->individualityList;
  if ( !individualityList )
    sub_1BCB254(0LL, v5);
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *__fastcall ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1CE23 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B1CE23 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_32CC8B8 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
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

  if ( (byte_4B1CE25 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor___76866488, v16);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v18);
    sub_1BCAFF8(&ServantIndividualityMaster_TypeInfo, v19);
    byte_4B1CE25 = 1;
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
          (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0LL);
  if ( !value )
LABEL_39:
    sub_1BCB254(individualityList, *(_QWORD *)&svtId);
  v23 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v43 = v41;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v25 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_1BCB254(v25, v26);
    monitor_high = HIDWORD(v43.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1BCB254(v25, v26);
      v29 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v29 )
      {
        if ( !entity )
          sub_1BCB254(v29, v30);
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
              sub_1BCB254(IsOpen, v36);
            v24 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_57263048(
              v24,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_369C3C8 *)Method_System_Collections_Generic_List_int___ctor___76866488);
            if ( !v24 )
              sub_1BCB254(v38, v39);
          }
          System_Collections_Generic_List_int___AddRange(
            v24,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v24 )
    return System_Collections_Generic_List_int___ToArray(
             v24,
             (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B1CE26 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&limitCount);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor___76866488, v17);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v19);
    sub_1BCAFF8(&ServantIndividualityMaster_TypeInfo, v20);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B1CE26 = 1;
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
    sub_1BCB254(individualityList, *(_QWORD *)&limitCount);
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                (DataManager_o *)individualityList,
                                                                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)individualityList,
                                                                                svtId,
                                                                                (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_44;
  buckets = individualityList[2].fields._buckets;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0LL);
  if ( !value )
    goto LABEL_44;
  v26 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v43 = 0LL;
  v46 = v44;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1BCB254(v27, v28);
    monitor_high = HIDWORD(v46.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1BCB254(v27, v28);
      v31 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v31 )
      {
        if ( !entity )
          sub_1BCB254(v31, v32);
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
              sub_1BCB254(IsOpen, v38);
            v39 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_57263048(
              v39,
              buckets->max_length + 20,
              (const MethodInfo_369C3C8 *)Method_System_Collections_Generic_List_int___ctor___76866488);
            if ( !v39 )
              sub_1BCB254(v40, v41);
            System_Collections_Generic_List_int___AddRange(
              v39,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v43 = v39;
          System_Collections_Generic_List_int___AddRange(
            v39,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v43 )
    return System_Collections_Generic_List_int___ToArray(
             v43,
             (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B1CE24 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__,
      entity);
    byte_4B1CE24 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
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
  ServantIndividualityMaster_c *v11; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  int32_t Count; // w0
  int32_t v14; // w20
  int32_t i; // w21
  System_Collections_Generic_Dictionary_int__object__o *v16; // x22
  ServantIndividualityMaster_c *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x23
  ServantIndividualityMaster_c *v21; // x0
  Il2CppClass *klass; // x8
  _QWORD *v23; // x9
  __int64 entries_low; // x10
  void **v25; // x8
  int32_t v26; // w21
  System_Collections_Generic_Dictionary_int__object__o *v27; // x22
  ServantIndividualityMaster_c *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_object__o *v31; // x23
  ServantIndividualityMaster_c *v32; // x0
  Il2CppClass *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  void **v36; // x8
  Il2CppObject *v38; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1CE29 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v9);
    sub_1BCAFF8(&ServantIndividualityMaster_TypeInfo, v10);
    byte_4B1CE29 = 1;
  }
  v11 = ServantIndividualityMaster_TypeInfo;
  v38 = 0LL;
  value = 0LL;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v11 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v11->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_45;
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)individualityList,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    for ( i = 0; i != v14; ++i )
    {
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
      if ( !individualityList )
        goto LABEL_45;
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                    (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                    i,
                                                                                    (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
      if ( !individualityList )
        goto LABEL_45;
      v16 = individualityList;
      if ( ((__int64)individualityList->fields._entries & 0x80000000) != 0 )
      {
        v17 = ServantIndividualityMaster_TypeInfo;
        if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v17 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v17->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_45;
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                individualityList,
                (int32_t)v16->fields._buckets,
                &value,
                (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
        {
          v20 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v20,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
          v21 = ServantIndividualityMaster_TypeInfo;
          value = (Il2CppObject *)v20;
          if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v21 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v21->static_fields->individualityList;
          if ( !individualityList )
            goto LABEL_45;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            individualityList,
            (int32_t)v16->fields._buckets,
            value,
            (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)value;
        if ( !value )
          goto LABEL_45;
        klass = value[1].klass;
        v23 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
        ++HIDWORD(value[1].monitor);
        if ( !klass )
          goto LABEL_45;
        entries_low = SLODWORD(individualityList->fields._entries);
        if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)individualityList,
            (Il2CppObject *)v16,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &klass->_1.image + entries_low;
          LODWORD(individualityList->fields._entries) = entries_low + 1;
          v25[4] = v16;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v16, v18, v19);
        }
      }
    }
    v26 = 0;
    while ( 1 )
    {
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
      if ( !individualityList )
        break;
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                    (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                    v26,
                                                                                    (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantIndividualityEntity__get_Item__);
      if ( !individualityList )
        break;
      v27 = individualityList;
      if ( ((__int64)individualityList->fields._entries & 0x80000000) == 0 )
      {
        v28 = ServantIndividualityMaster_TypeInfo;
        if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v28 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v28->static_fields->individualityList;
        if ( !individualityList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                individualityList,
                (int32_t)v27->fields._buckets,
                &v38,
                (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
        {
          v31 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v31,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
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
            (int32_t)v27->fields._buckets,
            v38,
            (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
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
            (Il2CppObject *)v27,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &v33->_1.image + v35;
          LODWORD(individualityList->fields._entries) = v35 + 1;
          v36[4] = v27;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v27, v29, v30);
        }
      }
      if ( v14 == ++v26 )
        return 1;
    }
LABEL_45:
    sub_1BCB254(individualityList, method);
  }
  return 1;
}