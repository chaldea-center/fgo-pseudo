void WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971A11 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
    byte_5971A11 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    332,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionTrendEntity_o *WarBoardActionTrendMaster__ConvertFromFutureEntity(
        int32_t futureTrendId,
        WarBoardFutureActionTrendMaster_o *futureTrendMaster,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  int32_t v6; // w21
  Il2CppObject *Entity; // x0
  WarBoardFutureActionTrendEntity_o *v8; // x20
  WarBoardActionTrendEntity_o *v9; // x21
  const MethodInfo *v10; // x3

  v6 = futureTrendId;
  if ( (byte_5971A13 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
    *(_QWORD *)&futureTrendId = sub_2213A60(&WarBoardActionTrendEntity_TypeInfo);
    byte_5971A13 = 1;
  }
  if ( !futureTrendMaster )
    sub_2213CDC(*(_QWORD *)&futureTrendId, futureTrendMaster);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)futureTrendMaster,
             v6,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v8 = (WarBoardFutureActionTrendEntity_o *)Entity;
  v9 = (WarBoardActionTrendEntity_o *)sub_2213CCC(WarBoardActionTrendEntity_TypeInfo);
  WarBoardActionTrendEntity___ctor_50317048(v9, v8, baseTrendEntity, v10);
  return v9;
}


WarBoardActionTrendEntity_array *WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
        WarBoardActionTrendMaster_o *this,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x8
  __int64 v14; // x1
  long double v15; // q0
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  Il2CppObject *Master_object; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_T__TResult__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_5971A12 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_WarBoardActionTrendEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    sub_2213A60(&System_Func_int__WarBoardActionTrendEntity__TypeInfo);
    sub_2213A60(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__);
    sub_2213A60(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
    byte_5971A12 = 1;
  }
  v4 = sub_2213CCC(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 24) = baseTrendEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)baseTrendEntity, v7, v8, v9, v10, v11, v12);
  v13 = *(_QWORD *)(v4 + 24);
  if ( !v13 )
    goto LABEL_19;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 56), 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v4 + 16) = Master_object;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)Master_object, v22, v23, v24, v25, v26, v27);
    v28 = *(_QWORD *)(v4 + 24);
    if ( v28 )
    {
      v29 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v28 + 56);
      v30 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__WarBoardActionTrendEntity__TypeInfo);
      System_Func_int__object____ctor(
        v30,
        (Il2CppObject *)v4,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        0);
      v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v29,
                                                                   (System_Func_TSource__TResult__o *)v30,
                                                                   (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                  v31,
                                                  (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_19:
    sub_2213CDC(v5, v6);
  }
  v16 = Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v17 = *((_QWORD *)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 7);
  if ( !v17 )
  {
    sub_224B964(Method_System_Array_Empty_WarBoardActionTrendEntity___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
    v18 = sub_224B908(v15);
  if ( !*(_DWORD *)(v18 + 228) )
    *(__n128 *)&v15 = j_il2cpp_runtime_class_init_0(v18, v14);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_224B908(v15);
  return **(WarBoardActionTrendEntity_array ***)(v19 + 184);
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