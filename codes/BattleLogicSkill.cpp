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
  BattleBuffData_BuffData_array *BuffList_43709204; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v15; // w24
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x23

  if ( (byte_4BCA866 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, actSkillInfo);
    byte_4BCA866 = 1;
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
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C1AE20(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43898240(v11, v10, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      BuffList_43709204 = BattleBuffData__getBuffList_43709204(buffData, 143, v11, 1, 0, 0LL, 0LL, 0LL);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_43709204, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_43709204 )
      {
        max_length = BuffList_43709204->max_length;
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
              sub_1C1AE38(data, actSkillInfo);
            v17 = &BuffList_43709204->obj.klass + (int)v15;
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
            max_length = BuffList_43709204->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1C1AE30(data, actSkillInfo);
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

  if ( (byte_4BCA862 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_WeightRate_int___ctor__, rateArray);
    sub_1C1ABD4(&Method_WeightRate_int__getData__, v4);
    sub_1C1ABD4(&Method_WeightRate_int__getTotalWeight__, v5);
    sub_1C1ABD4(&Method_WeightRate_int__setWeight__, v6);
    sub_1C1ABD4(&WeightRate_int__TypeInfo, v7);
    byte_4BCA862 = 1;
  }
  if ( !rateArray )
    return -1;
  v8 = (WeightRate_int__o *)sub_1C1AE20(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v8, (const MethodInfo_3A2196C *)Method_WeightRate_int___ctor__);
  v11 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1C1AE38(v9, v10);
      if ( !v8 )
        break;
      WeightRate_int___setWeight(
        v8,
        rateArray->m_Items[v12 + 1],
        v12,
        (const MethodInfo_3A20E88 *)Method_WeightRate_int__setWeight__);
      LODWORD(v11) = rateArray->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_12;
    }
LABEL_13:
    sub_1C1AE30(v9, v10);
  }
  if ( !v8 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v8->fields.totalweight, 0LL);
  return WeightRate_int___getData(v8, Next, (const MethodInfo_3A212FC *)Method_WeightRate_int__getData__);
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
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x25
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_List_object__o *v54; // x19
  long double inited; // q0
  _QWORD *v56; // x24
  __int64 v57; // x8
  __int64 v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x24
  DataVals_array *DataValArray; // x0
  BattleLogicSkill___c_c *v62; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x22
  System_Func_T__TResult__o *_9__7_0; // x23
  Il2CppObject *v65; // x25
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x22
  System_Func_T1__T2__TResult__o *v74; // x23
  System_Func_T__TResult__o *v75; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v76; // x0
  BattleLogicSkill___c_c *v77; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x22
  System_Func_object__bool__o *_9__7_3; // x23
  Il2CppObject *v80; // x24
  struct BattleLogicSkill___c_StaticFields *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x22
  System_Func_object__object__o *v89; // x23
  __int64 v90; // x8
  void *v91; // x21
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x21
  __int64 v97; // x8
  __int64 v98; // x9
  int *v99; // x10
  __int64 v100; // x0
  __int64 v101; // x8
  __int64 v102; // x9
  int *v103; // x10
  __int64 v104; // x0
  BattleSkillInfoData_o *v105; // x22
  System_Int32_array *v106; // x0
  __int64 v107; // x1
  System_Collections_Generic_IEnumerable_T__o *v108; // x0
  __int64 v109; // x8
  __int64 v110; // x9
  int *v111; // x10
  __int64 v112; // x0
  BattleLogicSkill___c_c *v113; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v115; // x21
  struct BattleLogicSkill___c_StaticFields *v116; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  const MethodInfo *v124; // [xsp+8h] [xbp-68h]

  if ( (byte_4BCA858 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Empty_int___, task);
    sub_1C1ABD4(&Method_BasicHelper_StableSort_BattleLogicTask___, v9);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____, v10);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___, v11);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___, v12);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v13);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Union_int___, v14);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v15);
    sub_1C1ABD4(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo, v16);
    sub_1C1ABD4(&System_Func_BattleLogicTask__int__TypeInfo, v17);
    sub_1C1ABD4(&System_Func_int__BattleServantData__TypeInfo, v18);
    sub_1C1ABD4(&System_Func_BattleServantData__bool__TypeInfo, v19);
    sub_1C1ABD4(&System_Func_DataVals__Target_TYPE__TypeInfo, v20);
    sub_1C1ABD4(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo, v21);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v22);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v23);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v24);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v25);
    sub_1C1ABD4(&int___TypeInfo, v26);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v27);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v28);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v29);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__, v30);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__, v31);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__, v32);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__, v33);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__, v34);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__, v35);
    sub_1C1ABD4(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo, v36);
    sub_1C1ABD4(&BattleLogicSkill___c_TypeInfo, v37);
    byte_4BCA858 = 1;
  }
  v38 = sub_1C1AE20(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  BattleLogicSkill___c__DisplayClass7_0___ctor((BattleLogicSkill___c__DisplayClass7_0_o *)v38, 0LL);
  if ( !v38 )
    goto LABEL_75;
  *(_QWORD *)(v38 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v38 + 16), (int64_t)this, v41, v42, v43, v44, v45, v46);
  *(_QWORD *)(v38 + 24) = task;
  v47 = v38 + 24;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v38 + 24), (int64_t)task, v48, v49, v50, v51, v52, v53);
  v54 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v56 = Method_System_Array_Empty_int___;
  v57 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v57 )
  {
    sub_1C6CB0C(Method_System_Array_Empty_int___);
    v57 = v56[7];
  }
  v58 = *(_QWORD *)(v57 + 16);
  if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
    v58 = sub_1C6CAB0(inited);
  if ( !*(_DWORD *)(v58 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v58);
  v39 = *(__int64 **)(v56[7] + 16LL);
  if ( (*((_BYTE *)v39 + 309) & 1) == 0 )
    v39 = (__int64 *)sub_1C6CAB0(inited);
  v59 = (System_Collections_Generic_IEnumerable_TSource__o **)v39[23];
  v60 = *v59;
  if ( ptTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v59,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_2FDD110 *)Method_System_Linq_Enumerable_Union_int___);
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  }
  if ( enemyTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v60,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_2FDD110 *)Method_System_Linq_Enumerable_Union_int___);
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  }
  if ( !*(_QWORD *)v47 )
    goto LABEL_75;
  v39 = *(__int64 **)(*(_QWORD *)v47 + 72LL);
  if ( !v39 )
    goto LABEL_75;
  if ( *((_DWORD *)v39 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v39, 0LL);
    v62 = BattleLogicSkill___c_TypeInfo;
    v63 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v62 = BattleLogicSkill___c_TypeInfo;
    }
    _9__7_0 = (System_Func_T__TResult__o *)v62->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62);
        v62 = BattleLogicSkill___c_TypeInfo;
      }
      v65 = (Il2CppObject *)v62->static_fields->__9;
      _9__7_0 = (System_Func_T__TResult__o *)sub_1C1AE20(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v65,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
    }
    v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v63,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2FD065C *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v74 = (System_Func_T1__T2__TResult__o *)sub_1C1AE20(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v74,
      (Il2CppObject *)v38,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0LL);
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v73,
                                                                 (Il2CppObject *)v60,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v74,
                                                                 (const MethodInfo_2FA799C *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v75 = (System_Func_T__TResult__o *)sub_1C1AE20(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v75,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0LL);
  v76 = System_Linq_Enumerable__Select_int__object_(
          v60,
          (System_Func_TSource__TResult__o *)v75,
          (const MethodInfo_2FCE570 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v77 = BattleLogicSkill___c_TypeInfo;
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)v76;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v77 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_3 = (System_Func_object__bool__o *)v77->static_fields->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !v77->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v77);
      v77 = BattleLogicSkill___c_TypeInfo;
    }
    v80 = (Il2CppObject *)v77->static_fields->__9;
    _9__7_3 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v80,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0LL);
    v81 = BattleLogicSkill___c_TypeInfo->static_fields;
    v81->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v81->__9__7_3, (int64_t)_9__7_3, v82, v83, v84, v85, v86, v87);
  }
  v88 = System_Linq_Enumerable__Where_object_(
          v78,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v89 = (System_Func_object__object__o *)sub_1C1AE20(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v89,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0LL);
  v39 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v88,
                     (System_Func_TSource__IEnumerable_TResult___o *)v89,
                     (const MethodInfo_2FD31C8 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v39 )
LABEL_75:
    sub_1C1AE30(v39, v40);
  v90 = *v39;
  v91 = v39;
  v92 = *(unsigned __int16 *)(*v39 + 302);
  if ( *(_WORD *)(*v39 + 302) )
  {
    v93 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v93 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v92;
      v93 += 4;
      if ( !v92 )
        goto LABEL_37;
    }
    v94 = v90 + 16LL * *v93 + 312;
  }
  else
  {
LABEL_37:
    v94 = sub_1C6CBB4(v39, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v96 = (*(__int64 (__fastcall **)(void *, _QWORD))v94)(v91, *(_QWORD *)(v94 + 8));
  if ( !v96 )
    sub_1C1AE30(0LL, v95);
  while ( 1 )
  {
    v97 = *(_QWORD *)v96;
    v98 = *(unsigned __int16 *)(*(_QWORD *)v96 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v96 + 302LL) )
    {
      v99 = (int *)(*(_QWORD *)(v97 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v99 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v98;
        v99 += 4;
        if ( !v98 )
          goto LABEL_44;
      }
      v100 = v97 + 16LL * *v99 + 312;
    }
    else
    {
LABEL_44:
      v100 = sub_1C6CBB4(v96, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v100)(v96, *(_QWORD *)(v100 + 8)) & 1) == 0 )
      break;
    v101 = *(_QWORD *)v96;
    v102 = *(unsigned __int16 *)(*(_QWORD *)v96 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v96 + 302LL) )
    {
      v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v103 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v102;
        v103 += 4;
        if ( !v102 )
          goto LABEL_51;
      }
      v104 = v101 + 16LL * *v103 + 312;
    }
    else
    {
LABEL_51:
      v104 = sub_1C6CBB4(v96, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v105 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v104)(v96, *(_QWORD *)(v104 + 8));
    v106 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 1LL);
    if ( !v105 )
      sub_1C1AE30(v106, v107);
    if ( !v106 )
      sub_1C1AE30(0LL, v107);
    if ( !v106->max_length )
      sub_1C1AE38(v106, v107);
    v106->m_Items[1] = v105->fields.svtUniqueId;
    v108 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                            this,
                                                            v105,
                                                            v106,
                                                            0LL,
                                                            0,
                                                            0,
                                                            0,
                                                            0,
                                                            1,
                                                            v124);
    if ( !v54 )
      sub_1C1AE30(v108, v108);
    System_Collections_Generic_List_object___AddRange(
      v54,
      v108,
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v109 = *(_QWORD *)v96;
  v110 = *(unsigned __int16 *)(*(_QWORD *)v96 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v96 + 302LL) )
  {
    v111 = (int *)(*(_QWORD *)(v109 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v111 - 1) != System_IDisposable_TypeInfo )
    {
      --v110;
      v111 += 4;
      if ( !v110 )
        goto LABEL_62;
    }
    v112 = v109 + 16LL * *v111 + 312;
  }
  else
  {
LABEL_62:
    v112 = sub_1C6CBB4(v96, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v112)(v96, *(_QWORD *)(v112 + 8));
  v113 = BattleLogicSkill___c_TypeInfo;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v113 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_5 = (System_Func_object__int__o *)v113->static_fields->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !v113->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v113);
      v113 = BattleLogicSkill___c_TypeInfo;
    }
    v115 = (Il2CppObject *)v113->static_fields->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v115,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0LL);
    v116 = BattleLogicSkill___c_TypeInfo->static_fields;
    v116->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v116->__9__7_5, (int64_t)_9__7_5, v117, v118, v119, v120, v121, v122);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v54,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_2F8F0E0 *)Method_BasicHelper_StableSort_BattleLogicTask___);
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

  if ( (byte_4BCA864 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_int____77547112, actorIndividualities);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v6);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__, v7);
    sub_1C1ABD4(&BattleLogicSkill___c__DisplayClass20_0_TypeInfo, v8);
    byte_4BCA864 = 1;
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
          v12 = (BattleLogicSkill___c__DisplayClass20_0_o *)sub_1C1AE20(BattleLogicSkill___c__DisplayClass20_0_TypeInfo);
          BattleLogicSkill___c__DisplayClass20_0___ctor(v12, 0LL);
          if ( v11 >= notSkillCopyTargetIndividualities->max_length )
            sub_1C1AE38(IsNullOrEmpty, v10);
          if ( !v12 )
            break;
          v12->fields.individuality = notSkillCopyTargetIndividualities->m_Items[v11 + 1];
          v13 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v13,
            (Il2CppObject *)v12,
            Method_BattleLogicSkill___c__DisplayClass20_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0LL);
          v14 = BasicHelper__Any_int__49848700(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v13,
                  (const MethodInfo_2F8A17C *)Method_BasicHelper_Any_int____77547112);
          if ( !v14 && (__int64)++v11 < (int)notSkillCopyTargetIndividualities->max_length )
            continue;
          return v14;
        }
LABEL_16:
        sub_1C1AE30(IsNullOrEmpty, v10);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x20
  int64_t *v26; // x8
  int64_t v27; // x1
  System_String_o *IfExists; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4BCA85F & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, messageNotAvailable);
    sub_1C1ABD4(&string___TypeInfo, v10);
    sub_1C1ABD4(&string_TypeInfo, v11);
    sub_1C1ABD4(&StringLiteral_3025/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/, v12);
    sub_1C1ABD4(&StringLiteral_3024/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/, v13);
    byte_4BCA85F = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *messageNotAvailable = static_fields->Empty;
  sub_1C1AB78((PartyOrganizationUtility_o *)messageNotAvailable, (int64_t)Empty, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !skillInfo )
    goto LABEL_16;
  if ( BattleSkillInfoData__isChargeOK(skillInfo, 0LL) )
  {
    if ( BattleSkillInfoData__IsOpenCond(skillInfo, 0LL) )
      return 1;
    v16 = sub_1C1AC7C(string___TypeInfo, 1LL);
    if ( v16 )
    {
      v25 = v16;
      if ( *(_DWORD *)(v16 + 24) )
      {
        v26 = &StringLiteral_3025/*"BATTLE_SKILL_ERROR_NOT_SATISFY_OPEN_COND"*/;
        goto LABEL_13;
      }
LABEL_17:
      sub_1C1AE38(v16, v17);
    }
LABEL_16:
    sub_1C1AE30(v16, v17);
  }
  v16 = sub_1C1AC7C(string___TypeInfo, 1LL);
  if ( !v16 )
    goto LABEL_16;
  v25 = v16;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_17;
  v26 = &StringLiteral_3024/*"BATTLE_SKILL_ERROR_NOT_CHARGING"*/;
LABEL_13:
  v27 = *v26;
  *(_QWORD *)(v25 + 32) = *v26;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 32), v27, v19, v20, v21, v22, v23, v24);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v25, 0LL);
  *messageNotAvailable = IfExists;
  sub_1C1AB78((PartyOrganizationUtility_o *)messageNotAvailable, (int64_t)IfExists, v29, v30, v31, v32, v33, v34);
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

  if ( (byte_4BCA85D & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, skillInfo);
    byte_4BCA85D = 1;
  }
  *messageNotExecutable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78(
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
  if ( (byte_4BCA85A & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1C1ABD4(&TempBattleSkillInfoData_TypeInfo, skillLvMst);
    byte_4BCA85A = 1;
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
        v16 = (TempBattleSkillInfoData_o *)sub_1C1AE20(TempBattleSkillInfoData_TypeInfo);
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
    sub_1C1AE30(this, skillLvMst);
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
  BattleData_o *IsQuestClear_38787928; // x0
  __int64 v19; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v24; // x22
  unsigned int v25; // w24
  AddSkillData_o *v26; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BCA865 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    sub_1C1ABD4(&CondType_TypeInfo, v11);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v12);
    sub_1C1ABD4(&DataManager_TypeInfo, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_DataVals__AddRange__, v15);
    byte_4BCA865 = 1;
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
  IsQuestClear_38787928 = (BattleData_o *)CondType__IsQuestClear_38787928(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_38787928 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !targetIds->max_length )
      goto LABEL_30;
    IsQuestClear_38787928 = this->fields.data;
    if ( !IsQuestClear_38787928 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_38787928, targetIds->m_Items[1], 0LL);
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
    IsQuestClear_38787928 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v21->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1C1AE30(IsQuestClear_38787928, v19);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v24 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_38787928;
      v25 = 0;
      while ( v25 < max_length )
      {
        v26 = classBoardAddCommandSpells->m_Items[v25];
        if ( !v26 || !v24 )
          goto LABEL_29;
        IsQuestClear_38787928 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v24,
                                                  &entity,
                                                  v26->fields.id,
                                                  commandSpellId,
                                                  v26->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_38787928 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_361FA78 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_38787928 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_38787928 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_38787928,
            (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v25 >= max_length )
          return;
      }
LABEL_30:
      sub_1C1AE38(IsQuestClear_38787928, v19);
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
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Func_int__bool__o *v43; // x27
  __int64 v44; // x27
  System_Func_int__bool__o *v45; // x27
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v47; // x3
  System_Func_int__bool__o *v48; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  System_Int32_array *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Object_array *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  PartyOrganizationUtility_o *v79; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v80; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v81; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v11 = skillLvEnt;
  v12 = this;
  if ( (byte_4BCA863 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_int____77547112, skillLvEnt);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_FunctionMaster___, v13);
    sub_1C1ABD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v14);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_DataVals__Add__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_DataVals__ToArray__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_DataVals___ctor__, v21);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1C1ABD4(&System_Collections_Generic_List_DataVals__TypeInfo, v23);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__, v25);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__, v26);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__, v27);
    this = (BattleLogicSkill_o *)sub_1C1ABD4(&BattleLogicSkill___c__DisplayClass19_0_TypeInfo, v28);
    byte_4BCA863 = 1;
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
  v79 = (PartyOrganizationUtility_o *)functionIdArray;
  v81 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v81,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  v80 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v34 = 0LL;
  while ( (__int64)v34 < (int)funcId->max_length )
  {
    v35 = sub_1C1AE20(BattleLogicSkill___c__DisplayClass19_0_TypeInfo);
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
      || (v43 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v43,
            (Il2CppObject *)v35,
            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__0__,
            0LL),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__49848700(
                                         (System_Int32_array *)v30,
                                         (System_Func_T__bool__o *)v43,
                                         (const MethodInfo_2F8A17C *)Method_BasicHelper_Any_int____77547112),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v35 + 24) = 0LL;
      v44 = v35 + 24;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v35 + 24), 0LL, v37, v38, v39, v40, v41, v42);
      if ( !v33 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v33,
                                     (Il2CppObject **)(v35 + 24),
                                     *(_DWORD *)(v35 + 16),
                                     (const MethodInfo_32486C4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v44 )
          goto LABEL_52;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v44 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v44 )
            goto LABEL_52;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v44 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v44 )
              goto LABEL_52;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v44 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v44 )
                goto LABEL_52;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v44 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v44 )
                  goto LABEL_52;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v44 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v45 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v45,
                        (Il2CppObject *)v35,
                        Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__1__,
                        0LL),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__49848700(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v45,
                                                     (const MethodInfo_2F8A17C *)Method_BasicHelper_Any_int____77547112),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v34 >= SetTypeDataValArray->max_length )
LABEL_57:
                    sub_1C1AE38(this, skillLvEnt);
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
                                                 v47);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v48 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v48,
                            (Il2CppObject *)v35,
                            Method_BattleLogicSkill___c__DisplayClass19_0__SetSkillCopyFunction_b__2__,
                            0LL),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__49848700(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v48,
                                                         (const MethodInfo_2F8A17C *)Method_BasicHelper_Any_int____77547112),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v81;
                      if ( !v81 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*(unsigned int *)(v35 + 16);
                      items = v81->fields._items;
                      v50 = Method_System_Collections_Generic_List_int__Add__;
                      ++v81->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v81->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v81,
                          (int32_t)skillLvEnt,
                          *(const MethodInfo_361F86C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v81->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)skillLvEnt;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v11, 0LL);
                      if ( !this )
                        goto LABEL_52;
                      if ( v34 >= LODWORD(this->fields.logic) )
                        goto LABEL_57;
                      if ( !v80 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*((_QWORD *)&this->fields.logictarget + v34);
                      v58 = v80->fields._items;
                      v59 = Method_System_Collections_Generic_List_DataVals__Add__;
                      ++v80->fields._version;
                      if ( !v58 )
                        goto LABEL_52;
                      v60 = v80->fields._size;
                      if ( (unsigned int)v60 >= v58->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v80,
                          (Il2CppObject *)skillLvEnt,
                          *(const MethodInfo_363C890 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v61 = &v58->obj.klass + v60;
                        v80->fields._size = v60 + 1;
                        v61[4] = (Il2CppClass *)skillLvEnt;
                        sub_1C1AB78(
                          (PartyOrganizationUtility_o *)(v61 + 4),
                          (int64_t)skillLvEnt,
                          v52,
                          v53,
                          v54,
                          v55,
                          v56,
                          v57);
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
  this = (BattleLogicSkill_o *)v81;
  if ( !v81
    || (v62 = System_Collections_Generic_List_int___ToArray(
                v81,
                (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__),
        v79->klass = (PartyOrganizationUtility_c *)v62,
        sub_1C1AB78(v79, (int64_t)v62, v63, v64, v65, v66, v67, v68),
        (this = (BattleLogicSkill_o *)v80) == 0LL)
    || (v69 = System_Collections_Generic_List_object___ToArray(
                v80,
                (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v69,
        sub_1C1AB78((PartyOrganizationUtility_o *)dataValsArray, (int64_t)v69, v70, v71, v72, v73, v74, v75),
        !v79->klass) )
  {
LABEL_52:
    sub_1C1AE30(this, skillLvEnt);
  }
  return LODWORD(v79->klass->_1.namespaze) != 0;
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
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  bool v58; // [xsp+3Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v10 = this;
  if ( (byte_4BCA85B & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_BattleServantData__TypeInfo, skillInfo);
    sub_1C1ABD4(&BattleActionData_TypeInfo, v11);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, v13);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1C1ABD4(&BattleLogicFunction_FunctionArgument_TypeInfo, v15);
    sub_1C1ABD4(&Individuality_TypeInfo, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Clear__, v17);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__, v20);
    this = (BattleLogicSkill_o *)sub_1C1ABD4(&BattleLogicSkill___c_TypeInfo, v21);
    byte_4BCA85B = 1;
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
  v26 = (BattleActionData_o *)sub_1C1AE20(BattleActionData_TypeInfo);
  BattleActionData___ctor(v26, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_45;
  v58 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  v28 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v25,
             (const MethodInfo_3248678 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v30 = (SkillEntity_o *)Entity;
  if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
    return;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          *(_QWORD *)&v59.fields.currentCryptoKey = v37;
          *(_QWORD *)&v59.fields.fakeValue = v36;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v59, 0LL);
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
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C1AE20(BattleLogicFunction_FunctionArgument_TypeInfo);
          BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
          if ( argument )
          {
            type = skillInfo->fields.type;
            argument->fields.isDeckDataLoad = v58;
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
                  master = (struct FunctionMaster_o *)sub_1C1AE20(System_Action_BattleServantData__TypeInfo);
                  System_Action_object____ctor(
                    (System_Action_object__o *)master,
                    klass,
                    Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                    0LL);
                  static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                  static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                  sub_1C1AB78(
                    (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
                    (int64_t)master,
                    v52,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57);
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
      sub_1C1AE30(this, skillInfo);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 Instance; // x0
  __int64 v40; // x1
  SkillLvMaster_o *v41; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  System_Collections_Generic_Dictionary_object__object__o *v49; // x0
  __int64 v50; // x25
  __int64 v51; // x24
  __int64 v52; // x23
  __int64 v53; // x22
  BattleServantData_o *v54; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v56; // x8
  unsigned int NowHp; // w0
  unsigned int v58; // w0
  int32_t v59; // w20
  int32_t v60; // w20
  __int64 *v62; // x8
  System_String_o *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7

  if ( (byte_4BCA85E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7);
    sub_1C1ABD4(&System_Func_string__int__bool__TypeInfo, v8);
    sub_1C1ABD4(&System_Func_string__double__bool__TypeInfo, v9);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__, v12);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__, v13);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__, v14);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__3__, v15);
    sub_1C1ABD4(&BattleLogicSkill___c__DisplayClass14_0_TypeInfo, v16);
    sub_1C1ABD4(&StringLiteral_3020/*"BATTLE_SKILLERROR_NP_LOWER"*/, v17);
    sub_1C1ABD4(&StringLiteral_3018/*"BATTLE_SKILLERROR_HP_LOWER"*/, v18);
    sub_1C1ABD4(&StringLiteral_12484/*"STAR_HIGHER"*/, v19);
    sub_1C1ABD4(&StringLiteral_7324/*"HP_PER_LOWER"*/, v20);
    sub_1C1ABD4(&StringLiteral_3019/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v21);
    sub_1C1ABD4(&StringLiteral_3017/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v22);
    sub_1C1ABD4(&StringLiteral_7323/*"HP_PER_HIGHER"*/, v23);
    sub_1C1ABD4(&StringLiteral_3021/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v24);
    sub_1C1ABD4(&StringLiteral_9510/*"NP_HIGHER"*/, v25);
    sub_1C1ABD4(&StringLiteral_3022/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v26);
    sub_1C1ABD4(&StringLiteral_7325/*"HP_VAL_HIGHER"*/, v27);
    sub_1C1ABD4(&StringLiteral_12485/*"STAR_LOWER"*/, v28);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v29);
    sub_1C1ABD4(&StringLiteral_9511/*"NP_LOWER"*/, v30);
    sub_1C1ABD4(&StringLiteral_7326/*"HP_VAL_LOWER"*/, v31);
    byte_4BCA85E = 1;
  }
  v32 = sub_1C1AE20(BattleLogicSkill___c__DisplayClass14_0_TypeInfo);
  BattleLogicSkill___c__DisplayClass14_0___ctor((BattleLogicSkill___c__DisplayClass14_0_o *)v32, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)text, (int64_t)StringLiteral_1/*""*/, v33, v34, v35, v36, v37, v38);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_47;
  v41 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v41 )
    goto LABEL_47;
  Instance = (__int64)SkillLvMaster__GetEntity(v41, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v32 )
    goto LABEL_47;
  v48 = *(_QWORD *)(Instance + 56);
  *(_QWORD *)(v32 + 16) = v48;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 16), v48, v42, v43, v44, v45, v46, v47);
  v49 = *(System_Collections_Generic_Dictionary_object__object__o **)(v32 + 16);
  if ( !v49 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v49,
         (const MethodInfo_33029C0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v50 = sub_1C1AE20(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v50,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__0__,
    0LL);
  v51 = sub_1C1AE20(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v51,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__1__,
    0LL);
  v52 = sub_1C1AE20(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v52,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass14_0__checkConditions_b__2__,
    0LL);
  v53 = sub_1C1AE20(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v53,
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
  v54 = (BattleServantData_o *)Instance;
  Instance = BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v50 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v50 + 24))(
          *(_QWORD *)(v50 + 64),
          StringLiteral_9510/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v50 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = &StringLiteral_3019/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v54, 0LL);
  if ( !v51 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v51 + 24))(
               *(_QWORD *)(v51 + 64),
               StringLiteral_9511/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v51 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = &StringLiteral_3020/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v50 + 24))(
               *(_QWORD *)(v50 + 64),
               StringLiteral_12484/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v50 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = &StringLiteral_3021/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v56 = this->fields.data;
  if ( !v56 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v51 + 24))(
          *(_QWORD *)(v51 + 64),
          StringLiteral_12485/*"STAR_LOWER"*/,
          (unsigned int)v56->fields.totalCriticalStars,
          *(_QWORD *)(v51 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = &StringLiteral_3022/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v54, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v50 + 24))(
          *(_QWORD *)(v50 + 64),
          StringLiteral_7325/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v50 + 40)) & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = &StringLiteral_3017/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v58 = BattleServantData__getNowHp(v54, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v51 + 24))(
          *(_QWORD *)(v51 + 64),
          StringLiteral_7326/*"HP_VAL_LOWER"*/,
          v58,
          *(_QWORD *)(v51 + 40)) & 1) != 0 )
  {
    v59 = BattleServantData__getNowHp(v54, 0LL);
    Instance = BattleServantData__getMaxHp(v54, 0LL);
    if ( !v52 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v52 + 24))(
            *(_QWORD *)(v52 + 64),
            StringLiteral_7323/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v52 + 40),
            (double)v59 * 1000.0 / (double)(int)Instance) & 1) != 0 )
    {
      v60 = BattleServantData__getNowHp(v54, 0LL);
      Instance = BattleServantData__getMaxHp(v54, 0LL);
      if ( v53 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v53 + 24))(
                *(_QWORD *)(v53 + 64),
                StringLiteral_7324/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v53 + 40),
                (double)v60 * 1000.0 / (double)(int)Instance) & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1C1AE30(Instance, v40);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v62 = &StringLiteral_3018/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v63 = LocalizationManager__Get((System_String_o *)*v62, 0LL);
  *text = v63;
  sub_1C1AB78((PartyOrganizationUtility_o *)text, (int64_t)v63, v64, v65, v66, v67, v68, v69);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  BattleActionData_c *v29; // x0
  struct System_Int32_array *ptTarget; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_List_int__o *v37; // x24
  System_Collections_Generic_List_object__o *v38; // x25
  const MethodInfo *v39; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v41; // x24
  System_Object_array *v42; // x25
  BattleActionData_o *v43; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v47; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_4BCA85C & 1) == 0 )
  {
    sub_1C1ABD4(&BattleActionData_TypeInfo, task);
    sub_1C1ABD4(&BattleActionLogManagerInterface_TypeInfo, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v6);
    sub_1C1ABD4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_DataVals__AddRange__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_DataVals__ToArray__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_DataVals___ctor__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1C1ABD4(&System_Collections_Generic_List_DataVals__TypeInfo, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BCA85C = 1;
  }
  v17 = sub_1C1AE20(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v17, 0LL);
  if ( !task )
    goto LABEL_29;
  skillInfo = task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_29;
  skillId = (DataManager_o *)DataManager__GetMasterData_object_(
                               skillId,
                               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
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
                               (const MethodInfo_3248678 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_29;
  v22 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v17, 0LL);
  *(_DWORD *)(v17 + 32) = -1;
  if ( !v22 )
    goto LABEL_29;
  *(_DWORD *)(v17 + 48) = HIDWORD(v22->fields.m_CancellationTokenSource);
  v29 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v29 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v17 + 56) = v29->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = task->fields.ptTarget;
  *(_QWORD *)(v17 + 40) = ptTarget;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)ptTarget, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v17 + 144) = skillInfo;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 144), (int64_t)skillInfo, v31, v32, v33, v34, v35, v36);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_29;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v37 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v37 )
    goto LABEL_29;
  System_Collections_Generic_List_int___AddRange(
    v37,
    (System_Collections_Generic_IEnumerable_T__o *)v22->fields.lookup,
    (const MethodInfo_361FA78 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v22, 0LL);
  if ( !v38 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v38,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v22->fields.m_CachedPtr,
    task->fields.ptTarget,
    v37,
    (System_Collections_Generic_List_DataVals__o *)v38,
    v39);
  logicfunction = this->fields.logicfunction;
  v41 = System_Collections_Generic_List_int___ToArray(
          v37,
          (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
  v42 = System_Collections_Generic_List_object___ToArray(
          v38,
          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !logicfunction )
    goto LABEL_29;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v17,
                               v41,
                               (DataVals_array *)v42,
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
  v43 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_29;
  klass = actionLogManager->klass;
  v47 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v47;
      p_offset += 2;
      if ( !v47 )
        goto LABEL_22;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_22:
    p_method = sub_1C6CBB4(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
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
        return v43;
      }
    }
LABEL_29:
    sub_1C1AE30(skillId, v19);
  }
  return v43;
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
  v5 = BattleLogicSkill__createSkillData_44895096(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_1C1AE30(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_44895096(
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  BattleBoostItemInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x22
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *v38; // x24
  BattleActionData_c *v39; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 methodPtr_low; // x10
  BattleLogicSkill_o *v42; // x26
  BattleLogicSkill_o *v43; // x26
  SkillEntity_o *v44; // x23
  bool isForcedSkillSpeedOne; // w26
  bool v46; // w27
  BattleLogicSkill_o *v47; // x22
  BattleLogicSkill_o *v48; // x29
  BattleServantData_o *EnemyServantData; // x0
  __int64 v50; // x28
  __int64 v51; // x29
  BattleLogicSkill_o *v52; // x29
  struct System_Int32_array *ptTarget; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_String_o *Name; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  BattleLogicSkill_o *v79; // x29
  BattleLogicSkill_o *v80; // x26
  BattleLogicSkill_o *v81; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  PartyOrganizationUtility_o *p_motionMessage; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t effectList; // x1
  int logic; // w8
  BattleLogicSkill_o *v93; // x26
  int i; // w9
  __int64 v95; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  bool v99; // w23
  int32_t ActorId; // w0
  const MethodInfo *v101; // x6
  bool v102; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  BattleLogicFunction_o *v106; // x29
  System_Int32_array *v107; // x27
  DataVals_array *v108; // x28
  int32_t v109; // w0
  UnityEngine_Object_o *v110; // x28
  int32_t v111; // w27
  struct BattleLogic_o *v112; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  struct BattleLogicFunction_o *v120; // x25
  BattleLogicFunction_c *klass; // x8
  __int64 v122; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v124; // x0
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
  int64_t *p_logictarget; // x27
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  int64_t v146; // x1
  void *v147; // x1
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int32_t type; // w23
  BattleLogicSkill_o *v155; // x25
  int v156; // w8
  BattleLogicSkill_o *v157; // x25
  BattleLogicSkill_o *v158; // x25
  BattleLogicSkill_o *v159; // x27
  int32_t v160; // w28
  const MethodInfo *v161; // x5
  struct BattleLogic_o *v162; // x27
  BattleLogicTask_array *v163; // x0
  BattleLogicSkill_o *v164; // x25
  const MethodInfo *v165; // x4
  int32_t v166; // w27
  BattleLogic_o *v167; // x25
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v169; // x23
  BattleLogicSkill_o *v170; // x23
  BattleLogicTask_o *v171; // x23
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  struct BattleLogic_o *v178; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattleData_o *data; // x8
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  SkillEntity_o *v188; // x19
  BattleLogicTask_o *v189; // x23
  int32_t v190; // w0
  const MethodInfo *v191; // x3
  struct BattleLogic_o *v192; // x19
  struct BattleLogic_o *v193; // x8
  struct BattlePerformance_o *v194; // x9
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-88h]
  DataVals_o *v197; // [xsp+40h] [xbp-80h]
  SkillEntity_o *Entity; // [xsp+48h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v201; // 0:x0.16

  v10 = this;
  if ( (byte_4BCA859 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_IndexValue_int___, task);
    sub_1C1ABD4(&BattleActionData_TypeInfo, v11);
    sub_1C1ABD4(&BattleActionLogManagerInterface_TypeInfo, v12);
    sub_1C1ABD4(&BattleBoostItemInfoData_TypeInfo, v13);
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, v14);
    sub_1C1ABD4(&CheckUpdateShiftTask_TypeInfo, v15);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1C1ABD4(&BattleLogicFunction_FunctionArgument_TypeInfo, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v21);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C1ABD4(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v24);
    this = (BattleLogicSkill_o *)sub_1C1ABD4(&StringLiteral_1/*""*/, v25);
    byte_4BCA859 = 1;
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
  v27 = (BattleActionData_o *)sub_1C1AE20(BattleActionData_TypeInfo);
  BattleActionData___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_173;
  v28 = BattleActionData__AddDisplayTriggerIntervalBuff(v27, task, 0LL);
  *baseActionData = v28;
  sub_1C1AB78((PartyOrganizationUtility_o *)baseActionData, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  if ( !v28 )
    goto LABEL_173;
  v28->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_173;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v36 )
    goto LABEL_173;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v36,
                              (int32_t)this,
                              (const MethodInfo_3248678 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_173;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v38 = (SkillLvEntity_o *)this;
  v28->fields.isCounter = task->fields.isCounter;
  v39 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v39 = BattleActionData_TypeInfo;
  }
  static_fields = v39->static_fields;
  v28->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
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
    v42 = *p_fields;
    this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v42 )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)v42, (int32_t)this, 0LL);
    if ( this )
    {
      this = (BattleLogicSkill_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
      v43 = 0LL;
      if ( ((unsigned __int8)this & 1) == 0 )
        return (BattleActionData_o *)v43;
    }
  }
  v197 = baseVals;
  if ( task->fields.isForcedSpeedOne )
  {
    v44 = Entity;
    isForcedSkillSpeedOne = 1;
  }
  else
  {
    v44 = Entity;
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
  v46 = fromSkillCopyFunc;
  v47 = v10;
  this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
  v28->fields.actorId = (int)this;
  if ( !v38 )
    goto LABEL_173;
  v48 = *p_fields;
  this = (BattleLogicSkill_o *)SkillLvEntity__GetActNpcServantId(v38, 0LL);
  if ( !v48 )
    goto LABEL_173;
  EnemyServantData = BattleData__getEnemyServantData((BattleData_o *)v48, (int32_t)this, 0LL);
  if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
  {
    v50 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
    v51 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v201.fields.currentCryptoKey = v50;
    *(_QWORD *)&v201.fields.fakeValue = v51;
    v28->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v201, 0LL);
  }
  v52 = *p_fields;
  this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !v52 )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)BattleData__getServantId((BattleData_o *)v52, (int32_t)this, 0LL);
  if ( !v44 )
    goto LABEL_173;
  v28->fields.motionId = SkillEntity__GetMotionId(v44, (int32_t)this, 0LL);
  v28->fields.targetId = BattleLogicTask__getTarget(task, 0LL);
  ptTarget = task->fields.ptTarget;
  v28->fields.pttargetIds = ptTarget;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v28->fields.pttargetIds, (int64_t)ptTarget, v54, v55, v56, v57, v58, v59);
  Name = SkillEntity__getName(v44, 0LL);
  v28->fields.skillMessage = Name;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v28->fields.skillMessage, (int64_t)Name, v61, v62, v63, v64, v65, v66);
  v28->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v28->fields.skillInfo, (int64_t)skillInfo, v67, v68, v69, v70, v71, v72);
  v28->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
  v28->fields.checkRevengeId = task->fields.checkRevengeId;
  v79 = v47;
  if ( BattleLogicTask__IsGimmick(task, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__GetGimmickStartVoiceArray((BattleData_o *)this, 0LL);
    if ( !*p_fields )
      goto LABEL_173;
    v80 = this;
    this = (BattleLogicSkill_o *)BattleData__GetGimmickResultVoiceArray((BattleData_o *)*p_fields, 0LL);
    if ( !*p_fields )
      goto LABEL_173;
    v81 = this;
    GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray((BattleData_o *)*p_fields, 0LL);
    BattleActionData__SetGimmickData(
      v28,
      task->fields.gimmickIndexArray,
      (System_String_array *)v80,
      (System_Object_array *)v81,
      GimmickAnimTypeArray,
      0LL);
    v79 = v47;
  }
  motionMessage = task->fields.motionMessage;
  if ( motionMessage && motionMessage->fields._stringLength >= 1 )
  {
    v28->fields.motionMessage = motionMessage;
    p_motionMessage = (PartyOrganizationUtility_o *)&v28->fields.motionMessage;
  }
  else
  {
    v28->fields.motionMessage = 0LL;
    p_motionMessage = (PartyOrganizationUtility_o *)&v28->fields.motionMessage;
    motionMessage = 0LL;
  }
  sub_1C1AB78(p_motionMessage, (int64_t)motionMessage, v73, v74, v75, v76, v77, v78);
  if ( (task->fields.actortype | 4) == 5 )
    BattleActionData__setStateField(v28, 0LL);
  effectList = (int64_t)v44->fields.effectList;
  v28->fields.effectlist = (struct System_Int32_array *)effectList;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v28->fields.effectlist, effectList, v85, v86, v87, v88, v89, v90);
  this = (BattleLogicSkill_o *)v79->fields.logic;
  if ( !this )
LABEL_173:
    sub_1C1AE30(this, task);
  BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
  if ( skillInfo->fields.type == 21 )
  {
    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v38, 0LL);
    if ( !this )
      goto LABEL_173;
    logic = (int)this->fields.logic;
    v93 = this;
    if ( logic >= 1 )
    {
      for ( i = 0; i != logic; ++i )
      {
        if ( logic == i )
          sub_1C1AE38(this, task);
        v95 = *((_QWORD *)&this->fields.logictarget + i);
        if ( !v95 )
          goto LABEL_173;
        *(_BYTE *)(v95 + 72) = 1;
      }
    }
    logicfunction = v79->fields.logicfunction;
    funcId = v38->fields.funcId;
    this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                   skillInfo,
                                   skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !logicfunction )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                   logicfunction,
                                   v28,
                                   funcId,
                                   (DataVals_array *)v93,
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
    v43 = this;
    goto LABEL_90;
  }
  changeTDCommandType = skillInfo->fields.changeTDCommandType;
  if ( (changeTDCommandType & 0x80000000) == 0 )
    v28->fields.commandType = changeTDCommandType;
  functionIdArray = v38->fields.funcId;
  dataValsArray = SkillLvEntity__getDataValsList(v38, 0LL);
  v99 = v197 == 0LL || !v46;
  if ( v197 != 0LL && v46 )
  {
    ActorId = BattleLogicTask__getActorId(task, 0LL);
    v43 = 0LL;
    if ( !BattleLogicSkill__SetSkillCopyFunction(v79, v38, v197, &functionIdArray, &dataValsArray, ActorId, v101) )
      return (BattleActionData_o *)v43;
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__isEnemyID((BattleData_o *)this, v28->fields.actorId, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*p_fields )
        goto LABEL_173;
      v102 = LODWORD((*p_fields)[18].fields.logictarget) == 0;
    }
    else
    {
      v102 = 0;
    }
    v28->fields.isReversalShortBuffTurn = v102;
  }
  if ( skillInfo->fields.type == 1 )
  {
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C1AE20(BattleLogicFunction_FunctionArgument_TypeInfo);
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
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C1AE20(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
      if ( !argument )
        goto LABEL_173;
      goto LABEL_87;
    }
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C1AE20(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
  }
  overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
  if ( !overwriteFuncSideEffectArg )
  {
    overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1C1AE20(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
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
  v106 = v79->fields.logicfunction;
  v108 = dataValsArray;
  v107 = functionIdArray;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v106 )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                 v106,
                                 v28,
                                 v107,
                                 v108,
                                 0,
                                 1,
                                 0,
                                 0,
                                 0,
                                 v99,
                                 1,
                                 argument,
                                 (int32_t)this,
                                 0LL);
  v43 = this;
  v79 = v47;
LABEL_90:
  if ( task->fields.actortype == 5 )
  {
    if ( !v43 )
      goto LABEL_173;
    v109 = BasicHelper__IndexValue_int__49864440(
             (System_Collections_Generic_List_T__o *)v43[6].klass,
             0,
             0,
             (const MethodInfo_2F8DEF8 *)Method_BasicHelper_IndexValue_int___);
    v110 = (UnityEngine_Object_o *)v43[1].fields.logic;
    v111 = v109;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleLogicSkill_o *)UnityEngine_Object__op_Equality(v110, 0LL, 0LL);
    if ( v111 >= 1 && ((unsigned __int8)this & 1) != 0 )
    {
      v112 = v79->fields.logic;
      if ( !v112 )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)v112->fields.perf;
      if ( !this )
        goto LABEL_173;
      ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v111, 0LL);
      v43[1].fields.logic = (struct BattleLogic_o *)ServantGameObject;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v43[1].fields.logic,
        (int64_t)ServantGameObject,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
    }
  }
  ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
    skillInfo,
    skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
  BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
  this = (BattleLogicSkill_o *)v79->fields.logic;
  if ( !this )
    goto LABEL_173;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
  if ( task->fields.IsResetPrevAttackInfo )
  {
    if ( !v43 )
      goto LABEL_173;
    BYTE4(v43[1].fields.logicfunction) = 0;
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_173;
    BattleData__setCommandAttack((BattleData_o *)this, 0, 0, 0LL);
  }
  if ( !*p_fields )
    goto LABEL_173;
  v120 = (*p_fields)[10].fields.logicfunction;
  if ( !v120 )
    goto LABEL_173;
  klass = v120->klass;
  v122 = *(unsigned __int16 *)(&v120->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v120->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v122;
      p_offset += 2;
      if ( !v122 )
        goto LABEL_110;
    }
    v124 = (__int64)(&klass[1]._1.namespaze + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_110:
    v124 = sub_1C6CBB4(v120, BattleActionLogManagerInterface_TypeInfo, 5LL);
  }
  this = (BattleLogicSkill_o *)(*(__int64 (__fastcall **)(struct BattleLogicFunction_o *, BattleLogicTask_o *, _QWORD))v124)(
                                 v120,
                                 task,
                                 *(_QWORD *)(v124 + 8));
  if ( !v43 )
    goto LABEL_173;
  if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v43, 0LL) )
  {
    v131 = (int64_t)v43[2].fields.logic;
    v43[9].monitor = (void *)v131;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v43[9].monitor, v131, v125, v126, v127, v128, v129, v130);
    v132 = StringLiteral_1/*""*/;
    v43[2].fields.logic = (struct BattleLogic_o *)StringLiteral_1/*""*/;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v43[2].fields.logic, (int64_t)v132, v133, v134, v135, v136, v137, v138);
    p_logictarget = (int64_t *)&v43[2].fields.logictarget;
    if ( !System_String__IsNullOrEmpty((System_String_o *)v43[2].fields.logictarget, 0LL) )
    {
      v146 = *p_logictarget;
      v43[9].monitor = (void *)*p_logictarget;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v43[9].monitor, v146, v140, v141, v142, v143, v144, v145);
      v147 = StringLiteral_1/*""*/;
      *p_logictarget = (int64_t)StringLiteral_1/*""*/;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v43[2].fields.logictarget,
        (int64_t)v147,
        v148,
        v149,
        v150,
        v151,
        v152,
        v153);
    }
  }
  type = skillInfo->fields.type;
  v155 = *p_fields;
  this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !v155 )
    goto LABEL_173;
  this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)v155, (int32_t)this, 0LL);
  if ( type == 1 || this )
  {
    this = (BattleLogicSkill_o *)SkillLvEntity__IsNoTargetSkipSkill(v38, 0LL);
    v156 = (unsigned __int8)this & 1;
  }
  else
  {
    v156 = 1;
  }
  if ( (v156 & (LOBYTE(v43[5].klass) ^ 1)) != 0 || BYTE1(v43[6].monitor) && !BYTE2(v43[6].monitor) )
    return 0LL;
  if ( task->fields.isCanCounterTask )
  {
    v157 = *p_fields;
    this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v157 )
      goto LABEL_173;
    this = (BattleLogicSkill_o *)BattleData__getServantData((BattleData_o *)v157, (int32_t)this, 0LL);
    if ( this )
    {
      v158 = this;
      ((void (__fastcall *)(BattleLogicSkill_o *, BattleLogicSkill_o *, Il2CppClass *))v43->klass[1]._1.castClass)(
        v43,
        *p_fields,
        v43->klass[1]._1.declaringType);
      this = (BattleLogicSkill_o *)v43[6].klass;
      if ( !this )
        goto LABEL_173;
      v159 = *p_fields;
      v160 = (int32_t)v158->fields.logic;
      this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                     (System_Collections_Generic_List_int__o *)this,
                                     (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v159 )
        goto LABEL_173;
      BattleData__SetWasAttackTargetIdList((BattleData_o *)v159, v160, (System_Int32_array *)this, 0LL);
      v162 = v79->fields.logic;
      if ( !v162 )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)v162->fields.logicnomal;
      if ( !this )
        goto LABEL_173;
      v163 = BattleLogicNomal__taskCounterFunc(
               (BattleLogicNomal_o *)this,
               (BattleData_o *)*p_fields,
               HIBYTE(v158[9].fields.logicfunction) == 0,
               1,
               0,
               v161);
      BattleLogic__addBattleLogicTask(v162, v163, 0LL);
    }
  }
  v164 = *p_fields;
  if ( task->fields.isFunctionedFunction )
  {
    if ( !v164 )
      goto LABEL_173;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)*p_fields, 0LL);
  }
  else
  {
    this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v43[6].klass )
      goto LABEL_173;
    v166 = (int)this;
    this = (BattleLogicSkill_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v43[6].klass,
                                   (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v164 )
      goto LABEL_173;
    BattleData__SetFunctionedTargetIdArray((BattleData_o *)v164, v166, (System_Int32_array *)this, 0LL);
    v167 = v79->fields.logic;
    if ( !v167 )
      goto LABEL_173;
    FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                        v79->fields.logic,
                                        (BattleData_o *)*p_fields,
                                        0LL);
    BattleLogic__addBattleLogicTask(v167, FunctionedFunctionBuffTaskArray, 0LL);
  }
  v169 = BattleLogicSkill__MakeAddInvokeSkillTask(v79, skillLvMst, v38, task, v165);
  this = (BattleLogicSkill_o *)SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v38, 0LL);
  if ( !v79->fields.logic )
    goto LABEL_173;
  if ( ((unsigned __int8)this & 1) != 0 )
    BattleLogic__AddTaskTargetTaskAfter(v79->fields.logic, task, v169, 0LL);
  else
    BattleLogic__AddBattleLogicTask(v79->fields.logic, v169, 0LL);
  v170 = *p_fields;
  this = (BattleLogicSkill_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                 skillInfo,
                                 skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v170 )
    goto LABEL_173;
  BattleData__AddUseSkillId((BattleData_o *)v170, (int32_t)this, 0LL);
  if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v43, 0LL) )
  {
    v171 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v171, 0LL);
    if ( !v171 )
      goto LABEL_173;
    BattleLogicTask__setCheckEntryFunction(v171, 0LL);
    this = (BattleLogicSkill_o *)v79->fields.logic;
    if ( !this )
      goto LABEL_173;
    BattleLogic__AddBattleLogicTask((BattleLogic_o *)this, v171, 0LL);
  }
  if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0 )
  {
    this = (BattleLogicSkill_o *)SkillEntity__getSkillCutInId(Entity, 0LL);
    if ( !(_DWORD)this )
    {
      v178 = v79->fields.logic;
      if ( !v178 )
        goto LABEL_173;
      perf = v178->fields.perf;
      CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
      if ( !perf )
        goto LABEL_173;
      BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
      if ( v43[2].fields.logic )
      {
        if ( !*p_fields )
          goto LABEL_173;
        data = (*p_fields)[1].fields.data;
        if ( !data )
          goto LABEL_173;
        this = *(BattleLogicSkill_o **)&data->fields.leaderDown;
        if ( !this )
          goto LABEL_173;
        BattleInformationComponent__showCommonMessage(
          (BattleInformationComponent_o *)this,
          (BattleActionData_o *)v43,
          0LL);
        v43[2].fields.logic = 0LL;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v43[2].fields.logic, 0LL, v182, v183, v184, v185, v186, v187);
        BYTE4(v43[6].fields.data) = 1;
      }
    }
  }
  if ( task->fields.IsNotShowSkillMessage )
  {
    v43[2].fields.logic = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v43[2].fields.logic, 0LL, v172, v173, v174, v175, v176, v177);
    BYTE4(v43[6].fields.data) = 1;
  }
  v188 = Entity;
  if ( SkillEntity__IsCheckUpdateShiftServant(Entity, 0LL) )
  {
    v189 = (BattleLogicTask_o *)sub_1C1AE20(CheckUpdateShiftTask_TypeInfo);
    BattleLogicTask___ctor(v189, 0LL);
    v189->fields.actiontype = 68;
    this = (BattleLogicSkill_o *)v79->fields.logic;
    if ( !this )
      goto LABEL_173;
    BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)this, task, v189, 0LL);
    v188 = Entity;
  }
  v190 = BattleLogicTask__getActorId(task, 0LL);
  BattleLogicSkill__ExecuteShortenSkillBuff(v79, (BattleSkillInfoData_o *)skillInfo, v190, v191);
  if ( !task->fields.isForcedSpeedOne )
  {
    this = (BattleLogicSkill_o *)SkillEntity__IsBehaveAsAssistSkill(v188, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v192 = v79->fields.logic;
      if ( !v192 )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)v192->fields.perf;
      if ( !this )
        goto LABEL_173;
      this = (BattleLogicSkill_o *)BattlePerformance__isEnableSkipStartQuest((BattlePerformance_o *)this, 0LL);
      v192->fields.isEnableSkipAssistSkill = (unsigned __int8)this & 1;
      v193 = v79->fields.logic;
      if ( !v193 )
        goto LABEL_173;
      v194 = v193->fields.perf;
      if ( !v194 )
        goto LABEL_173;
      v194->fields.isEnableSkipSkillCutIn = v193->fields.isEnableSkipAssistSkill;
    }
  }
  return (BattleActionData_o *)v43;
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
  int64_t v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  BattleData_o *v20; // x8
  System_Int32_array *v21; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  BattleData_o *v23; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v31; // x0

  if ( (byte_4BCA861 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask___TypeInfo, method);
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, v3);
    sub_1C1ABD4(&BattleSkillInfoData_TypeInfo, v4);
    sub_1C1ABD4(&int___TypeInfo, v5);
    byte_4BCA861 = 1;
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
  v12 = sub_1C1AE20(BattleSkillInfoData_TypeInfo);
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
  v13 = sub_1C1AE20(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, 0LL);
  data = (BattleData_o *)sub_1C1AC7C(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v11;
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 152) = data;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 152), (int64_t)data, v14, v15, v16, v17, v18, v19);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v20 = this->fields.data) == 0LL)
    || (v21 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v20, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v13,
          (BattleSkillInfoData_o *)v12,
          v21,
          FieldPlayerServantIDList,
          0,
          0,
          0LL),
        BattleLogicTask__setActor((BattleLogicTask_o *)v13, 5, -1, 0LL),
        (data = (BattleData_o *)sub_1C1AC7C(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1C1AE30(data, method);
  }
  v23 = data;
  data = (BattleData_o *)sub_1C1AD10(v13, data->klass->_1.element_class);
  if ( !data )
  {
    v31 = sub_1C1AE54(0LL);
    sub_1C1ACFC(v31, 0LL);
  }
  if ( !LODWORD(v23->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1C1AE38(data, method);
  v23->fields.rootfsm = (struct PlayMakerFSM_o *)v13;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v23->fields.rootfsm, v13, v24, v25, v26, v27, v28, v29);
  return (BattleLogicTask_array *)v23;
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4BCA860 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, method);
    sub_1C1ABD4(&BattleSkillInfoData_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BCA860 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
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
  v18 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( (int)v17->max_length >= 1 )
  {
    v19 = 0LL;
    m_Items = v17->m_Items;
    while ( 1 )
    {
      v21 = sub_1C1AE20(BattleSkillInfoData_TypeInfo);
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
        sub_1C1AE38(Instance, v11);
      Instance = (DataManager_o *)m_Items[v19];
      if ( !Instance )
        break;
      *(_DWORD *)(v21 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
      v23 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
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
      v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v18->fields._version;
      if ( !items )
        break;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v23,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v23;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v23, v26, v27, v28, v29, v30, v31);
      }
      if ( (int)++v19 >= (signed int)v17->max_length )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v18,
                                          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1C1AE30(Instance, v11);
  }
  if ( !v18 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  const MethodInfo *v27; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_4BCA857 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_4BCA857 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v14, 0LL);
  if ( !v14
    || (BattleLogicTask__setCommandSpell(v14, skillId, 0LL, ptTargetList, 0LL), !v13)
    || (items = v13->fields._items,
        v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
    sub_1C1AE30(v15, v16);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v14,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v14;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v14, v17, v18, v19, v20, v21, v22);
  }
  SkillTargetedBeforeFunctionSkill = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                                                                                      this,
                                                                                      v14,
                                                                                      ptTargetList,
                                                                                      0LL,
                                                                                      v27);
  System_Collections_Generic_List_object___InsertRange(
    v13,
    0,
    SkillTargetedBeforeFunctionSkill,
    (const MethodInfo_363D874 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
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
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_Collections_Generic_IEnumerable_T__o *v96; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]

  if ( (byte_4BCA856 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_StableSort_BattleLogicTask___, skillInfo);
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, v17);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_BattleLogicTask___, v18);
    sub_1C1ABD4(&System_Func_BattleLogicTask__int__TypeInfo, v19);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v20);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v21);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v22);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_1C1ABD4(&int___TypeInfo, v24);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v25);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v26);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v27);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v28);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v29);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v30);
    sub_1C1ABD4(&Method_BattleLogicSkill___c__taskSkill_b__5_0__, v31);
    sub_1C1ABD4(&BattleLogicSkill___c_TypeInfo, v32);
    byte_4BCA856 = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v34 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
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
    data = sub_1C1AC7C(v45, 1LL);
    if ( !data )
      goto LABEL_94;
    v38 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
      sub_1C1AE38(data, svtUniqueId);
    *(_DWORD *)(data + 32) = TargetAiAct;
    enemyTargetList = 0LL;
    if ( !v34 )
LABEL_94:
      sub_1C1AE30(data, svtUniqueId);
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
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    if ( !v37 )
      goto LABEL_47;
  }
  else
  {
    v60 = &items->obj.klass + size;
    v33->fields._size = size + 1;
    v60[4] = (Il2CppClass *)v34;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)v34, v51, v52, v53, v54, v55, v56);
    if ( !v37 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v33,
                                          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v61 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v61,
        (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v61 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v37, this->fields.data, 0LL);
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
    v66 = sub_1C6CBB4(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v69 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v63, *(_QWORD *)(v66 + 8));
  if ( !v69 )
    sub_1C1AE30(0LL, v68);
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
      v73 = sub_1C6CBB4(v69, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v77 = sub_1C6CBB4(v69, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v78 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v69, *(_QWORD *)(v77 + 8));
    v79 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 1LL);
    if ( !v78 )
      sub_1C1AE30(v79, v80);
    if ( !v79 )
      sub_1C1AE30(0LL, v80);
    if ( !v79->max_length )
      sub_1C1AE38(v79, v80);
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
      sub_1C1AE30(v81, v81);
    System_Collections_Generic_List_object___AddRange(
      v61,
      v81,
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    v85 = sub_1C6CBB4(v69, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v85)(v69, *(_QWORD *)(v85 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v61 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v33,
                                        (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v61,
         (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
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
      _9__5_0 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v88, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
    }
    v96 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v61,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_2F8F0E0 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v33,
      0,
      v96,
      (const MethodInfo_363D874 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v33,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCA867 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicSkill___c_TypeInfo, v1);
    byte_4BCA867 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BattleLogicSkill___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1C1AE30(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0LL )
    sub_1C1AE30(this, x);
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

  if ( (byte_4BCA868 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_4BCA868 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1C1AE30(conditions, key);
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

  if ( (byte_4BCA869 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C1ABD4(&long_TypeInfo, v8);
    byte_4BCA869 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1C1AE30(conditions, key);
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
                                                                            (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  v17 = sub_1C1B0F0(conditions);
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

  if ( (byte_4BCA86A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_4BCA86A = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1C1AE30(conditions, key);
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

  if ( (byte_4BCA86B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C1ABD4(&long_TypeInfo, v8);
    byte_4BCA86B = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1C1AE30(conditions, key);
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
                                                                            (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  sub_1C1B0F0(conditions);
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
    sub_1C1AE30(0LL, type);
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
    sub_1C1AE30(this, type);
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
  if ( (byte_4BCA86C & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1C1ABD4(&Method_System_Linq_Enumerable_Union_int___, current);
    byte_4BCA86C = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (task = v6->fields.task) == 0LL )
    sub_1C1AE30(this, current);
  actorIdlist = task->fields.actorIdlist;
  data = _4__this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1C1AE38(data, current);
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
                                                            (const MethodInfo_2FDD110 *)Method_System_Linq_Enumerable_Union_int___);
}


BattleServantData_o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0LL )
    sub_1C1AE30(this, uniqueId);
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
    sub_1C1AE30(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0LL);
}