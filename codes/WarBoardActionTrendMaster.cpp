void __fastcall WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8C27 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__, method);
    byte_40F8C27 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    322,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
}


WarBoardActionTrendEntity_o *__fastcall WarBoardActionTrendMaster__ConvertFromFutureEntity(
        int32_t futureTrendId,
        WarBoardFutureActionTrendMaster_o *futureTrendMaster,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  WarEntity_o *Entity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  WarBoardFutureActionTrendEntity_o *v13; // x20
  WarBoardActionTrendEntity_o *v14; // x21
  const MethodInfo *v15; // x3

  if ( (byte_40F8C29 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__,
      futureTrendMaster);
    sub_B16FFC(&WarBoardActionTrendEntity_TypeInfo, v7);
    byte_40F8C29 = 1;
  }
  if ( !futureTrendMaster )
    sub_B170D4();
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)futureTrendMaster,
             futureTrendId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v13 = (WarBoardFutureActionTrendEntity_o *)Entity;
  v14 = (WarBoardActionTrendEntity_o *)sub_B170CC(WarBoardActionTrendEntity_TypeInfo, v9, v10, v11, v12);
  WarBoardActionTrendEntity___ctor_22963724(v14, v13, baseTrendEntity, v15);
  return v14;
}


WarBoardActionTrendEntity_array *__fastcall WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
        WarBoardActionTrendMaster_o *this,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
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
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_40F8C28 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_WarBoardActionTrendEntity___, baseTrendEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___, v9);
    sub_B16FFC(&Method_System_Func_int__WarBoardActionTrendEntity___ctor__, v10);
    sub_B16FFC(&System_Func_int__WarBoardActionTrendEntity__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__, v12);
    sub_B16FFC(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, v13);
    byte_40F8C28 = 1;
  }
  v14 = sub_B170CC(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, baseTrendEntity, method, v3, v4);
  WarBoardActionTrendMaster___c__DisplayClass1_0___ctor((WarBoardActionTrendMaster___c__DisplayClass1_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_23;
  *(_QWORD *)(v14 + 24) = baseTrendEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v14 + 24),
    (System_Int32_array **)baseTrendEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = *(_QWORD *)(v14 + 24);
  if ( !v21 )
    goto LABEL_23;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v21 + 56), 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v14 + 16) = Master_WarQuestSelectionMaster;
    sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), Master_WarQuestSelectionMaster, v30, v31, v32, v33, v34, v35);
    v40 = *(_QWORD *)(v14 + 24);
    if ( v40 )
    {
      v41 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v40 + 56);
      v42 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                     System_Func_int__WarBoardActionTrendEntity__TypeInfo,
                                                                     v36,
                                                                     v37,
                                                                     v38,
                                                                     v39);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v42,
        (Il2CppObject *)v14,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        (const MethodInfo_2B66764 *)Method_System_Func_int__WarBoardActionTrendEntity___ctor__);
      v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                   v41,
                                                                   (System_Func_TSource__TResult__o *)v42,
                                                                   (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v43,
                                                  (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_23:
    sub_B170D4();
  }
  v22 = (_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v23 = **((_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 6);
  v24 = *(_WORD *)(v23 + 306);
  if ( (v24 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 6));
    v24 = *(_WORD *)(v23 + 306);
  }
  if ( (v24 & 0x400) != 0 )
  {
    v25 = *v22[6];
    if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
      sub_AAFCFC(*v22[6]);
    if ( !*(_DWORD *)(v25 + 224) )
    {
      v26 = *v22[6];
      if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
        sub_AAFCFC(*v22[6]);
      j_il2cpp_runtime_class_init_0(v26);
    }
  }
  v27 = *v22[6];
  if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
    sub_AAFCFC(*v22[6]);
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