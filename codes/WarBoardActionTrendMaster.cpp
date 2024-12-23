void __fastcall WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67B7F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__, method);
    byte_4B67B7F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    328,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionTrendEntity_o *__fastcall WarBoardActionTrendMaster__ConvertFromFutureEntity(
        int32_t futureTrendId,
        WarBoardFutureActionTrendMaster_o *futureTrendMaster,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  int32_t v6; // w21
  __int64 v7; // x1
  WarBoardActionTrendEntity_o *result; // x0
  WarBoardActionTrendEntity_o *v9; // x20
  WarBoardActionTrendEntity_o *v10; // x21
  const MethodInfo *v11; // x3

  v6 = futureTrendId;
  if ( (byte_4B67B81 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__,
      futureTrendMaster);
    *(_QWORD *)&futureTrendId = sub_1BE4ACC(&WarBoardActionTrendEntity_TypeInfo, v7);
    byte_4B67B81 = 1;
  }
  if ( !futureTrendMaster )
    sub_1BE4D28(*(_QWORD *)&futureTrendId, futureTrendMaster);
  result = (WarBoardActionTrendEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)futureTrendMaster,
                                            v6,
                                            (const MethodInfo_31FD7C4 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( result )
  {
    v9 = result;
    v10 = (WarBoardActionTrendEntity_o *)sub_1BE4D18(WarBoardActionTrendEntity_TypeInfo);
    WarBoardActionTrendEntity___ctor_41290180(v10, (WarBoardFutureActionTrendEntity_o *)v9, baseTrendEntity, v11);
    return v10;
  }
  return result;
}


WarBoardActionTrendEntity_array *__fastcall WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
        WarBoardActionTrendMaster_o *this,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x8
  long double inited; // q0
  _QWORD *v22; // x19
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  Il2CppObject *Master_object; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x20
  System_Func_T__TResult__o *v36; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_4B67B80 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_WarBoardActionTrendEntity___, baseTrendEntity);
    sub_1BE4ACC(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___, v7);
    sub_1BE4ACC(&System_Func_int__WarBoardActionTrendEntity__TypeInfo, v8);
    sub_1BE4ACC(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__, v9);
    sub_1BE4ACC(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, v10);
    byte_4B67B80 = 1;
  }
  v11 = sub_1BE4D18(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_19;
  *(_QWORD *)(v11 + 24) = baseTrendEntity;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)baseTrendEntity, v14, v15, v16, v17, v18, v19);
  v20 = *(_QWORD *)(v11 + 24);
  if ( !v20 )
    goto LABEL_19;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v20 + 56), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v11 + 16) = Master_object;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)Master_object, v28, v29, v30, v31, v32, v33);
    v34 = *(_QWORD *)(v11 + 24);
    if ( v34 )
    {
      v35 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v34 + 56);
      v36 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_int__WarBoardActionTrendEntity__TypeInfo);
      System_Func_int__object____ctor(
        v36,
        (Il2CppObject *)v11,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        0LL);
      v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v35,
                                                                   (System_Func_TSource__TResult__o *)v36,
                                                                   (const MethodInfo_2F881D4 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                  v37,
                                                  (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_19:
    sub_1BE4D28(v12, v13);
  }
  v22 = Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v23 = *((_QWORD *)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 7);
  if ( !v23 )
  {
    sub_1C36A04(Method_System_Array_Empty_WarBoardActionTrendEntity___);
    v23 = v22[7];
  }
  v24 = *(_QWORD *)(v23 + 16);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C369A8(inited);
  if ( !*(_DWORD *)(v24 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v24);
  v25 = *(_QWORD *)(v22[7] + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C369A8(inited);
  return **(WarBoardActionTrendEntity_array ***)(v25 + 184);
}


void __fastcall WarBoardActionTrendMaster___c__DisplayClass1_0___ctor(
        WarBoardActionTrendMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardActionTrendEntity_o *__fastcall WarBoardActionTrendMaster___c__DisplayClass1_0___GetFutureActionTrendEntityArray_b__0(
        WarBoardActionTrendMaster___c__DisplayClass1_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardActionTrendMaster__ConvertFromFutureEntity(
           x,
           this->fields.futureTrendMaster,
           this->fields.baseTrendEntity,
           v3);
}