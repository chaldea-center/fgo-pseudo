void __fastcall ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B89D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
    sub_1B885B0(&ServantIndividualityMaster_TypeInfo);
    byte_4A5B89D = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  ServantIndividualityMaster_TypeInfo->static_fields->individualityList = (struct System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantIndividualityMaster_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B89A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
    byte_4A5B89A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    229,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void __fastcall ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantIndividualityMaster_c *v4; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0

  if ( (byte_4A5B89B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
    sub_1B885B0(&ServantIndividualityMaster_TypeInfo);
    byte_4A5B89B = 1;
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
    sub_1B8880C(0LL, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *__fastcall ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B896 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
    byte_4A5B896 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantIndividualityMaster__GetIndividuality(
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

  if ( (byte_4A5B898 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036520);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ServantIndividualityMaster_TypeInfo);
    byte_4A5B898 = 1;
  }
  v6 = ServantIndividualityMaster_TypeInfo;
  value = 0LL;
  memset(&v29, 0, sizeof(v29));
  entity = 0LL;
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
          (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0LL);
  if ( !value )
LABEL_39:
    sub_1B8880C(individualityList, *(_QWORD *)&svtId);
  v9 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v29 = v27;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v11 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1B8880C(v11, v12);
    monitor_high = HIDWORD(v29.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1B8880C(v11, v12);
      v15 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v15 )
      {
        if ( !entity )
          sub_1B8880C(v15, v16);
        if ( v9 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v9 )
          continue;
      }
    }
    if ( v9 >= (__int64)current[2].klass && (__int64)current[2].monitor > v9 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v19 = (int32_t)current[3].monitor;
        v18 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v19, v18, klass_low, 0, 0LL, 0LL);
        if ( IsOpen )
        {
          if ( !v10 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_1B8880C(IsOpen, v22);
            v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_55443500(
              v10,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_34E002C *)Method_System_Collections_Generic_List_int___ctor___76036520);
            if ( !v10 )
              sub_1B8880C(v24, v25);
          }
          System_Collections_Generic_List_int___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v10 )
    return System_Collections_Generic_List_int___ToArray(
             v10,
             (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantIndividualityMaster__GetIndividualityList(
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

  if ( (byte_4A5B899 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036520);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ServantIndividualityMaster_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B899 = 1;
  }
  value = 0LL;
  memset(&v29, 0, sizeof(v29));
  entity = 0LL;
  if ( (limitCount & 0x80000000) != 0 )
    return 0LL;
  v5 = ServantIndividualityMaster_TypeInfo;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v5 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v5->static_fields->individualityList;
  if ( !individualityList )
LABEL_44:
    sub_1B8880C(individualityList, *(_QWORD *)&limitCount);
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                (DataManager_o *)individualityList,
                                                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)individualityList,
                                                                                svtId,
                                                                                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_44;
  buckets = individualityList[2].fields._buckets;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0LL);
  if ( !value )
    goto LABEL_44;
  v9 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v26 = 0LL;
  v29 = v27;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1B8880C(v10, v11);
    monitor_high = HIDWORD(v29.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1B8880C(v10, v11);
      v14 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v14 )
      {
        if ( !entity )
          sub_1B8880C(v14, v15);
        if ( v9 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v9 )
          continue;
      }
    }
    if ( v9 >= (__int64)current[2].klass && (__int64)current[2].monitor > v9 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v18 = (int32_t)current[3].monitor;
        v17 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v18, v17, klass_low, 0, 0LL, 0LL);
        if ( IsOpen )
        {
          v22 = v26;
          if ( !v26 )
          {
            if ( !buckets )
              sub_1B8880C(IsOpen, v21);
            v22 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_55443500(
              v22,
              buckets->max_length + 20,
              (const MethodInfo_34E002C *)Method_System_Collections_Generic_List_int___ctor___76036520);
            if ( !v22 )
              sub_1B8880C(v23, v24);
            System_Collections_Generic_List_int___AddRange(
              v22,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v26 = v22;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v26 )
    return System_Collections_Generic_List_int___ToArray(
             v26,
             (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4A5B897 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
    byte_4A5B897 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
}


bool __fastcall ServantIndividualityMaster__preProcess(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  ServantIndividualityMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  int32_t Count; // w0
  int32_t v6; // w20
  int32_t v7; // w21
  System_Collections_Generic_Dictionary_int__object__o *v8; // x22
  __int64 methodPtr_low; // x9
  ServantIndividualityMaster_c *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *v13; // x23
  ServantIndividualityMaster_c *v14; // x0
  Il2CppClass *klass; // x8
  _QWORD *v16; // x9
  __int64 entries_low; // x10
  void **v18; // x8
  int32_t v19; // w21
  __int64 v20; // x9
  ServantIndividualityMaster_c *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_object__o *v24; // x23
  ServantIndividualityMaster_c *v25; // x0
  Il2CppClass *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  void **v29; // x8
  bool result; // w0
  const MethodInfo *v31; // x0
  Il2CppObject *v32; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B89C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
    sub_1B885B0(&ServantIndividualityEntity_TypeInfo);
    sub_1B885B0(&ServantIndividualityMaster_TypeInfo);
    byte_4A5B89C = 1;
  }
  v3 = ServantIndividualityMaster_TypeInfo;
  v32 = 0LL;
  value = 0LL;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v3 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_49;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)individualityList,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v6 = Count;
  v7 = 0;
  while ( 1 )
  {
    individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
    if ( !individualityList )
      goto LABEL_49;
    individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                  (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                  v7,
                                                                                  (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !individualityList )
      goto LABEL_49;
    method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
    v8 = individualityList;
    methodPtr_low = LOBYTE(ServantIndividualityEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(individualityList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantIndividualityEntity_TypeInfo )
    {
      break;
    }
    if ( ((__int64)individualityList->fields._entries & 0x80000000) != 0 )
    {
      v10 = ServantIndividualityMaster_TypeInfo;
      if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
        v10 = ServantIndividualityMaster_TypeInfo;
      }
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v10->static_fields->individualityList;
      if ( !individualityList )
        goto LABEL_49;
      if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
              individualityList,
              (int32_t)v8->fields._buckets,
              &value,
              (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
      {
        v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
        v14 = ServantIndividualityMaster_TypeInfo;
        value = (Il2CppObject *)v13;
        if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v14 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v14->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_49;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          individualityList,
          (int32_t)v8->fields._buckets,
          value,
          (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
      }
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)value;
      if ( !value )
        goto LABEL_49;
      klass = value[1].klass;
      v16 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
      ++HIDWORD(value[1].monitor);
      if ( !klass )
        goto LABEL_49;
      entries_low = SLODWORD(individualityList->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)individualityList,
          (Il2CppObject *)v8,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &klass->_1.image + entries_low;
        LODWORD(individualityList->fields._entries) = entries_low + 1;
        v18[4] = v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v8, v11, v12);
      }
    }
    if ( v6 == ++v7 )
    {
      v19 = 0;
      while ( 1 )
      {
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
        if ( !individualityList )
          break;
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                      (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                      v19,
                                                                                      (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !individualityList )
          break;
        method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
        v8 = individualityList;
        v20 = LOBYTE(ServantIndividualityEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(individualityList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v20
          || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v20 - 1] != ServantIndividualityEntity_TypeInfo )
        {
          goto LABEL_50;
        }
        if ( ((__int64)individualityList->fields._entries & 0x80000000) == 0 )
        {
          v21 = ServantIndividualityMaster_TypeInfo;
          if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v21 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v21->static_fields->individualityList;
          if ( !individualityList )
            break;
          if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                  individualityList,
                  (int32_t)v8->fields._buckets,
                  &v32,
                  (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
          {
            v24 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v24,
              (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
            v25 = ServantIndividualityMaster_TypeInfo;
            v32 = (Il2CppObject *)v24;
            if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
              v25 = ServantIndividualityMaster_TypeInfo;
            }
            individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v25->static_fields->individualityList;
            if ( !individualityList )
              break;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              individualityList,
              (int32_t)v8->fields._buckets,
              v32,
              (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v32;
          if ( !v32 )
            break;
          v26 = v32[1].klass;
          v27 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
          ++HIDWORD(v32[1].monitor);
          if ( !v26 )
            break;
          v28 = SLODWORD(individualityList->fields._entries);
          if ( (unsigned int)v28 >= LODWORD(v26->_1.namespaze) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)individualityList,
              (Il2CppObject *)v8,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &v26->_1.image + v28;
            LODWORD(individualityList->fields._entries) = v28 + 1;
            v29[4] = v8;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v8, v22, v23);
          }
        }
        if ( v6 == ++v19 )
          return 1;
      }
LABEL_49:
      sub_1B8880C(individualityList, method);
    }
  }
LABEL_50:
  sub_1B88ACC(v8);
  ServantIndividualityMaster___cctor(v31);
  return result;
}