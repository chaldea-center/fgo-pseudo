void BattleLogicSkill___ctor(BattleLogicSkill_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicSkill__ExecuteShortenSkillBuff(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *actSkillInfo,
        int32_t actorSvtUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleBuffData_o *buffData; // x21
  BattleServantData_o *v10; // x19
  BattleBuffData_CheckIndividualitiesData_o *v11; // x22
  BattleBuffData_BuffData_array *BuffList_45567464; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v15; // w24
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x23

  if ( (byte_4C5A017 & 1) == 0 )
  {
    sub_1C3E564(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4C5A017 = 1;
  }
  if ( actSkillInfo && actSkillInfo->fields.type == 11 )
  {
    data = this->fields.data;
    if ( data )
    {
      ServantData = BattleData__getServantData(data, actorSvtUniqueId, 0);
      if ( !ServantData )
        return;
      buffData = ServantData->fields.buffData;
      v10 = ServantData;
      if ( !buffData )
        return;
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C3E7B0(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_45722636(v11, v10, 0, 0, 0, 0, 0, 1, 0);
      BuffList_45567464 = BattleBuffData__getBuffList_45567464(buffData, 143, v11, 1, 0, 0, 0, 0);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_45567464, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_45567464 )
      {
        max_length = BuffList_45567464->max_length;
        index = actSkillInfo->fields.index;
        if ( max_length < 1 )
        {
          v16 = 0;
LABEL_21:
          data = (BattleData_o *)v10->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0);
            BattleServantData__skillChageShorten(v10, v16, 0, index, 0, 0);
            return;
          }
        }
        else
        {
          v15 = 0;
          v16 = 0;
          while ( 1 )
          {
            if ( v15 >= max_length )
              sub_1C3E7C8(data, actSkillInfo);
            v17 = &BuffList_45567464->obj.klass + (int)v15;
            v18 = (BattleBuffData_BuffData_o *)v17[4];
            if ( !v18 )
              break;
            if ( BattleBuffData_BuffData__CheckShortenSkillBuff((BattleBuffData_BuffData_o *)v17[4], index, 0) )
            {
              v16 += v18->fields.param;
              BattleBuffData_BuffData__UsedShortenSkillCountProgress(v18, index, 0);
            }
            else
            {
              BattleBuffData_BuffData__RevertUnused(v18, 1, 0);
            }
            max_length = BuffList_45567464->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1C3E7C0(data, actSkillInfo);
  }
}


int32_t BattleLogicSkill__GetHitGimmickSkillId(
        BattleLogicSkill_o *this,
        System_Int32_array *rateArray,
        const MethodInfo *method)
{
  WeightRate_int__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x21
  int32_t Next; // w1

  if ( (byte_4C5A013 & 1) == 0 )
  {
    sub_1C3E564(&Method_WeightRate_int___ctor__);
    sub_1C3E564(&Method_WeightRate_int__getData__);
    sub_1C3E564(&Method_WeightRate_int__getTotalWeight__);
    sub_1C3E564(&Method_WeightRate_int__setWeight__);
    sub_1C3E564(&WeightRate_int__TypeInfo);
    byte_4C5A013 = 1;
  }
  if ( !rateArray )
    return -1;
  v4 = (WeightRate_int__o *)sub_1C3E7B0(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v4, (const MethodInfo_3BA6E78 *)Method_WeightRate_int___ctor__);
  max_length = rateArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C3E7C8(v5, v6);
      if ( !v4 )
        break;
      WeightRate_int___setWeight(
        v4,
        rateArray->m_Items[v8],
        v8,
        (const MethodInfo_3BA6394 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = rateArray->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_12;
    }
LABEL_13:
    sub_1C3E7C0(v5, v6);
  }
  if ( !v4 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v4->fields.totalweight, 0);
  return WeightRate_int___getData(v4, Next, (const MethodInfo_3BA6808 *)Method_WeightRate_int__getData__);
}


System_Collections_Generic_List_BattleLogicTask__o *BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        System_Int32_array *ptTargetArray,
        System_Int32_array *enemyTargetArray,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x19
  long double inited; // q0
  _QWORD *v19; // x24
  __int64 v20; // x8
  __int64 v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x24
  DataVals_array *DataValArray; // x0
  BattleLogicSkill___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x22
  System_Func_T__TResult__o *_9__7_0; // x23
  Il2CppObject *v28; // x25
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x22
  System_Func_T1__T2__TResult__o *v33; // x23
  System_Func_T__TResult__o *v34; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v35; // x0
  BattleLogicSkill___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x22
  System_Func_object__bool__o *_9__7_3; // x23
  Il2CppObject *v39; // x24
  struct BattleLogicSkill___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x22
  System_Func_object__object__o *v44; // x23
  __int64 v45; // x8
  void *v46; // x21
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x21
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  BattleSkillInfoData_o *v60; // x22
  __int64 v61; // x0
  __int64 v62; // x1
  System_Collections_Generic_IEnumerable_T__o *v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  BattleLogicSkill___c_c *v68; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v70; // x21
  struct BattleLogicSkill___c_StaticFields *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  const MethodInfo *v75; // [xsp+8h] [xbp-68h]

  if ( (byte_4C5A009 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_int___);
    sub_1C3E564(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
    sub_1C3E564(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C3E564(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
    sub_1C3E564(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_1C3E564(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C3E564(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C3E564(&System_Func_DataVals__Target_TYPE__TypeInfo);
    sub_1C3E564(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C3E564(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__);
    sub_1C3E564(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__);
    sub_1C3E564(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__);
    sub_1C3E564(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
    sub_1C3E564(&BattleLogicSkill___c_TypeInfo);
    byte_4C5A009 = 1;
  }
  v9 = sub_1C3E7B0(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_75;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = task;
  v14 = v9 + 24;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)task, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v19 = Method_System_Array_Empty_int___;
  v20 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v20 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_int___);
    v20 = v19[7];
  }
  v21 = *(_QWORD *)(v20 + 16);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v21 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v21);
  v10 = *(__int64 **)(v19[7] + 16LL);
  if ( (*((_BYTE *)v10 + 309) & 1) == 0 )
    v10 = (__int64 *)sub_1C8EC78(inited);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o **)v10[23];
  v23 = *v22;
  if ( ptTargetArray )
  {
    v10 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v22,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_313E3BC *)Method_System_Linq_Enumerable_Union_int___);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( enemyTargetArray )
  {
    v10 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v23,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_313E3BC *)Method_System_Linq_Enumerable_Union_int___);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_75;
  v10 = *(__int64 **)(*(_QWORD *)v14 + 72LL);
  if ( !v10 )
    goto LABEL_75;
  if ( *((_DWORD *)v10 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v10, 0);
    v25 = BattleLogicSkill___c_TypeInfo;
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v25 = BattleLogicSkill___c_TypeInfo;
    }
    _9__7_0 = (System_Func_T__TResult__o *)v25->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = BattleLogicSkill___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v25->static_fields->__9;
      _9__7_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v28,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v30, v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v26,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_312FC30 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v33 = (System_Func_T1__T2__TResult__o *)sub_1C3E7B0(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v33,
      (Il2CppObject *)v9,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v32,
                                                                 (Il2CppObject *)v23,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v33,
                                                                 (const MethodInfo_3102084 *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v34 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v34,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0);
  v35 = System_Linq_Enumerable__Select_int__object_(
          v23,
          (System_Func_TSource__TResult__o *)v34,
          (const MethodInfo_312D55C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v36 = BattleLogicSkill___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v36 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_3 = (System_Func_object__bool__o *)v36->static_fields->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = BattleLogicSkill___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__7_3 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v39,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0);
    v40 = BattleLogicSkill___c_TypeInfo->static_fields;
    v40->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1C3E508((CGThumbnailListItem_o *)&v40->__9__7_3, (int32_t)_9__7_3, v41, v42);
  }
  v43 = System_Linq_Enumerable__Where_object_(
          v37,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v44 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v44,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0);
  v10 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v43,
                     (System_Func_TSource__IEnumerable_TResult___o *)v44,
                     (const MethodInfo_3133008 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v10 )
LABEL_75:
    sub_1C3E7C0(v10, v11);
  v45 = *v10;
  v46 = v10;
  v47 = *(unsigned __int16 *)(*v10 + 302);
  if ( *(_WORD *)(*v10 + 302) )
  {
    v48 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v48 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_37;
    }
    v49 = v45 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_37:
    v49 = sub_1C8ED7C(v10, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v51 = (*(__int64 (__fastcall **)(void *, _QWORD))v49)(v46, *(_QWORD *)(v49 + 8));
  if ( !v51 )
    sub_1C3E7C0(0, v50);
  while ( 1 )
  {
    v52 = *(_QWORD *)v51;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_44;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_44:
      v55 = sub_1C8ED7C(v51, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
      break;
    v56 = *(_QWORD *)v51;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v58 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_51;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_51:
      v59 = sub_1C8ED7C(v51, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0);
    }
    v60 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
    v61 = sub_1C3E60C(int___TypeInfo, 1);
    if ( !v60 )
      sub_1C3E7C0(v61, v62);
    if ( !v61 )
      sub_1C3E7C0(0, v62);
    if ( !*(_DWORD *)(v61 + 24) )
      sub_1C3E7C8(v61, v62);
    *(_DWORD *)(v61 + 32) = v60->fields.svtUniqueId;
    v63 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v60,
                                                           (System_Int32_array *)v61,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           v75);
    if ( !v17 )
      sub_1C3E7C0(v63, v63);
    System_Collections_Generic_List_object___AddRange(
      v17,
      v63,
      (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v64 = *(_QWORD *)v51;
  v65 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
  {
    v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_62;
    }
    v67 = v64 + 16LL * *v66 + 312;
  }
  else
  {
LABEL_62:
    v67 = sub_1C8ED7C(v51, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v67)(v51, *(_QWORD *)(v67 + 8));
  v68 = BattleLogicSkill___c_TypeInfo;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v68 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_5 = (System_Func_object__int__o *)v68->static_fields->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = BattleLogicSkill___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v68->static_fields->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v70,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0);
    v71 = BattleLogicSkill___c_TypeInfo->static_fields;
    v71->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1C3E508((CGThumbnailListItem_o *)&v71->__9__7_5, (int32_t)_9__7_5, v72, v73);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v17,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_30E9098 *)Method_BasicHelper_StableSort_BattleLogicTask___);
}


bool BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
        BattleLogicSkill_o *this,
        System_Int32_array *actorIndividualities,
        System_Int32_array *notSkillCopyTargetIndividualities,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  unsigned __int64 v8; // x23
  __int64 v9; // x21
  System_Func_int__bool__o *v10; // x22
  bool v11; // w0

  if ( (byte_4C5A015 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__);
    sub_1C3E564(&BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
    byte_4C5A015 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actorIndividualities, 0) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)notSkillCopyTargetIndividualities, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !notSkillCopyTargetIndividualities )
        goto LABEL_16;
      if ( SLODWORD(notSkillCopyTargetIndividualities->max_length) >= 1 )
      {
        v8 = 0;
        while ( 1 )
        {
          v9 = sub_1C3E7B0(BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v9, 0);
          if ( v8 >= LODWORD(notSkillCopyTargetIndividualities->max_length) )
            sub_1C3E7C8(IsNullOrEmpty, v7);
          if ( !v9 )
            break;
          *(_DWORD *)(v9 + 16) = notSkillCopyTargetIndividualities->m_Items[v8];
          v10 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v10,
            (Il2CppObject *)v9,
            Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0);
          v11 = BasicHelper__Any_int__51260304(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v10,
                  (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928);
          if ( !v11 && (__int64)++v8 < SLODWORD(notSkillCopyTargetIndividualities->max_length) )
            continue;
          return v11;
        }
LABEL_16:
        sub_1C3E7C0(IsNullOrEmpty, v7);
      }
    }
  }
  return 0;
}


bool BattleLogicSkill__IsSkillAvailable(
        BattleSkillInfoData_o *skillInfo,
        System_String_o **messageNotAvailable,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x20
  __int64 *v14; // x8
  __int64 v15; // x1
  System_String_o *IfExists; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C5A010 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_2881/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/);
    sub_1C3E564(&StringLiteral_2880/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/);
    byte_4C5A010 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *messageNotAvailable = static_fields->Empty;
  sub_1C3E508((CGThumbnailListItem_o *)messageNotAvailable, (int32_t)Empty, (int32_t)method, v3);
  if ( !skillInfo )
    goto LABEL_16;
  if ( BattleSkillInfoData__isChargeOK(skillInfo, 0) )
  {
    if ( BattleSkillInfoData__IsOpenCond(skillInfo, 0) )
      return 1;
    v8 = sub_1C3E60C(string___TypeInfo, 1);
    if ( v8 )
    {
      v13 = v8;
      if ( *(_DWORD *)(v8 + 24) )
      {
        v14 = &StringLiteral_2881/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/;
        goto LABEL_13;
      }
LABEL_17:
      sub_1C3E7C8(v8, v9);
    }
LABEL_16:
    sub_1C3E7C0(v8, v9);
  }
  v8 = sub_1C3E60C(string___TypeInfo, 1);
  if ( !v8 )
    goto LABEL_16;
  v13 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_17;
  v14 = &StringLiteral_2880/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/;
LABEL_13:
  v15 = *v14;
  *(_QWORD *)(v13 + 32) = *v14;
  sub_1C3E508((CGThumbnailListItem_o *)(v13 + 32), v15, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v13, 0);
  *messageNotAvailable = IfExists;
  sub_1C3E508((CGThumbnailListItem_o *)messageNotAvailable, (int32_t)IfExists, v17, v18);
  return 0;
}


bool BattleLogicSkill__IsSkillExecutable(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **messageNotExecutable,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_4C5A00E & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A00E = 1;
  }
  *messageNotExecutable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)messageNotExecutable, StringLiteral_1/*""*/, (int32_t)messageNotExecutable, method);
  return BattleLogicSkill__IsSkillAvailable(skillInfo, messageNotExecutable, v7)
      && BattleLogicSkill__checkConditions(this, skillInfo, messageNotExecutable, v8);
}


BattleLogicTask_o *BattleLogicSkill__MakeAddInvokeSkillTask(
        BattleLogicSkill_o *this,
        SkillLvMaster_o *skillLvMst,
        SkillLvEntity_o *skillLvEnt,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v8; // x21
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicSkill_o *v10; // x20
  int32_t v11; // w22
  int32_t actortype; // w24
  const MethodInfo *v13; // x1
  BattleData_o *data; // x21
  bool isPlayerID; // w21
  int32_t data_high; // w20
  int32_t v17; // w23
  TempBattleSkillInfoData_o *v18; // x25
  const MethodInfo *v19; // x4

  v8 = this;
  if ( (byte_4C5A00B & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1C3E564(&TempBattleSkillInfoData_TypeInfo);
    byte_4C5A00B = 1;
  }
  if ( !skillLvMst )
    goto LABEL_18;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetAddInvokeSkillLvEntity(skillLvMst, skillLvEnt, 0);
  if ( this )
  {
    if ( !baseTask )
      goto LABEL_18;
    actorIdlist = baseTask->fields.actorIdlist;
    v10 = this;
    if ( actorIdlist )
    {
      if ( !LODWORD(actorIdlist->max_length) )
        sub_1C3E7C8(this, skillLvMst);
      v11 = actorIdlist->m_Items[0];
      if ( !skillLvEnt )
        goto LABEL_18;
    }
    else
    {
      v11 = -1;
      if ( !skillLvEnt )
        goto LABEL_18;
    }
    actortype = baseTask->fields.actortype;
    if ( SkillLvEntity__GetAddInvokeSkillActorType(skillLvEnt, 0) == 1 )
    {
      data = v8->fields.data;
      this = (BattleLogicSkill_o *)BattleLogicTask__getTarget(baseTask, v13);
      if ( !data )
        goto LABEL_18;
      isPlayerID = BattleData__isPlayerID(data, (int32_t)this, 0);
      v11 = -1;
      actortype = 5;
    }
    else
    {
      isPlayerID = 0;
    }
    v17 = (int32_t)v10->fields.data;
    data_high = HIDWORD(v10->fields.data);
    v18 = (TempBattleSkillInfoData_o *)sub_1C3E7B0(TempBattleSkillInfoData_TypeInfo);
    TempBattleSkillInfoData___ctor(v18, v17, data_high, v11, 0);
    this = (BattleLogicSkill_o *)BattleLogicTask__CloneSkillTask(
                                   baseTask,
                                   (BattleSkillInfoData_o *)v18,
                                   actortype,
                                   isPlayerID,
                                   v19);
    if ( this )
    {
      BYTE1(this[5].fields.logic) = baseTask->fields.isSkipStep;
      LOBYTE(this[2].monitor) = baseTask->fields.IsResetPrevAttackInfo;
      BYTE1(this[2].monitor) = baseTask->fields.IsResetWasAttackTargetId;
      BYTE3(this[4].fields.logicfunction) = baseTask->fields.IsSkipRelationTask;
      BYTE2(this[2].monitor) = baseTask->fields.IsResetFunctionedFunctionIds;
      return (BattleLogicTask_o *)this;
    }
LABEL_18:
    sub_1C3E7C0(this, skillLvMst);
  }
  return (BattleLogicTask_o *)this;
}


void BattleLogicSkill__SetCommandSpellAddFunctionData(
        BattleLogicSkill_o *this,
        int32_t commandSpellId,
        System_Int32_array *targetIds,
        System_Collections_Generic_List_int__o *funcIdList,
        System_Collections_Generic_List_DataVals__o *dataValsList,
        const MethodInfo *method)
{
  BalanceConfig_c *v11; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  BattleData_o *IsQuestClear_40371188; // x0
  __int64 v14; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v16; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v19; // x22
  unsigned int v20; // w24
  AddSkillData_o *v21; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C5A016 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    byte_4C5A016 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  entity = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v11->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_40371188 = (BattleData_o *)CondType__IsQuestClear_40371188(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( ((unsigned __int8)IsQuestClear_40371188 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !LODWORD(targetIds->max_length) )
      goto LABEL_30;
    IsQuestClear_40371188 = this->fields.data;
    if ( !IsQuestClear_40371188 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_40371188, targetIds->m_Items[0], 0);
    if ( !ServantData )
      return;
    v16 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0) )
    {
      return;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_40371188 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v16->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1C3E7C0(IsQuestClear_40371188, v14);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v19 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_40371188;
      v20 = 0;
      while ( v20 < max_length )
      {
        v21 = classBoardAddCommandSpells->m_Items[v20];
        if ( !v21 || !v19 )
          goto LABEL_29;
        IsQuestClear_40371188 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v19,
                                                  &entity,
                                                  v21->fields.id,
                                                  commandSpellId,
                                                  v21->fields.lv,
                                                  0);
        if ( ((unsigned __int8)IsQuestClear_40371188 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_40371188 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_40371188 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_40371188,
            (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v20 >= max_length )
          return;
      }
LABEL_30:
      sub_1C3E7C8(IsQuestClear_40371188, v14);
    }
  }
}


bool BattleLogicSkill__SetSkillCopyFunction(
        BattleLogicSkill_o *this,
        SkillLvEntity_o *skillLvEnt,
        DataVals_o *copyFuncVals,
        System_Int32_array **functionIdArray,
        DataVals_array **dataValsArray,
        int32_t actorId,
        const MethodInfo *method)
{
  SkillLvEntity_o *v11; // x22
  BattleLogicSkill_o *v12; // x25
  BattleData_o *data; // x8
  BattleLogicSkill_o *v14; // x25
  BattleServantData_o *v15; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x23
  unsigned __int64 v18; // x20
  __int64 v19; // x24
  struct System_Int32_array *v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Func_int__bool__o *v23; // x27
  __int64 v24; // x27
  System_Func_int__bool__o *v25; // x27
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v27; // x3
  System_Func_int__bool__o *v28; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Object_array *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  CGThumbnailListItem_o *v47; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v48; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v49; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v11 = skillLvEnt;
  v12 = this;
  if ( (byte_4C5A014 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C3E564(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__);
    this = (BattleLogicSkill_o *)sub_1C3E564(&BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    byte_4C5A014 = 1;
  }
  if ( !copyFuncVals )
    goto LABEL_52;
  CopyTargetFunctionTypeArray = (System_Collections_ICollection_o *)DataVals__GetCopyTargetFunctionTypeArray(
                                                                      copyFuncVals,
                                                                      0);
  self = (System_Collections_ICollection_o *)DataVals__GetCopyTargetBuffTypeArray(copyFuncVals, 0);
  this = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetFuncIdArray(copyFuncVals, 0);
  data = v12->fields.data;
  if ( !data )
    goto LABEL_52;
  v14 = this;
  this = (BattleLogicSkill_o *)BattleData__getServantData(data, actorId, 0);
  if ( !v11 )
    goto LABEL_52;
  v15 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(v11, 0);
  actorIndividualities = v15 ? BattleServantData__getConcatServantAndBuffIndividualityies(v15, 0, 0, 0, 0, 0, 0) : 0LL;
  v47 = (CGThumbnailListItem_o *)functionIdArray;
  v49 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v49,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  v48 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v18 = 0;
  while ( (__int64)v18 < SLODWORD(funcId->max_length) )
  {
    v19 = sub_1C3E7B0(BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0);
    v20 = v11->fields.funcId;
    if ( !v20 )
      goto LABEL_52;
    if ( v18 >= LODWORD(v20->max_length) )
      goto LABEL_57;
    if ( !v19 )
      goto LABEL_52;
    *(_DWORD *)(v19 + 16) = v20->m_Items[v18];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0)
      || (v23 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v23,
            (Il2CppObject *)v19,
            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__,
            0),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__51260304(
                                         (System_Int32_array *)v14,
                                         (System_Func_T__bool__o *)v23,
                                         (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v19 + 24) = 0;
      v24 = v19 + 24;
      sub_1C3E508((CGThumbnailListItem_o *)(v19 + 24), 0, v21, v22);
      if ( !v17 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v17,
                                     (Il2CppObject **)(v19 + 24),
                                     *(_DWORD *)(v19 + 16),
                                     (const MethodInfo_33B2FA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v24 )
          goto LABEL_52;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v24 + 24LL), 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v24 )
            goto LABEL_52;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v24 + 24LL), 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v24 )
              goto LABEL_52;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v24 + 24LL), 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v24 )
                goto LABEL_52;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v24 + 28LL), 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v24 )
                  goto LABEL_52;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v24 + 24LL), 0);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v25 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v25,
                        (Il2CppObject *)v19,
                        Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__,
                        0),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__51260304(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v25,
                                                     (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v18 >= LODWORD(SetTypeDataValArray->max_length) )
LABEL_57:
                    sub_1C3E7C8(this, skillLvEnt);
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v18];
                  if ( !this )
                    goto LABEL_52;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v27);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0)
                      || (v28 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v28,
                            (Il2CppObject *)v19,
                            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__,
                            0),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__51260304(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v28,
                                                         (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v49;
                      if ( !v49 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*(unsigned int *)(v19 + 16);
                      items = v49->fields._items;
                      v30 = Method_System_Collections_Generic_List_int__Add__;
                      ++v49->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v49->fields._size;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v49,
                          (int32_t)skillLvEnt,
                          *(const MethodInfo_379843C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v49->fields._size = size + 1;
                        items->m_Items[size] = (int)skillLvEnt;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v11, 0);
                      if ( !this )
                        goto LABEL_52;
                      if ( v18 >= LODWORD(this->fields.logic) )
                        goto LABEL_57;
                      if ( !v48 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*((_QWORD *)&this->fields.logictarget + v18);
                      v34 = v48->fields._items;
                      v35 = Method_System_Collections_Generic_List_DataVals__Add__;
                      ++v48->fields._version;
                      if ( !v34 )
                        goto LABEL_52;
                      v36 = v48->fields._size;
                      if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v48,
                          (Il2CppObject *)skillLvEnt,
                          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v37 = &v34->obj.klass + v36;
                        v48->fields._size = v36 + 1;
                        v37[4] = (Il2CppClass *)skillLvEnt;
                        sub_1C3E508((CGThumbnailListItem_o *)(v37 + 4), (int32_t)skillLvEnt, v32, v33);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    funcId = v11->fields.funcId;
    ++v18;
    if ( !funcId )
      goto LABEL_52;
  }
  this = (BattleLogicSkill_o *)v49;
  if ( !v49
    || (v38 = System_Collections_Generic_List_int___ToArray(
                v49,
                (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        v47->klass = (CGThumbnailListItem_c *)v38,
        sub_1C3E508(v47, (int32_t)v38, v39, v40),
        (this = (BattleLogicSkill_o *)v48) == 0)
    || (v41 = System_Collections_Generic_List_object___ToArray(
                v48,
                (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v41,
        sub_1C3E508((CGThumbnailListItem_o *)dataValsArray, (int32_t)v41, v42, v43),
        !v47->klass) )
  {
LABEL_52:
    sub_1C3E7C0(this, skillLvEnt);
  }
  return LODWORD(v47->klass->_1.namespaze) != 0;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicSkill__actPassiveSkill(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isShift,
        bool isDeckDataLoad,
        BattleLogicSkill_SkillExecArgs_o *skillExecArgs,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v10; // x19
  int32_t svtUniqueId; // w26
  int32_t v12; // w0
  int32_t skilllv; // w27
  int32_t v14; // w29
  BattleActionData_o *v15; // x24
  BattleServantData_o *ServantData; // x25
  bool v17; // w22
  Il2CppObject *Entity; // x0
  SkillEntity_o *v19; // x28
  SkillLvEntity_o *v20; // x27
  System_Int32_array *Individualities; // x29
  System_Int32_array *ActIndividuality; // x21
  ServantEntity_o *svtdata; // x21
  int32_t Rarity; // w0
  __int64 v25; // x21
  __int64 v26; // x26
  int32_t v27; // w0
  bool v28; // w28
  int32_t Timing_k__BackingField; // w21
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  int32_t type; // w8
  BattleLogicFunction_o *logicfunction; // x22
  System_Int32_array *funcId; // x23
  struct BattleBuffData_o *buffData; // x8
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x8
  int v36; // w9
  BattleData_o *data; // x20
  struct FunctionMaster_o *master; // x21
  Il2CppObject *klass; // x22
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  bool v43; // [xsp+3Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  v10 = this;
  if ( (byte_4C5A00C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleServantData__TypeInfo);
    sub_1C3E564(&BattleActionData_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C3E564(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C3E564(&Individuality_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__);
    this = (BattleLogicSkill_o *)sub_1C3E564(&BattleLogicSkill___c_TypeInfo);
    byte_4C5A00C = 1;
  }
  if ( !skillInfo )
    goto LABEL_45;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v12 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, bool, bool, BattleLogicSkill_SkillExecArgs_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
          skillInfo,
          skillInfo->klass->vtable._5_get_skillId.method,
          isShift,
          isDeckDataLoad,
          skillExecArgs,
          method);
  skilllv = skillInfo->fields.skilllv;
  v14 = v12;
  v15 = (BattleActionData_o *)sub_1C3E7B0(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_45;
  v43 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  v17 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v14,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v19 = (SkillEntity_o *)Entity;
  if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0) )
    return;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v14, skilllv, 0);
  v20 = (SkillLvEntity_o *)this;
  if ( skillInfo->fields.type != 12 )
    goto LABEL_48;
  if ( !ServantData )
    goto LABEL_45;
  Individualities = BattleServantData__getIndividualities(ServantData, 0, 1, 0, 1, 0);
  ActIndividuality = SkillEntity__getActIndividuality(v19, 0);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  if ( Individuality__CheckIndividualities(Individualities, ActIndividuality, 0) )
  {
    svtdata = ServantData->fields.svtdata;
    Rarity = BattleServantData__getRarity(ServantData, 0);
    this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v20, svtdata, Rarity, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_48:
      if ( v15 )
      {
        v15->fields.actorId = svtUniqueId;
        if ( ServantData )
        {
          v26 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
          v25 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v44.fields.currentCryptoKey = v26;
          *(_QWORD *)&v44.fields.fakeValue = v25;
          v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v44, 0);
          v15->fields.motionId = SkillEntity__GetMotionId(v19, v27, 0);
          v28 = v17;
          v15->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
          v15->fields.commandAssistId = skillInfo->fields.commandAssistId;
          v15->fields.cardIndex = skillInfo->fields.index;
          if ( skillExecArgs )
          {
            if ( !skillExecArgs->fields._AllowUpdateFieldServantResultStatus_k__BackingField )
              goto LABEL_26;
          }
          this = (BattleLogicSkill_o *)v10->fields.logic;
          if ( !this )
            goto LABEL_45;
          BattleLogic__updateResultServant((BattleLogic_o *)this, 0);
          if ( skillExecArgs )
LABEL_26:
            Timing_k__BackingField = skillExecArgs->fields._Timing_k__BackingField;
          else
            Timing_k__BackingField = 0;
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C3E7B0(BattleLogicFunction_FunctionArgument_TypeInfo);
          BattleLogicFunction_FunctionArgument___ctor(argument, 0);
          if ( argument )
          {
            type = skillInfo->fields.type;
            argument->fields.isDeckDataLoad = v43;
            argument->fields._SkillTiming_k__BackingField = Timing_k__BackingField;
            argument->fields.grantSkillType = type;
            if ( v20 )
            {
              logicfunction = v10->fields.logicfunction;
              funcId = v20->fields.funcId;
              this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v20, 0);
              if ( logicfunction )
              {
                this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                               logicfunction,
                                               v15,
                                               funcId,
                                               (DataVals_array *)this,
                                               1,
                                               1,
                                               0,
                                               v28,
                                               0,
                                               1,
                                               1,
                                               argument,
                                               v20->fields.skillId,
                                               0);
                if ( !skillExecArgs || skillExecArgs->fields._RemoveActorUnfixedBuff_k__BackingField )
                {
                  buffData = ServantData->fields.buffData;
                  if ( !buffData )
                    goto LABEL_45;
                  unfixedBuffList = buffData->fields.unfixedBuffList;
                  if ( !unfixedBuffList )
                    goto LABEL_45;
                  v36 = unfixedBuffList->fields._version + 1;
                  unfixedBuffList->fields._size = 0;
                  unfixedBuffList->fields._version = v36;
                }
                data = v10->fields.data;
                this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
                  this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                }
                master = this[3].fields.logicfunction->fields.master;
                if ( !master )
                {
                  if ( !LODWORD(this[4].fields.logictarget) )
                  {
                    j_il2cpp_runtime_class_init_0(this);
                    this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                  }
                  klass = (Il2CppObject *)this[3].fields.logicfunction->klass;
                  master = (struct FunctionMaster_o *)sub_1C3E7B0(System_Action_BattleServantData__TypeInfo);
                  System_Action_object____ctor(
                    (System_Action_object__o *)master,
                    klass,
                    Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                    0);
                  static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                  static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)master, v41, v42);
                }
                if ( data )
                {
                  BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)master, 0);
                  this = (BattleLogicSkill_o *)v10->fields.logic;
                  if ( this )
                  {
                    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_45:
      sub_1C3E7C0(this, skillInfo);
    }
  }
}


bool BattleLogicSkill__checkConditions(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **text,
        const MethodInfo *method)
{
  __int64 v7; // x26
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 Instance; // x0
  __int64 v11; // x1
  SkillLvMaster_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_object__object__o *v16; // x0
  __int64 v17; // x25
  __int64 v18; // x24
  __int64 v19; // x23
  __int64 v20; // x22
  BattleServantData_o *v21; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v23; // x8
  unsigned int NowHp; // w0
  unsigned int v25; // w0
  int32_t v26; // w20
  int32_t v27; // w20
  __int64 *v29; // x8
  System_String_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4C5A00F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_1C3E564(&System_Func_string__int__bool__TypeInfo);
    sub_1C3E564(&System_Func_string__double__bool__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__);
    sub_1C3E564(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__);
    sub_1C3E564(&BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
    sub_1C3E564(&StringLiteral_2876/*"BATTLE_SKILLERROR_NP_LOWER"*/);
    sub_1C3E564(&StringLiteral_2874/*"BATTLE_SKILLERROR_HP_LOWER"*/);
    sub_1C3E564(&StringLiteral_12352/*"STAR_HIGHER"*/);
    sub_1C3E564(&StringLiteral_7256/*"HP_PER_LOWER"*/);
    sub_1C3E564(&StringLiteral_2875/*"BATTLE_SKILLERROR_NP_HIGHER"*/);
    sub_1C3E564(&StringLiteral_2873/*"BATTLE_SKILLERROR_HP_HIGHER"*/);
    sub_1C3E564(&StringLiteral_7255/*"HP_PER_HIGHER"*/);
    sub_1C3E564(&StringLiteral_2877/*"BATTLE_SKILLERROR_STAR_HIGHER"*/);
    sub_1C3E564(&StringLiteral_9358/*"NP_HIGHER"*/);
    sub_1C3E564(&StringLiteral_2878/*"BATTLE_SKILLERROR_STAR_LOWER"*/);
    sub_1C3E564(&StringLiteral_7257/*"HP_VAL_HIGHER"*/);
    sub_1C3E564(&StringLiteral_12353/*"STAR_LOWER"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_9360/*"NP_LOWER"*/);
    sub_1C3E564(&StringLiteral_7258/*"HP_VAL_LOWER"*/);
    byte_4C5A00F = 1;
  }
  v7 = sub_1C3E7B0(BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)text, StringLiteral_1/*""*/, v8, v9);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_47;
  v12 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
               skillInfo,
               skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v12 )
    goto LABEL_47;
  Instance = (__int64)SkillLvMaster__GetEntity(v12, Instance, skillInfo->fields.skilllv, 0);
  if ( !Instance || !v7 )
    goto LABEL_47;
  v15 = *(_QWORD *)(Instance + 56);
  *(_QWORD *)(v7 + 16) = v15;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), v15, v13, v14);
  v16 = *(System_Collections_Generic_Dictionary_object__object__o **)(v7 + 16);
  if ( !v16 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v16,
         (const MethodInfo_34754B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v17 = sub_1C3E7B0(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v17,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__,
    0);
  v18 = sub_1C3E7B0(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v18,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__,
    0);
  v19 = sub_1C3E7B0(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v19,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__,
    0);
  v20 = sub_1C3E7B0(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v20,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__,
    0);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0) )
    return 1;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)BattleData__getServantData((BattleData_o *)Instance, skillInfo->fields.svtUniqueId, 0);
  if ( !Instance )
    goto LABEL_47;
  v21 = (BattleServantData_o *)Instance;
  Instance = BattleServantData__getNPVal((BattleServantData_o *)Instance, 0);
  if ( !v17 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v17 + 24))(
          *(_QWORD *)(v17 + 64),
          StringLiteral_9358/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v17 + 40))
      & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_2875/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v21, 0);
  if ( !v18 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v18 + 24))(
               *(_QWORD *)(v18 + 64),
               StringLiteral_9360/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v18 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_2876/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v17 + 24))(
               *(_QWORD *)(v17 + 64),
               StringLiteral_12352/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v17 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_2877/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v23 = this->fields.data;
  if ( !v23 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v18 + 24))(
          *(_QWORD *)(v18 + 64),
          StringLiteral_12353/*"STAR_LOWER"*/,
          (unsigned int)v23->fields.totalCriticalStars,
          *(_QWORD *)(v18 + 40))
      & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_2878/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v21, 0);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v17 + 24))(
          *(_QWORD *)(v17 + 64),
          StringLiteral_7257/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v17 + 40))
      & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_2873/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v25 = BattleServantData__getNowHp(v21, 0);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v18 + 24))(
          *(_QWORD *)(v18 + 64),
          StringLiteral_7258/*"HP_VAL_LOWER"*/,
          v25,
          *(_QWORD *)(v18 + 40))
      & 1) != 0 )
  {
    v26 = BattleServantData__getNowHp(v21, 0);
    Instance = BattleServantData__getMaxHp(v21, 0);
    if ( !v19 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v19 + 24))(
            *(_QWORD *)(v19 + 64),
            StringLiteral_7255/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v19 + 40),
            (double)v26 * 1000.0 / (double)(int)Instance)
        & 1) != 0 )
    {
      v27 = BattleServantData__getNowHp(v21, 0);
      Instance = BattleServantData__getMaxHp(v21, 0);
      if ( v20 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v20 + 24))(
                *(_QWORD *)(v20 + 64),
                StringLiteral_7256/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v20 + 40),
                (double)v27 * 1000.0 / (double)(int)Instance)
            & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1C3E7C0(Instance, v11);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = &StringLiteral_2874/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v30 = LocalizationManager__Get((System_String_o *)*v29, 0);
  *text = v30;
  sub_1C3E508((CGThumbnailListItem_o *)text, (int32_t)v30, v31, v32);
  return 0;
}


BattleActionData_o *BattleLogicSkill__createCommandSpell(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *skillId; // x0
  __int64 v6; // x22
  struct BattleSkillInfoData_o *skillInfo; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  BattleData_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattleActionData_c *v12; // x0
  struct System_Int32_array *ptTarget; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_int__o *v16; // x24
  System_Collections_Generic_List_object__o *v17; // x25
  const MethodInfo *v18; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v20; // x24
  System_Object_array *v21; // x25
  BattleActionData_o *v22; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v26; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v28; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x20
  float CutinAdditionalTime; // s0
  BattleData_o *v32; // x20
  int32_t actorId; // w21
  BattleLogic_o *v34; // x20
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0

  if ( (byte_4C5A00D & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    sub_1C3E564(&BattleActionLogManagerInterface_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C3E564(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5A00D = 1;
  }
  skillId = this->fields.data;
  if ( !skillId )
    goto LABEL_34;
  BattleData__ResetFunctionedFunctionIds(skillId, 0);
  v6 = sub_1C3E7B0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !task )
    goto LABEL_34;
  skillInfo = task->fields.skillInfo;
  skillId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_34;
  skillId = (BattleData_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)skillId,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_34;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                              skillInfo,
                              skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v8 )
    goto LABEL_34;
  skillId = (BattleData_o *)DataMasterBase_object__object__int___GetEntity(
                              v8,
                              (int32_t)skillId,
                              (const MethodInfo_33B2F58 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v6 )
    goto LABEL_34;
  v9 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v6, 0);
  *(_DWORD *)(v6 + 32) = -1;
  if ( !v9 )
    goto LABEL_34;
  *(_DWORD *)(v6 + 48) = HIDWORD(v9->fields.m_CancellationTokenSource);
  v12 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v12 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v6 + 60) = v12->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = task->fields.ptTarget;
  *(_QWORD *)(v6 + 40) = ptTarget;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 40), (int32_t)ptTarget, v10, v11);
  *(_QWORD *)(v6 + 152) = skillInfo;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 152), (int32_t)skillInfo, v14, v15);
  skillId = (BattleData_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_34;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0);
  v16 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v16 )
    goto LABEL_34;
  System_Collections_Generic_List_int___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)v9->fields.data,
    (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (BattleData_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v9, 0);
  if ( !v17 )
    goto LABEL_34;
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v9->fields.m_CachedPtr,
    task->fields.ptTarget,
    v16,
    (System_Collections_Generic_List_DataVals__o *)v17,
    v18);
  logicfunction = this->fields.logicfunction;
  v20 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v21 = System_Collections_Generic_List_object___ToArray(
          v17,
          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (BattleData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                              skillInfo,
                              skillInfo->klass->vtable._5_get_skillId.method);
  if ( !logicfunction )
    goto LABEL_34;
  skillId = (BattleData_o *)BattleLogicFunction__procList(
                              logicfunction,
                              (BattleActionData_o *)v6,
                              v20,
                              (DataVals_array *)v21,
                              0,
                              1,
                              0,
                              0,
                              0,
                              1,
                              1,
                              0,
                              (int32_t)skillId,
                              0);
  if ( !this->fields.logic )
    goto LABEL_34;
  v22 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_34;
  klass = actionLogManager->klass;
  v26 = *(unsigned __int16 *)&actionLogManager->klass->_2.rank;
  if ( *(_WORD *)&actionLogManager->klass->_2.rank )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v26;
      p_offset += 2;
      if ( !v26 )
        goto LABEL_23;
    }
    v28 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6];
  }
  else
  {
LABEL_23:
    v28 = sub_1C8ED7C(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))v28)(
    actionLogManager,
    task,
    *(_QWORD *)(v28 + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v9, 0) > 0.0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      perf = logic->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v9, 0);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0);
        goto LABEL_29;
      }
    }
LABEL_34:
    sub_1C3E7C0(skillId, task);
  }
LABEL_29:
  if ( !v22 )
    goto LABEL_34;
  skillId = (BattleData_o *)v22->fields.funcTargetList;
  if ( !skillId )
    goto LABEL_34;
  v32 = this->fields.data;
  actorId = v22->fields.actorId;
  skillId = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                              (System_Collections_Generic_List_int__o *)skillId,
                              (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v32 )
    goto LABEL_34;
  BattleData__SetFunctionedTargetIdArray(v32, actorId, (System_Int32_array *)skillId, 0);
  v34 = this->fields.logic;
  if ( !v34 )
    goto LABEL_34;
  FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                      this->fields.logic,
                                      this->fields.data,
                                      0);
  BattleLogic__addBattleLogicTask(v34, FunctionedFunctionBuffTaskArray, 0);
  return v22;
}


BattleActionData_o *BattleLogicSkill__createSkillData(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  BattleLogic_o *logic; // x19
  BattleActionData_o *v5; // x0
  __int64 v6; // x1
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0;
  logic = this->fields.logic;
  v5 = BattleLogicSkill__createSkillData_47122796(this, task, 0, 0, &baseActionData, v3);
  if ( !logic )
    sub_1C3E7C0(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0);
}


BattleActionData_o *BattleLogicSkill__createSkillData_47122796(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  BattleLogicTask_o *v9; // x19
  BattleLogicSkill_o *v10; // x20
  BattleActionData_o *v11; // x22
  BattleActionData_o *v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattleBoostItemInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  SkillEntity_o *Entity; // x22
  Il2CppObject *MasterData_object; // x26
  BattleActionData_c *v19; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 naturalAligment; // x10
  SkillLvEntity_o *v22; // x24
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicSkill_o *v24; // x26
  char v25; // w26
  struct System_Int32_array *v26; // x8
  int v27; // w8
  BattleData_o *data; // x28
  BattleServantData_o *EnemyServantData; // x0
  __int64 v30; // x28
  __int64 v31; // x29
  struct System_Int32_array *v32; // x8
  const MethodInfo *v33; // x1
  struct System_Int32_array *ptTarget; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  BattleServantData_o *ServantData; // x0
  BattleActionData_o *v38; // x23
  BattleActionData_o *v39; // x29
  ServantLimitAddEntity_o *svtlimitaddent; // x28
  int32_t id; // w29
  System_String_o *Name; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  BattleLogicSkill_o *v49; // x26
  BattleLogicSkill_o *v50; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  CGThumbnailListItem_o *p_motionMessage; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Int32_array *effectList; // x1
  int logic; // w8
  BattleLogicSkill_o *v58; // x26
  int v59; // w9
  __int64 v60; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  const MethodInfo *v64; // x6
  bool v65; // w23
  struct System_Int32_array *v66; // x8
  int32_t v67; // w5
  struct BattleData_o *v68; // x8
  bool v69; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  BattleLogicFunction_SkillSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  SkillEntity_o *v73; // x24
  BattleLogicFunction_o *v74; // x29
  System_Int32_array *v75; // x27
  DataVals_array *v76; // x28
  int32_t v77; // w0
  UnityEngine_Object_o *logictarget; // x28
  int32_t v79; // w27
  struct BattleLogic_o *v80; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct BattleData_o *v84; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v87; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct BattleData_o *v92; // x1
  int32_t v93; // w1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  struct BattleData_o **p_logicfunction; // x27
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct BattleData_o *v99; // x1
  int32_t v100; // w1
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  int32_t type; // w23
  struct System_Int32_array *v104; // x8
  int v105; // w8
  struct System_Int32_array *v106; // x8
  _BOOL4 isShowBattlePointEffect; // w22
  BattleLogicSkill_o *v108; // x25
  BattleData_o *v109; // x27
  int32_t v110; // w28
  struct BattleLogic_o *v111; // x27
  BattleLogicTask_array *v112; // x0
  BattleData_o *v113; // x25
  const MethodInfo *v114; // x4
  struct System_Int32_array *v115; // x8
  int32_t v116; // w27
  BattleLogic_o *v117; // x25
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v119; // x23
  BattleData_o *v120; // x23
  BattleLogicTask_o *v121; // x23
  const MethodInfo *v122; // x1
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  struct BattleLogic_o *v125; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattleData_o *v128; // x8
  struct BattlePerformance_o *v129; // x8
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  const MethodInfo *v132; // x3
  BattleLogicTask_o *v133; // x23
  const MethodInfo *v134; // x1
  struct System_Int32_array *v135; // x8
  int32_t v136; // w2
  const MethodInfo *v137; // x2
  struct BattleLogic_o *v138; // x21
  struct BattleLogic_o *v139; // x8
  struct BattlePerformance_o *v140; // x9
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-88h]
  DataVals_o *copyFuncVals; // [xsp+40h] [xbp-80h]
  SkillLvEntity_o *v144; // [xsp+48h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16

  v9 = task;
  v10 = this;
  if ( (byte_4C5A00A & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_IndexValue_int___);
    sub_1C3E564(&BattleActionData_TypeInfo);
    sub_1C3E564(&BattleActionLogManagerInterface_TypeInfo);
    sub_1C3E564(&BattleBoostItemInfoData_TypeInfo);
    sub_1C3E564(&BattleLogicTask_TypeInfo);
    sub_1C3E564(&CheckUpdateShiftTask_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C3E564(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
    this = (BattleLogicSkill_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A00A = 1;
  }
  dataValsArray = 0;
  functionIdArray = 0;
  if ( !v9 )
    goto LABEL_221;
  if ( v9->fields.IsResetWasAttackTargetId )
  {
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_221;
    BattleData__ResetWasAttackTargetId((BattleData_o *)this, 0);
  }
  if ( v9->fields.IsResetFunctionedFunctionIds )
  {
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_221;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)this, 0);
  }
  copyFuncVals = baseVals;
  v11 = (BattleActionData_o *)sub_1C3E7B0(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_221;
  v12 = BattleActionData__AddDisplayTriggerIntervalBuff(v11, v9, 0);
  *baseActionData = v12;
  sub_1C3E508((CGThumbnailListItem_o *)baseActionData, (int32_t)v12, v13, v14);
  if ( !v12 )
    goto LABEL_221;
  v12->fields.taskActorType = v9->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)v9->fields.skillInfo;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_221;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_221;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                 skillInfo,
                                 skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v16 )
    goto LABEL_221;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v16,
                              (int32_t)this,
                              (const MethodInfo_33B2F58 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_221;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                 skillInfo,
                                 skillInfo->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_221;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity(
                                 (SkillLvMaster_o *)MasterData_object,
                                 (int32_t)this,
                                 skillInfo->fields.skilllv,
                                 0);
  v144 = (SkillLvEntity_o *)this;
  v12->fields.isCounter = v9->fields.isCounter;
  v19 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v19 = BattleActionData_TypeInfo;
  }
  static_fields = v19->static_fields;
  v12->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleActionData_TypeInfo->static_fields;
    }
    v12->fields.type = static_fields->TYPE_BOOSTSKILL;
    v12->fields.imageId = skillInfo->fields.itemImageId;
    naturalAligment = BattleBoostItemInfoData_TypeInfo->_2.naturalAligment;
    if ( skillInfo->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[naturalAligment - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      this = (BattleLogicSkill_o *)BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        v12->fields.noOperation = 1;
    }
  }
  v22 = v144;
  skillLvMst = (SkillLvMaster_o *)MasterData_object;
  if ( !v9->fields.checkAlive )
    goto LABEL_225;
  actorIdlist = v9->fields.actorIdlist;
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_222;
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_221;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_221;
  }
  this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( !this
    || (this = (BattleLogicSkill_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0),
        v24 = 0,
        ((unsigned __int8)this & 1) != 0) )
  {
LABEL_225:
    if ( v9->fields.isForcedSpeedOne )
    {
      v25 = 1;
    }
    else
    {
      if ( !Entity )
        goto LABEL_221;
      this = (BattleLogicSkill_o *)SkillEntity__isForcedSkillSpeedOne(Entity, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_41;
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_221;
      this = (BattleLogicSkill_o *)BattleData__checkEnablePlaySpeedOneFromSkillIdList(
                                     (BattleData_o *)this,
                                     Entity->fields.id,
                                     0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicSkill_o *)SkillEntity__isForcedSkillSpeedOne(Entity, 0);
        v25 = (char)this;
      }
      else
      {
LABEL_41:
        v25 = 0;
      }
    }
    v26 = v9->fields.actorIdlist;
    if ( v26 )
    {
      if ( !LODWORD(v26->max_length) )
        goto LABEL_222;
      v27 = v26->m_Items[0];
    }
    else
    {
      v27 = -1;
    }
    v12->fields.actorId = v27;
    if ( !v144 )
      goto LABEL_221;
    data = v10->fields.data;
    this = (BattleLogicSkill_o *)SkillLvEntity__GetActNpcServantId(v144, 0);
    if ( !data )
      goto LABEL_221;
    EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)this, 0);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v31 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v147.fields.currentCryptoKey = v31;
      *(_QWORD *)&v147.fields.fakeValue = v30;
      v12->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v147, 0);
    }
    v32 = v9->fields.actorIdlist;
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( v32 )
    {
      if ( !LODWORD(v32->max_length) )
        goto LABEL_222;
      task = (BattleLogicTask_o *)(unsigned int)v32->m_Items[0];
      if ( !this )
        goto LABEL_221;
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
      if ( !this )
        goto LABEL_221;
    }
    this = (BattleLogicSkill_o *)BattleData__getServantId((BattleData_o *)this, (int32_t)task, 0);
    if ( !Entity )
      goto LABEL_221;
    v12->fields.motionId = SkillEntity__GetMotionId(Entity, (int32_t)this, 0);
    v12->fields.targetId = BattleLogicTask__getTarget(v9, v33);
    ptTarget = v9->fields.ptTarget;
    v12->fields.pttargetIds = ptTarget;
    sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.pttargetIds, (int32_t)ptTarget, v35, v36);
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_221;
    ServantData = BattleData__getServantData((BattleData_o *)this, v12->fields.actorId, 0);
    if ( ServantData )
      v38 = v12;
    else
      v38 = 0;
    v39 = v12;
    if ( !ServantData
      || (svtlimitaddent = ServantData->fields.svtlimitaddent, v39 = v12, !svtlimitaddent)
      || (id = Entity->fields.id,
          Name = SkillEntity__getName(Entity, 0),
          this = (BattleLogicSkill_o *)ServantLimitAddEntity__GetOverwriteSkillName(svtlimitaddent, id, Name, 0),
          task = (BattleLogicTask_o *)this,
          v39 = v38,
          !this) )
    {
      this = (BattleLogicSkill_o *)SkillEntity__getName(Entity, 0);
      task = (BattleLogicTask_o *)this;
    }
    if ( !v39 )
      goto LABEL_221;
    v39->fields.skillMessage = (struct System_String_o *)task;
    sub_1C3E508((CGThumbnailListItem_o *)&v39->fields.skillMessage, (int32_t)task, v43, v44);
    v12->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.skillInfo, (int32_t)skillInfo, v45, v46);
    v12->fields.isForcedSpeedOne = v25 & 1;
    v12->fields.checkRevengeId = v9->fields.checkRevengeId;
    if ( v9->fields.gimmickIndexArray )
    {
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_221;
      this = (BattleLogicSkill_o *)BattleData__GetGimmickStartVoiceArray((BattleData_o *)this, 0);
      if ( !v10->fields.data )
        goto LABEL_221;
      v49 = this;
      this = (BattleLogicSkill_o *)BattleData__GetGimmickResultVoiceArray(v10->fields.data, 0);
      if ( !v10->fields.data )
        goto LABEL_221;
      v50 = this;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(v10->fields.data, 0);
      BattleActionData__SetGimmickData(
        v12,
        v9->fields.gimmickIndexArray,
        (System_String_array *)v49,
        (System_Object_array *)v50,
        GimmickAnimTypeArray,
        0);
    }
    motionMessage = v9->fields.motionMessage;
    if ( motionMessage && motionMessage->fields._stringLength >= 1 )
    {
      v12->fields.motionMessage = motionMessage;
      p_motionMessage = (CGThumbnailListItem_o *)&v12->fields.motionMessage;
    }
    else
    {
      v12->fields.motionMessage = 0;
      p_motionMessage = (CGThumbnailListItem_o *)&v12->fields.motionMessage;
      LODWORD(motionMessage) = 0;
    }
    sub_1C3E508(p_motionMessage, (int32_t)motionMessage, v47, v48);
    if ( (v9->fields.actortype | 4) == 5 )
      BattleActionData__setStateField(v12, 0);
    effectList = Entity->fields.effectList;
    v12->fields.effectlist = effectList;
    sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.effectlist, (int32_t)effectList, v54, v55);
    this = (BattleLogicSkill_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_221;
    BattleLogic__updateResultServant((BattleLogic_o *)this, 0);
    if ( skillInfo->fields.type == 21 )
    {
      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v144, 0);
      if ( !this )
        goto LABEL_221;
      logic = (int)this->fields.logic;
      v58 = this;
      if ( logic >= 1 )
      {
        v59 = 0;
        while ( logic != v59 )
        {
          v60 = *((_QWORD *)&this->fields.logictarget + v59);
          if ( !v60 )
            goto LABEL_221;
          ++v59;
          *(_BYTE *)(v60 + 72) = 1;
          if ( logic == v59 )
            goto LABEL_87;
        }
LABEL_222:
        sub_1C3E7C8(this, task);
      }
LABEL_87:
      logicfunction = v10->fields.logicfunction;
      funcId = v144->fields.funcId;
      this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                     skillInfo,
                                     skillInfo->klass->vtable._5_get_skillId.method);
      if ( !logicfunction )
        goto LABEL_221;
      this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                     logicfunction,
                                     v12,
                                     funcId,
                                     (DataVals_array *)v58,
                                     1,
                                     1,
                                     0,
                                     0,
                                     0,
                                     1,
                                     1,
                                     0,
                                     (int32_t)this,
                                     0);
LABEL_119:
      v24 = this;
      if ( v9->fields.actortype == 5 )
      {
        if ( !this )
          goto LABEL_221;
        v77 = BasicHelper__IndexValue_int__51281584(
                (System_Collections_Generic_List_T__o *)this[6].monitor,
                0,
                0,
                (const MethodInfo_30E7EB0 *)Method_BasicHelper_IndexValue_int___);
        logictarget = (UnityEngine_Object_o *)v24[1].fields.logictarget;
        v79 = v77;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleLogicSkill_o *)UnityEngine_Object__op_Equality(logictarget, 0, 0);
        if ( v79 >= 1 && ((unsigned __int8)this & 1) != 0 )
        {
          v80 = v10->fields.logic;
          if ( !v80 )
            goto LABEL_221;
          this = (BattleLogicSkill_o *)v80->fields.perf;
          if ( !this )
            goto LABEL_221;
          ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v79, 0);
          v24[1].fields.logictarget = (struct BattleLogicTarget_o *)ServantGameObject;
          sub_1C3E508((CGThumbnailListItem_o *)&v24[1].fields.logictarget, (int32_t)ServantGameObject, v82, v83);
        }
      }
      ((void (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._15_UseSkill.methodPtr)(
        skillInfo,
        skillInfo->klass->vtable._15_UseSkill.method);
      BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0);
      this = (BattleLogicSkill_o *)v10->fields.logic;
      if ( !this )
        goto LABEL_221;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0, 0, 0);
      if ( v9->fields.IsResetPrevAttackInfo )
      {
        if ( !v24 )
          goto LABEL_221;
        BYTE4(v24[2].klass) = 0;
        this = (BattleLogicSkill_o *)v10->fields.data;
        if ( !this )
          goto LABEL_221;
        BattleData__setCommandAttack((BattleData_o *)this, 0, 0, 0);
      }
      v84 = v10->fields.data;
      if ( !v84 )
        goto LABEL_221;
      actionLogManager = v84->fields.actionLogManager;
      if ( !actionLogManager )
        goto LABEL_221;
      klass = actionLogManager->klass;
      v87 = *(unsigned __int16 *)&actionLogManager->klass->_2.rank;
      if ( *(_WORD *)&actionLogManager->klass->_2.rank )
      {
        p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
        {
          --v87;
          p_offset += 2;
          if ( !v87 )
            goto LABEL_139;
        }
        v89 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
      }
      else
      {
LABEL_139:
        v89 = sub_1C8ED7C(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5);
      }
      this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))v89)(
                                     actionLogManager,
                                     v9,
                                     *(_QWORD *)(v89 + 8));
      if ( !v24 )
        goto LABEL_221;
      if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v24, 0) )
      {
        v92 = (struct BattleData_o *)v24[2].fields.logictarget;
        v24[10].fields.data = v92;
        sub_1C3E508((CGThumbnailListItem_o *)&v24[10].fields, (int32_t)v92, v90, v91);
        v93 = StringLiteral_1/*""*/;
        v24[2].fields.logictarget = (struct BattleLogicTarget_o *)StringLiteral_1/*""*/;
        sub_1C3E508((CGThumbnailListItem_o *)&v24[2].fields.logictarget, v93, v94, v95);
        p_logicfunction = (struct BattleData_o **)&v24[2].fields.logicfunction;
        if ( !System_String__IsNullOrEmpty((System_String_o *)v24[2].fields.logicfunction, 0) )
        {
          v99 = *p_logicfunction;
          v24[10].fields.data = *p_logicfunction;
          sub_1C3E508((CGThumbnailListItem_o *)&v24[10].fields, (int32_t)v99, v97, v98);
          v100 = StringLiteral_1/*""*/;
          *p_logicfunction = (struct BattleData_o *)StringLiteral_1/*""*/;
          sub_1C3E508((CGThumbnailListItem_o *)&v24[2].fields.logicfunction, v100, v101, v102);
        }
      }
      type = skillInfo->fields.type;
      v104 = v9->fields.actorIdlist;
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( v104 )
      {
        if ( !LODWORD(v104->max_length) )
          goto LABEL_222;
        task = (BattleLogicTask_o *)(unsigned int)v104->m_Items[0];
        if ( !this )
          goto LABEL_221;
      }
      else
      {
        task = (BattleLogicTask_o *)0xFFFFFFFFLL;
        if ( !this )
          goto LABEL_221;
      }
      this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
      if ( type == 1 || this )
      {
        this = (BattleLogicSkill_o *)SkillLvEntity__IsNoTargetSkipSkill(v22, 0);
        v105 = (unsigned __int8)this & 1;
      }
      else
      {
        v105 = 1;
      }
      if ( (v105 & (LOBYTE(v24[5].monitor) ^ 1)) == 0 && (!BYTE1(v24[6].fields.data) || BYTE2(v24[6].fields.data)) )
      {
        if ( v9->fields.isCanCounterTask )
        {
          v106 = v9->fields.actorIdlist;
          this = (BattleLogicSkill_o *)v10->fields.data;
          if ( v106 )
          {
            if ( !LODWORD(v106->max_length) )
              goto LABEL_222;
            task = (BattleLogicTask_o *)(unsigned int)v106->m_Items[0];
            if ( !this )
              goto LABEL_221;
          }
          else
          {
            task = (BattleLogicTask_o *)0xFFFFFFFFLL;
            if ( !this )
              goto LABEL_221;
          }
          this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
          if ( this )
          {
            v108 = this;
            ((void (__fastcall *)(BattleLogicSkill_o *, struct BattleData_o *, Il2CppClass *))v24->klass[1]._1.element_class)(
              v24,
              v10->fields.data,
              v24->klass[1]._1.castClass);
            this = (BattleLogicSkill_o *)v24[6].monitor;
            if ( !this )
              goto LABEL_221;
            v109 = v10->fields.data;
            v110 = (int32_t)v108->fields.logic;
            this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v109 )
              goto LABEL_221;
            BattleData__SetWasAttackTargetIdList(v109, v110, (System_Int32_array *)this, 0);
            v111 = v10->fields.logic;
            if ( !v111 )
              goto LABEL_221;
            this = (BattleLogicSkill_o *)v111->fields.logicnomal;
            if ( !this )
              goto LABEL_221;
            v112 = BattleLogicNomal__taskCounterFunc(
                     (BattleLogicNomal_o *)this,
                     v10->fields.data,
                     BYTE3(v108[10].fields.logic) == 0,
                     1,
                     0,
                     0);
            BattleLogic__addBattleLogicTask(v111, v112, 0);
          }
        }
        v113 = v10->fields.data;
        if ( v9->fields.isFunctionedFunction )
        {
          if ( !v113 )
            goto LABEL_221;
          BattleData__ResetFunctionedFunctionIds(v10->fields.data, 0);
          goto LABEL_184;
        }
        v115 = v9->fields.actorIdlist;
        if ( v115 )
        {
          if ( !LODWORD(v115->max_length) )
            goto LABEL_222;
          v116 = v115->m_Items[0];
        }
        else
        {
          v116 = -1;
        }
        this = (BattleLogicSkill_o *)v24[6].monitor;
        if ( this )
        {
          this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                         (System_Collections_Generic_List_int__o *)this,
                                         (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( v113 )
          {
            BattleData__SetFunctionedTargetIdArray(v113, v116, (System_Int32_array *)this, 0);
            v117 = v10->fields.logic;
            if ( v117 )
            {
              FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                                  v10->fields.logic,
                                                  v10->fields.data,
                                                  0);
              BattleLogic__addBattleLogicTask(v117, FunctionedFunctionBuffTaskArray, 0);
LABEL_184:
              v119 = BattleLogicSkill__MakeAddInvokeSkillTask(v10, skillLvMst, v22, v9, v114);
              this = (BattleLogicSkill_o *)SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v22, 0);
              if ( !v10->fields.logic )
                goto LABEL_221;
              if ( ((unsigned __int8)this & 1) != 0 )
                BattleLogic__AddTaskTargetTaskAfter(v10->fields.logic, v9, v119, 0);
              else
                BattleLogic__AddBattleLogicTask(v10->fields.logic, v119, 0);
              v120 = v10->fields.data;
              this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                             skillInfo,
                                             skillInfo->klass->vtable._5_get_skillId.method);
              if ( !v120 )
                goto LABEL_221;
              BattleData__AddUseSkillId(v120, (int32_t)this, 0);
              if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v24, 0) )
              {
                v121 = (BattleLogicTask_o *)sub_1C3E7B0(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(v121, v122);
                if ( !v121 )
                  goto LABEL_221;
                v121->fields.actiontype = 24;
                this = (BattleLogicSkill_o *)v10->fields.logic;
                if ( !this )
                  goto LABEL_221;
                BattleLogic__AddBattleLogicTask((BattleLogic_o *)this, v121, 0);
              }
              if ( SkillEntity__GetCutinAdditionalTime(Entity, 0) > 0.0 )
              {
                this = (BattleLogicSkill_o *)SkillEntity__getSkillCutInId(Entity, 0);
                if ( !(_DWORD)this )
                {
                  v125 = v10->fields.logic;
                  if ( !v125 )
                    goto LABEL_221;
                  perf = v125->fields.perf;
                  CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0);
                  if ( !perf )
                    goto LABEL_221;
                  BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0);
                  if ( v24[2].fields.logictarget )
                  {
                    v128 = v10->fields.data;
                    if ( !v128 )
                      goto LABEL_221;
                    v129 = v128->fields.perf;
                    if ( !v129 )
                      goto LABEL_221;
                    this = (BattleLogicSkill_o *)v129->fields.infoComp;
                    if ( !this )
                      goto LABEL_221;
                    BattleInformationComponent__showCommonMessage(
                      (BattleInformationComponent_o *)this,
                      (BattleActionData_o *)v24,
                      0);
                    v24[2].fields.logictarget = 0;
                    sub_1C3E508((CGThumbnailListItem_o *)&v24[2].fields.logictarget, 0, v130, v131);
                    BYTE4(v24[6].fields.logic) = 1;
                  }
                }
              }
              if ( v9->fields.IsNotShowSkillMessage )
              {
                v24[2].fields.logictarget = 0;
                sub_1C3E508((CGThumbnailListItem_o *)&v24[2].fields.logictarget, 0, v123, v124);
                BYTE4(v24[6].fields.logic) = 1;
              }
              this = (BattleLogicSkill_o *)SkillEntity__IsCheckUpdateShiftServant(Entity, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v133 = (BattleLogicTask_o *)sub_1C3E7B0(CheckUpdateShiftTask_TypeInfo);
                BattleLogicTask___ctor(v133, v134);
                v133->fields.actiontype = 68;
                this = (BattleLogicSkill_o *)v10->fields.logic;
                if ( !this )
                  goto LABEL_221;
                this = (BattleLogicSkill_o *)BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)this, v9, v133, 0);
              }
              v135 = v9->fields.actorIdlist;
              if ( v135 )
              {
                if ( !LODWORD(v135->max_length) )
                  goto LABEL_222;
                v136 = v135->m_Items[0];
              }
              else
              {
                v136 = -1;
              }
              BattleLogicSkill__ExecuteShortenSkillBuff(v10, (BattleSkillInfoData_o *)skillInfo, v136, v132);
              if ( !v9->fields.isForcedSpeedOne )
              {
                this = (BattleLogicSkill_o *)SkillEntity__IsBehaveAsAssistSkill(Entity, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v138 = v10->fields.logic;
                  if ( !v138 )
                    goto LABEL_221;
                  this = (BattleLogicSkill_o *)v138->fields.perf;
                  if ( !this )
                    goto LABEL_221;
                  this = (BattleLogicSkill_o *)BattlePerformance__isEnableSkipStartQuest((BattlePerformance_o *)this, 0);
                  v138->fields.isEnableSkipAssistSkill = (unsigned __int8)this & 1;
                  v139 = v10->fields.logic;
                  if ( !v139 )
                    goto LABEL_221;
                  v140 = v139->fields.perf;
                  if ( !v140 )
                    goto LABEL_221;
                  v140->fields.isEnableSkipSkillCutIn = v139->fields.isEnableSkipAssistSkill;
                }
              }
              BattleLogicTask__SetInterruptLoadChangeModelAction(v9, (BattleActionData_o *)v24, v137);
              return (BattleActionData_o *)v24;
            }
          }
        }
LABEL_221:
        sub_1C3E7C0(this, task);
      }
      return 0;
    }
    changeTDCommandType = skillInfo->fields.changeTDCommandType;
    if ( (changeTDCommandType & 0x80000000) == 0 )
      v12->fields.commandType = changeTDCommandType;
    functionIdArray = v144->fields.funcId;
    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v144, 0);
    dataValsArray = (DataVals_array *)this;
    v65 = copyFuncVals == 0 || !fromSkillCopyFunc;
    if ( copyFuncVals != 0 && fromSkillCopyFunc )
    {
      v66 = v9->fields.actorIdlist;
      if ( v66 )
      {
        if ( !LODWORD(v66->max_length) )
          goto LABEL_222;
        v67 = v66->m_Items[0];
      }
      else
      {
        v67 = -1;
      }
      if ( !BattleLogicSkill__SetSkillCopyFunction(v10, v144, copyFuncVals, &functionIdArray, &dataValsArray, v67, v64) )
        return 0;
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_221;
      this = (BattleLogicSkill_o *)BattleData__isEnemyID((BattleData_o *)this, v12->fields.actorId, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v68 = v10->fields.data;
        if ( !v68 )
          goto LABEL_221;
        v69 = v68->fields.currentTurn == 0;
      }
      else
      {
        v69 = 0;
      }
      v12->fields.isReversalShortBuffTurn = v69;
    }
    if ( skillInfo->fields.type == 1 )
    {
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C3E7B0(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0);
      if ( !argument )
        goto LABEL_221;
      argument->fields.grantSkillType = skillInfo->fields.type;
      if ( !v9->fields.isSideEffectTriggerSkill )
      {
LABEL_113:
        p_isShowBattlePointEffect = &v9->fields.isShowBattlePointEffect;
        if ( !v9->fields.isShowBattlePointEffect )
        {
          v73 = Entity;
          goto LABEL_117;
        }
        v73 = Entity;
LABEL_115:
        argument->fields.isShowBattlePointEffect = *p_isShowBattlePointEffect;
LABEL_117:
        argument->fields._IsSetSubstituteBuffAction_k__BackingField = 1;
        v74 = v10->fields.logicfunction;
        v76 = dataValsArray;
        v75 = functionIdArray;
        this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                       skillInfo,
                                       skillInfo->klass->vtable._5_get_skillId.method);
        if ( !v74 )
          goto LABEL_221;
        this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                       v74,
                                       v12,
                                       v75,
                                       v76,
                                       0,
                                       1,
                                       0,
                                       0,
                                       0,
                                       v65,
                                       1,
                                       argument,
                                       (int32_t)this,
                                       0);
        Entity = v73;
        v22 = v144;
        goto LABEL_119;
      }
    }
    else
    {
      if ( !v9->fields.isSideEffectTriggerSkill )
      {
        v73 = Entity;
        p_isShowBattlePointEffect = &v9->fields.isShowBattlePointEffect;
        isShowBattlePointEffect = v9->fields.isShowBattlePointEffect;
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C3E7B0(BattleLogicFunction_FunctionArgument_TypeInfo);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0);
        if ( !isShowBattlePointEffect )
        {
          if ( !argument )
            goto LABEL_221;
          goto LABEL_117;
        }
        if ( !argument )
          goto LABEL_221;
        goto LABEL_115;
      }
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C3E7B0(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0);
    }
    overwriteFuncSideEffectArg = (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)v9->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)sub_1C3E7B0(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(overwriteFuncSideEffectArg, 0);
    }
    if ( !argument )
      goto LABEL_221;
    BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
      argument,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
      0);
    goto LABEL_113;
  }
  return (BattleActionData_o *)v24;
}


BattleLogicTask_array *BattleLogicSkill__getGimmickTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v4; // x20
  System_Int32_array *v5; // x21
  const MethodInfo *v6; // x2
  int32_t HitGimmickSkillId; // w0
  unsigned int v8; // w22
  __int64 v9; // x21
  __int64 v10; // x20
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleData_o *v14; // x8
  System_Int32_array *v15; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v17; // x6
  const MethodInfo *v18; // x3
  BattleData_o *v19; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v23; // x0

  if ( (byte_4C5A012 & 1) == 0 )
  {
    sub_1C3E564(&BattleLogicTask___TypeInfo);
    sub_1C3E564(&BattleLogicTask_TypeInfo);
    sub_1C3E564(&BattleSkillInfoData_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    byte_4C5A012 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__GetGimmickSkillIdArray(data, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  v4 = data;
  data = (BattleData_o *)BattleData__GetGimmickSkillRateArray(this->fields.data, 0);
  if ( !this->fields.data )
    goto LABEL_26;
  v5 = (System_Int32_array *)data;
  data = (BattleData_o *)BattleData__GetReelIconArray(this->fields.data, 0);
  if ( !v4 )
    goto LABEL_26;
  if ( !v4->fields.m_CancellationTokenSource )
    return 0;
  if ( !v5 )
    goto LABEL_26;
  if ( !v5->max_length )
    return 0;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.m_CancellationTokenSource )
    return 0;
  HitGimmickSkillId = BattleLogicSkill__GetHitGimmickSkillId((BattleLogicSkill_o *)data, v5, v6);
  if ( HitGimmickSkillId < 0 )
    return 0;
  v8 = HitGimmickSkillId;
  v9 = sub_1C3E7B0(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v9, 0);
  if ( !v9 )
    goto LABEL_26;
  *(_DWORD *)(v9 + 24) = -1;
  *(_QWORD *)(v9 + 16) = 20;
  if ( v8 >= LODWORD(v4->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 376LL))(
    v9,
    *((unsigned int *)&v4->fields.rootfsm + v8),
    *(_QWORD *)(*(_QWORD *)v9 + 384LL));
  *(_DWORD *)(v9 + 36) = 1;
  v10 = sub_1C3E7B0(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v10, v11);
  data = (BattleData_o *)sub_1C3E60C(int___TypeInfo, 1);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v8;
  if ( !v10 )
    goto LABEL_26;
  *(_QWORD *)(v10 + 160) = data;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 160), (int32_t)data, v12, v13);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0), (v14 = this->fields.data) == 0)
    || (v15 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v14, 0, 0),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v10,
          (BattleSkillInfoData_o *)v9,
          v15,
          FieldPlayerServantIDList,
          0,
          0,
          v17),
        BattleLogicTask__setActor((BattleLogicTask_o *)v10, 5, -1, v18),
        (data = (BattleData_o *)sub_1C3E60C(BattleLogicTask___TypeInfo, 1)) == 0) )
  {
LABEL_26:
    sub_1C3E7C0(data, method);
  }
  v19 = data;
  data = (BattleData_o *)sub_1C3E6A0(v10, data->klass->_1.element_class);
  if ( !data )
  {
    v23 = sub_1C3E7E4(0);
    sub_1C3E68C(v23, 0);
  }
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1C3E7C8(data, method);
  v19->fields.rootfsm = (struct PlayMakerFSM_o *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->fields.rootfsm, v10, v20, v21);
  return (BattleLogicTask_array *)v19;
}


BattleLogicTask_array *BattleLogicSkill__getQuestBehaviorSkillTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  QuestBehaviorMaster_o *v6; // x20
  int32_t v7; // w21
  int32_t Phase; // w0
  QuestBehaviorEntity_array *BattleSkill; // x0
  QuestBehaviorEntity_array *v10; // x20
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x25
  QuestBehaviorEntity_o **m_Items; // x26
  __int64 v14; // x22
  unsigned int v15; // w0
  BattleLogicTask_o *v16; // x23
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4C5A011 & 1) == 0 )
  {
    sub_1C3E564(&BattleLogicTask_TypeInfo);
    sub_1C3E564(&BattleSkillInfoData_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestBehaviorMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5A011 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !MasterData_object )
    return 0;
  v6 = (QuestBehaviorMaster_o *)MasterData_object;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0);
  if ( !this->fields.data )
    goto LABEL_28;
  v7 = (int)Instance;
  Phase = BattleData__getPhase(this->fields.data, 0);
  BattleSkill = QuestBehaviorMaster__getBattleSkill(v6, v7, Phase, 0);
  if ( !BattleSkill )
    return 0;
  v10 = BattleSkill;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( SLODWORD(v10->max_length) >= 1 )
  {
    v12 = 0;
    m_Items = v10->m_Items;
    while ( 1 )
    {
      v14 = sub_1C3E7B0(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v14, 0);
      if ( !v14 )
        break;
      *(_DWORD *)(v14 + 24) = -1;
      *(_QWORD *)(v14 + 16) = 20;
      if ( (unsigned int)v12 >= LODWORD(v10->max_length) )
        goto LABEL_29;
      Instance = (DataManager_o *)m_Items[v12];
      if ( !Instance )
        break;
      v15 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0);
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 376LL))(
                                    v14,
                                    v15,
                                    *(_QWORD *)(*(_QWORD *)v14 + 384LL));
      if ( (unsigned int)v12 >= LODWORD(v10->max_length) )
LABEL_29:
        sub_1C3E7C8(Instance, v4);
      Instance = (DataManager_o *)m_Items[v12];
      if ( !Instance )
        break;
      *(_DWORD *)(v14 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0);
      v16 = (BattleLogicTask_o *)sub_1C3E7B0(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v16, v17);
      if ( !v16 )
        break;
      BattleLogicTask__setActor(v16, 5, -1, v18);
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0);
      if ( !this->fields.data )
        break;
      v19 = (System_Int32_array *)Instance;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0, 0);
      BattleLogicTask__setActionSkill(v16, (BattleSkillInfoData_o *)v14, v19, FieldPlayerServantIDList, 0, 0, v21);
      BattleLogicTask__setActor(v16, 5, -1, v22);
      if ( !v11 )
        break;
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v16,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v16;
        sub_1C3E508((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v16, v23, v24);
      }
      if ( (int)++v12 >= SLODWORD(v10->max_length) )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1C3E7C0(Instance, v4);
  }
  if ( !v11 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSkill__taskCommandSpell(
        BattleLogicSkill_o *this,
        int32_t skillId,
        int32_t skillLv,
        System_Int32_array *ptTargetList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x21
  BattleLogicTask_o *v9; // x23
  const MethodInfo *v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_4C5A008 & 1) == 0 )
  {
    sub_1C3E564(&BattleLogicTask_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C5A008 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = (BattleLogicTask_o *)sub_1C3E7B0(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, v10);
  if ( !v9
    || (BattleLogicTask__setCommandSpell(v9, skillId, 0, ptTargetList, v13), !v8)
    || (items = v8->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
    sub_1C3E7C0(v11, v12);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v9;
    sub_1C3E508((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v9, v14, v15);
  }
  SkillTargetedBeforeFunctionSkill = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                                                                                      this,
                                                                                      v9,
                                                                                      ptTargetList,
                                                                                      0,
                                                                                      v20);
  System_Collections_Generic_List_object___InsertRange(
    v8,
    0,
    SkillTargetedBeforeFunctionSkill,
    (const MethodInfo_37B6444 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSkill__taskSkill(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_Int32_array *ptTargetList,
        System_Int32_array *enemyTargetList,
        bool checkAlive,
        bool checkRevengeId,
        bool isCanCounterSkill,
        bool isManualBoot,
        bool isRecursiveCalled,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v17; // x19
  BattleLogicTask_o *v18; // x23
  const MethodInfo *v19; // x1
  __int64 data; // x0
  __int64 svtUniqueId; // x1
  const MethodInfo *v22; // x6
  BattleServantData_o *v23; // x25
  System_Int32_array *v24; // x2
  BattleLogicTarget_o *logictarget; // x21
  int32_t v26; // w29
  const MethodInfo *v27; // x4
  int32_t GlobalTargetId; // w0
  BattleData_o *v29; // x21
  int32_t v30; // w29
  int32_t TargetAiAct; // w21
  Il2CppClass *v32; // x0
  BattleLogicTarget_o *v33; // x29
  int32_t v34; // w21
  const MethodInfo *v35; // x3
  bool isPlayerID; // w0
  int32_t v37; // w2
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_object__o *v45; // x24
  __int64 v46; // x8
  __int64 v47; // x25
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  const MethodInfo *v51; // x4
  __int64 v52; // x1
  __int64 v53; // x25
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  BattleSkillInfoData_o *v62; // x26
  __int64 v63; // x0
  __int64 v64; // x1
  System_Collections_Generic_IEnumerable_T__o *v65; // x0
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  BattleLogicSkill___c_c *v70; // x0
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v72; // x21
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Collections_Generic_IEnumerable_T__o *v76; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]
  const MethodInfo *v79; // [xsp+10h] [xbp-80h]

  if ( (byte_4C5A007 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_1C3E564(&BattleLogicTask_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_BattleLogicTask___);
    sub_1C3E564(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C3E564(&Method_BattleLogicSkill___c__taskSkill_b__5_0__);
    sub_1C3E564(&BattleLogicSkill___c_TypeInfo);
    byte_4C5A007 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v18 = (BattleLogicTask_o *)sub_1C3E7B0(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v18, v19);
  if ( !skillInfo )
    goto LABEL_94;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_94;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0);
  v23 = (BattleServantData_o *)data;
  if ( data )
  {
    data = BattleSkillInfoData__isServantSkill(skillInfo, 0);
    if ( (data & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_94;
      v18->fields.isCanCounterTask = isCanCounterSkill;
      v18->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  if ( enemyTargetList )
  {
    v24 = enemyTargetList;
    if ( !v18 )
      goto LABEL_94;
  }
  else
  {
    svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
    if ( (_DWORD)svtUniqueId == -1 )
      goto LABEL_15;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    data = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0);
    if ( (data & 1) != 0 )
    {
LABEL_15:
      if ( !this->fields.data )
        goto LABEL_94;
      if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0) )
      {
        logictarget = this->fields.logictarget;
        v26 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0);
        if ( !logictarget )
          goto LABEL_94;
        GlobalTargetId = BattleLogicTarget__getGlobalTargetId(
                           logictarget,
                           v26,
                           v26 == -1,
                           (System_Int32_array *)data,
                           v27);
      }
      else
      {
        v29 = this->fields.data;
        v30 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0);
        if ( !v29 )
          goto LABEL_94;
        GlobalTargetId = BattleData__getTargetLock(v29, v30, v30 == -1, (System_Int32_array *)data, 0);
      }
      TargetAiAct = GlobalTargetId;
      v32 = int___TypeInfo;
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_94;
      v33 = this->fields.logictarget;
      v34 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0, 0);
      if ( !v33 )
        goto LABEL_94;
      TargetAiAct = BattleLogicTarget__getTargetAiAct(
                      v33,
                      1,
                      v34,
                      0,
                      (System_Int32_array *)data,
                      1,
                      0,
                      0,
                      0,
                      (bool)&dword_0 + 1,
                      v79);
      v32 = int___TypeInfo;
    }
    data = sub_1C3E60C(v32, 1);
    if ( !data )
      goto LABEL_94;
    v24 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
      sub_1C3E7C8(data, svtUniqueId);
    *(_DWORD *)(data + 32) = TargetAiAct;
    enemyTargetList = 0;
    if ( !v18 )
LABEL_94:
      sub_1C3E7C0(data, svtUniqueId);
  }
  BattleLogicTask__setActionSkill(v18, skillInfo, v24, ptTargetList, checkAlive, checkRevengeId, v22);
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v38 = 1;
    v37 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0);
    v37 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v38 = 2;
    else
      v38 = 3;
  }
  BattleLogicTask__setActor(v18, v38, v37, v35);
  if ( !v17 )
    goto LABEL_94;
  items = v17->fields._items;
  v42 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_94;
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    if ( !v23 )
      goto LABEL_47;
  }
  else
  {
    v44 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v18;
    sub_1C3E508((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v18, v39, v40);
    if ( !v23 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v45 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v45,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v45 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v23, this->fields.data, 0);
  if ( !data )
    goto LABEL_94;
  v46 = *(_QWORD *)data;
  v47 = data;
  v48 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
  if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v49 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_46;
    }
    v50 = v46 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_46:
    v50 = sub_1C8ED7C(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
  if ( !v53 )
    sub_1C3E7C0(0, v52);
  while ( 1 )
  {
    v54 = *(_QWORD *)v53;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v56 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_55;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_55:
      v57 = sub_1C8ED7C(v53, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8)) & 1) == 0 )
      break;
    v58 = *(_QWORD *)v53;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v60 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_62;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_62:
      v61 = sub_1C8ED7C(v53, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0);
    }
    v62 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v53, *(_QWORD *)(v61 + 8));
    v63 = sub_1C3E60C(int___TypeInfo, 1);
    if ( !v62 )
      sub_1C3E7C0(v63, v64);
    if ( !v63 )
      sub_1C3E7C0(0, v64);
    if ( !*(_DWORD *)(v63 + 24) )
      sub_1C3E7C8(v63, v64);
    *(_DWORD *)(v63 + 32) = v62->fields.svtUniqueId;
    v65 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v62,
                                                           (System_Int32_array *)v63,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           isDeadToEnableUpHate);
    if ( !v45 )
      sub_1C3E7C0(v65, v65);
    System_Collections_Generic_List_object___AddRange(
      v45,
      v65,
      (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v66 = *(_QWORD *)v53;
  v67 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
  {
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_73;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_73:
    v69 = sub_1C8ED7C(v53, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v69)(v53, *(_QWORD *)(v69 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v45 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v17,
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_81;
  }
  if ( !v45 )
    goto LABEL_48;
LABEL_79:
  data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(this, v18, ptTargetList, enemyTargetList, v51);
  if ( !v45 )
    goto LABEL_94;
  System_Collections_Generic_List_object___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v45,
         (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
  {
    v70 = BattleLogicSkill___c_TypeInfo;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v70 = BattleLogicSkill___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__int__o *)v70->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        v70 = BattleLogicSkill___c_TypeInfo;
      }
      v72 = (Il2CppObject *)v70->static_fields->__9;
      _9__5_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v72, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v74, v75);
    }
    v76 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v45,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_30E9098 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v17,
      0,
      v76,
      (const MethodInfo_37B6444 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicSkill_SkillExecArgs___ctor(BattleLogicSkill_SkillExecArgs_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicSkill_SkillExecArgs__get_AllowUpdateFieldServantResultStatus(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._AllowUpdateFieldServantResultStatus_k__BackingField;
}


bool BattleLogicSkill_SkillExecArgs__get_RemoveActorUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._RemoveActorUnfixedBuff_k__BackingField;
}


bool BattleLogicSkill_SkillExecArgs__get_RemoveAllUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._RemoveAllUnfixedBuff_k__BackingField;
}


int32_t BattleLogicSkill_SkillExecArgs__get_Timing(BattleLogicSkill_SkillExecArgs_o *this, const MethodInfo *method)
{
  return this->fields._Timing_k__BackingField;
}


void BattleLogicSkill_SkillExecArgs__set_AllowUpdateFieldServantResultStatus(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._AllowUpdateFieldServantResultStatus_k__BackingField = value;
}


void BattleLogicSkill_SkillExecArgs__set_RemoveActorUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RemoveActorUnfixedBuff_k__BackingField = value;
}


void BattleLogicSkill_SkillExecArgs__set_RemoveAllUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RemoveAllUnfixedBuff_k__BackingField = value;
}


void BattleLogicSkill_SkillExecArgs__set_Timing(
        BattleLogicSkill_SkillExecArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Timing_k__BackingField = value;
}


void BattleLogicSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5A018 & 1) == 0 )
  {
    sub_1C3E564(&BattleLogicSkill___c_TypeInfo);
    byte_4C5A018 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)BattleLogicSkill___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleLogicSkill___c___ctor(BattleLogicSkill___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicSkill___c___GetSkillTargetedBeforeFunctionSkill_b__7_0(
        BattleLogicSkill___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.targetType;
}


bool BattleLogicSkill___c___GetSkillTargetedBeforeFunctionSkill_b__7_3(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && x->fields.isEntry;
}


int32_t BattleLogicSkill___c___GetSkillTargetedBeforeFunctionSkill_b__7_5(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0 )
    sub_1C3E7C0(this, x);
  return skillInfo->fields.priority;
}


void BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0)) == 0 )
    sub_1C3E7C0(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0);
}


int32_t BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0 )
    sub_1C3E7C0(this, x);
  return skillInfo->fields.priority;
}


void BattleLogicSkill___c__DisplayClass14_0___ctor(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__0(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5A019 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4C5A019 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1C3E7C0(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))conditions->klass->vtable._3_ToString.methodPtr)(
                            conditions,
                            conditions->klass->vtable._3_ToString.method);
  if ( System_Int64__TryParse(v8, &result, 0) )
    return (int)result <= val;
  return 1;
}


bool BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__1(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleLogicSkill___c__DisplayClass14_0_o *v12; // x0
  System_String_o *v13; // x1
  const MethodInfo *v14; // x2
  long double v15; // q0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5A01A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&long_TypeInfo);
    byte_4C5A01A = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_13:
    sub_1C3E7C0(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))conditions->klass->vtable._3_ToString.methodPtr)(
                            conditions,
                            conditions->klass->vtable._3_ToString.method);
  if ( !System_Int64__TryParse(v8, &result, 0) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v9, v10) >= val;
  v15 = sub_1C3EA80(conditions);
  return BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__2(v12, v13, *(double *)&v15, v14);
}


bool BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5A01B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4C5A01B = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1C3E7C0(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))conditions->klass->vtable._3_ToString.methodPtr)(
                            conditions,
                            conditions->klass->vtable._3_ToString.method);
  if ( System_Int64__TryParse(v8, &result, 0) )
    return (double)(int)result <= val;
  return 1;
}


bool BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__3(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleLogicSkill___c__DisplayClass19_0_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5A01C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&long_TypeInfo);
    byte_4C5A01C = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_13:
    sub_1C3E7C0(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))conditions->klass->vtable._3_ToString.methodPtr)(
                            conditions,
                            conditions->klass->vtable._3_ToString.method);
  if ( !System_Int64__TryParse(v8, &result, 0) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v9, v10) >= val;
  sub_1C3EA80(conditions);
  return BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__0(v12, v13, v14);
}


void BattleLogicSkill___c__DisplayClass19_0___ctor(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__0(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.funcId == x;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__1(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEntity; // x0

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1C3E7C0(0, *(_QWORD *)&type);
  return FunctionEntity__GetAddStateBuffTypeFromFunction(funcEntity, 0) == type;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__2(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1C3E7C0(this, *(_QWORD *)&type);
  return funcEntity->fields.funcType == type;
}


void BattleLogicSkill___c__DisplayClass20_0___ctor(
        BattleLogicSkill___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicSkill___c__DisplayClass20_0___IsNotSkillCopyTargetIndividuality_b__0(
        BattleLogicSkill___c__DisplayClass20_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.individuality == x;
}


void BattleLogicSkill___c__DisplayClass7_0___ctor(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_int__o *BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__1(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        System_Collections_Generic_IEnumerable_int__o *current,
        int32_t targetType,
        const MethodInfo *method)
{
  BattleLogicSkill___c__DisplayClass7_0_o *v6; // x21
  struct BattleLogicSkill_o *_4__this; // x8
  struct BattleLogicTask_o *task; // x9
  struct System_Int32_array *actorIdlist; // x9
  BattleData_o *data; // x0
  int32_t v11; // w1
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds; // x1

  v6 = this;
  if ( (byte_4C5A01D & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1C3E564(&Method_System_Linq_Enumerable_Union_int___);
    byte_4C5A01D = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (task = v6->fields.task) == 0 )
    sub_1C3E7C0(this, current);
  actorIdlist = task->fields.actorIdlist;
  data = _4__this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C3E7C8(data, current);
    v11 = actorIdlist->m_Items[0];
  }
  else
  {
    v11 = -1;
  }
  TargetIds = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds(
                                                                     data,
                                                                     v11,
                                                                     -1,
                                                                     -1,
                                                                     targetType,
                                                                     0,
                                                                     0);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Union_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                            TargetIds,
                                                            (const MethodInfo_313E3BC *)Method_System_Linq_Enumerable_Union_int___);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0 )
    sub_1C3E7C0(this, *(_QWORD *)&uniqueId);
  return BattleData__getServantData((BattleData_o *)this, uniqueId, 0);
}


System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__4(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleLogicTask_o *task; // x8

  task = this->fields.task;
  if ( !task || !svtData )
    sub_1C3E7C0(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0);
}