void __fastcall ServantIndividualityMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EADC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&ServantIndividualityMaster_TypeInfo, v7, v8, v9);
    byte_42EADC6 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity____ctor__);
  static_fields = (BattleServantConfConponent_o *)ServantIndividualityMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall ServantIndividualityMaster___ctor(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EADC3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EADC3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    228,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string___ctor__);
}


void __fastcall ServantIndividualityMaster__Clear(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  ServantIndividualityMaster_c *v9; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *individualityList; // x0

  if ( (byte_42EADC4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&ServantIndividualityMaster_TypeInfo, v5, v6, v7);
    byte_42EADC4 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v9 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v9 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v9->static_fields->individualityList;
  if ( !individualityList )
    sub_B5D69C(0LL, v8);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    individualityList,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
}


// local variable allocation has failed, the output may be wrong!
ServantIndividualityEntity_o *__fastcall ServantIndividualityMaster__GetEntity(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EADBF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__,
      svtId,
      idx,
      method);
    byte_42EADBF = 1;
  }
  PK = ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantIndividualityEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantIndividualityMaster__GetIndividuality(
        ServantIndividualityMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  ServantIndividualityMaster_c *v48; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *individualityList; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  int64_t v51; // x22
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *current; // x20
  int32_t monitor_high; // w2
  _BOOL8 v56; // x0
  __int64 v57; // x1
  int monitor; // w8
  int32_t v59; // w23
  int32_t v60; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v63; // x1
  System_Collections_Generic_List_int__o *v64; // x23
  Il2CppClass *klass; // x23
  System_Collections_Generic_List_int__o *v66; // x0
  int32_t namespaze; // w1
  __int64 v68; // x0
  __int64 v69; // x1
  System_Int32_array *result; // x0
  System_Collections_Generic_List_int__o *v71; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+30h] [xbp-70h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42EADC1 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, svtId, limitCount, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v21, v22, v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__,
      v24,
      v25,
      v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740232, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&NetworkManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&ServantIndividualityMaster_TypeInfo, v45, v46, v47);
    byte_42EADC1 = 1;
  }
  value = 0LL;
  entity = 0LL;
  memset(&v74, 0, sizeof(v74));
  v48 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v48 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v48->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_43;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)NetworkManager__getTime(0LL);
  if ( !value )
LABEL_43:
    sub_B5D69C(individualityList, *(_QWORD *)&svtId);
  v51 = (int64_t)individualityList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v72,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v71 = 0LL;
  v74 = v72;
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v74,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v52 )
      break;
    current = v74.fields.current;
    if ( !v74.fields.current )
      sub_B5D69C(v52, v53);
    monitor_high = HIDWORD(v74.fields.current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B5D69C(v52, v53);
      v56 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              monitor_high,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v56 )
      {
        if ( !entity )
          sub_B5D69C(v56, v57);
        if ( v51 < entity->fields.targetId || *(_QWORD *)&entity->fields.eventId <= v51 )
          continue;
      }
    }
    if ( v51 >= (__int64)current[2].klass && (__int64)current[2].monitor > v51 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v60 = (int32_t)current[3].monitor;
        v59 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v60, v59, klass_low, 0, 0LL);
        if ( IsOpen )
        {
          v64 = v71;
          if ( !v71 )
          {
            klass = current[3].klass;
            if ( !klass )
              sub_B5D69C(IsOpen, v63);
            v66 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
            namespaze = (int32_t)klass->_1.namespaze;
            v64 = v66;
            System_Collections_Generic_List_int____ctor_50870144(
              v66,
              namespaze,
              (const MethodInfo_3083780 *)Method_System_Collections_Generic_List_int___ctor___68740232);
            if ( !v64 )
              sub_B5D69C(v68, v69);
          }
          v71 = v64;
          System_Collections_Generic_List_int___AddRange(
            v64,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v74,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  result = (System_Int32_array *)v71;
  if ( v71 )
    return System_Collections_Generic_List_int___ToArray(
             v71,
             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantIndividualityMaster__GetIndividualityList(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  ServantIndividualityMaster_c *v57; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *individualityList; // x0
  struct System_Int32_array *buckets; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  int64_t v61; // x23
  _BOOL8 v62; // x0
  __int64 v63; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w2
  _BOOL8 v66; // x0
  __int64 v67; // x1
  int monitor; // w8
  int32_t v69; // w24
  int32_t v70; // w26
  int64_t klass_low; // x25
  _BOOL8 IsOpen; // x0
  __int64 v73; // x1
  System_Collections_Generic_List_int__o *v74; // x24
  __int64 v75; // x0
  __int64 v76; // x1
  System_Collections_Generic_List_int__o *v78; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_int__o *v79; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+30h] [xbp-70h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42EADC2 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__, v27, v28, v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__get_Current__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740232, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&NetworkManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&ServantIndividualityMaster_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    byte_42EADC2 = 1;
  }
  value = 0LL;
  memset(&v82, 0, sizeof(v82));
  entity = 0LL;
  if ( (limitCount & 0x80000000) != 0 )
    return 0LL;
  v57 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v57 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v57->static_fields->individualityList;
  if ( !individualityList )
LABEL_48:
    sub_B5D69C(individualityList, *(_QWORD *)&limitCount);
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          individualityList,
          svtId,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
    return 0LL;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !individualityList )
    goto LABEL_48;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)individualityList, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !individualityList )
    goto LABEL_48;
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity((DataMasterBase_WarMaster__WarEntity__int__o *)individualityList, svtId, (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !individualityList )
    goto LABEL_48;
  buckets = individualityList[2].fields.buckets;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)NetworkManager__getTime(0LL);
  if ( !value )
    goto LABEL_48;
  v61 = (int64_t)individualityList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v80,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantIndividualityEntity__GetEnumerator__);
  v78 = 0LL;
  v82 = v80;
  while ( 1 )
  {
    v62 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v82,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__MoveNext__);
    if ( !v62 )
      break;
    current = v82.fields.current;
    if ( !v82.fields.current )
      sub_B5D69C(v62, v63);
    monitor_high = HIDWORD(v82.fields.current[1].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !Master_WarQuestSelectionMaster )
        sub_B5D69C(v62, v63);
      v66 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              monitor_high,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v66 )
      {
        if ( !entity )
          sub_B5D69C(v66, v67);
        if ( v61 < entity->fields.targetId || *(_QWORD *)&entity->fields.eventId <= v61 )
          continue;
      }
    }
    if ( v61 >= (__int64)current[2].klass && (__int64)current[2].monitor > v61 )
    {
      monitor = (int)current[1].monitor;
      if ( (monitor & 0x80000000) != 0 || monitor == limitCount )
      {
        v70 = (int32_t)current[3].monitor;
        v69 = HIDWORD(current[3].monitor);
        klass_low = SLODWORD(current[4].klass);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(v70, v69, klass_low, 0, 0LL);
        if ( IsOpen )
        {
          v74 = v78;
          if ( !v78 )
          {
            if ( !buckets )
              sub_B5D69C(IsOpen, v73);
            v79 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor_50870144(
              v79,
              buckets->max_length + 20,
              (const MethodInfo_3083780 *)Method_System_Collections_Generic_List_int___ctor___68740232);
            v74 = v79;
            if ( !v79 )
              sub_B5D69C(v75, v76);
            System_Collections_Generic_List_int___AddRange(
              v79,
              (System_Collections_Generic_IEnumerable_T__o *)buckets,
              (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
          }
          v78 = v74;
          System_Collections_Generic_List_int___AddRange(
            v74,
            (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
            (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v82,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantIndividualityEntity__Dispose__);
  if ( v78 )
    return System_Collections_Generic_List_int___ToArray(
             v78,
             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_42EADC0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&idx);
    byte_42EADC0 = 1;
  }
  PK = ServantIndividualityEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantIndividualityMaster__ServantIndividualityEntity__string__TryGetEntity__);
}


bool __fastcall ServantIndividualityMaster__preProcess(ServantIndividualityMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  ServantIndividualityMaster_c *v32; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *individualityList; // x0
  int32_t Count; // w0
  int32_t v35; // w20
  int32_t v36; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x22
  __int64 v38; // x9
  ServantIndividualityMaster_c *v39; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x23
  ServantIndividualityMaster_c *v41; // x0
  int32_t v42; // w21
  __int64 v43; // x9
  ServantIndividualityMaster_c *v44; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x23
  ServantIndividualityMaster_c *v46; // x0
  bool result; // w0
  const MethodInfo *v48; // x0
  WarBoardAIRoute_RouteData_o *v49; // [xsp+0h] [xbp-60h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EADC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantIndividualityEntity_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&ServantIndividualityMaster_TypeInfo, v29, v30, v31);
    byte_42EADC5 = 1;
  }
  v49 = 0LL;
  value = 0LL;
  v32 = ServantIndividualityMaster_TypeInfo;
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
    v32 = ServantIndividualityMaster_TypeInfo;
  }
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v32->static_fields->individualityList;
  if ( !individualityList )
    goto LABEL_48;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    individualityList,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___Clear__);
  individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
  if ( !individualityList )
    goto LABEL_48;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v35 = Count;
  v36 = 0;
  while ( 1 )
  {
    individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
    if ( !individualityList )
      goto LABEL_48;
    individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList, v36, (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !individualityList )
      goto LABEL_48;
    method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
    v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)individualityList;
    v38 = *(&ServantIndividualityEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&individualityList->klass->_2.bitflags2 + 1) < (unsigned int)v38
      || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v38 - 1] != ServantIndividualityEntity_TypeInfo )
    {
      break;
    }
    if ( ((__int64)individualityList->fields.entries & 0x80000000) != 0 )
    {
      v39 = ServantIndividualityMaster_TypeInfo;
      if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
        v39 = ServantIndividualityMaster_TypeInfo;
      }
      individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v39->static_fields->individualityList;
      if ( !individualityList )
        goto LABEL_48;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)individualityList,
              v37->fields.missionTargetId,
              &value,
              (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
      {
        v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v40,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
        v41 = ServantIndividualityMaster_TypeInfo;
        value = (WarBoardEvalValueSquare_CalcEval_o *)v40;
        if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
          v41 = ServantIndividualityMaster_TypeInfo;
        }
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v41->static_fields->individualityList;
        if ( !individualityList )
          goto LABEL_48;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)individualityList,
          v37->fields.missionTargetId,
          (WarBoardAIRoute_RouteData_o *)value,
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
      }
      individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)value;
      if ( !value )
        goto LABEL_48;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
        v37,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
    }
    if ( ++v36 >= v35 )
    {
      v42 = 0;
      while ( 1 )
      {
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
        if ( !individualityList )
          break;
        individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)individualityList, v42, (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !individualityList )
          break;
        method = (const MethodInfo *)ServantIndividualityEntity_TypeInfo;
        v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)individualityList;
        v43 = *(&ServantIndividualityEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&individualityList->klass->_2.bitflags2 + 1) < (unsigned int)v43
          || (ServantIndividualityEntity_c *)individualityList->klass->_2.typeHierarchy[v43 - 1] != ServantIndividualityEntity_TypeInfo )
        {
          goto LABEL_49;
        }
        if ( ((__int64)individualityList->fields.entries & 0x80000000) == 0 )
        {
          v44 = ServantIndividualityMaster_TypeInfo;
          if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
            v44 = ServantIndividualityMaster_TypeInfo;
          }
          individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v44->static_fields->individualityList;
          if ( !individualityList )
            break;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)individualityList,
                  v37->fields.missionTargetId,
                  (WarBoardEvalValueSquare_CalcEval_o **)&v49,
                  (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___TryGetValue__) )
          {
            v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantIndividualityEntity__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v45,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantIndividualityEntity___ctor__);
            v46 = ServantIndividualityMaster_TypeInfo;
            v49 = (WarBoardAIRoute_RouteData_o *)v45;
            if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
              v46 = ServantIndividualityMaster_TypeInfo;
            }
            individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v46->static_fields->individualityList;
            if ( !individualityList )
              break;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)individualityList,
              v37->fields.missionTargetId,
              v49,
              (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_ServantIndividualityEntity___set_Item__);
          }
          individualityList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v49;
          if ( !v49 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v49,
            v37,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantIndividualityEntity__Add__);
        }
        if ( ++v42 >= v35 )
          return 1;
      }
LABEL_48:
      sub_B5D69C(individualityList, method);
    }
  }
LABEL_49:
  sub_B5D990(v37);
  ServantIndividualityMaster___cctor(v48);
  return result;
}