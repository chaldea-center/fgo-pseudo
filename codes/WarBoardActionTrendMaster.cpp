void __fastcall WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E692F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E692F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    323,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionTrendEntity_o *__fastcall WarBoardActionTrendMaster__ConvertFromFutureEntity(
        int32_t futureTrendId,
        WarBoardFutureActionTrendMaster_o *futureTrendMaster,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  int32_t v6; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  WarEntity_o *Entity; // x0
  WarBoardFutureActionTrendEntity_o *v11; // x20
  WarBoardActionTrendEntity_o *v12; // x21
  const MethodInfo *v13; // x3

  v6 = futureTrendId;
  if ( (byte_42E6931 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__,
      (_DWORD)futureTrendMaster,
      (_DWORD)baseTrendEntity,
      method);
    *(_QWORD *)&futureTrendId = sub_B5D5C4(&WarBoardActionTrendEntity_TypeInfo, v7, v8, v9);
    byte_42E6931 = 1;
  }
  if ( !futureTrendMaster )
    sub_B5D69C(*(_QWORD *)&futureTrendId, futureTrendMaster);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)futureTrendMaster,
             v6,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v11 = (WarBoardFutureActionTrendEntity_o *)Entity;
  v12 = (WarBoardActionTrendEntity_o *)sub_B5D694(WarBoardActionTrendEntity_TypeInfo);
  WarBoardActionTrendEntity___ctor_21410736(v12, v11, baseTrendEntity, v13);
  return v12;
}


WarBoardActionTrendEntity_array *__fastcall WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
        WarBoardActionTrendMaster_o *this,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
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
  __int64 v29; // x19
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x8
  _QWORD **v39; // x20
  __int64 v40; // x19
  __int16 v41; // w8
  __int64 v42; // x19
  __int64 v43; // x19
  __int64 v44; // x19
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v55; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0

  if ( (byte_42E6930 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_WarBoardActionTrendEntity___, (_DWORD)baseTrendEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_int__WarBoardActionTrendEntity___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_int__WarBoardActionTrendEntity__TypeInfo, v20, v21, v22);
    sub_B5D5C4(
      &Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, v26, v27, v28);
    byte_42E6930 = 1;
  }
  v29 = sub_B5D694(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
  WarBoardActionTrendMaster___c__DisplayClass1_0___ctor((WarBoardActionTrendMaster___c__DisplayClass1_0_o *)v29, 0LL);
  if ( !v29 )
    goto LABEL_23;
  *(_QWORD *)(v29 + 24) = baseTrendEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v29 + 24),
    (System_Int32_array **)baseTrendEntity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = *(_QWORD *)(v29 + 24);
  if ( !v38 )
    goto LABEL_23;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v38 + 56), 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v29 + 16) = Master_WarQuestSelectionMaster;
    sub_B5D560((BattleServantConfConponent_o *)(v29 + 16), Master_WarQuestSelectionMaster, v47, v48, v49, v50, v51, v52);
    v53 = *(_QWORD *)(v29 + 24);
    if ( v53 )
    {
      v54 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v53 + 56);
      v55 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__WarBoardActionTrendEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v55,
        (Il2CppObject *)v29,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        (const MethodInfo_2C29938 *)Method_System_Func_int__WarBoardActionTrendEntity___ctor__);
      v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                   v54,
                                                                   (System_Func_TSource__TResult__o *)v55,
                                                                   (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v56,
                                                  (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_23:
    sub_B5D69C(v30, v31);
  }
  v39 = (_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v40 = **((_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 6);
  v41 = *(_WORD *)(v40 + 306);
  if ( (v41 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 6));
    v41 = *(_WORD *)(v40 + 306);
  }
  if ( (v41 & 0x400) != 0 )
  {
    v42 = *v39[6];
    if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
      sub_AF52C4(*v39[6]);
    if ( !*(_DWORD *)(v42 + 224) )
    {
      v43 = *v39[6];
      if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
        sub_AF52C4(*v39[6]);
      j_il2cpp_runtime_class_init_0(v43);
    }
  }
  v44 = *v39[6];
  if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
    sub_AF52C4(*v39[6]);
  return **(WarBoardActionTrendEntity_array ***)(v44 + 184);
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