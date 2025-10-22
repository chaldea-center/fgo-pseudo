void WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57EC9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
    byte_4C57EC9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    330,
    (const MethodInfo_33B0C34 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionTrendEntity_o *WarBoardActionTrendMaster__ConvertFromFutureEntity(
        int32_t futureTrendId,
        WarBoardFutureActionTrendMaster_o *futureTrendMaster,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  int32_t v6; // w21
  WarBoardActionTrendEntity_o *result; // x0
  WarBoardActionTrendEntity_o *v8; // x20
  WarBoardActionTrendEntity_o *v9; // x21
  const MethodInfo *v10; // x3

  v6 = futureTrendId;
  if ( (byte_4C57ECB & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
    *(_QWORD *)&futureTrendId = sub_1C3E564(&WarBoardActionTrendEntity_TypeInfo);
    byte_4C57ECB = 1;
  }
  if ( !futureTrendMaster )
    sub_1C3E7C0(*(_QWORD *)&futureTrendId, futureTrendMaster);
  result = (WarBoardActionTrendEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)futureTrendMaster,
                                            v6,
                                            (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( result )
  {
    v8 = result;
    v9 = (WarBoardActionTrendEntity_o *)sub_1C3E7B0(WarBoardActionTrendEntity_TypeInfo);
    WarBoardActionTrendEntity___ctor_43354740(v9, (WarBoardFutureActionTrendEntity_o *)v8, baseTrendEntity, v10);
    return v9;
  }
  return result;
}


WarBoardActionTrendEntity_array *WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
        WarBoardActionTrendMaster_o *this,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  long double inited; // q0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  Il2CppObject *Master_object; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_T__TResult__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4C57ECA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_WarBoardActionTrendEntity___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    sub_1C3E564(&System_Func_int__WarBoardActionTrendEntity__TypeInfo);
    sub_1C3E564(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__);
    sub_1C3E564(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C57ECA = 1;
  }
  v4 = sub_1C3E7B0(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 24) = baseTrendEntity;
  sub_1C3E508((CGThumbnailListItem_o *)(v4 + 24), (int32_t)baseTrendEntity, v7, v8);
  v9 = *(_QWORD *)(v4 + 24);
  if ( !v9 )
    goto LABEL_19;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v9 + 56), 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v4 + 16) = Master_object;
    sub_1C3E508((CGThumbnailListItem_o *)(v4 + 16), (int32_t)Master_object, v17, v18);
    v19 = *(_QWORD *)(v4 + 24);
    if ( v19 )
    {
      v20 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v19 + 56);
      v21 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_int__WarBoardActionTrendEntity__TypeInfo);
      System_Func_int__object____ctor(
        v21,
        (Il2CppObject *)v4,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        0);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v20,
                                                                   (System_Func_TSource__TResult__o *)v21,
                                                                   (const MethodInfo_312D55C *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                  v22,
                                                  (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_19:
    sub_1C3E7C0(v5, v6);
  }
  v11 = Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v12 = *((_QWORD *)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 7);
  if ( !v12 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_WarBoardActionTrendEntity___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C8EC78(inited);
  return **(WarBoardActionTrendEntity_array ***)(v14 + 184);
}


void WarBoardActionTrendMaster___c__DisplayClass1_0___ctor(
        WarBoardActionTrendMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardActionTrendEntity_o *WarBoardActionTrendMaster___c__DisplayClass1_0___GetFutureActionTrendEntityArray_b__0(
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