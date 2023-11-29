void __fastcall ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FC78A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo, v5);
    sub_B16FFC(&ServantIndividualityMaster_TypeInfo, v6);
    byte_40FC78A = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo,
                                                                                                  v1,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  static_fields = (BattleServantConfConponent_o *)ServantIndividualityMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC787 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__, method);
    byte_40FC787 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    227,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void __fastcall ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantIndividualityMaster_c *v4; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *individualityList; // x0

  if ( (byte_40FC788 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, method);
    sub_B16FFC(&ServantIndividualityMaster_TypeInfo, v3);
    byte_40FC788 = 1;
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
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    individualityList,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *__fastcall ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FC783 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FC783 = 1;
  }
  PK = ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
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
  int64_t Time; // x0
  int64_t v24; // x22
  Il2CppObject *current; // x20
  int32_t monitor_high; // w2
  int monitor; // w8
  int32_t v28; // w23
  int32_t v29; // w25
  int64_t klass_low; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_int__o *v35; // x23
  Il2CppClass *klass; // x23
  System_Collections_Generic_List_int__o *v37; // x0
  int32_t namespaze; // w1
  System_Int32_array *result; // x0
  System_Collections_Generic_List_int__o *v40; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+30h] [xbp-70h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40FC785 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737208, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&ServantIndividualityMaster_TypeInfo, v19);
    byte_40FC785 = 1;
  }
  value = 0LL;
  entity = 0LL;
  memset(&v43, 0, sizeof(v43));
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
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !value )
LABEL_43:
    sub_B170D4();
  v24 = Time;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v40 = 0LL;
  v43 = v41;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__) )
  {
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B170D4();
    monitor_high = HIDWORD(v43.fields.current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B170D4();
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             monitor_high,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_B170D4();
        if ( v24 < entity->fields.targetId || *(_QWORD *)&entity->fields.eventId <= v24 )
          continue;
      }
    }
    if ( v24 >= (__int64)current[2].klass && (__int64)current[2].monitor > v24 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v29 = (int32_t)current[3].monitor;
        v28 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(v29, v28, klass_low, 0, 0LL) )
        {
          v35 = v40;
          if ( !v40 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_B170D4();
            v37 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              v31,
                                                              v32,
                                                              v33,
                                                              v34);
            namespaze = (int32_t)klass->_1.namespaze;
            v35 = v37;
            System_Collections_Generic_List_int____ctor_49346660(
              v37,
              namespaze,
              (const MethodInfo_2F0F864 *)Method_System_Collections_Generic_List_int___ctor___66737208);
            if ( !v35 )
              sub_B170D4();
          }
          v40 = v35;
          System_Collections_Generic_List_int___AddRange(
            v35,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  result = (System_Int32_array *)v40;
  if ( v40 )
    return System_Collections_Generic_List_int___ToArray(
             v40,
             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v26; // x0
  __int64 v27; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  int64_t Time; // x0
  int64_t v30; // x23
  Il2CppObject *current; // x28
  int32_t monitor_high; // w2
  int monitor; // w8
  int32_t v34; // w24
  int32_t v35; // w26
  int64_t klass_low; // x25
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_int__o *v41; // x24
  System_Collections_Generic_List_int__o *v43; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_int__o *v44; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+30h] [xbp-70h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40FC786 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737208, v17);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B16FFC(&NetworkManager_TypeInfo, v19);
    sub_B16FFC(&ServantIndividualityMaster_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_40FC786 = 1;
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
    sub_B170D4();
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_48;
  v26 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          MasterData_WarQuestSelectionMaster,
          svtId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v26 )
    goto LABEL_48;
  v27 = *(_QWORD *)&v26[1].fields.bannerId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !value )
    goto LABEL_48;
  v30 = Time;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v43 = 0LL;
  v47 = v45;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__) )
  {
    current = v47.fields.current;
    if ( !v47.fields.current )
      sub_B170D4();
    monitor_high = HIDWORD(v47.fields.current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B170D4();
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             monitor_high,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_B170D4();
        if ( v30 < entity->fields.targetId || *(_QWORD *)&entity->fields.eventId <= v30 )
          continue;
      }
    }
    if ( v30 >= (__int64)current[2].klass && (__int64)current[2].monitor > v30 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v35 = (int32_t)current[3].monitor;
        v34 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(v35, v34, klass_low, 0, 0LL) )
        {
          v41 = v43;
          if ( !v43 )
          {
            if ( !v27 )
              sub_B170D4();
            v44 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              v37,
                                                              v38,
                                                              v39,
                                                              v40);
            System_Collections_Generic_List_int____ctor_49346660(
              v44,
              *(_DWORD *)(v27 + 24) + 20,
              (const MethodInfo_2F0F864 *)Method_System_Collections_Generic_List_int___ctor___66737208);
            v41 = v44;
            if ( !v44 )
              sub_B170D4();
            System_Collections_Generic_List_int___AddRange(
              v44,
              (System_Collections_Generic_IEnumerable_T__o *)v27,
              (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v43 = v41;
          System_Collections_Generic_List_int___AddRange(
            v41,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v43 )
    return System_Collections_Generic_List_int___ToArray(
             v43,
             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  return (System_Int32_array *)v27;
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

  if ( (byte_40FC784 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__,
      entity);
    byte_40FC784 = 1;
  }
  PK = ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w20
  int32_t v17; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x22
  __int64 v21; // x9
  ServantIndividualityMaster_c *v22; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x23
  ServantIndividualityMaster_c *v29; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v30; // x0
  int32_t v31; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v32; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v33; // x0
  __int64 v34; // x9
  ServantIndividualityMaster_c *v35; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x23
  ServantIndividualityMaster_c *v42; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v43; // x0
  bool result; // w0
  const MethodInfo *v45; // x0
  WarBoardAIRoute_RouteData_o *v46; // [xsp+0h] [xbp-60h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FC789 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v9);
    sub_B16FFC(&ServantIndividualityEntity_TypeInfo, v10);
    sub_B16FFC(&ServantIndividualityMaster_TypeInfo, v11);
    byte_40FC789 = 1;
  }
  v46 = 0LL;
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
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v16 = Count;
  v17 = 0;
  while ( 1 )
  {
    v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v18 )
      goto LABEL_48;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v18,
             v17,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_48;
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
    v21 = *(&ServantIndividualityEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (ServantIndividualityEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] != ServantIndividualityEntity_TypeInfo )
    {
      break;
    }
    if ( ((__int64)Item[1].monitor & 0x80000000) != 0 )
    {
      v22 = ServantIndividualityMaster_TypeInfo;
      if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
        v22 = ServantIndividualityMaster_TypeInfo;
      }
      v23 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v22->static_fields->individualityList;
      if ( !v23 )
        goto LABEL_48;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
              v23,
              v20->fields.missionTargetId,
              &value,
              (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
      {
        v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v24, v25, v26, v27);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v28,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
        v29 = ServantIndividualityMaster_TypeInfo;
        value = (WarBoardEvalValueSquare_CalcEval_o *)v28;
        if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v29 = ServantIndividualityMaster_TypeInfo;
        }
        v30 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v29->static_fields->individualityList;
        if ( !v30 )
          goto LABEL_48;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          v30,
          v20->fields.missionTargetId,
          (WarBoardAIRoute_RouteData_o *)value,
          (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
      }
      if ( !value )
        goto LABEL_48;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
        v20,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
    }
    if ( ++v17 >= v16 )
    {
      v31 = 0;
      while ( 1 )
      {
        v32 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !v32 )
          break;
        v33 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                v32,
                v31,
                (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v33 )
          break;
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)v33;
        v34 = *(&ServantIndividualityEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v34
          || (ServantIndividualityEntity_c *)v33->klass->_2.typeHierarchy[v34 - 1] != ServantIndividualityEntity_TypeInfo )
        {
          goto LABEL_49;
        }
        if ( ((__int64)v33[1].monitor & 0x80000000) == 0 )
        {
          v35 = ServantIndividualityMaster_TypeInfo;
          if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v35 = ServantIndividualityMaster_TypeInfo;
          }
          v36 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v35->static_fields->individualityList;
          if ( !v36 )
            break;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                  v36,
                  v20->fields.missionTargetId,
                  (WarBoardEvalValueSquare_CalcEval_o **)&v46,
                  (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
          {
            v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v37, v38, v39, v40);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v41,
              (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
            v42 = ServantIndividualityMaster_TypeInfo;
            v46 = (WarBoardAIRoute_RouteData_o *)v41;
            if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
              v42 = ServantIndividualityMaster_TypeInfo;
            }
            v43 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v42->static_fields->individualityList;
            if ( !v43 )
              break;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              v43,
              v20->fields.missionTargetId,
              v46,
              (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
          }
          if ( !v46 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v46,
            v20,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
        }
        if ( ++v31 >= v16 )
          return 1;
      }
LABEL_48:
      sub_B170D4();
    }
  }
LABEL_49:
  sub_B173C8(v20);
  ServantIndividualityMaster___cctor(v45);
  return result;
}