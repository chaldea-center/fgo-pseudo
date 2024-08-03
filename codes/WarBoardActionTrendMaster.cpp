void __fastcall WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD34D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__, method);
    byte_49FD34D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    324,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
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
  __int64 v9; // x1
  __int64 v10; // x2
  WarBoardActionTrendEntity_o *v11; // x20
  WarBoardActionTrendEntity_o *v12; // x21
  const MethodInfo *v13; // x3

  v6 = futureTrendId;
  if ( (byte_49FD34F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__,
      futureTrendMaster);
    *(_QWORD *)&futureTrendId = sub_1B640C8(&WarBoardActionTrendEntity_TypeInfo, v7);
    byte_49FD34F = 1;
  }
  if ( !futureTrendMaster )
    sub_1B64324(*(_QWORD *)&futureTrendId);
  result = (WarBoardActionTrendEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)futureTrendMaster,
                                            v6,
                                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( result )
  {
    v11 = result;
    v12 = (WarBoardActionTrendEntity_o *)sub_1B64314(WarBoardActionTrendEntity_TypeInfo, v9, v10);
    WarBoardActionTrendEntity___ctor_39990348(v12, (WarBoardFutureActionTrendEntity_o *)v11, baseTrendEntity, v13);
    return v12;
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
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x8
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  Il2CppObject *Master_object; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_T__TResult__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_49FD34E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_WarBoardActionTrendEntity___, baseTrendEntity);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___, v7);
    sub_1B640C8(&System_Func_int__WarBoardActionTrendEntity__TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__, v9);
    sub_1B640C8(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, v10);
    byte_49FD34E = 1;
  }
  v11 = sub_1B64314(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, baseTrendEntity, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_19;
  *(_QWORD *)(v11 + 24) = baseTrendEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)baseTrendEntity, v13, v14);
  v15 = *(_QWORD *)(v11 + 24);
  if ( !v15 )
    goto LABEL_19;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v15 + 56), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v11 + 16) = Master_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)Master_object, v22, v23);
    v26 = *(_QWORD *)(v11 + 24);
    if ( v26 )
    {
      v27 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v26 + 56);
      v28 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__WarBoardActionTrendEntity__TypeInfo, v24, v25);
      System_Func_int__object____ctor(
        v28,
        (Il2CppObject *)v11,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        0LL);
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v27,
                                                                   (System_Func_TSource__TResult__o *)v28,
                                                                   (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                  v29,
                                                  (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_19:
    sub_1B64324(v12);
  }
  v16 = Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v17 = *((_QWORD *)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 7);
  if ( !v17 )
  {
    sub_1BB6000(Method_System_Array_Empty_WarBoardActionTrendEntity___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BB5FA4(v18);
  if ( !*(_DWORD *)(v18 + 224) )
    j_il2cpp_runtime_class_init_0(v18);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BB5FA4(v19);
  return **(WarBoardActionTrendEntity_array ***)(v19 + 184);
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