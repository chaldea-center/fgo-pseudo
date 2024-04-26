void __fastcall ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4353C54 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
    sub_B70694(&ServantIndividualityMaster_TypeInfo);
    byte_4353C54 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v1,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  static_fields = (BattleServantConfConponent_o *)ServantIndividualityMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4353C51 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
    byte_4353C51 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    228,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void __fastcall ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantIndividualityMaster_c *v4; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *individualityList; // x0

  if ( (byte_4353C52 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
    sub_B70694(&ServantIndividualityMaster_TypeInfo);
    byte_4353C52 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v4 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v4->static_fields->individualityList;
  if ( !individualityList )
    sub_B7076C(0LL, v3);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    individualityList,
    (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *__fastcall ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4353C4D & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
    byte_4353C4D = 1;
  }
  PK = ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_21C0890 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantIndividualityMaster__GetIndividuality(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantIndividualityMaster_c *v6; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *individualityList; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  int64_t v9; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x20
  int32_t monitor_high; // w2
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int monitor; // w8
  int32_t v17; // w23
  int32_t v18; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_int__o *v22; // x23
  Il2CppClass *klass; // x23
  System_Collections_Generic_List_int__o *v24; // x0
  int32_t namespaze; // w1
  __int64 v26; // x0
  __int64 v27; // x1
  System_Int32_array *result; // x0
  System_Collections_Generic_List_int__o *v29; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+30h] [xbp-70h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4353C4F & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor___69164928);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&ServantIndividualityMaster_TypeInfo);
    byte_4353C4F = 1;
  }
  value = 0LL;
  entity = 0LL;
  memset(&v32, 0, sizeof(v32));
  v6 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v6 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_43;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)NetworkManager__getTime(0LL);
  if ( !value )
LABEL_43:
    sub_B7076C(individualityList, *(_QWORD *)&svtId);
  v9 = (int64_t)individualityList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v29 = 0LL;
  v32 = v30;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v32.fields.current;
    if ( !v32.fields.current )
      sub_B7076C(v10, v11);
    monitor_high = HIDWORD(v32.fields.current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B7076C(v10, v11);
      v14 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              monitor_high,
              (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v14 )
      {
        if ( !entity )
          sub_B7076C(v14, v15);
        if ( v9 < entity->fields.targetId || *(_QWORD *)&entity->fields.eventId <= v9 )
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
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v18, v17, klass_low, 0, 0LL);
        if ( IsOpen )
        {
          v22 = v29;
          if ( !v29 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_B7076C(IsOpen, v21);
            v24 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
            namespaze = (int32_t)klass->_1.namespaze;
            v22 = v24;
            System_Collections_Generic_List_int____ctor_51074380(
              v24,
              namespaze,
              (const MethodInfo_30B554C *)Method_System_Collections_Generic_List_int___ctor___69164928);
            if ( !v22 )
              sub_B7076C(v26, v27);
          }
          v29 = v22;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  result = (System_Int32_array *)v29;
  if ( v29 )
    return System_Collections_Generic_List_int___ToArray(
             v29,
             (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantIndividualityMaster__GetIndividualityList(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantIndividualityMaster_c *v5; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *individualityList; // x0
  struct System_Int32_array *buckets; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  int64_t v9; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x28
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
  System_Collections_Generic_List_int__o *v26; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_int__o *v27; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+30h] [xbp-70h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4353C50 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor___69164928);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&ServantIndividualityMaster_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353C50 = 1;
  }
  value = 0LL;
  memset(&v30, 0, sizeof(v30));
  entity = 0LL;
  if ( (limitCount & 0x80000000) != 0 )
    return 0LL;
  v5 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v5 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v5->static_fields->individualityList;
  if ( !individualityList )
LABEL_48:
    sub_B7076C(individualityList, *(_QWORD *)&limitCount);
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_48;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)individualityList, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_48;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity((DataMasterBase_WarMaster__WarEntity__int__o *)individualityList, svtId, (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_48;
  buckets = individualityList[2].fields.buckets;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)NetworkManager__getTime(0LL);
  if ( !value )
    goto LABEL_48;
  v9 = (int64_t)individualityList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v26 = 0LL;
  v30 = v28;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v30.fields.current;
    if ( !v30.fields.current )
      sub_B7076C(v10, v11);
    monitor_high = HIDWORD(v30.fields.current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B7076C(v10, v11);
      v14 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              monitor_high,
              (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v14 )
      {
        if ( !entity )
          sub_B7076C(v14, v15);
        if ( v9 < entity->fields.targetId || *(_QWORD *)&entity->fields.eventId <= v9 )
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
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v18, v17, klass_low, 0, 0LL);
        if ( IsOpen )
        {
          v22 = v26;
          if ( !v26 )
          {
            if ( !buckets )
              sub_B7076C(IsOpen, v21);
            v27 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_51074380(
              v27,
              buckets->max_length + 20,
              (const MethodInfo_30B554C *)Method_System_Collections_Generic_List_int___ctor___69164928);
            v22 = v27;
            if ( !v27 )
              sub_B7076C(v23, v24);
            System_Collections_Generic_List_int___AddRange(
              v27,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v26 = v22;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v26 )
    return System_Collections_Generic_List_int___ToArray(
             v26,
             (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *PK; // x2

  if ( (byte_4353C4E & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
    byte_4353C4E = 1;
  }
  PK = ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
}


bool __fastcall ServantIndividualityMaster__preProcess(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  ServantIndividualityMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *individualityList; // x0
  int32_t Count; // w0
  int32_t v6; // w20
  int32_t v7; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v8; // x22
  __int64 v9; // x9
  ServantIndividualityMaster_c *v10; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x23
  ServantIndividualityMaster_c *v12; // x0
  int32_t v13; // w21
  __int64 v14; // x9
  ServantIndividualityMaster_c *v15; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x23
  ServantIndividualityMaster_c *v17; // x0
  bool result; // w0
  const MethodInfo *v19; // x0
  WarBoardAIRoute_RouteData_o *v20; // [xsp+0h] [xbp-60h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4353C53 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
    sub_B70694(&ServantIndividualityEntity_TypeInfo);
    sub_B70694(&ServantIndividualityMaster_TypeInfo);
    byte_4353C53 = 1;
  }
  v20 = 0LL;
  value = 0LL;
  v3 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v3 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v3->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_48;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    individualityList,
    (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_48;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v6 = Count;
  v7 = 0;
  while ( 1 )
  {
    individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
    if ( !individualityList )
      goto LABEL_48;
    individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList, v7, (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !individualityList )
      goto LABEL_48;
    method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
    v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)individualityList;
    v9 = *(&ServantIndividualityEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&individualityList->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v9 - 1] != ServantIndividualityEntity_TypeInfo )
    {
      break;
    }
    if ( ((__int64)individualityList->fields.entries & 0x80000000) != 0 )
    {
      v10 = ServantIndividualityMaster_TypeInfo;
      if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
        v10 = ServantIndividualityMaster_TypeInfo;
      }
      individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v10->static_fields->individualityList;
      if ( !individualityList )
        goto LABEL_48;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)individualityList,
              v8->fields.missionTargetId,
              &value,
              (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
      {
        v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v11,
          (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
        v12 = ServantIndividualityMaster_TypeInfo;
        value = (WarBoardEvalValueSquare_CalcEval_o *)v11;
        if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v12 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v12->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_48;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)individualityList,
          v8->fields.missionTargetId,
          (WarBoardAIRoute_RouteData_o *)value,
          (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
      }
      individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)value;
      if ( !value )
        goto LABEL_48;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
        v8,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
    }
    if ( ++v7 >= v6 )
    {
      v13 = 0;
      while ( 1 )
      {
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
        if ( !individualityList )
          break;
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList, v13, (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !individualityList )
          break;
        method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
        v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)individualityList;
        v14 = *(&ServantIndividualityEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&individualityList->klass->_2.bitflags2 + 1) < (unsigned int)v14
          || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v14 - 1] != ServantIndividualityEntity_TypeInfo )
        {
          goto LABEL_49;
        }
        if ( ((__int64)individualityList->fields.entries & 0x80000000) == 0 )
        {
          v15 = ServantIndividualityMaster_TypeInfo;
          if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v15 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v15->static_fields->individualityList;
          if ( !individualityList )
            break;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)individualityList,
                  v8->fields.missionTargetId,
                  (WarBoardEvalValueSquare_CalcEval_o **)&v20,
                  (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
          {
            v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v16,
              (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
            v17 = ServantIndividualityMaster_TypeInfo;
            v20 = (WarBoardAIRoute_RouteData_o *)v16;
            if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
              v17 = ServantIndividualityMaster_TypeInfo;
            }
            individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v17->static_fields->individualityList;
            if ( !individualityList )
              break;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)individualityList,
              v8->fields.missionTargetId,
              v20,
              (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
          }
          individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v20;
          if ( !v20 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v20,
            v8,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
        }
        if ( ++v13 >= v6 )
          return 1;
      }
LABEL_48:
      sub_B7076C(individualityList, method);
    }
  }
LABEL_49:
  sub_B70A60(v8);
  ServantIndividualityMaster___cctor(v19);
  return result;
}