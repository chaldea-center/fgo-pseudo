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
  __int64 v9; // x1
  __int64 v10; // x2
  BattleBuffData_o *buffData; // x21
  BattleServantData_o *v12; // x19
  BattleBuffData_CheckIndividualitiesData_o *v13; // x22
  BattleBuffData_BuffData_array *BuffList_42092284; // x21
  __int64 v15; // x1
  int max_length; // w8
  int32_t index; // w20
  unsigned int v18; // w24
  int32_t v19; // w22
  Il2CppClass **v20; // x8
  BattleBuffData_BuffData_o *v21; // x23

  if ( (byte_49FF018 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, actSkillInfo);
    byte_49FF018 = 1;
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
      v12 = ServantData;
      if ( !buffData )
        return;
      v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                           BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                           v9,
                                                           v10);
      BattleBuffData_CheckIndividualitiesData___ctor(v13, v12, 0LL, 0LL, 0LL, 0LL, 0LL);
      BuffList_42092284 = BattleBuffData__getBuffList_42092284(buffData, 143, v13, 1, 0, 0LL, 0LL);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_42092284, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_42092284 )
      {
        max_length = BuffList_42092284->max_length;
        index = actSkillInfo->fields.index;
        if ( max_length < 1 )
        {
          v19 = 0;
LABEL_21:
          data = (BattleData_o *)v12->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            BattleServantData__skillChageShorten(v12, v19, 0, index, 0LL, 0LL);
            return;
          }
        }
        else
        {
          v18 = 0;
          v19 = 0;
          while ( 1 )
          {
            if ( v18 >= max_length )
              sub_1B6432C(data, v15);
            v20 = &BuffList_42092284->obj.klass + (int)v18;
            v21 = (BattleBuffData_BuffData_o *)v20[4];
            if ( !v21 )
              break;
            if ( BattleBuffData_BuffData__CheckShortenSkillBuff((BattleBuffData_BuffData_o *)v20[4], index, 0LL) )
            {
              v19 += v21->fields.param;
              BattleBuffData_BuffData__UsedShortenSkillCountProgress(v21, index, 0LL);
            }
            else
            {
              BattleBuffData_BuffData__RevertUnused(v21, 1, 0LL);
            }
            max_length = BuffList_42092284->max_length;
            if ( (int)++v18 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1B64324(data);
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

  if ( (byte_49FF014 & 1) == 0 )
  {
    sub_1B640C8(&Method_WeightRate_int___ctor__, rateArray);
    sub_1B640C8(&Method_WeightRate_int__getData__, v4);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v5);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v6);
    sub_1B640C8(&WeightRate_int__TypeInfo, v7);
    byte_49FF014 = 1;
  }
  if ( !rateArray )
    return -1;
  v8 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, rateArray, method);
  WeightRate_int____ctor(v8, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
  v11 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1B6432C(v9, v10);
      if ( !v8 )
        break;
      WeightRate_int___setWeight(
        v8,
        rateArray->m_Items[v12 + 1],
        v12,
        (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
      LODWORD(v11) = rateArray->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_12;
    }
LABEL_13:
    sub_1B64324(v9);
  }
  if ( !v8 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v8->fields.totalweight, 0LL);
  return WeightRate_int___getData(v8, Next, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
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
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x25
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_List_object__o *v47; // x19
  __int64 v48; // x1
  __int64 v49; // x2
  _QWORD *v50; // x24
  __int64 v51; // x8
  __int64 v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x24
  DataVals_array *DataValArray; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  BattleLogicSkill___c_c *v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x22
  System_Func_T__TResult__o *_9__7_0; // x23
  Il2CppObject *v61; // x25
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x22
  __int64 v66; // x1
  __int64 v67; // x2
  System_Func_T1__T2__TResult__o *v68; // x23
  System_Func_T__TResult__o *v69; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  BattleLogicSkill___c_c *v73; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x22
  System_Func_object__bool__o *_9__7_3; // x23
  Il2CppObject *v76; // x24
  struct BattleLogicSkill___c_StaticFields *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x22
  __int64 v81; // x1
  __int64 v82; // x2
  System_Func_object__object__o *v83; // x23
  __int64 v84; // x8
  void *v85; // x21
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x21
  __int64 v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x8
  __int64 v95; // x9
  int *v96; // x10
  __int64 v97; // x0
  BattleSkillInfoData_o *v98; // x22
  System_Int32_array *v99; // x0
  __int64 v100; // x1
  System_Collections_Generic_IEnumerable_T__o *v101; // x0
  __int64 v102; // x8
  __int64 v103; // x9
  int *v104; // x10
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x2
  BattleLogicSkill___c_c *v108; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v110; // x21
  struct BattleLogicSkill___c_StaticFields *v111; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  const MethodInfo *v115; // [xsp+8h] [xbp-68h]

  if ( (byte_49FF00C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, task);
    sub_1B640C8(&Method_BasicHelper_StableSort_BattleLogicTask___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Union_int___, v14);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v15);
    sub_1B640C8(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo, v16);
    sub_1B640C8(&System_Func_BattleLogicTask__int__TypeInfo, v17);
    sub_1B640C8(&System_Func_int__BattleServantData__TypeInfo, v18);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v19);
    sub_1B640C8(&System_Func_DataVals__Target_TYPE__TypeInfo, v20);
    sub_1B640C8(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo, v21);
    sub_1B640C8(&System_IDisposable_TypeInfo, v22);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v23);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v24);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v25);
    sub_1B640C8(&int___TypeInfo, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v28);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v29);
    sub_1B640C8(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__, v30);
    sub_1B640C8(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__, v31);
    sub_1B640C8(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__, v32);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__, v33);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__, v34);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__, v35);
    sub_1B640C8(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo, v36);
    sub_1B640C8(&BattleLogicSkill___c_TypeInfo, v37);
    byte_49FF00C = 1;
  }
  v38 = sub_1B64314(BattleLogicSkill___c__DisplayClass7_0_TypeInfo, task, ptTargetArray);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_75;
  *(_QWORD *)(v38 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 16), (int32_t)this, v40, v41);
  *(_QWORD *)(v38 + 24) = task;
  v42 = v38 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 24), (int32_t)task, v43, v44);
  v47 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v45,
                                                       v46);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v50 = Method_System_Array_Empty_int___;
  v51 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v51 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v51 = v50[7];
  }
  v52 = *(_QWORD *)(v51 + 16);
  if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
    v52 = sub_1BB5FA4(v52);
  if ( !*(_DWORD *)(v52 + 224) )
    j_il2cpp_runtime_class_init_0(v52);
  v39 = *(__int64 **)(v50[7] + 16LL);
  if ( (*((_BYTE *)v39 + 309) & 1) == 0 )
    v39 = (__int64 *)sub_1BB5FA4(v39);
  v53 = (System_Collections_Generic_IEnumerable_TSource__o **)v39[23];
  v54 = *v53;
  if ( ptTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v53,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_2E75428 *)Method_System_Linq_Enumerable_Union_int___);
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  }
  if ( enemyTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v54,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_2E75428 *)Method_System_Linq_Enumerable_Union_int___);
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  }
  if ( !*(_QWORD *)v42 )
    goto LABEL_75;
  v39 = *(__int64 **)(*(_QWORD *)v42 + 72LL);
  if ( !v39 )
    goto LABEL_75;
  if ( *((_DWORD *)v39 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v39, 0LL);
    v58 = BattleLogicSkill___c_TypeInfo;
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v58 = BattleLogicSkill___c_TypeInfo;
    }
    _9__7_0 = (System_Func_T__TResult__o *)v58->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v58->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v58);
        v58 = BattleLogicSkill___c_TypeInfo;
      }
      v61 = (Il2CppObject *)v58->static_fields->__9;
      _9__7_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_DataVals__Target_TYPE__TypeInfo, v56, v57);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v61,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v63, v64);
    }
    v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v59,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2E68DC4 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v68 = (System_Func_T1__T2__TResult__o *)sub_1B64314(
                                              System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo,
                                              v66,
                                              v67);
    System_Func_object__Int32Enum__object____ctor(
      v68,
      (Il2CppObject *)v38,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0LL);
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v65,
                                                                 (Il2CppObject *)v54,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v68,
                                                                 (const MethodInfo_2E43E2C *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v69 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__BattleServantData__TypeInfo, v48, v49);
  System_Func_int__object____ctor(
    v69,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0LL);
  v70 = System_Linq_Enumerable__Select_int__object_(
          v54,
          (System_Func_TSource__TResult__o *)v69,
          (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v73 = BattleLogicSkill___c_TypeInfo;
  v74 = (System_Collections_Generic_IEnumerable_TSource__o *)v70;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v73 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_3 = (System_Func_object__bool__o *)v73->static_fields->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v73 = BattleLogicSkill___c_TypeInfo;
    }
    v76 = (Il2CppObject *)v73->static_fields->__9;
    _9__7_3 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v71, v72);
    System_Func_object__bool____ctor(
      _9__7_3,
      v76,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0LL);
    v77 = BattleLogicSkill___c_TypeInfo->static_fields;
    v77->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v77->__9__7_3, (int32_t)_9__7_3, v78, v79);
  }
  v80 = System_Linq_Enumerable__Where_object_(
          v74,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v83 = (System_Func_object__object__o *)sub_1B64314(
                                           System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo,
                                           v81,
                                           v82);
  System_Func_object__object____ctor(
    v83,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0LL);
  v39 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v80,
                     (System_Func_TSource__IEnumerable_TResult___o *)v83,
                     (const MethodInfo_2E6B930 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v39 )
LABEL_75:
    sub_1B64324(v39);
  v84 = *v39;
  v85 = v39;
  v86 = *(unsigned __int16 *)(*v39 + 302);
  if ( *(_WORD *)(*v39 + 302) )
  {
    v87 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v87 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v86;
      v87 += 4;
      if ( !v86 )
        goto LABEL_37;
    }
    v88 = v84 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_37:
    v88 = sub_1BB60A8(v39, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v89 = (*(__int64 (__fastcall **)(void *, _QWORD))v88)(v85, *(_QWORD *)(v88 + 8));
  if ( !v89 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v90 = *(_QWORD *)v89;
    v91 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
    {
      v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v92 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v91;
        v92 += 4;
        if ( !v91 )
          goto LABEL_44;
      }
      v93 = v90 + 16LL * *v92 + 312;
    }
    else
    {
LABEL_44:
      v93 = sub_1BB60A8(v89, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8)) & 1) == 0 )
      break;
    v94 = *(_QWORD *)v89;
    v95 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
    {
      v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v96 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v95;
        v96 += 4;
        if ( !v95 )
          goto LABEL_51;
      }
      v97 = v94 + 16LL * *v96 + 312;
    }
    else
    {
LABEL_51:
      v97 = sub_1BB60A8(v89, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v98 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v89, *(_QWORD *)(v97 + 8));
    v99 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
    if ( !v98 )
      sub_1B64324(v99);
    if ( !v99 )
      sub_1B64324(0LL);
    if ( !v99->max_length )
      sub_1B6432C(v99, v100);
    v99->m_Items[1] = v98->fields.svtUniqueId;
    v101 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                            this,
                                                            v98,
                                                            v99,
                                                            0LL,
                                                            0,
                                                            0,
                                                            0,
                                                            0,
                                                            1,
                                                            v115);
    if ( !v47 )
      sub_1B64324(v101);
    System_Collections_Generic_List_object___AddRange(
      v47,
      v101,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v102 = *(_QWORD *)v89;
  v103 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
  {
    v104 = (int *)(*(_QWORD *)(v102 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v104 - 1) != System_IDisposable_TypeInfo )
    {
      --v103;
      v104 += 4;
      if ( !v103 )
        goto LABEL_62;
    }
    v105 = v102 + 16LL * *v104 + 312;
  }
  else
  {
LABEL_62:
    v105 = sub_1BB60A8(v89, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v105)(v89, *(_QWORD *)(v105 + 8));
  v108 = BattleLogicSkill___c_TypeInfo;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
    v108 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_5 = (System_Func_object__int__o *)v108->static_fields->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !v108->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v108);
      v108 = BattleLogicSkill___c_TypeInfo;
    }
    v110 = (Il2CppObject *)v108->static_fields->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleLogicTask__int__TypeInfo, v106, v107);
    System_Func_object__int____ctor(
      _9__7_5,
      v110,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0LL);
    v111 = BattleLogicSkill___c_TypeInfo->static_fields;
    v111->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v111->__9__7_5, (int32_t)_9__7_5, v112, v113);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v47,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_2E292C0 *)Method_BasicHelper_StableSort_BattleLogicTask___);
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
  __int64 v11; // x2
  unsigned __int64 v12; // x23
  __int64 v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_int__bool__o *v16; // x22
  bool v17; // w0

  if ( (byte_49FF016 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, actorIndividualities);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v6);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass18_0__IsNotSkillCopyTargetIndividuality_b__0__, v7);
    sub_1B640C8(&BattleLogicSkill___c__DisplayClass18_0_TypeInfo, v8);
    byte_49FF016 = 1;
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
        v12 = 0LL;
        while ( 1 )
        {
          v13 = sub_1B64314(BattleLogicSkill___c__DisplayClass18_0_TypeInfo, v10, v11);
          System_Object___ctor((Il2CppObject *)v13, 0LL);
          if ( v12 >= notSkillCopyTargetIndividualities->max_length )
            sub_1B6432C(IsNullOrEmpty, v14);
          if ( !v13 )
            break;
          *(_DWORD *)(v13 + 16) = notSkillCopyTargetIndividualities->m_Items[v12 + 1];
          v16 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v14, v15);
          System_Func_int__bool____ctor(
            v16,
            (Il2CppObject *)v13,
            Method_BattleLogicSkill___c__DisplayClass18_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0LL);
          v17 = BasicHelper__Any_int__48383472(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v16,
                  (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
          if ( !v17 && (__int64)++v12 < (int)notSkillCopyTargetIndividualities->max_length )
            continue;
          return v17;
        }
LABEL_16:
        sub_1B64324(IsNullOrEmpty);
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
  __int64 v12; // x1
  __int64 v13; // x2
  BattleData_o *data; // x21
  bool isPlayerID; // w23
  int32_t data_high; // w20
  int32_t v17; // w24
  TempBattleSkillInfoData_o *v18; // x25

  v8 = this;
  if ( (byte_49FF00E & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1B640C8(&TempBattleSkillInfoData_TypeInfo, skillLvMst);
    byte_49FF00E = 1;
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
          v17 = (int32_t)v9->fields.data;
          data_high = HIDWORD(v9->fields.data);
          v18 = (TempBattleSkillInfoData_o *)sub_1B64314(TempBattleSkillInfoData_TypeInfo, v12, v13);
          TempBattleSkillInfoData___ctor(v18, v17, data_high, v11, 0LL);
          return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v18, actortype, isPlayerID, 0LL);
        }
      }
    }
LABEL_13:
    sub_1B64324(this);
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
  BattleData_o *IsQuestClear_37285996; // x0
  __int64 v19; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v24; // x22
  unsigned int v25; // w24
  AddSkillData_o *v26; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FF017 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    sub_1B640C8(&CondType_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__AddRange__, v15);
    byte_49FF017 = 1;
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
  IsQuestClear_37285996 = (BattleData_o *)CondType__IsQuestClear_37285996(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_37285996 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !targetIds->max_length )
      goto LABEL_30;
    IsQuestClear_37285996 = this->fields.data;
    if ( !IsQuestClear_37285996 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_37285996, targetIds->m_Items[1], 0LL);
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
    IsQuestClear_37285996 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v21->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1B64324(IsQuestClear_37285996);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v24 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_37285996;
      v25 = 0;
      while ( v25 < max_length )
      {
        v26 = classBoardAddCommandSpells->m_Items[v25];
        if ( !v26 || !v24 )
          goto LABEL_29;
        IsQuestClear_37285996 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v24,
                                                  &entity,
                                                  v26->fields.id,
                                                  commandSpellId,
                                                  v26->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_37285996 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_37285996 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_37285996 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_37285996,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v25 >= max_length )
          return;
      }
LABEL_30:
      sub_1B6432C(IsQuestClear_37285996, v19);
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
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x23
  unsigned __int64 v40; // x20
  __int64 v41; // x24
  struct System_Int32_array *v42; // x8
  __int64 v43; // x1
  int32_t v44; // w3
  System_Func_int__bool__o *v45; // x27
  __int64 v46; // x27
  __int64 v47; // x2
  System_Func_int__bool__o *v48; // x27
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v50; // x3
  __int64 v51; // x1
  __int64 v52; // x2
  System_Func_int__bool__o *v53; // x27
  int32_t v54; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x1
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  System_Int32_array *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_Object_array *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  ServantStatusBattleListViewItem_o *v74; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v75; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v76; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v12 = this;
  if ( (byte_49FF015 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, skillLvEnt);
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v14);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__ToArray__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals___ctor__, v21);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B640C8(&System_Collections_Generic_List_DataVals__TypeInfo, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__0__, v25);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__1__, v26);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__2__, v27);
    this = (BattleLogicSkill_o *)sub_1B640C8(&BattleLogicSkill___c__DisplayClass17_0_TypeInfo, v28);
    byte_49FF015 = 1;
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
  if ( !skillLvEnt )
    goto LABEL_52;
  v31 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(skillLvEnt, 0LL);
  actorIndividualities = v31 ? BattleServantData__getConcatServantAndBuffIndividualityies(v31, 0LL, 0, 0, 0, 0LL) : 0LL;
  v74 = (ServantStatusBattleListViewItem_o *)functionIdArray;
  v76 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v32, v33);
  System_Collections_Generic_List_int____ctor(
    v76,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v75 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DataVals__TypeInfo,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = skillLvEnt->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v40 = 0LL;
  while ( (__int64)v40 < (int)funcId->max_length )
  {
    v41 = sub_1B64314(BattleLogicSkill___c__DisplayClass17_0_TypeInfo, v36, v37);
    System_Object___ctor((Il2CppObject *)v41, 0LL);
    v42 = skillLvEnt->fields.funcId;
    if ( !v42 )
      goto LABEL_52;
    if ( v40 >= v42->max_length )
      goto LABEL_57;
    if ( !v41 )
      goto LABEL_52;
    *(_DWORD *)(v41 + 16) = v42->m_Items[v40 + 1];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v30, 0LL)
      || (v45 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v43, v37),
          System_Func_int__bool____ctor(
            v45,
            (Il2CppObject *)v41,
            Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__0__,
            0LL),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__48383472(
                                         (System_Int32_array *)v30,
                                         (System_Func_T__bool__o *)v45,
                                         (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v41 + 24) = 0LL;
      v46 = v41 + 24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 24), 0, v37, v44);
      if ( !v39 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v39,
                                     (Il2CppObject **)(v41 + 24),
                                     *(_DWORD *)(v41 + 16),
                                     (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v46 )
          goto LABEL_52;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v46 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v46 )
            goto LABEL_52;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v46 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v46 )
              goto LABEL_52;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v46 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v46 )
                goto LABEL_52;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v46 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v46 )
                  goto LABEL_52;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v46 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v48 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v36, v47),
                      System_Func_int__bool____ctor(
                        v48,
                        (Il2CppObject *)v41,
                        Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__1__,
                        0LL),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__48383472(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v48,
                                                     (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v40 >= SetTypeDataValArray->max_length )
LABEL_57:
                    sub_1B6432C(this, v36);
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v40];
                  if ( !this )
                    goto LABEL_52;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0LL);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v50);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v53 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v51, v52),
                          System_Func_int__bool____ctor(
                            v53,
                            (Il2CppObject *)v41,
                            Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__2__,
                            0LL),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__48383472(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v53,
                                                         (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v76;
                      if ( !v76 )
                        goto LABEL_52;
                      v54 = *(_DWORD *)(v41 + 16);
                      items = v76->fields._items;
                      v56 = Method_System_Collections_Generic_List_int__Add__;
                      ++v76->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v76->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v76,
                          v54,
                          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v76->fields._size = size + 1;
                        items->m_Items[size + 1] = v54;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0LL);
                      if ( !this )
                        goto LABEL_52;
                      if ( v40 >= LODWORD(this->fields.logic) )
                        goto LABEL_57;
                      if ( !v75 )
                        goto LABEL_52;
                      v60 = (Il2CppObject *)*((_QWORD *)&this->fields.logictarget + v40);
                      v61 = v75->fields._items;
                      v62 = Method_System_Collections_Generic_List_DataVals__Add__;
                      ++v75->fields._version;
                      if ( !v61 )
                        goto LABEL_52;
                      v63 = v75->fields._size;
                      if ( (unsigned int)v63 >= v61->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v75,
                          v60,
                          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v64 = &v61->obj.klass + v63;
                        v75->fields._size = v63 + 1;
                        v64[4] = (Il2CppClass *)v60;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v60, v58, v59);
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
    ++v40;
    if ( !funcId )
      goto LABEL_52;
  }
  this = (BattleLogicSkill_o *)v76;
  if ( !v76
    || (v65 = System_Collections_Generic_List_int___ToArray(
                v76,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        v74->klass = (ServantStatusBattleListViewItem_c *)v65,
        sub_1B6406C(v74, (int32_t)v65, v66, v67),
        (this = (BattleLogicSkill_o *)v75) == 0LL)
    || (v68 = System_Collections_Generic_List_object___ToArray(
                v75,
                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v68,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)dataValsArray, (int32_t)v68, v69, v70),
        !v74->klass) )
  {
LABEL_52:
    sub_1B64324(this);
  }
  return LODWORD(v74->klass->_1.namespaze) != 0;
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
  __int64 v25; // x1
  __int64 v26; // x2
  BattleActionData_o *v27; // x24
  bool v28; // w20
  BattleServantData_o *ServantData; // x25
  bool v30; // w22
  Il2CppObject *Entity; // x0
  SkillEntity_o *v32; // x28
  SkillLvEntity_o *v33; // x27
  System_Int32_array *Individualities; // x29
  System_Int32_array *ActIndividuality; // x0
  ServantEntity_o *svtdata; // x29
  int32_t Rarity; // w0
  __int64 v38; // x26
  __int64 v39; // x29
  int32_t v40; // w0
  __int64 v41; // x1
  __int64 v42; // x2
  bool v43; // w28
  int32_t Timing_k__BackingField; // w21
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  int32_t type; // w8
  BattleLogicFunction_o *logicfunction; // x22
  System_Int32_array *funcId; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  struct BattleBuffData_o *buffData; // x8
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x8
  int v53; // w9
  BattleData_o *data; // x20
  struct FunctionMaster_o *master; // x21
  Il2CppObject *klass; // x22
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  BattleLogicSkill_SkillExecArgs_o *v60; // [xsp+38h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  v10 = this;
  if ( (byte_49FF00F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleServantData__TypeInfo, skillInfo);
    sub_1B640C8(&BattleActionData_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1B640C8(&BattleLogicFunction_FunctionArgument_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__, v19);
    this = (BattleLogicSkill_o *)sub_1B640C8(&BattleLogicSkill___c_TypeInfo, v20);
    byte_49FF00F = 1;
  }
  v60 = skillExecArgs;
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
  v27 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v25, v26);
  BattleActionData___ctor(v27, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_43;
  v28 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_43;
  v30 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_43;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v24,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v32 = (SkillEntity_o *)Entity;
    if ( !SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
    {
      this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( this )
        {
          this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v24, skilllv, 0LL);
          v33 = (SkillLvEntity_o *)this;
          if ( skillInfo->fields.type == 12 )
          {
            if ( !ServantData )
              goto LABEL_43;
            Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
            ActIndividuality = SkillEntity__getActIndividuality(v32, 0LL);
            if ( !Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
              return;
            svtdata = ServantData->fields.svtdata;
            Rarity = BattleServantData__getRarity(ServantData, 0LL);
            this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v33, svtdata, Rarity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return;
          }
          if ( v27 )
          {
            v27->fields.actorId = svtUniqueId;
            if ( ServantData )
            {
              v39 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
              v38 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v61.fields.currentCryptoKey = v39;
              *(_QWORD *)&v61.fields.fakeValue = v38;
              v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v61, 0LL);
              v27->fields.motionId = SkillEntity__GetMotionId(v32, v40, 0LL);
              v43 = v30;
              v27->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
              v27->fields.commandAssistId = skillInfo->fields.commandAssistId;
              v27->fields.cardIndex = skillInfo->fields.index;
              if ( v60 )
              {
                if ( !v60->fields._AllowUpdateFieldServantResultStatus_k__BackingField )
                  goto LABEL_24;
              }
              this = (BattleLogicSkill_o *)v10->fields.logic;
              if ( !this )
                goto LABEL_43;
              BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
              if ( v60 )
LABEL_24:
                Timing_k__BackingField = v60->fields._Timing_k__BackingField;
              else
                Timing_k__BackingField = 0;
              argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B64314(
                                                                     BattleLogicFunction_FunctionArgument_TypeInfo,
                                                                     v41,
                                                                     v42);
              BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
              if ( argument )
              {
                type = skillInfo->fields.type;
                argument->fields.isDeckDataLoad = v28;
                argument->fields._SkillTiming_k__BackingField = Timing_k__BackingField;
                argument->fields.grantSkillType = type;
                if ( v33 )
                {
                  logicfunction = v10->fields.logicfunction;
                  funcId = v33->fields.funcId;
                  this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v33, 0LL);
                  if ( logicfunction )
                  {
                    this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                                   logicfunction,
                                                   v27,
                                                   funcId,
                                                   (DataVals_array *)this,
                                                   1,
                                                   1,
                                                   0,
                                                   v43,
                                                   0,
                                                   1,
                                                   1,
                                                   argument,
                                                   v33->fields.skillId,
                                                   0LL);
                    if ( !v60 || v60->fields._RemoveActorUnfixedBuff_k__BackingField )
                    {
                      buffData = ServantData->fields.buffData;
                      if ( !buffData )
                        goto LABEL_43;
                      unfixedBuffList = buffData->fields.unfixedBuffList;
                      if ( !unfixedBuffList )
                        goto LABEL_43;
                      v53 = unfixedBuffList->fields._version + 1;
                      unfixedBuffList->fields._size = 0;
                      unfixedBuffList->fields._version = v53;
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
                      master = (struct FunctionMaster_o *)sub_1B64314(
                                                            System_Action_BattleServantData__TypeInfo,
                                                            v49,
                                                            v50);
                      System_Action_object____ctor(
                        (System_Action_object__o *)master,
                        klass,
                        Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                        0LL);
                      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                      static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                      sub_1B6406C(
                        (ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0,
                        (int32_t)master,
                        v58,
                        v59);
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
      sub_1B64324(this);
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
  SkillLvMaster_o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x1
  System_Collections_Generic_Dictionary_object__object__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x25
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x24
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x23
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x22
  BattleServantData_o *v53; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v55; // x8
  unsigned int NowHp; // w0
  unsigned int v57; // w0
  int32_t v58; // w20
  int32_t v59; // w20
  __int64 *v61; // x8
  System_String_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3

  if ( (byte_49FF011 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7);
    sub_1B640C8(&System_Func_string__int__bool__TypeInfo, v8);
    sub_1B640C8(&System_Func_string__double__bool__TypeInfo, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__0__, v12);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__1__, v13);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__2__, v14);
    sub_1B640C8(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__3__, v15);
    sub_1B640C8(&BattleLogicSkill___c__DisplayClass13_0_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_2967/*"BATTLE_SKILLERROR_NP_LOWER"*/, v17);
    sub_1B640C8(&StringLiteral_2965/*"BATTLE_SKILLERROR_HP_LOWER"*/, v18);
    sub_1B640C8(&StringLiteral_12201/*"STAR_HIGHER"*/, v19);
    sub_1B640C8(&StringLiteral_7129/*"HP_PER_LOWER"*/, v20);
    sub_1B640C8(&StringLiteral_2966/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v21);
    sub_1B640C8(&StringLiteral_2964/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v22);
    sub_1B640C8(&StringLiteral_7128/*"HP_PER_HIGHER"*/, v23);
    sub_1B640C8(&StringLiteral_2968/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v24);
    sub_1B640C8(&StringLiteral_9284/*"NP_HIGHER"*/, v25);
    sub_1B640C8(&StringLiteral_2969/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v26);
    sub_1B640C8(&StringLiteral_7130/*"HP_VAL_HIGHER"*/, v27);
    sub_1B640C8(&StringLiteral_12202/*"STAR_LOWER"*/, v28);
    sub_1B640C8(&StringLiteral_1/*""*/, v29);
    sub_1B640C8(&StringLiteral_9285/*"NP_LOWER"*/, v30);
    sub_1B640C8(&StringLiteral_7131/*"HP_VAL_LOWER"*/, v31);
    byte_49FF011 = 1;
  }
  v32 = sub_1B64314(BattleLogicSkill___c__DisplayClass13_0_TypeInfo, skillInfo, text);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)text, (int32_t)StringLiteral_1/*""*/, v33, v34);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_47;
  v36 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v36 )
    goto LABEL_47;
  Instance = (__int64)SkillLvMaster__GetEntity(v36, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v32 )
    goto LABEL_47;
  v39 = *(_QWORD *)(Instance + 56);
  *(_QWORD *)(v32 + 16) = v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 16), v39, v37, v38);
  v40 = *(System_Collections_Generic_Dictionary_object__object__o **)(v32 + 16);
  if ( !v40 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v40,
         (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v43 = sub_1B64314(System_Func_string__int__bool__TypeInfo, v41, v42);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v43,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__0__,
    0LL);
  v46 = sub_1B64314(System_Func_string__int__bool__TypeInfo, v44, v45);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v46,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__1__,
    0LL);
  v49 = sub_1B64314(System_Func_string__double__bool__TypeInfo, v47, v48);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v49,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__2__,
    0LL);
  v52 = sub_1B64314(System_Func_string__double__bool__TypeInfo, v50, v51);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v52,
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
  v53 = (BattleServantData_o *)Instance;
  Instance = BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v43 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_9284/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v43 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = &StringLiteral_2966/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v53, 0LL);
  if ( !v46 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v46 + 24))(
               *(_QWORD *)(v46 + 64),
               StringLiteral_9285/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v46 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = &StringLiteral_2967/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
               *(_QWORD *)(v43 + 64),
               StringLiteral_12201/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v43 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = &StringLiteral_2968/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v55 = this->fields.data;
  if ( !v55 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v46 + 24))(
          *(_QWORD *)(v46 + 64),
          StringLiteral_12202/*"STAR_LOWER"*/,
          (unsigned int)v55->fields.totalCriticalStars,
          *(_QWORD *)(v46 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = &StringLiteral_2969/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v53, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_7130/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v43 + 40)) & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = &StringLiteral_2964/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v57 = BattleServantData__getNowHp(v53, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v46 + 24))(
          *(_QWORD *)(v46 + 64),
          StringLiteral_7131/*"HP_VAL_LOWER"*/,
          v57,
          *(_QWORD *)(v46 + 40)) & 1) != 0 )
  {
    v58 = BattleServantData__getNowHp(v53, 0LL);
    Instance = BattleServantData__getMaxHp(v53, 0LL);
    if ( !v49 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v49 + 24))(
            *(_QWORD *)(v49 + 64),
            StringLiteral_7128/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v49 + 40),
            (double)v58 * 1000.0 / (double)(int)Instance) & 1) != 0 )
    {
      v59 = BattleServantData__getNowHp(v53, 0LL);
      Instance = BattleServantData__getMaxHp(v53, 0LL);
      if ( v52 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v52 + 24))(
                *(_QWORD *)(v52 + 64),
                StringLiteral_7129/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v52 + 40),
                (double)v59 * 1000.0 / (double)(int)Instance) & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1B64324(Instance);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v61 = &StringLiteral_2965/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v62 = LocalizationManager__Get((System_String_o *)*v61, 0LL);
  *text = v62;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)text, (int32_t)v62, v63, v64);
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
  struct BattleSkillInfoData_o *skillInfo; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  DataManager_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  BattleActionData_c *v24; // x0
  struct System_Int32_array *ptTarget; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_int__o *v30; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x25
  const MethodInfo *v34; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v36; // x24
  System_Object_array *v37; // x25
  BattleActionData_o *v38; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v42; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_49FF010 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, task);
    sub_1B640C8(&BattleActionLogManagerInterface_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandSpellMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__AddRange__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataVals___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_DataVals__TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FF010 = 1;
  }
  v17 = sub_1B64314(BattleActionData_TypeInfo, task, method);
  BattleActionData___ctor((BattleActionData_o *)v17, 0LL);
  if ( !task )
    goto LABEL_29;
  skillInfo = task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_29;
  skillId = (DataManager_o *)DataManager__GetMasterData_object_(
                               skillId,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_29;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v20 )
    goto LABEL_29;
  skillId = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                               v20,
                               (int32_t)skillId,
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_29;
  v21 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v17, 0LL);
  *(_DWORD *)(v17 + 32) = -1;
  if ( !v21 )
    goto LABEL_29;
  *(_DWORD *)(v17 + 48) = HIDWORD(v21->fields.m_CancellationTokenSource);
  v24 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v24 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v17 + 56) = v24->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = task->fields.ptTarget;
  *(_QWORD *)(v17 + 40) = ptTarget;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)ptTarget, v22, v23);
  *(_QWORD *)(v17 + 144) = skillInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 144), (int32_t)skillInfo, v26, v27);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_29;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v30 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v28, v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v33 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DataVals__TypeInfo,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v30 )
    goto LABEL_29;
  System_Collections_Generic_List_int___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)v21->fields.lookup,
    (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v21, 0LL);
  if ( !v33 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v33,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v21->fields.m_CachedPtr,
    task->fields.ptTarget,
    v30,
    (System_Collections_Generic_List_DataVals__o *)v33,
    v34);
  logicfunction = this->fields.logicfunction;
  v36 = System_Collections_Generic_List_int___ToArray(
          v30,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  v37 = System_Collections_Generic_List_object___ToArray(
          v33,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !logicfunction )
    goto LABEL_29;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v17,
                               v36,
                               (DataVals_array *)v37,
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
  v38 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_29;
  klass = actionLogManager->klass;
  v42 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v42;
      p_offset += 2;
      if ( !v42 )
        goto LABEL_22;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_22:
    p_method = sub_1BB60A8(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
    actionLogManager,
    task,
    *(_QWORD *)(p_method + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v21, 0LL) > 0.0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      perf = logic->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v21, 0LL);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0LL);
        return v38;
      }
    }
LABEL_29:
    sub_1B64324(skillId);
  }
  return v38;
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  BattleLogic_o *logic; // x19
  BattleActionData_o *v5; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0LL;
  logic = this->fields.logic;
  v5 = BattleLogicSkill__createSkillData_43231848(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_1B64324(v5);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_43231848(
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
  __int64 v27; // x1
  __int64 v28; // x2
  BattleActionData_o *v29; // x22
  BattleActionData_o *v30; // x25
  int32_t v31; // w2
  int32_t v32; // w3
  BattleBoostItemInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x22
  SkillEntity_o *Entity; // x22
  Il2CppObject *MasterData_object; // x24
  SkillLvEntity_o *v37; // x24
  BattleActionData_c *v38; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 methodPtr_low; // x10
  BattleData_o *data; // x28
  __int64 v42; // x28
  bool isForcedSkillSpeedOne; // w28
  BattleData_o *v44; // x29
  BattleServantData_o *EnemyServantData; // x0
  __int64 v46; // x27
  __int64 v47; // x29
  BattleData_o *v48; // x29
  struct System_Int32_array *ptTarget; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *Name; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_array *v59; // x28
  System_Object_array *v60; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  ServantStatusBattleListViewItem_o *p_motionMessage; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Int32_array *effectList; // x1
  __int64 v67; // x1
  int v68; // w8
  DataVals_array *v69; // x26
  int i; // w9
  __int64 v71; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  __int64 v75; // x1
  __int64 v76; // x2
  bool v77; // w23
  int32_t ActorId; // w0
  const MethodInfo *v79; // x6
  struct BattleData_o *v80; // x8
  bool v81; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  __int64 v83; // x1
  __int64 v84; // x2
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  BattleLogicFunction_o *v87; // x29
  System_Int32_array *v88; // x27
  DataVals_array *v89; // x28
  int32_t v90; // w0
  UnityEngine_Object_o *v91; // x27
  int32_t v92; // w26
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  struct BattleData_o *v97; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v100; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x1
  int32_t v106; // w1
  int32_t v107; // w2
  int32_t v108; // w3
  __int64 *v109; // x26
  int32_t v110; // w2
  int32_t v111; // w3
  __int64 v112; // x1
  int32_t v113; // w1
  int32_t v114; // w2
  int32_t v115; // w3
  int32_t type; // w23
  BattleData_o *v117; // x25
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v119; // x4
  _BOOL4 v120; // w8
  BattleData_o *v121; // x25
  BattleServantData_o *v122; // x0
  BattleServantData_o *v123; // x25
  BattleData_o *v124; // x26
  int32_t uniqueId; // w27
  const MethodInfo *v126; // x5
  struct BattleLogic_o *v127; // x26
  BattleLogicTask_array *v128; // x0
  BattleLogicTask_o *v129; // x23
  BattleData_o *v130; // x23
  __int64 v131; // x1
  __int64 v132; // x2
  BattleLogicTask_o *v133; // x23
  int32_t v134; // w2
  int32_t v135; // w3
  struct BattleLogic_o *v136; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattleData_o *v139; // x8
  struct BattlePerformance_o *v140; // x8
  int32_t v141; // w2
  int32_t v142; // w3
  __int64 v143; // x1
  __int64 v144; // x2
  BattleLogicTask_o *v145; // x22
  int32_t v146; // w0
  const MethodInfo *v147; // x3
  SkillLvMaster_o *skillLvMst; // [xsp+30h] [xbp-80h]
  DataVals_o *v150; // [xsp+38h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+40h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16

  if ( (byte_49FF00D & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_int___, task);
    sub_1B640C8(&BattleActionData_TypeInfo, v11);
    sub_1B640C8(&BattleActionLogManagerInterface_TypeInfo, v12);
    sub_1B640C8(&BattleBoostItemInfoData_TypeInfo, v13);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v14);
    sub_1B640C8(&CheckUpdateShiftTask_TypeInfo, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1B640C8(&BattleLogicFunction_FunctionArgument_TypeInfo, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_1/*""*/, v25);
    byte_49FF00D = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  skillId = (__int64)this->fields.data;
  if ( !skillId )
    goto LABEL_154;
  BattleData__ResetWasAttackTargetId((BattleData_o *)skillId, 0LL);
  v29 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v27, v28);
  BattleActionData___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_154;
  v150 = baseVals;
  v30 = BattleActionData__AddDisplayTriggerIntervalBuff(v29, task, 0LL);
  *baseActionData = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)baseActionData, (int32_t)v30, v31, v32);
  if ( !task )
    goto LABEL_154;
  if ( !v30 )
    goto LABEL_154;
  v30->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  skillId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_154;
  skillId = (__int64)DataManager__GetMasterData_object_(
                       (DataManager_o *)skillId,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_154;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v34 )
    goto LABEL_154;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v34,
                              skillId,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_154;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillId,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v37 = (SkillLvEntity_o *)skillId;
  v30->fields.isCounter = task->fields.isCounter;
  v38 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v38 = BattleActionData_TypeInfo;
  }
  static_fields = v38->static_fields;
  v30->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      static_fields = BattleActionData_TypeInfo->static_fields;
    }
    v30->fields.type = static_fields->TYPE_BOOSTSKILL;
    v30->fields.imageId = skillInfo->fields.itemImageId;
    methodPtr_low = LOBYTE(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      skillId = BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( (skillId & 1) != 0 )
        v30->fields.noOperation = 1;
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
    || (skillId = BattleServantData__isAlive((BattleServantData_o *)skillId, 0, 0LL), v42 = 0LL, (skillId & 1) != 0) )
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
    v30->fields.actorId = skillId;
    if ( !v37 )
      goto LABEL_154;
    v44 = this->fields.data;
    skillId = SkillLvEntity__GetActNpcServantId(v37, 0LL);
    if ( !v44 )
      goto LABEL_154;
    EnemyServantData = BattleData__getEnemyServantData(v44, skillId, 0LL);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v46 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v153.fields.currentCryptoKey = v46;
      *(_QWORD *)&v153.fields.fakeValue = v47;
      v30->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v153, 0LL);
    }
    v48 = this->fields.data;
    skillId = BattleLogicTask__getActorId(task, 0LL);
    if ( !v48 )
      goto LABEL_154;
    skillId = BattleData__getServantId(v48, skillId, 0LL);
    if ( !Entity )
      goto LABEL_154;
    v30->fields.motionId = SkillEntity__GetMotionId(Entity, skillId, 0LL);
    v30->fields.targetId = BattleLogicTask__getTarget(task, 0LL);
    ptTarget = task->fields.ptTarget;
    v30->fields.pttargetIds = ptTarget;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fields.pttargetIds, (int32_t)ptTarget, v50, v51);
    Name = SkillEntity__getName(Entity, 0LL);
    v30->fields.skillMessage = Name;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fields.skillMessage, (int32_t)Name, v53, v54);
    v30->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fields.skillInfo, (int32_t)skillInfo, v55, v56);
    v30->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
    v30->fields.checkRevengeId = task->fields.checkRevengeId;
    if ( BattleLogicTask__IsGimmick(task, 0LL) )
    {
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_154;
      skillId = (__int64)BattleData__GetGimmickStartVoiceArray((BattleData_o *)skillId, 0LL);
      if ( !this->fields.data )
        goto LABEL_154;
      v59 = (System_String_array *)skillId;
      skillId = (__int64)BattleData__GetGimmickResultVoiceArray(this->fields.data, 0LL);
      if ( !this->fields.data )
        goto LABEL_154;
      v60 = (System_Object_array *)skillId;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(this->fields.data, 0LL);
      BattleActionData__SetGimmickData(v30, task->fields.gimmickIndexArray, v59, v60, GimmickAnimTypeArray, 0LL);
    }
    motionMessage = task->fields.motionMessage;
    if ( motionMessage && motionMessage->fields._stringLength >= 1 )
    {
      v30->fields.motionMessage = motionMessage;
      p_motionMessage = (ServantStatusBattleListViewItem_o *)&v30->fields.motionMessage;
    }
    else
    {
      v30->fields.motionMessage = 0LL;
      p_motionMessage = (ServantStatusBattleListViewItem_o *)&v30->fields.motionMessage;
      LODWORD(motionMessage) = 0;
    }
    sub_1B6406C(p_motionMessage, (int32_t)motionMessage, v57, v58);
    if ( (task->fields.actortype | 4) == 5 )
      BattleActionData__setStateField(v30, 0LL);
    effectList = Entity->fields.effectList;
    v30->fields.effectlist = effectList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fields.effectlist, (int32_t)effectList, v64, v65);
    skillId = (__int64)this->fields.logic;
    if ( !skillId )
      goto LABEL_154;
    BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
    if ( skillInfo->fields.type == 21 )
    {
      skillId = (__int64)SkillLvEntity__getDataValsList(v37, 0LL);
      if ( !skillId )
        goto LABEL_154;
      v68 = *(_DWORD *)(skillId + 24);
      v69 = (DataVals_array *)skillId;
      if ( v68 >= 1 )
      {
        for ( i = 0; i != v68; ++i )
        {
          if ( v68 == i )
            sub_1B6432C(skillId, v67);
          v71 = *(_QWORD *)(skillId + 8LL * i + 32);
          if ( !v71 )
            goto LABEL_154;
          *(_BYTE *)(v71 + 72) = 1;
        }
      }
      logicfunction = this->fields.logicfunction;
      funcId = v37->fields.funcId;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !logicfunction )
        goto LABEL_154;
      skillId = (__int64)BattleLogicFunction__procList(
                           logicfunction,
                           v30,
                           funcId,
                           v69,
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
      v30->fields.commandType = changeTDCommandType;
    functionIdArray = v37->fields.funcId;
    dataValsArray = SkillLvEntity__getDataValsList(v37, 0LL);
    v77 = v150 == 0LL || !fromSkillCopyFunc;
    if ( v150 != 0LL && fromSkillCopyFunc )
    {
      ActorId = BattleLogicTask__getActorId(task, 0LL);
      v42 = 0LL;
      if ( !BattleLogicSkill__SetSkillCopyFunction(this, v37, v150, &functionIdArray, &dataValsArray, ActorId, v79) )
        return (BattleActionData_o *)v42;
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_154;
      skillId = BattleData__isEnemyID((BattleData_o *)skillId, v30->fields.actorId, 0LL);
      if ( (skillId & 1) != 0 )
      {
        v80 = this->fields.data;
        if ( !v80 )
          goto LABEL_154;
        v81 = v80->fields.currentTurn == 0;
      }
      else
      {
        v81 = 0;
      }
      v30->fields.isReversalShortBuffTurn = v81;
    }
    if ( skillInfo->fields.type == 1 )
    {
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B64314(
                                                             BattleLogicFunction_FunctionArgument_TypeInfo,
                                                             v75,
                                                             v76);
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
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B64314(
                                                               BattleLogicFunction_FunctionArgument_TypeInfo,
                                                               v75,
                                                               v76);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( !argument )
          goto LABEL_154;
        goto LABEL_84;
      }
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B64314(
                                                             BattleLogicFunction_FunctionArgument_TypeInfo,
                                                             v75,
                                                             v76);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
    }
    overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1B64314(
                                                                                                    BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo,
                                                                                                    v83,
                                                                                                    v84);
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
      v87 = this->fields.logicfunction;
      v89 = dataValsArray;
      v88 = functionIdArray;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v87 )
        goto LABEL_154;
      skillId = (__int64)BattleLogicFunction__procList(
                           v87,
                           v30,
                           v88,
                           v89,
                           0,
                           1,
                           0,
                           0,
                           0,
                           v77,
                           1,
                           argument,
                           skillId,
                           0LL);
LABEL_87:
      v42 = skillId;
      if ( task->fields.actortype == 5 )
      {
        if ( !skillId )
          goto LABEL_154;
        v90 = BasicHelper__IndexValue_int__48398552(
                *(System_Collections_Generic_List_T__o **)(skillId + 288),
                0,
                0,
                (const MethodInfo_2E280D8 *)Method_BasicHelper_IndexValue_int___);
        v91 = *(UnityEngine_Object_o **)(v42 + 72);
        v92 = v90;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillId = UnityEngine_Object__op_Equality(v91, 0LL, 0LL);
        if ( v92 >= 1 && (skillId & 1) != 0 )
        {
          logic = this->fields.logic;
          if ( !logic )
            goto LABEL_154;
          skillId = (__int64)logic->fields.perf;
          if ( !skillId )
            goto LABEL_154;
          ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)skillId, v92, 0LL);
          *(_QWORD *)(v42 + 72) = ServantGameObject;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 72), (int32_t)ServantGameObject, v95, v96);
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
        if ( v42 )
        {
          *(_BYTE *)(v42 + 92) = 0;
          skillId = (__int64)this->fields.data;
          if ( skillId )
          {
            BattleData__setCommandAttack((BattleData_o *)skillId, 0, 0, 0LL);
            v97 = this->fields.data;
            if ( v97 )
            {
              actionLogManager = v97->fields.actionLogManager;
              if ( actionLogManager )
              {
                klass = actionLogManager->klass;
                v100 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
                {
                  p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
                  while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
                  {
                    --v100;
                    p_offset += 2;
                    if ( !v100 )
                      goto LABEL_105;
                  }
                  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
                }
                else
                {
LABEL_105:
                  p_method = sub_1BB60A8(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL);
                }
                (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
                  actionLogManager,
                  task,
                  *(_QWORD *)(p_method + 8));
                if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v42, 0LL) )
                {
                  v105 = *(_QWORD *)(v42 + 120);
                  *(_QWORD *)(v42 + 440) = v105;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 440), v105, v103, v104);
                  v106 = (int)StringLiteral_1/*""*/;
                  *(_QWORD *)(v42 + 120) = StringLiteral_1/*""*/;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 120), v106, v107, v108);
                  v109 = (__int64 *)(v42 + 128);
                  if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v42 + 128), 0LL) )
                  {
                    v112 = *v109;
                    *(_QWORD *)(v42 + 440) = *v109;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 440), v112, v110, v111);
                    v113 = (int)StringLiteral_1/*""*/;
                    *v109 = (__int64)StringLiteral_1/*""*/;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 128), v113, v114, v115);
                  }
                }
                type = skillInfo->fields.type;
                v117 = this->fields.data;
                skillId = BattleLogicTask__getActorId(task, 0LL);
                if ( v117 )
                {
                  ServantData = BattleData__getServantData(v117, skillId, 0LL);
                  v120 = type != 1 && !ServantData || SkillLvEntity__IsNoTargetSkipSkill(v37, 0LL);
                  if ( (v120 & (*(unsigned __int8 *)(v42 + 240) ^ 1)) != 0
                    || *(_BYTE *)(v42 + 297) && !*(_BYTE *)(v42 + 298) )
                  {
                    return 0LL;
                  }
                  if ( task->fields.isCanCounterTask )
                  {
                    v121 = this->fields.data;
                    skillId = BattleLogicTask__getActorId(task, 0LL);
                    if ( !v121 )
                      goto LABEL_154;
                    v122 = BattleData__getServantData(v121, skillId, 0LL);
                    if ( v122 )
                    {
                      v123 = v122;
                      (*(void (__fastcall **)(__int64, struct BattleData_o *, _QWORD))(*(_QWORD *)v42 + 440LL))(
                        v42,
                        this->fields.data,
                        *(_QWORD *)(*(_QWORD *)v42 + 448LL));
                      skillId = *(_QWORD *)(v42 + 288);
                      if ( !skillId )
                        goto LABEL_154;
                      v124 = this->fields.data;
                      uniqueId = v123->fields.uniqueId;
                      skillId = (__int64)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)skillId,
                                           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
                      if ( !v124 )
                        goto LABEL_154;
                      BattleData__SetWasAttackTargetIdList(v124, uniqueId, (System_Int32_array *)skillId, 0LL);
                      v127 = this->fields.logic;
                      if ( !v127 )
                        goto LABEL_154;
                      skillId = (__int64)v127->fields.logicnomal;
                      if ( !skillId )
                        goto LABEL_154;
                      v128 = BattleLogicNomal__taskCounterFunc(
                               (BattleLogicNomal_o *)skillId,
                               this->fields.data,
                               !v123->fields.isEnemy,
                               1,
                               0,
                               v126);
                      BattleLogic__addBattleLogicTask(v127, v128, 0LL);
                    }
                  }
                  v129 = BattleLogicSkill__MakeAddInvokeSkillTask(this, skillLvMst, v37, task, v119);
                  skillId = SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v37, 0LL);
                  if ( this->fields.logic )
                  {
                    if ( (skillId & 1) != 0 )
                      BattleLogic__AddTaskTargetTaskAfter(this->fields.logic, task, v129, 0LL);
                    else
                      BattleLogic__AddBattleLogicTask(this->fields.logic, v129, 0LL);
                    v130 = this->fields.data;
                    skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                skillInfo,
                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
                    if ( v130 )
                    {
                      BattleData__AddUseSkillId(v130, skillId, 0LL);
                      if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v42, 0LL) )
                      {
                        v133 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v131, v132);
                        BattleLogicTask___ctor(v133, 0LL);
                        if ( !v133 )
                          goto LABEL_154;
                        BattleLogicTask__setCheckEntryFunction(v133, 0LL);
                        skillId = (__int64)this->fields.logic;
                        if ( !skillId )
                          goto LABEL_154;
                        BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, v133, 0LL);
                      }
                      if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0 )
                      {
                        skillId = SkillEntity__getSkillCutInId(Entity, 0LL);
                        if ( !(_DWORD)skillId )
                        {
                          v136 = this->fields.logic;
                          if ( !v136 )
                            goto LABEL_154;
                          perf = v136->fields.perf;
                          CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
                          if ( !perf )
                            goto LABEL_154;
                          BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
                          if ( *(_QWORD *)(v42 + 120) )
                          {
                            v139 = this->fields.data;
                            if ( !v139 )
                              goto LABEL_154;
                            v140 = v139->fields.perf;
                            if ( !v140 )
                              goto LABEL_154;
                            skillId = (__int64)v140->fields.infoComp;
                            if ( !skillId )
                              goto LABEL_154;
                            BattleInformationComponent__showCommonMessage(
                              (BattleInformationComponent_o *)skillId,
                              (BattleActionData_o *)v42,
                              0LL);
                            *(_QWORD *)(v42 + 120) = 0LL;
                            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 120), 0, v141, v142);
                            *(_BYTE *)(v42 + 308) = 1;
                          }
                        }
                      }
                      if ( task->fields.IsNotShowSkillMessage )
                      {
                        *(_QWORD *)(v42 + 120) = 0LL;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 120), 0, v134, v135);
                        *(_BYTE *)(v42 + 308) = 1;
                      }
                      if ( SkillEntity__IsCheckUpdateShiftServant(Entity, 0LL) )
                      {
                        v145 = (BattleLogicTask_o *)sub_1B64314(CheckUpdateShiftTask_TypeInfo, v143, v144);
                        BattleLogicTask___ctor(v145, 0LL);
                        v145->fields.actiontype = 68;
                        skillId = (__int64)this->fields.logic;
                        if ( !skillId )
                          goto LABEL_154;
                        BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)skillId, task, v145, 0LL);
                      }
                      v146 = BattleLogicTask__getActorId(task, 0LL);
                      BattleLogicSkill__ExecuteShortenSkillBuff(this, (BattleSkillInfoData_o *)skillInfo, v146, v147);
                      return (BattleActionData_o *)v42;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_154:
      sub_1B64324(skillId);
    }
LABEL_84:
    argument->fields.isShowBattlePointEffect = *p_isShowBattlePointEffect;
    goto LABEL_85;
  }
  return (BattleActionData_o *)v42;
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
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned int v13; // w22
  __int64 v14; // x21
  BattleData_o *v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  BattleData_o *v21; // x8
  System_Int32_array *v22; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  BattleData_o *v24; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v28; // x0

  if ( (byte_49FF013 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask___TypeInfo, method);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v3);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v4);
    sub_1B640C8(&int___TypeInfo, v5);
    byte_49FF013 = 1;
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
  v13 = HitGimmickSkillId;
  v14 = sub_1B64314(BattleSkillInfoData_TypeInfo, v11, v12);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_26;
  *(_DWORD *)(v14 + 24) = -1;
  *(_QWORD *)(v14 + 16) = 20LL;
  if ( v13 >= LODWORD(v7->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 376LL))(
    v14,
    *((unsigned int *)&v7->fields.rootfsm + v13),
    *(_QWORD *)(*(_QWORD *)v14 + 384LL));
  *(_DWORD *)(v14 + 36) = 1;
  v18 = sub_1B64314(BattleLogicTask_TypeInfo, v16, v17);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, 0LL);
  data = (BattleData_o *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  v15 = data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v13;
  if ( !v18 )
    goto LABEL_26;
  *(_QWORD *)(v18 + 136) = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 136), (int32_t)data, v19, v20);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v21 = this->fields.data) == 0LL)
    || (v22 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v21, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v18,
          (BattleSkillInfoData_o *)v14,
          v22,
          FieldPlayerServantIDList,
          0,
          0,
          0LL),
        BattleLogicTask__setActor((BattleLogicTask_o *)v18, 5, -1, 0LL),
        (data = (BattleData_o *)sub_1B64170(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1B64324(data);
  }
  v24 = data;
  data = (BattleData_o *)sub_1B64204(v18, data->klass->_1.element_class);
  if ( !data )
  {
    v28 = sub_1B64348(0LL);
    sub_1B641F0(v28, 0LL);
  }
  if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1B6432C(data, v15);
  v24->fields.rootfsm = (struct PlayMakerFSM_o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->fields.rootfsm, v18, v25, v26);
  return (BattleLogicTask_array *)v24;
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
  Il2CppObject *MasterData_object; // x0
  QuestBehaviorMaster_o *v12; // x20
  int32_t v13; // w21
  int32_t Phase; // w0
  QuestBehaviorEntity_array *BattleSkill; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  QuestBehaviorEntity_array *v18; // x20
  System_Collections_Generic_List_object__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x25
  QuestBehaviorEntity_o **m_Items; // x26
  __int64 v24; // x22
  __int64 v25; // x1
  unsigned int v26; // w0
  __int64 v27; // x1
  __int64 v28; // x2
  BattleLogicTask_o *v29; // x23
  System_Int32_array *v30; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_49FF012 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, method);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FF012 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !MasterData_object )
    return 0LL;
  v12 = (QuestBehaviorMaster_o *)MasterData_object;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v13 = (int)Instance;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  BattleSkill = QuestBehaviorMaster__getBattleSkill(v12, v13, Phase, 0LL);
  if ( !BattleSkill )
    return 0LL;
  v18 = BattleSkill;
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( (int)v18->max_length >= 1 )
  {
    v22 = 0LL;
    m_Items = v18->m_Items;
    while ( 1 )
    {
      v24 = sub_1B64314(BattleSkillInfoData_TypeInfo, v20, v21);
      BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v24, 0LL);
      if ( !v24 )
        break;
      *(_DWORD *)(v24 + 24) = -1;
      *(_QWORD *)(v24 + 16) = 20LL;
      if ( (unsigned int)v22 >= v18->max_length )
        goto LABEL_29;
      Instance = (DataManager_o *)m_Items[v22];
      if ( !Instance )
        break;
      v26 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0LL);
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v24 + 376LL))(
                                    v24,
                                    v26,
                                    *(_QWORD *)(*(_QWORD *)v24 + 384LL));
      if ( (unsigned int)v22 >= v18->max_length )
LABEL_29:
        sub_1B6432C(Instance, v25);
      Instance = (DataManager_o *)m_Items[v22];
      if ( !Instance )
        break;
      *(_DWORD *)(v24 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
      v29 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v27, v28);
      BattleLogicTask___ctor(v29, 0LL);
      if ( !v29 )
        break;
      BattleLogicTask__setActor(v29, 5, -1, 0LL);
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
      if ( !this->fields.data )
        break;
      v30 = (System_Int32_array *)Instance;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
      BattleLogicTask__setActionSkill(v29, (BattleSkillInfoData_o *)v24, v30, FieldPlayerServantIDList, 0, 0, 0LL);
      BattleLogicTask__setActor(v29, 5, -1, 0LL);
      if ( !v19 )
        break;
      items = v19->fields._items;
      v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v19->fields._version;
      if ( !items )
        break;
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)v29,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v29;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v29, v32, v33);
      }
      if ( (int)++v22 >= (signed int)v18->max_length )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v19,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1B64324(Instance);
  }
  if ( !v19 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v19,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v14; // x1
  __int64 v15; // x2
  BattleLogicTask_o *v16; // x23
  __int64 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_49FF00B & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_49FF00B = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&skillId,
                                                       *(_QWORD *)&skillLv);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v16 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v14, v15);
  BattleLogicTask___ctor(v16, 0LL);
  if ( !v16
    || (BattleLogicTask__setCommandSpell(v16, skillId, 0LL, ptTargetList, 0LL), !v13)
    || (items = v13->fields._items,
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
    sub_1B64324(v17);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v16,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
  }
  SkillTargetedBeforeFunctionSkill = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                                                                                      this,
                                                                                      v16,
                                                                                      ptTargetList,
                                                                                      0LL,
                                                                                      v24);
  System_Collections_Generic_List_object___InsertRange(
    v13,
    0,
    SkillTargetedBeforeFunctionSkill,
    (const MethodInfo_34AE758 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v34; // x1
  __int64 v35; // x2
  BattleLogicTask_o *v36; // x23
  __int64 data; // x0
  BattleServantData_o *v38; // x25
  System_Int32_array *v39; // x2
  int32_t svtUniqueId; // w1
  struct BattleData_o *v41; // x8
  int32_t globaltargetId; // w29
  BattleLogicTarget_o *v43; // x21
  int32_t v44; // w29
  const MethodInfo *v45; // x4
  __int64 v46; // x1
  BattleLogicTarget_o *logictarget; // x29
  int32_t v48; // w21
  int32_t TargetAiAct; // w21
  int32_t v50; // w1
  bool isPlayerID; // w0
  int32_t v52; // w2
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_object__o *v62; // x24
  __int64 v63; // x8
  __int64 v64; // x25
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  const MethodInfo *v68; // x4
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
  __int64 v86; // x1
  __int64 v87; // x2
  BattleLogicSkill___c_c *v88; // x0
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v90; // x21
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_Collections_Generic_IEnumerable_T__o *v94; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]
  const MethodInfo *v97; // [xsp+10h] [xbp-80h]

  if ( (byte_49FF00A & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_StableSort_BattleLogicTask___, skillInfo);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v17);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_BattleLogicTask___, v18);
    sub_1B640C8(&System_Func_BattleLogicTask__int__TypeInfo, v19);
    sub_1B640C8(&System_IDisposable_TypeInfo, v20);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v21);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v22);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_1B640C8(&int___TypeInfo, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v29);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v30);
    sub_1B640C8(&Method_BattleLogicSkill___c__taskSkill_b__5_0__, v31);
    sub_1B640C8(&BattleLogicSkill___c_TypeInfo, v32);
    byte_49FF00A = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       skillInfo,
                                                       ptTargetList);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v36 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v34, v35);
  BattleLogicTask___ctor(v36, 0LL);
  if ( !skillInfo )
    goto LABEL_94;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_94;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0LL);
  v38 = (BattleServantData_o *)data;
  if ( data )
  {
    data = BattleSkillInfoData__isServantSkill(skillInfo, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !v36 )
        goto LABEL_94;
      v36->fields.isCanCounterTask = isCanCounterSkill;
      v36->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  if ( enemyTargetList )
  {
    v39 = enemyTargetList;
    if ( !v36 )
      goto LABEL_94;
    goto LABEL_28;
  }
  svtUniqueId = skillInfo->fields.svtUniqueId;
  if ( svtUniqueId != -1 )
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
      v48 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !logictarget )
        goto LABEL_94;
      TargetAiAct = BattleLogicTarget__getTargetAiAct(
                      logictarget,
                      1,
                      v48,
                      0LL,
                      (System_Int32_array *)data,
                      1,
                      0,
                      0LL,
                      0LL,
                      (bool)&dword_0 + 1,
                      v97);
      data = sub_1B64170(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_94;
      v39 = (System_Int32_array *)data;
      if ( *(_DWORD *)(data + 24) )
      {
        *(_DWORD *)(data + 32) = TargetAiAct;
        enemyTargetList = 0LL;
        if ( !v36 )
          goto LABEL_94;
        goto LABEL_28;
      }
LABEL_96:
      sub_1B6432C(data, v46);
    }
  }
  v41 = this->fields.data;
  if ( !v41 )
    goto LABEL_94;
  globaltargetId = v41->fields.globaltargetId;
  if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0LL) )
  {
    v43 = this->fields.logictarget;
    v44 = skillInfo->fields.svtUniqueId;
    data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
    if ( !v43 )
      goto LABEL_94;
    globaltargetId = BattleLogicTarget__getGlobalTargetId(v43, v44, v44 == -1, (System_Int32_array *)data, v45);
    enemyTargetList = 0LL;
  }
  data = sub_1B64170(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_94;
  v39 = (System_Int32_array *)data;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_96;
  *(_DWORD *)(data + 32) = globaltargetId;
  if ( !v36 )
    goto LABEL_94;
LABEL_28:
  BattleLogicTask__setActionSkill(v36, skillInfo, v39, ptTargetList, checkAlive, checkRevengeId, 0LL);
  v50 = skillInfo->fields.svtUniqueId;
  if ( v50 == -1 )
  {
    v53 = 1;
    v52 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, v50, 0LL);
    v52 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v53 = 2;
    else
      v53 = 3;
  }
  BattleLogicTask__setActor(v36, v53, v52, 0LL);
  if ( !v33
    || (items = v33->fields._items,
        v57 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v33->fields._version,
        !items) )
  {
LABEL_94:
    sub_1B64324(data);
  }
  size = v33->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v36,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    if ( !v38 )
      goto LABEL_47;
  }
  else
  {
    v59 = &items->obj.klass + size;
    v33->fields._size = size + 1;
    v59[4] = (Il2CppClass *)v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v36, v54, v55);
    if ( !v38 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v33,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v62 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                           v60,
                                                           v61);
      System_Collections_Generic_List_object____ctor(
        v62,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v62 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v60,
                                                       v61);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v38, this->fields.data, 0LL);
  if ( !data )
    goto LABEL_94;
  v63 = *(_QWORD *)data;
  v64 = data;
  v65 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
  if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
  {
    v66 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v66 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_46;
    }
    v67 = v63 + 16LL * *v66 + 312;
  }
  else
  {
LABEL_46:
    v67 = sub_1BB60A8(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v69 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v64, *(_QWORD *)(v67 + 8));
  if ( !v69 )
    sub_1B64324(0LL);
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
      v73 = sub_1BB60A8(v69, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v77 = sub_1BB60A8(v69, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v78 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v69, *(_QWORD *)(v77 + 8));
    v79 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
    if ( !v78 )
      sub_1B64324(v79);
    if ( !v79 )
      sub_1B64324(0LL);
    if ( !v79->max_length )
      sub_1B6432C(v79, v80);
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
    if ( !v62 )
      sub_1B64324(v81);
    System_Collections_Generic_List_object___AddRange(
      v62,
      v81,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    v85 = sub_1BB60A8(v69, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v85)(v69, *(_QWORD *)(v85 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v62 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v33,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_81;
  }
  if ( !v62 )
    goto LABEL_48;
LABEL_79:
  data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(this, v36, ptTargetList, enemyTargetList, v68);
  if ( !v62 )
    goto LABEL_94;
  System_Collections_Generic_List_object___AddRange(
    v62,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v62,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
  {
    v88 = BattleLogicSkill___c_TypeInfo;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
      v88 = BattleLogicSkill___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__int__o *)v88->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v88->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v88);
        v88 = BattleLogicSkill___c_TypeInfo;
      }
      v90 = (Il2CppObject *)v88->static_fields->__9;
      _9__5_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleLogicTask__int__TypeInfo, v86, v87);
      System_Func_object__int____ctor(_9__5_0, v90, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v92, v93);
    }
    v94 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v62,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_2E292C0 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v33,
      0,
      v94,
      (const MethodInfo_34AE758 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v33,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF019 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicSkill___c_TypeInfo, v1);
    byte_49FF019 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleLogicSkill___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleLogicSkill___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1B64324(this);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0LL )
    sub_1B64324(this);
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

  if ( (byte_49FF01A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_49FF01A = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B64324(conditions);
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

  if ( (byte_49FF01B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    byte_49FF01B = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1B64324(conditions);
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
                                                                            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  v17 = sub_1B645E4(conditions);
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

  if ( (byte_49FF01C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_49FF01C = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B64324(conditions);
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

  if ( (byte_49FF01D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    byte_49FF01D = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1B64324(conditions);
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
                                                                            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  sub_1B645E4(conditions);
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
    sub_1B64324(0LL);
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
    sub_1B64324(this);
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
  if ( (byte_49FF01E & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1B640C8(&Method_System_Linq_Enumerable_Union_int___, current);
    byte_49FF01E = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)v6->fields.task) == 0LL )
    sub_1B64324(this);
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
                                                            (const MethodInfo_2E75428 *)Method_System_Linq_Enumerable_Union_int___);
}


BattleServantData_o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0LL )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0LL);
}