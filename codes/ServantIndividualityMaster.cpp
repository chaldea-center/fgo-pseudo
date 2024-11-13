void __fastcall ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_int__object__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B16950 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantIndividualityMaster_TypeInfo, v6, v7);
    byte_4B16950 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo,
                                                                 v1,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  ServantIndividualityMaster_TypeInfo->static_fields->individualityList = (struct System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantIndividualityMaster_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1694D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__,
      method,
      v2);
    byte_4B1694D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    229,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void __fastcall ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  ServantIndividualityMaster_c *v7; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0

  if ( (byte_4B1694E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__,
      method,
      v2);
    sub_1BCA7E0(&ServantIndividualityMaster_TypeInfo, v4, v5);
    byte_4B1694E = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v7 = ServantIndividualityMaster_TypeInfo;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, v6);
    v7 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v7->static_fields->individualityList;
  if ( !individualityList )
    sub_1BCAA3C(0LL, v6);
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *__fastcall ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16949 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&idx);
    byte_4B16949 = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantIndividualityMaster__GetIndividuality(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  ServantIndividualityMaster_c *v34; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  Il2CppObject *Master_object; // x21
  __int64 v39; // x22
  System_Collections_Generic_List_int__o *v40; // x20
  _BOOL8 v41; // x0
  __int64 v42; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w2
  _BOOL8 v45; // x0
  int monitor; // w8
  int32_t v47; // w23
  int32_t v48; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  Il2CppClass *klass; // x23
  __int64 v55; // x0
  __int64 v56; // x1
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B1694B & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__,
      v12,
      v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787448, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v28, v29);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&ServantIndividualityMaster_TypeInfo, v32, v33);
    byte_4B1694B = 1;
  }
  v34 = ServantIndividualityMaster_TypeInfo;
  value = 0LL;
  memset(&v60, 0, sizeof(v60));
  entity = 0LL;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, *(_QWORD *)&svtId);
    v34 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v34->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_39;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0LL);
  if ( !value )
LABEL_39:
    sub_1BCAA3C(individualityList, *(_QWORD *)&svtId);
  v39 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v60 = v58;
  v40 = 0LL;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v41 )
      break;
    current = v60.fields._current;
    if ( !v60.fields._current )
      sub_1BCAA3C(v41, v42);
    monitor_high = HIDWORD(v60.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1BCAA3C(v41, v42);
      v45 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v45 )
      {
        if ( !entity )
          sub_1BCAA3C(v45, v42);
        if ( v39 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v39 )
          continue;
      }
    }
    if ( v39 >= (__int64)current[2].klass && (__int64)current[2].monitor > v39 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v48 = (int32_t)current[3].monitor;
        v47 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v42);
        IsOpen = CondType__IsOpen(v48, v47, klass_low, 0, 0LL, 0LL);
        if ( IsOpen )
        {
          if ( !v40 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_1BCAA3C(IsOpen, v51);
            v40 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              v51,
                                                              v52,
                                                              v53);
            System_Collections_Generic_List_int____ctor_56116308(
              v40,
              (int32_t)klass->_1.namespaze,
              (const MethodInfo_3584454 *)Method_System_Collections_Generic_List_int___ctor___76787448);
            if ( !v40 )
              sub_1BCAA3C(v55, v56);
          }
          System_Collections_Generic_List_int___AddRange(
            v40,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v40 )
    return System_Collections_Generic_List_int___ToArray(
             v40,
             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantIndividualityMaster__GetIndividualityList(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  ServantIndividualityMaster_c *v39; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  struct System_Int32_array *buckets; // x19
  __int64 v42; // x1
  Il2CppObject *Master_object; // x22
  __int64 v44; // x23
  _BOOL8 v45; // x0
  __int64 v46; // x1
  Il2CppObject *current; // x21
  int32_t monitor_high; // w2
  _BOOL8 v49; // x0
  int monitor; // w8
  int32_t v51; // w24
  int32_t v52; // w26
  int64_t klass_low; // x25
  _BOOL8 IsOpen; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_int__o *v58; // x24
  __int64 v59; // x0
  __int64 v60; // x1
  System_Collections_Generic_List_int__o *v62; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B1694C & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__,
      v15,
      v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787448, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v31, v32);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&ServantIndividualityMaster_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    byte_4B1694C = 1;
  }
  value = 0LL;
  memset(&v65, 0, sizeof(v65));
  entity = 0LL;
  if ( (limitCount & 0x80000000) != 0 )
    return 0LL;
  v39 = ServantIndividualityMaster_TypeInfo;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, *(_QWORD *)&limitCount);
    v39 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v39->static_fields->individualityList;
  if ( !individualityList )
LABEL_44:
    sub_1BCAA3C(individualityList, *(_QWORD *)&limitCount);
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataManager__GetMasterData_object_(
                                                                                (DataManager_o *)individualityList,
                                                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_44;
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)individualityList,
                                                                                svtId,
                                                                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_44;
  buckets = individualityList[2].fields._buckets;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&limitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v42);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)NetworkManager__getTime(0LL);
  if ( !value )
    goto LABEL_44;
  v44 = (__int64)individualityList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v62 = 0LL;
  v65 = v63;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v45 )
      break;
    current = v65.fields._current;
    if ( !v65.fields._current )
      sub_1BCAA3C(v45, v46);
    monitor_high = HIDWORD(v65.fields._current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_object )
        sub_1BCAA3C(v45, v46);
      v49 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              monitor_high,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v49 )
      {
        if ( !entity )
          sub_1BCAA3C(v49, v46);
        if ( v44 < (__int64)entity[5].monitor || (__int64)entity[6].klass <= v44 )
          continue;
      }
    }
    if ( v44 >= (__int64)current[2].klass && (__int64)current[2].monitor > v44 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v52 = (int32_t)current[3].monitor;
        v51 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v46);
        IsOpen = CondType__IsOpen(v52, v51, klass_low, 0, 0LL, 0LL);
        if ( IsOpen )
        {
          v58 = v62;
          if ( !v62 )
          {
            if ( !buckets )
              sub_1BCAA3C(IsOpen, v55);
            v58 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              v55,
                                                              v56,
                                                              v57);
            System_Collections_Generic_List_int____ctor_56116308(
              v58,
              buckets->max_length + 20,
              (const MethodInfo_3584454 *)Method_System_Collections_Generic_List_int___ctor___76787448);
            if ( !v58 )
              sub_1BCAA3C(v59, v60);
            System_Collections_Generic_List_int___AddRange(
              v58,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v62 = v58;
          System_Collections_Generic_List_int___AddRange(
            v58,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v62 )
    return System_Collections_Generic_List_int___ToArray(
             v62,
             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B1694A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B1694A = 1;
  }
  PK = (Il2CppObject *)ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
}


bool __fastcall ServantIndividualityMaster__preProcess(ServantIndividualityMaster_o *this, const MethodInfo *method)
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
  ServantIndividualityMaster_c *v22; // x0
  System_Collections_Generic_Dictionary_int__object__o *individualityList; // x0
  int32_t Count; // w0
  int32_t v25; // w20
  int32_t v26; // w21
  int64_t v27; // x22
  __int64 methodPtr_low; // x9
  ServantIndividualityMaster_c *v29; // x0
  int64_t v30; // x2
  __int64 v31; // x3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_List_object__o *v36; // x23
  ServantIndividualityMaster_c *v37; // x0
  Il2CppClass *klass; // x8
  _QWORD *v39; // x9
  __int64 entries_low; // x10
  void **v41; // x8
  int32_t v42; // w21
  __int64 v43; // x9
  ServantIndividualityMaster_c *v44; // x0
  int64_t v45; // x2
  __int64 v46; // x3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_List_object__o *v51; // x23
  ServantIndividualityMaster_c *v52; // x0
  Il2CppClass *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  void **v56; // x8
  bool result; // w0
  const MethodInfo *v58; // x0
  Il2CppObject *v59; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1694F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, v6, v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&ServantIndividualityEntity_TypeInfo, v18, v19);
    sub_1BCA7E0(&ServantIndividualityMaster_TypeInfo, v20, v21);
    byte_4B1694F = 1;
  }
  v22 = ServantIndividualityMaster_TypeInfo;
  v59 = 0LL;
  value = 0LL;
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, method);
    v22 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v22->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_int__object___Clear(
    individualityList,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_49;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)individualityList,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v25 = Count;
  v26 = 0;
  while ( 1 )
  {
    individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
    if ( !individualityList )
      goto LABEL_49;
    individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                  (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                  v26,
                                                                                  (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !individualityList )
      goto LABEL_49;
    method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
    v27 = (int64_t)individualityList;
    methodPtr_low = LOBYTE(ServantIndividualityEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(individualityList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantIndividualityEntity_TypeInfo )
    {
      break;
    }
    if ( ((__int64)individualityList->fields._entries & 0x80000000) != 0 )
    {
      v29 = ServantIndividualityMaster_TypeInfo;
      if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, ServantIndividualityEntity_TypeInfo);
        v29 = ServantIndividualityMaster_TypeInfo;
      }
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v29->static_fields->individualityList;
      if ( !individualityList )
        goto LABEL_49;
      if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
              individualityList,
              *(_DWORD *)(v27 + 16),
              &value,
              (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
      {
        v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo,
                                                             method,
                                                             v30,
                                                             v31);
        System_Collections_Generic_List_object____ctor(
          v36,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
        v37 = ServantIndividualityMaster_TypeInfo;
        value = (Il2CppObject *)v36;
        if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, method);
          v37 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v37->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_49;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          individualityList,
          *(_DWORD *)(v27 + 16),
          value,
          (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
      }
      individualityList = (System_Collections_Generic_Dictionary_int__object__o *)value;
      if ( !value )
        goto LABEL_49;
      klass = value[1].klass;
      v39 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
      ++HIDWORD(value[1].monitor);
      if ( !klass )
        goto LABEL_49;
      entries_low = SLODWORD(individualityList->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)individualityList,
          (Il2CppObject *)v27,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &klass->_1.image + entries_low;
        LODWORD(individualityList->fields._entries) = entries_low + 1;
        v41[4] = (void *)v27;
        sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), v27, v30, v31, v32, v33, v34, v35);
      }
    }
    if ( v25 == ++v26 )
    {
      v42 = 0;
      while ( 1 )
      {
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
        if ( !individualityList )
          break;
        individualityList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                                      (System_Collections_ObjectModel_Collection_T__o *)individualityList,
                                                                                      v42,
                                                                                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !individualityList )
          break;
        method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
        v27 = (int64_t)individualityList;
        v43 = LOBYTE(ServantIndividualityEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(individualityList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v43
          || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v43 - 1] != ServantIndividualityEntity_TypeInfo )
        {
          goto LABEL_50;
        }
        if ( ((__int64)individualityList->fields._entries & 0x80000000) == 0 )
        {
          v44 = ServantIndividualityMaster_TypeInfo;
          if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, ServantIndividualityEntity_TypeInfo);
            v44 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v44->static_fields->individualityList;
          if ( !individualityList )
            break;
          if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                  individualityList,
                  *(_DWORD *)(v27 + 16),
                  &v59,
                  (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
          {
            v51 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo,
                                                                 method,
                                                                 v45,
                                                                 v46);
            System_Collections_Generic_List_object____ctor(
              v51,
              (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
            v52 = ServantIndividualityMaster_TypeInfo;
            v59 = (Il2CppObject *)v51;
            if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, method);
              v52 = ServantIndividualityMaster_TypeInfo;
            }
            individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v52->static_fields->individualityList;
            if ( !individualityList )
              break;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              individualityList,
              *(_DWORD *)(v27 + 16),
              v59,
              (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
          }
          individualityList = (System_Collections_Generic_Dictionary_int__object__o *)v59;
          if ( !v59 )
            break;
          v53 = v59[1].klass;
          v54 = Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__;
          ++HIDWORD(v59[1].monitor);
          if ( !v53 )
            break;
          v55 = SLODWORD(individualityList->fields._entries);
          if ( (unsigned int)v55 >= LODWORD(v53->_1.namespaze) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)individualityList,
              (Il2CppObject *)v27,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &v53->_1.image + v55;
            LODWORD(individualityList->fields._entries) = v55 + 1;
            v56[4] = (void *)v27;
            sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v27, v45, v46, v47, v48, v49, v50);
          }
        }
        if ( v25 == ++v42 )
          return 1;
      }
LABEL_49:
      sub_1BCAA3C(individualityList, method);
    }
  }
LABEL_50:
  sub_1BCACFC(v27);
  ServantIndividualityMaster___cctor(v58);
  return result;
}