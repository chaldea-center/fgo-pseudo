void WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38B08 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
    byte_4C38B08 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    330,
    (const MethodInfo_3394514 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
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
  if ( (byte_4C38B0A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
    *(_QWORD *)&futureTrendId = sub_1C32C20(&WarBoardActionTrendEntity_TypeInfo);
    byte_4C38B0A = 1;
  }
  if ( !futureTrendMaster )
    sub_1C32E7C(*(_QWORD *)&futureTrendId);
  result = (WarBoardActionTrendEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)futureTrendMaster,
                                            v6,
                                            (const MethodInfo_3396838 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( result )
  {
    v8 = result;
    v9 = (WarBoardActionTrendEntity_o *)sub_1C32E6C(WarBoardActionTrendEntity_TypeInfo);
    WarBoardActionTrendEntity___ctor_43198156(v9, (WarBoardFutureActionTrendEntity_o *)v8, baseTrendEntity, v10);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x8
  long double inited; // q0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  Il2CppObject *Master_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_T__TResult__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4C38B09 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_WarBoardActionTrendEntity___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    sub_1C32C20(&System_Func_int__WarBoardActionTrendEntity__TypeInfo);
    sub_1C32C20(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__);
    sub_1C32C20(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C38B09 = 1;
  }
  v4 = sub_1C32E6C(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 24) = baseTrendEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 24), (int32_t)baseTrendEntity, v6, v7);
  v8 = *(_QWORD *)(v4 + 24);
  if ( !v8 )
    goto LABEL_19;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v8 + 56), 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v4 + 16) = Master_object;
    sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 16), (int32_t)Master_object, v16, v17);
    v18 = *(_QWORD *)(v4 + 24);
    if ( v18 )
    {
      v19 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v18 + 56);
      v20 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_int__WarBoardActionTrendEntity__TypeInfo);
      System_Func_int__object____ctor(
        v20,
        (Il2CppObject *)v4,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        0);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v19,
                                                                   (System_Func_TSource__TResult__o *)v20,
                                                                   (const MethodInfo_3110E00 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                  v21,
                                                  (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_19:
    sub_1C32E7C(v5);
  }
  v10 = Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v11 = *((_QWORD *)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 7);
  if ( !v11 )
  {
    sub_1C83390(Method_System_Array_Empty_WarBoardActionTrendEntity___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C83334(inited);
  return **(WarBoardActionTrendEntity_array ***)(v13 + 184);
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