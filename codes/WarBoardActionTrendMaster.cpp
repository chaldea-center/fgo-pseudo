void WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8560 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
    byte_4CC8560 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    330,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
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
  if ( (byte_4CC8562 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
    *(_QWORD *)&futureTrendId = sub_1C713B0(&WarBoardActionTrendEntity_TypeInfo);
    byte_4CC8562 = 1;
  }
  if ( !futureTrendMaster )
    sub_1C71608(*(_QWORD *)&futureTrendId, futureTrendMaster);
  result = (WarBoardActionTrendEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)futureTrendMaster,
                                            v6,
                                            (const MethodInfo_3408E80 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( result )
  {
    v8 = result;
    v9 = (WarBoardActionTrendEntity_o *)sub_1C715FC(WarBoardActionTrendEntity_TypeInfo);
    WarBoardActionTrendEntity___ctor_43590348(v9, (WarBoardFutureActionTrendEntity_o *)v8, baseTrendEntity, v10);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x8
  long double inited; // q0
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  Il2CppObject *Master_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_T__TResult__o *v29; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_4CC8561 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_WarBoardActionTrendEntity___);
    sub_1C713B0(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    sub_1C713B0(&System_Func_int__WarBoardActionTrendEntity__TypeInfo);
    sub_1C713B0(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__);
    sub_1C713B0(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
    byte_4CC8561 = 1;
  }
  v4 = sub_1C715FC(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 24) = baseTrendEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)baseTrendEntity, v7, v8, v9, v10, v11, v12);
  v13 = *(_QWORD *)(v4 + 24);
  if ( !v13 )
    goto LABEL_19;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 56), 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v4 + 16) = Master_object;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)Master_object, v21, v22, v23, v24, v25, v26);
    v27 = *(_QWORD *)(v4 + 24);
    if ( v27 )
    {
      v28 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v27 + 56);
      v29 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_int__WarBoardActionTrendEntity__TypeInfo);
      System_Func_int__object____ctor(
        v29,
        (Il2CppObject *)v4,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        0);
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v28,
                                                                   (System_Func_TSource__TResult__o *)v29,
                                                                   (const MethodInfo_317EBF8 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                  v30,
                                                  (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_19:
    sub_1C71608(v5, v6);
  }
  v15 = Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v16 = *((_QWORD *)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 7);
  if ( !v16 )
  {
    sub_1C474A0(Method_System_Array_Empty_WarBoardActionTrendEntity___);
    v16 = v15[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v17 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v17);
  v18 = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C47444(inited);
  return **(WarBoardActionTrendEntity_array ***)(v18 + 184);
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