void __fastcall BattleLogicSkill___ctor(BattleLogicSkill_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicSkill__ExecuteShortenSkillBuff(
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
  BattleBuffData_BuffData_array *BuffList_42437664; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v15; // w24
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x23

  if ( (byte_4A5DDDD & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5DDDD = 1;
  }
  if ( actSkillInfo && actSkillInfo->fields.type == 11 )
  {
    data = this->fields.data;
    if ( data )
    {
      ServantData = BattleData__getServantData(data, actorSvtUniqueId, 0LL);
      if ( !ServantData )
        return;
      buffData = ServantData->fields.buffData;
      v10 = ServantData;
      if ( !buffData )
        return;
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(v11, v10, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      BuffList_42437664 = BattleBuffData__getBuffList_42437664(buffData, 143, v11, 1, 0, 0LL, 0LL, 0LL);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_42437664, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_42437664 )
      {
        max_length = BuffList_42437664->max_length;
        index = actSkillInfo->fields.index;
        if ( max_length < 1 )
        {
          v16 = 0;
LABEL_21:
          data = (BattleData_o *)v10->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            BattleServantData__skillChageShorten(v10, v16, 0, index, 0LL, 0LL);
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
              sub_1B88814(data, actSkillInfo);
            v17 = &BuffList_42437664->obj.klass + (int)v15;
            v18 = (BattleBuffData_BuffData_o *)v17[4];
            if ( !v18 )
              break;
            if ( BattleBuffData_BuffData__CheckShortenSkillBuff((BattleBuffData_BuffData_o *)v17[4], index, 0LL) )
            {
              v16 += v18->fields.param;
              BattleBuffData_BuffData__UsedShortenSkillCountProgress(v18, index, 0LL);
            }
            else
            {
              BattleBuffData_BuffData__RevertUnused(v18, 1, 0LL);
            }
            max_length = BuffList_42437664->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1B8880C(data, actSkillInfo);
  }
}


int32_t __fastcall BattleLogicSkill__GetHitGimmickSkillId(
        BattleLogicSkill_o *this,
        System_Int32_array *rateArray,
        const MethodInfo *method)
{
  WeightRate_int__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  unsigned __int64 v8; // x21
  int32_t Next; // w1

  if ( (byte_4A5DDD9 & 1) == 0 )
  {
    sub_1B885B0(&Method_WeightRate_int___ctor__);
    sub_1B885B0(&Method_WeightRate_int__getData__);
    sub_1B885B0(&Method_WeightRate_int__getTotalWeight__);
    sub_1B885B0(&Method_WeightRate_int__setWeight__);
    sub_1B885B0(&WeightRate_int__TypeInfo);
    byte_4A5DDD9 = 1;
  }
  if ( !rateArray )
    return -1;
  v4 = (WeightRate_int__o *)sub_1B887FC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v4, (const MethodInfo_38DB260 *)Method_WeightRate_int___ctor__);
  v7 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1B88814(v5, v6);
      if ( !v4 )
        break;
      WeightRate_int___setWeight(
        v4,
        rateArray->m_Items[v8 + 1],
        v8,
        (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
      LODWORD(v7) = rateArray->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_12;
    }
LABEL_13:
    sub_1B8880C(v5, v6);
  }
  if ( !v4 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v4->fields.totalweight, 0LL);
  return WeightRate_int___getData(v4, Next, (const MethodInfo_38DABF0 *)Method_WeightRate_int__getData__);
}


System_Collections_Generic_List_BattleLogicTask__o *__fastcall BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
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
  int32_t v13; // w3
  __int64 v14; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *v17; // x19
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
  int32_t v30; // w3
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
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x22
  System_Func_object__object__o *v43; // x23
  __int64 v44; // x8
  void *v45; // x21
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x21
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  BattleSkillInfoData_o *v59; // x22
  System_Int32_array *v60; // x0
  __int64 v61; // x1
  System_Collections_Generic_IEnumerable_T__o *v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  BattleLogicSkill___c_c *v67; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v69; // x21
  struct BattleLogicSkill___c_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  const MethodInfo *v74; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5DDD1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Union_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
    sub_1B885B0(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_1B885B0(&System_Func_int__BattleServantData__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&System_Func_DataVals__Target_TYPE__TypeInfo);
    sub_1B885B0(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__);
    sub_1B885B0(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__);
    sub_1B885B0(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__);
    sub_1B885B0(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
    sub_1B885B0(&BattleLogicSkill___c_TypeInfo);
    byte_4A5DDD1 = 1;
  }
  v9 = sub_1B887FC(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_75;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = task;
  v14 = v9 + 24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)task, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v18 = Method_System_Array_Empty_int___;
  v19 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v19 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v19 = v18[7];
  }
  v20 = *(_QWORD *)(v19 + 16);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BDA48C(v20);
  if ( !*(_DWORD *)(v20 + 224) )
    j_il2cpp_runtime_class_init_0(v20);
  v10 = *(__int64 **)(v18[7] + 16LL);
  if ( (*((_BYTE *)v10 + 309) & 1) == 0 )
    v10 = (__int64 *)sub_1BDA48C(v10);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o **)v10[23];
  v22 = *v21;
  if ( ptTargetArray )
  {
    v10 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v21,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_2EBC408 *)Method_System_Linq_Enumerable_Union_int___);
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( enemyTargetArray )
  {
    v10 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v22,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_2EBC408 *)Method_System_Linq_Enumerable_Union_int___);
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_75;
  v10 = *(__int64 **)(*(_QWORD *)v14 + 72LL);
  if ( !v10 )
    goto LABEL_75;
  if ( *((_DWORD *)v10 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v10, 0LL);
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
      _9__7_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v27,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v29, v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v25,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2EAFE24 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v32 = (System_Func_T1__T2__TResult__o *)sub_1B887FC(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v32,
      (Il2CppObject *)v9,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0LL);
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v31,
                                                                 (Il2CppObject *)v22,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v32,
                                                                 (const MethodInfo_2E8A348 *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v33 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v33,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0LL);
  v34 = System_Linq_Enumerable__Select_int__object_(
          v22,
          (System_Func_TSource__TResult__o *)v33,
          (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
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
    _9__7_3 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v38,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0LL);
    v39 = BattleLogicSkill___c_TypeInfo->static_fields;
    v39->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v39->__9__7_3, (int32_t)_9__7_3, v40, v41);
  }
  v42 = System_Linq_Enumerable__Where_object_(
          v36,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v43 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v43,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0LL);
  v10 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v42,
                     (System_Func_TSource__IEnumerable_TResult___o *)v43,
                     (const MethodInfo_2EB2990 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v10 )
LABEL_75:
    sub_1B8880C(v10, v11);
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
    v48 = sub_1BDA590(v10, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v50 = (*(__int64 (__fastcall **)(void *, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8));
  if ( !v50 )
    sub_1B8880C(0LL, v49);
  while ( 1 )
  {
    v51 = *(_QWORD *)v50;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_44;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_44:
      v54 = sub_1BDA590(v50, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
      break;
    v55 = *(_QWORD *)v50;
    v56 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v57 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_51;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_51:
      v58 = sub_1BDA590(v50, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v59 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v50, *(_QWORD *)(v58 + 8));
    v60 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
    if ( !v59 )
      sub_1B8880C(v60, v61);
    if ( !v60 )
      sub_1B8880C(0LL, v61);
    if ( !v60->max_length )
      sub_1B88814(v60, v61);
    v60->m_Items[1] = v59->fields.svtUniqueId;
    v62 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v59,
                                                           v60,
                                                           0LL,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           v74);
    if ( !v17 )
      sub_1B8880C(v62, v62);
    System_Collections_Generic_List_object___AddRange(
      v17,
      v62,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v63 = *(_QWORD *)v50;
  v64 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
  {
    v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_62;
    }
    v66 = v63 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_62:
    v66 = sub_1BDA590(v50, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v66)(v50, *(_QWORD *)(v66 + 8));
  v67 = BattleLogicSkill___c_TypeInfo;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v67 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_5 = (System_Func_object__int__o *)v67->static_fields->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = BattleLogicSkill___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v67->static_fields->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v69,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0LL);
    v70 = BattleLogicSkill___c_TypeInfo->static_fields;
    v70->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v70->__9__7_5, (int32_t)_9__7_5, v71, v72);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v17,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_2E6F7DC *)Method_BasicHelper_StableSort_BattleLogicTask___);
}


bool __fastcall BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
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

  if ( (byte_4A5DDDB & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass18_0__IsNotSkillCopyTargetIndividuality_b__0__);
    sub_1B885B0(&BattleLogicSkill___c__DisplayClass18_0_TypeInfo);
    byte_4A5DDDB = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actorIndividualities, 0LL) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                      (System_Collections_ICollection_o *)notSkillCopyTargetIndividualities,
                      0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !notSkillCopyTargetIndividualities )
        goto LABEL_16;
      if ( (int)notSkillCopyTargetIndividualities->max_length >= 1 )
      {
        v8 = 0LL;
        while ( 1 )
        {
          v9 = sub_1B887FC(BattleLogicSkill___c__DisplayClass18_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v9, 0LL);
          if ( v8 >= notSkillCopyTargetIndividualities->max_length )
            sub_1B88814(IsNullOrEmpty, v7);
          if ( !v9 )
            break;
          *(_DWORD *)(v9 + 16) = notSkillCopyTargetIndividualities->m_Items[v8 + 1];
          v10 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v10,
            (Il2CppObject *)v9,
            Method_BattleLogicSkill___c__DisplayClass18_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0LL);
          v11 = BasicHelper__Any_int__48671312(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v10,
                  (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
          if ( !v11 && (__int64)++v8 < (int)notSkillCopyTargetIndividualities->max_length )
            continue;
          return v11;
        }
LABEL_16:
        sub_1B8880C(IsNullOrEmpty, v7);
      }
    }
  }
  return 0;
}


BattleLogicTask_o *__fastcall BattleLogicSkill__MakeAddInvokeSkillTask(
        BattleLogicSkill_o *this,
        SkillLvMaster_o *skillLvMst,
        SkillLvEntity_o *skillLvEnt,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v8; // x23
  BattleLogicSkill_o *v9; // x20
  int32_t actortype; // w21
  int32_t v11; // w22
  BattleData_o *data; // x21
  bool isPlayerID; // w23
  int32_t data_high; // w20
  int32_t v15; // w24
  TempBattleSkillInfoData_o *v16; // x25

  v8 = this;
  if ( (byte_4A5DDD3 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1B885B0(&TempBattleSkillInfoData_TypeInfo);
    byte_4A5DDD3 = 1;
  }
  if ( !skillLvMst )
    goto LABEL_13;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetAddInvokeSkillLvEntity(skillLvMst, skillLvEnt, 0LL);
  if ( this )
  {
    if ( baseTask )
    {
      v9 = this;
      this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(baseTask, 0LL);
      if ( skillLvEnt )
      {
        actortype = baseTask->fields.actortype;
        v11 = (int)this;
        if ( SkillLvEntity__GetAddInvokeSkillActorType(skillLvEnt, 0LL) != 1 )
        {
          isPlayerID = 0;
          goto LABEL_12;
        }
        data = v8->fields.data;
        this = (BattleLogicSkill_o *)BattleLogicTask__getTarget(baseTask, 0LL);
        if ( data )
        {
          isPlayerID = BattleData__isPlayerID(data, (int32_t)this, 0LL);
          v11 = -1;
          actortype = 5;
LABEL_12:
          v15 = (int32_t)v9->fields.data;
          data_high = HIDWORD(v9->fields.data);
          v16 = (TempBattleSkillInfoData_o *)sub_1B887FC(TempBattleSkillInfoData_TypeInfo);
          TempBattleSkillInfoData___ctor(v16, v15, data_high, v11, 0LL);
          return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v16, actortype, isPlayerID, 0LL);
        }
      }
    }
LABEL_13:
    sub_1B8880C(this, skillLvMst);
  }
  return (BattleLogicTask_o *)this;
}


void __fastcall BattleLogicSkill__SetCommandSpellAddFunctionData(
        BattleLogicSkill_o *this,
        int32_t commandSpellId,
        System_Int32_array *targetIds,
        System_Collections_Generic_List_int__o *funcIdList,
        System_Collections_Generic_List_DataVals__o *dataValsList,
        const MethodInfo *method)
{
  BalanceConfig_c *v11; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  BattleData_o *IsQuestClear_37596684; // x0
  __int64 v14; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v16; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v19; // x22
  unsigned int v20; // w24
  AddSkillData_o *v21; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5DDDC & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    byte_4A5DDDC = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v11->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37596684 = (BattleData_o *)CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_37596684 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !targetIds->max_length )
      goto LABEL_30;
    IsQuestClear_37596684 = this->fields.data;
    if ( !IsQuestClear_37596684 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_37596684, targetIds->m_Items[1], 0LL);
    if ( !ServantData )
      return;
    v16 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0LL) )
    {
      return;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_37596684 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v16->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1B8880C(IsQuestClear_37596684, v14);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v19 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_37596684;
      v20 = 0;
      while ( v20 < max_length )
      {
        v21 = classBoardAddCommandSpells->m_Items[v20];
        if ( !v21 || !v19 )
          goto LABEL_29;
        IsQuestClear_37596684 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v19,
                                                  &entity,
                                                  v21->fields.id,
                                                  commandSpellId,
                                                  v21->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_37596684 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_37596684 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_37596684 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_37596684,
            (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v20 >= max_length )
          return;
      }
LABEL_30:
      sub_1B88814(IsQuestClear_37596684, v14);
    }
  }
}


bool __fastcall BattleLogicSkill__SetSkillCopyFunction(
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
  int32_t v22; // w3
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
  int32_t v33; // w3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Object_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  ServantStatusBattleListViewItem_o *v47; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v48; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v49; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v11 = skillLvEnt;
  v12 = this;
  if ( (byte_4A5DDDA & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__0__);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__1__);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__2__);
    this = (BattleLogicSkill_o *)sub_1B885B0(&BattleLogicSkill___c__DisplayClass17_0_TypeInfo);
    byte_4A5DDDA = 1;
  }
  if ( !copyFuncVals )
    goto LABEL_52;
  CopyTargetFunctionTypeArray = (System_Collections_ICollection_o *)DataVals__GetCopyTargetFunctionTypeArray(
                                                                      copyFuncVals,
                                                                      0LL);
  self = (System_Collections_ICollection_o *)DataVals__GetCopyTargetBuffTypeArray(copyFuncVals, 0LL);
  this = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetFuncIdArray(copyFuncVals, 0LL);
  data = v12->fields.data;
  if ( !data )
    goto LABEL_52;
  v14 = this;
  this = (BattleLogicSkill_o *)BattleData__getServantData(data, actorId, 0LL);
  if ( !v11 )
    goto LABEL_52;
  v15 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(v11, 0LL);
  actorIndividualities = v15 ? BattleServantData__getConcatServantAndBuffIndividualityies(v15, 0LL, 0, 0, 0, 0LL) : 0LL;
  v47 = (ServantStatusBattleListViewItem_o *)functionIdArray;
  v49 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v49,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v48 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v18 = 0LL;
  while ( (__int64)v18 < (int)funcId->max_length )
  {
    v19 = sub_1B887FC(BattleLogicSkill___c__DisplayClass17_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    v20 = v11->fields.funcId;
    if ( !v20 )
      goto LABEL_52;
    if ( v18 >= v20->max_length )
      goto LABEL_57;
    if ( !v19 )
      goto LABEL_52;
    *(_DWORD *)(v19 + 16) = v20->m_Items[v18 + 1];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0LL)
      || (v23 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v23,
            (Il2CppObject *)v19,
            Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__0__,
            0LL),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__48671312(
                                         (System_Int32_array *)v14,
                                         (System_Func_T__bool__o *)v23,
                                         (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v19 + 24) = 0LL;
      v24 = v19 + 24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 24), 0, v21, v22);
      if ( !v17 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v17,
                                     (Il2CppObject **)(v19 + 24),
                                     *(_DWORD *)(v19 + 16),
                                     (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v24 )
          goto LABEL_52;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v24 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v24 )
            goto LABEL_52;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v24 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v24 )
              goto LABEL_52;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v24 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v24 )
                goto LABEL_52;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v24 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v24 )
                  goto LABEL_52;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v24 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v25 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v25,
                        (Il2CppObject *)v19,
                        Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__1__,
                        0LL),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__48671312(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v25,
                                                     (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v18 >= SetTypeDataValArray->max_length )
LABEL_57:
                    sub_1B88814(this, skillLvEnt);
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v18];
                  if ( !this )
                    goto LABEL_52;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0LL);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v27);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v28 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v28,
                            (Il2CppObject *)v19,
                            Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__2__,
                            0LL),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__48671312(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v28,
                                                         (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816),
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
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v49,
                          (int32_t)skillLvEnt,
                          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v49->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)skillLvEnt;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v11, 0LL);
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
                      if ( (unsigned int)v36 >= v34->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v48,
                          (Il2CppObject *)skillLvEnt,
                          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v37 = &v34->obj.klass + v36;
                        v48->fields._size = v36 + 1;
                        v37[4] = (Il2CppClass *)skillLvEnt;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)skillLvEnt, v32, v33);
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
                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        v47->klass = (ServantStatusBattleListViewItem_c *)v38,
        sub_1B88554(v47, (int32_t)v38, v39, v40),
        (this = (BattleLogicSkill_o *)v48) == 0LL)
    || (v41 = System_Collections_Generic_List_object___ToArray(
                v48,
                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v41,
        sub_1B88554((ServantStatusBattleListViewItem_o *)dataValsArray, (int32_t)v41, v42, v43),
        !v47->klass) )
  {
LABEL_52:
    sub_1B8880C(this, skillLvEnt);
  }
  return LODWORD(v47->klass->_1.namespaze) != 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicSkill__actPassiveSkill(
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
  bool v16; // w20
  BattleServantData_o *ServantData; // x25
  bool v18; // w22
  Il2CppObject *Entity; // x0
  SkillEntity_o *v20; // x28
  SkillLvEntity_o *v21; // x27
  System_Int32_array *Individualities; // x29
  System_Int32_array *ActIndividuality; // x0
  ServantEntity_o *svtdata; // x29
  int32_t Rarity; // w0
  __int64 v26; // x26
  __int64 v27; // x29
  int32_t v28; // w0
  bool v29; // w28
  int32_t Timing_k__BackingField; // w21
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  int32_t type; // w8
  BattleLogicFunction_o *logicfunction; // x22
  System_Int32_array *funcId; // x23
  struct BattleBuffData_o *buffData; // x8
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x8
  int v37; // w9
  BattleData_o *data; // x20
  struct FunctionMaster_o *master; // x21
  Il2CppObject *klass; // x22
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  BattleLogicSkill_SkillExecArgs_o *v44; // [xsp+38h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v10 = this;
  if ( (byte_4A5DDD4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleServantData__TypeInfo);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__);
    this = (BattleLogicSkill_o *)sub_1B885B0(&BattleLogicSkill___c_TypeInfo);
    byte_4A5DDD4 = 1;
  }
  v44 = skillExecArgs;
  if ( !skillInfo )
    goto LABEL_43;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v12 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, bool, BattleLogicSkill_SkillExecArgs_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
          isShift,
          isDeckDataLoad,
          skillExecArgs,
          method);
  skilllv = skillInfo->fields.skilllv;
  v14 = v12;
  v15 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_43;
  v16 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_43;
  v18 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_43;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v14,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v20 = (SkillEntity_o *)Entity;
    if ( !SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
    {
      this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( this )
        {
          this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v14, skilllv, 0LL);
          v21 = (SkillLvEntity_o *)this;
          if ( skillInfo->fields.type == 12 )
          {
            if ( !ServantData )
              goto LABEL_43;
            Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 1, 0, 0LL);
            ActIndividuality = SkillEntity__getActIndividuality(v20, 0LL);
            if ( !Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
              return;
            svtdata = ServantData->fields.svtdata;
            Rarity = BattleServantData__getRarity(ServantData, 0LL);
            this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v21, svtdata, Rarity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return;
          }
          if ( v15 )
          {
            v15->fields.actorId = svtUniqueId;
            if ( ServantData )
            {
              v27 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
              v26 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v45.fields.currentCryptoKey = v27;
              *(_QWORD *)&v45.fields.fakeValue = v26;
              v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
              v15->fields.motionId = SkillEntity__GetMotionId(v20, v28, 0LL);
              v29 = v18;
              v15->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
              v15->fields.commandAssistId = skillInfo->fields.commandAssistId;
              v15->fields.cardIndex = skillInfo->fields.index;
              if ( v44 )
              {
                if ( !v44->fields._AllowUpdateFieldServantResultStatus_k__BackingField )
                  goto LABEL_24;
              }
              this = (BattleLogicSkill_o *)v10->fields.logic;
              if ( !this )
                goto LABEL_43;
              BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
              if ( v44 )
LABEL_24:
                Timing_k__BackingField = v44->fields._Timing_k__BackingField;
              else
                Timing_k__BackingField = 0;
              argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B887FC(BattleLogicFunction_FunctionArgument_TypeInfo);
              BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
              if ( argument )
              {
                type = skillInfo->fields.type;
                argument->fields.isDeckDataLoad = v16;
                argument->fields._SkillTiming_k__BackingField = Timing_k__BackingField;
                argument->fields.grantSkillType = type;
                if ( v21 )
                {
                  logicfunction = v10->fields.logicfunction;
                  funcId = v21->fields.funcId;
                  this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v21, 0LL);
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
                                                   v29,
                                                   0,
                                                   1,
                                                   1,
                                                   argument,
                                                   v21->fields.skillId,
                                                   0LL);
                    if ( !v44 || v44->fields._RemoveActorUnfixedBuff_k__BackingField )
                    {
                      buffData = ServantData->fields.buffData;
                      if ( !buffData )
                        goto LABEL_43;
                      unfixedBuffList = buffData->fields.unfixedBuffList;
                      if ( !unfixedBuffList )
                        goto LABEL_43;
                      v37 = unfixedBuffList->fields._version + 1;
                      unfixedBuffList->fields._size = 0;
                      unfixedBuffList->fields._version = v37;
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
                      master = (struct FunctionMaster_o *)sub_1B887FC(System_Action_BattleServantData__TypeInfo);
                      System_Action_object____ctor(
                        (System_Action_object__o *)master,
                        klass,
                        Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                        0LL);
                      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                      static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                      sub_1B88554(
                        (ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0,
                        (int32_t)master,
                        v42,
                        v43);
                    }
                    if ( data )
                    {
                      BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)master, 0LL);
                      this = (BattleLogicSkill_o *)v10->fields.logic;
                      if ( this )
                      {
                        BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_43:
      sub_1B8880C(this, skillInfo);
    }
  }
}


bool __fastcall BattleLogicSkill__checkConditions(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **text,
        const MethodInfo *method)
{
  __int64 v7; // x26
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 Instance; // x0
  __int64 v11; // x1
  SkillLvMaster_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
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
  int32_t v32; // w3

  if ( (byte_4A5DDD6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_1B885B0(&System_Func_string__int__bool__TypeInfo);
    sub_1B885B0(&System_Func_string__double__bool__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__0__);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__1__);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__2__);
    sub_1B885B0(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__3__);
    sub_1B885B0(&BattleLogicSkill___c__DisplayClass13_0_TypeInfo);
    sub_1B885B0(&StringLiteral_2987/*"BATTLE_SKILLERROR_NP_LOWER"*/);
    sub_1B885B0(&StringLiteral_2985/*"BATTLE_SKILLERROR_HP_LOWER"*/);
    sub_1B885B0(&StringLiteral_12256/*"STAR_HIGHER"*/);
    sub_1B885B0(&StringLiteral_7157/*"HP_PER_LOWER"*/);
    sub_1B885B0(&StringLiteral_2986/*"BATTLE_SKILLERROR_NP_HIGHER"*/);
    sub_1B885B0(&StringLiteral_2984/*"BATTLE_SKILLERROR_HP_HIGHER"*/);
    sub_1B885B0(&StringLiteral_7156/*"HP_PER_HIGHER"*/);
    sub_1B885B0(&StringLiteral_2988/*"BATTLE_SKILLERROR_STAR_HIGHER"*/);
    sub_1B885B0(&StringLiteral_9326/*"NP_HIGHER"*/);
    sub_1B885B0(&StringLiteral_2989/*"BATTLE_SKILLERROR_STAR_LOWER"*/);
    sub_1B885B0(&StringLiteral_7158/*"HP_VAL_HIGHER"*/);
    sub_1B885B0(&StringLiteral_12257/*"STAR_LOWER"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_9327/*"NP_LOWER"*/);
    sub_1B885B0(&StringLiteral_7159/*"HP_VAL_LOWER"*/);
    byte_4A5DDD6 = 1;
  }
  v7 = sub_1B887FC(BattleLogicSkill___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)text, (int32_t)StringLiteral_1/*""*/, v8, v9);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_47;
  v12 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v12 )
    goto LABEL_47;
  Instance = (__int64)SkillLvMaster__GetEntity(v12, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v7 )
    goto LABEL_47;
  v15 = *(_QWORD *)(Instance + 56);
  *(_QWORD *)(v7 + 16) = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), v15, v13, v14);
  v16 = *(System_Collections_Generic_Dictionary_object__object__o **)(v7 + 16);
  if ( !v16 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v16,
         (const MethodInfo_31C6E98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v17 = sub_1B887FC(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v17,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__0__,
    0LL);
  v18 = sub_1B887FC(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v18,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__1__,
    0LL);
  v19 = sub_1B887FC(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v19,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__2__,
    0LL);
  v20 = sub_1B887FC(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v20,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__3__,
    0LL);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0LL) )
    return 1;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)BattleData__getServantData((BattleData_o *)Instance, skillInfo->fields.svtUniqueId, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v21 = (BattleServantData_o *)Instance;
  Instance = BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v17 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v17 + 24))(
          *(_QWORD *)(v17 + 64),
          StringLiteral_9326/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v17 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_2986/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v21, 0LL);
  if ( !v18 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v18 + 24))(
               *(_QWORD *)(v18 + 64),
               StringLiteral_9327/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v18 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_2987/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v17 + 24))(
               *(_QWORD *)(v17 + 64),
               StringLiteral_12256/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v17 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_2988/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v23 = this->fields.data;
  if ( !v23 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v18 + 24))(
          *(_QWORD *)(v18 + 64),
          StringLiteral_12257/*"STAR_LOWER"*/,
          (unsigned int)v23->fields.totalCriticalStars,
          *(_QWORD *)(v18 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_2989/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v21, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v17 + 24))(
          *(_QWORD *)(v17 + 64),
          StringLiteral_7158/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v17 + 40)) & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = &StringLiteral_2984/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v25 = BattleServantData__getNowHp(v21, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v18 + 24))(
          *(_QWORD *)(v18 + 64),
          StringLiteral_7159/*"HP_VAL_LOWER"*/,
          v25,
          *(_QWORD *)(v18 + 40)) & 1) != 0 )
  {
    v26 = BattleServantData__getNowHp(v21, 0LL);
    Instance = BattleServantData__getMaxHp(v21, 0LL);
    if ( !v19 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v19 + 24))(
            *(_QWORD *)(v19 + 64),
            StringLiteral_7156/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v19 + 40),
            (double)v26 * 1000.0 / (double)(int)Instance) & 1) != 0 )
    {
      v27 = BattleServantData__getNowHp(v21, 0LL);
      Instance = BattleServantData__getMaxHp(v21, 0LL);
      if ( v20 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v20 + 24))(
                *(_QWORD *)(v20 + 64),
                StringLiteral_7157/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v20 + 40),
                (double)v27 * 1000.0 / (double)(int)Instance) & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1B8880C(Instance, v11);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = &StringLiteral_2985/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v30 = LocalizationManager__Get((System_String_o *)*v29, 0LL);
  *text = v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)text, (int32_t)v30, v31, v32);
  return 0;
}


BattleActionData_o *__fastcall BattleLogicSkill__createCommandSpell(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x22
  DataManager_o *skillId; // x0
  __int64 v7; // x1
  struct BattleSkillInfoData_o *skillInfo; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  DataManager_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  BattleActionData_c *v13; // x0
  struct System_Int32_array *ptTarget; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_int__o *v17; // x24
  System_Collections_Generic_List_object__o *v18; // x25
  const MethodInfo *v19; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v21; // x24
  System_Object_array *v22; // x25
  BattleActionData_o *v23; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v27; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_4A5DDD5 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionLogManagerInterface_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DDD5 = 1;
  }
  v5 = sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !task )
    goto LABEL_29;
  skillInfo = task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_29;
  skillId = (DataManager_o *)DataManager__GetMasterData_object_(
                               skillId,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_29;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v9 )
    goto LABEL_29;
  skillId = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                               v9,
                               (int32_t)skillId,
                               (const MethodInfo_311D934 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v5 )
    goto LABEL_29;
  v10 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0LL);
  *(_DWORD *)(v5 + 32) = -1;
  if ( !v10 )
    goto LABEL_29;
  *(_DWORD *)(v5 + 48) = HIDWORD(v10->fields.m_CancellationTokenSource);
  v13 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v13 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v5 + 56) = v13->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = task->fields.ptTarget;
  *(_QWORD *)(v5 + 40) = ptTarget;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)ptTarget, v11, v12);
  *(_QWORD *)(v5 + 144) = skillInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 144), (int32_t)skillInfo, v15, v16);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_29;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v17 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v17 )
    goto LABEL_29;
  System_Collections_Generic_List_int___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)v10->fields.lookup,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v10, 0LL);
  if ( !v18 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v10->fields.m_CachedPtr,
    task->fields.ptTarget,
    v17,
    (System_Collections_Generic_List_DataVals__o *)v18,
    v19);
  logicfunction = this->fields.logicfunction;
  v21 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  v22 = System_Collections_Generic_List_object___ToArray(
          v18,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !logicfunction )
    goto LABEL_29;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v5,
                               v21,
                               (DataVals_array *)v22,
                               0,
                               1,
                               0,
                               0,
                               0,
                               1,
                               1,
                               0LL,
                               (int32_t)skillId,
                               0LL);
  if ( !this->fields.logic )
    goto LABEL_29;
  v23 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_29;
  klass = actionLogManager->klass;
  v27 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v27;
      p_offset += 2;
      if ( !v27 )
        goto LABEL_22;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_22:
    p_method = sub_1BDA590(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
    actionLogManager,
    task,
    *(_QWORD *)(p_method + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v10, 0LL) > 0.0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      perf = logic->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v10, 0LL);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0LL);
        return v23;
      }
    }
LABEL_29:
    sub_1B8880C(skillId, v7);
  }
  return v23;
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  BattleLogic_o *logic; // x19
  BattleActionData_o *v5; // x0
  __int64 v6; // x1
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0LL;
  logic = this->fields.logic;
  v5 = BattleLogicSkill__createSkillData_43593328(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_1B8880C(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_43593328(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  BattleData_o *skillId; // x0
  BattleLogicSkill_Fields *p_fields; // x19
  BattleActionData_o *v13; // x22
  BattleActionData_o *v14; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  BattleBoostItemInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x22
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *v20; // x24
  BattleActionData_c *v21; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 methodPtr_low; // x10
  BattleData_o *data; // x26
  BattleData_o *v25; // x26
  SkillEntity_o *v26; // x23
  bool isForcedSkillSpeedOne; // w26
  bool v28; // w27
  BattleLogicSkill_o *v29; // x22
  BattleData_o *v30; // x29
  BattleServantData_o *EnemyServantData; // x0
  __int64 v32; // x28
  __int64 v33; // x29
  BattleData_o *v34; // x29
  struct System_Int32_array *ptTarget; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *Name; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  BattleLogicSkill_o *v45; // x29
  System_String_array *v46; // x26
  System_Object_array *v47; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  ServantStatusBattleListViewItem_o *p_motionMessage; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Int32_array *effectList; // x1
  int m_CancellationTokenSource; // w8
  DataVals_array *v55; // x26
  int i; // w9
  __int64 v57; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  bool v61; // w23
  int32_t ActorId; // w0
  const MethodInfo *v63; // x6
  bool v64; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  BattleLogicFunction_o *v68; // x29
  System_Int32_array *v69; // x27
  DataVals_array *v70; // x28
  int32_t v71; // w0
  UnityEngine_Object_o *battle_ent; // x28
  int32_t v73; // w27
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v80; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x1
  int32_t v86; // w1
  int32_t v87; // w2
  int32_t v88; // w3
  struct BattleCommandData_array **p_boostSkillInfo; // x27
  int32_t v90; // w2
  int32_t v91; // w3
  struct BattleCommandData_array *v92; // x1
  int32_t v93; // w1
  int32_t v94; // w2
  int32_t v95; // w3
  int32_t type; // w23
  BattleData_o *v97; // x25
  int v98; // w8
  BattleData_o *v99; // x25
  BattleData_o *v100; // x25
  BattleData_o *v101; // x27
  int32_t v102; // w28
  const MethodInfo *v103; // x5
  BattleLogic_o *v104; // x27
  BattleLogicTask_array *v105; // x0
  BattleData_o *v106; // x25
  const MethodInfo *v107; // x4
  int32_t v108; // w27
  BattleLogic_o *v109; // x25
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v111; // x23
  BattleData_o *v112; // x23
  BattleLogicTask_o *v113; // x23
  int32_t v114; // w2
  int32_t v115; // w3
  struct BattleLogic_o *v116; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattlePerformance_o *v119; // x8
  int32_t v120; // w2
  int32_t v121; // w3
  BattleLogicTask_o *v122; // x22
  int32_t v123; // w0
  const MethodInfo *v124; // x3
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-88h]
  DataVals_o *v127; // [xsp+40h] [xbp-80h]
  SkillEntity_o *Entity; // [xsp+48h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16

  if ( (byte_4A5DDD2 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_int___);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionLogManagerInterface_TypeInfo);
    sub_1B885B0(&BattleBoostItemInfoData_TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&CheckUpdateShiftTask_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DDD2 = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  p_fields = &this->fields;
  skillId = this->fields.data;
  if ( !skillId )
    goto LABEL_162;
  BattleData__ResetWasAttackTargetId(skillId, 0LL);
  skillId = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_162;
  BattleData__ResetFunctionedFunctionIds(skillId, 0LL);
  v13 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_162;
  v14 = BattleActionData__AddDisplayTriggerIntervalBuff(v13, task, 0LL);
  *baseActionData = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)baseActionData, (int32_t)v14, v15, v16);
  if ( !task )
    goto LABEL_162;
  if ( !v14 )
    goto LABEL_162;
  v14->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  skillId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_162;
  skillId = (BattleData_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)skillId,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_162;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                              skillInfo,
                              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v18 )
    goto LABEL_162;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v18,
                              (int32_t)skillId,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_162;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillId,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                              skillInfo,
                              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_162;
  skillLvMst = (SkillLvMaster_o *)MasterData_object;
  skillId = (BattleData_o *)SkillLvMaster__GetEntity(
                              (SkillLvMaster_o *)MasterData_object,
                              (int32_t)skillId,
                              skillInfo->fields.skilllv,
                              0LL);
  v20 = (SkillLvEntity_o *)skillId;
  v14->fields.isCounter = task->fields.isCounter;
  v21 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v21 = BattleActionData_TypeInfo;
  }
  static_fields = v21->static_fields;
  v14->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleActionData_TypeInfo->static_fields;
    }
    v14->fields.type = static_fields->TYPE_BOOSTSKILL;
    v14->fields.imageId = skillInfo->fields.itemImageId;
    methodPtr_low = LOBYTE(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      skillId = (BattleData_o *)BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( ((unsigned __int8)skillId & 1) != 0 )
        v14->fields.noOperation = 1;
    }
  }
  if ( !task->fields.checkAlive )
    goto LABEL_26;
  data = p_fields->data;
  skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_162;
  skillId = (BattleData_o *)BattleData__getServantData(data, (int32_t)skillId, 0LL);
  if ( !skillId
    || (skillId = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)skillId, 0, 0LL),
        v25 = 0LL,
        ((unsigned __int8)skillId & 1) != 0) )
  {
LABEL_26:
    v127 = baseVals;
    if ( task->fields.isForcedSpeedOne )
    {
      v26 = Entity;
      isForcedSkillSpeedOne = 1;
    }
    else
    {
      v26 = Entity;
      if ( !Entity )
        goto LABEL_162;
      if ( !SkillEntity__isForcedSkillSpeedOne(Entity, 0LL) )
        goto LABEL_33;
      skillId = p_fields->data;
      if ( !p_fields->data )
        goto LABEL_162;
      if ( BattleData__checkEnablePlaySpeedOneFromSkillIdList(skillId, Entity->fields.id, 0LL) )
        isForcedSkillSpeedOne = SkillEntity__isForcedSkillSpeedOne(Entity, 0LL);
      else
LABEL_33:
        isForcedSkillSpeedOne = 0;
    }
    v28 = fromSkillCopyFunc;
    v29 = this;
    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
    v14->fields.actorId = (int)skillId;
    if ( !v20 )
      goto LABEL_162;
    v30 = p_fields->data;
    skillId = (BattleData_o *)SkillLvEntity__GetActNpcServantId(v20, 0LL);
    if ( !v30 )
      goto LABEL_162;
    EnemyServantData = BattleData__getEnemyServantData(v30, (int32_t)skillId, 0LL);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v32 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v131.fields.currentCryptoKey = v32;
      *(_QWORD *)&v131.fields.fakeValue = v33;
      v14->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v131, 0LL);
    }
    v34 = p_fields->data;
    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v34 )
      goto LABEL_162;
    skillId = (BattleData_o *)BattleData__getServantId(v34, (int32_t)skillId, 0LL);
    if ( !v26 )
      goto LABEL_162;
    v14->fields.motionId = SkillEntity__GetMotionId(v26, (int32_t)skillId, 0LL);
    v14->fields.targetId = BattleLogicTask__getTarget(task, 0LL);
    ptTarget = task->fields.ptTarget;
    v14->fields.pttargetIds = ptTarget;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.pttargetIds, (int32_t)ptTarget, v36, v37);
    Name = SkillEntity__getName(v26, 0LL);
    v14->fields.skillMessage = Name;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.skillMessage, (int32_t)Name, v39, v40);
    v14->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.skillInfo, (int32_t)skillInfo, v41, v42);
    v14->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
    v14->fields.checkRevengeId = task->fields.checkRevengeId;
    v45 = v29;
    if ( BattleLogicTask__IsGimmick(task, 0LL) )
    {
      skillId = p_fields->data;
      if ( !p_fields->data )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleData__GetGimmickStartVoiceArray(skillId, 0LL);
      if ( !p_fields->data )
        goto LABEL_162;
      v46 = (System_String_array *)skillId;
      skillId = (BattleData_o *)BattleData__GetGimmickResultVoiceArray(p_fields->data, 0LL);
      if ( !p_fields->data )
        goto LABEL_162;
      v47 = (System_Object_array *)skillId;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(p_fields->data, 0LL);
      BattleActionData__SetGimmickData(v14, task->fields.gimmickIndexArray, v46, v47, GimmickAnimTypeArray, 0LL);
      v45 = v29;
    }
    motionMessage = task->fields.motionMessage;
    if ( motionMessage && motionMessage->fields._stringLength >= 1 )
    {
      v14->fields.motionMessage = motionMessage;
      p_motionMessage = (ServantStatusBattleListViewItem_o *)&v14->fields.motionMessage;
    }
    else
    {
      v14->fields.motionMessage = 0LL;
      p_motionMessage = (ServantStatusBattleListViewItem_o *)&v14->fields.motionMessage;
      LODWORD(motionMessage) = 0;
    }
    sub_1B88554(p_motionMessage, (int32_t)motionMessage, v43, v44);
    if ( (task->fields.actortype | 4) == 5 )
      BattleActionData__setStateField(v14, 0LL);
    effectList = v26->fields.effectList;
    v14->fields.effectlist = effectList;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.effectlist, (int32_t)effectList, v51, v52);
    skillId = (BattleData_o *)v45->fields.logic;
    if ( !skillId )
      goto LABEL_162;
    BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
    if ( skillInfo->fields.type == 21 )
    {
      skillId = (BattleData_o *)SkillLvEntity__getDataValsList(v20, 0LL);
      if ( !skillId )
        goto LABEL_162;
      m_CancellationTokenSource = (int)skillId->fields.m_CancellationTokenSource;
      v55 = (DataVals_array *)skillId;
      if ( m_CancellationTokenSource >= 1 )
      {
        for ( i = 0; i != m_CancellationTokenSource; ++i )
        {
          if ( m_CancellationTokenSource == i )
            sub_1B88814(skillId, task);
          v57 = *((_QWORD *)&skillId->fields.rootfsm + i);
          if ( !v57 )
            goto LABEL_162;
          *(_BYTE *)(v57 + 72) = 1;
        }
      }
      logicfunction = v45->fields.logicfunction;
      funcId = v20->fields.funcId;
      skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !logicfunction )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleLogicFunction__procList(
                                  logicfunction,
                                  v14,
                                  funcId,
                                  v55,
                                  1,
                                  1,
                                  0,
                                  0,
                                  0,
                                  1,
                                  1,
                                  0LL,
                                  (int32_t)skillId,
                                  0LL);
      v25 = skillId;
      goto LABEL_88;
    }
    changeTDCommandType = skillInfo->fields.changeTDCommandType;
    if ( (changeTDCommandType & 0x80000000) == 0 )
      v14->fields.commandType = changeTDCommandType;
    functionIdArray = v20->fields.funcId;
    dataValsArray = SkillLvEntity__getDataValsList(v20, 0LL);
    v61 = v127 == 0LL || !v28;
    if ( v127 != 0LL && v28 )
    {
      ActorId = BattleLogicTask__getActorId(task, 0LL);
      v25 = 0LL;
      if ( !BattleLogicSkill__SetSkillCopyFunction(v45, v20, v127, &functionIdArray, &dataValsArray, ActorId, v63) )
        return (BattleActionData_o *)v25;
      skillId = p_fields->data;
      if ( !p_fields->data )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleData__isEnemyID(skillId, v14->fields.actorId, 0LL);
      if ( ((unsigned __int8)skillId & 1) != 0 )
      {
        if ( !p_fields->data )
          goto LABEL_162;
        v64 = p_fields->data->fields.currentTurn == 0;
      }
      else
      {
        v64 = 0;
      }
      v14->fields.isReversalShortBuffTurn = v64;
    }
    if ( skillInfo->fields.type == 1 )
    {
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B887FC(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
      if ( !argument )
        goto LABEL_162;
      argument->fields.grantSkillType = skillInfo->fields.type;
      if ( !task->fields.isSideEffectTriggerSkill )
        goto LABEL_84;
    }
    else
    {
      if ( !task->fields.isSideEffectTriggerSkill )
      {
        p_isShowBattlePointEffect = &task->fields.isShowBattlePointEffect;
        if ( !task->fields.isShowBattlePointEffect )
        {
          argument = 0LL;
          goto LABEL_86;
        }
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B887FC(BattleLogicFunction_FunctionArgument_TypeInfo);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( !argument )
          goto LABEL_162;
        goto LABEL_85;
      }
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B887FC(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
    }
    overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1B887FC(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(
        (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
        0LL);
    }
    if ( !argument )
      goto LABEL_162;
    BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(argument, overwriteFuncSideEffectArg, 0LL);
LABEL_84:
    p_isShowBattlePointEffect = &task->fields.isShowBattlePointEffect;
    if ( !task->fields.isShowBattlePointEffect )
    {
LABEL_86:
      v68 = v45->fields.logicfunction;
      v70 = dataValsArray;
      v69 = functionIdArray;
      skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v68 )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleLogicFunction__procList(
                                  v68,
                                  v14,
                                  v69,
                                  v70,
                                  0,
                                  1,
                                  0,
                                  0,
                                  0,
                                  v61,
                                  1,
                                  argument,
                                  (int32_t)skillId,
                                  0LL);
      v25 = skillId;
      v45 = v29;
LABEL_88:
      if ( task->fields.actortype == 5 )
      {
        if ( !v25 )
          goto LABEL_162;
        v71 = BasicHelper__IndexValue_int__48686580(
                *(System_Collections_Generic_List_T__o **)&v25->fields.maxEnemyIndex,
                0,
                0,
                (const MethodInfo_2E6E5F4 *)Method_BasicHelper_IndexValue_int___);
        battle_ent = (UnityEngine_Object_o *)v25->fields.battle_ent;
        v73 = v71;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillId = (BattleData_o *)UnityEngine_Object__op_Equality(battle_ent, 0LL, 0LL);
        if ( v73 >= 1 && ((unsigned __int8)skillId & 1) != 0 )
        {
          logic = v45->fields.logic;
          if ( !logic )
            goto LABEL_162;
          skillId = (BattleData_o *)logic->fields.perf;
          if ( !skillId )
            goto LABEL_162;
          ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)skillId, v73, 0LL);
          v25->fields.battle_ent = (struct BattleEntity_o *)ServantGameObject;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v25->fields.battle_ent,
            (int32_t)ServantGameObject,
            v76,
            v77);
        }
      }
      ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
        skillInfo,
        skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
      BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
      skillId = (BattleData_o *)v45->fields.logic;
      if ( skillId )
      {
        BattleLogic__updateConditionsBuffAll((BattleLogic_o *)skillId, 0LL);
        if ( v25 )
        {
          BYTE4(v25->fields.quest_ent) = 0;
          skillId = p_fields->data;
          if ( p_fields->data )
          {
            BattleData__setCommandAttack(skillId, 0, 0, 0LL);
            if ( p_fields->data )
            {
              actionLogManager = p_fields->data->fields.actionLogManager;
              if ( actionLogManager )
              {
                klass = actionLogManager->klass;
                v80 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
                {
                  p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
                  while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
                  {
                    --v80;
                    p_offset += 2;
                    if ( !v80 )
                      goto LABEL_106;
                  }
                  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
                }
                else
                {
LABEL_106:
                  p_method = sub_1BDA590(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL);
                }
                (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
                  actionLogManager,
                  task,
                  *(_QWORD *)(p_method + 8));
                if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v25, 0LL) )
                {
                  masterSkillInfo = v25->fields.masterSkillInfo;
                  v25->fields.draw_commandlist = (struct BattleCommandData_array *)masterSkillInfo;
                  sub_1B88554(
                    (ServantStatusBattleListViewItem_o *)&v25->fields.draw_commandlist,
                    (int32_t)masterSkillInfo,
                    v83,
                    v84);
                  v86 = (int)StringLiteral_1/*""*/;
                  v25->fields.masterSkillInfo = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)StringLiteral_1/*""*/;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->fields.masterSkillInfo, v86, v87, v88);
                  p_boostSkillInfo = (struct BattleCommandData_array **)&v25->fields.boostSkillInfo;
                  if ( !System_String__IsNullOrEmpty((System_String_o *)v25->fields.boostSkillInfo, 0LL) )
                  {
                    v92 = *p_boostSkillInfo;
                    v25->fields.draw_commandlist = *p_boostSkillInfo;
                    sub_1B88554(
                      (ServantStatusBattleListViewItem_o *)&v25->fields.draw_commandlist,
                      (int32_t)v92,
                      v90,
                      v91);
                    v93 = (int)StringLiteral_1/*""*/;
                    *p_boostSkillInfo = (struct BattleCommandData_array *)StringLiteral_1/*""*/;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->fields.boostSkillInfo, v93, v94, v95);
                  }
                }
                type = skillInfo->fields.type;
                v97 = p_fields->data;
                skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
                if ( v97 )
                {
                  skillId = (BattleData_o *)BattleData__getServantData(v97, (int32_t)skillId, 0LL);
                  if ( type == 1 || skillId )
                  {
                    skillId = (BattleData_o *)SkillLvEntity__IsNoTargetSkipSkill(v20, 0LL);
                    v98 = (unsigned __int8)skillId & 1;
                  }
                  else
                  {
                    v98 = 1;
                  }
                  if ( (v98 & !v25->fields.turnElapsedEndBattleFlag) != 0
                    || BYTE1(v25->fields.p_entryid) && !BYTE2(v25->fields.p_entryid) )
                  {
                    return 0LL;
                  }
                  if ( task->fields.isCanCounterTask )
                  {
                    v99 = p_fields->data;
                    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
                    if ( !v99 )
                      goto LABEL_162;
                    skillId = (BattleData_o *)BattleData__getServantData(v99, (int32_t)skillId, 0LL);
                    if ( skillId )
                    {
                      v100 = skillId;
                      (*(void (__fastcall **)(BattleData_o *, struct BattleData_o *, void *))&v25->klass[1]._1.byval_arg.bits)(
                        v25,
                        p_fields->data,
                        v25->klass[1]._1.this_arg.data);
                      skillId = *(BattleData_o **)&v25->fields.maxEnemyIndex;
                      if ( !skillId )
                        goto LABEL_162;
                      v101 = p_fields->data;
                      v102 = (int32_t)v100->fields.m_CancellationTokenSource;
                      skillId = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                                  (System_Collections_Generic_List_int__o *)skillId,
                                                  (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
                      if ( !v101 )
                        goto LABEL_162;
                      BattleData__SetWasAttackTargetIdList(v101, v102, (System_Int32_array *)skillId, 0LL);
                      v104 = v45->fields.logic;
                      if ( !v104 )
                        goto LABEL_162;
                      skillId = (BattleData_o *)v104->fields.logicnomal;
                      if ( !skillId )
                        goto LABEL_162;
                      v105 = BattleLogicNomal__taskCounterFunc(
                               (BattleLogicNomal_o *)skillId,
                               p_fields->data,
                               HIBYTE(v100->fields.commandCodeInfos) == 0,
                               1,
                               0,
                               v103);
                      BattleLogic__addBattleLogicTask(v104, v105, 0LL);
                    }
                  }
                  v106 = p_fields->data;
                  if ( task->fields.isFunctionedFunction )
                  {
                    if ( !v106 )
                      goto LABEL_162;
                    BattleData__ResetFunctionedFunctionIds(p_fields->data, 0LL);
                  }
                  else
                  {
                    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
                    if ( !*(_QWORD *)&v25->fields.maxEnemyIndex )
                      goto LABEL_162;
                    v108 = (int)skillId;
                    skillId = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                                *(System_Collections_Generic_List_int__o **)&v25->fields.maxEnemyIndex,
                                                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
                    if ( !v106 )
                      goto LABEL_162;
                    BattleData__SetFunctionedTargetIdArray(v106, v108, (System_Int32_array *)skillId, 0LL);
                    v109 = v45->fields.logic;
                    if ( !v109 )
                      goto LABEL_162;
                    FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                                        v45->fields.logic,
                                                        p_fields->data,
                                                        0LL);
                    BattleLogic__addBattleLogicTask(v109, FunctionedFunctionBuffTaskArray, 0LL);
                  }
                  v111 = BattleLogicSkill__MakeAddInvokeSkillTask(v45, skillLvMst, v20, task, v107);
                  skillId = (BattleData_o *)SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v20, 0LL);
                  if ( v45->fields.logic )
                  {
                    if ( ((unsigned __int8)skillId & 1) != 0 )
                      BattleLogic__AddTaskTargetTaskAfter(v45->fields.logic, task, v111, 0LL);
                    else
                      BattleLogic__AddBattleLogicTask(v45->fields.logic, v111, 0LL);
                    v112 = p_fields->data;
                    skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                skillInfo,
                                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
                    if ( v112 )
                    {
                      BattleData__AddUseSkillId(v112, (int32_t)skillId, 0LL);
                      if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v25, 0LL) )
                      {
                        v113 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
                        BattleLogicTask___ctor(v113, 0LL);
                        if ( !v113 )
                          goto LABEL_162;
                        BattleLogicTask__setCheckEntryFunction(v113, 0LL);
                        skillId = (BattleData_o *)v45->fields.logic;
                        if ( !skillId )
                          goto LABEL_162;
                        BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, v113, 0LL);
                      }
                      if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0 )
                      {
                        skillId = (BattleData_o *)SkillEntity__getSkillCutInId(Entity, 0LL);
                        if ( !(_DWORD)skillId )
                        {
                          v116 = v45->fields.logic;
                          if ( !v116 )
                            goto LABEL_162;
                          perf = v116->fields.perf;
                          CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
                          if ( !perf )
                            goto LABEL_162;
                          BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
                          if ( v25->fields.masterSkillInfo )
                          {
                            if ( !p_fields->data )
                              goto LABEL_162;
                            v119 = p_fields->data->fields.perf;
                            if ( !v119 )
                              goto LABEL_162;
                            skillId = (BattleData_o *)v119->fields.infoComp;
                            if ( !skillId )
                              goto LABEL_162;
                            BattleInformationComponent__showCommonMessage(
                              (BattleInformationComponent_o *)skillId,
                              (BattleActionData_o *)v25,
                              0LL);
                            v25->fields.masterSkillInfo = 0LL;
                            sub_1B88554(
                              (ServantStatusBattleListViewItem_o *)&v25->fields.masterSkillInfo,
                              0,
                              v120,
                              v121);
                            BYTE4(v25->fields.e_entryid) = 1;
                          }
                        }
                      }
                      if ( task->fields.IsNotShowSkillMessage )
                      {
                        v25->fields.masterSkillInfo = 0LL;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->fields.masterSkillInfo, 0, v114, v115);
                        BYTE4(v25->fields.e_entryid) = 1;
                      }
                      if ( SkillEntity__IsCheckUpdateShiftServant(Entity, 0LL) )
                      {
                        v122 = (BattleLogicTask_o *)sub_1B887FC(CheckUpdateShiftTask_TypeInfo);
                        BattleLogicTask___ctor(v122, 0LL);
                        v122->fields.actiontype = 68;
                        skillId = (BattleData_o *)v45->fields.logic;
                        if ( !skillId )
                          goto LABEL_162;
                        BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)skillId, task, v122, 0LL);
                      }
                      v123 = BattleLogicTask__getActorId(task, 0LL);
                      BattleLogicSkill__ExecuteShortenSkillBuff(v45, (BattleSkillInfoData_o *)skillInfo, v123, v124);
                      return (BattleActionData_o *)v25;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_162:
      sub_1B8880C(skillId, task);
    }
LABEL_85:
    argument->fields.isShowBattlePointEffect = *p_isShowBattlePointEffect;
    goto LABEL_86;
  }
  return (BattleActionData_o *)v25;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getGimmickTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v4; // x20
  BattleData_o *v5; // x21
  const MethodInfo *v6; // x2
  int32_t HitGimmickSkillId; // w0
  unsigned int v8; // w22
  __int64 v9; // x21
  __int64 v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  BattleData_o *v13; // x8
  System_Int32_array *v14; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  BattleData_o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v20; // x0

  if ( (byte_4A5DDD8 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask___TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5DDD8 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__GetGimmickSkillIdArray(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v4 = data;
  data = (BattleData_o *)BattleData__GetGimmickSkillRateArray(this->fields.data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v5 = data;
  data = (BattleData_o *)BattleData__GetReelIconArray(this->fields.data, 0LL);
  if ( !v4 )
    goto LABEL_26;
  if ( !v4->fields.m_CancellationTokenSource )
    return 0LL;
  if ( !v5 )
    goto LABEL_26;
  if ( !v5->fields.m_CancellationTokenSource )
    return 0LL;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.m_CancellationTokenSource )
    return 0LL;
  HitGimmickSkillId = BattleLogicSkill__GetHitGimmickSkillId((BattleLogicSkill_o *)data, (System_Int32_array *)v5, v6);
  if ( (HitGimmickSkillId & 0x80000000) != 0 )
    return 0LL;
  v8 = HitGimmickSkillId;
  v9 = sub_1B887FC(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_26;
  *(_DWORD *)(v9 + 24) = -1;
  *(_QWORD *)(v9 + 16) = 20LL;
  if ( v8 >= LODWORD(v4->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 376LL))(
    v9,
    *((unsigned int *)&v4->fields.rootfsm + v8),
    *(_QWORD *)(*(_QWORD *)v9 + 384LL));
  *(_DWORD *)(v9 + 36) = 1;
  v10 = sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v10, 0LL);
  data = (BattleData_o *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v8;
  if ( !v10 )
    goto LABEL_26;
  *(_QWORD *)(v10 + 136) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 136), (int32_t)data, v11, v12);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v13 = this->fields.data) == 0LL)
    || (v14 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v13, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v10,
          (BattleSkillInfoData_o *)v9,
          v14,
          FieldPlayerServantIDList,
          0,
          0,
          0LL),
        BattleLogicTask__setActor((BattleLogicTask_o *)v10, 5, -1, 0LL),
        (data = (BattleData_o *)sub_1B88658(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1B8880C(data, method);
  }
  v16 = data;
  data = (BattleData_o *)sub_1B886EC(v10, data->klass->_1.element_class);
  if ( !data )
  {
    v20 = sub_1B88830(0LL);
    sub_1B886D8(v20, 0LL);
  }
  if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1B88814(data, method);
  v16->fields.rootfsm = (struct PlayMakerFSM_o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->fields.rootfsm, v10, v17, v18);
  return (BattleLogicTask_array *)v16;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getQuestBehaviorSkillTask(
        BattleLogicSkill_o *this,
        const MethodInfo *method)
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
  System_Int32_array *v17; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A5DDD7 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestBehaviorMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DDD7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !MasterData_object )
    return 0LL;
  v6 = (QuestBehaviorMaster_o *)MasterData_object;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v7 = (int)Instance;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  BattleSkill = QuestBehaviorMaster__getBattleSkill(v6, v7, Phase, 0LL);
  if ( !BattleSkill )
    return 0LL;
  v10 = BattleSkill;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( (int)v10->max_length >= 1 )
  {
    v12 = 0LL;
    m_Items = v10->m_Items;
    while ( 1 )
    {
      v14 = sub_1B887FC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v14, 0LL);
      if ( !v14 )
        break;
      *(_DWORD *)(v14 + 24) = -1;
      *(_QWORD *)(v14 + 16) = 20LL;
      if ( (unsigned int)v12 >= v10->max_length )
        goto LABEL_29;
      Instance = (DataManager_o *)m_Items[v12];
      if ( !Instance )
        break;
      v15 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0LL);
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 376LL))(
                                    v14,
                                    v15,
                                    *(_QWORD *)(*(_QWORD *)v14 + 384LL));
      if ( (unsigned int)v12 >= v10->max_length )
LABEL_29:
        sub_1B88814(Instance, v4);
      Instance = (DataManager_o *)m_Items[v12];
      if ( !Instance )
        break;
      *(_DWORD *)(v14 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
      v16 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v16, 0LL);
      if ( !v16 )
        break;
      BattleLogicTask__setActor(v16, 5, -1, 0LL);
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
      if ( !this->fields.data )
        break;
      v17 = (System_Int32_array *)Instance;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
      BattleLogicTask__setActionSkill(v16, (BattleSkillInfoData_o *)v14, v17, FieldPlayerServantIDList, 0, 0, 0LL);
      BattleLogicTask__setActor(v16, 5, -1, 0LL);
      if ( !v11 )
        break;
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v16,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v16, v19, v20);
      }
      if ( (int)++v12 >= (signed int)v10->max_length )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1B8880C(Instance, v4);
  }
  if ( !v11 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSkill__taskCommandSpell(
        BattleLogicSkill_o *this,
        int32_t skillId,
        int32_t skillLv,
        System_Int32_array *ptTargetList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x21
  BattleLogicTask_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  const MethodInfo *v18; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_4A5DDD0 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDD0 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, 0LL);
  if ( !v9
    || (BattleLogicTask__setCommandSpell(v9, skillId, 0LL, ptTargetList, 0LL), !v8)
    || (items = v8->fields._items,
        v15 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
    sub_1B8880C(v10, v11);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v9, v12, v13);
  }
  SkillTargetedBeforeFunctionSkill = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                                                                                      this,
                                                                                      v9,
                                                                                      ptTargetList,
                                                                                      0LL,
                                                                                      v18);
  System_Collections_Generic_List_object___InsertRange(
    v8,
    0,
    SkillTargetedBeforeFunctionSkill,
    (const MethodInfo_34FE818 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSkill__taskSkill(
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
  __int64 data; // x0
  __int64 svtUniqueId; // x1
  BattleServantData_o *v21; // x25
  System_Int32_array *v22; // x2
  struct BattleData_o *v23; // x8
  int32_t globaltargetId; // w29
  BattleLogicTarget_o *v25; // x21
  int32_t v26; // w29
  BattleLogicTarget_o *logictarget; // x29
  int32_t v28; // w21
  int32_t TargetAiAct; // w21
  bool isPlayerID; // w0
  int32_t v31; // w2
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_object__o *v39; // x24
  __int64 v40; // x8
  __int64 v41; // x25
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  const MethodInfo *v45; // x4
  __int64 v46; // x1
  __int64 v47; // x25
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  BattleSkillInfoData_o *v56; // x26
  System_Int32_array *v57; // x0
  __int64 v58; // x1
  System_Collections_Generic_IEnumerable_T__o *v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  BattleLogicSkill___c_c *v64; // x0
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v66; // x21
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_Collections_Generic_IEnumerable_T__o *v70; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]

  if ( (byte_4A5DDCF & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_BattleLogicTask___);
    sub_1B885B0(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_BattleLogicSkill___c__taskSkill_b__5_0__);
    sub_1B885B0(&BattleLogicSkill___c_TypeInfo);
    byte_4A5DDCF = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v18 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v18, 0LL);
  if ( !skillInfo )
    goto LABEL_94;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_94;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0LL);
  v21 = (BattleServantData_o *)data;
  if ( data )
  {
    data = BattleSkillInfoData__isServantSkill(skillInfo, 0LL);
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
    v22 = enemyTargetList;
    if ( !v18 )
      goto LABEL_94;
    goto LABEL_28;
  }
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId != -1 )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    data = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    if ( (data & 1) == 0 )
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_94;
      logictarget = this->fields.logictarget;
      v28 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !logictarget )
        goto LABEL_94;
      TargetAiAct = BattleLogicTarget__getTargetAiAct(
                      logictarget,
                      1,
                      v28,
                      0LL,
                      (System_Int32_array *)data,
                      1,
                      0,
                      0LL,
                      0LL,
                      (bool)&dword_0 + 1,
                      0LL);
      data = sub_1B88658(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_94;
      v22 = (System_Int32_array *)data;
      if ( *(_DWORD *)(data + 24) )
      {
        *(_DWORD *)(data + 32) = TargetAiAct;
        enemyTargetList = 0LL;
        if ( !v18 )
          goto LABEL_94;
        goto LABEL_28;
      }
LABEL_96:
      sub_1B88814(data, svtUniqueId);
    }
  }
  v23 = this->fields.data;
  if ( !v23 )
    goto LABEL_94;
  globaltargetId = v23->fields.globaltargetId;
  if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0LL) )
  {
    v25 = this->fields.logictarget;
    v26 = skillInfo->fields.svtUniqueId;
    data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
    if ( !v25 )
      goto LABEL_94;
    globaltargetId = BattleLogicTarget__getGlobalTargetId(v25, v26, v26 == -1, (System_Int32_array *)data, 0LL);
    enemyTargetList = 0LL;
  }
  data = sub_1B88658(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_94;
  v22 = (System_Int32_array *)data;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_96;
  *(_DWORD *)(data + 32) = globaltargetId;
  if ( !v18 )
    goto LABEL_94;
LABEL_28:
  BattleLogicTask__setActionSkill(v18, skillInfo, v22, ptTargetList, checkAlive, checkRevengeId, 0LL);
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v32 = 1;
    v31 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    v31 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v32 = 2;
    else
      v32 = 3;
  }
  BattleLogicTask__setActor(v18, v32, v31, 0LL);
  if ( !v17
    || (items = v17->fields._items,
        v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v17->fields._version,
        !items) )
  {
LABEL_94:
    sub_1B8880C(data, svtUniqueId);
  }
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    if ( !v21 )
      goto LABEL_47;
  }
  else
  {
    v38 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v18, v33, v34);
    if ( !v21 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v39 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v39,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v39 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v21, this->fields.data, 0LL);
  if ( !data )
    goto LABEL_94;
  v40 = *(_QWORD *)data;
  v41 = data;
  v42 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
  if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v43 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_46;
    }
    v44 = v40 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_46:
    v44 = sub_1BDA590(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
  if ( !v47 )
    sub_1B8880C(0LL, v46);
  while ( 1 )
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_55;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_55:
      v51 = sub_1BDA590(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v54 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_62;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_62:
      v55 = sub_1BDA590(v47, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v56 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    v57 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
    if ( !v56 )
      sub_1B8880C(v57, v58);
    if ( !v57 )
      sub_1B8880C(0LL, v58);
    if ( !v57->max_length )
      sub_1B88814(v57, v58);
    v57->m_Items[1] = v56->fields.svtUniqueId;
    v59 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v56,
                                                           v57,
                                                           0LL,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           isDeadToEnableUpHate);
    if ( !v39 )
      sub_1B8880C(v59, v59);
    System_Collections_Generic_List_object___AddRange(
      v39,
      v59,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v60 = *(_QWORD *)v47;
  v61 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_73;
    }
    v63 = v60 + 16LL * *v62 + 312;
  }
  else
  {
LABEL_73:
    v63 = sub_1BDA590(v47, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v63)(v47, *(_QWORD *)(v63 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v39 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v17,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_81;
  }
  if ( !v39 )
    goto LABEL_48;
LABEL_79:
  data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(this, v18, ptTargetList, enemyTargetList, v45);
  if ( !v39 )
    goto LABEL_94;
  System_Collections_Generic_List_object___AddRange(
    v39,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v39,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
  {
    v64 = BattleLogicSkill___c_TypeInfo;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v64 = BattleLogicSkill___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__int__o *)v64->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v64 = BattleLogicSkill___c_TypeInfo;
      }
      v66 = (Il2CppObject *)v64->static_fields->__9;
      _9__5_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v66, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v68, v69);
    }
    v70 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v39,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_2E6F7DC *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v17,
      0,
      v70,
      (const MethodInfo_34FE818 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicSkill_SkillExecArgs___ctor(BattleLogicSkill_SkillExecArgs_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill_SkillExecArgs__get_AllowUpdateFieldServantResultStatus(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._AllowUpdateFieldServantResultStatus_k__BackingField;
}


bool __fastcall BattleLogicSkill_SkillExecArgs__get_RemoveActorUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._RemoveActorUnfixedBuff_k__BackingField;
}


bool __fastcall BattleLogicSkill_SkillExecArgs__get_RemoveAllUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._RemoveAllUnfixedBuff_k__BackingField;
}


int32_t __fastcall BattleLogicSkill_SkillExecArgs__get_Timing(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._Timing_k__BackingField;
}


void __fastcall BattleLogicSkill_SkillExecArgs__set_AllowUpdateFieldServantResultStatus(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._AllowUpdateFieldServantResultStatus_k__BackingField = value;
}


void __fastcall BattleLogicSkill_SkillExecArgs__set_RemoveActorUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RemoveActorUnfixedBuff_k__BackingField = value;
}


void __fastcall BattleLogicSkill_SkillExecArgs__set_RemoveAllUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RemoveAllUnfixedBuff_k__BackingField = value;
}


void __fastcall BattleLogicSkill_SkillExecArgs__set_Timing(
        BattleLogicSkill_SkillExecArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Timing_k__BackingField = value;
}


void __fastcall BattleLogicSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DDDE & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicSkill___c_TypeInfo);
    byte_4A5DDDE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleLogicSkill___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall BattleLogicSkill___c___ctor(BattleLogicSkill___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill___c___GetSkillTargetedBeforeFunctionSkill_b__7_0(
        BattleLogicSkill___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.targetType;
}


bool __fastcall BattleLogicSkill___c___GetSkillTargetedBeforeFunctionSkill_b__7_3(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x && x->fields.isEntry;
}


int32_t __fastcall BattleLogicSkill___c___GetSkillTargetedBeforeFunctionSkill_b__7_5(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0LL )
    sub_1B8880C(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1B8880C(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0LL )
    sub_1B8880C(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c__DisplayClass13_0___ctor(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__0(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5DDDF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4A5DDDF = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B8880C(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v8, &result, 0LL) )
    return (int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__1(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleLogicSkill___c__DisplayClass13_0_o *v12; // x0
  System_String_o *v13; // x1
  const MethodInfo *v14; // x2
  long double v15; // q0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5DDE0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5DDE0 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1B8880C(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v8, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v9, v10) >= val;
  v15 = sub_1B88ACC(conditions);
  return BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__2(v12, v13, *(double *)&v15, v14);
}


bool __fastcall BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5DDE1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4A5DDE1 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B8880C(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v8, &result, 0LL) )
    return (double)(int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__3(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleLogicSkill___c__DisplayClass17_0_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5DDE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5DDE2 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1B8880C(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v8, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v9, v10) >= val;
  sub_1B88ACC(conditions);
  return BattleLogicSkill___c__DisplayClass17_0___SetSkillCopyFunction_b__0(v12, v13, v14);
}


void __fastcall BattleLogicSkill___c__DisplayClass17_0___ctor(
        BattleLogicSkill___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass17_0___SetSkillCopyFunction_b__0(
        BattleLogicSkill___c__DisplayClass17_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.funcId == x;
}


bool __fastcall BattleLogicSkill___c__DisplayClass17_0___SetSkillCopyFunction_b__1(
        BattleLogicSkill___c__DisplayClass17_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEntity; // x0

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1B8880C(0LL, type);
  return FunctionEntity__GetAddStateBuffTypeFromFunction(funcEntity, 0LL) == type;
}


bool __fastcall BattleLogicSkill___c__DisplayClass17_0___SetSkillCopyFunction_b__2(
        BattleLogicSkill___c__DisplayClass17_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1B8880C(this, type);
  return funcEntity->fields.funcType == type;
}


void __fastcall BattleLogicSkill___c__DisplayClass18_0___ctor(
        BattleLogicSkill___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass18_0___IsNotSkillCopyTargetIndividuality_b__0(
        BattleLogicSkill___c__DisplayClass18_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.individuality == x;
}


void __fastcall BattleLogicSkill___c__DisplayClass7_0___ctor(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__1(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        System_Collections_Generic_IEnumerable_int__o *current,
        int32_t targetType,
        const MethodInfo *method)
{
  BattleLogicSkill___c__DisplayClass7_0_o *v6; // x21
  struct BattleLogicSkill_o *_4__this; // x8
  BattleData_o *data; // x21
  int32_t ActorId; // w0
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds; // x1

  v6 = this;
  if ( (byte_4A5DDE3 & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1B885B0(&Method_System_Linq_Enumerable_Union_int___);
    byte_4A5DDE3 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)v6->fields.task) == 0LL )
    sub_1B8880C(this, current);
  data = _4__this->fields.data;
  ActorId = BattleLogicTask__getActorId((BattleLogicTask_o *)this, 0LL);
  TargetIds = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds(
                                                                     data,
                                                                     ActorId,
                                                                     -1,
                                                                     -1,
                                                                     targetType,
                                                                     0LL,
                                                                     0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Union_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                            TargetIds,
                                                            (const MethodInfo_2EBC408 *)Method_System_Linq_Enumerable_Union_int___);
}


BattleServantData_o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0LL )
    sub_1B8880C(this, uniqueId);
  return BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
}


System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__4(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleLogicTask_o *task; // x8

  task = this->fields.task;
  if ( !task || !svtData )
    sub_1B8880C(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0LL);
}