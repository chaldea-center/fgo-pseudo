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
  BattleBuffData_BuffData_array *BuffList_45506116; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v15; // w24
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x23

  if ( (byte_4C46222 & 1) == 0 )
  {
    sub_1C37058(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4C46222 = 1;
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
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C372A4(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_45659904(v11, v10, 0, 0, 0, 0, 0, 1, 0);
      BuffList_45506116 = BattleBuffData__getBuffList_45506116(buffData, 143, v11, 1, 0, 0, 0, 0);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_45506116, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_45506116 )
      {
        max_length = BuffList_45506116->max_length;
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
              sub_1C372BC(data);
            v17 = &BuffList_45506116->obj.klass + (int)v15;
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
            max_length = BuffList_45506116->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1C372B4(data);
  }
}


int32_t BattleLogicSkill__GetHitGimmickSkillId(
        BattleLogicSkill_o *this,
        System_Int32_array *rateArray,
        const MethodInfo *method)
{
  WeightRate_int__o *v4; // x20
  __int64 v5; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  int32_t Next; // w1

  if ( (byte_4C4621E & 1) == 0 )
  {
    sub_1C37058(&Method_WeightRate_int___ctor__);
    sub_1C37058(&Method_WeightRate_int__getData__);
    sub_1C37058(&Method_WeightRate_int__getTotalWeight__);
    sub_1C37058(&Method_WeightRate_int__setWeight__);
    sub_1C37058(&WeightRate_int__TypeInfo);
    byte_4C4621E = 1;
  }
  if ( !rateArray )
    return -1;
  v4 = (WeightRate_int__o *)sub_1C372A4(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v4, (const MethodInfo_3B94A3C *)Method_WeightRate_int___ctor__);
  max_length = rateArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C372BC(v5);
      if ( !v4 )
        break;
      WeightRate_int___setWeight(
        v4,
        rateArray->m_Items[v7],
        v7,
        (const MethodInfo_3B93F58 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = rateArray->max_length;
      if ( (__int64)++v7 >= (int)max_length )
        goto LABEL_12;
    }
LABEL_13:
    sub_1C372B4(v5);
  }
  if ( !v4 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v4->fields.totalweight, 0);
  return WeightRate_int___getData(v4, Next, (const MethodInfo_3B943CC *)Method_WeightRate_int__getData__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x25
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x19
  long double inited; // q0
  _QWORD *v18; // x24
  __int64 v19; // x8
  __int64 v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x24
  DataVals_array *DataValArray; // x0
  BattleLogicSkill___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x22
  System_Func_T__TResult__o *_9__7_0; // x23
  Il2CppObject *v27; // x25
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x22
  System_Func_T1__T2__TResult__o *v32; // x23
  System_Func_T__TResult__o *v33; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v34; // x0
  BattleLogicSkill___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x22
  System_Func_object__bool__o *_9__7_3; // x23
  Il2CppObject *v38; // x24
  struct BattleLogicSkill___c_StaticFields *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x22
  System_Func_object__object__o *v43; // x23
  __int64 v44; // x8
  void *v45; // x21
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x21
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  BattleSkillInfoData_o *v58; // x22
  __int64 v59; // x0
  System_Collections_Generic_IEnumerable_T__o *v60; // x0
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  BattleLogicSkill___c_c *v65; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v67; // x21
  struct BattleLogicSkill___c_StaticFields *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  const MethodInfo *v72; // [xsp+8h] [xbp-68h]

  if ( (byte_4C46214 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_1C37058(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C37058(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
    sub_1C37058(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_1C37058(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C37058(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C37058(&System_Func_DataVals__Target_TYPE__TypeInfo);
    sub_1C37058(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C37058(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__);
    sub_1C37058(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__);
    sub_1C37058(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__);
    sub_1C37058(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
    sub_1C37058(&BattleLogicSkill___c_TypeInfo);
    byte_4C46214 = 1;
  }
  v9 = sub_1C372A4(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_75;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = task;
  v13 = v9 + 24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)task, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v18 = Method_System_Array_Empty_int___;
  v19 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v19 )
  {
    sub_1C877C8(Method_System_Array_Empty_int___);
    v19 = v18[7];
  }
  v20 = *(_QWORD *)(v19 + 16);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v20 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v20);
  v10 = *(__int64 **)(v18[7] + 16LL);
  if ( (*((_BYTE *)v10 + 309) & 1) == 0 )
    v10 = (__int64 *)sub_1C8776C(inited);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o **)v10[23];
  v22 = *v21;
  if ( ptTargetArray )
  {
    v10 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v21,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_312C4C8 *)Method_System_Linq_Enumerable_Union_int___);
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( enemyTargetArray )
  {
    v10 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v22,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_312C4C8 *)Method_System_Linq_Enumerable_Union_int___);
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( !*(_QWORD *)v13 )
    goto LABEL_75;
  v10 = *(__int64 **)(*(_QWORD *)v13 + 72LL);
  if ( !v10 )
    goto LABEL_75;
  if ( *((_DWORD *)v10 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v10, 0);
    v24 = BattleLogicSkill___c_TypeInfo;
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v24 = BattleLogicSkill___c_TypeInfo;
    }
    _9__7_0 = (System_Func_T__TResult__o *)v24->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = BattleLogicSkill___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v24->static_fields->__9;
      _9__7_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v27,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v29, v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v25,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_311DD3C *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v32 = (System_Func_T1__T2__TResult__o *)sub_1C372A4(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v32,
      (Il2CppObject *)v9,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0);
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v31,
                                                                 (Il2CppObject *)v22,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v32,
                                                                 (const MethodInfo_30F026C *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v33 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v33,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0);
  v34 = System_Linq_Enumerable__Select_int__object_(
          v22,
          (System_Func_TSource__TResult__o *)v33,
          (const MethodInfo_311B668 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v35 = BattleLogicSkill___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v34;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v35 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_3 = (System_Func_object__bool__o *)v35->static_fields->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = BattleLogicSkill___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__7_3 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v38,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0);
    v39 = BattleLogicSkill___c_TypeInfo->static_fields;
    v39->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v39->__9__7_3, (int32_t)_9__7_3, v40, v41);
  }
  v42 = System_Linq_Enumerable__Where_object_(
          v36,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v43 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v43,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0);
  v10 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v42,
                     (System_Func_TSource__IEnumerable_TResult___o *)v43,
                     (const MethodInfo_3121114 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v10 )
LABEL_75:
    sub_1C372B4(v10);
  v44 = *v10;
  v45 = v10;
  v46 = *(unsigned __int16 *)(*v10 + 302);
  if ( *(_WORD *)(*v10 + 302) )
  {
    v47 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v47 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_37;
    }
    v48 = v44 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_37:
    v48 = sub_1C87870(v10, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v49 = (*(__int64 (__fastcall **)(void *, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8));
  if ( !v49 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v50 = *(_QWORD *)v49;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_44;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_44:
      v53 = sub_1C87870(v49, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) == 0 )
      break;
    v54 = *(_QWORD *)v49;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v56 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_51;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_51:
      v57 = sub_1C87870(v49, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0);
    }
    v58 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v49, *(_QWORD *)(v57 + 8));
    v59 = sub_1C37100(int___TypeInfo, 1);
    if ( !v58 )
      sub_1C372B4(v59);
    if ( !v59 )
      sub_1C372B4(0);
    if ( !*(_DWORD *)(v59 + 24) )
      sub_1C372BC(v59);
    *(_DWORD *)(v59 + 32) = v58->fields.svtUniqueId;
    v60 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v58,
                                                           (System_Int32_array *)v59,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           v72);
    if ( !v16 )
      sub_1C372B4(v60);
    System_Collections_Generic_List_object___AddRange(
      v16,
      v60,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v61 = *(_QWORD *)v49;
  v62 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
  {
    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_62;
    }
    v64 = v61 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_62:
    v64 = sub_1C87870(v49, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v64)(v49, *(_QWORD *)(v64 + 8));
  v65 = BattleLogicSkill___c_TypeInfo;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v65 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_5 = (System_Func_object__int__o *)v65->static_fields->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = BattleLogicSkill___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v65->static_fields->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_1C372A4(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v67,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0);
    v68 = BattleLogicSkill___c_TypeInfo->static_fields;
    v68->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1C36FFC((CGThumbnailListItem_o *)&v68->__9__7_5, (int32_t)_9__7_5, v69, v70);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v16,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_30D7280 *)Method_BasicHelper_StableSort_BattleLogicTask___);
}


bool BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
        BattleLogicSkill_o *this,
        System_Int32_array *actorIndividualities,
        System_Int32_array *notSkillCopyTargetIndividualities,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  unsigned __int64 v7; // x23
  __int64 v8; // x21
  System_Func_int__bool__o *v9; // x22
  bool v10; // w0

  if ( (byte_4C46220 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__);
    sub_1C37058(&BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
    byte_4C46220 = 1;
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
        v7 = 0;
        while ( 1 )
        {
          v8 = sub_1C372A4(BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v8, 0);
          if ( v7 >= LODWORD(notSkillCopyTargetIndividualities->max_length) )
            sub_1C372BC(IsNullOrEmpty);
          if ( !v8 )
            break;
          *(_DWORD *)(v8 + 16) = notSkillCopyTargetIndividualities->m_Items[v7];
          v9 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v9,
            (Il2CppObject *)v8,
            Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0);
          v10 = BasicHelper__Any_int__51187064(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v9,
                  (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944);
          if ( !v10 && (__int64)++v7 < SLODWORD(notSkillCopyTargetIndividualities->max_length) )
            continue;
          return v10;
        }
LABEL_16:
        sub_1C372B4(IsNullOrEmpty);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x20
  __int64 *v13; // x8
  __int64 v14; // x1
  System_String_o *IfExists; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C4621B & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_2881/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/);
    sub_1C37058(&StringLiteral_2880/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/);
    byte_4C4621B = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *messageNotAvailable = static_fields->Empty;
  sub_1C36FFC((CGThumbnailListItem_o *)messageNotAvailable, (int32_t)Empty, (int32_t)method, v3);
  if ( !skillInfo )
    goto LABEL_16;
  if ( BattleSkillInfoData__isChargeOK(skillInfo, 0) )
  {
    if ( BattleSkillInfoData__IsOpenCond(skillInfo, 0) )
      return 1;
    v8 = sub_1C37100(string___TypeInfo, 1);
    if ( v8 )
    {
      v12 = v8;
      if ( *(_DWORD *)(v8 + 24) )
      {
        v13 = &StringLiteral_2881/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/;
        goto LABEL_13;
      }
LABEL_17:
      sub_1C372BC(v8);
    }
LABEL_16:
    sub_1C372B4(v8);
  }
  v8 = sub_1C37100(string___TypeInfo, 1);
  if ( !v8 )
    goto LABEL_16;
  v12 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_17;
  v13 = &StringLiteral_2880/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/;
LABEL_13:
  v14 = *v13;
  *(_QWORD *)(v12 + 32) = *v13;
  sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 32), v14, v10, v11);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v12, 0);
  *messageNotAvailable = IfExists;
  sub_1C36FFC((CGThumbnailListItem_o *)messageNotAvailable, (int32_t)IfExists, v16, v17);
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

  if ( (byte_4C46219 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46219 = 1;
  }
  *messageNotExecutable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)messageNotExecutable, StringLiteral_1/*""*/, (int32_t)messageNotExecutable, method);
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
  if ( (byte_4C46216 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1C37058(&TempBattleSkillInfoData_TypeInfo);
    byte_4C46216 = 1;
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
        sub_1C372BC(this);
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
    v18 = (TempBattleSkillInfoData_o *)sub_1C372A4(TempBattleSkillInfoData_TypeInfo);
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
    sub_1C372B4(this);
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
  BattleData_o *IsQuestClear_40324848; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v15; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v18; // x22
  unsigned int v19; // w24
  AddSkillData_o *v20; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C46221 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    byte_4C46221 = 1;
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
  IsQuestClear_40324848 = (BattleData_o *)CondType__IsQuestClear_40324848(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( ((unsigned __int8)IsQuestClear_40324848 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !LODWORD(targetIds->max_length) )
      goto LABEL_30;
    IsQuestClear_40324848 = this->fields.data;
    if ( !IsQuestClear_40324848 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_40324848, targetIds->m_Items[0], 0);
    if ( !ServantData )
      return;
    v15 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0) )
    {
      return;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_40324848 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v15->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1C372B4(IsQuestClear_40324848);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v18 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_40324848;
      v19 = 0;
      while ( v19 < max_length )
      {
        v20 = classBoardAddCommandSpells->m_Items[v19];
        if ( !v20 || !v18 )
          goto LABEL_29;
        IsQuestClear_40324848 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v18,
                                                  &entity,
                                                  v20->fields.id,
                                                  commandSpellId,
                                                  v20->fields.lv,
                                                  0);
        if ( ((unsigned __int8)IsQuestClear_40324848 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_40324848 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_40324848 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_40324848,
            (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v19 >= max_length )
          return;
      }
LABEL_30:
      sub_1C372BC(IsQuestClear_40324848);
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
  int32_t v29; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x1
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_Int32_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Object_array *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  CGThumbnailListItem_o *v49; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v50; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v51; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v12 = this;
  if ( (byte_4C4621F & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C37058(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__);
    this = (BattleLogicSkill_o *)sub_1C37058(&BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    byte_4C4621F = 1;
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
  if ( !skillLvEnt )
    goto LABEL_52;
  v15 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(skillLvEnt, 0);
  actorIndividualities = v15 ? BattleServantData__getConcatServantAndBuffIndividualityies(v15, 0, 0, 0, 0, 0, 0) : 0LL;
  v49 = (CGThumbnailListItem_o *)functionIdArray;
  v51 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v50 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = skillLvEnt->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v18 = 0;
  while ( (__int64)v18 < SLODWORD(funcId->max_length) )
  {
    v19 = sub_1C372A4(BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0);
    v20 = skillLvEnt->fields.funcId;
    if ( !v20 )
      goto LABEL_52;
    if ( v18 >= LODWORD(v20->max_length) )
      goto LABEL_57;
    if ( !v19 )
      goto LABEL_52;
    *(_DWORD *)(v19 + 16) = v20->m_Items[v18];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0)
      || (v23 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v23,
            (Il2CppObject *)v19,
            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__,
            0),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__51187064(
                                         (System_Int32_array *)v14,
                                         (System_Func_T__bool__o *)v23,
                                         (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v19 + 24) = 0;
      v24 = v19 + 24;
      sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 24), 0, v21, v22);
      if ( !v17 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v17,
                                     (Il2CppObject **)(v19 + 24),
                                     *(_DWORD *)(v19 + 16),
                                     (const MethodInfo_33A10EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                  || (v25 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v25,
                        (Il2CppObject *)v19,
                        Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__,
                        0),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__51187064(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v25,
                                                     (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v18 >= LODWORD(SetTypeDataValArray->max_length) )
LABEL_57:
                    sub_1C372BC(this);
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
                      || (v28 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v28,
                            (Il2CppObject *)v19,
                            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__,
                            0),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__51187064(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v28,
                                                         (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v51;
                      if ( !v51 )
                        goto LABEL_52;
                      v29 = *(_DWORD *)(v19 + 16);
                      items = v51->fields._items;
                      v31 = Method_System_Collections_Generic_List_int__Add__;
                      ++v51->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v51->fields._size;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v51,
                          v29,
                          *(const MethodInfo_3786000 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v51->fields._size = size + 1;
                        items->m_Items[size] = v29;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0);
                      if ( !this )
                        goto LABEL_52;
                      if ( v18 >= LODWORD(this->fields.logic) )
                        goto LABEL_57;
                      if ( !v50 )
                        goto LABEL_52;
                      v35 = (Il2CppObject *)*((_QWORD *)&this->fields.logictarget + v18);
                      v36 = v50->fields._items;
                      v37 = Method_System_Collections_Generic_List_DataVals__Add__;
                      ++v50->fields._version;
                      if ( !v36 )
                        goto LABEL_52;
                      v38 = v50->fields._size;
                      if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v50,
                          v35,
                          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v39 = &v36->obj.klass + v38;
                        v50->fields._size = v38 + 1;
                        v39[4] = (Il2CppClass *)v35;
                        sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v35, v33, v34);
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
    funcId = skillLvEnt->fields.funcId;
    ++v18;
    if ( !funcId )
      goto LABEL_52;
  }
  this = (BattleLogicSkill_o *)v51;
  if ( !v51
    || (v40 = System_Collections_Generic_List_int___ToArray(
                v51,
                (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        v49->klass = (CGThumbnailListItem_c *)v40,
        sub_1C36FFC(v49, (int32_t)v40, v41, v42),
        (this = (BattleLogicSkill_o *)v50) == 0)
    || (v43 = System_Collections_Generic_List_object___ToArray(
                v50,
                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v43,
        sub_1C36FFC((CGThumbnailListItem_o *)dataValsArray, (int32_t)v43, v44, v45),
        !v49->klass) )
  {
LABEL_52:
    sub_1C372B4(this);
  }
  return LODWORD(v49->klass->_1.namespaze) != 0;
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
  if ( (byte_4C46217 & 1) == 0 )
  {
    sub_1C37058(&System_Action_BattleServantData__TypeInfo);
    sub_1C37058(&BattleActionData_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C37058(&Individuality_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__);
    this = (BattleLogicSkill_o *)sub_1C37058(&BattleLogicSkill___c_TypeInfo);
    byte_4C46217 = 1;
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
  v15 = (BattleActionData_o *)sub_1C372A4(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_45;
  v43 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  v17 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v14,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v19 = (SkillEntity_o *)Entity;
  if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0) )
    return;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v44, 0);
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
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C372A4(BattleLogicFunction_FunctionArgument_TypeInfo);
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
                  master = (struct FunctionMaster_o *)sub_1C372A4(System_Action_BattleServantData__TypeInfo);
                  System_Action_object____ctor(
                    (System_Action_object__o *)master,
                    klass,
                    Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                    0);
                  static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                  static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)master, v41, v42);
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
      sub_1C372B4(this);
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
  SkillLvMaster_o *v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_object__object__o *v15; // x0
  __int64 v16; // x25
  __int64 v17; // x24
  __int64 v18; // x23
  __int64 v19; // x22
  BattleServantData_o *v20; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v22; // x8
  unsigned int NowHp; // w0
  unsigned int v24; // w0
  int32_t v25; // w20
  int32_t v26; // w20
  __int64 *v28; // x8
  System_String_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C4621A & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_1C37058(&System_Func_string__int__bool__TypeInfo);
    sub_1C37058(&System_Func_string__double__bool__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__);
    sub_1C37058(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__);
    sub_1C37058(&BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
    sub_1C37058(&StringLiteral_2876/*"BATTLE_SKILLERROR_NP_LOWER"*/);
    sub_1C37058(&StringLiteral_2874/*"BATTLE_SKILLERROR_HP_LOWER"*/);
    sub_1C37058(&StringLiteral_12347/*"STAR_HIGHER"*/);
    sub_1C37058(&StringLiteral_7256/*"HP_PER_LOWER"*/);
    sub_1C37058(&StringLiteral_2875/*"BATTLE_SKILLERROR_NP_HIGHER"*/);
    sub_1C37058(&StringLiteral_2873/*"BATTLE_SKILLERROR_HP_HIGHER"*/);
    sub_1C37058(&StringLiteral_7255/*"HP_PER_HIGHER"*/);
    sub_1C37058(&StringLiteral_2877/*"BATTLE_SKILLERROR_STAR_HIGHER"*/);
    sub_1C37058(&StringLiteral_9358/*"NP_HIGHER"*/);
    sub_1C37058(&StringLiteral_2878/*"BATTLE_SKILLERROR_STAR_LOWER"*/);
    sub_1C37058(&StringLiteral_7257/*"HP_VAL_HIGHER"*/);
    sub_1C37058(&StringLiteral_12348/*"STAR_LOWER"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_9360/*"NP_LOWER"*/);
    sub_1C37058(&StringLiteral_7258/*"HP_VAL_LOWER"*/);
    byte_4C4621A = 1;
  }
  v7 = sub_1C372A4(BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)text, StringLiteral_1/*""*/, v8, v9);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_47;
  v11 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
               skillInfo,
               skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v11 )
    goto LABEL_47;
  Instance = (__int64)SkillLvMaster__GetEntity(v11, Instance, skillInfo->fields.skilllv, 0);
  if ( !Instance || !v7 )
    goto LABEL_47;
  v14 = *(_QWORD *)(Instance + 56);
  *(_QWORD *)(v7 + 16) = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), v14, v12, v13);
  v15 = *(System_Collections_Generic_Dictionary_object__object__o **)(v7 + 16);
  if ( !v15 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v15,
         (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v16 = sub_1C372A4(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v16,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__,
    0);
  v17 = sub_1C372A4(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v17,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__,
    0);
  v18 = sub_1C372A4(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v18,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__,
    0);
  v19 = sub_1C372A4(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v19,
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
  v20 = (BattleServantData_o *)Instance;
  Instance = BattleServantData__getNPVal((BattleServantData_o *)Instance, 0);
  if ( !v16 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v16 + 24))(
          *(_QWORD *)(v16 + 64),
          StringLiteral_9358/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v16 + 40))
      & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = &StringLiteral_2875/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v20, 0);
  if ( !v17 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v17 + 24))(
               *(_QWORD *)(v17 + 64),
               StringLiteral_9360/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v17 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = &StringLiteral_2876/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v16 + 24))(
               *(_QWORD *)(v16 + 64),
               StringLiteral_12347/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v16 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = &StringLiteral_2877/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v17 + 24))(
          *(_QWORD *)(v17 + 64),
          StringLiteral_12348/*"STAR_LOWER"*/,
          (unsigned int)v22->fields.totalCriticalStars,
          *(_QWORD *)(v17 + 40))
      & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = &StringLiteral_2878/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v20, 0);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v16 + 24))(
          *(_QWORD *)(v16 + 64),
          StringLiteral_7257/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v16 + 40))
      & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = &StringLiteral_2873/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v24 = BattleServantData__getNowHp(v20, 0);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v17 + 24))(
          *(_QWORD *)(v17 + 64),
          StringLiteral_7258/*"HP_VAL_LOWER"*/,
          v24,
          *(_QWORD *)(v17 + 40))
      & 1) != 0 )
  {
    v25 = BattleServantData__getNowHp(v20, 0);
    Instance = BattleServantData__getMaxHp(v20, 0);
    if ( !v18 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v18 + 24))(
            *(_QWORD *)(v18 + 64),
            StringLiteral_7255/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v18 + 40),
            (double)v25 * 1000.0 / (double)(int)Instance)
        & 1) != 0 )
    {
      v26 = BattleServantData__getNowHp(v20, 0);
      Instance = BattleServantData__getMaxHp(v20, 0);
      if ( v19 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v19 + 24))(
                *(_QWORD *)(v19 + 64),
                StringLiteral_7256/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v19 + 40),
                (double)v26 * 1000.0 / (double)(int)Instance)
            & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1C372B4(Instance);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = &StringLiteral_2874/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v29 = LocalizationManager__Get((System_String_o *)*v28, 0);
  *text = v29;
  sub_1C36FFC((CGThumbnailListItem_o *)text, (int32_t)v29, v30, v31);
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

  if ( (byte_4C46218 & 1) == 0 )
  {
    sub_1C37058(&BattleActionData_TypeInfo);
    sub_1C37058(&BattleActionLogManagerInterface_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46218 = 1;
  }
  skillId = this->fields.data;
  if ( !skillId )
    goto LABEL_34;
  BattleData__ResetFunctionedFunctionIds(skillId, 0);
  v6 = sub_1C372A4(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0);
  if ( !task )
    goto LABEL_34;
  skillInfo = task->fields.skillInfo;
  skillId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_34;
  skillId = (BattleData_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)skillId,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
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
                              (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 40), (int32_t)ptTarget, v10, v11);
  *(_QWORD *)(v6 + 152) = skillInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 152), (int32_t)skillInfo, v14, v15);
  skillId = (BattleData_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_34;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0);
  v16 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v16 )
    goto LABEL_34;
  System_Collections_Generic_List_int___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)v9->fields.data,
    (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (BattleData_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v9, 0);
  if ( !v17 )
    goto LABEL_34;
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
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
          (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  v21 = System_Collections_Generic_List_object___ToArray(
          v17,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_DataVals__ToArray__);
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
    v28 = sub_1C87870(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6);
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
    sub_1C372B4(skillId);
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
                              (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0;
  logic = this->fields.logic;
  v5 = BattleLogicSkill__createSkillData_47050168(this, task, 0, 0, &baseActionData, v3);
  if ( !logic )
    sub_1C372B4(v5);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0);
}


BattleActionData_o *BattleLogicSkill__createSkillData_47050168(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
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
  int32_t v24; // w1
  BattleLogicSkill_o *v25; // x26
  char v26; // w26
  struct System_Int32_array *v27; // x8
  int v28; // w8
  BattleData_o *data; // x28
  BattleServantData_o *EnemyServantData; // x0
  __int64 v31; // x28
  __int64 v32; // x29
  struct System_Int32_array *v33; // x8
  int32_t v34; // w1
  const MethodInfo *v35; // x1
  struct System_Int32_array *ptTarget; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  BattleServantData_o *ServantData; // x0
  BattleActionData_o *v40; // x23
  BattleActionData_o *v41; // x29
  ServantLimitAddEntity_o *svtlimitaddent; // x28
  int32_t id; // w29
  System_String_o *Name; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  BattleLogicSkill_o *v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  BattleLogicSkill_o *v52; // x26
  BattleLogicSkill_o *v53; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  CGThumbnailListItem_o *p_motionMessage; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Int32_array *effectList; // x1
  int logic; // w8
  BattleLogicSkill_o *v61; // x26
  int v62; // w9
  __int64 v63; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  const MethodInfo *v67; // x6
  bool v68; // w23
  struct System_Int32_array *v69; // x8
  int32_t v70; // w5
  struct BattleData_o *v71; // x8
  bool v72; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  SkillEntity_o *v76; // x24
  BattleLogicFunction_o *v77; // x29
  System_Int32_array *v78; // x27
  DataVals_array *v79; // x28
  int32_t v80; // w0
  UnityEngine_Object_o *logictarget; // x28
  int32_t v82; // w27
  struct BattleLogic_o *v83; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct BattleData_o *v87; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v90; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v92; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct BattleData_o *v95; // x1
  int32_t v96; // w1
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct BattleData_o **p_logicfunction; // x27
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  struct BattleData_o *v102; // x1
  int32_t v103; // w1
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  int32_t type; // w23
  struct System_Int32_array *v107; // x8
  int32_t v108; // w1
  int v109; // w8
  struct System_Int32_array *v110; // x8
  int32_t v111; // w1
  _BOOL4 isShowBattlePointEffect; // w22
  BattleLogicSkill_o *v113; // x25
  BattleData_o *v114; // x27
  int32_t v115; // w28
  struct BattleLogic_o *v116; // x27
  BattleLogicTask_array *v117; // x0
  BattleData_o *v118; // x25
  const MethodInfo *v119; // x4
  struct System_Int32_array *v120; // x8
  int32_t v121; // w27
  BattleLogic_o *v122; // x25
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v124; // x23
  BattleData_o *v125; // x23
  BattleLogicTask_o *v126; // x23
  const MethodInfo *v127; // x1
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  struct BattleLogic_o *v130; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattleData_o *v133; // x8
  struct BattlePerformance_o *v134; // x8
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  const MethodInfo *v137; // x3
  BattleLogicTask_o *v138; // x23
  const MethodInfo *v139; // x1
  struct System_Int32_array *v140; // x8
  int32_t v141; // w2
  const MethodInfo *v142; // x2
  struct BattleLogic_o *v143; // x21
  struct BattleLogic_o *v144; // x8
  struct BattlePerformance_o *v145; // x9
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-88h]
  DataVals_o *copyFuncVals; // [xsp+40h] [xbp-80h]
  SkillLvEntity_o *v149; // [xsp+48h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16

  v10 = this;
  if ( (byte_4C46215 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_int___);
    sub_1C37058(&BattleActionData_TypeInfo);
    sub_1C37058(&BattleActionLogManagerInterface_TypeInfo);
    sub_1C37058(&BattleBoostItemInfoData_TypeInfo);
    sub_1C37058(&BattleLogicTask_TypeInfo);
    sub_1C37058(&CheckUpdateShiftTask_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
    this = (BattleLogicSkill_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46215 = 1;
  }
  dataValsArray = 0;
  functionIdArray = 0;
  if ( !task )
    goto LABEL_221;
  if ( task->fields.IsResetWasAttackTargetId )
  {
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_221;
    BattleData__ResetWasAttackTargetId((BattleData_o *)this, 0);
  }
  if ( task->fields.IsResetFunctionedFunctionIds )
  {
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_221;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)this, 0);
  }
  copyFuncVals = baseVals;
  v11 = (BattleActionData_o *)sub_1C372A4(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_221;
  v12 = BattleActionData__AddDisplayTriggerIntervalBuff(v11, task, 0);
  *baseActionData = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)baseActionData, (int32_t)v12, v13, v14);
  if ( !v12 )
    goto LABEL_221;
  v12->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_221;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
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
                              (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_221;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v149 = (SkillLvEntity_o *)this;
  v12->fields.isCounter = task->fields.isCounter;
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
  v22 = v149;
  skillLvMst = (SkillLvMaster_o *)MasterData_object;
  if ( !task->fields.checkAlive )
    goto LABEL_225;
  actorIdlist = task->fields.actorIdlist;
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_222;
    v24 = actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_221;
  }
  else
  {
    v24 = -1;
    if ( !this )
      goto LABEL_221;
  }
  this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, v24, 0);
  if ( !this
    || (this = (BattleLogicSkill_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0),
        v25 = 0,
        ((unsigned __int8)this & 1) != 0) )
  {
LABEL_225:
    if ( task->fields.isForcedSpeedOne )
    {
      v26 = 1;
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
        v26 = (char)this;
      }
      else
      {
LABEL_41:
        v26 = 0;
      }
    }
    v27 = task->fields.actorIdlist;
    if ( v27 )
    {
      if ( !LODWORD(v27->max_length) )
        goto LABEL_222;
      v28 = v27->m_Items[0];
    }
    else
    {
      v28 = -1;
    }
    v12->fields.actorId = v28;
    if ( !v149 )
      goto LABEL_221;
    data = v10->fields.data;
    this = (BattleLogicSkill_o *)SkillLvEntity__GetActNpcServantId(v149, 0);
    if ( !data )
      goto LABEL_221;
    EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)this, 0);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v32 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v152.fields.currentCryptoKey = v32;
      *(_QWORD *)&v152.fields.fakeValue = v31;
      v12->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v152, 0);
    }
    v33 = task->fields.actorIdlist;
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( v33 )
    {
      if ( !LODWORD(v33->max_length) )
        goto LABEL_222;
      v34 = v33->m_Items[0];
      if ( !this )
        goto LABEL_221;
    }
    else
    {
      v34 = -1;
      if ( !this )
        goto LABEL_221;
    }
    this = (BattleLogicSkill_o *)BattleData__getServantId((BattleData_o *)this, v34, 0);
    if ( !Entity )
      goto LABEL_221;
    v12->fields.motionId = SkillEntity__GetMotionId(Entity, (int32_t)this, 0);
    v12->fields.targetId = BattleLogicTask__getTarget(task, v35);
    ptTarget = task->fields.ptTarget;
    v12->fields.pttargetIds = ptTarget;
    sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.pttargetIds, (int32_t)ptTarget, v37, v38);
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_221;
    ServantData = BattleData__getServantData((BattleData_o *)this, v12->fields.actorId, 0);
    if ( ServantData )
      v40 = v12;
    else
      v40 = 0;
    v41 = v12;
    if ( !ServantData
      || (svtlimitaddent = ServantData->fields.svtlimitaddent, v41 = v12, !svtlimitaddent)
      || (id = Entity->fields.id,
          Name = SkillEntity__getName(Entity, 0),
          this = (BattleLogicSkill_o *)ServantLimitAddEntity__GetOverwriteSkillName(svtlimitaddent, id, Name, 0),
          v47 = this,
          v41 = v40,
          !this) )
    {
      this = (BattleLogicSkill_o *)SkillEntity__getName(Entity, 0);
      v47 = this;
    }
    if ( !v41 )
      goto LABEL_221;
    v41->fields.skillMessage = (struct System_String_o *)v47;
    sub_1C36FFC((CGThumbnailListItem_o *)&v41->fields.skillMessage, (int32_t)v47, v45, v46);
    v12->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.skillInfo, (int32_t)skillInfo, v48, v49);
    v12->fields.isForcedSpeedOne = v26 & 1;
    v12->fields.checkRevengeId = task->fields.checkRevengeId;
    if ( task->fields.gimmickIndexArray )
    {
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_221;
      this = (BattleLogicSkill_o *)BattleData__GetGimmickStartVoiceArray((BattleData_o *)this, 0);
      if ( !v10->fields.data )
        goto LABEL_221;
      v52 = this;
      this = (BattleLogicSkill_o *)BattleData__GetGimmickResultVoiceArray(v10->fields.data, 0);
      if ( !v10->fields.data )
        goto LABEL_221;
      v53 = this;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(v10->fields.data, 0);
      BattleActionData__SetGimmickData(
        v12,
        task->fields.gimmickIndexArray,
        (System_String_array *)v52,
        (System_Object_array *)v53,
        GimmickAnimTypeArray,
        0);
    }
    motionMessage = task->fields.motionMessage;
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
    sub_1C36FFC(p_motionMessage, (int32_t)motionMessage, v50, v51);
    if ( (task->fields.actortype | 4) == 5 )
      BattleActionData__setStateField(v12, 0);
    effectList = Entity->fields.effectList;
    v12->fields.effectlist = effectList;
    sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields.effectlist, (int32_t)effectList, v57, v58);
    this = (BattleLogicSkill_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_221;
    BattleLogic__updateResultServant((BattleLogic_o *)this, 0);
    if ( skillInfo->fields.type == 21 )
    {
      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v149, 0);
      if ( !this )
        goto LABEL_221;
      logic = (int)this->fields.logic;
      v61 = this;
      if ( logic >= 1 )
      {
        v62 = 0;
        while ( logic != v62 )
        {
          v63 = *((_QWORD *)&this->fields.logictarget + v62);
          if ( !v63 )
            goto LABEL_221;
          ++v62;
          *(_BYTE *)(v63 + 72) = 1;
          if ( logic == v62 )
            goto LABEL_87;
        }
LABEL_222:
        sub_1C372BC(this);
      }
LABEL_87:
      logicfunction = v10->fields.logicfunction;
      funcId = v149->fields.funcId;
      this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                     skillInfo,
                                     skillInfo->klass->vtable._5_get_skillId.method);
      if ( !logicfunction )
        goto LABEL_221;
      this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                     logicfunction,
                                     v12,
                                     funcId,
                                     (DataVals_array *)v61,
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
      v25 = this;
      if ( task->fields.actortype == 5 )
      {
        if ( !this )
          goto LABEL_221;
        v80 = BasicHelper__IndexValue_int__51208344(
                (System_Collections_Generic_List_T__o *)this[6].monitor,
                0,
                0,
                (const MethodInfo_30D6098 *)Method_BasicHelper_IndexValue_int___);
        logictarget = (UnityEngine_Object_o *)v25[1].fields.logictarget;
        v82 = v80;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleLogicSkill_o *)UnityEngine_Object__op_Equality(logictarget, 0, 0);
        if ( v82 >= 1 && ((unsigned __int8)this & 1) != 0 )
        {
          v83 = v10->fields.logic;
          if ( !v83 )
            goto LABEL_221;
          this = (BattleLogicSkill_o *)v83->fields.perf;
          if ( !this )
            goto LABEL_221;
          ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v82, 0);
          v25[1].fields.logictarget = (struct BattleLogicTarget_o *)ServantGameObject;
          sub_1C36FFC((CGThumbnailListItem_o *)&v25[1].fields.logictarget, (int32_t)ServantGameObject, v85, v86);
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
      if ( task->fields.IsResetPrevAttackInfo )
      {
        if ( !v25 )
          goto LABEL_221;
        BYTE4(v25[2].klass) = 0;
        this = (BattleLogicSkill_o *)v10->fields.data;
        if ( !this )
          goto LABEL_221;
        BattleData__setCommandAttack((BattleData_o *)this, 0, 0, 0);
      }
      v87 = v10->fields.data;
      if ( !v87 )
        goto LABEL_221;
      actionLogManager = v87->fields.actionLogManager;
      if ( !actionLogManager )
        goto LABEL_221;
      klass = actionLogManager->klass;
      v90 = *(unsigned __int16 *)&actionLogManager->klass->_2.rank;
      if ( *(_WORD *)&actionLogManager->klass->_2.rank )
      {
        p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
        {
          --v90;
          p_offset += 2;
          if ( !v90 )
            goto LABEL_139;
        }
        v92 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
      }
      else
      {
LABEL_139:
        v92 = sub_1C87870(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5);
      }
      this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))v92)(
                                     actionLogManager,
                                     task,
                                     *(_QWORD *)(v92 + 8));
      if ( !v25 )
        goto LABEL_221;
      if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v25, 0) )
      {
        v95 = (struct BattleData_o *)v25[2].fields.logictarget;
        v25[10].fields.data = v95;
        sub_1C36FFC((CGThumbnailListItem_o *)&v25[10].fields, (int32_t)v95, v93, v94);
        v96 = StringLiteral_1/*""*/;
        v25[2].fields.logictarget = (struct BattleLogicTarget_o *)StringLiteral_1/*""*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v25[2].fields.logictarget, v96, v97, v98);
        p_logicfunction = (struct BattleData_o **)&v25[2].fields.logicfunction;
        if ( !System_String__IsNullOrEmpty((System_String_o *)v25[2].fields.logicfunction, 0) )
        {
          v102 = *p_logicfunction;
          v25[10].fields.data = *p_logicfunction;
          sub_1C36FFC((CGThumbnailListItem_o *)&v25[10].fields, (int32_t)v102, v100, v101);
          v103 = StringLiteral_1/*""*/;
          *p_logicfunction = (struct BattleData_o *)StringLiteral_1/*""*/;
          sub_1C36FFC((CGThumbnailListItem_o *)&v25[2].fields.logicfunction, v103, v104, v105);
        }
      }
      type = skillInfo->fields.type;
      v107 = task->fields.actorIdlist;
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( v107 )
      {
        if ( !LODWORD(v107->max_length) )
          goto LABEL_222;
        v108 = v107->m_Items[0];
        if ( !this )
          goto LABEL_221;
      }
      else
      {
        v108 = -1;
        if ( !this )
          goto LABEL_221;
      }
      this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, v108, 0);
      if ( type == 1 || this )
      {
        this = (BattleLogicSkill_o *)SkillLvEntity__IsNoTargetSkipSkill(v22, 0);
        v109 = (unsigned __int8)this & 1;
      }
      else
      {
        v109 = 1;
      }
      if ( (v109 & (LOBYTE(v25[5].monitor) ^ 1)) == 0 && (!BYTE1(v25[6].fields.data) || BYTE2(v25[6].fields.data)) )
      {
        if ( task->fields.isCanCounterTask )
        {
          v110 = task->fields.actorIdlist;
          this = (BattleLogicSkill_o *)v10->fields.data;
          if ( v110 )
          {
            if ( !LODWORD(v110->max_length) )
              goto LABEL_222;
            v111 = v110->m_Items[0];
            if ( !this )
              goto LABEL_221;
          }
          else
          {
            v111 = -1;
            if ( !this )
              goto LABEL_221;
          }
          this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, v111, 0);
          if ( this )
          {
            v113 = this;
            ((void (__fastcall *)(BattleLogicSkill_o *, struct BattleData_o *, Il2CppClass *))v25->klass[1]._1.element_class)(
              v25,
              v10->fields.data,
              v25->klass[1]._1.castClass);
            this = (BattleLogicSkill_o *)v25[6].monitor;
            if ( !this )
              goto LABEL_221;
            v114 = v10->fields.data;
            v115 = (int32_t)v113->fields.logic;
            this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v114 )
              goto LABEL_221;
            BattleData__SetWasAttackTargetIdList(v114, v115, (System_Int32_array *)this, 0);
            v116 = v10->fields.logic;
            if ( !v116 )
              goto LABEL_221;
            this = (BattleLogicSkill_o *)v116->fields.logicnomal;
            if ( !this )
              goto LABEL_221;
            v117 = BattleLogicNomal__taskCounterFunc(
                     (BattleLogicNomal_o *)this,
                     v10->fields.data,
                     BYTE3(v113[10].fields.logic) == 0,
                     1,
                     0,
                     0);
            BattleLogic__addBattleLogicTask(v116, v117, 0);
          }
        }
        v118 = v10->fields.data;
        if ( task->fields.isFunctionedFunction )
        {
          if ( !v118 )
            goto LABEL_221;
          BattleData__ResetFunctionedFunctionIds(v10->fields.data, 0);
          goto LABEL_184;
        }
        v120 = task->fields.actorIdlist;
        if ( v120 )
        {
          if ( !LODWORD(v120->max_length) )
            goto LABEL_222;
          v121 = v120->m_Items[0];
        }
        else
        {
          v121 = -1;
        }
        this = (BattleLogicSkill_o *)v25[6].monitor;
        if ( this )
        {
          this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                         (System_Collections_Generic_List_int__o *)this,
                                         (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( v118 )
          {
            BattleData__SetFunctionedTargetIdArray(v118, v121, (System_Int32_array *)this, 0);
            v122 = v10->fields.logic;
            if ( v122 )
            {
              FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                                  v10->fields.logic,
                                                  v10->fields.data,
                                                  0);
              BattleLogic__addBattleLogicTask(v122, FunctionedFunctionBuffTaskArray, 0);
LABEL_184:
              v124 = BattleLogicSkill__MakeAddInvokeSkillTask(v10, skillLvMst, v22, task, v119);
              this = (BattleLogicSkill_o *)SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v22, 0);
              if ( !v10->fields.logic )
                goto LABEL_221;
              if ( ((unsigned __int8)this & 1) != 0 )
                BattleLogic__AddTaskTargetTaskAfter(v10->fields.logic, task, v124, 0);
              else
                BattleLogic__AddBattleLogicTask(v10->fields.logic, v124, 0);
              v125 = v10->fields.data;
              this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                             skillInfo,
                                             skillInfo->klass->vtable._5_get_skillId.method);
              if ( !v125 )
                goto LABEL_221;
              BattleData__AddUseSkillId(v125, (int32_t)this, 0);
              if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v25, 0) )
              {
                v126 = (BattleLogicTask_o *)sub_1C372A4(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(v126, v127);
                if ( !v126 )
                  goto LABEL_221;
                v126->fields.actiontype = 24;
                this = (BattleLogicSkill_o *)v10->fields.logic;
                if ( !this )
                  goto LABEL_221;
                BattleLogic__AddBattleLogicTask((BattleLogic_o *)this, v126, 0);
              }
              if ( SkillEntity__GetCutinAdditionalTime(Entity, 0) > 0.0 )
              {
                this = (BattleLogicSkill_o *)SkillEntity__getSkillCutInId(Entity, 0);
                if ( !(_DWORD)this )
                {
                  v130 = v10->fields.logic;
                  if ( !v130 )
                    goto LABEL_221;
                  perf = v130->fields.perf;
                  CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0);
                  if ( !perf )
                    goto LABEL_221;
                  BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0);
                  if ( v25[2].fields.logictarget )
                  {
                    v133 = v10->fields.data;
                    if ( !v133 )
                      goto LABEL_221;
                    v134 = v133->fields.perf;
                    if ( !v134 )
                      goto LABEL_221;
                    this = (BattleLogicSkill_o *)v134->fields.infoComp;
                    if ( !this )
                      goto LABEL_221;
                    BattleInformationComponent__showCommonMessage(
                      (BattleInformationComponent_o *)this,
                      (BattleActionData_o *)v25,
                      0);
                    v25[2].fields.logictarget = 0;
                    sub_1C36FFC((CGThumbnailListItem_o *)&v25[2].fields.logictarget, 0, v135, v136);
                    BYTE4(v25[6].fields.logic) = 1;
                  }
                }
              }
              if ( task->fields.IsNotShowSkillMessage )
              {
                v25[2].fields.logictarget = 0;
                sub_1C36FFC((CGThumbnailListItem_o *)&v25[2].fields.logictarget, 0, v128, v129);
                BYTE4(v25[6].fields.logic) = 1;
              }
              this = (BattleLogicSkill_o *)SkillEntity__IsCheckUpdateShiftServant(Entity, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v138 = (BattleLogicTask_o *)sub_1C372A4(CheckUpdateShiftTask_TypeInfo);
                BattleLogicTask___ctor(v138, v139);
                v138->fields.actiontype = 68;
                this = (BattleLogicSkill_o *)v10->fields.logic;
                if ( !this )
                  goto LABEL_221;
                this = (BattleLogicSkill_o *)BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)this, task, v138, 0);
              }
              v140 = task->fields.actorIdlist;
              if ( v140 )
              {
                if ( !LODWORD(v140->max_length) )
                  goto LABEL_222;
                v141 = v140->m_Items[0];
              }
              else
              {
                v141 = -1;
              }
              BattleLogicSkill__ExecuteShortenSkillBuff(v10, (BattleSkillInfoData_o *)skillInfo, v141, v137);
              if ( !task->fields.isForcedSpeedOne )
              {
                this = (BattleLogicSkill_o *)SkillEntity__IsBehaveAsAssistSkill(Entity, 0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v143 = v10->fields.logic;
                  if ( !v143 )
                    goto LABEL_221;
                  this = (BattleLogicSkill_o *)v143->fields.perf;
                  if ( !this )
                    goto LABEL_221;
                  this = (BattleLogicSkill_o *)BattlePerformance__isEnableSkipStartQuest((BattlePerformance_o *)this, 0);
                  v143->fields.isEnableSkipAssistSkill = (unsigned __int8)this & 1;
                  v144 = v10->fields.logic;
                  if ( !v144 )
                    goto LABEL_221;
                  v145 = v144->fields.perf;
                  if ( !v145 )
                    goto LABEL_221;
                  v145->fields.isEnableSkipSkillCutIn = v144->fields.isEnableSkipAssistSkill;
                }
              }
              BattleLogicTask__SetInterruptLoadChangeModelAction(task, (BattleActionData_o *)v25, v142);
              return (BattleActionData_o *)v25;
            }
          }
        }
LABEL_221:
        sub_1C372B4(this);
      }
      return 0;
    }
    changeTDCommandType = skillInfo->fields.changeTDCommandType;
    if ( (changeTDCommandType & 0x80000000) == 0 )
      v12->fields.commandType = changeTDCommandType;
    functionIdArray = v149->fields.funcId;
    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v149, 0);
    dataValsArray = (DataVals_array *)this;
    v68 = copyFuncVals == 0 || !fromSkillCopyFunc;
    if ( copyFuncVals != 0 && fromSkillCopyFunc )
    {
      v69 = task->fields.actorIdlist;
      if ( v69 )
      {
        if ( !LODWORD(v69->max_length) )
          goto LABEL_222;
        v70 = v69->m_Items[0];
      }
      else
      {
        v70 = -1;
      }
      if ( !BattleLogicSkill__SetSkillCopyFunction(v10, v149, copyFuncVals, &functionIdArray, &dataValsArray, v70, v67) )
        return 0;
      this = (BattleLogicSkill_o *)v10->fields.data;
      if ( !this )
        goto LABEL_221;
      this = (BattleLogicSkill_o *)BattleData__isEnemyID((BattleData_o *)this, v12->fields.actorId, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v71 = v10->fields.data;
        if ( !v71 )
          goto LABEL_221;
        v72 = v71->fields.currentTurn == 0;
      }
      else
      {
        v72 = 0;
      }
      v12->fields.isReversalShortBuffTurn = v72;
    }
    if ( skillInfo->fields.type == 1 )
    {
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C372A4(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0);
      if ( !argument )
        goto LABEL_221;
      argument->fields.grantSkillType = skillInfo->fields.type;
      if ( !task->fields.isSideEffectTriggerSkill )
      {
LABEL_113:
        p_isShowBattlePointEffect = &task->fields.isShowBattlePointEffect;
        if ( !task->fields.isShowBattlePointEffect )
        {
          v76 = Entity;
          goto LABEL_117;
        }
        v76 = Entity;
LABEL_115:
        argument->fields.isShowBattlePointEffect = *p_isShowBattlePointEffect;
LABEL_117:
        argument->fields._IsSetSubstituteBuffAction_k__BackingField = 1;
        v77 = v10->fields.logicfunction;
        v79 = dataValsArray;
        v78 = functionIdArray;
        this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                       skillInfo,
                                       skillInfo->klass->vtable._5_get_skillId.method);
        if ( !v77 )
          goto LABEL_221;
        this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                       v77,
                                       v12,
                                       v78,
                                       v79,
                                       0,
                                       1,
                                       0,
                                       0,
                                       0,
                                       v68,
                                       1,
                                       argument,
                                       (int32_t)this,
                                       0);
        Entity = v76;
        v22 = v149;
        goto LABEL_119;
      }
    }
    else
    {
      if ( !task->fields.isSideEffectTriggerSkill )
      {
        v76 = Entity;
        p_isShowBattlePointEffect = &task->fields.isShowBattlePointEffect;
        isShowBattlePointEffect = task->fields.isShowBattlePointEffect;
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C372A4(BattleLogicFunction_FunctionArgument_TypeInfo);
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
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C372A4(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0);
    }
    overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1C372A4(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(
        (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
        0);
    }
    if ( !argument )
      goto LABEL_221;
    BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(argument, overwriteFuncSideEffectArg, 0);
    goto LABEL_113;
  }
  return (BattleActionData_o *)v25;
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

  if ( (byte_4C4621D & 1) == 0 )
  {
    sub_1C37058(&BattleLogicTask___TypeInfo);
    sub_1C37058(&BattleLogicTask_TypeInfo);
    sub_1C37058(&BattleSkillInfoData_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    byte_4C4621D = 1;
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
  v9 = sub_1C372A4(BattleSkillInfoData_TypeInfo);
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
  v10 = sub_1C372A4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v10, v11);
  data = (BattleData_o *)sub_1C37100(int___TypeInfo, 1);
  if ( !data )
    goto LABEL_26;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v8;
  if ( !v10 )
    goto LABEL_26;
  *(_QWORD *)(v10 + 160) = data;
  sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 160), (int32_t)data, v12, v13);
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
        (data = (BattleData_o *)sub_1C37100(BattleLogicTask___TypeInfo, 1)) == 0) )
  {
LABEL_26:
    sub_1C372B4(data);
  }
  v19 = data;
  data = (BattleData_o *)sub_1C37194(v10, data->klass->_1.element_class);
  if ( !data )
  {
    v23 = sub_1C372D8(0);
    sub_1C37180(v23, 0);
  }
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1C372BC(data);
  v19->fields.rootfsm = (struct PlayMakerFSM_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&v19->fields.rootfsm, v10, v20, v21);
  return (BattleLogicTask_array *)v19;
}


BattleLogicTask_array *BattleLogicSkill__getQuestBehaviorSkillTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  QuestBehaviorMaster_o *v5; // x20
  int32_t v6; // w21
  int32_t Phase; // w0
  QuestBehaviorEntity_array *BattleSkill; // x0
  QuestBehaviorEntity_array *v9; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 v11; // x25
  QuestBehaviorEntity_o **m_Items; // x26
  __int64 v13; // x22
  unsigned int v14; // w0
  BattleLogicTask_o *v15; // x23
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  System_Int32_array *v18; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v20; // x6
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4C4621C & 1) == 0 )
  {
    sub_1C37058(&BattleLogicTask_TypeInfo);
    sub_1C37058(&BattleSkillInfoData_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestBehaviorMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4621C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !MasterData_object )
    return 0;
  v5 = (QuestBehaviorMaster_o *)MasterData_object;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0);
  if ( !this->fields.data )
    goto LABEL_28;
  v6 = (int)Instance;
  Phase = BattleData__getPhase(this->fields.data, 0);
  BattleSkill = QuestBehaviorMaster__getBattleSkill(v5, v6, Phase, 0);
  if ( !BattleSkill )
    return 0;
  v9 = BattleSkill;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( SLODWORD(v9->max_length) >= 1 )
  {
    v11 = 0;
    m_Items = v9->m_Items;
    while ( 1 )
    {
      v13 = sub_1C372A4(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v13, 0);
      if ( !v13 )
        break;
      *(_DWORD *)(v13 + 24) = -1;
      *(_QWORD *)(v13 + 16) = 20;
      if ( (unsigned int)v11 >= LODWORD(v9->max_length) )
        goto LABEL_29;
      Instance = (DataManager_o *)m_Items[v11];
      if ( !Instance )
        break;
      v14 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0);
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 376LL))(
                                    v13,
                                    v14,
                                    *(_QWORD *)(*(_QWORD *)v13 + 384LL));
      if ( (unsigned int)v11 >= LODWORD(v9->max_length) )
LABEL_29:
        sub_1C372BC(Instance);
      Instance = (DataManager_o *)m_Items[v11];
      if ( !Instance )
        break;
      *(_DWORD *)(v13 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0);
      v15 = (BattleLogicTask_o *)sub_1C372A4(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v15, v16);
      if ( !v15 )
        break;
      BattleLogicTask__setActor(v15, 5, -1, v17);
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0);
      if ( !this->fields.data )
        break;
      v18 = (System_Int32_array *)Instance;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0, 0);
      BattleLogicTask__setActionSkill(v15, (BattleSkillInfoData_o *)v13, v18, FieldPlayerServantIDList, 0, 0, v20);
      BattleLogicTask__setActor(v15, 5, -1, v21);
      if ( !v10 )
        break;
      items = v10->fields._items;
      v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v10->fields._version;
      if ( !items )
        break;
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)v15,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v15;
        sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v15, v22, v23);
      }
      if ( (int)++v11 >= SLODWORD(v9->max_length) )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v10,
                                          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1C372B4(Instance);
  }
  if ( !v10 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v12; // x4
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_4C46213 & 1) == 0 )
  {
    sub_1C37058(&BattleLogicTask_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C46213 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = (BattleLogicTask_o *)sub_1C372A4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, v10);
  if ( !v9
    || (BattleLogicTask__setCommandSpell(v9, skillId, 0, ptTargetList, v12), !v8)
    || (items = v8->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
    sub_1C372B4(v11);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v9;
    sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v9, v13, v14);
  }
  SkillTargetedBeforeFunctionSkill = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                                                                                      this,
                                                                                      v9,
                                                                                      ptTargetList,
                                                                                      0,
                                                                                      v19);
  System_Collections_Generic_List_object___InsertRange(
    v8,
    0,
    SkillTargetedBeforeFunctionSkill,
    (const MethodInfo_37A4008 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v21; // x6
  BattleServantData_o *v22; // x25
  System_Int32_array *v23; // x2
  int32_t svtUniqueId; // w1
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
  int32_t v36; // w1
  bool isPlayerID; // w0
  int32_t v38; // w2
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_List_object__o *v46; // x24
  __int64 v47; // x8
  __int64 v48; // x25
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  const MethodInfo *v52; // x4
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
  System_Collections_Generic_IEnumerable_T__o *v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  BattleLogicSkill___c_c *v69; // x0
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v71; // x21
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  System_Collections_Generic_IEnumerable_T__o *v75; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]
  const MethodInfo *v78; // [xsp+10h] [xbp-80h]

  if ( (byte_4C46212 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_1C37058(&BattleLogicTask_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_BattleLogicTask___);
    sub_1C37058(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C37058(&Method_BattleLogicSkill___c__taskSkill_b__5_0__);
    sub_1C37058(&BattleLogicSkill___c_TypeInfo);
    byte_4C46212 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v18 = (BattleLogicTask_o *)sub_1C372A4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v18, v19);
  if ( !skillInfo )
    goto LABEL_94;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_94;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0);
  v22 = (BattleServantData_o *)data;
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
    v23 = enemyTargetList;
    if ( !v18 )
      goto LABEL_94;
  }
  else
  {
    svtUniqueId = skillInfo->fields.svtUniqueId;
    if ( svtUniqueId == -1 )
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
                      v78);
      v32 = int___TypeInfo;
    }
    data = sub_1C37100(v32, 1);
    if ( !data )
      goto LABEL_94;
    v23 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
      sub_1C372BC(data);
    *(_DWORD *)(data + 32) = TargetAiAct;
    enemyTargetList = 0;
    if ( !v18 )
LABEL_94:
      sub_1C372B4(data);
  }
  BattleLogicTask__setActionSkill(v18, skillInfo, v23, ptTargetList, checkAlive, checkRevengeId, v21);
  v36 = skillInfo->fields.svtUniqueId;
  if ( v36 == -1 )
  {
    v39 = 1;
    v38 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, v36, 0);
    v38 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v39 = 2;
    else
      v39 = 3;
  }
  BattleLogicTask__setActor(v18, v39, v38, v35);
  if ( !v17 )
    goto LABEL_94;
  items = v17->fields._items;
  v43 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_94;
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    if ( !v22 )
      goto LABEL_47;
  }
  else
  {
    v45 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v45[4] = (Il2CppClass *)v18;
    sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v18, v40, v41);
    if ( !v22 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v46 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v46,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v46 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v22, this->fields.data, 0);
  if ( !data )
    goto LABEL_94;
  v47 = *(_QWORD *)data;
  v48 = data;
  v49 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
  if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
  {
    v50 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v50 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_46;
    }
    v51 = v47 + 16LL * *v50 + 312;
  }
  else
  {
LABEL_46:
    v51 = sub_1C87870(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0);
  }
  v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v48, *(_QWORD *)(v51 + 8));
  if ( !v53 )
    sub_1C372B4(0);
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
      v57 = sub_1C87870(v53, System_Collections_IEnumerator_TypeInfo, 0);
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
      v61 = sub_1C87870(v53, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0);
    }
    v62 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v53, *(_QWORD *)(v61 + 8));
    v63 = sub_1C37100(int___TypeInfo, 1);
    if ( !v62 )
      sub_1C372B4(v63);
    if ( !v63 )
      sub_1C372B4(0);
    if ( !*(_DWORD *)(v63 + 24) )
      sub_1C372BC(v63);
    *(_DWORD *)(v63 + 32) = v62->fields.svtUniqueId;
    v64 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
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
    if ( !v46 )
      sub_1C372B4(v64);
    System_Collections_Generic_List_object___AddRange(
      v46,
      v64,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v65 = *(_QWORD *)v53;
  v66 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
  {
    v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_73;
    }
    v68 = v65 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_73:
    v68 = sub_1C87870(v53, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v68)(v53, *(_QWORD *)(v68 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v46 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v17,
                                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_81;
  }
  if ( !v46 )
    goto LABEL_48;
LABEL_79:
  data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(this, v18, ptTargetList, enemyTargetList, v52);
  if ( !v46 )
    goto LABEL_94;
  System_Collections_Generic_List_object___AddRange(
    v46,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v46,
         (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
  {
    v69 = BattleLogicSkill___c_TypeInfo;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v69 = BattleLogicSkill___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__int__o *)v69->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69);
        v69 = BattleLogicSkill___c_TypeInfo;
      }
      v71 = (Il2CppObject *)v69->static_fields->__9;
      _9__5_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v71, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v73, v74);
    }
    v75 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v46,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_30D7280 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v17,
      0,
      v75,
      (const MethodInfo_37A4008 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4C46223 & 1) == 0 )
  {
    sub_1C37058(&BattleLogicSkill___c_TypeInfo);
    byte_4C46223 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleLogicSkill___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return skillInfo->fields.priority;
}


void BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0)) == 0 )
    sub_1C372B4(this);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0);
}


int32_t BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0 )
    sub_1C372B4(this);
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

  if ( (byte_4C46224 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4C46224 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1C372B4(conditions);
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

  if ( (byte_4C46225 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    byte_4C46225 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_13:
    sub_1C372B4(conditions);
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
                                                                            (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v9, v10) >= val;
  v15 = sub_1C37574(conditions);
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

  if ( (byte_4C46226 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4C46226 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1C372B4(conditions);
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

  if ( (byte_4C46227 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    byte_4C46227 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_13:
    sub_1C372B4(conditions);
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
                                                                            (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v9, v10) >= val;
  sub_1C37574(conditions);
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


bool BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__1(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEntity; // x0

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1C372B4(0);
  return FunctionEntity__GetAddStateBuffTypeFromFunction(funcEntity, 0) == type;
}


bool BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__2(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1C372B4(this);
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
  if ( (byte_4C46228 & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1C37058(&Method_System_Linq_Enumerable_Union_int___);
    byte_4C46228 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (task = v6->fields.task) == 0 )
    sub_1C372B4(this);
  actorIdlist = task->fields.actorIdlist;
  data = _4__this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C372BC(data);
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
                                                            (const MethodInfo_312C4C8 *)Method_System_Linq_Enumerable_Union_int___);
}


BattleServantData_o *BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0 )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0);
}