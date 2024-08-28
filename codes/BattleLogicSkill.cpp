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
  BattleBuffData_BuffData_array *BuffList_42225300; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v15; // w24
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x23

  if ( (byte_4A22719 & 1) == 0 )
  {
    sub_1B715CC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, actSkillInfo);
    byte_4A22719 = 1;
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
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B71818(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(v11, v10, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      BuffList_42225300 = BattleBuffData__getBuffList_42225300(buffData, 143, v11, 1, 0, 0LL, 0LL, 0LL);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_42225300, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_42225300 )
      {
        max_length = BuffList_42225300->max_length;
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
              sub_1B71830(data, actSkillInfo);
            v17 = &BuffList_42225300->obj.klass + (int)v15;
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
            max_length = BuffList_42225300->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1B71828(data, actSkillInfo);
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

  if ( (byte_4A22715 & 1) == 0 )
  {
    sub_1B715CC(&Method_WeightRate_int___ctor__, rateArray);
    sub_1B715CC(&Method_WeightRate_int__getData__, v4);
    sub_1B715CC(&Method_WeightRate_int__getTotalWeight__, v5);
    sub_1B715CC(&Method_WeightRate_int__setWeight__, v6);
    sub_1B715CC(&WeightRate_int__TypeInfo, v7);
    byte_4A22715 = 1;
  }
  if ( !rateArray )
    return -1;
  v8 = (WeightRate_int__o *)sub_1B71818(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v8, (const MethodInfo_38AB4A0 *)Method_WeightRate_int___ctor__);
  v11 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1B71830(v9, v10);
      if ( !v8 )
        break;
      WeightRate_int___setWeight(
        v8,
        rateArray->m_Items[v12 + 1],
        v12,
        (const MethodInfo_38AA9BC *)Method_WeightRate_int__setWeight__);
      LODWORD(v11) = rateArray->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_12;
    }
LABEL_13:
    sub_1B71828(v9, v10);
  }
  if ( !v8 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v8->fields.totalweight, 0LL);
  return WeightRate_int___getData(v8, Next, (const MethodInfo_38AAE30 *)Method_WeightRate_int__getData__);
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
  int32_t v42; // w3
  __int64 v43; // x25
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_List_object__o *v46; // x19
  _QWORD *v47; // x24
  __int64 v48; // x8
  __int64 v49; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x24
  DataVals_array *DataValArray; // x0
  BattleLogicSkill___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x22
  System_Func_T__TResult__o *_9__7_0; // x23
  Il2CppObject *v56; // x25
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x22
  System_Func_T1__T2__TResult__o *v61; // x23
  System_Func_T__TResult__o *v62; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v63; // x0
  BattleLogicSkill___c_c *v64; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x22
  System_Func_object__bool__o *_9__7_3; // x23
  Il2CppObject *v67; // x24
  struct BattleLogicSkill___c_StaticFields *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x22
  System_Func_object__object__o *v72; // x23
  __int64 v73; // x8
  void *v74; // x21
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x21
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  BattleSkillInfoData_o *v88; // x22
  System_Int32_array *v89; // x0
  __int64 v90; // x1
  System_Collections_Generic_IEnumerable_T__o *v91; // x0
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  BattleLogicSkill___c_c *v96; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v98; // x21
  struct BattleLogicSkill___c_StaticFields *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  const MethodInfo *v103; // [xsp+8h] [xbp-68h]

  if ( (byte_4A2270D & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_Empty_int___, task);
    sub_1B715CC(&Method_BasicHelper_StableSort_BattleLogicTask___, v9);
    sub_1B715CC(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____, v10);
    sub_1B715CC(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___, v11);
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___, v12);
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v13);
    sub_1B715CC(&Method_System_Linq_Enumerable_Union_int___, v14);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v15);
    sub_1B715CC(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo, v16);
    sub_1B715CC(&System_Func_BattleLogicTask__int__TypeInfo, v17);
    sub_1B715CC(&System_Func_int__BattleServantData__TypeInfo, v18);
    sub_1B715CC(&System_Func_BattleServantData__bool__TypeInfo, v19);
    sub_1B715CC(&System_Func_DataVals__Target_TYPE__TypeInfo, v20);
    sub_1B715CC(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo, v21);
    sub_1B715CC(&System_IDisposable_TypeInfo, v22);
    sub_1B715CC(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v23);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v24);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v25);
    sub_1B715CC(&int___TypeInfo, v26);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v27);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v28);
    sub_1B715CC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v29);
    sub_1B715CC(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__, v30);
    sub_1B715CC(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__, v31);
    sub_1B715CC(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__, v32);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__, v33);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__, v34);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__, v35);
    sub_1B715CC(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo, v36);
    sub_1B715CC(&BattleLogicSkill___c_TypeInfo, v37);
    byte_4A2270D = 1;
  }
  v38 = sub_1B71818(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_75;
  *(_QWORD *)(v38 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v38 + 16), (int32_t)this, v41, v42);
  *(_QWORD *)(v38 + 24) = task;
  v43 = v38 + 24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v38 + 24), (int32_t)task, v44, v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v47 = Method_System_Array_Empty_int___;
  v48 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v48 )
  {
    sub_1BC3504(Method_System_Array_Empty_int___);
    v48 = v47[7];
  }
  v49 = *(_QWORD *)(v48 + 16);
  if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
    v49 = sub_1BC34A8(v49);
  if ( !*(_DWORD *)(v49 + 224) )
    j_il2cpp_runtime_class_init_0(v49);
  v39 = *(__int64 **)(v47[7] + 16LL);
  if ( (*((_BYTE *)v39 + 309) & 1) == 0 )
    v39 = (__int64 *)sub_1BC34A8(v39);
  v50 = (System_Collections_Generic_IEnumerable_TSource__o **)v39[23];
  v51 = *v50;
  if ( ptTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v50,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_2E97EE8 *)Method_System_Linq_Enumerable_Union_int___);
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  }
  if ( enemyTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v51,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_2E97EE8 *)Method_System_Linq_Enumerable_Union_int___);
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  }
  if ( !*(_QWORD *)v43 )
    goto LABEL_75;
  v39 = *(__int64 **)(*(_QWORD *)v43 + 72LL);
  if ( !v39 )
    goto LABEL_75;
  if ( *((_DWORD *)v39 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v39, 0LL);
    v53 = BattleLogicSkill___c_TypeInfo;
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v53 = BattleLogicSkill___c_TypeInfo;
    }
    _9__7_0 = (System_Func_T__TResult__o *)v53->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = BattleLogicSkill___c_TypeInfo;
      }
      v56 = (Il2CppObject *)v53->static_fields->__9;
      _9__7_0 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v56,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v58, v59);
    }
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v54,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2E8B904 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v61 = (System_Func_T1__T2__TResult__o *)sub_1B71818(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v61,
      (Il2CppObject *)v38,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0LL);
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v60,
                                                                 (Il2CppObject *)v51,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v61,
                                                                 (const MethodInfo_2E65E28 *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v62 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v62,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0LL);
  v63 = System_Linq_Enumerable__Select_int__object_(
          v51,
          (System_Func_TSource__TResult__o *)v62,
          (const MethodInfo_2E89818 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v64 = BattleLogicSkill___c_TypeInfo;
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)v63;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v64 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_3 = (System_Func_object__bool__o *)v64->static_fields->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = BattleLogicSkill___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v64->static_fields->__9;
    _9__7_3 = (System_Func_object__bool__o *)sub_1B71818(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v67,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0LL);
    v68 = BattleLogicSkill___c_TypeInfo->static_fields;
    v68->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v68->__9__7_3, (int32_t)_9__7_3, v69, v70);
  }
  v71 = System_Linq_Enumerable__Where_object_(
          v65,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v72 = (System_Func_object__object__o *)sub_1B71818(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v72,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0LL);
  v39 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v71,
                     (System_Func_TSource__IEnumerable_TResult___o *)v72,
                     (const MethodInfo_2E8E470 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v39 )
LABEL_75:
    sub_1B71828(v39, v40);
  v73 = *v39;
  v74 = v39;
  v75 = *(unsigned __int16 *)(*v39 + 302);
  if ( *(_WORD *)(*v39 + 302) )
  {
    v76 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v76 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_37;
    }
    v77 = v73 + 16LL * *v76 + 312;
  }
  else
  {
LABEL_37:
    v77 = sub_1BC35AC(v39, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v79 = (*(__int64 (__fastcall **)(void *, _QWORD))v77)(v74, *(_QWORD *)(v77 + 8));
  if ( !v79 )
    sub_1B71828(0LL, v78);
  while ( 1 )
  {
    v80 = *(_QWORD *)v79;
    v81 = *(unsigned __int16 *)(*(_QWORD *)v79 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v79 + 302LL) )
    {
      v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v82 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v81;
        v82 += 4;
        if ( !v81 )
          goto LABEL_44;
      }
      v83 = v80 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_44:
      v83 = sub_1BC35AC(v79, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8)) & 1) == 0 )
      break;
    v84 = *(_QWORD *)v79;
    v85 = *(unsigned __int16 *)(*(_QWORD *)v79 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v79 + 302LL) )
    {
      v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v86 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v85;
        v86 += 4;
        if ( !v85 )
          goto LABEL_51;
      }
      v87 = v84 + 16LL * *v86 + 312;
    }
    else
    {
LABEL_51:
      v87 = sub_1BC35AC(v79, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v88 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v87)(v79, *(_QWORD *)(v87 + 8));
    v89 = (System_Int32_array *)sub_1B71674(int___TypeInfo, 1LL);
    if ( !v88 )
      sub_1B71828(v89, v90);
    if ( !v89 )
      sub_1B71828(0LL, v90);
    if ( !v89->max_length )
      sub_1B71830(v89, v90);
    v89->m_Items[1] = v88->fields.svtUniqueId;
    v91 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v88,
                                                           v89,
                                                           0LL,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           v103);
    if ( !v46 )
      sub_1B71828(v91, v91);
    System_Collections_Generic_List_object___AddRange(
      v46,
      v91,
      (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v92 = *(_QWORD *)v79;
  v93 = *(unsigned __int16 *)(*(_QWORD *)v79 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v79 + 302LL) )
  {
    v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
    {
      --v93;
      v94 += 4;
      if ( !v93 )
        goto LABEL_62;
    }
    v95 = v92 + 16LL * *v94 + 312;
  }
  else
  {
LABEL_62:
    v95 = sub_1BC35AC(v79, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v95)(v79, *(_QWORD *)(v95 + 8));
  v96 = BattleLogicSkill___c_TypeInfo;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v96 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_5 = (System_Func_object__int__o *)v96->static_fields->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !v96->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v96);
      v96 = BattleLogicSkill___c_TypeInfo;
    }
    v98 = (Il2CppObject *)v96->static_fields->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_1B71818(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v98,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0LL);
    v99 = BattleLogicSkill___c_TypeInfo->static_fields;
    v99->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v99->__9__7_5, (int32_t)_9__7_5, v100, v101);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v46,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_2E4B2BC *)Method_BasicHelper_StableSort_BattleLogicTask___);
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
  System_Func_int__bool__o *v13; // x22
  bool v14; // w0

  if ( (byte_4A22717 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_int____75850432, actorIndividualities);
    sub_1B715CC(&System_Func_int__bool__TypeInfo, v6);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass18_0__IsNotSkillCopyTargetIndividuality_b__0__, v7);
    sub_1B715CC(&BattleLogicSkill___c__DisplayClass18_0_TypeInfo, v8);
    byte_4A22717 = 1;
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
          v12 = sub_1B71818(BattleLogicSkill___c__DisplayClass18_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v12, 0LL);
          if ( v11 >= notSkillCopyTargetIndividualities->max_length )
            sub_1B71830(IsNullOrEmpty, v10);
          if ( !v12 )
            break;
          *(_DWORD *)(v12 + 16) = notSkillCopyTargetIndividualities->m_Items[v11 + 1];
          v13 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v13,
            (Il2CppObject *)v12,
            Method_BattleLogicSkill___c__DisplayClass18_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0LL);
          v14 = BasicHelper__Any_int__48522544(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v13,
                  (const MethodInfo_2E46530 *)Method_BasicHelper_Any_int____75850432);
          if ( !v14 && (__int64)++v11 < (int)notSkillCopyTargetIndividualities->max_length )
            continue;
          return v14;
        }
LABEL_16:
        sub_1B71828(IsNullOrEmpty, v10);
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
  if ( (byte_4A2270F & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1B715CC(&TempBattleSkillInfoData_TypeInfo, skillLvMst);
    byte_4A2270F = 1;
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
          v16 = (TempBattleSkillInfoData_o *)sub_1B71818(TempBattleSkillInfoData_TypeInfo);
          TempBattleSkillInfoData___ctor(v16, v15, data_high, v11, 0LL);
          return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v16, actortype, isPlayerID, 0LL);
        }
      }
    }
LABEL_13:
    sub_1B71828(this, skillLvMst);
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
  BattleData_o *IsQuestClear_37394868; // x0
  __int64 v19; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v24; // x22
  unsigned int v25; // w24
  AddSkillData_o *v26; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A22718 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    sub_1B715CC(&CondType_TypeInfo, v11);
    sub_1B715CC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v12);
    sub_1B715CC(&DataManager_TypeInfo, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_DataVals__AddRange__, v15);
    byte_4A22718 = 1;
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
  IsQuestClear_37394868 = (BattleData_o *)CondType__IsQuestClear_37394868(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_37394868 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !targetIds->max_length )
      goto LABEL_30;
    IsQuestClear_37394868 = this->fields.data;
    if ( !IsQuestClear_37394868 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_37394868, targetIds->m_Items[1], 0LL);
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
    IsQuestClear_37394868 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v21->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1B71828(IsQuestClear_37394868, v19);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v24 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_37394868;
      v25 = 0;
      while ( v25 < max_length )
      {
        v26 = classBoardAddCommandSpells->m_Items[v25];
        if ( !v26 || !v24 )
          goto LABEL_29;
        IsQuestClear_37394868 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v24,
                                                  &entity,
                                                  v26->fields.id,
                                                  commandSpellId,
                                                  v26->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_37394868 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_34B3448 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_37394868 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_37394868 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_37394868,
            (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v25 >= max_length )
          return;
      }
LABEL_30:
      sub_1B71830(IsQuestClear_37394868, v19);
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
  int32_t v38; // w3
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
  int32_t v49; // w3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_Int32_array *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Object_array *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  ServantStatusBattleListViewItem_o *v63; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v64; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v65; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v11 = skillLvEnt;
  v12 = this;
  if ( (byte_4A22716 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_int____75850432, skillLvEnt);
    sub_1B715CC(&Method_DataManager_GetMasterData_FunctionMaster___, v13);
    sub_1B715CC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v14);
    sub_1B715CC(&System_Func_int__bool__TypeInfo, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_DataVals__Add__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_List_DataVals__ToArray__, v19);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B715CC(&Method_System_Collections_Generic_List_DataVals___ctor__, v21);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B715CC(&System_Collections_Generic_List_DataVals__TypeInfo, v23);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__0__, v25);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__1__, v26);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__2__, v27);
    this = (BattleLogicSkill_o *)sub_1B715CC(&BattleLogicSkill___c__DisplayClass17_0_TypeInfo, v28);
    byte_4A22716 = 1;
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
  v63 = (ServantStatusBattleListViewItem_o *)functionIdArray;
  v65 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  v64 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v34 = 0LL;
  while ( (__int64)v34 < (int)funcId->max_length )
  {
    v35 = sub_1B71818(BattleLogicSkill___c__DisplayClass17_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v35, 0LL);
    v36 = v11->fields.funcId;
    if ( !v36 )
      goto LABEL_52;
    if ( v34 >= v36->max_length )
      goto LABEL_57;
    if ( !v35 )
      goto LABEL_52;
    *(_DWORD *)(v35 + 16) = v36->m_Items[v34 + 1];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v30, 0LL)
      || (v39 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v39,
            (Il2CppObject *)v35,
            Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__0__,
            0LL),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__48522544(
                                         (System_Int32_array *)v30,
                                         (System_Func_T__bool__o *)v39,
                                         (const MethodInfo_2E46530 *)Method_BasicHelper_Any_int____75850432),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v35 + 24) = 0LL;
      v40 = v35 + 24;
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v35 + 24), 0, v37, v38);
      if ( !v33 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v33,
                                     (Il2CppObject **)(v35 + 24),
                                     *(_DWORD *)(v35 + 16),
                                     (const MethodInfo_30F87B4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                  || (v41 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v41,
                        (Il2CppObject *)v35,
                        Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__1__,
                        0LL),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__48522544(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v41,
                                                     (const MethodInfo_2E46530 *)Method_BasicHelper_Any_int____75850432),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v34 >= SetTypeDataValArray->max_length )
LABEL_57:
                    sub_1B71830(this, skillLvEnt);
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
                      || (v44 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v44,
                            (Il2CppObject *)v35,
                            Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__2__,
                            0LL),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__48522544(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v44,
                                                         (const MethodInfo_2E46530 *)Method_BasicHelper_Any_int____75850432),
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
                          *(const MethodInfo_34B323C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
                          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v53 = &v50->obj.klass + v52;
                        v64->fields._size = v52 + 1;
                        v53[4] = (Il2CppClass *)skillLvEnt;
                        sub_1B71570((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)skillLvEnt, v48, v49);
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
                (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        v63->klass = (ServantStatusBattleListViewItem_c *)v54,
        sub_1B71570(v63, (int32_t)v54, v55, v56),
        (this = (BattleLogicSkill_o *)v64) == 0LL)
    || (v57 = System_Collections_Generic_List_object___ToArray(
                v64,
                (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v57,
        sub_1B71570((ServantStatusBattleListViewItem_o *)dataValsArray, (int32_t)v57, v58, v59),
        !v63->klass) )
  {
LABEL_52:
    sub_1B71828(this, skillLvEnt);
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
  int32_t svtUniqueId; // w26
  int32_t v22; // w0
  int32_t skilllv; // w27
  int32_t v24; // w29
  BattleActionData_o *v25; // x24
  bool v26; // w20
  BattleServantData_o *ServantData; // x25
  bool v28; // w22
  Il2CppObject *Entity; // x0
  SkillEntity_o *v30; // x28
  SkillLvEntity_o *v31; // x27
  System_Int32_array *Individualities; // x29
  System_Int32_array *ActIndividuality; // x0
  ServantEntity_o *svtdata; // x29
  int32_t Rarity; // w0
  __int64 v36; // x26
  __int64 v37; // x29
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
  int32_t v53; // w3
  BattleLogicSkill_SkillExecArgs_o *v54; // [xsp+38h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v10 = this;
  if ( (byte_4A22710 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_BattleServantData__TypeInfo, skillInfo);
    sub_1B715CC(&BattleActionData_TypeInfo, v11);
    sub_1B715CC(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_1B715CC(&Method_DataManager_GetMasterData_SkillMaster___, v13);
    sub_1B715CC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1B715CC(&BattleLogicFunction_FunctionArgument_TypeInfo, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Clear__, v16);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B715CC(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__, v19);
    this = (BattleLogicSkill_o *)sub_1B715CC(&BattleLogicSkill___c_TypeInfo, v20);
    byte_4A22710 = 1;
  }
  v54 = skillExecArgs;
  if ( !skillInfo )
    goto LABEL_43;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v22 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, bool, BattleLogicSkill_SkillExecArgs_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
          isShift,
          isDeckDataLoad,
          skillExecArgs,
          method);
  skilllv = skillInfo->fields.skilllv;
  v24 = v22;
  v25 = (BattleActionData_o *)sub_1B71818(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_43;
  v26 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_43;
  v28 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_43;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v24,
             (const MethodInfo_30F8760 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v30 = (SkillEntity_o *)Entity;
    if ( !SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
    {
      this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( this )
        {
          this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v24, skilllv, 0LL);
          v31 = (SkillLvEntity_o *)this;
          if ( skillInfo->fields.type == 12 )
          {
            if ( !ServantData )
              goto LABEL_43;
            Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 1, 0, 0LL);
            ActIndividuality = SkillEntity__getActIndividuality(v30, 0LL);
            if ( !Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
              return;
            svtdata = ServantData->fields.svtdata;
            Rarity = BattleServantData__getRarity(ServantData, 0LL);
            this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v31, svtdata, Rarity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return;
          }
          if ( v25 )
          {
            v25->fields.actorId = svtUniqueId;
            if ( ServantData )
            {
              v37 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
              v36 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v55.fields.currentCryptoKey = v37;
              *(_QWORD *)&v55.fields.fakeValue = v36;
              v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v55, 0LL);
              v25->fields.motionId = SkillEntity__GetMotionId(v30, v38, 0LL);
              v39 = v28;
              v25->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
              v25->fields.commandAssistId = skillInfo->fields.commandAssistId;
              v25->fields.cardIndex = skillInfo->fields.index;
              if ( v54 )
              {
                if ( !v54->fields._AllowUpdateFieldServantResultStatus_k__BackingField )
                  goto LABEL_24;
              }
              this = (BattleLogicSkill_o *)v10->fields.logic;
              if ( !this )
                goto LABEL_43;
              BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
              if ( v54 )
LABEL_24:
                Timing_k__BackingField = v54->fields._Timing_k__BackingField;
              else
                Timing_k__BackingField = 0;
              argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B71818(BattleLogicFunction_FunctionArgument_TypeInfo);
              BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
              if ( argument )
              {
                type = skillInfo->fields.type;
                argument->fields.isDeckDataLoad = v26;
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
                                                   v25,
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
                    if ( !v54 || v54->fields._RemoveActorUnfixedBuff_k__BackingField )
                    {
                      buffData = ServantData->fields.buffData;
                      if ( !buffData )
                        goto LABEL_43;
                      unfixedBuffList = buffData->fields.unfixedBuffList;
                      if ( !unfixedBuffList )
                        goto LABEL_43;
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
                      master = (struct FunctionMaster_o *)sub_1B71818(System_Action_BattleServantData__TypeInfo);
                      System_Action_object____ctor(
                        (System_Action_object__o *)master,
                        klass,
                        Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                        0LL);
                      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                      static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                      sub_1B71570(
                        (ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0,
                        (int32_t)master,
                        v52,
                        v53);
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
      sub_1B71828(this, skillInfo);
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
  int32_t v34; // w3
  __int64 Instance; // x0
  __int64 v36; // x1
  SkillLvMaster_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
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
  int32_t v57; // w3

  if ( (byte_4A22712 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7);
    sub_1B715CC(&System_Func_string__int__bool__TypeInfo, v8);
    sub_1B715CC(&System_Func_string__double__bool__TypeInfo, v9);
    sub_1B715CC(&LocalizationManager_TypeInfo, v10);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__0__, v12);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__1__, v13);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__2__, v14);
    sub_1B715CC(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__3__, v15);
    sub_1B715CC(&BattleLogicSkill___c__DisplayClass13_0_TypeInfo, v16);
    sub_1B715CC(&StringLiteral_2972/*"BATTLE_SKILLERROR_NP_LOWER"*/, v17);
    sub_1B715CC(&StringLiteral_2970/*"BATTLE_SKILLERROR_HP_LOWER"*/, v18);
    sub_1B715CC(&StringLiteral_12215/*"STAR_HIGHER"*/, v19);
    sub_1B715CC(&StringLiteral_7134/*"HP_PER_LOWER"*/, v20);
    sub_1B715CC(&StringLiteral_2971/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v21);
    sub_1B715CC(&StringLiteral_2969/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v22);
    sub_1B715CC(&StringLiteral_7133/*"HP_PER_HIGHER"*/, v23);
    sub_1B715CC(&StringLiteral_2973/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v24);
    sub_1B715CC(&StringLiteral_9294/*"NP_HIGHER"*/, v25);
    sub_1B715CC(&StringLiteral_2974/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v26);
    sub_1B715CC(&StringLiteral_7135/*"HP_VAL_HIGHER"*/, v27);
    sub_1B715CC(&StringLiteral_12216/*"STAR_LOWER"*/, v28);
    sub_1B715CC(&StringLiteral_1/*""*/, v29);
    sub_1B715CC(&StringLiteral_9295/*"NP_LOWER"*/, v30);
    sub_1B715CC(&StringLiteral_7136/*"HP_VAL_LOWER"*/, v31);
    byte_4A22712 = 1;
  }
  v32 = sub_1B71818(BattleLogicSkill___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)text, (int32_t)StringLiteral_1/*""*/, v33, v34);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v32 + 16), v40, v38, v39);
  v41 = *(System_Collections_Generic_Dictionary_object__object__o **)(v32 + 16);
  if ( !v41 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v41,
         (const MethodInfo_319E9E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v42 = sub_1B71818(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v42,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__0__,
    0LL);
  v43 = sub_1B71818(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v43,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__1__,
    0LL);
  v44 = sub_1B71818(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v44,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__2__,
    0LL);
  v45 = sub_1B71818(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v45,
    (Il2CppObject *)v32,
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
  v46 = (BattleServantData_o *)Instance;
  Instance = BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v42 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
          *(_QWORD *)(v42 + 64),
          StringLiteral_9294/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v42 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2971/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v46, 0LL);
  if ( !v43 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
               *(_QWORD *)(v43 + 64),
               StringLiteral_9295/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v43 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2972/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
               *(_QWORD *)(v42 + 64),
               StringLiteral_12215/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v42 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2973/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v48 = this->fields.data;
  if ( !v48 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_12216/*"STAR_LOWER"*/,
          (unsigned int)v48->fields.totalCriticalStars,
          *(_QWORD *)(v43 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2974/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v46, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
          *(_QWORD *)(v42 + 64),
          StringLiteral_7135/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v42 + 40)) & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2969/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v50 = BattleServantData__getNowHp(v46, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_7136/*"HP_VAL_LOWER"*/,
          v50,
          *(_QWORD *)(v43 + 40)) & 1) != 0 )
  {
    v51 = BattleServantData__getNowHp(v46, 0LL);
    Instance = BattleServantData__getMaxHp(v46, 0LL);
    if ( !v44 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v44 + 24))(
            *(_QWORD *)(v44 + 64),
            StringLiteral_7133/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v44 + 40),
            (double)v51 * 1000.0 / (double)(int)Instance) & 1) != 0 )
    {
      v52 = BattleServantData__getNowHp(v46, 0LL);
      Instance = BattleServantData__getMaxHp(v46, 0LL);
      if ( v45 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v45 + 24))(
                *(_QWORD *)(v45 + 64),
                StringLiteral_7134/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v45 + 40),
                (double)v52 * 1000.0 / (double)(int)Instance) & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1B71828(Instance, v36);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = &StringLiteral_2970/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v55 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
  *text = v55;
  sub_1B71570((ServantStatusBattleListViewItem_o *)text, (int32_t)v55, v56, v57);
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
  int32_t v24; // w3
  BattleActionData_c *v25; // x0
  struct System_Int32_array *ptTarget; // x1
  int32_t v27; // w2
  int32_t v28; // w3
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

  if ( (byte_4A22711 & 1) == 0 )
  {
    sub_1B715CC(&BattleActionData_TypeInfo, task);
    sub_1B715CC(&BattleActionLogManagerInterface_TypeInfo, v5);
    sub_1B715CC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v6);
    sub_1B715CC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_DataVals__AddRange__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_DataVals__ToArray__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_DataVals___ctor__, v13);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B715CC(&System_Collections_Generic_List_DataVals__TypeInfo, v15);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A22711 = 1;
  }
  v17 = sub_1B71818(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v17, 0LL);
  if ( !task )
    goto LABEL_29;
  skillInfo = task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_29;
  skillId = (DataManager_o *)DataManager__GetMasterData_object_(
                               skillId,
                               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
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
                               (const MethodInfo_30F8760 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)ptTarget, v23, v24);
  *(_QWORD *)(v17 + 144) = skillInfo;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v17 + 144), (int32_t)skillInfo, v27, v28);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_29;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v29 )
    goto LABEL_29;
  System_Collections_Generic_List_int___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)v22->fields.lookup,
    (const MethodInfo_34B3448 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v22, 0LL);
  if ( !v30 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_DataVals__AddRange__);
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
          (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v34 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
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
    p_method = sub_1BC35AC(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
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
    sub_1B71828(skillId, v19);
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
  v5 = BattleLogicSkill__createSkillData_43372280(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_1B71828(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_43372280(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
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
  __int64 skillId; // x0
  BattleActionData_o *v27; // x22
  BattleActionData_o *v28; // x25
  int32_t v29; // w2
  int32_t v30; // w3
  BattleBoostItemInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x22
  SkillEntity_o *Entity; // x22
  Il2CppObject *MasterData_object; // x24
  SkillLvEntity_o *v35; // x24
  BattleActionData_c *v36; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 methodPtr_low; // x10
  BattleData_o *data; // x28
  __int64 v40; // x28
  bool isForcedSkillSpeedOne; // w28
  BattleData_o *v42; // x29
  BattleServantData_o *EnemyServantData; // x0
  __int64 v44; // x27
  __int64 v45; // x29
  BattleData_o *v46; // x29
  struct System_Int32_array *ptTarget; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *Name; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_array *v57; // x28
  System_Object_array *v58; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  ServantStatusBattleListViewItem_o *p_motionMessage; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Int32_array *effectList; // x1
  int v65; // w8
  DataVals_array *v66; // x26
  int i; // w9
  __int64 v68; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  bool v72; // w23
  int32_t ActorId; // w0
  const MethodInfo *v74; // x6
  struct BattleData_o *v75; // x8
  bool v76; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  BattleLogicFunction_o *v80; // x29
  System_Int32_array *v81; // x27
  DataVals_array *v82; // x28
  int32_t v83; // w0
  UnityEngine_Object_o *v84; // x27
  int32_t v85; // w26
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  struct BattleData_o *v90; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v93; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  __int64 v98; // x1
  int32_t v99; // w1
  int32_t v100; // w2
  int32_t v101; // w3
  __int64 *v102; // x26
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x1
  int32_t v106; // w1
  int32_t v107; // w2
  int32_t v108; // w3
  int32_t type; // w23
  BattleData_o *v110; // x25
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v112; // x4
  _BOOL4 v113; // w8
  BattleData_o *v114; // x25
  BattleServantData_o *v115; // x0
  BattleServantData_o *v116; // x25
  BattleData_o *v117; // x26
  int32_t uniqueId; // w27
  const MethodInfo *v119; // x5
  struct BattleLogic_o *v120; // x26
  BattleLogicTask_array *v121; // x0
  BattleLogicTask_o *v122; // x23
  BattleData_o *v123; // x23
  BattleLogicTask_o *v124; // x23
  int32_t v125; // w2
  int32_t v126; // w3
  struct BattleLogic_o *v127; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattleData_o *v130; // x8
  struct BattlePerformance_o *v131; // x8
  int32_t v132; // w2
  int32_t v133; // w3
  BattleLogicTask_o *v134; // x22
  int32_t v135; // w0
  const MethodInfo *v136; // x3
  SkillLvMaster_o *skillLvMst; // [xsp+30h] [xbp-80h]
  DataVals_o *v139; // [xsp+38h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+40h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  if ( (byte_4A2270E & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_IndexValue_int___, task);
    sub_1B715CC(&BattleActionData_TypeInfo, v11);
    sub_1B715CC(&BattleActionLogManagerInterface_TypeInfo, v12);
    sub_1B715CC(&BattleBoostItemInfoData_TypeInfo, v13);
    sub_1B715CC(&BattleLogicTask_TypeInfo, v14);
    sub_1B715CC(&CheckUpdateShiftTask_TypeInfo, v15);
    sub_1B715CC(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1B715CC(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1B715CC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1B715CC(&BattleLogicFunction_FunctionArgument_TypeInfo, v19);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v21);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B715CC(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v24);
    sub_1B715CC(&StringLiteral_1/*""*/, v25);
    byte_4A2270E = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  skillId = (__int64)this->fields.data;
  if ( !skillId )
    goto LABEL_154;
  BattleData__ResetWasAttackTargetId((BattleData_o *)skillId, 0LL);
  v27 = (BattleActionData_o *)sub_1B71818(BattleActionData_TypeInfo);
  BattleActionData___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_154;
  v139 = baseVals;
  v28 = BattleActionData__AddDisplayTriggerIntervalBuff(v27, task, 0LL);
  *baseActionData = v28;
  sub_1B71570((ServantStatusBattleListViewItem_o *)baseActionData, (int32_t)v28, v29, v30);
  if ( !task )
    goto LABEL_154;
  if ( !v28 )
    goto LABEL_154;
  v28->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  skillId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_154;
  skillId = (__int64)DataManager__GetMasterData_object_(
                       (DataManager_o *)skillId,
                       (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_154;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v32 )
    goto LABEL_154;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v32,
                              skillId,
                              (const MethodInfo_30F8760 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_154;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillId,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_154;
  skillLvMst = (SkillLvMaster_o *)MasterData_object;
  skillId = (__int64)SkillLvMaster__GetEntity(
                       (SkillLvMaster_o *)MasterData_object,
                       skillId,
                       skillInfo->fields.skilllv,
                       0LL);
  v35 = (SkillLvEntity_o *)skillId;
  v28->fields.isCounter = task->fields.isCounter;
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
      skillId = BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( (skillId & 1) != 0 )
        v28->fields.noOperation = 1;
    }
  }
  if ( !task->fields.checkAlive )
    goto LABEL_159;
  data = this->fields.data;
  skillId = BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_154;
  skillId = (__int64)BattleData__getServantData(data, skillId, 0LL);
  if ( !skillId
    || (skillId = BattleServantData__isAlive((BattleServantData_o *)skillId, 0, 0LL), v40 = 0LL, (skillId & 1) != 0) )
  {
LABEL_159:
    if ( task->fields.isForcedSpeedOne )
    {
      isForcedSkillSpeedOne = 1;
    }
    else
    {
      if ( !Entity )
        goto LABEL_154;
      if ( !SkillEntity__isForcedSkillSpeedOne(Entity, 0LL) )
        goto LABEL_32;
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_154;
      if ( BattleData__checkEnablePlaySpeedOneFromSkillIdList((BattleData_o *)skillId, Entity->fields.id, 0LL) )
        isForcedSkillSpeedOne = SkillEntity__isForcedSkillSpeedOne(Entity, 0LL);
      else
LABEL_32:
        isForcedSkillSpeedOne = 0;
    }
    skillId = BattleLogicTask__getActorId(task, 0LL);
    v28->fields.actorId = skillId;
    if ( !v35 )
      goto LABEL_154;
    v42 = this->fields.data;
    skillId = SkillLvEntity__GetActNpcServantId(v35, 0LL);
    if ( !v42 )
      goto LABEL_154;
    EnemyServantData = BattleData__getEnemyServantData(v42, skillId, 0LL);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v44 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v142.fields.currentCryptoKey = v44;
      *(_QWORD *)&v142.fields.fakeValue = v45;
      v28->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v142, 0LL);
    }
    v46 = this->fields.data;
    skillId = BattleLogicTask__getActorId(task, 0LL);
    if ( !v46 )
      goto LABEL_154;
    skillId = BattleData__getServantId(v46, skillId, 0LL);
    if ( !Entity )
      goto LABEL_154;
    v28->fields.motionId = SkillEntity__GetMotionId(Entity, skillId, 0LL);
    v28->fields.targetId = BattleLogicTask__getTarget(task, 0LL);
    ptTarget = task->fields.ptTarget;
    v28->fields.pttargetIds = ptTarget;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v28->fields.pttargetIds, (int32_t)ptTarget, v48, v49);
    Name = SkillEntity__getName(Entity, 0LL);
    v28->fields.skillMessage = Name;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v28->fields.skillMessage, (int32_t)Name, v51, v52);
    v28->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v28->fields.skillInfo, (int32_t)skillInfo, v53, v54);
    v28->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
    v28->fields.checkRevengeId = task->fields.checkRevengeId;
    if ( BattleLogicTask__IsGimmick(task, 0LL) )
    {
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_154;
      skillId = (__int64)BattleData__GetGimmickStartVoiceArray((BattleData_o *)skillId, 0LL);
      if ( !this->fields.data )
        goto LABEL_154;
      v57 = (System_String_array *)skillId;
      skillId = (__int64)BattleData__GetGimmickResultVoiceArray(this->fields.data, 0LL);
      if ( !this->fields.data )
        goto LABEL_154;
      v58 = (System_Object_array *)skillId;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(this->fields.data, 0LL);
      BattleActionData__SetGimmickData(v28, task->fields.gimmickIndexArray, v57, v58, GimmickAnimTypeArray, 0LL);
    }
    motionMessage = task->fields.motionMessage;
    if ( motionMessage && motionMessage->fields._stringLength >= 1 )
    {
      v28->fields.motionMessage = motionMessage;
      p_motionMessage = (ServantStatusBattleListViewItem_o *)&v28->fields.motionMessage;
    }
    else
    {
      v28->fields.motionMessage = 0LL;
      p_motionMessage = (ServantStatusBattleListViewItem_o *)&v28->fields.motionMessage;
      LODWORD(motionMessage) = 0;
    }
    sub_1B71570(p_motionMessage, (int32_t)motionMessage, v55, v56);
    if ( (task->fields.actortype | 4) == 5 )
      BattleActionData__setStateField(v28, 0LL);
    effectList = Entity->fields.effectList;
    v28->fields.effectlist = effectList;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v28->fields.effectlist, (int32_t)effectList, v62, v63);
    skillId = (__int64)this->fields.logic;
    if ( !skillId )
      goto LABEL_154;
    BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
    if ( skillInfo->fields.type == 21 )
    {
      skillId = (__int64)SkillLvEntity__getDataValsList(v35, 0LL);
      if ( !skillId )
        goto LABEL_154;
      v65 = *(_DWORD *)(skillId + 24);
      v66 = (DataVals_array *)skillId;
      if ( v65 >= 1 )
      {
        for ( i = 0; i != v65; ++i )
        {
          if ( v65 == i )
            sub_1B71830(skillId, task);
          v68 = *(_QWORD *)(skillId + 8LL * i + 32);
          if ( !v68 )
            goto LABEL_154;
          *(_BYTE *)(v68 + 72) = 1;
        }
      }
      logicfunction = this->fields.logicfunction;
      funcId = v35->fields.funcId;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !logicfunction )
        goto LABEL_154;
      skillId = (__int64)BattleLogicFunction__procList(
                           logicfunction,
                           v28,
                           funcId,
                           v66,
                           1,
                           1,
                           0,
                           0,
                           0,
                           1,
                           1,
                           0LL,
                           skillId,
                           0LL);
      goto LABEL_87;
    }
    changeTDCommandType = skillInfo->fields.changeTDCommandType;
    if ( (changeTDCommandType & 0x80000000) == 0 )
      v28->fields.commandType = changeTDCommandType;
    functionIdArray = v35->fields.funcId;
    dataValsArray = SkillLvEntity__getDataValsList(v35, 0LL);
    v72 = v139 == 0LL || !fromSkillCopyFunc;
    if ( v139 != 0LL && fromSkillCopyFunc )
    {
      ActorId = BattleLogicTask__getActorId(task, 0LL);
      v40 = 0LL;
      if ( !BattleLogicSkill__SetSkillCopyFunction(this, v35, v139, &functionIdArray, &dataValsArray, ActorId, v74) )
        return (BattleActionData_o *)v40;
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_154;
      skillId = BattleData__isEnemyID((BattleData_o *)skillId, v28->fields.actorId, 0LL);
      if ( (skillId & 1) != 0 )
      {
        v75 = this->fields.data;
        if ( !v75 )
          goto LABEL_154;
        v76 = v75->fields.currentTurn == 0;
      }
      else
      {
        v76 = 0;
      }
      v28->fields.isReversalShortBuffTurn = v76;
    }
    if ( skillInfo->fields.type == 1 )
    {
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B71818(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
      if ( !argument )
        goto LABEL_154;
      argument->fields.grantSkillType = skillInfo->fields.type;
      if ( !task->fields.isSideEffectTriggerSkill )
        goto LABEL_83;
    }
    else
    {
      if ( !task->fields.isSideEffectTriggerSkill )
      {
        p_isShowBattlePointEffect = &task->fields.isShowBattlePointEffect;
        if ( !task->fields.isShowBattlePointEffect )
        {
          argument = 0LL;
          goto LABEL_85;
        }
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B71818(BattleLogicFunction_FunctionArgument_TypeInfo);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( !argument )
          goto LABEL_154;
        goto LABEL_84;
      }
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B71818(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
    }
    overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1B71818(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(
        (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
        0LL);
    }
    if ( !argument )
      goto LABEL_154;
    BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(argument, overwriteFuncSideEffectArg, 0LL);
LABEL_83:
    p_isShowBattlePointEffect = &task->fields.isShowBattlePointEffect;
    if ( !task->fields.isShowBattlePointEffect )
    {
LABEL_85:
      v80 = this->fields.logicfunction;
      v82 = dataValsArray;
      v81 = functionIdArray;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v80 )
        goto LABEL_154;
      skillId = (__int64)BattleLogicFunction__procList(
                           v80,
                           v28,
                           v81,
                           v82,
                           0,
                           1,
                           0,
                           0,
                           0,
                           v72,
                           1,
                           argument,
                           skillId,
                           0LL);
LABEL_87:
      v40 = skillId;
      if ( task->fields.actortype == 5 )
      {
        if ( !skillId )
          goto LABEL_154;
        v83 = BasicHelper__IndexValue_int__48537812(
                *(System_Collections_Generic_List_T__o **)(skillId + 288),
                0,
                0,
                (const MethodInfo_2E4A0D4 *)Method_BasicHelper_IndexValue_int___);
        v84 = *(UnityEngine_Object_o **)(v40 + 72);
        v85 = v83;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillId = UnityEngine_Object__op_Equality(v84, 0LL, 0LL);
        if ( v85 >= 1 && (skillId & 1) != 0 )
        {
          logic = this->fields.logic;
          if ( !logic )
            goto LABEL_154;
          skillId = (__int64)logic->fields.perf;
          if ( !skillId )
            goto LABEL_154;
          ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)skillId, v85, 0LL);
          *(_QWORD *)(v40 + 72) = ServantGameObject;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v40 + 72), (int32_t)ServantGameObject, v88, v89);
        }
      }
      ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
        skillInfo,
        skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
      BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
      skillId = (__int64)this->fields.logic;
      if ( skillId )
      {
        BattleLogic__updateConditionsBuffAll((BattleLogic_o *)skillId, 0LL);
        if ( v40 )
        {
          *(_BYTE *)(v40 + 92) = 0;
          skillId = (__int64)this->fields.data;
          if ( skillId )
          {
            BattleData__setCommandAttack((BattleData_o *)skillId, 0, 0, 0LL);
            v90 = this->fields.data;
            if ( v90 )
            {
              actionLogManager = v90->fields.actionLogManager;
              if ( actionLogManager )
              {
                klass = actionLogManager->klass;
                v93 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
                {
                  p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
                  while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
                  {
                    --v93;
                    p_offset += 2;
                    if ( !v93 )
                      goto LABEL_105;
                  }
                  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
                }
                else
                {
LABEL_105:
                  p_method = sub_1BC35AC(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL);
                }
                (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
                  actionLogManager,
                  task,
                  *(_QWORD *)(p_method + 8));
                if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v40, 0LL) )
                {
                  v98 = *(_QWORD *)(v40 + 120);
                  *(_QWORD *)(v40 + 440) = v98;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v40 + 440), v98, v96, v97);
                  v99 = (int)StringLiteral_1/*""*/;
                  *(_QWORD *)(v40 + 120) = StringLiteral_1/*""*/;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v40 + 120), v99, v100, v101);
                  v102 = (__int64 *)(v40 + 128);
                  if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v40 + 128), 0LL) )
                  {
                    v105 = *v102;
                    *(_QWORD *)(v40 + 440) = *v102;
                    sub_1B71570((ServantStatusBattleListViewItem_o *)(v40 + 440), v105, v103, v104);
                    v106 = (int)StringLiteral_1/*""*/;
                    *v102 = (__int64)StringLiteral_1/*""*/;
                    sub_1B71570((ServantStatusBattleListViewItem_o *)(v40 + 128), v106, v107, v108);
                  }
                }
                type = skillInfo->fields.type;
                v110 = this->fields.data;
                skillId = BattleLogicTask__getActorId(task, 0LL);
                if ( v110 )
                {
                  ServantData = BattleData__getServantData(v110, skillId, 0LL);
                  v113 = type != 1 && !ServantData || SkillLvEntity__IsNoTargetSkipSkill(v35, 0LL);
                  if ( (v113 & (*(unsigned __int8 *)(v40 + 240) ^ 1)) != 0
                    || *(_BYTE *)(v40 + 297) && !*(_BYTE *)(v40 + 298) )
                  {
                    return 0LL;
                  }
                  if ( task->fields.isCanCounterTask )
                  {
                    v114 = this->fields.data;
                    skillId = BattleLogicTask__getActorId(task, 0LL);
                    if ( !v114 )
                      goto LABEL_154;
                    v115 = BattleData__getServantData(v114, skillId, 0LL);
                    if ( v115 )
                    {
                      v116 = v115;
                      (*(void (__fastcall **)(__int64, struct BattleData_o *, _QWORD))(*(_QWORD *)v40 + 440LL))(
                        v40,
                        this->fields.data,
                        *(_QWORD *)(*(_QWORD *)v40 + 448LL));
                      skillId = *(_QWORD *)(v40 + 288);
                      if ( !skillId )
                        goto LABEL_154;
                      v117 = this->fields.data;
                      uniqueId = v116->fields.uniqueId;
                      skillId = (__int64)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)skillId,
                                           (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__);
                      if ( !v117 )
                        goto LABEL_154;
                      BattleData__SetWasAttackTargetIdList(v117, uniqueId, (System_Int32_array *)skillId, 0LL);
                      v120 = this->fields.logic;
                      if ( !v120 )
                        goto LABEL_154;
                      skillId = (__int64)v120->fields.logicnomal;
                      if ( !skillId )
                        goto LABEL_154;
                      v121 = BattleLogicNomal__taskCounterFunc(
                               (BattleLogicNomal_o *)skillId,
                               this->fields.data,
                               !v116->fields.isEnemy,
                               1,
                               0,
                               v119);
                      BattleLogic__addBattleLogicTask(v120, v121, 0LL);
                    }
                  }
                  v122 = BattleLogicSkill__MakeAddInvokeSkillTask(this, skillLvMst, v35, task, v112);
                  skillId = SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v35, 0LL);
                  if ( this->fields.logic )
                  {
                    if ( (skillId & 1) != 0 )
                      BattleLogic__AddTaskTargetTaskAfter(this->fields.logic, task, v122, 0LL);
                    else
                      BattleLogic__AddBattleLogicTask(this->fields.logic, v122, 0LL);
                    v123 = this->fields.data;
                    skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                skillInfo,
                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
                    if ( v123 )
                    {
                      BattleData__AddUseSkillId(v123, skillId, 0LL);
                      if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v40, 0LL) )
                      {
                        v124 = (BattleLogicTask_o *)sub_1B71818(BattleLogicTask_TypeInfo);
                        BattleLogicTask___ctor(v124, 0LL);
                        if ( !v124 )
                          goto LABEL_154;
                        BattleLogicTask__setCheckEntryFunction(v124, 0LL);
                        skillId = (__int64)this->fields.logic;
                        if ( !skillId )
                          goto LABEL_154;
                        BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, v124, 0LL);
                      }
                      if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0 )
                      {
                        skillId = SkillEntity__getSkillCutInId(Entity, 0LL);
                        if ( !(_DWORD)skillId )
                        {
                          v127 = this->fields.logic;
                          if ( !v127 )
                            goto LABEL_154;
                          perf = v127->fields.perf;
                          CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
                          if ( !perf )
                            goto LABEL_154;
                          BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
                          if ( *(_QWORD *)(v40 + 120) )
                          {
                            v130 = this->fields.data;
                            if ( !v130 )
                              goto LABEL_154;
                            v131 = v130->fields.perf;
                            if ( !v131 )
                              goto LABEL_154;
                            skillId = (__int64)v131->fields.infoComp;
                            if ( !skillId )
                              goto LABEL_154;
                            BattleInformationComponent__showCommonMessage(
                              (BattleInformationComponent_o *)skillId,
                              (BattleActionData_o *)v40,
                              0LL);
                            *(_QWORD *)(v40 + 120) = 0LL;
                            sub_1B71570((ServantStatusBattleListViewItem_o *)(v40 + 120), 0, v132, v133);
                            *(_BYTE *)(v40 + 308) = 1;
                          }
                        }
                      }
                      if ( task->fields.IsNotShowSkillMessage )
                      {
                        *(_QWORD *)(v40 + 120) = 0LL;
                        sub_1B71570((ServantStatusBattleListViewItem_o *)(v40 + 120), 0, v125, v126);
                        *(_BYTE *)(v40 + 308) = 1;
                      }
                      if ( SkillEntity__IsCheckUpdateShiftServant(Entity, 0LL) )
                      {
                        v134 = (BattleLogicTask_o *)sub_1B71818(CheckUpdateShiftTask_TypeInfo);
                        BattleLogicTask___ctor(v134, 0LL);
                        v134->fields.actiontype = 68;
                        skillId = (__int64)this->fields.logic;
                        if ( !skillId )
                          goto LABEL_154;
                        BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)skillId, task, v134, 0LL);
                      }
                      v135 = BattleLogicTask__getActorId(task, 0LL);
                      BattleLogicSkill__ExecuteShortenSkillBuff(this, (BattleSkillInfoData_o *)skillInfo, v135, v136);
                      return (BattleActionData_o *)v40;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_154:
      sub_1B71828(skillId, task);
    }
LABEL_84:
    argument->fields.isShowBattlePointEffect = *p_isShowBattlePointEffect;
    goto LABEL_85;
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
  __int64 v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  BattleData_o *v16; // x8
  System_Int32_array *v17; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  BattleData_o *v19; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v23; // x0

  if ( (byte_4A22714 & 1) == 0 )
  {
    sub_1B715CC(&BattleLogicTask___TypeInfo, method);
    sub_1B715CC(&BattleLogicTask_TypeInfo, v3);
    sub_1B715CC(&BattleSkillInfoData_TypeInfo, v4);
    sub_1B715CC(&int___TypeInfo, v5);
    byte_4A22714 = 1;
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
  v12 = sub_1B71818(BattleSkillInfoData_TypeInfo);
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
  v13 = sub_1B71818(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, 0LL);
  data = (BattleData_o *)sub_1B71674(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v11;
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 136) = data;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v13 + 136), (int32_t)data, v14, v15);
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
        (data = (BattleData_o *)sub_1B71674(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1B71828(data, method);
  }
  v19 = data;
  data = (BattleData_o *)sub_1B71708(v13, data->klass->_1.element_class);
  if ( !data )
  {
    v23 = sub_1B7184C(0LL);
    sub_1B716F4(v23, 0LL);
  }
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1B71830(data, method);
  v19->fields.rootfsm = (struct PlayMakerFSM_o *)v13;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v19->fields.rootfsm, v13, v20, v21);
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
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4A22713 & 1) == 0 )
  {
    sub_1B715CC(&BattleLogicTask_TypeInfo, method);
    sub_1B715CC(&BattleSkillInfoData_TypeInfo, v3);
    sub_1B715CC(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B715CC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A22713 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
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
  v18 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( (int)v17->max_length >= 1 )
  {
    v19 = 0LL;
    m_Items = v17->m_Items;
    while ( 1 )
    {
      v21 = sub_1B71818(BattleSkillInfoData_TypeInfo);
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
        sub_1B71830(Instance, v11);
      Instance = (DataManager_o *)m_Items[v19];
      if ( !Instance )
        break;
      *(_DWORD *)(v21 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
      v23 = (BattleLogicTask_o *)sub_1B71818(BattleLogicTask_TypeInfo);
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
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v23;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v23, v26, v27);
      }
      if ( (int)++v19 >= (signed int)v17->max_length )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v18,
                                          (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1B71828(Instance, v11);
  }
  if ( !v18 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  const MethodInfo *v23; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_4A2270C & 1) == 0 )
  {
    sub_1B715CC(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B715CC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_4A2270C = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = (BattleLogicTask_o *)sub_1B71818(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v14, 0LL);
  if ( !v14
    || (BattleLogicTask__setCommandSpell(v14, skillId, 0LL, ptTargetList, 0LL), !v13)
    || (items = v13->fields._items,
        v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
    sub_1B71828(v15, v16);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v14,
      *(const MethodInfo_34D0260 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v14;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v14, v17, v18);
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
    (const MethodInfo_34D1244 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  struct BattleData_o *v39; // x8
  int32_t globaltargetId; // w29
  BattleLogicTarget_o *v41; // x21
  int32_t v42; // w29
  const MethodInfo *v43; // x4
  BattleLogicTarget_o *logictarget; // x29
  int32_t v45; // w21
  int32_t TargetAiAct; // w21
  bool isPlayerID; // w0
  int32_t v48; // w2
  int32_t v49; // w1
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_object__o *v56; // x24
  __int64 v57; // x8
  __int64 v58; // x25
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  const MethodInfo *v62; // x4
  __int64 v63; // x1
  __int64 v64; // x25
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  BattleSkillInfoData_o *v73; // x26
  System_Int32_array *v74; // x0
  __int64 v75; // x1
  System_Collections_Generic_IEnumerable_T__o *v76; // x0
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  BattleLogicSkill___c_c *v81; // x0
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v83; // x21
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_Collections_Generic_IEnumerable_T__o *v87; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]
  const MethodInfo *v90; // [xsp+10h] [xbp-80h]

  if ( (byte_4A2270B & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_StableSort_BattleLogicTask___, skillInfo);
    sub_1B715CC(&BattleLogicTask_TypeInfo, v17);
    sub_1B715CC(&Method_System_Linq_Enumerable_Any_BattleLogicTask___, v18);
    sub_1B715CC(&System_Func_BattleLogicTask__int__TypeInfo, v19);
    sub_1B715CC(&System_IDisposable_TypeInfo, v20);
    sub_1B715CC(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v21);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v22);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_1B715CC(&int___TypeInfo, v24);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v25);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v26);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v27);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v28);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v29);
    sub_1B715CC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v30);
    sub_1B715CC(&Method_BattleLogicSkill___c__taskSkill_b__5_0__, v31);
    sub_1B715CC(&BattleLogicSkill___c_TypeInfo, v32);
    byte_4A2270B = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v34 = (BattleLogicTask_o *)sub_1B71818(BattleLogicTask_TypeInfo);
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
      v45 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !logictarget )
        goto LABEL_94;
      TargetAiAct = BattleLogicTarget__getTargetAiAct(
                      logictarget,
                      1,
                      v45,
                      0LL,
                      (System_Int32_array *)data,
                      1,
                      0,
                      0LL,
                      0LL,
                      (bool)&dword_0 + 1,
                      v90);
      data = sub_1B71674(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_94;
      v38 = (System_Int32_array *)data;
      if ( *(_DWORD *)(data + 24) )
      {
        *(_DWORD *)(data + 32) = TargetAiAct;
        enemyTargetList = 0LL;
        if ( !v34 )
          goto LABEL_94;
        goto LABEL_28;
      }
LABEL_96:
      sub_1B71830(data, svtUniqueId);
    }
  }
  v39 = this->fields.data;
  if ( !v39 )
    goto LABEL_94;
  globaltargetId = v39->fields.globaltargetId;
  if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0LL) )
  {
    v41 = this->fields.logictarget;
    v42 = skillInfo->fields.svtUniqueId;
    data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
    if ( !v41 )
      goto LABEL_94;
    globaltargetId = BattleLogicTarget__getGlobalTargetId(v41, v42, v42 == -1, (System_Int32_array *)data, v43);
    enemyTargetList = 0LL;
  }
  data = sub_1B71674(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_94;
  v38 = (System_Int32_array *)data;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_96;
  *(_DWORD *)(data + 32) = globaltargetId;
  if ( !v34 )
    goto LABEL_94;
LABEL_28:
  BattleLogicTask__setActionSkill(v34, skillInfo, v38, ptTargetList, checkAlive, checkRevengeId, 0LL);
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v49 = 1;
    v48 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    v48 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v49 = 2;
    else
      v49 = 3;
  }
  BattleLogicTask__setActor(v34, v49, v48, 0LL);
  if ( !v33
    || (items = v33->fields._items,
        v53 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v33->fields._version,
        !items) )
  {
LABEL_94:
    sub_1B71828(data, svtUniqueId);
  }
  size = v33->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v34,
      *(const MethodInfo_34D0260 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    if ( !v37 )
      goto LABEL_47;
  }
  else
  {
    v55 = &items->obj.klass + size;
    v33->fields._size = size + 1;
    v55[4] = (Il2CppClass *)v34;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v34, v50, v51);
    if ( !v37 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v33,
                                          (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v56 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v56,
        (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v56 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v37, this->fields.data, 0LL);
  if ( !data )
    goto LABEL_94;
  v57 = *(_QWORD *)data;
  v58 = data;
  v59 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
  if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
  {
    v60 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v60 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_46;
    }
    v61 = v57 + 16LL * *v60 + 312;
  }
  else
  {
LABEL_46:
    v61 = sub_1BC35AC(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v58, *(_QWORD *)(v61 + 8));
  if ( !v64 )
    sub_1B71828(0LL, v63);
  while ( 1 )
  {
    v65 = *(_QWORD *)v64;
    v66 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v67 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v66;
        v67 += 4;
        if ( !v66 )
          goto LABEL_55;
      }
      v68 = v65 + 16LL * *v67 + 312;
    }
    else
    {
LABEL_55:
      v68 = sub_1BC35AC(v64, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v64, *(_QWORD *)(v68 + 8)) & 1) == 0 )
      break;
    v69 = *(_QWORD *)v64;
    v70 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v71 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_62;
      }
      v72 = v69 + 16LL * *v71 + 312;
    }
    else
    {
LABEL_62:
      v72 = sub_1BC35AC(v64, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v73 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v64, *(_QWORD *)(v72 + 8));
    v74 = (System_Int32_array *)sub_1B71674(int___TypeInfo, 1LL);
    if ( !v73 )
      sub_1B71828(v74, v75);
    if ( !v74 )
      sub_1B71828(0LL, v75);
    if ( !v74->max_length )
      sub_1B71830(v74, v75);
    v74->m_Items[1] = v73->fields.svtUniqueId;
    v76 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                           this,
                                                           v73,
                                                           v74,
                                                           0LL,
                                                           0,
                                                           0,
                                                           0,
                                                           0,
                                                           1,
                                                           isDeadToEnableUpHate);
    if ( !v56 )
      sub_1B71828(v76, v76);
    System_Collections_Generic_List_object___AddRange(
      v56,
      v76,
      (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v77 = *(_QWORD *)v64;
  v78 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
  {
    v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      --v78;
      v79 += 4;
      if ( !v78 )
        goto LABEL_73;
    }
    v80 = v77 + 16LL * *v79 + 312;
  }
  else
  {
LABEL_73:
    v80 = sub_1BC35AC(v64, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v80)(v64, *(_QWORD *)(v80 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v56 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v33,
                                        (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_81;
  }
  if ( !v56 )
    goto LABEL_48;
LABEL_79:
  data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(this, v34, ptTargetList, enemyTargetList, v62);
  if ( !v56 )
    goto LABEL_94;
  System_Collections_Generic_List_object___AddRange(
    v56,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v56,
         (const MethodInfo_2E68DBC *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
  {
    v81 = BattleLogicSkill___c_TypeInfo;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v81 = BattleLogicSkill___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__int__o *)v81->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v81->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v81);
        v81 = BattleLogicSkill___c_TypeInfo;
      }
      v83 = (Il2CppObject *)v81->static_fields->__9;
      _9__5_0 = (System_Func_object__int__o *)sub_1B71818(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v83, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v85, v86);
    }
    v87 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v56,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_2E4B2BC *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v33,
      0,
      v87,
      (const MethodInfo_34D1244 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v33,
                                    (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v4; // w3

  if ( (byte_4A2271A & 1) == 0 )
  {
    sub_1B715CC(&BattleLogicSkill___c_TypeInfo, v1);
    byte_4A2271A = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v2;
  sub_1B71570((ServantStatusBattleListViewItem_o *)BattleLogicSkill___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B71828(this, 0LL);
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
    sub_1B71828(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1B71828(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0LL )
    sub_1B71828(this, x);
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
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2271B & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_4A2271B = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B71828(conditions, key);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v9, &result, 0LL) )
    return (int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__1(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
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
  BattleLogicSkill___c__DisplayClass13_0_o *v14; // x0
  System_String_o *v15; // x1
  const MethodInfo *v16; // x2
  long double v17; // q0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2271C & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B715CC(&long_TypeInfo, v8);
    byte_4A2271C = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1B71828(conditions, key);
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
                                                                            (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  v17 = sub_1B71AE8(conditions);
  return BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__2(v14, v15, *(double *)&v17, v16);
}


bool __fastcall BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2271D & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_4A2271D = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B71828(conditions, key);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v9, &result, 0LL) )
    return (double)(int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__3(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
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
  BattleLogicSkill___c__DisplayClass17_0_o *v14; // x0
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2271E & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B715CC(&long_TypeInfo, v8);
    byte_4A2271E = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1B71828(conditions, key);
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
                                                                            (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  sub_1B71AE8(conditions);
  return BattleLogicSkill___c__DisplayClass17_0___SetSkillCopyFunction_b__0(v14, v15, v16);
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
    sub_1B71828(0LL, type);
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
    sub_1B71828(this, type);
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
  if ( (byte_4A2271F & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1B715CC(&Method_System_Linq_Enumerable_Union_int___, current);
    byte_4A2271F = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)v6->fields.task) == 0LL )
    sub_1B71828(this, current);
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
                                                            (const MethodInfo_2E97EE8 *)Method_System_Linq_Enumerable_Union_int___);
}


BattleServantData_o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0LL )
    sub_1B71828(this, uniqueId);
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
    sub_1B71828(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0LL);
}