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
  BattleBuffData_BuffData_array *BuffList_43764944; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v15; // w24
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x23

  if ( (byte_4BDF317 & 1) == 0 )
  {
    sub_1C21E38(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4BDF317 = 1;
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
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C22084(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43953980(v11, v10, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      BuffList_43764944 = BattleBuffData__getBuffList_43764944(buffData, 143, v11, 1, 0, 0LL, 0LL, 0LL);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_43764944, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_43764944 )
      {
        max_length = BuffList_43764944->max_length;
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
              sub_1C2209C(data, actSkillInfo);
            v17 = &BuffList_43764944->obj.klass + (int)v15;
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
            max_length = BuffList_43764944->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1C22094(data, actSkillInfo);
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

  if ( (byte_4BDF313 & 1) == 0 )
  {
    sub_1C21E38(&Method_WeightRate_int___ctor__);
    sub_1C21E38(&Method_WeightRate_int__getData__);
    sub_1C21E38(&Method_WeightRate_int__getTotalWeight__);
    sub_1C21E38(&Method_WeightRate_int__setWeight__);
    sub_1C21E38(&WeightRate_int__TypeInfo);
    byte_4BDF313 = 1;
  }
  if ( !rateArray )
    return -1;
  v4 = (WeightRate_int__o *)sub_1C22084(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v4, (const MethodInfo_3A353C4 *)Method_WeightRate_int___ctor__);
  v7 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1C2209C(v5, v6);
      if ( !v4 )
        break;
      WeightRate_int___setWeight(
        v4,
        rateArray->m_Items[v8 + 1],
        v8,
        (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
      LODWORD(v7) = rateArray->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_12;
    }
LABEL_13:
    sub_1C22094(v5, v6);
  }
  if ( !v4 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v4->fields.totalweight, 0LL);
  return WeightRate_int___getData(v4, Next, (const MethodInfo_3A34D54 *)Method_WeightRate_int__getData__);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x25
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x19
  long double inited; // q0
  _QWORD *v27; // x24
  __int64 v28; // x8
  __int64 v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x24
  DataVals_array *DataValArray; // x0
  BattleLogicSkill___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x22
  System_Func_T__TResult__o *_9__7_0; // x23
  Il2CppObject *v36; // x25
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x22
  System_Func_T1__T2__TResult__o *v45; // x23
  System_Func_T__TResult__o *v46; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v47; // x0
  BattleLogicSkill___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x22
  System_Func_object__bool__o *_9__7_3; // x23
  Il2CppObject *v51; // x24
  struct BattleLogicSkill___c_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x22
  System_Func_object__object__o *v60; // x23
  __int64 v61; // x8
  void *v62; // x21
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x21
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  BattleSkillInfoData_o *v76; // x22
  System_Int32_array *v77; // x0
  __int64 v78; // x1
  System_Collections_Generic_IEnumerable_T__o *v79; // x0
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  BattleLogicSkill___c_c *v84; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v86; // x21
  struct BattleLogicSkill___c_StaticFields *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  const MethodInfo *v95; // [xsp+8h] [xbp-68h]

  if ( (byte_4BDF309 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C21E38(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
    sub_1C21E38(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_1C21E38(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C21E38(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C21E38(&System_Func_DataVals__Target_TYPE__TypeInfo);
    sub_1C21E38(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__);
    sub_1C21E38(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__);
    sub_1C21E38(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__);
    sub_1C21E38(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
    sub_1C21E38(&BattleLogicSkill___c_TypeInfo);
    byte_4BDF309 = 1;
  }
  v9 = sub_1C22084(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  BattleLogicSkill___c__DisplayClass7_0___ctor((BattleLogicSkill___c__DisplayClass7_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_75;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = task;
  v18 = v9 + 24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)task, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v27 = Method_System_Array_Empty_int___;
  v28 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v28 )
  {
    sub_1C73D70(Method_System_Array_Empty_int___);
    v28 = v27[7];
  }
  v29 = *(_QWORD *)(v28 + 16);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v29 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v29);
  v10 = *(__int64 **)(v27[7] + 16LL);
  if ( (*((_BYTE *)v10 + 309) & 1) == 0 )
    v10 = (__int64 *)sub_1C73D14(inited);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o **)v10[23];
  v31 = *v30;
  if ( ptTargetArray )
  {
    v10 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v30,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_2FEDA84 *)Method_System_Linq_Enumerable_Union_int___);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( enemyTargetArray )
  {
    v10 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v31,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_2FEDA84 *)Method_System_Linq_Enumerable_Union_int___);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  }
  if ( !*(_QWORD *)v18 )
    goto LABEL_75;
  v10 = *(__int64 **)(*(_QWORD *)v18 + 72LL);
  if ( !v10 )
    goto LABEL_75;
  if ( *((_DWORD *)v10 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v10, 0LL);
    v33 = BattleLogicSkill___c_TypeInfo;
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v33 = BattleLogicSkill___c_TypeInfo;
    }
    _9__7_0 = (System_Func_T__TResult__o *)v33->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = BattleLogicSkill___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__7_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v36,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v34,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2FE0FD0 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v45 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v45,
      (Il2CppObject *)v9,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0LL);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v44,
                                                                 (Il2CppObject *)v31,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v45,
                                                                 (const MethodInfo_2FB8310 *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v46 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v46,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0LL);
  v47 = System_Linq_Enumerable__Select_int__object_(
          v31,
          (System_Func_TSource__TResult__o *)v46,
          (const MethodInfo_2FDEEE4 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v48 = BattleLogicSkill___c_TypeInfo;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v48 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_3 = (System_Func_object__bool__o *)v48->static_fields->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = BattleLogicSkill___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v48->static_fields->__9;
    _9__7_3 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v51,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0LL);
    v52 = BattleLogicSkill___c_TypeInfo->static_fields;
    v52->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v52->__9__7_3, (int64_t)_9__7_3, v53, v54, v55, v56, v57, v58);
  }
  v59 = System_Linq_Enumerable__Where_object_(
          v49,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v60 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v60,
    (Il2CppObject *)v9,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0LL);
  v10 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v59,
                     (System_Func_TSource__IEnumerable_TResult___o *)v60,
                     (const MethodInfo_2FE3B3C *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v10 )
LABEL_75:
    sub_1C22094(v10, v11);
  v61 = *v10;
  v62 = v10;
  v63 = *(unsigned __int16 *)(*v10 + 302);
  if ( *(_WORD *)(*v10 + 302) )
  {
    v64 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v64 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_37;
    }
    v65 = v61 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_37:
    v65 = sub_1C73E18(v10, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v67 = (*(__int64 (__fastcall **)(void *, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
  if ( !v67 )
    sub_1C22094(0LL, v66);
  while ( 1 )
  {
    v68 = *(_QWORD *)v67;
    v69 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v70 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_44;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_44:
      v71 = sub_1C73E18(v67, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8)) & 1) == 0 )
      break;
    v72 = *(_QWORD *)v67;
    v73 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v74 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v73;
        v74 += 4;
        if ( !v73 )
          goto LABEL_51;
      }
      v75 = v72 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_51:
      v75 = sub_1C73E18(v67, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v76 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v67, *(_QWORD *)(v75 + 8));
    v77 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
    if ( !v76 )
      sub_1C22094(v77, v78);
    if ( !v77 )
      sub_1C22094(0LL, v78);
    if ( !v77->max_length )
      sub_1C2209C(v77, v78);
    v77->m_Items[1] = v76->fields.svtUniqueId;
    v79 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v76,
                                                           v77,
                                                           0LL,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           v95);
    if ( !v25 )
      sub_1C22094(v79, v79);
    System_Collections_Generic_List_object___AddRange(
      v25,
      v79,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v80 = *(_QWORD *)v67;
  v81 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
  {
    v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
    {
      --v81;
      v82 += 4;
      if ( !v81 )
        goto LABEL_62;
    }
    v83 = v80 + 16LL * *v82 + 312;
  }
  else
  {
LABEL_62:
    v83 = sub_1C73E18(v67, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v83)(v67, *(_QWORD *)(v83 + 8));
  v84 = BattleLogicSkill___c_TypeInfo;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v84 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_5 = (System_Func_object__int__o *)v84->static_fields->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      v84 = BattleLogicSkill___c_TypeInfo;
    }
    v86 = (Il2CppObject *)v84->static_fields->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v86,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0LL);
    v87 = BattleLogicSkill___c_TypeInfo->static_fields;
    v87->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v87->__9__7_5, (int64_t)_9__7_5, v88, v89, v90, v91, v92, v93);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v25,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_2F9FA54 *)Method_BasicHelper_StableSort_BattleLogicTask___);
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
  BattleLogicSkill___c__DisplayClass20_0_o *v9; // x21
  System_Func_int__bool__o *v10; // x22
  bool v11; // w0

  if ( (byte_4BDF315 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int____77629760);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__);
    sub_1C21E38(&BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
    byte_4BDF315 = 1;
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
          v9 = (BattleLogicSkill___c__DisplayClass20_0_o *)sub_1C22084(BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
          BattleLogicSkill___c__DisplayClass20_0___ctor(v9, 0LL);
          if ( v8 >= notSkillCopyTargetIndividualities->max_length )
            sub_1C2209C(IsNullOrEmpty, v7);
          if ( !v9 )
            break;
          v9->fields.individuality = notSkillCopyTargetIndividualities->m_Items[v8 + 1];
          v10 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v10,
            (Il2CppObject *)v9,
            Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0LL);
          v11 = BasicHelper__Any_int__49916656(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v10,
                  (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760);
          if ( !v11 && (__int64)++v8 < (int)notSkillCopyTargetIndividualities->max_length )
            continue;
          return v11;
        }
LABEL_16:
        sub_1C22094(IsNullOrEmpty, v7);
      }
    }
  }
  return 0;
}


bool __fastcall BattleLogicSkill__IsSkillAvailable(
        BattleSkillInfoData_o *skillInfo,
        System_String_o **messageNotAvailable,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x20
  int64_t *v22; // x8
  int64_t v23; // x1
  System_String_o *IfExists; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDF310 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_3034/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/);
    sub_1C21E38(&StringLiteral_3033/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/);
    byte_4BDF310 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *messageNotAvailable = static_fields->Empty;
  sub_1C21DDC((PartyOrganizationUtility_o *)messageNotAvailable, (int64_t)Empty, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !skillInfo )
    goto LABEL_16;
  if ( BattleSkillInfoData__isChargeOK(skillInfo, 0LL) )
  {
    if ( BattleSkillInfoData__IsOpenCond(skillInfo, 0LL) )
      return 1;
    v12 = sub_1C21EE0(string___TypeInfo, 1LL);
    if ( v12 )
    {
      v21 = v12;
      if ( *(_DWORD *)(v12 + 24) )
      {
        v22 = &StringLiteral_3034/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/;
        goto LABEL_13;
      }
LABEL_17:
      sub_1C2209C(v12, v13);
    }
LABEL_16:
    sub_1C22094(v12, v13);
  }
  v12 = sub_1C21EE0(string___TypeInfo, 1LL);
  if ( !v12 )
    goto LABEL_16;
  v21 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_17;
  v22 = &StringLiteral_3033/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/;
LABEL_13:
  v23 = *v22;
  *(_QWORD *)(v21 + 32) = *v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 32), v23, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v21, 0LL);
  *messageNotAvailable = IfExists;
  sub_1C21DDC((PartyOrganizationUtility_o *)messageNotAvailable, (int64_t)IfExists, v25, v26, v27, v28, v29, v30);
  return 0;
}


bool __fastcall BattleLogicSkill__IsSkillExecutable(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **messageNotExecutable,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3

  if ( (byte_4BDF30E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF30E = 1;
  }
  *messageNotExecutable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)messageNotExecutable,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)messageNotExecutable,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  return BattleLogicSkill__IsSkillAvailable(skillInfo, messageNotExecutable, v11)
      && BattleLogicSkill__checkConditions(this, skillInfo, messageNotExecutable, v12);
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
  if ( (byte_4BDF30B & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1C21E38(&TempBattleSkillInfoData_TypeInfo);
    byte_4BDF30B = 1;
  }
  if ( !skillLvMst )
    goto LABEL_14;
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
        if ( SkillLvEntity__GetAddInvokeSkillActorType(skillLvEnt, 0LL) == 1 )
        {
          data = v8->fields.data;
          this = (BattleLogicSkill_o *)BattleLogicTask__getTarget(baseTask, 0LL);
          if ( !data )
            goto LABEL_14;
          isPlayerID = BattleData__isPlayerID(data, (int32_t)this, 0LL);
          v11 = -1;
          actortype = 5;
        }
        else
        {
          isPlayerID = 0;
        }
        v15 = (int32_t)v9->fields.data;
        data_high = HIDWORD(v9->fields.data);
        v16 = (TempBattleSkillInfoData_o *)sub_1C22084(TempBattleSkillInfoData_TypeInfo);
        TempBattleSkillInfoData___ctor(v16, v15, data_high, v11, 0LL);
        this = (BattleLogicSkill_o *)BattleLogicTask__CloneSkillTask(
                                       baseTask,
                                       (BattleSkillInfoData_o *)v16,
                                       actortype,
                                       isPlayerID,
                                       0LL);
        if ( this )
          return BattleLogicTask__SetInheritParamToAddInvokeSkillTask((BattleLogicTask_o *)this, baseTask, 0LL);
      }
    }
LABEL_14:
    sub_1C22094(this, skillLvMst);
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
  BattleData_o *IsQuestClear_38834244; // x0
  __int64 v14; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v16; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v19; // x22
  unsigned int v20; // w24
  AddSkillData_o *v21; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF316 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    byte_4BDF316 = 1;
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
  IsQuestClear_38834244 = (BattleData_o *)CondType__IsQuestClear_38834244(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_38834244 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !targetIds->max_length )
      goto LABEL_30;
    IsQuestClear_38834244 = this->fields.data;
    if ( !IsQuestClear_38834244 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_38834244, targetIds->m_Items[1], 0LL);
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
    IsQuestClear_38834244 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v16->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1C22094(IsQuestClear_38834244, v14);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v19 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_38834244;
      v20 = 0;
      while ( v20 < max_length )
      {
        v21 = classBoardAddCommandSpells->m_Items[v20];
        if ( !v21 || !v19 )
          goto LABEL_29;
        IsQuestClear_38834244 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v19,
                                                  &entity,
                                                  v21->fields.id,
                                                  commandSpellId,
                                                  v21->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_38834244 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_38834244 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_38834244 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_38834244,
            (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v20 >= max_length )
          return;
      }
LABEL_30:
      sub_1C2209C(IsQuestClear_38834244, v14);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Func_int__bool__o *v27; // x27
  __int64 v28; // x27
  System_Func_int__bool__o *v29; // x27
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v31; // x3
  System_Func_int__bool__o *v32; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  System_Int32_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Object_array *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  PartyOrganizationUtility_o *v63; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v64; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v65; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v11 = skillLvEnt;
  v12 = this;
  if ( (byte_4BDF314 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int____77629760);
    sub_1C21E38(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C21E38(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__);
    this = (BattleLogicSkill_o *)sub_1C21E38(&BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    byte_4BDF314 = 1;
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
  v63 = (PartyOrganizationUtility_o *)functionIdArray;
  v65 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v64 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v18 = 0LL;
  while ( (__int64)v18 < (int)funcId->max_length )
  {
    v19 = sub_1C22084(BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    BattleLogicSkill___c__DisplayClass19_0___ctor((BattleLogicSkill___c__DisplayClass19_0_o *)v19, 0LL);
    v20 = v11->fields.funcId;
    if ( !v20 )
      goto LABEL_52;
    if ( v18 >= v20->max_length )
      goto LABEL_57;
    if ( !v19 )
      goto LABEL_52;
    *(_DWORD *)(v19 + 16) = v20->m_Items[v18 + 1];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0LL)
      || (v27 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v27,
            (Il2CppObject *)v19,
            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__,
            0LL),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__49916656(
                                         (System_Int32_array *)v14,
                                         (System_Func_T__bool__o *)v27,
                                         (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v19 + 24) = 0LL;
      v28 = v19 + 24;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 24), 0LL, v21, v22, v23, v24, v25, v26);
      if ( !v17 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v17,
                                     (Il2CppObject **)(v19 + 24),
                                     *(_DWORD *)(v19 + 16),
                                     (const MethodInfo_325BE14 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v28 )
          goto LABEL_52;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v28 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v28 )
            goto LABEL_52;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v28 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v28 )
              goto LABEL_52;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v28 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v28 )
                goto LABEL_52;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v28 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v28 )
                  goto LABEL_52;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v28 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v29 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v29,
                        (Il2CppObject *)v19,
                        Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__,
                        0LL),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__49916656(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v29,
                                                     (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v18 >= SetTypeDataValArray->max_length )
LABEL_57:
                    sub_1C2209C(this, skillLvEnt);
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
                                                 v31);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v32 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v32,
                            (Il2CppObject *)v19,
                            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__,
                            0LL),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__49916656(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v32,
                                                         (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v65;
                      if ( !v65 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*(unsigned int *)(v19 + 16);
                      items = v65->fields._items;
                      v34 = Method_System_Collections_Generic_List_int__Add__;
                      ++v65->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v65->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v65,
                          (int32_t)skillLvEnt,
                          *(const MethodInfo_3632090 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v65->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)skillLvEnt;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v11, 0LL);
                      if ( !this )
                        goto LABEL_52;
                      if ( v18 >= LODWORD(this->fields.logic) )
                        goto LABEL_57;
                      if ( !v64 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*((_QWORD *)&this->fields.logictarget + v18);
                      v42 = v64->fields._items;
                      v43 = Method_System_Collections_Generic_List_DataVals__Add__;
                      ++v64->fields._version;
                      if ( !v42 )
                        goto LABEL_52;
                      v44 = v64->fields._size;
                      if ( (unsigned int)v44 >= v42->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v64,
                          (Il2CppObject *)skillLvEnt,
                          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v45 = &v42->obj.klass + v44;
                        v64->fields._size = v44 + 1;
                        v45[4] = (Il2CppClass *)skillLvEnt;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)(v45 + 4),
                          (int64_t)skillLvEnt,
                          v36,
                          v37,
                          v38,
                          v39,
                          v40,
                          v41);
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
  this = (BattleLogicSkill_o *)v65;
  if ( !v65
    || (v46 = System_Collections_Generic_List_int___ToArray(
                v65,
                (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        v63->klass = (PartyOrganizationUtility_c *)v46,
        sub_1C21DDC(v63, (int64_t)v46, v47, v48, v49, v50, v51, v52),
        (this = (BattleLogicSkill_o *)v64) == 0LL)
    || (v53 = System_Collections_Generic_List_object___ToArray(
                v64,
                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v53,
        sub_1C21DDC((PartyOrganizationUtility_o *)dataValsArray, (int64_t)v53, v54, v55, v56, v57, v58, v59),
        !v63->klass) )
  {
LABEL_52:
    sub_1C22094(this, skillLvEnt);
  }
  return LODWORD(v63->klass->_1.namespaze) != 0;
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
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  bool v47; // [xsp+3Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  v10 = this;
  if ( (byte_4BDF30C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattleServantData__TypeInfo);
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C21E38(&Individuality_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__);
    this = (BattleLogicSkill_o *)sub_1C21E38(&BattleLogicSkill___c_TypeInfo);
    byte_4BDF30C = 1;
  }
  if ( !skillInfo )
    goto LABEL_45;
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
  v15 = (BattleActionData_o *)sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_45;
  v47 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  v17 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v14,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v19 = (SkillEntity_o *)Entity;
  if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
    return;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v14, skilllv, 0LL);
  v20 = (SkillLvEntity_o *)this;
  if ( skillInfo->fields.type != 12 )
    goto LABEL_48;
  if ( !ServantData )
    goto LABEL_45;
  Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 1, 0, 0LL);
  ActIndividuality = SkillEntity__getActIndividuality(v19, 0LL);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  if ( Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
  {
    svtdata = ServantData->fields.svtdata;
    Rarity = BattleServantData__getRarity(ServantData, 0LL);
    this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v20, svtdata, Rarity, 0LL);
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
          *(_QWORD *)&v48.fields.currentCryptoKey = v26;
          *(_QWORD *)&v48.fields.fakeValue = v25;
          v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v48, 0LL);
          v15->fields.motionId = SkillEntity__GetMotionId(v19, v27, 0LL);
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
          BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
          if ( skillExecArgs )
LABEL_26:
            Timing_k__BackingField = skillExecArgs->fields._Timing_k__BackingField;
          else
            Timing_k__BackingField = 0;
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C22084(BattleLogicFunction_FunctionArgument_TypeInfo);
          BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
          if ( argument )
          {
            type = skillInfo->fields.type;
            argument->fields.isDeckDataLoad = v47;
            argument->fields._SkillTiming_k__BackingField = Timing_k__BackingField;
            argument->fields.grantSkillType = type;
            if ( v20 )
            {
              logicfunction = v10->fields.logicfunction;
              funcId = v20->fields.funcId;
              this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v20, 0LL);
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
                                               0LL);
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
                  master = (struct FunctionMaster_o *)sub_1C22084(System_Action_BattleServantData__TypeInfo);
                  System_Action_object____ctor(
                    (System_Action_object__o *)master,
                    klass,
                    Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                    0LL);
                  static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                  static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
                    (int64_t)master,
                    v41,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46);
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
LABEL_45:
      sub_1C22094(this, skillInfo);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 Instance; // x0
  __int64 v15; // x1
  SkillLvMaster_o *v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  System_Collections_Generic_Dictionary_object__object__o *v24; // x0
  __int64 v25; // x25
  __int64 v26; // x24
  __int64 v27; // x23
  __int64 v28; // x22
  BattleServantData_o *v29; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v31; // x8
  unsigned int NowHp; // w0
  unsigned int v33; // w0
  int32_t v34; // w20
  int32_t v35; // w20
  __int64 *v37; // x8
  System_String_o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4BDF30F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_1C21E38(&System_Func_string__int__bool__TypeInfo);
    sub_1C21E38(&System_Func_string__double__bool__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__);
    sub_1C21E38(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__);
    sub_1C21E38(&BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
    sub_1C21E38(&StringLiteral_3029/*"BATTLE_SKILLERROR_NP_LOWER"*/);
    sub_1C21E38(&StringLiteral_3027/*"BATTLE_SKILLERROR_HP_LOWER"*/);
    sub_1C21E38(&StringLiteral_12494/*"STAR_HIGHER"*/);
    sub_1C21E38(&StringLiteral_7334/*"HP_PER_LOWER"*/);
    sub_1C21E38(&StringLiteral_3028/*"BATTLE_SKILLERROR_NP_HIGHER"*/);
    sub_1C21E38(&StringLiteral_3026/*"BATTLE_SKILLERROR_HP_HIGHER"*/);
    sub_1C21E38(&StringLiteral_7333/*"HP_PER_HIGHER"*/);
    sub_1C21E38(&StringLiteral_3030/*"BATTLE_SKILLERROR_STAR_HIGHER"*/);
    sub_1C21E38(&StringLiteral_9520/*"NP_HIGHER"*/);
    sub_1C21E38(&StringLiteral_3031/*"BATTLE_SKILLERROR_STAR_LOWER"*/);
    sub_1C21E38(&StringLiteral_7335/*"HP_VAL_HIGHER"*/);
    sub_1C21E38(&StringLiteral_12495/*"STAR_LOWER"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_9521/*"NP_LOWER"*/);
    sub_1C21E38(&StringLiteral_7336/*"HP_VAL_LOWER"*/);
    byte_4BDF30F = 1;
  }
  v7 = sub_1C22084(BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
  BattleLogicSkill___c__DisplayClass14_0___ctor((BattleLogicSkill___c__DisplayClass14_0_o *)v7, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)text, (int64_t)StringLiteral_1/*""*/, v8, v9, v10, v11, v12, v13);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_47;
  v16 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v16 )
    goto LABEL_47;
  Instance = (__int64)SkillLvMaster__GetEntity(v16, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v7 )
    goto LABEL_47;
  v23 = *(_QWORD *)(Instance + 56);
  *(_QWORD *)(v7 + 16) = v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), v23, v17, v18, v19, v20, v21, v22);
  v24 = *(System_Collections_Generic_Dictionary_object__object__o **)(v7 + 16);
  if ( !v24 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v24,
         (const MethodInfo_3316350 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v25 = sub_1C22084(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v25,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__,
    0LL);
  v26 = sub_1C22084(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v26,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__,
    0LL);
  v27 = sub_1C22084(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v27,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__,
    0LL);
  v28 = sub_1C22084(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v28,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__,
    0LL);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0LL) )
    return 1;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)BattleData__getServantData((BattleData_o *)Instance, skillInfo->fields.svtUniqueId, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v29 = (BattleServantData_o *)Instance;
  Instance = BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v25 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v25 + 24))(
          *(_QWORD *)(v25 + 64),
          StringLiteral_9520/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v25 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = &StringLiteral_3028/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v29, 0LL);
  if ( !v26 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v26 + 24))(
               *(_QWORD *)(v26 + 64),
               StringLiteral_9521/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v26 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = &StringLiteral_3029/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v25 + 24))(
               *(_QWORD *)(v25 + 64),
               StringLiteral_12494/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v25 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = &StringLiteral_3030/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v31 = this->fields.data;
  if ( !v31 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v26 + 24))(
          *(_QWORD *)(v26 + 64),
          StringLiteral_12495/*"STAR_LOWER"*/,
          (unsigned int)v31->fields.totalCriticalStars,
          *(_QWORD *)(v26 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = &StringLiteral_3031/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v29, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v25 + 24))(
          *(_QWORD *)(v25 + 64),
          StringLiteral_7335/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v25 + 40)) & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = &StringLiteral_3026/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v33 = BattleServantData__getNowHp(v29, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v26 + 24))(
          *(_QWORD *)(v26 + 64),
          StringLiteral_7336/*"HP_VAL_LOWER"*/,
          v33,
          *(_QWORD *)(v26 + 40)) & 1) != 0 )
  {
    v34 = BattleServantData__getNowHp(v29, 0LL);
    Instance = BattleServantData__getMaxHp(v29, 0LL);
    if ( !v27 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v27 + 24))(
            *(_QWORD *)(v27 + 64),
            StringLiteral_7333/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v27 + 40),
            (double)v34 * 1000.0 / (double)(int)Instance) & 1) != 0 )
    {
      v35 = BattleServantData__getNowHp(v29, 0LL);
      Instance = BattleServantData__getMaxHp(v29, 0LL);
      if ( v28 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v28 + 24))(
                *(_QWORD *)(v28 + 64),
                StringLiteral_7334/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v28 + 40),
                (double)v35 * 1000.0 / (double)(int)Instance) & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1C22094(Instance, v15);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = &StringLiteral_3027/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v38 = LocalizationManager__Get((System_String_o *)*v37, 0LL);
  *text = v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)text, (int64_t)v38, v39, v40, v41, v42, v43, v44);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BattleActionData_c *v17; // x0
  struct System_Int32_array *ptTarget; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x25
  const MethodInfo *v27; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v29; // x24
  System_Object_array *v30; // x25
  BattleActionData_o *v31; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v35; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_4BDF30D & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleActionLogManagerInterface_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF30D = 1;
  }
  v5 = sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !task )
    goto LABEL_29;
  skillInfo = task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_29;
  skillId = (DataManager_o *)DataManager__GetMasterData_object_(
                               skillId,
                               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
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
                               (const MethodInfo_325BDC8 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v5 )
    goto LABEL_29;
  v10 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0LL);
  *(_DWORD *)(v5 + 32) = -1;
  if ( !v10 )
    goto LABEL_29;
  *(_DWORD *)(v5 + 48) = HIDWORD(v10->fields.m_CancellationTokenSource);
  v17 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v17 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v5 + 56) = v17->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = task->fields.ptTarget;
  *(_QWORD *)(v5 + 40) = ptTarget;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)ptTarget, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v5 + 144) = skillInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 144), (int64_t)skillInfo, v19, v20, v21, v22, v23, v24);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_29;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v25 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v25 )
    goto LABEL_29;
  System_Collections_Generic_List_int___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)v10->fields.lookup,
    (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v10, 0LL);
  if ( !v26 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v10->fields.m_CachedPtr,
    task->fields.ptTarget,
    v25,
    (System_Collections_Generic_List_DataVals__o *)v26,
    v27);
  logicfunction = this->fields.logicfunction;
  v29 = System_Collections_Generic_List_int___ToArray(
          v25,
          (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  v30 = System_Collections_Generic_List_object___ToArray(
          v26,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !logicfunction )
    goto LABEL_29;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v5,
                               v29,
                               (DataVals_array *)v30,
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
  v31 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_29;
  klass = actionLogManager->klass;
  v35 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v35;
      p_offset += 2;
      if ( !v35 )
        goto LABEL_22;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_22:
    p_method = sub_1C73E18(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
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
        return v31;
      }
    }
LABEL_29:
    sub_1C22094(skillId, v7);
  }
  return v31;
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
  v5 = BattleLogicSkill__createSkillData_44952048(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_1C22094(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_44952048(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v10; // x28
  BattleLogicSkill_o **p_fields; // x19
  BattleActionData_o *v12; // x22
  BattleActionData_o *v13; // x25
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  BattleBoostItemInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x22
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *v23; // x24
  BattleActionData_c *v24; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 methodPtr_low; // x10
  BattleLogicSkill_o *v27; // x26
  BattleLogicSkill_o *v28; // x26
  SkillEntity_o *v29; // x23
  bool isForcedSkillSpeedOne; // w26
  bool v31; // w27
  BattleLogicSkill_o *v32; // x22
  BattleLogicSkill_o *v33; // x29
  BattleServantData_o *EnemyServantData; // x0
  __int64 v35; // x28
  __int64 v36; // x29
  BattleLogicSkill_o *v37; // x29
  struct System_Int32_array *ptTarget; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_String_o *Name; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  BattleLogicSkill_o *v64; // x29
  BattleLogicSkill_o *v65; // x26
  BattleLogicSkill_o *v66; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  PartyOrganizationUtility_o *p_motionMessage; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t effectList; // x1
  int logic; // w8
  BattleLogicSkill_o *v78; // x26
  int i; // w9
  __int64 v80; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  bool v84; // w23
  int32_t ActorId; // w0
  const MethodInfo *v86; // x6
  bool v87; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  BattleLogicFunction_o *v91; // x29
  System_Int32_array *v92; // x27
  DataVals_array *v93; // x28
  int32_t v94; // w0
  UnityEngine_Object_o *v95; // x28
  int32_t v96; // w27
  struct BattleLogic_o *v97; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  struct BattleLogicFunction_o *v105; // x25
  BattleLogicFunction_c *klass; // x8
  __int64 v107; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v109; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x1
  void *v117; // x1
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t *p_logictarget; // x27
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x1
  void *v132; // x1
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int32_t type; // w23
  BattleLogicSkill_o *v140; // x25
  int v141; // w8
  BattleLogicSkill_o *v142; // x25
  BattleLogicSkill_o *v143; // x25
  BattleLogicSkill_o *v144; // x27
  int32_t v145; // w28
  const MethodInfo *v146; // x5
  struct BattleLogic_o *v147; // x27
  BattleLogicTask_array *v148; // x0
  BattleLogicSkill_o *v149; // x25
  const MethodInfo *v150; // x4
  int32_t v151; // w27
  BattleLogic_o *v152; // x25
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v154; // x23
  BattleLogicSkill_o *v155; // x23
  BattleLogicTask_o *v156; // x23
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  struct BattleLogic_o *v163; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattleData_o *data; // x8
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  SkillEntity_o *v173; // x19
  BattleLogicTask_o *v174; // x23
  int32_t v175; // w0
  const MethodInfo *v176; // x3
  struct BattleLogic_o *v177; // x19
  struct BattleLogic_o *v178; // x8
  struct BattlePerformance_o *v179; // x9
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-88h]
  DataVals_o *v182; // [xsp+40h] [xbp-80h]
  SkillEntity_o *Entity; // [xsp+48h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16

  v10 = this;
  if ( (byte_4BDF30A & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_int___);
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleActionLogManagerInterface_TypeInfo);
    sub_1C21E38(&BattleBoostItemInfoData_TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&CheckUpdateShiftTask_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
    this = (BattleLogicSkill_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF30A = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  if ( !task )
    goto LABEL_173;
  if ( task->fields.IsResetWasAttackTargetId )
  {
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_173;
    BattleData__ResetWasAttackTargetId((BattleData_o *)this, 0LL);
  }
  p_fields = (BattleLogicSkill_o **)&v10->fields;
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_173;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)this, 0LL);
  v12 = (BattleActionData_o *)sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_173;
  v13 = BattleActionData__AddDisplayTriggerIntervalBuff(v12, task, 0LL);
  *baseActionData = v13;
  sub_1C21DDC((PartyOrganizationUtility_o *)baseActionData, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  if ( !v13 )
    goto LABEL_173;
  v13->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_173;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v21 )
    goto LABEL_173;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v21,
                              (int32_t)this,
                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_173;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_173;
  skillLvMst = (SkillLvMaster_o *)MasterData_object;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity(
                                 (SkillLvMaster_o *)MasterData_object,
                                 (int32_t)this,
                                 skillInfo->fields.skilllv,
                                 0LL);
  v23 = (SkillLvEntity_o *)this;
  v13->fields.isCounter = task->fields.isCounter;
  v24 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v24 = BattleActionData_TypeInfo;
  }
  static_fields = v24->static_fields;
  v13->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = BattleActionData_TypeInfo->static_fields;
    }
    v13->fields.type = static_fields->TYPE_BOOSTSKILL;
    v13->fields.imageId = skillInfo->fields.itemImageId;
    methodPtr_low = LOBYTE(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      this = (BattleLogicSkill_o *)BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        v13->fields.noOperation = 1;
    }
  }
  if ( task->fields.checkAlive )
  {
    v27 = *p_fields;
    this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v27 )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)v27, (int32_t)this, 0LL);
    if ( this )
    {
      this = (BattleLogicSkill_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
      v28 = 0LL;
      if ( ((unsigned __int8)this & 1) == 0 )
        return (BattleActionData_o *)v28;
    }
  }
  v182 = baseVals;
  if ( task->fields.isForcedSpeedOne )
  {
    v29 = Entity;
    isForcedSkillSpeedOne = 1;
  }
  else
  {
    v29 = Entity;
    if ( !Entity )
      goto LABEL_173;
    if ( !SkillEntity__isForcedSkillSpeedOne(Entity, 0LL) )
      goto LABEL_35;
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_173;
    if ( BattleData__checkEnablePlaySpeedOneFromSkillIdList((BattleData_o *)this, Entity->fields.id, 0LL) )
      isForcedSkillSpeedOne = SkillEntity__isForcedSkillSpeedOne(Entity, 0LL);
    else
LABEL_35:
      isForcedSkillSpeedOne = 0;
  }
  v31 = fromSkillCopyFunc;
  v32 = v10;
  this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
  v13->fields.actorId = (int)this;
  if ( !v23 )
    goto LABEL_173;
  v33 = *p_fields;
  this = (BattleLogicSkill_o *)SkillLvEntity__GetActNpcServantId(v23, 0LL);
  if ( !v33 )
    goto LABEL_173;
  EnemyServantData = BattleData__getEnemyServantData((BattleData_o *)v33, (int32_t)this, 0LL);
  if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
  {
    v35 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v186.fields.currentCryptoKey = v35;
    *(_QWORD *)&v186.fields.fakeValue = v36;
    v13->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v186, 0LL);
  }
  v37 = *p_fields;
  this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !v37 )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)BattleData__getServantId((BattleData_o *)v37, (int32_t)this, 0LL);
  if ( !v29 )
    goto LABEL_173;
  v13->fields.motionId = SkillEntity__GetMotionId(v29, (int32_t)this, 0LL);
  v13->fields.targetId = BattleLogicTask__getTarget(task, 0LL);
  ptTarget = task->fields.ptTarget;
  v13->fields.pttargetIds = ptTarget;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.pttargetIds, (int64_t)ptTarget, v39, v40, v41, v42, v43, v44);
  Name = SkillEntity__getName(v29, 0LL);
  v13->fields.skillMessage = Name;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.skillMessage, (int64_t)Name, v46, v47, v48, v49, v50, v51);
  v13->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.skillInfo, (int64_t)skillInfo, v52, v53, v54, v55, v56, v57);
  v13->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
  v13->fields.checkRevengeId = task->fields.checkRevengeId;
  v64 = v32;
  if ( BattleLogicTask__IsGimmick(task, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__GetGimmickStartVoiceArray((BattleData_o *)this, 0LL);
    if ( !*p_fields )
      goto LABEL_173;
    v65 = this;
    this = (BattleLogicSkill_o *)BattleData__GetGimmickResultVoiceArray((BattleData_o *)*p_fields, 0LL);
    if ( !*p_fields )
      goto LABEL_173;
    v66 = this;
    GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray((BattleData_o *)*p_fields, 0LL);
    BattleActionData__SetGimmickData(
      v13,
      task->fields.gimmickIndexArray,
      (System_String_array *)v65,
      (System_Object_array *)v66,
      GimmickAnimTypeArray,
      0LL);
    v64 = v32;
  }
  motionMessage = task->fields.motionMessage;
  if ( motionMessage && motionMessage->fields._stringLength >= 1 )
  {
    v13->fields.motionMessage = motionMessage;
    p_motionMessage = (PartyOrganizationUtility_o *)&v13->fields.motionMessage;
  }
  else
  {
    v13->fields.motionMessage = 0LL;
    p_motionMessage = (PartyOrganizationUtility_o *)&v13->fields.motionMessage;
    motionMessage = 0LL;
  }
  sub_1C21DDC(p_motionMessage, (int64_t)motionMessage, v58, v59, v60, v61, v62, v63);
  if ( (task->fields.actortype | 4) == 5 )
    BattleActionData__setStateField(v13, 0LL);
  effectList = (int64_t)v29->fields.effectList;
  v13->fields.effectlist = (struct System_Int32_array *)effectList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.effectlist, effectList, v70, v71, v72, v73, v74, v75);
  this = (BattleLogicSkill_o *)v64->fields.logic;
  if ( !this )
LABEL_173:
    sub_1C22094(this, task);
  BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
  if ( skillInfo->fields.type == 21 )
  {
    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v23, 0LL);
    if ( !this )
      goto LABEL_173;
    logic = (int)this->fields.logic;
    v78 = this;
    if ( logic >= 1 )
    {
      for ( i = 0; i != logic; ++i )
      {
        if ( logic == i )
          sub_1C2209C(this, task);
        v80 = *((_QWORD *)&this->fields.logictarget + i);
        if ( !v80 )
          goto LABEL_173;
        *(_BYTE *)(v80 + 72) = 1;
      }
    }
    logicfunction = v64->fields.logicfunction;
    funcId = v23->fields.funcId;
    this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                   skillInfo,
                                   skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !logicfunction )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                   logicfunction,
                                   v13,
                                   funcId,
                                   (DataVals_array *)v78,
                                   1,
                                   1,
                                   0,
                                   0,
                                   0,
                                   1,
                                   1,
                                   0LL,
                                   (int32_t)this,
                                   0LL);
    v28 = this;
    goto LABEL_90;
  }
  changeTDCommandType = skillInfo->fields.changeTDCommandType;
  if ( (changeTDCommandType & 0x80000000) == 0 )
    v13->fields.commandType = changeTDCommandType;
  functionIdArray = v23->fields.funcId;
  dataValsArray = SkillLvEntity__getDataValsList(v23, 0LL);
  v84 = v182 == 0LL || !v31;
  if ( v182 != 0LL && v31 )
  {
    ActorId = BattleLogicTask__getActorId(task, 0LL);
    v28 = 0LL;
    if ( !BattleLogicSkill__SetSkillCopyFunction(v64, v23, v182, &functionIdArray, &dataValsArray, ActorId, v86) )
      return (BattleActionData_o *)v28;
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__isEnemyID((BattleData_o *)this, v13->fields.actorId, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*p_fields )
        goto LABEL_173;
      v87 = LODWORD((*p_fields)[18].fields.logictarget) == 0;
    }
    else
    {
      v87 = 0;
    }
    v13->fields.isReversalShortBuffTurn = v87;
  }
  if ( skillInfo->fields.type == 1 )
  {
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C22084(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
    if ( !argument )
      goto LABEL_173;
    argument->fields.grantSkillType = skillInfo->fields.type;
    if ( !task->fields.isSideEffectTriggerSkill )
      goto LABEL_86;
  }
  else
  {
    if ( !task->fields.isSideEffectTriggerSkill )
    {
      p_isShowBattlePointEffect = &task->fields.isShowBattlePointEffect;
      if ( !task->fields.isShowBattlePointEffect )
      {
        argument = 0LL;
        goto LABEL_88;
      }
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C22084(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
      if ( !argument )
        goto LABEL_173;
      goto LABEL_87;
    }
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C22084(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
  }
  overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
  if ( !overwriteFuncSideEffectArg )
  {
    overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1C22084(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(
      (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
      0LL);
  }
  if ( !argument )
    goto LABEL_173;
  BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(argument, overwriteFuncSideEffectArg, 0LL);
LABEL_86:
  p_isShowBattlePointEffect = &task->fields.isShowBattlePointEffect;
  if ( task->fields.isShowBattlePointEffect )
LABEL_87:
    argument->fields.isShowBattlePointEffect = *p_isShowBattlePointEffect;
LABEL_88:
  v91 = v64->fields.logicfunction;
  v93 = dataValsArray;
  v92 = functionIdArray;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v91 )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                 v91,
                                 v13,
                                 v92,
                                 v93,
                                 0,
                                 1,
                                 0,
                                 0,
                                 0,
                                 v84,
                                 1,
                                 argument,
                                 (int32_t)this,
                                 0LL);
  v28 = this;
  v64 = v32;
LABEL_90:
  if ( task->fields.actortype == 5 )
  {
    if ( !v28 )
      goto LABEL_173;
    v94 = BasicHelper__IndexValue_int__49932396(
            (System_Collections_Generic_List_T__o *)v28[6].klass,
            0,
            0,
            (const MethodInfo_2F9E86C *)Method_BasicHelper_IndexValue_int___);
    v95 = (UnityEngine_Object_o *)v28[1].fields.logic;
    v96 = v94;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleLogicSkill_o *)UnityEngine_Object__op_Equality(v95, 0LL, 0LL);
    if ( v96 >= 1 && ((unsigned __int8)this & 1) != 0 )
    {
      v97 = v64->fields.logic;
      if ( !v97 )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)v97->fields.perf;
      if ( !this )
        goto LABEL_173;
      ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v96, 0LL);
      v28[1].fields.logic = (struct BattleLogic_o *)ServantGameObject;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v28[1].fields.logic,
        (int64_t)ServantGameObject,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
    }
  }
  ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
    skillInfo,
    skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
  BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
  this = (BattleLogicSkill_o *)v64->fields.logic;
  if ( !this )
    goto LABEL_173;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
  if ( task->fields.IsResetPrevAttackInfo )
  {
    if ( !v28 )
      goto LABEL_173;
    BYTE4(v28[1].fields.logicfunction) = 0;
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_173;
    BattleData__setCommandAttack((BattleData_o *)this, 0, 0, 0LL);
  }
  if ( !*p_fields )
    goto LABEL_173;
  v105 = (*p_fields)[10].fields.logicfunction;
  if ( !v105 )
    goto LABEL_173;
  klass = v105->klass;
  v107 = *(unsigned __int16 *)(&v105->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v105->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v107;
      p_offset += 2;
      if ( !v107 )
        goto LABEL_110;
    }
    v109 = (__int64)(&klass[1]._1.namespaze + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_110:
    v109 = sub_1C73E18(v105, BattleActionLogManagerInterface_TypeInfo, 5LL);
  }
  this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(struct BattleLogicFunction_o *, BattleLogicTask_o *, _QWORD))v109)(
                                 v105,
                                 task,
                                 *(_QWORD *)(v109 + 8));
  if ( !v28 )
    goto LABEL_173;
  if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v28, 0LL) )
  {
    v116 = (int64_t)v28[2].fields.logic;
    v28[9].monitor = (void *)v116;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v28[9].monitor, v116, v110, v111, v112, v113, v114, v115);
    v117 = StringLiteral_1/*""*/;
    v28[2].fields.logic = (struct BattleLogic_o *)StringLiteral_1/*""*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v28[2].fields.logic, (int64_t)v117, v118, v119, v120, v121, v122, v123);
    p_logictarget = (int64_t *)&v28[2].fields.logictarget;
    if ( !System_String__IsNullOrEmpty((System_String_o *)v28[2].fields.logictarget, 0LL) )
    {
      v131 = *p_logictarget;
      v28[9].monitor = (void *)*p_logictarget;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v28[9].monitor, v131, v125, v126, v127, v128, v129, v130);
      v132 = StringLiteral_1/*""*/;
      *p_logictarget = (int64_t)StringLiteral_1/*""*/;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v28[2].fields.logictarget,
        (int64_t)v132,
        v133,
        v134,
        v135,
        v136,
        v137,
        v138);
    }
  }
  type = skillInfo->fields.type;
  v140 = *p_fields;
  this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !v140 )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)v140, (int32_t)this, 0LL);
  if ( type == 1 || this )
  {
    this = (BattleLogicSkill_o *)SkillLvEntity__IsNoTargetSkipSkill(v23, 0LL);
    v141 = (unsigned __int8)this & 1;
  }
  else
  {
    v141 = 1;
  }
  if ( (v141 & (LOBYTE(v28[5].klass) ^ 1)) != 0 || BYTE1(v28[6].monitor) && !BYTE2(v28[6].monitor) )
    return 0LL;
  if ( task->fields.isCanCounterTask )
  {
    v142 = *p_fields;
    this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v142 )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)v142, (int32_t)this, 0LL);
    if ( this )
    {
      v143 = this;
      ((void (__fastcall *)(BattleLogicSkill_o *, BattleLogicSkill_o *, Il2CppClass *))v28->klass[1]._1.castClass)(
        v28,
        *p_fields,
        v28->klass[1]._1.declaringType);
      this = (BattleLogicSkill_o *)v28[6].klass;
      if ( !this )
        goto LABEL_173;
      v144 = *p_fields;
      v145 = (int32_t)v143->fields.logic;
      this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                     (System_Collections_Generic_List_int__o *)this,
                                     (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v144 )
        goto LABEL_173;
      BattleData__SetWasAttackTargetIdList((BattleData_o *)v144, v145, (System_Int32_array *)this, 0LL);
      v147 = v64->fields.logic;
      if ( !v147 )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)v147->fields.logicnomal;
      if ( !this )
        goto LABEL_173;
      v148 = BattleLogicNomal__taskCounterFunc(
               (BattleLogicNomal_o *)this,
               (BattleData_o *)*p_fields,
               HIBYTE(v143[9].fields.logicfunction) == 0,
               1,
               0,
               v146);
      BattleLogic__addBattleLogicTask(v147, v148, 0LL);
    }
  }
  v149 = *p_fields;
  if ( task->fields.isFunctionedFunction )
  {
    if ( !v149 )
      goto LABEL_173;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)*p_fields, 0LL);
  }
  else
  {
    this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v28[6].klass )
      goto LABEL_173;
    v151 = (int)this;
    this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v28[6].klass,
                                   (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v149 )
      goto LABEL_173;
    BattleData__SetFunctionedTargetIdArray((BattleData_o *)v149, v151, (System_Int32_array *)this, 0LL);
    v152 = v64->fields.logic;
    if ( !v152 )
      goto LABEL_173;
    FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                        v64->fields.logic,
                                        (BattleData_o *)*p_fields,
                                        0LL);
    BattleLogic__addBattleLogicTask(v152, FunctionedFunctionBuffTaskArray, 0LL);
  }
  v154 = BattleLogicSkill__MakeAddInvokeSkillTask(v64, skillLvMst, v23, task, v150);
  this = (BattleLogicSkill_o *)SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v23, 0LL);
  if ( !v64->fields.logic )
    goto LABEL_173;
  if ( ((unsigned __int8)this & 1) != 0 )
    BattleLogic__AddTaskTargetTaskAfter(v64->fields.logic, task, v154, 0LL);
  else
    BattleLogic__AddBattleLogicTask(v64->fields.logic, v154, 0LL);
  v155 = *p_fields;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v155 )
    goto LABEL_173;
  BattleData__AddUseSkillId((BattleData_o *)v155, (int32_t)this, 0LL);
  if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v28, 0LL) )
  {
    v156 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v156, 0LL);
    if ( !v156 )
      goto LABEL_173;
    BattleLogicTask__setCheckEntryFunction(v156, 0LL);
    this = (BattleLogicSkill_o *)v64->fields.logic;
    if ( !this )
      goto LABEL_173;
    BattleLogic__AddBattleLogicTask((BattleLogic_o *)this, v156, 0LL);
  }
  if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0 )
  {
    this = (BattleLogicSkill_o *)SkillEntity__getSkillCutInId(Entity, 0LL);
    if ( !(_DWORD)this )
    {
      v163 = v64->fields.logic;
      if ( !v163 )
        goto LABEL_173;
      perf = v163->fields.perf;
      CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
      if ( !perf )
        goto LABEL_173;
      BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
      if ( v28[2].fields.logic )
      {
        if ( !*p_fields )
          goto LABEL_173;
        data = (*p_fields)[1].fields.data;
        if ( !data )
          goto LABEL_173;
        this = *(BattleLogicSkill_o **)&data->fields.maxEnemyIndex;
        if ( !this )
          goto LABEL_173;
        BattleInformationComponent__showCommonMessage(
          (BattleInformationComponent_o *)this,
          (BattleActionData_o *)v28,
          0LL);
        v28[2].fields.logic = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v28[2].fields.logic, 0LL, v167, v168, v169, v170, v171, v172);
        BYTE4(v28[6].fields.data) = 1;
      }
    }
  }
  if ( task->fields.IsNotShowSkillMessage )
  {
    v28[2].fields.logic = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v28[2].fields.logic, 0LL, v157, v158, v159, v160, v161, v162);
    BYTE4(v28[6].fields.data) = 1;
  }
  v173 = Entity;
  if ( SkillEntity__IsCheckUpdateShiftServant(Entity, 0LL) )
  {
    v174 = (BattleLogicTask_o *)sub_1C22084(CheckUpdateShiftTask_TypeInfo);
    BattleLogicTask___ctor(v174, 0LL);
    v174->fields.actiontype = 68;
    this = (BattleLogicSkill_o *)v64->fields.logic;
    if ( !this )
      goto LABEL_173;
    BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)this, task, v174, 0LL);
    v173 = Entity;
  }
  v175 = BattleLogicTask__getActorId(task, 0LL);
  BattleLogicSkill__ExecuteShortenSkillBuff(v64, (BattleSkillInfoData_o *)skillInfo, v175, v176);
  if ( !task->fields.isForcedSpeedOne )
  {
    this = (BattleLogicSkill_o *)SkillEntity__IsBehaveAsAssistSkill(v173, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v177 = v64->fields.logic;
      if ( !v177 )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)v177->fields.perf;
      if ( !this )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)BattlePerformance__isEnableSkipStartQuest((BattlePerformance_o *)this, 0LL);
      v177->fields.isEnableSkipAssistSkill = (unsigned __int8)this & 1;
      v178 = v64->fields.logic;
      if ( !v178 )
        goto LABEL_173;
      v179 = v178->fields.perf;
      if ( !v179 )
        goto LABEL_173;
      v179->fields.isEnableSkipSkillCutIn = v178->fields.isEnableSkipAssistSkill;
    }
  }
  return (BattleActionData_o *)v28;
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
  int64_t v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BattleData_o *v17; // x8
  System_Int32_array *v18; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  BattleData_o *v20; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v28; // x0

  if ( (byte_4BDF312 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask___TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    byte_4BDF312 = 1;
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
  v9 = sub_1C22084(BattleSkillInfoData_TypeInfo);
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
  v10 = sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v10, 0LL);
  data = (BattleData_o *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v8;
  if ( !v10 )
    goto LABEL_26;
  *(_QWORD *)(v10 + 152) = data;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 152), (int64_t)data, v11, v12, v13, v14, v15, v16);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v17 = this->fields.data) == 0LL)
    || (v18 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v17, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v10,
          (BattleSkillInfoData_o *)v9,
          v18,
          FieldPlayerServantIDList,
          0,
          0,
          0LL),
        BattleLogicTask__setActor((BattleLogicTask_o *)v10, 5, -1, 0LL),
        (data = (BattleData_o *)sub_1C21EE0(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1C22094(data, method);
  }
  v20 = data;
  data = (BattleData_o *)sub_1C21F74(v10, data->klass->_1.element_class);
  if ( !data )
  {
    v28 = sub_1C220B8(0LL);
    sub_1C21F60(v28, 0LL);
  }
  if ( !LODWORD(v20->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1C2209C(data, method);
  v20->fields.rootfsm = (struct PlayMakerFSM_o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v20->fields.rootfsm, v10, v21, v22, v23, v24, v25, v26);
  return (BattleLogicTask_array *)v20;
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4BDF311 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestBehaviorMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF311 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
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
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( (int)v10->max_length >= 1 )
  {
    v12 = 0LL;
    m_Items = v10->m_Items;
    while ( 1 )
    {
      v14 = sub_1C22084(BattleSkillInfoData_TypeInfo);
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
        sub_1C2209C(Instance, v4);
      Instance = (DataManager_o *)m_Items[v12];
      if ( !Instance )
        break;
      *(_DWORD *)(v14 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
      v16 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
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
      v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v16,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v16;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v16, v19, v20, v21, v22, v23, v24);
      }
      if ( (int)++v12 >= (signed int)v10->max_length )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1C22094(Instance, v4);
  }
  if ( !v11 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  const MethodInfo *v22; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_4BDF308 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF308 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, 0LL);
  if ( !v9
    || (BattleLogicTask__setCommandSpell(v9, skillId, 0LL, ptTargetList, 0LL), !v8)
    || (items = v8->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
    sub_1C22094(v10, v11);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
  SkillTargetedBeforeFunctionSkill = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                                                                                      this,
                                                                                      v9,
                                                                                      ptTargetList,
                                                                                      0LL,
                                                                                      v22);
  System_Collections_Generic_List_object___InsertRange(
    v8,
    0,
    SkillTargetedBeforeFunctionSkill,
    (const MethodInfo_3650098 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogicTarget_o *logictarget; // x21
  int32_t v24; // w29
  int32_t GlobalTargetId; // w0
  BattleData_o *v26; // x21
  int32_t v27; // w29
  int32_t TargetAiAct; // w21
  Il2CppClass *v29; // x0
  BattleLogicTarget_o *v30; // x29
  int32_t v31; // w21
  bool isPlayerID; // w0
  int32_t v33; // w2
  int32_t v34; // w1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
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
  System_Int32_array *v63; // x0
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
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Collections_Generic_IEnumerable_T__o *v80; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]

  if ( (byte_4BDF307 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_StableSort_BattleLogicTask___);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_BattleLogicTask___);
    sub_1C21E38(&System_Func_BattleLogicTask__int__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_BattleLogicSkill___c__taskSkill_b__5_0__);
    sub_1C21E38(&BattleLogicSkill___c_TypeInfo);
    byte_4BDF307 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v18 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
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
  }
  else
  {
    svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
    if ( (_DWORD)svtUniqueId == -1 )
      goto LABEL_15;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    data = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    if ( (data & 1) != 0 )
    {
LABEL_15:
      if ( !this->fields.data )
        goto LABEL_94;
      if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0LL) )
      {
        logictarget = this->fields.logictarget;
        v24 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !logictarget )
          goto LABEL_94;
        GlobalTargetId = BattleLogicTarget__getGlobalTargetId(
                           logictarget,
                           v24,
                           v24 == -1,
                           (System_Int32_array *)data,
                           0LL);
      }
      else
      {
        v26 = this->fields.data;
        v27 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !v26 )
          goto LABEL_94;
        GlobalTargetId = BattleData__getTargetLock(v26, v27, v27 == -1, (System_Int32_array *)data, 0LL);
      }
      TargetAiAct = GlobalTargetId;
      v29 = int___TypeInfo;
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_94;
      v30 = this->fields.logictarget;
      v31 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !v30 )
        goto LABEL_94;
      TargetAiAct = BattleLogicTarget__getTargetAiAct(
                      v30,
                      1,
                      v31,
                      0LL,
                      (System_Int32_array *)data,
                      1,
                      0,
                      0LL,
                      0LL,
                      (bool)&dword_0 + 1,
                      0LL);
      v29 = int___TypeInfo;
    }
    data = sub_1C21EE0(v29, 1LL);
    if ( !data )
      goto LABEL_94;
    v22 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
      sub_1C2209C(data, svtUniqueId);
    *(_DWORD *)(data + 32) = TargetAiAct;
    enemyTargetList = 0LL;
    if ( !v18 )
LABEL_94:
      sub_1C22094(data, svtUniqueId);
  }
  BattleLogicTask__setActionSkill(v18, skillInfo, v22, ptTargetList, checkAlive, checkRevengeId, 0LL);
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v34 = 1;
    v33 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    v33 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v34 = 2;
    else
      v34 = 3;
  }
  BattleLogicTask__setActor(v18, v34, v33, 0LL);
  if ( !v17 )
    goto LABEL_94;
  items = v17->fields._items;
  v42 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_94;
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    if ( !v21 )
      goto LABEL_47;
  }
  else
  {
    v44 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v18;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v18, v35, v36, v37, v38, v39, v40);
    if ( !v21 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v45 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v45,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v45 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v21, this->fields.data, 0LL);
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
    v50 = sub_1C73E18(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
  if ( !v53 )
    sub_1C22094(0LL, v52);
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
      v57 = sub_1C73E18(v53, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v61 = sub_1C73E18(v53, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v62 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v53, *(_QWORD *)(v61 + 8));
    v63 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
    if ( !v62 )
      sub_1C22094(v63, v64);
    if ( !v63 )
      sub_1C22094(0LL, v64);
    if ( !v63->max_length )
      sub_1C2209C(v63, v64);
    v63->m_Items[1] = v62->fields.svtUniqueId;
    v65 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v62,
                                                           v63,
                                                           0LL,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           isDeadToEnableUpHate);
    if ( !v45 )
      sub_1C22094(v65, v65);
    System_Collections_Generic_List_object___AddRange(
      v45,
      v65,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    v69 = sub_1C73E18(v53, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v69)(v53, *(_QWORD *)(v69 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v45 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v17,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v45,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
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
      _9__5_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v72, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
    }
    v80 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v45,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_2F9FA54 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v17,
      0,
      v80,
      (const MethodInfo_3650098 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF318 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicSkill___c_TypeInfo);
    byte_4BDF318 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleLogicSkill___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1C22094(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0LL )
    sub_1C22094(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c__DisplayClass14_0___ctor(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__0(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF319 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4BDF319 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1C22094(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v8, &result, 0LL) )
    return (int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__1(
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

  if ( (byte_4BDF31A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&long_TypeInfo);
    byte_4BDF31A = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1C22094(conditions, key);
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
                                                                            (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v9, v10) >= val;
  v15 = sub_1C22354(conditions);
  return BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__2(v12, v13, *(double *)&v15, v14);
}


bool __fastcall BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF31B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4BDF31B = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1C22094(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v8, &result, 0LL) )
    return (double)(int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__3(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  bool v11; // w0
  BattleLogicSkill___c__DisplayClass19_0_o *v12; // x0
  const MethodInfo *v13; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF31C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&long_TypeInfo);
    byte_4BDF31C = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1C22094(conditions, key);
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
                                                                            (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v9, v10) >= val;
  sub_1C22354(conditions);
  BattleLogicSkill___c__DisplayClass19_0___ctor(v12, v13);
  return v11;
}


void __fastcall BattleLogicSkill___c__DisplayClass19_0___ctor(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__0(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.funcId == x;
}


bool __fastcall BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__1(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEntity; // x0

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1C22094(0LL, type);
  return FunctionEntity__GetAddStateBuffTypeFromFunction(funcEntity, 0LL) == type;
}


bool __fastcall BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__2(
        BattleLogicSkill___c__DisplayClass19_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1C22094(this, type);
  return funcEntity->fields.funcType == type;
}


void __fastcall BattleLogicSkill___c__DisplayClass20_0___ctor(
        BattleLogicSkill___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass20_0___IsNotSkillCopyTargetIndividuality_b__0(
        BattleLogicSkill___c__DisplayClass20_0_o *this,
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
  struct BattleLogicTask_o *task; // x9
  struct System_Int32_array *actorIdlist; // x9
  BattleData_o *data; // x0
  int32_t v11; // w1
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds; // x1

  v6 = this;
  if ( (byte_4BDF31D & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1C21E38(&Method_System_Linq_Enumerable_Union_int___);
    byte_4BDF31D = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (task = v6->fields.task) == 0LL )
    sub_1C22094(this, current);
  actorIdlist = task->fields.actorIdlist;
  data = _4__this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1C2209C(data, current);
    v11 = actorIdlist->m_Items[1];
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
                                                                     0LL,
                                                                     0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Union_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                            TargetIds,
                                                            (const MethodInfo_2FEDA84 *)Method_System_Linq_Enumerable_Union_int___);
}


BattleServantData_o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0LL )
    sub_1C22094(this, uniqueId);
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
    sub_1C22094(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0LL);
}