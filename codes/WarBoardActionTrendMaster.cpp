void __fastcall WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E36C5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__, method);
    byte_48E36C5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    323,
    (const MethodInfo_2FE6A0C *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
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
  if ( (byte_48E36C7 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__,
      futureTrendMaster);
    *(_QWORD *)&futureTrendId = sub_1B00CCC(&WarBoardActionTrendEntity_TypeInfo, v7);
    byte_48E36C7 = 1;
  }
  if ( !futureTrendMaster )
    sub_1B00F28(*(_QWORD *)&futureTrendId, futureTrendMaster);
  result = (WarBoardActionTrendEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)futureTrendMaster,
                                            v6,
                                            (const MethodInfo_2FE6A4C *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( result )
  {
    v9 = result;
    v10 = (WarBoardActionTrendEntity_o *)sub_1B00F18(WarBoardActionTrendEntity_TypeInfo);
    WarBoardActionTrendEntity___ctor_39042492(v10, (WarBoardFutureActionTrendEntity_o *)v9, baseTrendEntity, v11);
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  Il2CppObject *Master_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  System_Func_T__TResult__o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_48E36C6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Empty_WarBoardActionTrendEntity___, baseTrendEntity);
    sub_1B00CCC(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___, v4);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___, v6);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___, v7);
    sub_1B00CCC(&System_Func_int__WarBoardActionTrendEntity__TypeInfo, v8);
    sub_1B00CCC(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__, v9);
    sub_1B00CCC(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, v10);
    byte_48E36C6 = 1;
  }
  v11 = sub_1B00F18(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_19;
  *(_QWORD *)(v11 + 24) = baseTrendEntity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)baseTrendEntity, v14, v15);
  v16 = *(_QWORD *)(v11 + 24);
  if ( !v16 )
    goto LABEL_19;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v16 + 56), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v11 + 16) = Master_object;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)Master_object, v23, v24);
    v25 = *(_QWORD *)(v11 + 24);
    if ( v25 )
    {
      v26 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v25 + 56);
      v27 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_int__WarBoardActionTrendEntity__TypeInfo);
      System_Func_int__object____ctor(
        v27,
        (Il2CppObject *)v11,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        0LL);
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v26,
                                                                   (System_Func_TSource__TResult__o *)v27,
                                                                   (const MethodInfo_2D8DC18 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                  v28,
                                                  (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_19:
    sub_1B00F28(v12, v13);
  }
  v17 = Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v18 = *((_QWORD *)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 7);
  if ( !v18 )
  {
    sub_1B52C04(Method_System_Array_Empty_WarBoardActionTrendEntity___);
    v18 = v17[7];
  }
  v19 = *(_QWORD *)(v18 + 16);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1B52BA8(v19);
  if ( !*(_DWORD *)(v19 + 224) )
    j_il2cpp_runtime_class_init_0(v19);
  v20 = *(_QWORD *)(v17[7] + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1B52BA8(v20);
  return **(WarBoardActionTrendEntity_array ***)(v20 + 184);
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