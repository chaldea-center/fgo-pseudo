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
  BattleBuffData_BuffData_array *BuffList_44696960; // x21
  __int64 v13; // x2
  int max_length; // w8
  int32_t index; // w20
  unsigned int v16; // w24
  int32_t v17; // w22
  Il2CppClass **v18; // x8
  BattleBuffData_BuffData_o *v19; // x23

  if ( (byte_4B1F569 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, actSkillInfo);
    byte_4B1F569 = 1;
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
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCB244(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_44896728(v11, v10, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      BuffList_44696960 = BattleBuffData__getBuffList_44696960(buffData, 143, v11, 1, 0, 0LL, 0LL, 0LL);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_44696960, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_44696960 )
      {
        max_length = BuffList_44696960->max_length;
        index = actSkillInfo->fields.index;
        if ( max_length < 1 )
        {
          v17 = 0;
LABEL_21:
          data = (BattleData_o *)v10->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            BattleServantData__skillChageShorten(v10, v17, 0, index, 0LL, 0LL);
            return;
          }
        }
        else
        {
          v16 = 0;
          v17 = 0;
          while ( 1 )
          {
            if ( v16 >= max_length )
              sub_1BCB25C(data, actSkillInfo, v13);
            v18 = &BuffList_44696960->obj.klass + (int)v16;
            v19 = (BattleBuffData_BuffData_o *)v18[4];
            if ( !v19 )
              break;
            if ( BattleBuffData_BuffData__CheckShortenSkillBuff((BattleBuffData_BuffData_o *)v18[4], index, 0LL) )
            {
              v17 += v19->fields.param;
              BattleBuffData_BuffData__UsedShortenSkillCountProgress(v19, index, 0LL);
            }
            else
            {
              BattleBuffData_BuffData__RevertUnused(v19, 1, 0LL);
            }
            max_length = BuffList_44696960->max_length;
            if ( (int)++v16 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1BCB254(data, actSkillInfo);
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
  __int64 v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x21
  int32_t Next; // w1

  if ( (byte_4B1F565 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_WeightRate_int___ctor__, rateArray);
    sub_1BCAFF8(&Method_WeightRate_int__getData__, v4);
    sub_1BCAFF8(&Method_WeightRate_int__getTotalWeight__, v5);
    sub_1BCAFF8(&Method_WeightRate_int__setWeight__, v6);
    sub_1BCAFF8(&WeightRate_int__TypeInfo, v7);
    byte_4B1F565 = 1;
  }
  if ( !rateArray )
    return -1;
  v8 = (WeightRate_int__o *)sub_1BCB244(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v8, (const MethodInfo_3A9B930 *)Method_WeightRate_int___ctor__);
  v12 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1BCB25C(v9, v10, v11);
      if ( !v8 )
        break;
      WeightRate_int___setWeight(
        v8,
        rateArray->m_Items[v13 + 1],
        v13,
        (const MethodInfo_3A9AE4C *)Method_WeightRate_int__setWeight__);
      LODWORD(v12) = rateArray->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_12;
    }
LABEL_13:
    sub_1BCB254(v9, v10);
  }
  if ( !v8 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v8->fields.totalweight, 0LL);
  return WeightRate_int___getData(v8, Next, (const MethodInfo_3A9B2C0 *)Method_WeightRate_int__getData__);
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

  if ( (byte_4B1F55B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_int___, task);
    sub_1BCAFF8(&Method_BasicHelper_StableSort_BattleLogicTask___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___, v11);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___, v12);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Union_int___, v14);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v15);
    sub_1BCAFF8(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo, v16);
    sub_1BCAFF8(&System_Func_BattleLogicTask__int__TypeInfo, v17);
    sub_1BCAFF8(&System_Func_int__BattleServantData__TypeInfo, v18);
    sub_1BCAFF8(&System_Func_BattleServantData__bool__TypeInfo, v19);
    sub_1BCAFF8(&System_Func_DataVals__Target_TYPE__TypeInfo, v20);
    sub_1BCAFF8(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo, v21);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v22);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v23);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v24);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v25);
    sub_1BCAFF8(&int___TypeInfo, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v28);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v29);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__, v30);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__, v31);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__, v32);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__, v33);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__, v34);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__, v35);
    sub_1BCAFF8(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo, v36);
    sub_1BCAFF8(&BattleLogicSkill___c_TypeInfo, v37);
    byte_4B1F55B = 1;
  }
  v38 = sub_1BCB244(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_75;
  *(_QWORD *)(v38 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 16), (int32_t)this, v41, v42);
  *(_QWORD *)(v38 + 24) = task;
  v43 = v38 + 24;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 24), (int32_t)task, v44, v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v48 = Method_System_Array_Empty_int___;
  v49 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v49 )
  {
    sub_1C1B4B8(Method_System_Array_Empty_int___);
    v49 = v48[7];
  }
  v50 = *(_QWORD *)(v49 + 16);
  if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
    v50 = sub_1C1B45C(inited);
  if ( !*(_DWORD *)(v50 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v50);
  v39 = *(__int64 **)(v48[7] + 16LL);
  if ( (*((_BYTE *)v39 + 309) & 1) == 0 )
    v39 = (__int64 *)sub_1C1B45C(inited);
  v51 = (System_Collections_Generic_IEnumerable_TSource__o **)v39[23];
  v52 = *v51;
  if ( ptTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v51,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_305C014 *)Method_System_Linq_Enumerable_Union_int___);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  }
  if ( enemyTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v52,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_305C014 *)Method_System_Linq_Enumerable_Union_int___);
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
      _9__7_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v57,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v59, v60);
    }
    v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v55,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_304E9E4 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v62 = (System_Func_T1__T2__TResult__o *)sub_1BCB244(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v62,
      (Il2CppObject *)v38,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0LL);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v61,
                                                                 (Il2CppObject *)v52,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v62,
                                                                 (const MethodInfo_30230B8 *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v63 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v63,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0LL);
  v64 = System_Linq_Enumerable__Select_int__object_(
          v52,
          (System_Func_TSource__TResult__o *)v63,
          (const MethodInfo_304C604 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
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
    _9__7_3 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v68,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0LL);
    v69 = BattleLogicSkill___c_TypeInfo->static_fields;
    v69->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v69->__9__7_3, (int32_t)_9__7_3, v70, v71);
  }
  v72 = System_Linq_Enumerable__Where_object_(
          v66,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v73 = (System_Func_object__object__o *)sub_1BCB244(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v73,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0LL);
  v39 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v72,
                     (System_Func_TSource__IEnumerable_TResult___o *)v73,
                     (const MethodInfo_30514E0 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v39 )
LABEL_75:
    sub_1BCB254(v39, v40);
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
    v78 = sub_1C1B560(v39, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v80 = (*(__int64 (__fastcall **)(void *, _QWORD))v78)(v75, *(_QWORD *)(v78 + 8));
  if ( !v80 )
    sub_1BCB254(0LL, v79);
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
      v84 = sub_1C1B560(v80, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v88 = sub_1C1B560(v80, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v89 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v80, *(_QWORD *)(v88 + 8));
    v90 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
    if ( !v89 )
      sub_1BCB254(v90, v91);
    if ( !v90 )
      sub_1BCB254(0LL, v91);
    if ( !v90->max_length )
      sub_1BCB25C(v90, v91, v90);
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
      sub_1BCB254(v92, v92);
    System_Collections_Generic_List_object___AddRange(
      v46,
      v92,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    v96 = sub_1C1B560(v80, System_IDisposable_TypeInfo, 0LL);
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
    _9__7_5 = (System_Func_object__int__o *)sub_1BCB244(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v99,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0LL);
    v100 = BattleLogicSkill___c_TypeInfo->static_fields;
    v100->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v100->__9__7_5, (int32_t)_9__7_5, v101, v102);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v46,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_300A1A4 *)Method_BasicHelper_StableSort_BattleLogicTask___);
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
  __int64 v12; // x21
  __int64 v13; // x2
  System_Func_int__bool__o *v14; // x22
  bool v15; // w0

  if ( (byte_4B1F567 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_int____76918080, actorIndividualities);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v6);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__, v7);
    sub_1BCAFF8(&BattleLogicSkill___c__DisplayClass20_0_TypeInfo, v8);
    byte_4B1F567 = 1;
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
          v12 = sub_1BCB244(BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v12, 0LL);
          if ( v11 >= notSkillCopyTargetIndividualities->max_length )
            sub_1BCB25C(IsNullOrEmpty, v10, v13);
          if ( !v12 )
            break;
          *(_DWORD *)(v12 + 16) = notSkillCopyTargetIndividualities->m_Items[v11 + 1];
          v14 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v14,
            (Il2CppObject *)v12,
            Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0LL);
          v15 = BasicHelper__Any_int__50347164(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v14,
                  (const MethodInfo_3003C9C *)Method_BasicHelper_Any_int____76918080);
          if ( !v15 && (__int64)++v11 < (int)notSkillCopyTargetIndividualities->max_length )
            continue;
          return v15;
        }
LABEL_16:
        sub_1BCB254(IsNullOrEmpty, v10);
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
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  __int64 v17; // x20
  __int64 *v18; // x8
  __int64 v19; // x1
  System_String_o *IfExists; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4B1F562 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, messageNotAvailable);
    sub_1BCAFF8(&string___TypeInfo, v6);
    sub_1BCAFF8(&string_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_2864/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/, v8);
    sub_1BCAFF8(&StringLiteral_2863/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/, v9);
    byte_4B1F562 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *messageNotAvailable = static_fields->Empty;
  sub_1BCAF9C((CGThumbnailListItem_o *)messageNotAvailable, (int32_t)Empty, (int32_t)method, v3);
  if ( !skillInfo )
    goto LABEL_16;
  if ( BattleSkillInfoData__isChargeOK(skillInfo, 0LL) )
  {
    if ( BattleSkillInfoData__IsOpenCond(skillInfo, 0LL) )
      return 1;
    v12 = sub_1BCB0A0(string___TypeInfo, 1LL);
    if ( v12 )
    {
      v17 = v12;
      if ( *(_DWORD *)(v12 + 24) )
      {
        v18 = &StringLiteral_2864/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/;
        goto LABEL_13;
      }
LABEL_17:
      sub_1BCB25C(v12, v13, v15);
    }
LABEL_16:
    sub_1BCB254(v12, v13);
  }
  v12 = sub_1BCB0A0(string___TypeInfo, 1LL);
  if ( !v12 )
    goto LABEL_16;
  v17 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_17;
  v18 = &StringLiteral_2863/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/;
LABEL_13:
  v19 = *v18;
  *(_QWORD *)(v17 + 32) = *v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 32), v19, v15, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v17, 0LL);
  *messageNotAvailable = IfExists;
  sub_1BCAF9C((CGThumbnailListItem_o *)messageNotAvailable, (int32_t)IfExists, v21, v22);
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

  if ( (byte_4B1F560 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, skillInfo);
    byte_4B1F560 = 1;
  }
  *messageNotExecutable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C(
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
  BattleLogicSkill_o *v8; // x21
  __int64 v9; // x2
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicSkill_o *v11; // x20
  int32_t v12; // w22
  int32_t actortype; // w24
  const MethodInfo *v14; // x1
  BattleData_o *data; // x21
  bool isPlayerID; // w21
  int32_t data_high; // w20
  int32_t v18; // w23
  TempBattleSkillInfoData_o *v19; // x25
  const MethodInfo *v20; // x4

  v8 = this;
  if ( (byte_4B1F55D & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1BCAFF8(&TempBattleSkillInfoData_TypeInfo, skillLvMst);
    byte_4B1F55D = 1;
  }
  if ( !skillLvMst )
    goto LABEL_18;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetAddInvokeSkillLvEntity(skillLvMst, skillLvEnt, 0LL);
  if ( !this )
    return (BattleLogicTask_o *)this;
  if ( !baseTask )
    goto LABEL_18;
  actorIdlist = baseTask->fields.actorIdlist;
  v11 = this;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1BCB25C(this, skillLvMst, v9);
    v12 = actorIdlist->m_Items[1];
    if ( !skillLvEnt )
      goto LABEL_18;
  }
  else
  {
    v12 = -1;
    if ( !skillLvEnt )
      goto LABEL_18;
  }
  actortype = baseTask->fields.actortype;
  if ( SkillLvEntity__GetAddInvokeSkillActorType(skillLvEnt, 0LL) == 1 )
  {
    data = v8->fields.data;
    this = (BattleLogicSkill_o *)BattleLogicTask__getTarget(baseTask, v14);
    if ( !data )
      goto LABEL_18;
    isPlayerID = BattleData__isPlayerID(data, (int32_t)this, 0LL);
    v12 = -1;
    actortype = 5;
  }
  else
  {
    isPlayerID = 0;
  }
  v18 = (int32_t)v11->fields.data;
  data_high = HIDWORD(v11->fields.data);
  v19 = (TempBattleSkillInfoData_o *)sub_1BCB244(TempBattleSkillInfoData_TypeInfo);
  TempBattleSkillInfoData___ctor(v19, v18, data_high, v12, 0LL);
  this = (BattleLogicSkill_o *)BattleLogicTask__CloneSkillTask(
                                 baseTask,
                                 (BattleSkillInfoData_o *)v19,
                                 actortype,
                                 isPlayerID,
                                 v20);
  if ( !this )
LABEL_18:
    sub_1BCB254(this, skillLvMst);
  BYTE1(this[5].fields.logic) = baseTask->fields.isSkipStep;
  LOBYTE(this[2].monitor) = baseTask->fields.IsResetPrevAttackInfo;
  BYTE1(this[2].monitor) = baseTask->fields.IsResetWasAttackTargetId;
  BYTE3(this[4].fields.logicfunction) = baseTask->fields.IsSkipRelationTask;
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
  BattleData_o *IsQuestClear_39516796; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v22; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v25; // x22
  unsigned int v26; // w24
  AddSkillData_o *v27; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1F568 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    sub_1BCAFF8(&CondType_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v12);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataVals__AddRange__, v15);
    byte_4B1F568 = 1;
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
  IsQuestClear_39516796 = (BattleData_o *)CondType__IsQuestClear_39516796(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_39516796 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !targetIds->max_length )
      goto LABEL_30;
    IsQuestClear_39516796 = this->fields.data;
    if ( !IsQuestClear_39516796 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_39516796, targetIds->m_Items[1], 0LL);
    if ( !ServantData )
      return;
    v22 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0LL) )
    {
      return;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_39516796 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v22->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1BCB254(IsQuestClear_39516796, v19);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v25 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_39516796;
      v26 = 0;
      while ( v26 < max_length )
      {
        v27 = classBoardAddCommandSpells->m_Items[v26];
        if ( !v27 || !v25 )
          goto LABEL_29;
        IsQuestClear_39516796 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v25,
                                                  &entity,
                                                  v27->fields.id,
                                                  commandSpellId,
                                                  v27->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_39516796 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_39516796 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_39516796 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_39516796,
            (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v26 >= max_length )
          return;
      }
LABEL_30:
      sub_1BCB25C(IsQuestClear_39516796, v19, v20);
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
  __int64 v36; // x2
  struct System_Int32_array *v37; // x8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Func_int__bool__o *v40; // x27
  __int64 v41; // x27
  System_Func_int__bool__o *v42; // x27
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v44; // x3
  System_Func_int__bool__o *v45; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
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
  if ( (byte_4B1F566 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_int____76918080, skillLvEnt);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_FunctionMaster___, v13);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v14);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataVals__Add__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataVals__ToArray__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataVals___ctor__, v21);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1BCAFF8(&System_Collections_Generic_List_DataVals__TypeInfo, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__, v25);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__, v26);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__, v27);
    this = (BattleLogicSkill_o *)sub_1BCAFF8(&BattleLogicSkill___c__DisplayClass19_0_TypeInfo, v28);
    byte_4B1F566 = 1;
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
  v65 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  v64 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v34 = 0LL;
  while ( (__int64)v34 < (int)funcId->max_length )
  {
    v35 = sub_1BCB244(BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v35, 0LL);
    v37 = v11->fields.funcId;
    if ( !v37 )
      goto LABEL_52;
    if ( v34 >= v37->max_length )
      goto LABEL_57;
    if ( !v35 )
      goto LABEL_52;
    *(_DWORD *)(v35 + 16) = v37->m_Items[v34 + 1];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v30, 0LL)
      || (v40 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v40,
            (Il2CppObject *)v35,
            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__,
            0LL),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__50347164(
                                         (System_Int32_array *)v30,
                                         (System_Func_T__bool__o *)v40,
                                         (const MethodInfo_3003C9C *)Method_BasicHelper_Any_int____76918080),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v35 + 24) = 0LL;
      v41 = v35 + 24;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 24), 0, v38, v39);
      if ( !v33 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v33,
                                     (Il2CppObject **)(v35 + 24),
                                     *(_DWORD *)(v35 + 16),
                                     (const MethodInfo_32C7E4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v41 )
          goto LABEL_52;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v41 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v41 )
            goto LABEL_52;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v41 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v41 )
              goto LABEL_52;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v41 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v41 )
                goto LABEL_52;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v41 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v41 )
                  goto LABEL_52;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v41 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v42 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v42,
                        (Il2CppObject *)v35,
                        Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__,
                        0LL),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__50347164(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v42,
                                                     (const MethodInfo_3003C9C *)Method_BasicHelper_Any_int____76918080),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v34 >= SetTypeDataValArray->max_length )
LABEL_57:
                    sub_1BCB25C(this, skillLvEnt, v36);
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
                                                 v44);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v45 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v45,
                            (Il2CppObject *)v35,
                            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__,
                            0LL),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__50347164(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v45,
                                                         (const MethodInfo_3003C9C *)Method_BasicHelper_Any_int____76918080),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v65;
                      if ( !v65 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*(unsigned int *)(v35 + 16);
                      items = v65->fields._items;
                      v47 = Method_System_Collections_Generic_List_int__Add__;
                      ++v65->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v65->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v65,
                          (int32_t)skillLvEnt,
                          *(const MethodInfo_369CBAC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
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
                          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v53 = &v50->obj.klass + v52;
                        v64->fields._size = v52 + 1;
                        v53[4] = (Il2CppClass *)skillLvEnt;
                        sub_1BCAF9C((CGThumbnailListItem_o *)(v53 + 4), (int32_t)skillLvEnt, v36, v49);
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
                (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__),
        v63->klass = (CGThumbnailListItem_c *)v54,
        sub_1BCAF9C(v63, (int32_t)v54, v55, v56),
        (this = (BattleLogicSkill_o *)v64) == 0LL)
    || (v57 = System_Collections_Generic_List_object___ToArray(
                v64,
                (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v57,
        sub_1BCAF9C((CGThumbnailListItem_o *)dataValsArray, (int32_t)v57, v58, v59),
        !v63->klass) )
  {
LABEL_52:
    sub_1BCB254(this, skillLvEnt);
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
  if ( (byte_4B1F55E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_BattleServantData__TypeInfo, skillInfo);
    sub_1BCAFF8(&BattleActionData_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillMaster___, v13);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1BCAFF8(&BattleLogicFunction_FunctionArgument_TypeInfo, v15);
    sub_1BCAFF8(&Individuality_TypeInfo, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Clear__, v17);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__, v20);
    this = (BattleLogicSkill_o *)sub_1BCAFF8(&BattleLogicSkill___c_TypeInfo, v21);
    byte_4B1F55E = 1;
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
  v26 = (BattleActionData_o *)sub_1BCB244(BattleActionData_TypeInfo);
  BattleActionData___ctor(v26, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_45;
  v54 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  v28 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v25,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v30 = (SkillEntity_o *)Entity;
  if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
    return;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v55, 0LL);
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
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BCB244(BattleLogicFunction_FunctionArgument_TypeInfo);
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
                  master = (struct FunctionMaster_o *)sub_1BCB244(System_Action_BattleServantData__TypeInfo);
                  System_Action_object____ctor(
                    (System_Action_object__o *)master,
                    klass,
                    Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                    0LL);
                  static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                  static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)master, v52, v53);
                }
                if ( data )
                {
                  BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)master, 0LL);
                  this = (BattleLogicSkill_o *)v10->fields.logic;
                  if ( this )
                  {
                    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_45:
      sub_1BCB254(this, skillInfo);
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

  if ( (byte_4B1F561 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7);
    sub_1BCAFF8(&System_Func_string__int__bool__TypeInfo, v8);
    sub_1BCAFF8(&System_Func_string__double__bool__TypeInfo, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__, v12);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__, v13);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__, v14);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__, v15);
    sub_1BCAFF8(&BattleLogicSkill___c__DisplayClass14_0_TypeInfo, v16);
    sub_1BCAFF8(&StringLiteral_2859/*"BATTLE_SKILLERROR_NP_LOWER"*/, v17);
    sub_1BCAFF8(&StringLiteral_2857/*"BATTLE_SKILLERROR_HP_LOWER"*/, v18);
    sub_1BCAFF8(&StringLiteral_12243/*"STAR_HIGHER"*/, v19);
    sub_1BCAFF8(&StringLiteral_7189/*"HP_PER_LOWER"*/, v20);
    sub_1BCAFF8(&StringLiteral_2858/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v21);
    sub_1BCAFF8(&StringLiteral_2856/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v22);
    sub_1BCAFF8(&StringLiteral_7188/*"HP_PER_HIGHER"*/, v23);
    sub_1BCAFF8(&StringLiteral_2860/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v24);
    sub_1BCAFF8(&StringLiteral_9284/*"NP_HIGHER"*/, v25);
    sub_1BCAFF8(&StringLiteral_2861/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v26);
    sub_1BCAFF8(&StringLiteral_7190/*"HP_VAL_HIGHER"*/, v27);
    sub_1BCAFF8(&StringLiteral_12244/*"STAR_LOWER"*/, v28);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v29);
    sub_1BCAFF8(&StringLiteral_9285/*"NP_LOWER"*/, v30);
    sub_1BCAFF8(&StringLiteral_7191/*"HP_VAL_LOWER"*/, v31);
    byte_4B1F561 = 1;
  }
  v32 = sub_1BCB244(BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)text, (int32_t)StringLiteral_1/*""*/, v33, v34);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 16), v40, v38, v39);
  v41 = *(System_Collections_Generic_Dictionary_object__object__o **)(v32 + 16);
  if ( !v41 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v41,
         (const MethodInfo_3385A48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v42 = sub_1BCB244(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v42,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__,
    0LL);
  v43 = sub_1BCB244(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v43,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__,
    0LL);
  v44 = sub_1BCB244(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v44,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__,
    0LL);
  v45 = sub_1BCB244(System_Func_string__double__bool__TypeInfo);
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
          StringLiteral_9284/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v42 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2858/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v46, 0LL);
  if ( !v43 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
               *(_QWORD *)(v43 + 64),
               StringLiteral_9285/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v43 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2859/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
               *(_QWORD *)(v42 + 64),
               StringLiteral_12243/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v42 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2860/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v48 = this->fields.data;
  if ( !v48 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_12244/*"STAR_LOWER"*/,
          (unsigned int)v48->fields.totalCriticalStars,
          *(_QWORD *)(v43 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2861/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v46, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
          *(_QWORD *)(v42 + 64),
          StringLiteral_7190/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v42 + 40)) & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2856/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v50 = BattleServantData__getNowHp(v46, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_7191/*"HP_VAL_LOWER"*/,
          v50,
          *(_QWORD *)(v43 + 40)) & 1) != 0 )
  {
    v51 = BattleServantData__getNowHp(v46, 0LL);
    Instance = BattleServantData__getMaxHp(v46, 0LL);
    if ( !v44 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v44 + 24))(
            *(_QWORD *)(v44 + 64),
            StringLiteral_7188/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v44 + 40),
            (double)v51 * 1000.0 / (double)(int)Instance) & 1) != 0 )
    {
      v52 = BattleServantData__getNowHp(v46, 0LL);
      Instance = BattleServantData__getMaxHp(v46, 0LL);
      if ( v45 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v45 + 24))(
                *(_QWORD *)(v45 + 64),
                StringLiteral_7189/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v45 + 40),
                (double)v52 * 1000.0 / (double)(int)Instance) & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1BCB254(Instance, v36);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = &StringLiteral_2857/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v55 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
  *text = v55;
  sub_1BCAF9C((CGThumbnailListItem_o *)text, (int32_t)v55, v56, v57);
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

  if ( (byte_4B1F55F & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActionData_TypeInfo, task);
    sub_1BCAFF8(&BattleActionLogManagerInterface_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommandSpellMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataVals__AddRange__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataVals__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_DataVals___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1BCAFF8(&System_Collections_Generic_List_DataVals__TypeInfo, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B1F55F = 1;
  }
  v17 = sub_1BCB244(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v17, 0LL);
  if ( !task )
    goto LABEL_29;
  skillInfo = task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_29;
  skillId = (DataManager_o *)DataManager__GetMasterData_object_(
                               skillId,
                               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
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
                               (const MethodInfo_32C7E00 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
  *(_DWORD *)(v17 + 60) = v25->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = task->fields.ptTarget;
  *(_QWORD *)(v17 + 40) = ptTarget;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 40), (int32_t)ptTarget, v23, v24);
  *(_QWORD *)(v17 + 152) = skillInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 152), (int32_t)skillInfo, v27, v28);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_29;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v29 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v29 )
    goto LABEL_29;
  System_Collections_Generic_List_int___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)v22->fields.lookup,
    (const MethodInfo_369CDB8 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v22, 0LL);
  if ( !v30 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_DataVals__AddRange__);
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
          (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
  v34 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
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
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0LL, 0LL);
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
    p_method = sub_1C1B560(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
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
    sub_1BCB254(skillId, v19);
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
  v5 = BattleLogicSkill__createSkillData_45966484(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_1BCB254(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_45966484(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  BattleLogicTask_o *v9; // x19
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
  BattleLogicSkill_o **p_fields; // x20
  BattleActionData_o *v27; // x22
  BattleActionData_o *v28; // x25
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  BattleBoostItemInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x22
  Il2CppObject *MasterData_object; // x22
  DataVals_o *v34; // x2
  SkillLvEntity_o *v35; // x24
  BattleActionData_c *v36; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 methodPtr_low; // x10
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicSkill_o *v40; // x26
  char v41; // w26
  struct System_Int32_array *v42; // x8
  int v43; // w8
  bool v44; // w27
  BattleLogicSkill_o *v45; // x29
  BattleLogicSkill_o *v46; // x22
  BattleServantData_o *EnemyServantData; // x0
  __int64 v48; // x28
  __int64 v49; // x29
  struct System_Int32_array *v50; // x8
  BattleLogicSkill_o *v51; // x29
  const MethodInfo *v52; // x1
  struct System_Int32_array *ptTarget; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_String_o *Name; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  BattleLogicSkill_o *v63; // x26
  BattleLogicSkill_o *v64; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  CGThumbnailListItem_o *p_motionMessage; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Int32_array *effectList; // x1
  int logic; // w8
  BattleLogicSkill_o *v72; // x26
  int v73; // w9
  __int64 v74; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  const MethodInfo *v78; // x6
  bool v79; // w23
  struct System_Int32_array *v80; // x8
  int32_t v81; // w5
  bool v82; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  BattleLogicFunction_SkillSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  BattleLogicFunction_o *v86; // x29
  System_Int32_array *v87; // x27
  DataVals_array *v88; // x28
  int32_t v89; // w0
  UnityEngine_Object_o *logictarget; // x28
  int32_t v91; // w27
  struct BattleLogic_o *v92; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  struct BattleLogicFunction_o *v96; // x25
  BattleLogicFunction_c *klass; // x8
  __int64 v98; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v100; // x0
  const MethodInfo *v101; // x3
  struct BattleLogicFunction_o *v102; // x1
  int32_t v103; // w1
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  struct BattleLogicFunction_o **p_logicfunction; // x27
  const MethodInfo *v107; // x3
  struct BattleLogicFunction_o *v108; // x1
  int32_t v109; // w1
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  int32_t type; // w23
  struct System_Int32_array *v113; // x8
  int v114; // w8
  struct System_Int32_array *v115; // x8
  BattleLogicSkill_o *v116; // x25
  BattleLogicSkill_o *v117; // x27
  int32_t v118; // w28
  struct BattleLogic_o *v119; // x27
  BattleLogicTask_array *v120; // x0
  BattleLogicSkill_o *v121; // x25
  const MethodInfo *v122; // x4
  struct System_Int32_array *v123; // x8
  int32_t v124; // w27
  BattleLogic_o *v125; // x25
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v127; // x23
  BattleLogicSkill_o *v128; // x23
  BattleLogicTask_o *v129; // x23
  const MethodInfo *v130; // x1
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  struct BattleLogic_o *v133; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattleData_o *data; // x8
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  SkillEntity_o *v139; // x20
  const MethodInfo *v140; // x3
  BattleLogicTask_o *v141; // x23
  const MethodInfo *v142; // x1
  struct System_Int32_array *v143; // x8
  int32_t v144; // w2
  const MethodInfo *v145; // x2
  struct BattleLogic_o *v146; // x20
  struct BattleLogic_o *v147; // x8
  struct BattlePerformance_o *v148; // x9
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-88h]
  DataVals_o *copyFuncVals; // [xsp+40h] [xbp-80h]
  SkillEntity_o *Entity; // [xsp+48h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16

  v9 = task;
  v10 = this;
  if ( (byte_4B1F55C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_IndexValue_int___, task);
    sub_1BCAFF8(&BattleActionData_TypeInfo, v11);
    sub_1BCAFF8(&BattleActionLogManagerInterface_TypeInfo, v12);
    sub_1BCAFF8(&BattleBoostItemInfoData_TypeInfo, v13);
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, v14);
    sub_1BCAFF8(&CheckUpdateShiftTask_TypeInfo, v15);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1BCAFF8(&BattleLogicFunction_FunctionArgument_TypeInfo, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v21);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1BCAFF8(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v24);
    this = (BattleLogicSkill_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v25);
    byte_4B1F55C = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  if ( !v9 )
    goto LABEL_208;
  if ( v9->fields.IsResetWasAttackTargetId )
  {
    this = (BattleLogicSkill_o *)v10->fields.data;
    if ( !this )
      goto LABEL_208;
    BattleData__ResetWasAttackTargetId((BattleData_o *)this, 0LL);
  }
  p_fields = (BattleLogicSkill_o **)&v10->fields;
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_208;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)this, 0LL);
  v27 = (BattleActionData_o *)sub_1BCB244(BattleActionData_TypeInfo);
  BattleActionData___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_208;
  v28 = BattleActionData__AddDisplayTriggerIntervalBuff(v27, v9, 0LL);
  *baseActionData = v28;
  sub_1BCAF9C((CGThumbnailListItem_o *)baseActionData, (int32_t)v28, v29, v30);
  if ( !v28 )
    goto LABEL_208;
  v28->fields.taskActorType = v9->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)v9->fields.skillInfo;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_208;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_208;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v32 )
    goto LABEL_208;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v32,
                              (int32_t)this,
                              (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_208;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_208;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity(
                                 (SkillLvMaster_o *)MasterData_object,
                                 (int32_t)this,
                                 skillInfo->fields.skilllv,
                                 0LL);
  v35 = (SkillLvEntity_o *)this;
  v28->fields.isCounter = v9->fields.isCounter;
  v36 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v36 = BattleActionData_TypeInfo;
  }
  static_fields = v36->static_fields;
  v28->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
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
  if ( !v9->fields.checkAlive )
    goto LABEL_212;
  actorIdlist = v9->fields.actorIdlist;
  this = *p_fields;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      goto LABEL_209;
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
      goto LABEL_208;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_208;
  }
  this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0LL);
  if ( !this
    || (this = (BattleLogicSkill_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL),
        v40 = 0LL,
        ((unsigned __int8)this & 1) != 0) )
  {
LABEL_212:
    if ( v9->fields.isForcedSpeedOne )
    {
      v41 = 1;
    }
    else
    {
      if ( !Entity )
        goto LABEL_208;
      this = (BattleLogicSkill_o *)SkillEntity__isForcedSkillSpeedOne(Entity, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_39;
      this = *p_fields;
      if ( !*p_fields )
        goto LABEL_208;
      this = (BattleLogicSkill_o *)BattleData__checkEnablePlaySpeedOneFromSkillIdList(
                                     (BattleData_o *)this,
                                     Entity->fields.id,
                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicSkill_o *)SkillEntity__isForcedSkillSpeedOne(Entity, 0LL);
        v41 = (char)this;
      }
      else
      {
LABEL_39:
        v41 = 0;
      }
    }
    v42 = v9->fields.actorIdlist;
    copyFuncVals = baseVals;
    if ( v42 )
    {
      if ( !v42->max_length )
        goto LABEL_209;
      v43 = v42->m_Items[1];
    }
    else
    {
      v43 = -1;
    }
    skillLvMst = (SkillLvMaster_o *)MasterData_object;
    v28->fields.actorId = v43;
    if ( !v35 )
      goto LABEL_208;
    v44 = fromSkillCopyFunc;
    v45 = *p_fields;
    v46 = v10;
    this = (BattleLogicSkill_o *)SkillLvEntity__GetActNpcServantId(v35, 0LL);
    if ( !v45 )
      goto LABEL_208;
    EnemyServantData = BattleData__getEnemyServantData((BattleData_o *)v45, (int32_t)this, 0LL);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v48 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v49 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v155.fields.currentCryptoKey = v48;
      *(_QWORD *)&v155.fields.fakeValue = v49;
      v28->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v155, 0LL);
    }
    v50 = v9->fields.actorIdlist;
    this = *p_fields;
    if ( v50 )
    {
      if ( !v50->max_length )
        goto LABEL_209;
      task = (BattleLogicTask_o *)(unsigned int)v50->m_Items[1];
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    }
    v51 = v46;
    if ( !this )
      goto LABEL_208;
    this = (BattleLogicSkill_o *)BattleData__getServantId((BattleData_o *)this, (int32_t)task, 0LL);
    if ( !Entity )
      goto LABEL_208;
    v28->fields.motionId = SkillEntity__GetMotionId(Entity, (int32_t)this, 0LL);
    v28->fields.targetId = BattleLogicTask__getTarget(v9, v52);
    ptTarget = v9->fields.ptTarget;
    v28->fields.pttargetIds = ptTarget;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v28->fields.pttargetIds, (int32_t)ptTarget, v54, v55);
    Name = SkillEntity__getName(Entity, 0LL);
    v28->fields.skillMessage = Name;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v28->fields.skillMessage, (int32_t)Name, v57, v58);
    v28->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v28->fields.skillInfo, (int32_t)skillInfo, v59, v60);
    v28->fields.isForcedSpeedOne = v41 & 1;
    v28->fields.checkRevengeId = v9->fields.checkRevengeId;
    if ( v9->fields.gimmickIndexArray )
    {
      this = *p_fields;
      if ( !*p_fields )
        goto LABEL_208;
      this = (BattleLogicSkill_o *)BattleData__GetGimmickStartVoiceArray((BattleData_o *)this, 0LL);
      if ( !*p_fields )
        goto LABEL_208;
      v63 = this;
      this = (BattleLogicSkill_o *)BattleData__GetGimmickResultVoiceArray((BattleData_o *)*p_fields, 0LL);
      if ( !*p_fields )
        goto LABEL_208;
      v64 = this;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray((BattleData_o *)*p_fields, 0LL);
      BattleActionData__SetGimmickData(
        v28,
        v9->fields.gimmickIndexArray,
        (System_String_array *)v63,
        (System_Object_array *)v64,
        GimmickAnimTypeArray,
        0LL);
      v51 = v46;
    }
    motionMessage = v9->fields.motionMessage;
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
    sub_1BCAF9C(p_motionMessage, (int32_t)motionMessage, v61, v62);
    if ( (v9->fields.actortype | 4) == 5 )
      BattleActionData__setStateField(v28, 0LL);
    effectList = Entity->fields.effectList;
    v28->fields.effectlist = effectList;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v28->fields.effectlist, (int32_t)effectList, v68, v69);
    this = (BattleLogicSkill_o *)v51->fields.logic;
    if ( !this )
      goto LABEL_208;
    BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
    if ( skillInfo->fields.type == 21 )
    {
      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v35, 0LL);
      if ( !this )
        goto LABEL_208;
      logic = (int)this->fields.logic;
      v72 = this;
      if ( logic >= 1 )
      {
        v73 = 0;
        while ( logic != v73 )
        {
          v74 = *((_QWORD *)&this->fields.logictarget + v73);
          if ( !v74 )
            goto LABEL_208;
          ++v73;
          *(_BYTE *)(v74 + 72) = 1;
          if ( logic == v73 )
            goto LABEL_76;
        }
LABEL_209:
        sub_1BCB25C(this, task, v34);
      }
LABEL_76:
      logicfunction = v51->fields.logicfunction;
      funcId = v35->fields.funcId;
      this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                     skillInfo,
                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !logicfunction )
        goto LABEL_208;
      this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                     logicfunction,
                                     v28,
                                     funcId,
                                     (DataVals_array *)v72,
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
      v40 = this;
LABEL_106:
      if ( v9->fields.actortype == 5 )
      {
        if ( !v40 )
          goto LABEL_208;
        v89 = BasicHelper__IndexValue_int__50368444(
                (System_Collections_Generic_List_T__o *)v40[6].monitor,
                0,
                0,
                (const MethodInfo_3008FBC *)Method_BasicHelper_IndexValue_int___);
        logictarget = (UnityEngine_Object_o *)v40[1].fields.logictarget;
        v91 = v89;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleLogicSkill_o *)UnityEngine_Object__op_Equality(logictarget, 0LL, 0LL);
        if ( v91 >= 1 && ((unsigned __int8)this & 1) != 0 )
        {
          v92 = v51->fields.logic;
          if ( !v92 )
            goto LABEL_208;
          this = (BattleLogicSkill_o *)v92->fields.perf;
          if ( !this )
            goto LABEL_208;
          ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v91, 0LL);
          v40[1].fields.logictarget = (struct BattleLogicTarget_o *)ServantGameObject;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v40[1].fields.logictarget, (int32_t)ServantGameObject, v94, v95);
        }
      }
      ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
        skillInfo,
        skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
      BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
      this = (BattleLogicSkill_o *)v51->fields.logic;
      if ( !this )
        goto LABEL_208;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL, 0LL);
      if ( v9->fields.IsResetPrevAttackInfo )
      {
        if ( !v40 )
          goto LABEL_208;
        BYTE4(v40[2].klass) = 0;
        this = *p_fields;
        if ( !*p_fields )
          goto LABEL_208;
        BattleData__setCommandAttack((BattleData_o *)this, 0, 0, 0LL);
      }
      if ( !*p_fields )
        goto LABEL_208;
      v96 = (*p_fields)[10].fields.logicfunction;
      if ( !v96 )
        goto LABEL_208;
      klass = v96->klass;
      v98 = *(unsigned __int16 *)(&v96->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v96->klass->_2.bitflags2 + 3) )
      {
        p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
        {
          --v98;
          p_offset += 2;
          if ( !v98 )
            goto LABEL_126;
        }
        v100 = (__int64)(&klass[1]._1.namespaze + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_126:
        v100 = sub_1C1B560(v96, BattleActionLogManagerInterface_TypeInfo, 5LL);
      }
      this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(struct BattleLogicFunction_o *, BattleLogicTask_o *, _QWORD))v100)(
                                     v96,
                                     v9,
                                     *(_QWORD *)(v100 + 8));
      if ( !v40 )
        goto LABEL_208;
      if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v40, 0LL) )
      {
        v102 = (struct BattleLogicFunction_o *)v40[2].fields.logictarget;
        v40[9].fields.logicfunction = v102;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v40[9].fields.logicfunction, (int32_t)v102, (int32_t)v34, v101);
        v103 = (int)StringLiteral_1/*""*/;
        v40[2].fields.logictarget = (struct BattleLogicTarget_o *)StringLiteral_1/*""*/;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v40[2].fields.logictarget, v103, v104, v105);
        p_logicfunction = &v40[2].fields.logicfunction;
        if ( !System_String__IsNullOrEmpty((System_String_o *)v40[2].fields.logicfunction, 0LL) )
        {
          v108 = *p_logicfunction;
          v40[9].fields.logicfunction = *p_logicfunction;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v40[9].fields.logicfunction, (int32_t)v108, (int32_t)v34, v107);
          v109 = (int)StringLiteral_1/*""*/;
          *p_logicfunction = (struct BattleLogicFunction_o *)StringLiteral_1/*""*/;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v40[2].fields.logicfunction, v109, v110, v111);
        }
      }
      type = skillInfo->fields.type;
      v113 = v9->fields.actorIdlist;
      this = *p_fields;
      if ( v113 )
      {
        if ( !v113->max_length )
          goto LABEL_209;
        task = (BattleLogicTask_o *)(unsigned int)v113->m_Items[1];
        if ( !this )
          goto LABEL_208;
      }
      else
      {
        task = (BattleLogicTask_o *)0xFFFFFFFFLL;
        if ( !this )
          goto LABEL_208;
      }
      this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0LL);
      if ( type == 1 || this )
      {
        this = (BattleLogicSkill_o *)SkillLvEntity__IsNoTargetSkipSkill(v35, 0LL);
        v114 = (unsigned __int8)this & 1;
      }
      else
      {
        v114 = 1;
      }
      if ( (v114 & (LOBYTE(v40[5].monitor) ^ 1)) == 0 && (!BYTE1(v40[6].fields.data) || BYTE2(v40[6].fields.data)) )
      {
        if ( v9->fields.isCanCounterTask )
        {
          v115 = v9->fields.actorIdlist;
          this = *p_fields;
          if ( v115 )
          {
            if ( !v115->max_length )
              goto LABEL_209;
            task = (BattleLogicTask_o *)(unsigned int)v115->m_Items[1];
            if ( !this )
              goto LABEL_208;
          }
          else
          {
            task = (BattleLogicTask_o *)0xFFFFFFFFLL;
            if ( !this )
              goto LABEL_208;
          }
          this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0LL);
          if ( this )
          {
            v116 = this;
            ((void (__fastcall *)(BattleLogicSkill_o *, BattleLogicSkill_o *, Il2CppClass *))v40->klass[1]._1.castClass)(
              v40,
              *p_fields,
              v40->klass[1]._1.declaringType);
            this = (BattleLogicSkill_o *)v40[6].monitor;
            if ( !this )
              goto LABEL_208;
            v117 = *p_fields;
            v118 = (int32_t)v116->fields.logic;
            this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v117 )
              goto LABEL_208;
            BattleData__SetWasAttackTargetIdList((BattleData_o *)v117, v118, (System_Int32_array *)this, 0LL);
            v119 = v51->fields.logic;
            if ( !v119 )
              goto LABEL_208;
            this = (BattleLogicSkill_o *)v119->fields.logicnomal;
            if ( !this )
              goto LABEL_208;
            v120 = BattleLogicNomal__taskCounterFunc(
                     (BattleLogicNomal_o *)this,
                     (BattleData_o *)*p_fields,
                     BYTE3(v116[10].fields.data) == 0,
                     1,
                     0,
                     0LL);
            BattleLogic__addBattleLogicTask(v119, v120, 0LL);
          }
        }
        v121 = *p_fields;
        if ( v9->fields.isFunctionedFunction )
        {
          if ( !v121 )
            goto LABEL_208;
          BattleData__ResetFunctionedFunctionIds((BattleData_o *)*p_fields, 0LL);
          goto LABEL_171;
        }
        v123 = v9->fields.actorIdlist;
        if ( v123 )
        {
          if ( !v123->max_length )
            goto LABEL_209;
          v124 = v123->m_Items[1];
        }
        else
        {
          v124 = -1;
        }
        this = (BattleLogicSkill_o *)v40[6].monitor;
        if ( this )
        {
          this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                         (System_Collections_Generic_List_int__o *)this,
                                         (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( v121 )
          {
            BattleData__SetFunctionedTargetIdArray((BattleData_o *)v121, v124, (System_Int32_array *)this, 0LL);
            v125 = v51->fields.logic;
            if ( v125 )
            {
              FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                                  v51->fields.logic,
                                                  (BattleData_o *)*p_fields,
                                                  0LL);
              BattleLogic__addBattleLogicTask(v125, FunctionedFunctionBuffTaskArray, 0LL);
LABEL_171:
              v127 = BattleLogicSkill__MakeAddInvokeSkillTask(v51, skillLvMst, v35, v9, v122);
              this = (BattleLogicSkill_o *)SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v35, 0LL);
              if ( !v51->fields.logic )
                goto LABEL_208;
              if ( ((unsigned __int8)this & 1) != 0 )
                BattleLogic__AddTaskTargetTaskAfter(v51->fields.logic, v9, v127, 0LL);
              else
                BattleLogic__AddBattleLogicTask(v51->fields.logic, v127, 0LL);
              v128 = *p_fields;
              this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                             skillInfo,
                                             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
              if ( !v128 )
                goto LABEL_208;
              BattleData__AddUseSkillId((BattleData_o *)v128, (int32_t)this, 0LL);
              if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v40, 0LL) )
              {
                v129 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(v129, v130);
                if ( !v129 )
                  goto LABEL_208;
                v129->fields.actiontype = 24;
                this = (BattleLogicSkill_o *)v51->fields.logic;
                if ( !this )
                  goto LABEL_208;
                BattleLogic__AddBattleLogicTask((BattleLogic_o *)this, v129, 0LL);
              }
              if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0 )
              {
                this = (BattleLogicSkill_o *)SkillEntity__getSkillCutInId(Entity, 0LL);
                if ( !(_DWORD)this )
                {
                  v133 = v51->fields.logic;
                  if ( !v133 )
                    goto LABEL_208;
                  perf = v133->fields.perf;
                  CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
                  if ( !perf )
                    goto LABEL_208;
                  BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
                  if ( v40[2].fields.logictarget )
                  {
                    if ( !*p_fields )
                      goto LABEL_208;
                    data = (*p_fields)[1].fields.data;
                    if ( !data )
                      goto LABEL_208;
                    this = (BattleLogicSkill_o *)data->fields.e_entryid;
                    if ( !this )
                      goto LABEL_208;
                    BattleInformationComponent__showCommonMessage(
                      (BattleInformationComponent_o *)this,
                      (BattleActionData_o *)v40,
                      0LL);
                    v40[2].fields.logictarget = 0LL;
                    sub_1BCAF9C((CGThumbnailListItem_o *)&v40[2].fields.logictarget, 0, v137, v138);
                    BYTE4(v40[6].fields.logic) = 1;
                  }
                }
              }
              if ( v9->fields.IsNotShowSkillMessage )
              {
                v40[2].fields.logictarget = 0LL;
                sub_1BCAF9C((CGThumbnailListItem_o *)&v40[2].fields.logictarget, 0, v131, v132);
                BYTE4(v40[6].fields.logic) = 1;
              }
              v139 = Entity;
              this = (BattleLogicSkill_o *)SkillEntity__IsCheckUpdateShiftServant(Entity, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v141 = (BattleLogicTask_o *)sub_1BCB244(CheckUpdateShiftTask_TypeInfo);
                BattleLogicTask___ctor(v141, v142);
                v141->fields.actiontype = 68;
                this = (BattleLogicSkill_o *)v51->fields.logic;
                if ( !this )
                  goto LABEL_208;
                this = (BattleLogicSkill_o *)BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)this, v9, v141, 0LL);
                v139 = Entity;
              }
              v143 = v9->fields.actorIdlist;
              if ( v143 )
              {
                if ( !v143->max_length )
                  goto LABEL_209;
                v144 = v143->m_Items[1];
              }
              else
              {
                v144 = -1;
              }
              BattleLogicSkill__ExecuteShortenSkillBuff(v51, (BattleSkillInfoData_o *)skillInfo, v144, v140);
              if ( !v9->fields.isForcedSpeedOne )
              {
                this = (BattleLogicSkill_o *)SkillEntity__IsBehaveAsAssistSkill(v139, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v146 = v51->fields.logic;
                  if ( !v146 )
                    goto LABEL_208;
                  this = (BattleLogicSkill_o *)v146->fields.perf;
                  if ( !this )
                    goto LABEL_208;
                  this = (BattleLogicSkill_o *)BattlePerformance__isEnableSkipStartQuest(
                                                 (BattlePerformance_o *)this,
                                                 0LL);
                  v146->fields.isEnableSkipAssistSkill = (unsigned __int8)this & 1;
                  v147 = v51->fields.logic;
                  if ( !v147 )
                    goto LABEL_208;
                  v148 = v147->fields.perf;
                  if ( !v148 )
                    goto LABEL_208;
                  v148->fields.isEnableSkipSkillCutIn = v147->fields.isEnableSkipAssistSkill;
                }
              }
              BattleLogicTask__SetInterruptLoadChangeModelAction(v9, (BattleActionData_o *)v40, v145);
              return (BattleActionData_o *)v40;
            }
          }
        }
LABEL_208:
        sub_1BCB254(this, task);
      }
      return 0LL;
    }
    changeTDCommandType = skillInfo->fields.changeTDCommandType;
    if ( (changeTDCommandType & 0x80000000) == 0 )
      v28->fields.commandType = changeTDCommandType;
    functionIdArray = v35->fields.funcId;
    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v35, 0LL);
    v34 = copyFuncVals;
    dataValsArray = (DataVals_array *)this;
    v79 = copyFuncVals == 0LL || !v44;
    if ( copyFuncVals != 0LL && v44 )
    {
      v80 = v9->fields.actorIdlist;
      if ( v80 )
      {
        if ( !v80->max_length )
          goto LABEL_209;
        v81 = v80->m_Items[1];
      }
      else
      {
        v81 = -1;
      }
      if ( !BattleLogicSkill__SetSkillCopyFunction(v51, v35, copyFuncVals, &functionIdArray, &dataValsArray, v81, v78) )
        return 0LL;
      this = *p_fields;
      if ( !*p_fields )
        goto LABEL_208;
      this = (BattleLogicSkill_o *)BattleData__isEnemyID((BattleData_o *)this, v28->fields.actorId, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*p_fields )
          goto LABEL_208;
        v82 = LODWORD((*p_fields)[18].fields.logicfunction) == 0;
      }
      else
      {
        v82 = 0;
      }
      v28->fields.isReversalShortBuffTurn = v82;
    }
    if ( skillInfo->fields.type == 1 )
    {
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BCB244(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
      if ( !argument )
        goto LABEL_208;
      argument->fields.grantSkillType = skillInfo->fields.type;
      if ( !v9->fields.isSideEffectTriggerSkill )
        goto LABEL_102;
    }
    else
    {
      if ( !v9->fields.isSideEffectTriggerSkill )
      {
        p_isShowBattlePointEffect = &v9->fields.isShowBattlePointEffect;
        if ( !v9->fields.isShowBattlePointEffect )
        {
          argument = 0LL;
          goto LABEL_104;
        }
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BCB244(BattleLogicFunction_FunctionArgument_TypeInfo);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( !argument )
          goto LABEL_208;
        goto LABEL_103;
      }
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BCB244(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
    }
    overwriteFuncSideEffectArg = (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)v9->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)sub_1BCB244(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(overwriteFuncSideEffectArg, 0LL);
    }
    if ( !argument )
      goto LABEL_208;
    BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
      argument,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
      0LL);
LABEL_102:
    p_isShowBattlePointEffect = &v9->fields.isShowBattlePointEffect;
    if ( !v9->fields.isShowBattlePointEffect )
    {
LABEL_104:
      v86 = v51->fields.logicfunction;
      v88 = dataValsArray;
      v87 = functionIdArray;
      this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                     skillInfo,
                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v86 )
        goto LABEL_208;
      this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                     v86,
                                     v28,
                                     v87,
                                     v88,
                                     0,
                                     1,
                                     0,
                                     0,
                                     0,
                                     v79,
                                     1,
                                     argument,
                                     (int32_t)this,
                                     0LL);
      v40 = this;
      v51 = v46;
      goto LABEL_106;
    }
LABEL_103:
    argument->fields.isShowBattlePointEffect = *p_isShowBattlePointEffect;
    goto LABEL_104;
  }
  return (BattleActionData_o *)v40;
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
  __int64 v13; // x2
  __int64 v14; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  BattleData_o *v17; // x8
  System_Int32_array *v18; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v20; // x6
  const MethodInfo *v21; // x3
  BattleData_o *v22; // x19
  const MethodInfo *v23; // x3
  __int64 v25; // x0

  if ( (byte_4B1F564 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTask___TypeInfo, method);
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, v3);
    sub_1BCAFF8(&BattleSkillInfoData_TypeInfo, v4);
    sub_1BCAFF8(&int___TypeInfo, v5);
    byte_4B1F564 = 1;
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
  v12 = sub_1BCB244(BattleSkillInfoData_TypeInfo);
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
  v14 = sub_1BCB244(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v14, v15);
  data = (BattleData_o *)sub_1BCB0A0(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v11;
  if ( !v14 )
    goto LABEL_26;
  *(_QWORD *)(v14 + 160) = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 160), (int32_t)data, v13, v16);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v17 = this->fields.data) == 0LL)
    || (v18 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v17, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v14,
          (BattleSkillInfoData_o *)v12,
          v18,
          FieldPlayerServantIDList,
          0,
          0,
          v20),
        BattleLogicTask__setActor((BattleLogicTask_o *)v14, 5, -1, v21),
        (data = (BattleData_o *)sub_1BCB0A0(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1BCB254(data, method);
  }
  v22 = data;
  data = (BattleData_o *)sub_1BCB134(v14, data->klass->_1.element_class);
  if ( !data )
  {
    v25 = sub_1BCB278(0LL);
    sub_1BCB120(v25, 0LL);
  }
  if ( !LODWORD(v22->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1BCB25C(data, method, v13);
  v22->fields.rootfsm = (struct PlayMakerFSM_o *)v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22->fields.rootfsm, v14, v13, v23);
  return (BattleLogicTask_array *)v22;
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
  __int64 v22; // x2
  unsigned int v23; // w0
  BattleLogicTask_o *v24; // x23
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v29; // x6
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B1F563 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, method);
    sub_1BCAFF8(&BattleSkillInfoData_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1F563 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
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
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( (int)v17->max_length >= 1 )
  {
    v19 = 0LL;
    m_Items = v17->m_Items;
    while ( 1 )
    {
      v21 = sub_1BCB244(BattleSkillInfoData_TypeInfo);
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
      v23 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0LL);
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 376LL))(
                                    v21,
                                    v23,
                                    *(_QWORD *)(*(_QWORD *)v21 + 384LL));
      if ( (unsigned int)v19 >= v17->max_length )
LABEL_29:
        sub_1BCB25C(Instance, v11, v22);
      Instance = (DataManager_o *)m_Items[v19];
      if ( !Instance )
        break;
      *(_DWORD *)(v21 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
      v24 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v24, v25);
      if ( !v24 )
        break;
      BattleLogicTask__setActor(v24, 5, -1, v26);
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
      if ( !this->fields.data )
        break;
      v27 = (System_Int32_array *)Instance;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
      BattleLogicTask__setActionSkill(v24, (BattleSkillInfoData_o *)v21, v27, FieldPlayerServantIDList, 0, 0, v29);
      BattleLogicTask__setActor(v24, 5, -1, v30);
      if ( !v18 )
        break;
      items = v18->fields._items;
      v34 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v18->fields._version;
      if ( !items )
        break;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v24,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v24;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v24, v31, v32);
      }
      if ( (int)++v19 >= (signed int)v17->max_length )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v18,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1BCB254(Instance, v11);
  }
  if ( !v18 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v15; // x1
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  const MethodInfo *v25; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_4B1F55A & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_4B1F55A = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v14, v15);
  if ( !v14
    || (BattleLogicTask__setCommandSpell(v14, skillId, 0LL, ptTargetList, v18), !v13)
    || (items = v13->fields._items,
        v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
    sub_1BCB254(v16, v17);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v14,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v14;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v14, v19, v20);
  }
  SkillTargetedBeforeFunctionSkill = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                                                                                      this,
                                                                                      v14,
                                                                                      ptTargetList,
                                                                                      0LL,
                                                                                      v25);
  System_Collections_Generic_List_object___InsertRange(
    v13,
    0,
    SkillTargetedBeforeFunctionSkill,
    (const MethodInfo_36BABB4 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v35; // x1
  __int64 data; // x0
  __int64 svtUniqueId; // x1
  const MethodInfo *v38; // x6
  BattleServantData_o *v39; // x25
  System_Int32_array *v40; // x2
  BattleLogicTarget_o *logictarget; // x21
  int32_t v42; // w29
  const MethodInfo *v43; // x4
  int32_t GlobalTargetId; // w0
  BattleData_o *v45; // x21
  int32_t v46; // w29
  int32_t TargetAiAct; // w21
  Il2CppClass *v48; // x0
  BattleLogicTarget_o *v49; // x29
  int32_t v50; // w21
  const MethodInfo *v51; // x3
  bool isPlayerID; // w0
  int32_t v53; // w2
  int32_t v54; // w1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  System_Collections_Generic_List_object__o *v61; // x24
  __int64 v62; // x8
  __int64 v63; // x25
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  const MethodInfo *v67; // x4
  __int64 v68; // x1
  __int64 v69; // x25
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  BattleSkillInfoData_o *v78; // x26
  System_Int32_array *v79; // x0
  __int64 v80; // x1
  System_Collections_Generic_IEnumerable_T__o *v81; // x0
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  BattleLogicSkill___c_c *v86; // x0
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v88; // x21
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  System_Collections_Generic_IEnumerable_T__o *v92; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]
  const MethodInfo *v95; // [xsp+10h] [xbp-80h]

  if ( (byte_4B1F559 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_StableSort_BattleLogicTask___, skillInfo);
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, v17);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_BattleLogicTask___, v18);
    sub_1BCAFF8(&System_Func_BattleLogicTask__int__TypeInfo, v19);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v20);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v21);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v22);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_1BCAFF8(&int___TypeInfo, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v28);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v29);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v30);
    sub_1BCAFF8(&Method_BattleLogicSkill___c__taskSkill_b__5_0__, v31);
    sub_1BCAFF8(&BattleLogicSkill___c_TypeInfo, v32);
    byte_4B1F559 = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v34 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v34, v35);
  if ( !skillInfo )
    goto LABEL_94;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_94;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0LL);
  v39 = (BattleServantData_o *)data;
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
    v40 = enemyTargetList;
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
        v42 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !logictarget )
          goto LABEL_94;
        GlobalTargetId = BattleLogicTarget__getGlobalTargetId(
                           logictarget,
                           v42,
                           v42 == -1,
                           (System_Int32_array *)data,
                           v43);
      }
      else
      {
        v45 = this->fields.data;
        v46 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !v45 )
          goto LABEL_94;
        GlobalTargetId = BattleData__getTargetLock(v45, v46, v46 == -1, (System_Int32_array *)data, 0LL);
      }
      TargetAiAct = GlobalTargetId;
      v48 = int___TypeInfo;
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_94;
      v49 = this->fields.logictarget;
      v50 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !v49 )
        goto LABEL_94;
      TargetAiAct = BattleLogicTarget__getTargetAiAct(
                      v49,
                      1,
                      v50,
                      0LL,
                      (System_Int32_array *)data,
                      1,
                      0,
                      0LL,
                      0LL,
                      (bool)&dword_0 + 1,
                      v95);
      v48 = int___TypeInfo;
    }
    data = sub_1BCB0A0(v48, 1LL);
    if ( !data )
      goto LABEL_94;
    v40 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
      sub_1BCB25C(data, svtUniqueId, data);
    *(_DWORD *)(data + 32) = TargetAiAct;
    enemyTargetList = 0LL;
    if ( !v34 )
LABEL_94:
      sub_1BCB254(data, svtUniqueId);
  }
  BattleLogicTask__setActionSkill(v34, skillInfo, v40, ptTargetList, checkAlive, checkRevengeId, v38);
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v54 = 1;
    v53 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    v53 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v54 = 2;
    else
      v54 = 3;
  }
  BattleLogicTask__setActor(v34, v54, v53, v51);
  if ( !v33 )
    goto LABEL_94;
  items = v33->fields._items;
  v58 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v33->fields._version;
  if ( !items )
    goto LABEL_94;
  size = v33->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v34,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    if ( !v39 )
      goto LABEL_47;
  }
  else
  {
    v60 = &items->obj.klass + size;
    v33->fields._size = size + 1;
    v60[4] = (Il2CppClass *)v34;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v34, v55, v56);
    if ( !v39 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v33,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v61 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v61,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v61 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v39, this->fields.data, 0LL);
  if ( !data )
    goto LABEL_94;
  v62 = *(_QWORD *)data;
  v63 = data;
  v64 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
  if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
  {
    v65 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v65 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_46;
    }
    v66 = v62 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_46:
    v66 = sub_1C1B560(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v69 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v63, *(_QWORD *)(v66 + 8));
  if ( !v69 )
    sub_1BCB254(0LL, v68);
  while ( 1 )
  {
    v70 = *(_QWORD *)v69;
    v71 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
    {
      v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v72 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v71;
        v72 += 4;
        if ( !v71 )
          goto LABEL_55;
      }
      v73 = v70 + 16LL * *v72 + 312;
    }
    else
    {
LABEL_55:
      v73 = sub_1C1B560(v69, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v69, *(_QWORD *)(v73 + 8)) & 1) == 0 )
      break;
    v74 = *(_QWORD *)v69;
    v75 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
    {
      v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v76 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v75;
        v76 += 4;
        if ( !v75 )
          goto LABEL_62;
      }
      v77 = v74 + 16LL * *v76 + 312;
    }
    else
    {
LABEL_62:
      v77 = sub_1C1B560(v69, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v78 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v69, *(_QWORD *)(v77 + 8));
    v79 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
    if ( !v78 )
      sub_1BCB254(v79, v80);
    if ( !v79 )
      sub_1BCB254(0LL, v80);
    if ( !v79->max_length )
      sub_1BCB25C(v79, v80, v79);
    v79->m_Items[1] = v78->fields.svtUniqueId;
    v81 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v78,
                                                           v79,
                                                           0LL,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           isDeadToEnableUpHate);
    if ( !v61 )
      sub_1BCB254(v81, v81);
    System_Collections_Generic_List_object___AddRange(
      v61,
      v81,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v82 = *(_QWORD *)v69;
  v83 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
  {
    v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
    {
      --v83;
      v84 += 4;
      if ( !v83 )
        goto LABEL_73;
    }
    v85 = v82 + 16LL * *v84 + 312;
  }
  else
  {
LABEL_73:
    v85 = sub_1C1B560(v69, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v85)(v69, *(_QWORD *)(v85 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v61 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v33,
                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_81;
  }
  if ( !v61 )
    goto LABEL_48;
LABEL_79:
  data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(this, v34, ptTargetList, enemyTargetList, v67);
  if ( !v61 )
    goto LABEL_94;
  System_Collections_Generic_List_object___AddRange(
    v61,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v61,
         (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
  {
    v86 = BattleLogicSkill___c_TypeInfo;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v86 = BattleLogicSkill___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__int__o *)v86->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v86->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v86);
        v86 = BattleLogicSkill___c_TypeInfo;
      }
      v88 = (Il2CppObject *)v86->static_fields->__9;
      _9__5_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v88, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v90, v91);
    }
    v92 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v61,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_300A1A4 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v33,
      0,
      v92,
      (const MethodInfo_36BABB4 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v33,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B1F56A & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicSkill___c_TypeInfo, v1);
    byte_4B1F56A = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleLogicSkill___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1BCB254(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0LL )
    sub_1BCB254(this, x);
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

  if ( (byte_4B1F56B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_4B1F56B = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BCB254(conditions, key);
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

  if ( (byte_4B1F56C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BCAFF8(&long_TypeInfo, v8);
    byte_4B1F56C = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1BCB254(conditions, key);
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
                                                                            (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  v17 = sub_1BCB514(conditions);
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

  if ( (byte_4B1F56D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_4B1F56D = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BCB254(conditions, key);
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
  BattleLogicSkill___c__DisplayClass19_0_o *v14; // x0
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1F56E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BCAFF8(&long_TypeInfo, v8);
    byte_4B1F56E = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1BCB254(conditions, key);
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
                                                                            (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  sub_1BCB514(conditions);
  return BattleLogicSkill___c__DisplayClass19_0___SetSkillCopyFunction_b__0(v14, v15, v16);
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
    sub_1BCB254(0LL, type);
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
    sub_1BCB254(this, type);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B1F56F & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1BCAFF8(&Method_System_Linq_Enumerable_Union_int___, current);
    byte_4B1F56F = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (task = v6->fields.task) == 0LL )
    sub_1BCB254(this, current);
  actorIdlist = task->fields.actorIdlist;
  data = _4__this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1BCB25C(data, current, *(_QWORD *)&targetType);
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
                                                            (const MethodInfo_305C014 *)Method_System_Linq_Enumerable_Union_int___);
}


BattleServantData_o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0LL )
    sub_1BCB254(this, uniqueId);
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
    sub_1BCB254(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0LL);
}