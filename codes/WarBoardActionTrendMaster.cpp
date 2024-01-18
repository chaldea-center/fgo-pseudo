void __fastcall WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41867B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__, method);
    byte_41867B9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    322,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
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
  WarEntity_o *Entity; // x0
  WarBoardFutureActionTrendEntity_o *v9; // x20
  WarBoardActionTrendEntity_o *v10; // x21
  const MethodInfo *v11; // x3

  v6 = futureTrendId;
  if ( (byte_41867BB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__,
      futureTrendMaster);
    *(_QWORD *)&futureTrendId = sub_B2C35C(&WarBoardActionTrendEntity_TypeInfo, v7);
    byte_41867BB = 1;
  }
  if ( !futureTrendMaster )
    sub_B2C434(*(_QWORD *)&futureTrendId, futureTrendMaster);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)futureTrendMaster,
             v6,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v9 = (WarBoardFutureActionTrendEntity_o *)Entity;
  v10 = (WarBoardActionTrendEntity_o *)sub_B2C42C(WarBoardActionTrendEntity_TypeInfo);
  WarBoardActionTrendEntity___ctor_22732660(v10, v9, baseTrendEntity, v11);
  return v10;
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
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x8
  _QWORD **v22; // x20
  __int64 v23; // x19
  __int16 v24; // w8
  __int64 v25; // x19
  __int64 v26; // x19
  __int64 v27; // x19
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_41867BA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_WarBoardActionTrendEntity___, baseTrendEntity);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___, v7);
    sub_B2C35C(&Method_System_Func_int__WarBoardActionTrendEntity___ctor__, v8);
    sub_B2C35C(&System_Func_int__WarBoardActionTrendEntity__TypeInfo, v9);
    sub_B2C35C(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__, v10);
    sub_B2C35C(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, v11);
    byte_41867BA = 1;
  }
  v12 = sub_B2C42C(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
  WarBoardActionTrendMaster___c__DisplayClass1_0___ctor((WarBoardActionTrendMaster___c__DisplayClass1_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_23;
  *(_QWORD *)(v12 + 24) = baseTrendEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)baseTrendEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = *(_QWORD *)(v12 + 24);
  if ( !v21 )
    goto LABEL_23;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v21 + 56), 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v12 + 16) = Master_WarQuestSelectionMaster;
    sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), Master_WarQuestSelectionMaster, v30, v31, v32, v33, v34, v35);
    v36 = *(_QWORD *)(v12 + 24);
    if ( v36 )
    {
      v37 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v36 + 56);
      v38 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__WarBoardActionTrendEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v38,
        (Il2CppObject *)v12,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        (const MethodInfo_270D828 *)Method_System_Func_int__WarBoardActionTrendEntity___ctor__);
      v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                   v37,
                                                                   (System_Func_TSource__TResult__o *)v38,
                                                                   (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v39,
                                                  (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_23:
    sub_B2C434(v13, v14);
  }
  v22 = (_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v23 = **((_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 6);
  v24 = *(_WORD *)(v23 + 306);
  if ( (v24 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 6));
    v24 = *(_WORD *)(v23 + 306);
  }
  if ( (v24 & 0x400) != 0 )
  {
    v25 = *v22[6];
    if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
      sub_AC505C(*v22[6]);
    if ( !*(_DWORD *)(v25 + 224) )
    {
      v26 = *v22[6];
      if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
        sub_AC505C(*v22[6]);
      j_il2cpp_runtime_class_init_0(v26);
    }
  }
  v27 = *v22[6];
  if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
    sub_AC505C(*v22[6]);
  return **(WarBoardActionTrendEntity_array ***)(v27 + 184);
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
  return WarBoardActionTrendMaster__ConvertFromFutureEntity(
           x,
           this->fields.futureTrendMaster,
           this->fields.baseTrendEntity,
           0LL);
}