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
  BattleBuffData_BuffData_array *BuffList_43119424; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v15; // w24
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x23

  if ( (byte_49BDD0D & 1) == 0 )
  {
    sub_1B4CF90(&BattleBuffData_CheckIndividualitiesData_TypeInfo, actSkillInfo);
    byte_49BDD0D = 1;
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
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B4D1DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43313456(v11, v10, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      BuffList_43119424 = BattleBuffData__getBuffList_43119424(buffData, 143, v11, 1, 0, 0LL, 0LL, 0LL);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_43119424, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_43119424 )
      {
        max_length = BuffList_43119424->max_length;
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
              sub_1B4D1F4(data, actSkillInfo);
            v17 = &BuffList_43119424->obj.klass + (int)v15;
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
            max_length = BuffList_43119424->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1B4D1EC(data, actSkillInfo);
  }
}


int32_t __fastcall BattleLogicSkill__GetHitGimmickSkillId(
        BattleLogicSkill_o *this,
        System_Int32_array *rateArray,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WeightRate_int__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  unsigned __int64 v12; // x21
  int32_t Next; // w1

  if ( (byte_49BDD09 & 1) == 0 )
  {
    sub_1B4CF90(&Method_WeightRate_int___ctor__, rateArray);
    sub_1B4CF90(&Method_WeightRate_int__getData__, v4);
    sub_1B4CF90(&Method_WeightRate_int__getTotalWeight__, v5);
    sub_1B4CF90(&Method_WeightRate_int__setWeight__, v6);
    sub_1B4CF90(&WeightRate_int__TypeInfo, v7);
    byte_49BDD09 = 1;
  }
  if ( !rateArray )
    return -1;
  v8 = (WeightRate_int__o *)sub_1B4D1DC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v8, (const MethodInfo_3951A24 *)Method_WeightRate_int___ctor__);
  v11 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1B4D1F4(v9, v10);
      if ( !v8 )
        break;
      WeightRate_int___setWeight(
        v8,
        rateArray->m_Items[v12 + 1],
        v12,
        (const MethodInfo_3950F40 *)Method_WeightRate_int__setWeight__);
      LODWORD(v11) = rateArray->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_12;
    }
LABEL_13:
    sub_1B4D1EC(v9, v10);
  }
  if ( !v8 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v8->fields.totalweight, 0LL);
  return WeightRate_int___getData(v8, Next, (const MethodInfo_39513B4 *)Method_WeightRate_int__getData__);
}


System_Collections_Generic_List_BattleLogicTask__o *__fastcall BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        System_Int32_array *ptTargetArray,
        System_Int32_array *enemyTargetArray,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x21
  __int64 *v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x25
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_List_object__o *v46; // x19
  long double inited; // q0
  _QWORD *v48; // x24
  __int64 v49; // x8
  __int64 v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x24
  DataVals_array *DataValArray; // x0
  BattleLogicSkill___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x22
  System_Func_T__TResult__o *_9__7_0; // x23
  Il2CppObject *v57; // x25
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x22
  System_Func_T1__T2__TResult__o *v62; // x23
  System_Func_T__TResult__o *v63; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v64; // x0
  BattleLogicSkill___c_c *v65; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x22
  System_Func_object__bool__o *_9__7_3; // x23
  Il2CppObject *v68; // x24
  struct BattleLogicSkill___c_StaticFields *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x22
  System_Func_object__object__o *v73; // x23
  __int64 v74; // x8
  void *v75; // x21
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x21
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  BattleSkillInfoData_o *v89; // x22
  System_Int32_array *v90; // x0
  __int64 v91; // x1
  System_Collections_Generic_IEnumerable_T__o *v92; // x0
  __int64 v93; // x8
  __int64 v94; // x9
  int *v95; // x10
  __int64 v96; // x0
  BattleLogicSkill___c_c *v97; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v99; // x21
  struct BattleLogicSkill___c_StaticFields *v100; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  const MethodInfo *v104; // [xsp+8h] [xbp-68h]

  if ( (byte_49BDCFF & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_int___, task);
    sub_1B4CF90(&Method_BasicHelper_StableSort_BattleLogicTask___, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___, v11);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___, v12);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v13);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Union_int___, v14);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_BattleServantData___, v15);
    sub_1B4CF90(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo, v16);
    sub_1B4CF90(&System_Func_BattleLogicTask__int__TypeInfo, v17);
    sub_1B4CF90(&System_Func_int__BattleServantData__TypeInfo, v18);
    sub_1B4CF90(&System_Func_BattleServantData__bool__TypeInfo, v19);
    sub_1B4CF90(&System_Func_DataVals__Target_TYPE__TypeInfo, v20);
    sub_1B4CF90(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo, v21);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v22);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v23);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v24);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v25);
    sub_1B4CF90(&int___TypeInfo, v26);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v28);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v29);
    sub_1B4CF90(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__, v30);
    sub_1B4CF90(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__, v31);
    sub_1B4CF90(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__, v32);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__, v33);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__, v34);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__, v35);
    sub_1B4CF90(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo, v36);
    sub_1B4CF90(&BattleLogicSkill___c_TypeInfo, v37);
    byte_49BDCFF = 1;
  }
  v38 = sub_1B4D1DC(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  BattleLogicSkill___c__DisplayClass7_0___ctor((BattleLogicSkill___c__DisplayClass7_0_o *)v38, 0LL);
  if ( !v38 )
    goto LABEL_75;
  *(_QWORD *)(v38 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 16), (int32_t)this, v41, v42);
  *(_QWORD *)(v38 + 24) = task;
  v43 = v38 + 24;
  sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 24), (int32_t)task, v44, v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v48 = Method_System_Array_Empty_int___;
  v49 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v49 )
  {
    sub_1B9D67C(Method_System_Array_Empty_int___);
    v49 = v48[7];
  }
  v50 = *(_QWORD *)(v49 + 16);
  if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
    v50 = sub_1B9D620(inited);
  if ( !*(_DWORD *)(v50 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v50);
  v39 = *(__int64 **)(v48[7] + 16LL);
  if ( (*((_BYTE *)v39 + 309) & 1) == 0 )
    v39 = (__int64 *)sub_1B9D620(inited);
  v51 = (System_Collections_Generic_IEnumerable_TSource__o **)v39[23];
  v52 = *v51;
  if ( ptTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v51,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_2F40684 *)Method_System_Linq_Enumerable_Union_int___);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  }
  if ( enemyTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v52,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_2F40684 *)Method_System_Linq_Enumerable_Union_int___);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  }
  if ( !*(_QWORD *)v43 )
    goto LABEL_75;
  v39 = *(__int64 **)(*(_QWORD *)v43 + 72LL);
  if ( !v39 )
    goto LABEL_75;
  if ( *((_DWORD *)v39 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v39, 0LL);
    v54 = BattleLogicSkill___c_TypeInfo;
    v55 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v54 = BattleLogicSkill___c_TypeInfo;
    }
    _9__7_0 = (System_Func_T__TResult__o *)v54->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        v54 = BattleLogicSkill___c_TypeInfo;
      }
      v57 = (Il2CppObject *)v54->static_fields->__9;
      _9__7_0 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v57,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v59, v60);
    }
    v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v55,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2F33BD0 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v62 = (System_Func_T1__T2__TResult__o *)sub_1B4D1DC(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v62,
      (Il2CppObject *)v38,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0LL);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v61,
                                                                 (Il2CppObject *)v52,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v62,
                                                                 (const MethodInfo_2F0C51C *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v63 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v63,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0LL);
  v64 = System_Linq_Enumerable__Select_int__object_(
          v52,
          (System_Func_TSource__TResult__o *)v63,
          (const MethodInfo_2F31AE4 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v65 = BattleLogicSkill___c_TypeInfo;
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)v64;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v65 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_3 = (System_Func_object__bool__o *)v65->static_fields->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = BattleLogicSkill___c_TypeInfo;
    }
    v68 = (Il2CppObject *)v65->static_fields->__9;
    _9__7_3 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v68,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0LL);
    v69 = BattleLogicSkill___c_TypeInfo->static_fields;
    v69->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1B4CF34((CGThumbnailListItem_o *)&v69->__9__7_3, (int32_t)_9__7_3, v70, v71);
  }
  v72 = System_Linq_Enumerable__Where_object_(
          v66,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v73 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v73,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0LL);
  v39 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v72,
                     (System_Func_TSource__IEnumerable_TResult___o *)v73,
                     (const MethodInfo_2F3673C *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v39 )
LABEL_75:
    sub_1B4D1EC(v39, v40);
  v74 = *v39;
  v75 = v39;
  v76 = *(unsigned __int16 *)(*v39 + 302);
  if ( *(_WORD *)(*v39 + 302) )
  {
    v77 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v77 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v76;
      v77 += 4;
      if ( !v76 )
        goto LABEL_37;
    }
    v78 = v74 + 16LL * *v77 + 312;
  }
  else
  {
LABEL_37:
    v78 = sub_1B9D724(v39, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v80 = (*(__int64 (__fastcall **)(void *, _QWORD))v78)(v75, *(_QWORD *)(v78 + 8));
  if ( !v80 )
    sub_1B4D1EC(0LL, v79);
  while ( 1 )
  {
    v81 = *(_QWORD *)v80;
    v82 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
    {
      v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v83 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v82;
        v83 += 4;
        if ( !v82 )
          goto LABEL_44;
      }
      v84 = v81 + 16LL * *v83 + 312;
    }
    else
    {
LABEL_44:
      v84 = sub_1B9D724(v80, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v80, *(_QWORD *)(v84 + 8)) & 1) == 0 )
      break;
    v85 = *(_QWORD *)v80;
    v86 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
    {
      v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v87 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v86;
        v87 += 4;
        if ( !v86 )
          goto LABEL_51;
      }
      v88 = v85 + 16LL * *v87 + 312;
    }
    else
    {
LABEL_51:
      v88 = sub_1B9D724(v80, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v89 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v80, *(_QWORD *)(v88 + 8));
    v90 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
    if ( !v89 )
      sub_1B4D1EC(v90, v91);
    if ( !v90 )
      sub_1B4D1EC(0LL, v91);
    if ( !v90->max_length )
      sub_1B4D1F4(v90, v91);
    v90->m_Items[1] = v89->fields.svtUniqueId;
    v92 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v89,
                                                           v90,
                                                           0LL,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           v104);
    if ( !v46 )
      sub_1B4D1EC(v92, v92);
    System_Collections_Generic_List_object___AddRange(
      v46,
      v92,
      (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v93 = *(_QWORD *)v80;
  v94 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
  {
    v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v95 - 1) != System_IDisposable_TypeInfo )
    {
      --v94;
      v95 += 4;
      if ( !v94 )
        goto LABEL_62;
    }
    v96 = v93 + 16LL * *v95 + 312;
  }
  else
  {
LABEL_62:
    v96 = sub_1B9D724(v80, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v96)(v80, *(_QWORD *)(v96 + 8));
  v97 = BattleLogicSkill___c_TypeInfo;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v97 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_5 = (System_Func_object__int__o *)v97->static_fields->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !v97->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v97);
      v97 = BattleLogicSkill___c_TypeInfo;
    }
    v99 = (Il2CppObject *)v97->static_fields->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v99,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0LL);
    v100 = BattleLogicSkill___c_TypeInfo->static_fields;
    v100->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1B4CF34((CGThumbnailListItem_o *)&v100->__9__7_5, (int32_t)_9__7_5, v101, v102);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v46,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_2EF1484 *)Method_BasicHelper_StableSort_BattleLogicTask___);
}


bool __fastcall BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
        BattleLogicSkill_o *this,
        System_Int32_array *actorIndividualities,
        System_Int32_array *notSkillCopyTargetIndividualities,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1
  unsigned __int64 v11; // x23
  BattleLogicSkill___c__DisplayClass20_0_o *v12; // x21
  System_Func_int__bool__o *v13; // x22
  bool v14; // w0

  if ( (byte_49BDD0B & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_int____75494880, actorIndividualities);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__, v7);
    sub_1B4CF90(&BattleLogicSkill___c__DisplayClass20_0_TypeInfo, v8);
    byte_49BDD0B = 1;
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
        v11 = 0LL;
        while ( 1 )
        {
          v12 = (BattleLogicSkill___c__DisplayClass20_0_o *)sub_1B4D1DC(BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
          BattleLogicSkill___c__DisplayClass20_0___ctor(v12, 0LL);
          if ( v11 >= notSkillCopyTargetIndividualities->max_length )
            sub_1B4D1F4(IsNullOrEmpty, v10);
          if ( !v12 )
            break;
          v12->fields.individuality = notSkillCopyTargetIndividualities->m_Items[v11 + 1];
          v13 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v13,
            (Il2CppObject *)v12,
            Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0LL);
          v14 = BasicHelper__Any_int__49201684(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v13,
                  (const MethodInfo_2EEC214 *)Method_BasicHelper_Any_int____75494880);
          if ( !v14 && (__int64)++v11 < (int)notSkillCopyTargetIndividualities->max_length )
            continue;
          return v14;
        }
LABEL_16:
        sub_1B4D1EC(IsNullOrEmpty, v10);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x20
  __int64 *v18; // x8
  __int64 v19; // x1
  System_String_o *IfExists; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_49BDD06 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, messageNotAvailable);
    sub_1B4CF90(&string___TypeInfo, v6);
    sub_1B4CF90(&string_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_2882/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/, v8);
    sub_1B4CF90(&StringLiteral_2881/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/, v9);
    byte_49BDD06 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *messageNotAvailable = static_fields->Empty;
  sub_1B4CF34((CGThumbnailListItem_o *)messageNotAvailable, (int32_t)Empty, (int32_t)method, v3);
  if ( !skillInfo )
    goto LABEL_16;
  if ( BattleSkillInfoData__isChargeOK(skillInfo, 0LL) )
  {
    if ( BattleSkillInfoData__IsOpenCond(skillInfo, 0LL) )
      return 1;
    v12 = sub_1B4D038(string___TypeInfo, 1LL);
    if ( v12 )
    {
      v17 = v12;
      if ( *(_DWORD *)(v12 + 24) )
      {
        v18 = &StringLiteral_2882/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/;
        goto LABEL_13;
      }
LABEL_17:
      sub_1B4D1F4(v12, v13);
    }
LABEL_16:
    sub_1B4D1EC(v12, v13);
  }
  v12 = sub_1B4D038(string___TypeInfo, 1LL);
  if ( !v12 )
    goto LABEL_16;
  v17 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_17;
  v18 = &StringLiteral_2881/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/;
LABEL_13:
  v19 = *v18;
  *(_QWORD *)(v17 + 32) = *v18;
  sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 32), v19, v15, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v17, 0LL);
  *messageNotAvailable = IfExists;
  sub_1B4CF34((CGThumbnailListItem_o *)messageNotAvailable, (int32_t)IfExists, v21, v22);
  return 0;
}


bool __fastcall BattleLogicSkill__IsSkillExecutable(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **messageNotExecutable,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_49BDD04 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, skillInfo);
    byte_49BDD04 = 1;
  }
  *messageNotExecutable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)messageNotExecutable,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)messageNotExecutable,
    method);
  return BattleLogicSkill__IsSkillAvailable(skillInfo, messageNotExecutable, v7)
      && BattleLogicSkill__checkConditions(this, skillInfo, messageNotExecutable, v8);
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
  if ( (byte_49BDD01 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1B4CF90(&TempBattleSkillInfoData_TypeInfo, skillLvMst);
    byte_49BDD01 = 1;
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
        v16 = (TempBattleSkillInfoData_o *)sub_1B4D1DC(TempBattleSkillInfoData_TypeInfo);
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
    sub_1B4D1EC(this, skillLvMst);
  }
  return (BattleLogicTask_o *)this;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicSkill__SetCommandSpellAddFunctionData(
        BattleLogicSkill_o *this,
        int32_t commandSpellId,
        System_Int32_array *targetIds,
        System_Collections_Generic_List_int__o *funcIdList,
        System_Collections_Generic_List_DataVals__o *dataValsList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BalanceConfig_c *v16; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  BattleData_o *IsQuestClear_38126524; // x0
  __int64 v19; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v24; // x22
  unsigned int v25; // w24
  AddSkillData_o *v26; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49BDD0C & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    sub_1B4CF90(&CondType_TypeInfo, v11);
    sub_1B4CF90(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v12);
    sub_1B4CF90(&DataManager_TypeInfo, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DataVals__AddRange__, v15);
    byte_49BDD0C = 1;
  }
  v16 = BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v16->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_38126524 = (BattleData_o *)CondType__IsQuestClear_38126524(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_38126524 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !targetIds->max_length )
      goto LABEL_30;
    IsQuestClear_38126524 = this->fields.data;
    if ( !IsQuestClear_38126524 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_38126524, targetIds->m_Items[1], 0LL);
    if ( !ServantData )
      return;
    v21 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0LL) )
    {
      return;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_38126524 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v21->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1B4D1EC(IsQuestClear_38126524, v19);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v24 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_38126524;
      v25 = 0;
      while ( v25 < max_length )
      {
        v26 = classBoardAddCommandSpells->m_Items[v25];
        if ( !v26 || !v24 )
          goto LABEL_29;
        IsQuestClear_38126524 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v24,
                                                  &entity,
                                                  v26->fields.id,
                                                  commandSpellId,
                                                  v26->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_38126524 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_38126524 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_38126524 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_38126524,
            (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v25 >= max_length )
          return;
      }
LABEL_30:
      sub_1B4D1F4(IsQuestClear_38126524, v19);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  BattleData_o *data; // x8
  BattleLogicSkill_o *v30; // x25
  BattleServantData_o *v31; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x23
  unsigned __int64 v34; // x20
  __int64 v35; // x24
  struct System_Int32_array *v36; // x8
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Func_int__bool__o *v39; // x27
  __int64 v40; // x27
  System_Func_int__bool__o *v41; // x27
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v43; // x3
  System_Func_int__bool__o *v44; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_Int32_array *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Object_array *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  CGThumbnailListItem_o *v63; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v64; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v65; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v11 = skillLvEnt;
  v12 = this;
  if ( (byte_49BDD0A & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_int____75494880, skillLvEnt);
    sub_1B4CF90(&Method_DataManager_GetMasterData_FunctionMaster___, v13);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v14);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DataVals__Add__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DataVals__ToArray__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DataVals___ctor__, v21);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B4CF90(&System_Collections_Generic_List_DataVals__TypeInfo, v23);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__, v25);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__, v26);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__, v27);
    this = (BattleLogicSkill_o *)sub_1B4CF90(&BattleLogicSkill___c__DisplayClass19_0_TypeInfo, v28);
    byte_49BDD0A = 1;
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
  v30 = this;
  this = (BattleLogicSkill_o *)BattleData__getServantData(data, actorId, 0LL);
  if ( !v11 )
    goto LABEL_52;
  v31 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(v11, 0LL);
  actorIndividualities = v31 ? BattleServantData__getConcatServantAndBuffIndividualityies(v31, 0LL, 0, 0, 0, 0LL) : 0LL;
  v63 = (CGThumbnailListItem_o *)functionIdArray;
  v65 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v64 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v34 = 0LL;
  while ( (__int64)v34 < (int)funcId->max_length )
  {
    v35 = sub_1B4D1DC(BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    BattleLogicSkill___c__DisplayClass19_0___ctor((BattleLogicSkill___c__DisplayClass19_0_o *)v35, 0LL);
    v36 = v11->fields.funcId;
    if ( !v36 )
      goto LABEL_52;
    if ( v34 >= v36->max_length )
      goto LABEL_57;
    if ( !v35 )
      goto LABEL_52;
    *(_DWORD *)(v35 + 16) = v36->m_Items[v34 + 1];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v30, 0LL)
      || (v39 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v39,
            (Il2CppObject *)v35,
            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__,
            0LL),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__49201684(
                                         (System_Int32_array *)v30,
                                         (System_Func_T__bool__o *)v39,
                                         (const MethodInfo_2EEC214 *)Method_BasicHelper_Any_int____75494880),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v35 + 24) = 0LL;
      v40 = v35 + 24;
      sub_1B4CF34((CGThumbnailListItem_o *)(v35 + 24), 0, v37, v38);
      if ( !v33 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v33,
                                     (Il2CppObject **)(v35 + 24),
                                     *(_DWORD *)(v35 + 16),
                                     (const MethodInfo_319D9E8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v40 )
          goto LABEL_52;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v40 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v40 )
            goto LABEL_52;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v40 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v40 )
              goto LABEL_52;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v40 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v40 )
                goto LABEL_52;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v40 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v40 )
                  goto LABEL_52;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v40 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v41 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v41,
                        (Il2CppObject *)v35,
                        Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__,
                        0LL),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__49201684(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v41,
                                                     (const MethodInfo_2EEC214 *)Method_BasicHelper_Any_int____75494880),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v34 >= SetTypeDataValArray->max_length )
LABEL_57:
                    sub_1B4D1F4(this, skillLvEnt);
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v34];
                  if ( !this )
                    goto LABEL_52;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0LL);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v43);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v44 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v44,
                            (Il2CppObject *)v35,
                            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__,
                            0LL),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__49201684(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v44,
                                                         (const MethodInfo_2EEC214 *)Method_BasicHelper_Any_int____75494880),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v65;
                      if ( !v65 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*(unsigned int *)(v35 + 16);
                      items = v65->fields._items;
                      v46 = Method_System_Collections_Generic_List_int__Add__;
                      ++v65->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v65->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v65,
                          (int32_t)skillLvEnt,
                          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v65->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)skillLvEnt;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v11, 0LL);
                      if ( !this )
                        goto LABEL_52;
                      if ( v34 >= LODWORD(this->fields.logic) )
                        goto LABEL_57;
                      if ( !v64 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*((_QWORD *)&this->fields.logictarget + v34);
                      v50 = v64->fields._items;
                      v51 = Method_System_Collections_Generic_List_DataVals__Add__;
                      ++v64->fields._version;
                      if ( !v50 )
                        goto LABEL_52;
                      v52 = v64->fields._size;
                      if ( (unsigned int)v52 >= v50->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v64,
                          (Il2CppObject *)skillLvEnt,
                          *(const MethodInfo_35801DC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v53 = &v50->obj.klass + v52;
                        v64->fields._size = v52 + 1;
                        v53[4] = (Il2CppClass *)skillLvEnt;
                        sub_1B4CF34((CGThumbnailListItem_o *)(v53 + 4), (int32_t)skillLvEnt, v48, v49);
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
    ++v34;
    if ( !funcId )
      goto LABEL_52;
  }
  this = (BattleLogicSkill_o *)v65;
  if ( !v65
    || (v54 = System_Collections_Generic_List_int___ToArray(
                v65,
                (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__),
        v63->klass = (CGThumbnailListItem_c *)v54,
        sub_1B4CF34(v63, (int32_t)v54, v55, v56),
        (this = (BattleLogicSkill_o *)v64) == 0LL)
    || (v57 = System_Collections_Generic_List_object___ToArray(
                v64,
                (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v57,
        sub_1B4CF34((CGThumbnailListItem_o *)dataValsArray, (int32_t)v57, v58, v59),
        !v63->klass) )
  {
LABEL_52:
    sub_1B4D1EC(this, skillLvEnt);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t svtUniqueId; // w26
  int32_t v23; // w0
  int32_t skilllv; // w27
  int32_t v25; // w29
  BattleActionData_o *v26; // x24
  BattleServantData_o *ServantData; // x25
  bool v28; // w22
  Il2CppObject *Entity; // x0
  SkillEntity_o *v30; // x28
  SkillLvEntity_o *v31; // x27
  System_Int32_array *Individualities; // x29
  System_Int32_array *ActIndividuality; // x21
  ServantEntity_o *svtdata; // x21
  int32_t Rarity; // w0
  __int64 v36; // x21
  __int64 v37; // x26
  int32_t v38; // w0
  bool v39; // w28
  int32_t Timing_k__BackingField; // w21
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  int32_t type; // w8
  BattleLogicFunction_o *logicfunction; // x22
  System_Int32_array *funcId; // x23
  struct BattleBuffData_o *buffData; // x8
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x8
  int v47; // w9
  BattleData_o *data; // x20
  struct FunctionMaster_o *master; // x21
  Il2CppObject *klass; // x22
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  bool v54; // [xsp+3Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v10 = this;
  if ( (byte_49BDD02 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BattleServantData__TypeInfo, skillInfo);
    sub_1B4CF90(&BattleActionData_TypeInfo, v11);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillMaster___, v13);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1B4CF90(&BattleLogicFunction_FunctionArgument_TypeInfo, v15);
    sub_1B4CF90(&Individuality_TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Clear__, v17);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B4CF90(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__, v20);
    this = (BattleLogicSkill_o *)sub_1B4CF90(&BattleLogicSkill___c_TypeInfo, v21);
    byte_49BDD02 = 1;
  }
  if ( !skillInfo )
    goto LABEL_45;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v23 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, bool, BattleLogicSkill_SkillExecArgs_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
          isShift,
          isDeckDataLoad,
          skillExecArgs,
          method);
  skilllv = skillInfo->fields.skilllv;
  v25 = v23;
  v26 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v26, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_45;
  v54 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  v28 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v25,
             (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v30 = (SkillEntity_o *)Entity;
  if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
    return;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v25, skilllv, 0LL);
  v31 = (SkillLvEntity_o *)this;
  if ( skillInfo->fields.type != 12 )
    goto LABEL_48;
  if ( !ServantData )
    goto LABEL_45;
  Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 1, 0, 0LL);
  ActIndividuality = SkillEntity__getActIndividuality(v30, 0LL);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  if ( Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
  {
    svtdata = ServantData->fields.svtdata;
    Rarity = BattleServantData__getRarity(ServantData, 0LL);
    this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v31, svtdata, Rarity, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_48:
      if ( v26 )
      {
        v26->fields.actorId = svtUniqueId;
        if ( ServantData )
        {
          v37 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
          v36 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v55.fields.currentCryptoKey = v37;
          *(_QWORD *)&v55.fields.fakeValue = v36;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v55, 0LL);
          v26->fields.motionId = SkillEntity__GetMotionId(v30, v38, 0LL);
          v39 = v28;
          v26->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
          v26->fields.commandAssistId = skillInfo->fields.commandAssistId;
          v26->fields.cardIndex = skillInfo->fields.index;
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
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B4D1DC(BattleLogicFunction_FunctionArgument_TypeInfo);
          BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
          if ( argument )
          {
            type = skillInfo->fields.type;
            argument->fields.isDeckDataLoad = v54;
            argument->fields._SkillTiming_k__BackingField = Timing_k__BackingField;
            argument->fields.grantSkillType = type;
            if ( v31 )
            {
              logicfunction = v10->fields.logicfunction;
              funcId = v31->fields.funcId;
              this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v31, 0LL);
              if ( logicfunction )
              {
                this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                               logicfunction,
                                               v26,
                                               funcId,
                                               (DataVals_array *)this,
                                               1,
                                               1,
                                               0,
                                               v39,
                                               0,
                                               1,
                                               1,
                                               argument,
                                               v31->fields.skillId,
                                               0LL);
                if ( !skillExecArgs || skillExecArgs->fields._RemoveActorUnfixedBuff_k__BackingField )
                {
                  buffData = ServantData->fields.buffData;
                  if ( !buffData )
                    goto LABEL_45;
                  unfixedBuffList = buffData->fields.unfixedBuffList;
                  if ( !unfixedBuffList )
                    goto LABEL_45;
                  v47 = unfixedBuffList->fields._version + 1;
                  unfixedBuffList->fields._size = 0;
                  unfixedBuffList->fields._version = v47;
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
                  master = (struct FunctionMaster_o *)sub_1B4D1DC(System_Action_BattleServantData__TypeInfo);
                  System_Action_object____ctor(
                    (System_Action_object__o *)master,
                    klass,
                    Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                    0LL);
                  static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                  static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)master, v52, v53);
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
      sub_1B4D1EC(this, skillInfo);
    }
  }
}


bool __fastcall BattleLogicSkill__checkConditions(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **text,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x26
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 Instance; // x0
  __int64 v36; // x1
  SkillLvMaster_o *v37; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  System_Collections_Generic_Dictionary_object__object__o *v41; // x0
  __int64 v42; // x25
  __int64 v43; // x24
  __int64 v44; // x23
  __int64 v45; // x22
  BattleServantData_o *v46; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v48; // x8
  unsigned int NowHp; // w0
  unsigned int v50; // w0
  int32_t v51; // w20
  int32_t v52; // w20
  __int64 *v54; // x8
  System_String_o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3

  if ( (byte_49BDD05 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7);
    sub_1B4CF90(&System_Func_string__int__bool__TypeInfo, v8);
    sub_1B4CF90(&System_Func_string__double__bool__TypeInfo, v9);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__, v12);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__, v13);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__, v14);
    sub_1B4CF90(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__, v15);
    sub_1B4CF90(&BattleLogicSkill___c__DisplayClass14_0_TypeInfo, v16);
    sub_1B4CF90(&StringLiteral_2877/*"BATTLE_SKILLERROR_NP_LOWER"*/, v17);
    sub_1B4CF90(&StringLiteral_2875/*"BATTLE_SKILLERROR_HP_LOWER"*/, v18);
    sub_1B4CF90(&StringLiteral_12059/*"STAR_HIGHER"*/, v19);
    sub_1B4CF90(&StringLiteral_7073/*"HP_PER_LOWER"*/, v20);
    sub_1B4CF90(&StringLiteral_2876/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v21);
    sub_1B4CF90(&StringLiteral_2874/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v22);
    sub_1B4CF90(&StringLiteral_7072/*"HP_PER_HIGHER"*/, v23);
    sub_1B4CF90(&StringLiteral_2878/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v24);
    sub_1B4CF90(&StringLiteral_9154/*"NP_HIGHER"*/, v25);
    sub_1B4CF90(&StringLiteral_2879/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v26);
    sub_1B4CF90(&StringLiteral_7074/*"HP_VAL_HIGHER"*/, v27);
    sub_1B4CF90(&StringLiteral_12060/*"STAR_LOWER"*/, v28);
    sub_1B4CF90(&StringLiteral_1/*""*/, v29);
    sub_1B4CF90(&StringLiteral_9155/*"NP_LOWER"*/, v30);
    sub_1B4CF90(&StringLiteral_7075/*"HP_VAL_LOWER"*/, v31);
    byte_49BDD05 = 1;
  }
  v32 = sub_1B4D1DC(BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
  BattleLogicSkill___c__DisplayClass14_0___ctor((BattleLogicSkill___c__DisplayClass14_0_o *)v32, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)text, (int32_t)StringLiteral_1/*""*/, v33, v34);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_47;
  v37 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v37 )
    goto LABEL_47;
  Instance = (__int64)SkillLvMaster__GetEntity(v37, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v32 )
    goto LABEL_47;
  v40 = *(_QWORD *)(Instance + 56);
  *(_QWORD *)(v32 + 16) = v40;
  sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 16), v40, v38, v39);
  v41 = *(System_Collections_Generic_Dictionary_object__object__o **)(v32 + 16);
  if ( !v41 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v41,
         (const MethodInfo_32577E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v42 = sub_1B4D1DC(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v42,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__,
    0LL);
  v43 = sub_1B4D1DC(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v43,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__,
    0LL);
  v44 = sub_1B4D1DC(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v44,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__,
    0LL);
  v45 = sub_1B4D1DC(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v45,
    (Il2CppObject *)v32,
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
  v46 = (BattleServantData_o *)Instance;
  Instance = BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v42 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
          *(_QWORD *)(v42 + 64),
          StringLiteral_9154/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v42 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2876/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v46, 0LL);
  if ( !v43 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
               *(_QWORD *)(v43 + 64),
               StringLiteral_9155/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v43 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2877/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
               *(_QWORD *)(v42 + 64),
               StringLiteral_12059/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v42 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2878/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v48 = this->fields.data;
  if ( !v48 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_12060/*"STAR_LOWER"*/,
          (unsigned int)v48->fields.totalCriticalStars,
          *(_QWORD *)(v43 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2879/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v46, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
          *(_QWORD *)(v42 + 64),
          StringLiteral_7074/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v42 + 40)) & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2874/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v50 = BattleServantData__getNowHp(v46, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_7075/*"HP_VAL_LOWER"*/,
          v50,
          *(_QWORD *)(v43 + 40)) & 1) != 0 )
  {
    v51 = BattleServantData__getNowHp(v46, 0LL);
    Instance = BattleServantData__getMaxHp(v46, 0LL);
    if ( !v44 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v44 + 24))(
            *(_QWORD *)(v44 + 64),
            StringLiteral_7072/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v44 + 40),
            (double)v51 * 1000.0 / (double)(int)Instance) & 1) != 0 )
    {
      v52 = BattleServantData__getNowHp(v46, 0LL);
      Instance = BattleServantData__getMaxHp(v46, 0LL);
      if ( v45 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v45 + 24))(
                *(_QWORD *)(v45 + 64),
                StringLiteral_7073/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v45 + 40),
                (double)v52 * 1000.0 / (double)(int)Instance) & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1B4D1EC(Instance, v36);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = &StringLiteral_2875/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v55 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
  *text = v55;
  sub_1B4CF34((CGThumbnailListItem_o *)text, (int32_t)v55, v56, v57);
  return 0;
}


BattleActionData_o *__fastcall BattleLogicSkill__createCommandSpell(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  DataManager_o *skillId; // x0
  __int64 v19; // x1
  struct BattleSkillInfoData_o *skillInfo; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  DataManager_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleActionData_c *v25; // x0
  struct System_Int32_array *ptTarget; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_int__o *v29; // x24
  System_Collections_Generic_List_object__o *v30; // x25
  const MethodInfo *v31; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v33; // x24
  System_Object_array *v34; // x25
  BattleActionData_o *v35; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v39; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_49BDD03 & 1) == 0 )
  {
    sub_1B4CF90(&BattleActionData_TypeInfo, task);
    sub_1B4CF90(&BattleActionLogManagerInterface_TypeInfo, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommandSpellMaster___, v6);
    sub_1B4CF90(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DataVals__AddRange__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DataVals__ToArray__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DataVals___ctor__, v13);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B4CF90(&System_Collections_Generic_List_DataVals__TypeInfo, v15);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49BDD03 = 1;
  }
  v17 = sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v17, 0LL);
  if ( !task )
    goto LABEL_29;
  skillInfo = task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_29;
  skillId = (DataManager_o *)DataManager__GetMasterData_object_(
                               skillId,
                               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_29;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v21 )
    goto LABEL_29;
  skillId = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                               v21,
                               (int32_t)skillId,
                               (const MethodInfo_319D99C *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_29;
  v22 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v17, 0LL);
  *(_DWORD *)(v17 + 32) = -1;
  if ( !v22 )
    goto LABEL_29;
  *(_DWORD *)(v17 + 48) = HIDWORD(v22->fields.m_CancellationTokenSource);
  v25 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v25 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v17 + 56) = v25->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = task->fields.ptTarget;
  *(_QWORD *)(v17 + 40) = ptTarget;
  sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 40), (int32_t)ptTarget, v23, v24);
  *(_QWORD *)(v17 + 144) = skillInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 144), (int32_t)skillInfo, v27, v28);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_29;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v29 )
    goto LABEL_29;
  System_Collections_Generic_List_int___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)v22->fields.lookup,
    (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v22, 0LL);
  if ( !v30 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v22->fields.m_CachedPtr,
    task->fields.ptTarget,
    v29,
    (System_Collections_Generic_List_DataVals__o *)v30,
    v31);
  logicfunction = this->fields.logicfunction;
  v33 = System_Collections_Generic_List_int___ToArray(
          v29,
          (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  v34 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !logicfunction )
    goto LABEL_29;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v17,
                               v33,
                               (DataVals_array *)v34,
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
  v35 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_29;
  klass = actionLogManager->klass;
  v39 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v39;
      p_offset += 2;
      if ( !v39 )
        goto LABEL_22;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_22:
    p_method = sub_1B9D724(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
    actionLogManager,
    task,
    *(_QWORD *)(p_method + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v22, 0LL) > 0.0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      perf = logic->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v22, 0LL);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0LL);
        return v35;
      }
    }
LABEL_29:
    sub_1B4D1EC(skillId, v19);
  }
  return v35;
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
  v5 = BattleLogicSkill__createSkillData_44336572(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_1B4D1EC(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_44336572(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v10; // x28
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  BattleLogicSkill_o **p_fields; // x19
  BattleActionData_o *v27; // x22
  BattleActionData_o *v28; // x25
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  BattleBoostItemInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x22
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *v34; // x24
  BattleActionData_c *v35; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 methodPtr_low; // x10
  BattleLogicSkill_o *v38; // x26
  BattleLogicSkill_o *v39; // x26
  SkillEntity_o *v40; // x23
  bool isForcedSkillSpeedOne; // w26
  bool v42; // w27
  BattleLogicSkill_o *v43; // x22
  BattleLogicSkill_o *v44; // x29
  BattleServantData_o *EnemyServantData; // x0
  __int64 v46; // x28
  __int64 v47; // x29
  BattleLogicSkill_o *v48; // x29
  struct System_Int32_array *ptTarget; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_String_o *Name; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  BattleLogicSkill_o *v59; // x29
  BattleLogicSkill_o *v60; // x26
  BattleLogicSkill_o *v61; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  CGThumbnailListItem_o *p_motionMessage; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Int32_array *effectList; // x1
  int logic; // w8
  BattleLogicSkill_o *v69; // x26
  int i; // w9
  __int64 v71; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  bool v75; // w23
  int32_t ActorId; // w0
  const MethodInfo *v77; // x6
  bool v78; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  BattleLogicFunction_o *v82; // x29
  System_Int32_array *v83; // x27
  DataVals_array *v84; // x28
  int32_t v85; // w0
  UnityEngine_Object_o *v86; // x28
  int32_t v87; // w27
  struct BattleLogic_o *v88; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct BattleLogicFunction_o *v92; // x25
  BattleLogicFunction_c *klass; // x8
  __int64 v94; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct BattleLogic_o *v99; // x1
  int32_t v100; // w1
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  void **p_logictarget; // x27
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  void *v106; // x1
  int32_t v107; // w1
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  int32_t type; // w23
  BattleLogicSkill_o *v111; // x25
  int v112; // w8
  BattleLogicSkill_o *v113; // x25
  BattleLogicSkill_o *v114; // x25
  BattleLogicSkill_o *v115; // x27
  int32_t v116; // w28
  const MethodInfo *v117; // x5
  struct BattleLogic_o *v118; // x27
  BattleLogicTask_array *v119; // x0
  BattleLogicSkill_o *v120; // x25
  const MethodInfo *v121; // x4
  int32_t v122; // w27
  BattleLogic_o *v123; // x25
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v125; // x23
  BattleLogicSkill_o *v126; // x23
  BattleLogicTask_o *v127; // x23
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  struct BattleLogic_o *v130; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattleData_o *data; // x8
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  SkillEntity_o *v136; // x19
  BattleLogicTask_o *v137; // x23
  int32_t v138; // w0
  const MethodInfo *v139; // x3
  struct BattleLogic_o *v140; // x19
  struct BattleLogic_o *v141; // x8
  struct BattlePerformance_o *v142; // x9
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-88h]
  DataVals_o *v145; // [xsp+40h] [xbp-80h]
  SkillEntity_o *Entity; // [xsp+48h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16

  v10 = this;
  if ( (byte_49BDD00 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_IndexValue_int___, task);
    sub_1B4CF90(&BattleActionData_TypeInfo, v11);
    sub_1B4CF90(&BattleActionLogManagerInterface_TypeInfo, v12);
    sub_1B4CF90(&BattleBoostItemInfoData_TypeInfo, v13);
    sub_1B4CF90(&BattleLogicTask_TypeInfo, v14);
    sub_1B4CF90(&CheckUpdateShiftTask_TypeInfo, v15);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1B4CF90(&BattleLogicFunction_FunctionArgument_TypeInfo, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v21);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B4CF90(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v24);
    this = (BattleLogicSkill_o *)sub_1B4CF90(&StringLiteral_1/*""*/, v25);
    byte_49BDD00 = 1;
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
  v27 = (BattleActionData_o *)sub_1B4D1DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_173;
  v28 = BattleActionData__AddDisplayTriggerIntervalBuff(v27, task, 0LL);
  *baseActionData = v28;
  sub_1B4CF34((CGThumbnailListItem_o *)baseActionData, (int32_t)v28, v29, v30);
  if ( !v28 )
    goto LABEL_173;
  v28->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_173;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v32 )
    goto LABEL_173;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v32,
                              (int32_t)this,
                              (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_173;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v34 = (SkillLvEntity_o *)this;
  v28->fields.isCounter = task->fields.isCounter;
  v35 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v35 = BattleActionData_TypeInfo;
  }
  static_fields = v35->static_fields;
  v28->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = BattleActionData_TypeInfo->static_fields;
    }
    v28->fields.type = static_fields->TYPE_BOOSTSKILL;
    v28->fields.imageId = skillInfo->fields.itemImageId;
    methodPtr_low = LOBYTE(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      this = (BattleLogicSkill_o *)BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        v28->fields.noOperation = 1;
    }
  }
  if ( task->fields.checkAlive )
  {
    v38 = *p_fields;
    this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v38 )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)v38, (int32_t)this, 0LL);
    if ( this )
    {
      this = (BattleLogicSkill_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
      v39 = 0LL;
      if ( ((unsigned __int8)this & 1) == 0 )
        return (BattleActionData_o *)v39;
    }
  }
  v145 = baseVals;
  if ( task->fields.isForcedSpeedOne )
  {
    v40 = Entity;
    isForcedSkillSpeedOne = 1;
  }
  else
  {
    v40 = Entity;
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
  v42 = fromSkillCopyFunc;
  v43 = v10;
  this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
  v28->fields.actorId = (int)this;
  if ( !v34 )
    goto LABEL_173;
  v44 = *p_fields;
  this = (BattleLogicSkill_o *)SkillLvEntity__GetActNpcServantId(v34, 0LL);
  if ( !v44 )
    goto LABEL_173;
  EnemyServantData = BattleData__getEnemyServantData((BattleData_o *)v44, (int32_t)this, 0LL);
  if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
  {
    v46 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
    v47 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v149.fields.currentCryptoKey = v46;
    *(_QWORD *)&v149.fields.fakeValue = v47;
    v28->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v149, 0LL);
  }
  v48 = *p_fields;
  this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !v48 )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)BattleData__getServantId((BattleData_o *)v48, (int32_t)this, 0LL);
  if ( !v40 )
    goto LABEL_173;
  v28->fields.motionId = SkillEntity__GetMotionId(v40, (int32_t)this, 0LL);
  v28->fields.targetId = BattleLogicTask__getTarget(task, 0LL);
  ptTarget = task->fields.ptTarget;
  v28->fields.pttargetIds = ptTarget;
  sub_1B4CF34((CGThumbnailListItem_o *)&v28->fields.pttargetIds, (int32_t)ptTarget, v50, v51);
  Name = SkillEntity__getName(v40, 0LL);
  v28->fields.skillMessage = Name;
  sub_1B4CF34((CGThumbnailListItem_o *)&v28->fields.skillMessage, (int32_t)Name, v53, v54);
  v28->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&v28->fields.skillInfo, (int32_t)skillInfo, v55, v56);
  v28->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
  v28->fields.checkRevengeId = task->fields.checkRevengeId;
  v59 = v43;
  if ( BattleLogicTask__IsGimmick(task, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__GetGimmickStartVoiceArray((BattleData_o *)this, 0LL);
    if ( !*p_fields )
      goto LABEL_173;
    v60 = this;
    this = (BattleLogicSkill_o *)BattleData__GetGimmickResultVoiceArray((BattleData_o *)*p_fields, 0LL);
    if ( !*p_fields )
      goto LABEL_173;
    v61 = this;
    GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray((BattleData_o *)*p_fields, 0LL);
    BattleActionData__SetGimmickData(
      v28,
      task->fields.gimmickIndexArray,
      (System_String_array *)v60,
      (System_Object_array *)v61,
      GimmickAnimTypeArray,
      0LL);
    v59 = v43;
  }
  motionMessage = task->fields.motionMessage;
  if ( motionMessage && motionMessage->fields._stringLength >= 1 )
  {
    v28->fields.motionMessage = motionMessage;
    p_motionMessage = (CGThumbnailListItem_o *)&v28->fields.motionMessage;
  }
  else
  {
    v28->fields.motionMessage = 0LL;
    p_motionMessage = (CGThumbnailListItem_o *)&v28->fields.motionMessage;
    LODWORD(motionMessage) = 0;
  }
  sub_1B4CF34(p_motionMessage, (int32_t)motionMessage, v57, v58);
  if ( (task->fields.actortype | 4) == 5 )
    BattleActionData__setStateField(v28, 0LL);
  effectList = v40->fields.effectList;
  v28->fields.effectlist = effectList;
  sub_1B4CF34((CGThumbnailListItem_o *)&v28->fields.effectlist, (int32_t)effectList, v65, v66);
  this = (BattleLogicSkill_o *)v59->fields.logic;
  if ( !this )
LABEL_173:
    sub_1B4D1EC(this, task);
  BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
  if ( skillInfo->fields.type == 21 )
  {
    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v34, 0LL);
    if ( !this )
      goto LABEL_173;
    logic = (int)this->fields.logic;
    v69 = this;
    if ( logic >= 1 )
    {
      for ( i = 0; i != logic; ++i )
      {
        if ( logic == i )
          sub_1B4D1F4(this, task);
        v71 = *((_QWORD *)&this->fields.logictarget + i);
        if ( !v71 )
          goto LABEL_173;
        *(_BYTE *)(v71 + 72) = 1;
      }
    }
    logicfunction = v59->fields.logicfunction;
    funcId = v34->fields.funcId;
    this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                   skillInfo,
                                   skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !logicfunction )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                   logicfunction,
                                   v28,
                                   funcId,
                                   (DataVals_array *)v69,
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
    v39 = this;
    goto LABEL_90;
  }
  changeTDCommandType = skillInfo->fields.changeTDCommandType;
  if ( (changeTDCommandType & 0x80000000) == 0 )
    v28->fields.commandType = changeTDCommandType;
  functionIdArray = v34->fields.funcId;
  dataValsArray = SkillLvEntity__getDataValsList(v34, 0LL);
  v75 = v145 == 0LL || !v42;
  if ( v145 != 0LL && v42 )
  {
    ActorId = BattleLogicTask__getActorId(task, 0LL);
    v39 = 0LL;
    if ( !BattleLogicSkill__SetSkillCopyFunction(v59, v34, v145, &functionIdArray, &dataValsArray, ActorId, v77) )
      return (BattleActionData_o *)v39;
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__isEnemyID((BattleData_o *)this, v28->fields.actorId, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*p_fields )
        goto LABEL_173;
      v78 = LODWORD((*p_fields)[18].fields.logictarget) == 0;
    }
    else
    {
      v78 = 0;
    }
    v28->fields.isReversalShortBuffTurn = v78;
  }
  if ( skillInfo->fields.type == 1 )
  {
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B4D1DC(BattleLogicFunction_FunctionArgument_TypeInfo);
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
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B4D1DC(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
      if ( !argument )
        goto LABEL_173;
      goto LABEL_87;
    }
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B4D1DC(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
  }
  overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
  if ( !overwriteFuncSideEffectArg )
  {
    overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1B4D1DC(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
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
  v82 = v59->fields.logicfunction;
  v84 = dataValsArray;
  v83 = functionIdArray;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v82 )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                 v82,
                                 v28,
                                 v83,
                                 v84,
                                 0,
                                 1,
                                 0,
                                 0,
                                 0,
                                 v75,
                                 1,
                                 argument,
                                 (int32_t)this,
                                 0LL);
  v39 = this;
  v59 = v43;
LABEL_90:
  if ( task->fields.actortype == 5 )
  {
    if ( !v39 )
      goto LABEL_173;
    v85 = BasicHelper__IndexValue_int__49218204(
            (System_Collections_Generic_List_T__o *)v39[6].klass,
            0,
            0,
            (const MethodInfo_2EF029C *)Method_BasicHelper_IndexValue_int___);
    v86 = (UnityEngine_Object_o *)v39[1].fields.logic;
    v87 = v85;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleLogicSkill_o *)UnityEngine_Object__op_Equality(v86, 0LL, 0LL);
    if ( v87 >= 1 && ((unsigned __int8)this & 1) != 0 )
    {
      v88 = v59->fields.logic;
      if ( !v88 )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)v88->fields.perf;
      if ( !this )
        goto LABEL_173;
      ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v87, 0LL);
      v39[1].fields.logic = (struct BattleLogic_o *)ServantGameObject;
      sub_1B4CF34((CGThumbnailListItem_o *)&v39[1].fields.logic, (int32_t)ServantGameObject, v90, v91);
    }
  }
  ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
    skillInfo,
    skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
  BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
  this = (BattleLogicSkill_o *)v59->fields.logic;
  if ( !this )
    goto LABEL_173;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
  if ( task->fields.IsResetPrevAttackInfo )
  {
    if ( !v39 )
      goto LABEL_173;
    BYTE4(v39[1].fields.logicfunction) = 0;
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_173;
    BattleData__setCommandAttack((BattleData_o *)this, 0, 0, 0LL);
  }
  if ( !*p_fields )
    goto LABEL_173;
  v92 = (*p_fields)[10].fields.logicfunction;
  if ( !v92 )
    goto LABEL_173;
  klass = v92->klass;
  v94 = *(unsigned __int16 *)(&v92->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v92->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v94;
      p_offset += 2;
      if ( !v94 )
        goto LABEL_110;
    }
    v96 = (__int64)(&klass[1]._1.namespaze + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_110:
    v96 = sub_1B9D724(v92, BattleActionLogManagerInterface_TypeInfo, 5LL);
  }
  this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(struct BattleLogicFunction_o *, BattleLogicTask_o *, _QWORD))v96)(
                                 v92,
                                 task,
                                 *(_QWORD *)(v96 + 8));
  if ( !v39 )
    goto LABEL_173;
  if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v39, 0LL) )
  {
    v99 = v39[2].fields.logic;
    v39[9].monitor = v99;
    sub_1B4CF34((CGThumbnailListItem_o *)&v39[9].monitor, (int32_t)v99, v97, v98);
    v100 = (int)StringLiteral_1/*""*/;
    v39[2].fields.logic = (struct BattleLogic_o *)StringLiteral_1/*""*/;
    sub_1B4CF34((CGThumbnailListItem_o *)&v39[2].fields.logic, v100, v101, v102);
    p_logictarget = (void **)&v39[2].fields.logictarget;
    if ( !System_String__IsNullOrEmpty((System_String_o *)v39[2].fields.logictarget, 0LL) )
    {
      v106 = *p_logictarget;
      v39[9].monitor = *p_logictarget;
      sub_1B4CF34((CGThumbnailListItem_o *)&v39[9].monitor, (int32_t)v106, v104, v105);
      v107 = (int)StringLiteral_1/*""*/;
      *p_logictarget = StringLiteral_1/*""*/;
      sub_1B4CF34((CGThumbnailListItem_o *)&v39[2].fields.logictarget, v107, v108, v109);
    }
  }
  type = skillInfo->fields.type;
  v111 = *p_fields;
  this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !v111 )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)v111, (int32_t)this, 0LL);
  if ( type == 1 || this )
  {
    this = (BattleLogicSkill_o *)SkillLvEntity__IsNoTargetSkipSkill(v34, 0LL);
    v112 = (unsigned __int8)this & 1;
  }
  else
  {
    v112 = 1;
  }
  if ( (v112 & (LOBYTE(v39[5].klass) ^ 1)) != 0 || BYTE1(v39[6].monitor) && !BYTE2(v39[6].monitor) )
    return 0LL;
  if ( task->fields.isCanCounterTask )
  {
    v113 = *p_fields;
    this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v113 )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)v113, (int32_t)this, 0LL);
    if ( this )
    {
      v114 = this;
      ((void (__fastcall *)(BattleLogicSkill_o *, BattleLogicSkill_o *, Il2CppClass *))v39->klass[1]._1.castClass)(
        v39,
        *p_fields,
        v39->klass[1]._1.declaringType);
      this = (BattleLogicSkill_o *)v39[6].klass;
      if ( !this )
        goto LABEL_173;
      v115 = *p_fields;
      v116 = (int32_t)v114->fields.logic;
      this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                     (System_Collections_Generic_List_int__o *)this,
                                     (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v115 )
        goto LABEL_173;
      BattleData__SetWasAttackTargetIdList((BattleData_o *)v115, v116, (System_Int32_array *)this, 0LL);
      v118 = v59->fields.logic;
      if ( !v118 )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)v118->fields.logicnomal;
      if ( !this )
        goto LABEL_173;
      v119 = BattleLogicNomal__taskCounterFunc(
               (BattleLogicNomal_o *)this,
               (BattleData_o *)*p_fields,
               HIBYTE(v114[9].fields.logicfunction) == 0,
               1,
               0,
               v117);
      BattleLogic__addBattleLogicTask(v118, v119, 0LL);
    }
  }
  v120 = *p_fields;
  if ( task->fields.isFunctionedFunction )
  {
    if ( !v120 )
      goto LABEL_173;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)*p_fields, 0LL);
  }
  else
  {
    this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v39[6].klass )
      goto LABEL_173;
    v122 = (int)this;
    this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v39[6].klass,
                                   (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v120 )
      goto LABEL_173;
    BattleData__SetFunctionedTargetIdArray((BattleData_o *)v120, v122, (System_Int32_array *)this, 0LL);
    v123 = v59->fields.logic;
    if ( !v123 )
      goto LABEL_173;
    FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                        v59->fields.logic,
                                        (BattleData_o *)*p_fields,
                                        0LL);
    BattleLogic__addBattleLogicTask(v123, FunctionedFunctionBuffTaskArray, 0LL);
  }
  v125 = BattleLogicSkill__MakeAddInvokeSkillTask(v59, skillLvMst, v34, task, v121);
  this = (BattleLogicSkill_o *)SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v34, 0LL);
  if ( !v59->fields.logic )
    goto LABEL_173;
  if ( ((unsigned __int8)this & 1) != 0 )
    BattleLogic__AddTaskTargetTaskAfter(v59->fields.logic, task, v125, 0LL);
  else
    BattleLogic__AddBattleLogicTask(v59->fields.logic, v125, 0LL);
  v126 = *p_fields;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v126 )
    goto LABEL_173;
  BattleData__AddUseSkillId((BattleData_o *)v126, (int32_t)this, 0LL);
  if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v39, 0LL) )
  {
    v127 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v127, 0LL);
    if ( !v127 )
      goto LABEL_173;
    BattleLogicTask__setCheckEntryFunction(v127, 0LL);
    this = (BattleLogicSkill_o *)v59->fields.logic;
    if ( !this )
      goto LABEL_173;
    BattleLogic__AddBattleLogicTask((BattleLogic_o *)this, v127, 0LL);
  }
  if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0 )
  {
    this = (BattleLogicSkill_o *)SkillEntity__getSkillCutInId(Entity, 0LL);
    if ( !(_DWORD)this )
    {
      v130 = v59->fields.logic;
      if ( !v130 )
        goto LABEL_173;
      perf = v130->fields.perf;
      CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
      if ( !perf )
        goto LABEL_173;
      BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
      if ( v39[2].fields.logic )
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
          (BattleActionData_o *)v39,
          0LL);
        v39[2].fields.logic = 0LL;
        sub_1B4CF34((CGThumbnailListItem_o *)&v39[2].fields.logic, 0, v134, v135);
        BYTE4(v39[6].fields.data) = 1;
      }
    }
  }
  if ( task->fields.IsNotShowSkillMessage )
  {
    v39[2].fields.logic = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&v39[2].fields.logic, 0, v128, v129);
    BYTE4(v39[6].fields.data) = 1;
  }
  v136 = Entity;
  if ( SkillEntity__IsCheckUpdateShiftServant(Entity, 0LL) )
  {
    v137 = (BattleLogicTask_o *)sub_1B4D1DC(CheckUpdateShiftTask_TypeInfo);
    BattleLogicTask___ctor(v137, 0LL);
    v137->fields.actiontype = 68;
    this = (BattleLogicSkill_o *)v59->fields.logic;
    if ( !this )
      goto LABEL_173;
    BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)this, task, v137, 0LL);
    v136 = Entity;
  }
  v138 = BattleLogicTask__getActorId(task, 0LL);
  BattleLogicSkill__ExecuteShortenSkillBuff(v59, (BattleSkillInfoData_o *)skillInfo, v138, v139);
  if ( !task->fields.isForcedSpeedOne )
  {
    this = (BattleLogicSkill_o *)SkillEntity__IsBehaveAsAssistSkill(v136, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v140 = v59->fields.logic;
      if ( !v140 )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)v140->fields.perf;
      if ( !this )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)BattlePerformance__isEnableSkipStartQuest((BattlePerformance_o *)this, 0LL);
      v140->fields.isEnableSkipAssistSkill = (unsigned __int8)this & 1;
      v141 = v59->fields.logic;
      if ( !v141 )
        goto LABEL_173;
      v142 = v141->fields.perf;
      if ( !v142 )
        goto LABEL_173;
      v142->fields.isEnableSkipSkillCutIn = v141->fields.isEnableSkipAssistSkill;
    }
  }
  return (BattleActionData_o *)v39;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getGimmickTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleData_o *data; // x0
  BattleData_o *v7; // x20
  BattleData_o *v8; // x21
  const MethodInfo *v9; // x2
  int32_t HitGimmickSkillId; // w0
  unsigned int v11; // w22
  __int64 v12; // x21
  __int64 v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  BattleData_o *v16; // x8
  System_Int32_array *v17; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  BattleData_o *v19; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v23; // x0

  if ( (byte_49BDD08 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask___TypeInfo, method);
    sub_1B4CF90(&BattleLogicTask_TypeInfo, v3);
    sub_1B4CF90(&BattleSkillInfoData_TypeInfo, v4);
    sub_1B4CF90(&int___TypeInfo, v5);
    byte_49BDD08 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__GetGimmickSkillIdArray(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v7 = data;
  data = (BattleData_o *)BattleData__GetGimmickSkillRateArray(this->fields.data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v8 = data;
  data = (BattleData_o *)BattleData__GetReelIconArray(this->fields.data, 0LL);
  if ( !v7 )
    goto LABEL_26;
  if ( !v7->fields.m_CancellationTokenSource )
    return 0LL;
  if ( !v8 )
    goto LABEL_26;
  if ( !v8->fields.m_CancellationTokenSource )
    return 0LL;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.m_CancellationTokenSource )
    return 0LL;
  HitGimmickSkillId = BattleLogicSkill__GetHitGimmickSkillId((BattleLogicSkill_o *)data, (System_Int32_array *)v8, v9);
  if ( (HitGimmickSkillId & 0x80000000) != 0 )
    return 0LL;
  v11 = HitGimmickSkillId;
  v12 = sub_1B4D1DC(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_26;
  *(_DWORD *)(v12 + 24) = -1;
  *(_QWORD *)(v12 + 16) = 20LL;
  if ( v11 >= LODWORD(v7->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 376LL))(
    v12,
    *((unsigned int *)&v7->fields.rootfsm + v11),
    *(_QWORD *)(*(_QWORD *)v12 + 384LL));
  *(_DWORD *)(v12 + 36) = 1;
  v13 = sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, 0LL);
  data = (BattleData_o *)sub_1B4D038(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v11;
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 160) = data;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 160), (int32_t)data, v14, v15);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v16 = this->fields.data) == 0LL)
    || (v17 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v16, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v13,
          (BattleSkillInfoData_o *)v12,
          v17,
          FieldPlayerServantIDList,
          0,
          0,
          0LL),
        BattleLogicTask__setActor((BattleLogicTask_o *)v13, 5, -1, 0LL),
        (data = (BattleData_o *)sub_1B4D038(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1B4D1EC(data, method);
  }
  v19 = data;
  data = (BattleData_o *)sub_1B4D0CC(v13, data->klass->_1.element_class);
  if ( !data )
  {
    v23 = sub_1B4D210(0LL);
    sub_1B4D0B8(v23, 0LL);
  }
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1B4D1F4(data, method);
  v19->fields.rootfsm = (struct PlayMakerFSM_o *)v13;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->fields.rootfsm, v13, v20, v21);
  return (BattleLogicTask_array *)v19;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getQuestBehaviorSkillTask(
        BattleLogicSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  QuestBehaviorMaster_o *v13; // x20
  int32_t v14; // w21
  int32_t Phase; // w0
  QuestBehaviorEntity_array *BattleSkill; // x0
  QuestBehaviorEntity_array *v17; // x20
  System_Collections_Generic_List_object__o *v18; // x21
  __int64 v19; // x25
  QuestBehaviorEntity_o **m_Items; // x26
  __int64 v21; // x22
  unsigned int v22; // w0
  BattleLogicTask_o *v23; // x23
  System_Int32_array *v24; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_49BDD07 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask_TypeInfo, method);
    sub_1B4CF90(&BattleSkillInfoData_TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49BDD07 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !MasterData_object )
    return 0LL;
  v13 = (QuestBehaviorMaster_o *)MasterData_object;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v14 = (int)Instance;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  BattleSkill = QuestBehaviorMaster__getBattleSkill(v13, v14, Phase, 0LL);
  if ( !BattleSkill )
    return 0LL;
  v17 = BattleSkill;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( (int)v17->max_length >= 1 )
  {
    v19 = 0LL;
    m_Items = v17->m_Items;
    while ( 1 )
    {
      v21 = sub_1B4D1DC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v21, 0LL);
      if ( !v21 )
        break;
      *(_DWORD *)(v21 + 24) = -1;
      *(_QWORD *)(v21 + 16) = 20LL;
      if ( (unsigned int)v19 >= v17->max_length )
        goto LABEL_29;
      Instance = (DataManager_o *)m_Items[v19];
      if ( !Instance )
        break;
      v22 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0LL);
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 376LL))(
                                    v21,
                                    v22,
                                    *(_QWORD *)(*(_QWORD *)v21 + 384LL));
      if ( (unsigned int)v19 >= v17->max_length )
LABEL_29:
        sub_1B4D1F4(Instance, v11);
      Instance = (DataManager_o *)m_Items[v19];
      if ( !Instance )
        break;
      *(_DWORD *)(v21 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
      v23 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v23, 0LL);
      if ( !v23 )
        break;
      BattleLogicTask__setActor(v23, 5, -1, 0LL);
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
      if ( !this->fields.data )
        break;
      v24 = (System_Int32_array *)Instance;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
      BattleLogicTask__setActionSkill(v23, (BattleSkillInfoData_o *)v21, v24, FieldPlayerServantIDList, 0, 0, 0LL);
      BattleLogicTask__setActor(v23, 5, -1, 0LL);
      if ( !v18 )
        break;
      items = v18->fields._items;
      v29 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v18->fields._version;
      if ( !items )
        break;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v23,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v23;
        sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v23, v26, v27);
      }
      if ( (int)++v19 >= (signed int)v17->max_length )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v18,
                                          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1B4D1EC(Instance, v11);
  }
  if ( !v18 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSkill__taskCommandSpell(
        BattleLogicSkill_o *this,
        int32_t skillId,
        int32_t skillLv,
        System_Int32_array *ptTargetList,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x21
  BattleLogicTask_o *v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  const MethodInfo *v23; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_49BDCFE & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_49BDCFE = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v14, 0LL);
  if ( !v14
    || (BattleLogicTask__setCommandSpell(v14, skillId, 0LL, ptTargetList, 0LL), !v13)
    || (items = v13->fields._items,
        v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
    sub_1B4D1EC(v15, v16);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v14,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v14;
    sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v14, v17, v18);
  }
  SkillTargetedBeforeFunctionSkill = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                                                                                      this,
                                                                                      v14,
                                                                                      ptTargetList,
                                                                                      0LL,
                                                                                      v23);
  System_Collections_Generic_List_object___InsertRange(
    v13,
    0,
    SkillTargetedBeforeFunctionSkill,
    (const MethodInfo_35811C0 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  System_Collections_Generic_List_object__o *v33; // x19
  BattleLogicTask_o *v34; // x23
  __int64 data; // x0
  __int64 svtUniqueId; // x1
  BattleServantData_o *v37; // x25
  System_Int32_array *v38; // x2
  BattleLogicTarget_o *logictarget; // x21
  int32_t v40; // w29
  int32_t GlobalTargetId; // w0
  BattleData_o *v42; // x21
  int32_t v43; // w29
  int32_t TargetAiAct; // w21
  Il2CppClass *v45; // x0
  BattleLogicTarget_o *v46; // x29
  int32_t v47; // w21
  bool isPlayerID; // w0
  int32_t v49; // w2
  int32_t v50; // w1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  System_Collections_Generic_List_object__o *v57; // x24
  __int64 v58; // x8
  __int64 v59; // x25
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  const MethodInfo *v63; // x4
  __int64 v64; // x1
  __int64 v65; // x25
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  BattleSkillInfoData_o *v74; // x26
  System_Int32_array *v75; // x0
  __int64 v76; // x1
  System_Collections_Generic_IEnumerable_T__o *v77; // x0
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  BattleLogicSkill___c_c *v82; // x0
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v84; // x21
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_Collections_Generic_IEnumerable_T__o *v88; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]

  if ( (byte_49BDCFD & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_StableSort_BattleLogicTask___, skillInfo);
    sub_1B4CF90(&BattleLogicTask_TypeInfo, v17);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_BattleLogicTask___, v18);
    sub_1B4CF90(&System_Func_BattleLogicTask__int__TypeInfo, v19);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v20);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v21);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v22);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_1B4CF90(&int___TypeInfo, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v25);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v26);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v28);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v29);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v30);
    sub_1B4CF90(&Method_BattleLogicSkill___c__taskSkill_b__5_0__, v31);
    sub_1B4CF90(&BattleLogicSkill___c_TypeInfo, v32);
    byte_49BDCFD = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v34 = (BattleLogicTask_o *)sub_1B4D1DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v34, 0LL);
  if ( !skillInfo )
    goto LABEL_94;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_94;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0LL);
  v37 = (BattleServantData_o *)data;
  if ( data )
  {
    data = BattleSkillInfoData__isServantSkill(skillInfo, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_94;
      v34->fields.isCanCounterTask = isCanCounterSkill;
      v34->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  if ( enemyTargetList )
  {
    v38 = enemyTargetList;
    if ( !v34 )
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
        v40 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !logictarget )
          goto LABEL_94;
        GlobalTargetId = BattleLogicTarget__getGlobalTargetId(
                           logictarget,
                           v40,
                           v40 == -1,
                           (System_Int32_array *)data,
                           0LL);
      }
      else
      {
        v42 = this->fields.data;
        v43 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !v42 )
          goto LABEL_94;
        GlobalTargetId = BattleData__getTargetLock(v42, v43, v43 == -1, (System_Int32_array *)data, 0LL);
      }
      TargetAiAct = GlobalTargetId;
      v45 = int___TypeInfo;
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_94;
      v46 = this->fields.logictarget;
      v47 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !v46 )
        goto LABEL_94;
      TargetAiAct = BattleLogicTarget__getTargetAiAct(
                      v46,
                      1,
                      v47,
                      0LL,
                      (System_Int32_array *)data,
                      1,
                      0,
                      0LL,
                      0LL,
                      (bool)&dword_0 + 1,
                      0LL);
      v45 = int___TypeInfo;
    }
    data = sub_1B4D038(v45, 1LL);
    if ( !data )
      goto LABEL_94;
    v38 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
      sub_1B4D1F4(data, svtUniqueId);
    *(_DWORD *)(data + 32) = TargetAiAct;
    enemyTargetList = 0LL;
    if ( !v34 )
LABEL_94:
      sub_1B4D1EC(data, svtUniqueId);
  }
  BattleLogicTask__setActionSkill(v34, skillInfo, v38, ptTargetList, checkAlive, checkRevengeId, 0LL);
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v50 = 1;
    v49 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    v49 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v50 = 2;
    else
      v50 = 3;
  }
  BattleLogicTask__setActor(v34, v50, v49, 0LL);
  if ( !v33 )
    goto LABEL_94;
  items = v33->fields._items;
  v54 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v33->fields._version;
  if ( !items )
    goto LABEL_94;
  size = v33->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v34,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    if ( !v37 )
      goto LABEL_47;
  }
  else
  {
    v56 = &items->obj.klass + size;
    v33->fields._size = size + 1;
    v56[4] = (Il2CppClass *)v34;
    sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v34, v51, v52);
    if ( !v37 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v33,
                                          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v57 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v57,
        (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v57 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v37, this->fields.data, 0LL);
  if ( !data )
    goto LABEL_94;
  v58 = *(_QWORD *)data;
  v59 = data;
  v60 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
  if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
  {
    v61 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v61 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_46;
    }
    v62 = v58 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_46:
    v62 = sub_1B9D724(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v65 = (*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
  if ( !v65 )
    sub_1B4D1EC(0LL, v64);
  while ( 1 )
  {
    v66 = *(_QWORD *)v65;
    v67 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
    {
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v67;
        v68 += 4;
        if ( !v67 )
          goto LABEL_55;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_55:
      v69 = sub_1B9D724(v65, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8)) & 1) == 0 )
      break;
    v70 = *(_QWORD *)v65;
    v71 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
    {
      v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v72 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v71;
        v72 += 4;
        if ( !v71 )
          goto LABEL_62;
      }
      v73 = v70 + 16LL * *v72 + 312;
    }
    else
    {
LABEL_62:
      v73 = sub_1B9D724(v65, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v74 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v65, *(_QWORD *)(v73 + 8));
    v75 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
    if ( !v74 )
      sub_1B4D1EC(v75, v76);
    if ( !v75 )
      sub_1B4D1EC(0LL, v76);
    if ( !v75->max_length )
      sub_1B4D1F4(v75, v76);
    v75->m_Items[1] = v74->fields.svtUniqueId;
    v77 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v74,
                                                           v75,
                                                           0LL,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           isDeadToEnableUpHate);
    if ( !v57 )
      sub_1B4D1EC(v77, v77);
    System_Collections_Generic_List_object___AddRange(
      v57,
      v77,
      (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v78 = *(_QWORD *)v65;
  v79 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
  {
    v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
    {
      --v79;
      v80 += 4;
      if ( !v79 )
        goto LABEL_73;
    }
    v81 = v78 + 16LL * *v80 + 312;
  }
  else
  {
LABEL_73:
    v81 = sub_1B9D724(v65, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v81)(v65, *(_QWORD *)(v81 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v57 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v33,
                                        (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_81;
  }
  if ( !v57 )
    goto LABEL_48;
LABEL_79:
  data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(this, v34, ptTargetList, enemyTargetList, v63);
  if ( !v57 )
    goto LABEL_94;
  System_Collections_Generic_List_object___AddRange(
    v57,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v57,
         (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
  {
    v82 = BattleLogicSkill___c_TypeInfo;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v82 = BattleLogicSkill___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__int__o *)v82->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v82->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v82);
        v82 = BattleLogicSkill___c_TypeInfo;
      }
      v84 = (Il2CppObject *)v82->static_fields->__9;
      _9__5_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v84, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v86, v87);
    }
    v88 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v57,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_2EF1484 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v33,
      0,
      v88,
      (const MethodInfo_35811C0 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v33,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BDDC5 & 1) == 0 )
  {
    sub_1B4CF90(&BattleLogicSkill___c_TypeInfo, v1);
    byte_49BDDC5 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)BattleLogicSkill___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1B4D1EC(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0LL )
    sub_1B4D1EC(this, x);
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
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BDDC6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_49BDDC6 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B4D1EC(conditions, key);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v9, &result, 0LL) )
    return (int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__1(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  BattleLogicSkill___c__DisplayClass14_0_o *v14; // x0
  System_String_o *v15; // x1
  const MethodInfo *v16; // x2
  long double v17; // q0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BDDC7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B4CF90(&long_TypeInfo, v8);
    byte_49BDDC7 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1B4D1EC(conditions, key);
  }
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v10, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  v17 = sub_1B4D4AC(conditions);
  return BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__2(v14, v15, *(double *)&v17, v16);
}


bool __fastcall BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BDDC8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_49BDDC8 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B4D1EC(conditions, key);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v9, &result, 0LL) )
    return (double)(int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass14_0___checkConditions_b__3(
        BattleLogicSkill___c__DisplayClass14_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  bool v13; // w0
  BattleLogicSkill___c__DisplayClass19_0_o *v14; // x0
  const MethodInfo *v15; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BDDC9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B4CF90(&long_TypeInfo, v8);
    byte_49BDDC9 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1B4D1EC(conditions, key);
  }
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v10, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  sub_1B4D4AC(conditions);
  BattleLogicSkill___c__DisplayClass19_0___ctor(v14, v15);
  return v13;
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
    sub_1B4D1EC(0LL, type);
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
    sub_1B4D1EC(this, type);
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
  if ( (byte_49BDDCA & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1B4CF90(&Method_System_Linq_Enumerable_Union_int___, current);
    byte_49BDDCA = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (task = v6->fields.task) == 0LL )
    sub_1B4D1EC(this, current);
  actorIdlist = task->fields.actorIdlist;
  data = _4__this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1B4D1F4(data, current);
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
                                                            (const MethodInfo_2F40684 *)Method_System_Linq_Enumerable_Union_int___);
}


BattleServantData_o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0LL )
    sub_1B4D1EC(this, uniqueId);
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
    sub_1B4D1EC(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0LL);
}