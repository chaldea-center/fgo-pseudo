void __fastcall WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4212B5F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__, method);
    byte_4212B5F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    322,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
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
  __int64 v9; // x1
  __int64 v10; // x2
  WarBoardFutureActionTrendEntity_o *v11; // x20
  WarBoardActionTrendEntity_o *v12; // x21
  const MethodInfo *v13; // x3

  v6 = futureTrendId;
  if ( (byte_4212B61 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__,
      futureTrendMaster);
    *(_QWORD *)&futureTrendId = sub_B0D8A4(&WarBoardActionTrendEntity_TypeInfo, v7);
    byte_4212B61 = 1;
  }
  if ( !futureTrendMaster )
    sub_B0D97C(*(_QWORD *)&futureTrendId);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)futureTrendMaster,
             v6,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v11 = (WarBoardFutureActionTrendEntity_o *)Entity;
  v12 = (WarBoardActionTrendEntity_o *)sub_B0D974(WarBoardActionTrendEntity_TypeInfo, v9, v10);
  WarBoardActionTrendEntity___ctor_21119752(v12, v11, baseTrendEntity, v13);
  return v12;
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x8
  _QWORD **v21; // x20
  __int64 v22; // x19
  __int16 v23; // w8
  __int64 v24; // x19
  __int64 v25; // x19
  __int64 v26; // x19
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_4212B60 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_WarBoardActionTrendEntity___, baseTrendEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___, v7);
    sub_B0D8A4(&Method_System_Func_int__WarBoardActionTrendEntity___ctor__, v8);
    sub_B0D8A4(&System_Func_int__WarBoardActionTrendEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__, v10);
    sub_B0D8A4(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, v11);
    byte_4212B60 = 1;
  }
  v12 = sub_B0D974(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, baseTrendEntity, method);
  WarBoardActionTrendMaster___c__DisplayClass1_0___ctor((WarBoardActionTrendMaster___c__DisplayClass1_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_23;
  *(_QWORD *)(v12 + 24) = baseTrendEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)baseTrendEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = *(_QWORD *)(v12 + 24);
  if ( !v20 )
    goto LABEL_23;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v20 + 56), 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v12 + 16) = Master_WarQuestSelectionMaster;
    sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), Master_WarQuestSelectionMaster, v29, v30, v31, v32, v33, v34);
    v37 = *(_QWORD *)(v12 + 24);
    if ( v37 )
    {
      v38 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v37 + 56);
      v39 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                     System_Func_int__WarBoardActionTrendEntity__TypeInfo,
                                                                     v35,
                                                                     v36);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v39,
        (Il2CppObject *)v12,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        (const MethodInfo_26145DC *)Method_System_Func_int__WarBoardActionTrendEntity___ctor__);
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                   v38,
                                                                   (System_Func_TSource__TResult__o *)v39,
                                                                   (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v40,
                                                  (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_23:
    sub_B0D97C(v13);
  }
  v21 = (_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v22 = **((_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 6);
  v23 = *(_WORD *)(v22 + 306);
  if ( (v23 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 6));
    v23 = *(_WORD *)(v22 + 306);
  }
  if ( (v23 & 0x400) != 0 )
  {
    v24 = *v21[6];
    if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
      sub_AA65A4(*v21[6]);
    if ( !*(_DWORD *)(v24 + 224) )
    {
      v25 = *v21[6];
      if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
        sub_AA65A4(*v21[6]);
      j_il2cpp_runtime_class_init_0(v25);
    }
  }
  v26 = *v21[6];
  if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
    sub_AA65A4(*v21[6]);
  return **(WarBoardActionTrendEntity_array ***)(v26 + 184);
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