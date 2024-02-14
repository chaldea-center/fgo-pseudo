void __fastcall ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4216937 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo, v3);
    sub_B0D8A4(&ServantIndividualityMaster_TypeInfo, v4);
    byte_4216937 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo,
                                                                                                  v1,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  static_fields = (BattleServantConfConponent_o *)ServantIndividualityMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216934 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__, method);
    byte_4216934 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    227,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void __fastcall ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantIndividualityMaster_c *v4; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *individualityList; // x0

  if ( (byte_4216935 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, method);
    sub_B0D8A4(&ServantIndividualityMaster_TypeInfo, v3);
    byte_4216935 = 1;
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
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    individualityList,
    (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *__fastcall ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4216930 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4216930 = 1;
  }
  PK = ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_266A024 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *individualityList; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  int64_t v23; // x22
  _BOOL8 v24; // x0
  Il2CppObject *current; // x20
  int32_t monitor_high; // w2
  _BOOL8 v27; // x0
  int monitor; // w8
  int32_t v29; // w23
  int32_t v30; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_int__o *v35; // x23
  Il2CppClass *klass; // x23
  System_Collections_Generic_List_int__o *v37; // x0
  int32_t namespaze; // w1
  __int64 v39; // x0
  System_Int32_array *result; // x0
  System_Collections_Generic_List_int__o *v41; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+30h] [xbp-70h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4216932 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884952, v16);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B0D8A4(&NetworkManager_TypeInfo, v18);
    sub_B0D8A4(&ServantIndividualityMaster_TypeInfo, v19);
    byte_4216932 = 1;
  }
  value = 0LL;
  entity = 0LL;
  memset(&v44, 0, sizeof(v44));
  v20 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v20 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v20->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_43;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)NetworkManager__getTime(0LL);
  if ( !value )
LABEL_43:
    sub_B0D97C(individualityList);
  v23 = (int64_t)individualityList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v41 = 0LL;
  v44 = v42;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v24 )
      break;
    current = v44.fields.current;
    if ( !v44.fields.current )
      sub_B0D97C(v24);
    monitor_high = HIDWORD(v44.fields.current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B0D97C(v24);
      v27 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              monitor_high,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v27 )
      {
        if ( !entity )
          sub_B0D97C(v27);
        if ( v23 < entity->fields.targetId || *(_QWORD *)&entity->fields.eventId <= v23 )
          continue;
      }
    }
    if ( v23 >= (__int64)current[2].klass && (__int64)current[2].monitor > v23 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v30 = (int32_t)current[3].monitor;
        v29 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v30, v29, klass_low, 0, 0LL);
        if ( IsOpen )
        {
          v35 = v41;
          if ( !v41 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_B0D97C(IsOpen);
            v37 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              v33,
                                                              v34);
            namespaze = (int32_t)klass->_1.namespaze;
            v35 = v37;
            System_Collections_Generic_List_int____ctor_50000500(
              v37,
              namespaze,
              (const MethodInfo_2FAF274 *)Method_System_Collections_Generic_List_int___ctor___67884952);
            if ( !v35 )
              sub_B0D97C(v39);
          }
          v41 = v35;
          System_Collections_Generic_List_int___AddRange(
            v35,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  result = (System_Int32_array *)v41;
  if ( v41 )
    return System_Collections_Generic_List_int___ToArray(
             v41,
             (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  return result;
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *individualityList; // x0
  struct System_Int32_array *buckets; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  int64_t v26; // x23
  _BOOL8 v27; // x0
  Il2CppObject *current; // x28
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
  System_Collections_Generic_List_int__o *v41; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_int__o *v42; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+30h] [xbp-70h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4216933 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&limitCount);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884952, v17);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B0D8A4(&NetworkManager_TypeInfo, v19);
    sub_B0D8A4(&ServantIndividualityMaster_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4216933 = 1;
  }
  value = 0LL;
  memset(&v45, 0, sizeof(v45));
  entity = 0LL;
  if ( (limitCount & 0x80000000) != 0 )
    return 0LL;
  v22 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v22 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v22->static_fields->individualityList;
  if ( !individualityList )
LABEL_48:
    sub_B0D97C(individualityList);
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_48;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)individualityList, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_48;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity((DataMasterBase_WarMaster__WarEntity__int__o *)individualityList, svtId, (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_48;
  buckets = individualityList[2].fields.buckets;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)NetworkManager__getTime(0LL);
  if ( !value )
    goto LABEL_48;
  v26 = (int64_t)individualityList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v41 = 0LL;
  v45 = v43;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v45.fields.current;
    if ( !v45.fields.current )
      sub_B0D97C(v27);
    monitor_high = HIDWORD(v45.fields.current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B0D97C(v27);
      v30 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              monitor_high,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v30 )
      {
        if ( !entity )
          sub_B0D97C(v30);
        if ( v26 < entity->fields.targetId || *(_QWORD *)&entity->fields.eventId <= v26 )
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
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v33, v32, klass_low, 0, 0LL);
        if ( IsOpen )
        {
          v38 = v41;
          if ( !v41 )
          {
            if ( !buckets )
              sub_B0D97C(IsOpen);
            v42 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              v36,
                                                              v37);
            System_Collections_Generic_List_int____ctor_50000500(
              v42,
              buckets->max_length + 20,
              (const MethodInfo_2FAF274 *)Method_System_Collections_Generic_List_int___ctor___67884952);
            v38 = v42;
            if ( !v42 )
              sub_B0D97C(v39);
            System_Collections_Generic_List_int___AddRange(
              v42,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v41 = v38;
          System_Collections_Generic_List_int___AddRange(
            v38,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v41 )
    return System_Collections_Generic_List_int___ToArray(
             v41,
             (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4216931 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__,
      entity);
    byte_4216931 = 1;
  }
  PK = ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *individualityList; // x0
  int32_t Count; // w0
  int32_t v15; // w20
  int32_t v16; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x22
  __int64 v18; // x9
  ServantIndividualityMaster_c *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x23
  ServantIndividualityMaster_c *v23; // x0
  int32_t v24; // w21
  __int64 v25; // x9
  ServantIndividualityMaster_c *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x23
  ServantIndividualityMaster_c *v30; // x0
  bool result; // w0
  const MethodInfo *v32; // x0
  WarBoardAIRoute_RouteData_o *v33; // [xsp+0h] [xbp-60h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4216936 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v9);
    sub_B0D8A4(&ServantIndividualityEntity_TypeInfo, v10);
    sub_B0D8A4(&ServantIndividualityMaster_TypeInfo, v11);
    byte_4216936 = 1;
  }
  v33 = 0LL;
  value = 0LL;
  v12 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v12 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v12->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_48;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    individualityList,
    (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_48;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
    if ( !individualityList )
      goto LABEL_48;
    individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList, v16, (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !individualityList )
      goto LABEL_48;
    v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)individualityList;
    v18 = *(&ServantIndividualityEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&individualityList->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v18 - 1] != ServantIndividualityEntity_TypeInfo )
    {
      break;
    }
    if ( ((__int64)individualityList->fields.entries & 0x80000000) != 0 )
    {
      v19 = ServantIndividualityMaster_TypeInfo;
      if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
        v19 = ServantIndividualityMaster_TypeInfo;
      }
      individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v19->static_fields->individualityList;
      if ( !individualityList )
        goto LABEL_48;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)individualityList,
              v17->fields.missionTargetId,
              &value,
              (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
      {
        v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v20, v21);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v22,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
        v23 = ServantIndividualityMaster_TypeInfo;
        value = (WarBoardEvalValueSquare_CalcEval_o *)v22;
        if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v23 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v23->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_48;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)individualityList,
          v17->fields.missionTargetId,
          (WarBoardAIRoute_RouteData_o *)value,
          (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
      }
      individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)value;
      if ( !value )
        goto LABEL_48;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
        v17,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
    }
    if ( ++v16 >= v15 )
    {
      v24 = 0;
      while ( 1 )
      {
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
        if ( !individualityList )
          break;
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList, v24, (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !individualityList )
          break;
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)individualityList;
        v25 = *(&ServantIndividualityEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&individualityList->klass->_2.bitflags2 + 1) < (unsigned int)v25
          || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v25 - 1] != ServantIndividualityEntity_TypeInfo )
        {
          goto LABEL_49;
        }
        if ( ((__int64)individualityList->fields.entries & 0x80000000) == 0 )
        {
          v26 = ServantIndividualityMaster_TypeInfo;
          if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v26 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v26->static_fields->individualityList;
          if ( !individualityList )
            break;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)individualityList,
                  v17->fields.missionTargetId,
                  (WarBoardEvalValueSquare_CalcEval_o **)&v33,
                  (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
          {
            v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v27, v28);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v29,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
            v30 = ServantIndividualityMaster_TypeInfo;
            v33 = (WarBoardAIRoute_RouteData_o *)v29;
            if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
              v30 = ServantIndividualityMaster_TypeInfo;
            }
            individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v30->static_fields->individualityList;
            if ( !individualityList )
              break;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)individualityList,
              v17->fields.missionTargetId,
              v33,
              (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
          }
          individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v33;
          if ( !v33 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33,
            v17,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
        }
        if ( ++v24 >= v15 )
          return 1;
      }
LABEL_48:
      sub_B0D97C(individualityList);
    }
  }
LABEL_49:
  v32 = (const MethodInfo *)sub_B0DC70(v17);
  ServantIndividualityMaster___cctor(v32);
  return result;
}