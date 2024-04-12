void __fastcall WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE0A3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
    byte_42AE0A3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    323,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionTrendEntity_o *__fastcall WarBoardActionTrendMaster__ConvertFromFutureEntity(
        int32_t futureTrendId,
        WarBoardFutureActionTrendMaster_o *futureTrendMaster,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  int32_t v6; // w21
  WarEntity_o *Entity; // x0
  WarBoardFutureActionTrendEntity_o *v8; // x20
  WarBoardActionTrendEntity_o *v9; // x21
  const MethodInfo *v10; // x3

  v6 = futureTrendId;
  if ( (byte_42AE0A5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
    *(_QWORD *)&futureTrendId = sub_B52984(&WarBoardActionTrendEntity_TypeInfo);
    byte_42AE0A5 = 1;
  }
  if ( !futureTrendMaster )
    sub_B52A5C(*(_QWORD *)&futureTrendId, futureTrendMaster);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)futureTrendMaster,
             v6,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v8 = (WarBoardFutureActionTrendEntity_o *)Entity;
  v9 = (WarBoardActionTrendEntity_o *)sub_B52A54(WarBoardActionTrendEntity_TypeInfo);
  WarBoardActionTrendEntity___ctor_21364216(v9, v8, baseTrendEntity, v10);
  return v9;
}


WarBoardActionTrendEntity_array *__fastcall WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
        WarBoardActionTrendMaster_o *this,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x8
  _QWORD **v14; // x20
  __int64 v15; // x19
  __int16 v16; // w8
  __int64 v17; // x19
  __int64 v18; // x19
  __int64 v19; // x19
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_42AE0A4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_WarBoardActionTrendEntity___);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    sub_B52984(&Method_System_Func_int__WarBoardActionTrendEntity___ctor__);
    sub_B52984(&System_Func_int__WarBoardActionTrendEntity__TypeInfo);
    sub_B52984(&Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__);
    sub_B52984(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
    byte_42AE0A4 = 1;
  }
  v4 = sub_B52A54(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo);
  WarBoardActionTrendMaster___c__DisplayClass1_0___ctor((WarBoardActionTrendMaster___c__DisplayClass1_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_23;
  *(_QWORD *)(v4 + 24) = baseTrendEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)(v4 + 24),
    (System_Int32_array **)baseTrendEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = *(_QWORD *)(v4 + 24);
  if ( !v13 )
    goto LABEL_23;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 56), 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v4 + 16) = Master_WarQuestSelectionMaster;
    sub_B52920((BattleServantConfConponent_o *)(v4 + 16), Master_WarQuestSelectionMaster, v22, v23, v24, v25, v26, v27);
    v28 = *(_QWORD *)(v4 + 24);
    if ( v28 )
    {
      v29 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v28 + 56);
      v30 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__WarBoardActionTrendEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v30,
        (Il2CppObject *)v4,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        (const MethodInfo_2BC49BC *)Method_System_Func_int__WarBoardActionTrendEntity___ctor__);
      v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                   v29,
                                                                   (System_Func_TSource__TResult__o *)v30,
                                                                   (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v31,
                                                  (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_23:
    sub_B52A5C(v5, v6);
  }
  v14 = (_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v15 = **((_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 6);
  v16 = *(_WORD *)(v15 + 306);
  if ( (v16 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 6));
    v16 = *(_WORD *)(v15 + 306);
  }
  if ( (v16 & 0x400) != 0 )
  {
    v17 = *v14[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AEB684(*v14[6]);
    if ( !*(_DWORD *)(v17 + 224) )
    {
      v18 = *v14[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AEB684(*v14[6]);
      j_il2cpp_runtime_class_init_0(v18);
    }
  }
  v19 = *v14[6];
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AEB684(*v14[6]);
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
  return WarBoardActionTrendMaster__ConvertFromFutureEntity(
           x,
           this->fields.futureTrendMaster,
           this->fields.baseTrendEntity,
           0LL);
}