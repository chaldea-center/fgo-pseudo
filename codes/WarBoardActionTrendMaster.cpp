void __fastcall WarBoardActionTrendMaster___ctor(WarBoardActionTrendMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1717F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__, method, v2);
    byte_4B1717F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    324,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int___ctor__);
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
  __int64 v8; // x2
  WarBoardActionTrendEntity_o *result; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  WarBoardActionTrendEntity_o *v13; // x20
  WarBoardActionTrendEntity_o *v14; // x21
  const MethodInfo *v15; // x3

  v6 = futureTrendId;
  if ( (byte_4B17181 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__,
      futureTrendMaster,
      baseTrendEntity);
    *(_QWORD *)&futureTrendId = sub_1BCA7E0(&WarBoardActionTrendEntity_TypeInfo, v7, v8);
    byte_4B17181 = 1;
  }
  if ( !futureTrendMaster )
    sub_1BCAA3C(*(_QWORD *)&futureTrendId, futureTrendMaster);
  result = (WarBoardActionTrendEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)futureTrendMaster,
                                            v6,
                                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardFutureActionTrendMaster__WarBoardFutureActionTrendEntity__int__GetEntity__);
  if ( result )
  {
    v13 = result;
    v14 = (WarBoardActionTrendEntity_o *)sub_1BCAA2C(WarBoardActionTrendEntity_TypeInfo, v10, v11, v12);
    WarBoardActionTrendEntity___ctor_41054100(v14, (WarBoardFutureActionTrendEntity_o *)v13, baseTrendEntity, v15);
    return v14;
  }
  return result;
}


WarBoardActionTrendEntity_array *__fastcall WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
        WarBoardActionTrendMaster_o *this,
        WarBoardActionTrendEntity_o *baseTrendEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x8
  __int64 v29; // x1
  long double inited; // q0
  _QWORD *v31; // x19
  __int64 v32; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  Il2CppObject *Master_object; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  System_Func_T__TResult__o *v47; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0

  if ( (byte_4B17180 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_WarBoardActionTrendEntity___, baseTrendEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___, v11, v12);
    sub_1BCA7E0(&System_Func_int__WarBoardActionTrendEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(
      &Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
      v15,
      v16);
    sub_1BCA7E0(&WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, v17, v18);
    byte_4B17180 = 1;
  }
  v19 = sub_1BCAA2C(WarBoardActionTrendMaster___c__DisplayClass1_0_TypeInfo, baseTrendEntity, method, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_19;
  *(_QWORD *)(v19 + 24) = baseTrendEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)baseTrendEntity, v22, v23, v24, v25, v26, v27);
  v28 = *(_QWORD *)(v19 + 24);
  if ( !v28 )
    goto LABEL_19;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v28 + 56), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardFutureActionTrendMaster___);
    *(_QWORD *)(v19 + 16) = Master_object;
    sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)Master_object, v37, v38, v39, v40, v41, v42);
    v45 = *(_QWORD *)(v19 + 24);
    if ( v45 )
    {
      v46 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v45 + 56);
      v47 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                           System_Func_int__WarBoardActionTrendEntity__TypeInfo,
                                           v21,
                                           v43,
                                           v44);
      System_Func_int__object____ctor(
        v47,
        (Il2CppObject *)v19,
        Method_WarBoardActionTrendMaster___c__DisplayClass1_0__GetFutureActionTrendEntityArray_b__0__,
        0LL);
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v46,
                                                                   (System_Func_TSource__TResult__o *)v47,
                                                                   (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendEntity___);
      return (WarBoardActionTrendEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                  v48,
                                                  (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendEntity___);
    }
LABEL_19:
    sub_1BCAA3C(v20, v21);
  }
  v31 = Method_System_Array_Empty_WarBoardActionTrendEntity___;
  v32 = *((_QWORD *)Method_System_Array_Empty_WarBoardActionTrendEntity___ + 7);
  if ( !v32 )
  {
    sub_1C1C718(Method_System_Array_Empty_WarBoardActionTrendEntity___, v29);
    v32 = v31[7];
  }
  v33 = *(_QWORD *)(v32 + 16);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v33 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v33, v29);
  v34 = *(_QWORD *)(v31[7] + 16LL);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C1C6BC(inited);
  return **(WarBoardActionTrendEntity_array ***)(v34 + 184);
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