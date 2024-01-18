void __fastcall ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4189FAE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo, v2);
    sub_B2C35C(&ServantIndividualityMaster_TypeInfo, v3);
    byte_4189FAE = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  static_fields = (BattleServantConfConponent_o *)ServantIndividualityMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189FAB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__, method);
    byte_4189FAB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    227,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void __fastcall ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantIndividualityMaster_c *v5; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *individualityList; // x0

  if ( (byte_4189FAC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, method);
    sub_B2C35C(&ServantIndividualityMaster_TypeInfo, v3);
    byte_4189FAC = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v5 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v5 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v5->static_fields->individualityList;
  if ( !individualityList )
    sub_B2C434(0LL, v4);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    individualityList,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *__fastcall ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189FA7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4189FA7 = 1;
  }
  PK = ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
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
  __int64 v25; // x1
  Il2CppObject *current; // x20
  int32_t monitor_high; // w2
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int monitor; // w8
  int32_t v31; // w23
  int32_t v32; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_int__o *v36; // x23
  Il2CppClass *klass; // x23
  System_Collections_Generic_List_int__o *v38; // x0
  int32_t namespaze; // w1
  __int64 v40; // x0
  __int64 v41; // x1
  System_Int32_array *result; // x0
  System_Collections_Generic_List_int__o *v43; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+30h] [xbp-70h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4189FA9 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311392, v16);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&ServantIndividualityMaster_TypeInfo, v19);
    byte_4189FA9 = 1;
  }
  value = 0LL;
  entity = 0LL;
  memset(&v46, 0, sizeof(v46));
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
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)NetworkManager__getTime(0LL);
  if ( !value )
LABEL_43:
    sub_B2C434(individualityList, *(_QWORD *)&svtId);
  v23 = (int64_t)individualityList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v43 = 0LL;
  v46 = v44;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v24 )
      break;
    current = v46.fields.current;
    if ( !v46.fields.current )
      sub_B2C434(v24, v25);
    monitor_high = HIDWORD(v46.fields.current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B2C434(v24, v25);
      v28 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              monitor_high,
              (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v28 )
      {
        if ( !entity )
          sub_B2C434(v28, v29);
        if ( v23 < entity->fields.targetId || *(_QWORD *)&entity->fields.eventId <= v23 )
          continue;
      }
    }
    if ( v23 >= (__int64)current[2].klass && (__int64)current[2].monitor > v23 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v32 = (int32_t)current[3].monitor;
        v31 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v32, v31, klass_low, 0, 0LL);
        if ( IsOpen )
        {
          v36 = v43;
          if ( !v43 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_B2C434(IsOpen, v35);
            v38 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
            namespaze = (int32_t)klass->_1.namespaze;
            v36 = v38;
            System_Collections_Generic_List_int____ctor_49701740(
              v38,
              namespaze,
              (const MethodInfo_2F6636C *)Method_System_Collections_Generic_List_int___ctor___67311392);
            if ( !v36 )
              sub_B2C434(v40, v41);
          }
          v43 = v36;
          System_Collections_Generic_List_int___AddRange(
            v36,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  result = (System_Int32_array *)v43;
  if ( v43 )
    return System_Collections_Generic_List_int___ToArray(
             v43,
             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v28; // x1
  Il2CppObject *current; // x28
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
  System_Collections_Generic_List_int__o *v43; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_int__o *v44; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+30h] [xbp-70h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4189FAA & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311392, v17);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B2C35C(&NetworkManager_TypeInfo, v19);
    sub_B2C35C(&ServantIndividualityMaster_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4189FAA = 1;
  }
  value = 0LL;
  memset(&v47, 0, sizeof(v47));
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
    sub_B2C434(individualityList, *(_QWORD *)&limitCount);
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_48;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)individualityList, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_48;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity((DataMasterBase_WarMaster__WarEntity__int__o *)individualityList, svtId, (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_48;
  buckets = individualityList[2].fields.buckets;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
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
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v43 = 0LL;
  v47 = v45;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v47.fields.current;
    if ( !v47.fields.current )
      sub_B2C434(v27, v28);
    monitor_high = HIDWORD(v47.fields.current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B2C434(v27, v28);
      v31 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              monitor_high,
              (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v31 )
      {
        if ( !entity )
          sub_B2C434(v31, v32);
        if ( v26 < entity->fields.targetId || *(_QWORD *)&entity->fields.eventId <= v26 )
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
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v35, v34, klass_low, 0, 0LL);
        if ( IsOpen )
        {
          v39 = v43;
          if ( !v43 )
          {
            if ( !buckets )
              sub_B2C434(IsOpen, v38);
            v44 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_49701740(
              v44,
              buckets->max_length + 20,
              (const MethodInfo_2F6636C *)Method_System_Collections_Generic_List_int___ctor___67311392);
            v39 = v44;
            if ( !v44 )
              sub_B2C434(v40, v41);
            System_Collections_Generic_List_int___AddRange(
              v44,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v43 = v39;
          System_Collections_Generic_List_int___AddRange(
            v39,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v43 )
    return System_Collections_Generic_List_int___ToArray(
             v43,
             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4189FA8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__,
      entity);
    byte_4189FA8 = 1;
  }
  PK = ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  ServantIndividualityMaster_c *v21; // x0
  int32_t v22; // w21
  __int64 v23; // x9
  ServantIndividualityMaster_c *v24; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x23
  ServantIndividualityMaster_c *v26; // x0
  bool result; // w0
  const MethodInfo *v28; // x0
  WarBoardAIRoute_RouteData_o *v29; // [xsp+0h] [xbp-60h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4189FAD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v9);
    sub_B2C35C(&ServantIndividualityEntity_TypeInfo, v10);
    sub_B2C35C(&ServantIndividualityMaster_TypeInfo, v11);
    byte_4189FAD = 1;
  }
  v29 = 0LL;
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
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_48;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
    if ( !individualityList )
      goto LABEL_48;
    individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList, v16, (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !individualityList )
      goto LABEL_48;
    method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
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
              (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
      {
        v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v20,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
        v21 = ServantIndividualityMaster_TypeInfo;
        value = (WarBoardEvalValueSquare_CalcEval_o *)v20;
        if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v21 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v21->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_48;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)individualityList,
          v17->fields.missionTargetId,
          (WarBoardAIRoute_RouteData_o *)value,
          (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
      }
      individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)value;
      if ( !value )
        goto LABEL_48;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
        v17,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
    }
    if ( ++v16 >= v15 )
    {
      v22 = 0;
      while ( 1 )
      {
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
        if ( !individualityList )
          break;
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList, v22, (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !individualityList )
          break;
        method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)individualityList;
        v23 = *(&ServantIndividualityEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&individualityList->klass->_2.bitflags2 + 1) < (unsigned int)v23
          || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v23 - 1] != ServantIndividualityEntity_TypeInfo )
        {
          goto LABEL_49;
        }
        if ( ((__int64)individualityList->fields.entries & 0x80000000) == 0 )
        {
          v24 = ServantIndividualityMaster_TypeInfo;
          if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v24 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v24->static_fields->individualityList;
          if ( !individualityList )
            break;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)individualityList,
                  v17->fields.missionTargetId,
                  (WarBoardEvalValueSquare_CalcEval_o **)&v29,
                  (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
          {
            v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v25,
              (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
            v26 = ServantIndividualityMaster_TypeInfo;
            v29 = (WarBoardAIRoute_RouteData_o *)v25;
            if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
              v26 = ServantIndividualityMaster_TypeInfo;
            }
            individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v26->static_fields->individualityList;
            if ( !individualityList )
              break;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)individualityList,
              v17->fields.missionTargetId,
              v29,
              (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
          }
          individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v29;
          if ( !v29 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
            v17,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
        }
        if ( ++v22 >= v15 )
          return 1;
      }
LABEL_48:
      sub_B2C434(individualityList, method);
    }
  }
LABEL_49:
  sub_B2C728(v17);
  ServantIndividualityMaster___cctor(v28);
  return result;
}