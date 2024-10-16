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
  BattleBuffData_BuffData_array *BuffList_42848000; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v15; // w24
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  BattleBuffData_BuffData_o *v18; // x23

  if ( (byte_4AB8A11 & 1) == 0 )
  {
    sub_1BAB41C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, actSkillInfo);
    byte_4AB8A11 = 1;
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
      v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BAB668(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43034880(v11, v10, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      BuffList_42848000 = BattleBuffData__getBuffList_42848000(buffData, 143, v11, 1, 0, 0LL, 0LL, 0LL);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_42848000, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_42848000 )
      {
        max_length = BuffList_42848000->max_length;
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
              sub_1BAB680(data, actSkillInfo);
            v17 = &BuffList_42848000->obj.klass + (int)v15;
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
            max_length = BuffList_42848000->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1BAB678(data, actSkillInfo);
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

  if ( (byte_4AB8A0D & 1) == 0 )
  {
    sub_1BAB41C(&Method_WeightRate_int___ctor__, rateArray);
    sub_1BAB41C(&Method_WeightRate_int__getData__, v4);
    sub_1BAB41C(&Method_WeightRate_int__getTotalWeight__, v5);
    sub_1BAB41C(&Method_WeightRate_int__setWeight__, v6);
    sub_1BAB41C(&WeightRate_int__TypeInfo, v7);
    byte_4AB8A0D = 1;
  }
  if ( !rateArray )
    return -1;
  v8 = (WeightRate_int__o *)sub_1BAB668(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v8, (const MethodInfo_392E568 *)Method_WeightRate_int___ctor__);
  v11 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1BAB680(v9, v10);
      if ( !v8 )
        break;
      WeightRate_int___setWeight(
        v8,
        rateArray->m_Items[v12 + 1],
        v12,
        (const MethodInfo_392DA84 *)Method_WeightRate_int__setWeight__);
      LODWORD(v11) = rateArray->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_12;
    }
LABEL_13:
    sub_1BAB678(v9, v10);
  }
  if ( !v8 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v8->fields.totalweight, 0LL);
  return WeightRate_int___getData(v8, Next, (const MethodInfo_392DEF8 *)Method_WeightRate_int__getData__);
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
  long double v47; // q0
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
  int32_t v60; // w3
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
  int32_t v71; // w3
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
  int32_t v102; // w3
  const MethodInfo *v104; // [xsp+8h] [xbp-68h]

  if ( (byte_4AB8A05 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_Empty_int___, task);
    sub_1BAB41C(&Method_BasicHelper_StableSort_BattleLogicTask___, v9);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____, v10);
    sub_1BAB41C(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___, v11);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___, v12);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v13);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Union_int___, v14);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Where_BattleServantData___, v15);
    sub_1BAB41C(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo, v16);
    sub_1BAB41C(&System_Func_BattleLogicTask__int__TypeInfo, v17);
    sub_1BAB41C(&System_Func_int__BattleServantData__TypeInfo, v18);
    sub_1BAB41C(&System_Func_BattleServantData__bool__TypeInfo, v19);
    sub_1BAB41C(&System_Func_DataVals__Target_TYPE__TypeInfo, v20);
    sub_1BAB41C(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo, v21);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v22);
    sub_1BAB41C(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v23);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v24);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v25);
    sub_1BAB41C(&int___TypeInfo, v26);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v27);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v28);
    sub_1BAB41C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v29);
    sub_1BAB41C(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__, v30);
    sub_1BAB41C(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__, v31);
    sub_1BAB41C(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__, v32);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__, v33);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__, v34);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__, v35);
    sub_1BAB41C(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo, v36);
    sub_1BAB41C(&BattleLogicSkill___c_TypeInfo, v37);
    byte_4AB8A05 = 1;
  }
  v38 = sub_1BAB668(BattleLogicSkill___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_75;
  *(_QWORD *)(v38 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v38 + 16), (int32_t)this, v41, v42);
  *(_QWORD *)(v38 + 24) = task;
  v43 = v38 + 24;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v38 + 24), (int32_t)task, v44, v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v48 = Method_System_Array_Empty_int___;
  v49 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v49 )
  {
    sub_1BFD354(Method_System_Array_Empty_int___);
    v49 = v48[7];
  }
  v50 = *(_QWORD *)(v49 + 16);
  if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
    v50 = sub_1BFD2F8(v47);
  if ( !*(_DWORD *)(v50 + 224) )
    *(__n128 *)&v47 = j_il2cpp_runtime_class_init_0(v50);
  v39 = *(__int64 **)(v48[7] + 16LL);
  if ( (*((_BYTE *)v39 + 309) & 1) == 0 )
    v39 = (__int64 *)sub_1BFD2F8(v47);
  v51 = (System_Collections_Generic_IEnumerable_TSource__o **)v39[23];
  v52 = *v51;
  if ( ptTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v51,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_2F00EC0 *)Method_System_Linq_Enumerable_Union_int___);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  }
  if ( enemyTargetArray )
  {
    v39 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v52,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_2F00EC0 *)Method_System_Linq_Enumerable_Union_int___);
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
      _9__7_0 = (System_Func_T__TResult__o *)sub_1BAB668(System_Func_DataVals__Target_TYPE__TypeInfo);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v57,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v59, v60);
    }
    v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                 v55,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2EF3D30 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v62 = (System_Func_T1__T2__TResult__o *)sub_1BAB668(System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo);
    System_Func_object__Int32Enum__object____ctor(
      v62,
      (Il2CppObject *)v38,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0LL);
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v61,
                                                                 (Il2CppObject *)v52,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v62,
                                                                 (const MethodInfo_2ECE1E8 *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v63 = (System_Func_T__TResult__o *)sub_1BAB668(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v63,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0LL);
  v64 = System_Linq_Enumerable__Select_int__object_(
          v52,
          (System_Func_TSource__TResult__o *)v63,
          (const MethodInfo_2EF1C44 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
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
    _9__7_3 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__7_3,
      v68,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0LL);
    v69 = BattleLogicSkill___c_TypeInfo->static_fields;
    v69->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v69->__9__7_3, (int32_t)_9__7_3, v70, v71);
  }
  v72 = System_Linq_Enumerable__Where_object_(
          v66,
          (System_Func_TSource__bool__o *)_9__7_3,
          (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v73 = (System_Func_object__object__o *)sub_1BAB668(System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo);
  System_Func_object__object____ctor(
    v73,
    (Il2CppObject *)v38,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0LL);
  v39 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v72,
                     (System_Func_TSource__IEnumerable_TResult___o *)v73,
                     (const MethodInfo_2EF76D8 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v39 )
LABEL_75:
    sub_1BAB678(v39, v40);
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
    v78 = sub_1BFD3FC(v39, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v80 = (*(__int64 (__fastcall **)(void *, _QWORD))v78)(v75, *(_QWORD *)(v78 + 8));
  if ( !v80 )
    sub_1BAB678(0LL, v79);
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
      v84 = sub_1BFD3FC(v80, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v88 = sub_1BFD3FC(v80, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v89 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v80, *(_QWORD *)(v88 + 8));
    v90 = (System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 1LL);
    if ( !v89 )
      sub_1BAB678(v90, v91);
    if ( !v90 )
      sub_1BAB678(0LL, v91);
    if ( !v90->max_length )
      sub_1BAB680(v90, v91);
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
      sub_1BAB678(v92, v92);
    System_Collections_Generic_List_object___AddRange(
      v46,
      v92,
      (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    v96 = sub_1BFD3FC(v80, System_IDisposable_TypeInfo, 0LL);
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
    _9__7_5 = (System_Func_object__int__o *)sub_1BAB668(System_Func_BattleLogicTask__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__7_5,
      v99,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0LL);
    v100 = BattleLogicSkill___c_TypeInfo->static_fields;
    v100->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v100->__9__7_5, (int32_t)_9__7_5, v101, v102);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v46,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_2EB4248 *)Method_BasicHelper_StableSort_BattleLogicTask___);
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

  if ( (byte_4AB8A0F & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_Any_int____76454352, actorIndividualities);
    sub_1BAB41C(&System_Func_int__bool__TypeInfo, v6);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass18_0__IsNotSkillCopyTargetIndividuality_b__0__, v7);
    sub_1BAB41C(&BattleLogicSkill___c__DisplayClass18_0_TypeInfo, v8);
    byte_4AB8A0F = 1;
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
          v12 = sub_1BAB668(BattleLogicSkill___c__DisplayClass18_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v12, 0LL);
          if ( v11 >= notSkillCopyTargetIndividualities->max_length )
            sub_1BAB680(IsNullOrEmpty, v10);
          if ( !v12 )
            break;
          *(_DWORD *)(v12 + 16) = notSkillCopyTargetIndividualities->m_Items[v11 + 1];
          v13 = (System_Func_int__bool__o *)sub_1BAB668(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v13,
            (Il2CppObject *)v12,
            Method_BattleLogicSkill___c__DisplayClass18_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0LL);
          v14 = BasicHelper__Any_int__48952508(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v13,
                  (const MethodInfo_2EAF4BC *)Method_BasicHelper_Any_int____76454352);
          if ( !v14 && (__int64)++v11 < (int)notSkillCopyTargetIndividualities->max_length )
            continue;
          return v14;
        }
LABEL_16:
        sub_1BAB678(IsNullOrEmpty, v10);
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
  if ( (byte_4AB8A07 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1BAB41C(&TempBattleSkillInfoData_TypeInfo, skillLvMst);
    byte_4AB8A07 = 1;
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
          v16 = (TempBattleSkillInfoData_o *)sub_1BAB668(TempBattleSkillInfoData_TypeInfo);
          TempBattleSkillInfoData___ctor(v16, v15, data_high, v11, 0LL);
          return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v16, actortype, isPlayerID, 0LL);
        }
      }
    }
LABEL_13:
    sub_1BAB678(this, skillLvMst);
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
  BattleData_o *IsQuestClear_37980612; // x0
  __int64 v19; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v24; // x22
  unsigned int v25; // w24
  AddSkillData_o *v26; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4AB8A10 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    sub_1BAB41C(&CondType_TypeInfo, v11);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v12);
    sub_1BAB41C(&DataManager_TypeInfo, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_DataVals__AddRange__, v15);
    byte_4AB8A10 = 1;
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
  IsQuestClear_37980612 = (BattleData_o *)CondType__IsQuestClear_37980612(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_37980612 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !targetIds->max_length )
      goto LABEL_30;
    IsQuestClear_37980612 = this->fields.data;
    if ( !IsQuestClear_37980612 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_37980612, targetIds->m_Items[1], 0LL);
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
    IsQuestClear_37980612 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v21->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1BAB678(IsQuestClear_37980612, v19);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v24 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_37980612;
      v25 = 0;
      while ( v25 < max_length )
      {
        v26 = classBoardAddCommandSpells->m_Items[v25];
        if ( !v26 || !v24 )
          goto LABEL_29;
        IsQuestClear_37980612 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v24,
                                                  &entity,
                                                  v26->fields.id,
                                                  commandSpellId,
                                                  v26->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_37980612 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_3530AA4 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_37980612 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_37980612 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_37980612,
            (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v25 >= max_length )
          return;
      }
LABEL_30:
      sub_1BAB680(IsQuestClear_37980612, v19);
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
  if ( (byte_4AB8A0E & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_Any_int____76454352, skillLvEnt);
    sub_1BAB41C(&Method_DataManager_GetMasterData_FunctionMaster___, v13);
    sub_1BAB41C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v14);
    sub_1BAB41C(&System_Func_int__bool__TypeInfo, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_DataVals__Add__, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_1BAB41C(&Method_System_Collections_Generic_List_DataVals__ToArray__, v19);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1BAB41C(&Method_System_Collections_Generic_List_DataVals___ctor__, v21);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1BAB41C(&System_Collections_Generic_List_DataVals__TypeInfo, v23);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__0__, v25);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__1__, v26);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__2__, v27);
    this = (BattleLogicSkill_o *)sub_1BAB41C(&BattleLogicSkill___c__DisplayClass17_0_TypeInfo, v28);
    byte_4AB8A0E = 1;
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
  v65 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  v64 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v34 = 0LL;
  while ( (__int64)v34 < (int)funcId->max_length )
  {
    v35 = sub_1BAB668(BattleLogicSkill___c__DisplayClass17_0_TypeInfo);
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
      || (v39 = (System_Func_int__bool__o *)sub_1BAB668(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v39,
            (Il2CppObject *)v35,
            Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__0__,
            0LL),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__48952508(
                                         (System_Int32_array *)v30,
                                         (System_Func_T__bool__o *)v39,
                                         (const MethodInfo_2EAF4BC *)Method_BasicHelper_Any_int____76454352),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v35 + 24) = 0LL;
      v40 = v35 + 24;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v35 + 24), 0, v37, v38);
      if ( !v33 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v33,
                                     (Il2CppObject **)(v35 + 24),
                                     *(_DWORD *)(v35 + 16),
                                     (const MethodInfo_3163DE4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                  || (v41 = (System_Func_int__bool__o *)sub_1BAB668(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v41,
                        (Il2CppObject *)v35,
                        Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__1__,
                        0LL),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__48952508(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v41,
                                                     (const MethodInfo_2EAF4BC *)Method_BasicHelper_Any_int____76454352),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v34 >= SetTypeDataValArray->max_length )
LABEL_57:
                    sub_1BAB680(this, skillLvEnt);
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
                      || (v44 = (System_Func_int__bool__o *)sub_1BAB668(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v44,
                            (Il2CppObject *)v35,
                            Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__2__,
                            0LL),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__48952508(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v44,
                                                         (const MethodInfo_2EAF4BC *)Method_BasicHelper_Any_int____76454352),
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
                          *(const MethodInfo_3530898 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
                          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v53 = &v50->obj.klass + v52;
                        v64->fields._size = v52 + 1;
                        v53[4] = (Il2CppClass *)skillLvEnt;
                        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)skillLvEnt, v48, v49);
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
                (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__),
        v63->klass = (ServantStatusBattleListViewItem_c *)v54,
        sub_1BAB3C0(v63, (int32_t)v54, v55, v56),
        (this = (BattleLogicSkill_o *)v64) == 0LL)
    || (v57 = System_Collections_Generic_List_object___ToArray(
                v64,
                (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v57,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)dataValsArray, (int32_t)v57, v58, v59),
        !v63->klass) )
  {
LABEL_52:
    sub_1BAB678(this, skillLvEnt);
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
  int32_t v53; // w3
  bool v54; // [xsp+3Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v10 = this;
  if ( (byte_4AB8A08 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_BattleServantData__TypeInfo, skillInfo);
    sub_1BAB41C(&BattleActionData_TypeInfo, v11);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillMaster___, v13);
    sub_1BAB41C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1BAB41C(&BattleLogicFunction_FunctionArgument_TypeInfo, v15);
    sub_1BAB41C(&Individuality_TypeInfo, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Clear__, v17);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BAB41C(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__, v20);
    this = (BattleLogicSkill_o *)sub_1BAB41C(&BattleLogicSkill___c_TypeInfo, v21);
    byte_4AB8A08 = 1;
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
  v26 = (BattleActionData_o *)sub_1BAB668(BattleActionData_TypeInfo);
  BattleActionData___ctor(v26, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_45;
  v54 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  v28 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v25,
             (const MethodInfo_3163D90 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v30 = (SkillEntity_o *)Entity;
  if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
    return;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v55, 0LL);
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
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BAB668(BattleLogicFunction_FunctionArgument_TypeInfo);
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
                  master = (struct FunctionMaster_o *)sub_1BAB668(System_Action_BattleServantData__TypeInfo);
                  System_Action_object____ctor(
                    (System_Action_object__o *)master,
                    klass,
                    Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                    0LL);
                  static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                  static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)master, v52, v53);
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
      sub_1BAB678(this, skillInfo);
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

  if ( (byte_4AB8A0A & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7);
    sub_1BAB41C(&System_Func_string__int__bool__TypeInfo, v8);
    sub_1BAB41C(&System_Func_string__double__bool__TypeInfo, v9);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__0__, v12);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__1__, v13);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__2__, v14);
    sub_1BAB41C(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__3__, v15);
    sub_1BAB41C(&BattleLogicSkill___c__DisplayClass13_0_TypeInfo, v16);
    sub_1BAB41C(&StringLiteral_2983/*"BATTLE_SKILLERROR_NP_LOWER"*/, v17);
    sub_1BAB41C(&StringLiteral_2981/*"BATTLE_SKILLERROR_HP_LOWER"*/, v18);
    sub_1BAB41C(&StringLiteral_12283/*"STAR_HIGHER"*/, v19);
    sub_1BAB41C(&StringLiteral_7161/*"HP_PER_LOWER"*/, v20);
    sub_1BAB41C(&StringLiteral_2982/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v21);
    sub_1BAB41C(&StringLiteral_2980/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v22);
    sub_1BAB41C(&StringLiteral_7160/*"HP_PER_HIGHER"*/, v23);
    sub_1BAB41C(&StringLiteral_2984/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v24);
    sub_1BAB41C(&StringLiteral_9331/*"NP_HIGHER"*/, v25);
    sub_1BAB41C(&StringLiteral_2985/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v26);
    sub_1BAB41C(&StringLiteral_7162/*"HP_VAL_HIGHER"*/, v27);
    sub_1BAB41C(&StringLiteral_12284/*"STAR_LOWER"*/, v28);
    sub_1BAB41C(&StringLiteral_1/*""*/, v29);
    sub_1BAB41C(&StringLiteral_9332/*"NP_LOWER"*/, v30);
    sub_1BAB41C(&StringLiteral_7163/*"HP_VAL_LOWER"*/, v31);
    byte_4AB8A0A = 1;
  }
  v32 = sub_1BAB668(BattleLogicSkill___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)text, (int32_t)StringLiteral_1/*""*/, v33, v34);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v32 + 16), v40, v38, v39);
  v41 = *(System_Collections_Generic_Dictionary_object__object__o **)(v32 + 16);
  if ( !v41 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v41,
         (const MethodInfo_321321C *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v42 = sub_1BAB668(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v42,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__0__,
    0LL);
  v43 = sub_1BAB668(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v43,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__1__,
    0LL);
  v44 = sub_1BAB668(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v44,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__2__,
    0LL);
  v45 = sub_1BAB668(System_Func_string__double__bool__TypeInfo);
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
          StringLiteral_9331/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v42 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2982/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v46, 0LL);
  if ( !v43 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
               *(_QWORD *)(v43 + 64),
               StringLiteral_9332/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v43 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2983/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
               *(_QWORD *)(v42 + 64),
               StringLiteral_12283/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v42 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2984/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v48 = this->fields.data;
  if ( !v48 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_12284/*"STAR_LOWER"*/,
          (unsigned int)v48->fields.totalCriticalStars,
          *(_QWORD *)(v43 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2985/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v46, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
          *(_QWORD *)(v42 + 64),
          StringLiteral_7162/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v42 + 40)) & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2980/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v50 = BattleServantData__getNowHp(v46, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_7163/*"HP_VAL_LOWER"*/,
          v50,
          *(_QWORD *)(v43 + 40)) & 1) != 0 )
  {
    v51 = BattleServantData__getNowHp(v46, 0LL);
    Instance = BattleServantData__getMaxHp(v46, 0LL);
    if ( !v44 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v44 + 24))(
            *(_QWORD *)(v44 + 64),
            StringLiteral_7160/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v44 + 40),
            (double)v51 * 1000.0 / (double)(int)Instance) & 1) != 0 )
    {
      v52 = BattleServantData__getNowHp(v46, 0LL);
      Instance = BattleServantData__getMaxHp(v46, 0LL);
      if ( v45 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v45 + 24))(
                *(_QWORD *)(v45 + 64),
                StringLiteral_7161/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v45 + 40),
                (double)v52 * 1000.0 / (double)(int)Instance) & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1BAB678(Instance, v36);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = &StringLiteral_2981/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v55 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
  *text = v55;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)text, (int32_t)v55, v56, v57);
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

  if ( (byte_4AB8A09 & 1) == 0 )
  {
    sub_1BAB41C(&BattleActionData_TypeInfo, task);
    sub_1BAB41C(&BattleActionLogManagerInterface_TypeInfo, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v6);
    sub_1BAB41C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_DataVals__AddRange__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_DataVals__ToArray__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_DataVals___ctor__, v13);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1BAB41C(&System_Collections_Generic_List_DataVals__TypeInfo, v15);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4AB8A09 = 1;
  }
  v17 = sub_1BAB668(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v17, 0LL);
  if ( !task )
    goto LABEL_29;
  skillInfo = task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_29;
  skillId = (DataManager_o *)DataManager__GetMasterData_object_(
                               skillId,
                               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
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
                               (const MethodInfo_3163D90 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)ptTarget, v23, v24);
  *(_QWORD *)(v17 + 144) = skillInfo;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 144), (int32_t)skillInfo, v27, v28);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_29;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v29 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v29 )
    goto LABEL_29;
  System_Collections_Generic_List_int___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)v22->fields.lookup,
    (const MethodInfo_3530AA4 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v22, 0LL);
  if ( !v30 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
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
          (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
  v34 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
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
    p_method = sub_1BFD3FC(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
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
    sub_1BAB678(skillId, v19);
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
  v5 = BattleLogicSkill__createSkillData_44016132(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_1BAB678(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_44016132(
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
  BattleData_o *skillId; // x0
  BattleLogicSkill_Fields *p_fields; // x19
  BattleActionData_o *v28; // x22
  BattleActionData_o *v29; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  BattleBoostItemInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x22
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *v35; // x24
  BattleActionData_c *v36; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 methodPtr_low; // x10
  BattleData_o *data; // x26
  BattleData_o *v40; // x26
  SkillEntity_o *v41; // x23
  bool isForcedSkillSpeedOne; // w26
  bool v43; // w27
  BattleLogicSkill_o *v44; // x22
  BattleData_o *v45; // x29
  BattleServantData_o *EnemyServantData; // x0
  __int64 v47; // x28
  __int64 v48; // x29
  BattleData_o *v49; // x29
  struct System_Int32_array *ptTarget; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *Name; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  BattleLogicSkill_o *v60; // x29
  System_String_array *v61; // x26
  System_Object_array *v62; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  ServantStatusBattleListViewItem_o *p_motionMessage; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  struct System_Int32_array *effectList; // x1
  int m_CancellationTokenSource; // w8
  DataVals_array *v70; // x26
  int i; // w9
  __int64 v72; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  bool v76; // w23
  int32_t ActorId; // w0
  const MethodInfo *v78; // x6
  bool v79; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  BattleLogicFunction_o *v83; // x29
  System_Int32_array *v84; // x27
  DataVals_array *v85; // x28
  int32_t v86; // w0
  UnityEngine_Object_o *battle_ent; // x28
  int32_t v88; // w27
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v95; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x1
  int32_t v101; // w1
  int32_t v102; // w2
  int32_t v103; // w3
  struct BattleCommandData_array **p_boostSkillInfo; // x27
  int32_t v105; // w2
  int32_t v106; // w3
  struct BattleCommandData_array *v107; // x1
  int32_t v108; // w1
  int32_t v109; // w2
  int32_t v110; // w3
  int32_t type; // w23
  BattleData_o *v112; // x25
  int v113; // w8
  BattleData_o *v114; // x25
  BattleData_o *v115; // x25
  BattleData_o *v116; // x27
  int32_t v117; // w28
  const MethodInfo *v118; // x5
  BattleLogic_o *v119; // x27
  BattleLogicTask_array *v120; // x0
  BattleData_o *v121; // x25
  const MethodInfo *v122; // x4
  int32_t v123; // w27
  BattleLogic_o *v124; // x25
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v126; // x23
  BattleData_o *v127; // x23
  BattleLogicTask_o *v128; // x23
  int32_t v129; // w2
  int32_t v130; // w3
  struct BattleLogic_o *v131; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattlePerformance_o *v134; // x8
  int32_t v135; // w2
  int32_t v136; // w3
  BattleLogicTask_o *v137; // x22
  int32_t v138; // w0
  const MethodInfo *v139; // x3
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-88h]
  DataVals_o *v142; // [xsp+40h] [xbp-80h]
  SkillEntity_o *Entity; // [xsp+48h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16

  if ( (byte_4AB8A06 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_IndexValue_int___, task);
    sub_1BAB41C(&BattleActionData_TypeInfo, v11);
    sub_1BAB41C(&BattleActionLogManagerInterface_TypeInfo, v12);
    sub_1BAB41C(&BattleBoostItemInfoData_TypeInfo, v13);
    sub_1BAB41C(&BattleLogicTask_TypeInfo, v14);
    sub_1BAB41C(&CheckUpdateShiftTask_TypeInfo, v15);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1BAB41C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1BAB41C(&BattleLogicFunction_FunctionArgument_TypeInfo, v19);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v21);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1BAB41C(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v24);
    sub_1BAB41C(&StringLiteral_1/*""*/, v25);
    byte_4AB8A06 = 1;
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
  v28 = (BattleActionData_o *)sub_1BAB668(BattleActionData_TypeInfo);
  BattleActionData___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_162;
  v29 = BattleActionData__AddDisplayTriggerIntervalBuff(v28, task, 0LL);
  *baseActionData = v29;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)baseActionData, (int32_t)v29, v30, v31);
  if ( !task )
    goto LABEL_162;
  if ( !v29 )
    goto LABEL_162;
  v29->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  skillId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_162;
  skillId = (BattleData_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)skillId,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_162;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                              skillInfo,
                              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v33 )
    goto LABEL_162;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v33,
                              (int32_t)skillId,
                              (const MethodInfo_3163D90 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_162;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillId,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v35 = (SkillLvEntity_o *)skillId;
  v29->fields.isCounter = task->fields.isCounter;
  v36 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v36 = BattleActionData_TypeInfo;
  }
  static_fields = v36->static_fields;
  v29->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleActionData_TypeInfo->static_fields;
    }
    v29->fields.type = static_fields->TYPE_BOOSTSKILL;
    v29->fields.imageId = skillInfo->fields.itemImageId;
    methodPtr_low = LOBYTE(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      skillId = (BattleData_o *)BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( ((unsigned __int8)skillId & 1) != 0 )
        v29->fields.noOperation = 1;
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
        v40 = 0LL,
        ((unsigned __int8)skillId & 1) != 0) )
  {
LABEL_26:
    v142 = baseVals;
    if ( task->fields.isForcedSpeedOne )
    {
      v41 = Entity;
      isForcedSkillSpeedOne = 1;
    }
    else
    {
      v41 = Entity;
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
    v43 = fromSkillCopyFunc;
    v44 = this;
    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
    v29->fields.actorId = (int)skillId;
    if ( !v35 )
      goto LABEL_162;
    v45 = p_fields->data;
    skillId = (BattleData_o *)SkillLvEntity__GetActNpcServantId(v35, 0LL);
    if ( !v45 )
      goto LABEL_162;
    EnemyServantData = BattleData__getEnemyServantData(v45, (int32_t)skillId, 0LL);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v47 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v48 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v146.fields.currentCryptoKey = v47;
      *(_QWORD *)&v146.fields.fakeValue = v48;
      v29->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v146, 0LL);
    }
    v49 = p_fields->data;
    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v49 )
      goto LABEL_162;
    skillId = (BattleData_o *)BattleData__getServantId(v49, (int32_t)skillId, 0LL);
    if ( !v41 )
      goto LABEL_162;
    v29->fields.motionId = SkillEntity__GetMotionId(v41, (int32_t)skillId, 0LL);
    v29->fields.targetId = BattleLogicTask__getTarget(task, 0LL);
    ptTarget = task->fields.ptTarget;
    v29->fields.pttargetIds = ptTarget;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v29->fields.pttargetIds, (int32_t)ptTarget, v51, v52);
    Name = SkillEntity__getName(v41, 0LL);
    v29->fields.skillMessage = Name;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v29->fields.skillMessage, (int32_t)Name, v54, v55);
    v29->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v29->fields.skillInfo, (int32_t)skillInfo, v56, v57);
    v29->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
    v29->fields.checkRevengeId = task->fields.checkRevengeId;
    v60 = v44;
    if ( BattleLogicTask__IsGimmick(task, 0LL) )
    {
      skillId = p_fields->data;
      if ( !p_fields->data )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleData__GetGimmickStartVoiceArray(skillId, 0LL);
      if ( !p_fields->data )
        goto LABEL_162;
      v61 = (System_String_array *)skillId;
      skillId = (BattleData_o *)BattleData__GetGimmickResultVoiceArray(p_fields->data, 0LL);
      if ( !p_fields->data )
        goto LABEL_162;
      v62 = (System_Object_array *)skillId;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(p_fields->data, 0LL);
      BattleActionData__SetGimmickData(v29, task->fields.gimmickIndexArray, v61, v62, GimmickAnimTypeArray, 0LL);
      v60 = v44;
    }
    motionMessage = task->fields.motionMessage;
    if ( motionMessage && motionMessage->fields._stringLength >= 1 )
    {
      v29->fields.motionMessage = motionMessage;
      p_motionMessage = (ServantStatusBattleListViewItem_o *)&v29->fields.motionMessage;
    }
    else
    {
      v29->fields.motionMessage = 0LL;
      p_motionMessage = (ServantStatusBattleListViewItem_o *)&v29->fields.motionMessage;
      LODWORD(motionMessage) = 0;
    }
    sub_1BAB3C0(p_motionMessage, (int32_t)motionMessage, v58, v59);
    if ( (task->fields.actortype | 4) == 5 )
      BattleActionData__setStateField(v29, 0LL);
    effectList = v41->fields.effectList;
    v29->fields.effectlist = effectList;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v29->fields.effectlist, (int32_t)effectList, v66, v67);
    skillId = (BattleData_o *)v60->fields.logic;
    if ( !skillId )
      goto LABEL_162;
    BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
    if ( skillInfo->fields.type == 21 )
    {
      skillId = (BattleData_o *)SkillLvEntity__getDataValsList(v35, 0LL);
      if ( !skillId )
        goto LABEL_162;
      m_CancellationTokenSource = (int)skillId->fields.m_CancellationTokenSource;
      v70 = (DataVals_array *)skillId;
      if ( m_CancellationTokenSource >= 1 )
      {
        for ( i = 0; i != m_CancellationTokenSource; ++i )
        {
          if ( m_CancellationTokenSource == i )
            sub_1BAB680(skillId, task);
          v72 = *((_QWORD *)&skillId->fields.rootfsm + i);
          if ( !v72 )
            goto LABEL_162;
          *(_BYTE *)(v72 + 72) = 1;
        }
      }
      logicfunction = v60->fields.logicfunction;
      funcId = v35->fields.funcId;
      skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !logicfunction )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleLogicFunction__procList(
                                  logicfunction,
                                  v29,
                                  funcId,
                                  v70,
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
      v40 = skillId;
      goto LABEL_88;
    }
    changeTDCommandType = skillInfo->fields.changeTDCommandType;
    if ( (changeTDCommandType & 0x80000000) == 0 )
      v29->fields.commandType = changeTDCommandType;
    functionIdArray = v35->fields.funcId;
    dataValsArray = SkillLvEntity__getDataValsList(v35, 0LL);
    v76 = v142 == 0LL || !v43;
    if ( v142 != 0LL && v43 )
    {
      ActorId = BattleLogicTask__getActorId(task, 0LL);
      v40 = 0LL;
      if ( !BattleLogicSkill__SetSkillCopyFunction(v60, v35, v142, &functionIdArray, &dataValsArray, ActorId, v78) )
        return (BattleActionData_o *)v40;
      skillId = p_fields->data;
      if ( !p_fields->data )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleData__isEnemyID(skillId, v29->fields.actorId, 0LL);
      if ( ((unsigned __int8)skillId & 1) != 0 )
      {
        if ( !p_fields->data )
          goto LABEL_162;
        v79 = p_fields->data->fields.currentTurn == 0;
      }
      else
      {
        v79 = 0;
      }
      v29->fields.isReversalShortBuffTurn = v79;
    }
    if ( skillInfo->fields.type == 1 )
    {
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BAB668(BattleLogicFunction_FunctionArgument_TypeInfo);
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
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BAB668(BattleLogicFunction_FunctionArgument_TypeInfo);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( !argument )
          goto LABEL_162;
        goto LABEL_85;
      }
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BAB668(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
    }
    overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1BAB668(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
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
      v83 = v60->fields.logicfunction;
      v85 = dataValsArray;
      v84 = functionIdArray;
      skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v83 )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleLogicFunction__procList(
                                  v83,
                                  v29,
                                  v84,
                                  v85,
                                  0,
                                  1,
                                  0,
                                  0,
                                  0,
                                  v76,
                                  1,
                                  argument,
                                  (int32_t)skillId,
                                  0LL);
      v40 = skillId;
      v60 = v44;
LABEL_88:
      if ( task->fields.actortype == 5 )
      {
        if ( !v40 )
          goto LABEL_162;
        v86 = BasicHelper__IndexValue_int__48967776(
                *(System_Collections_Generic_List_T__o **)&v40->fields.maxEnemyIndex,
                0,
                0,
                (const MethodInfo_2EB3060 *)Method_BasicHelper_IndexValue_int___);
        battle_ent = (UnityEngine_Object_o *)v40->fields.battle_ent;
        v88 = v86;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillId = (BattleData_o *)UnityEngine_Object__op_Equality(battle_ent, 0LL, 0LL);
        if ( v88 >= 1 && ((unsigned __int8)skillId & 1) != 0 )
        {
          logic = v60->fields.logic;
          if ( !logic )
            goto LABEL_162;
          skillId = (BattleData_o *)logic->fields.perf;
          if ( !skillId )
            goto LABEL_162;
          ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)skillId, v88, 0LL);
          v40->fields.battle_ent = (struct BattleEntity_o *)ServantGameObject;
          sub_1BAB3C0(
            (ServantStatusBattleListViewItem_o *)&v40->fields.battle_ent,
            (int32_t)ServantGameObject,
            v91,
            v92);
        }
      }
      ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
        skillInfo,
        skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
      BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
      skillId = (BattleData_o *)v60->fields.logic;
      if ( skillId )
      {
        BattleLogic__updateConditionsBuffAll((BattleLogic_o *)skillId, 0LL);
        if ( v40 )
        {
          BYTE4(v40->fields.quest_ent) = 0;
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
                v95 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
                {
                  p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
                  while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
                  {
                    --v95;
                    p_offset += 2;
                    if ( !v95 )
                      goto LABEL_106;
                  }
                  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
                }
                else
                {
LABEL_106:
                  p_method = sub_1BFD3FC(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL);
                }
                (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
                  actionLogManager,
                  task,
                  *(_QWORD *)(p_method + 8));
                if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v40, 0LL) )
                {
                  masterSkillInfo = v40->fields.masterSkillInfo;
                  v40->fields.draw_commandlist = (struct BattleCommandData_array *)masterSkillInfo;
                  sub_1BAB3C0(
                    (ServantStatusBattleListViewItem_o *)&v40->fields.draw_commandlist,
                    (int32_t)masterSkillInfo,
                    v98,
                    v99);
                  v101 = (int)StringLiteral_1/*""*/;
                  v40->fields.masterSkillInfo = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)StringLiteral_1/*""*/;
                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v40->fields.masterSkillInfo, v101, v102, v103);
                  p_boostSkillInfo = (struct BattleCommandData_array **)&v40->fields.boostSkillInfo;
                  if ( !System_String__IsNullOrEmpty((System_String_o *)v40->fields.boostSkillInfo, 0LL) )
                  {
                    v107 = *p_boostSkillInfo;
                    v40->fields.draw_commandlist = *p_boostSkillInfo;
                    sub_1BAB3C0(
                      (ServantStatusBattleListViewItem_o *)&v40->fields.draw_commandlist,
                      (int32_t)v107,
                      v105,
                      v106);
                    v108 = (int)StringLiteral_1/*""*/;
                    *p_boostSkillInfo = (struct BattleCommandData_array *)StringLiteral_1/*""*/;
                    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v40->fields.boostSkillInfo, v108, v109, v110);
                  }
                }
                type = skillInfo->fields.type;
                v112 = p_fields->data;
                skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
                if ( v112 )
                {
                  skillId = (BattleData_o *)BattleData__getServantData(v112, (int32_t)skillId, 0LL);
                  if ( type == 1 || skillId )
                  {
                    skillId = (BattleData_o *)SkillLvEntity__IsNoTargetSkipSkill(v35, 0LL);
                    v113 = (unsigned __int8)skillId & 1;
                  }
                  else
                  {
                    v113 = 1;
                  }
                  if ( (v113 & !v40->fields.turnElapsedEndBattleFlag) != 0
                    || BYTE1(v40->fields.p_entryid) && !BYTE2(v40->fields.p_entryid) )
                  {
                    return 0LL;
                  }
                  if ( task->fields.isCanCounterTask )
                  {
                    v114 = p_fields->data;
                    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
                    if ( !v114 )
                      goto LABEL_162;
                    skillId = (BattleData_o *)BattleData__getServantData(v114, (int32_t)skillId, 0LL);
                    if ( skillId )
                    {
                      v115 = skillId;
                      (*(void (__fastcall **)(BattleData_o *, struct BattleData_o *, void *))&v40->klass[1]._1.byval_arg.bits)(
                        v40,
                        p_fields->data,
                        v40->klass[1]._1.this_arg.data);
                      skillId = *(BattleData_o **)&v40->fields.maxEnemyIndex;
                      if ( !skillId )
                        goto LABEL_162;
                      v116 = p_fields->data;
                      v117 = (int32_t)v115->fields.m_CancellationTokenSource;
                      skillId = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                                  (System_Collections_Generic_List_int__o *)skillId,
                                                  (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
                      if ( !v116 )
                        goto LABEL_162;
                      BattleData__SetWasAttackTargetIdList(v116, v117, (System_Int32_array *)skillId, 0LL);
                      v119 = v60->fields.logic;
                      if ( !v119 )
                        goto LABEL_162;
                      skillId = (BattleData_o *)v119->fields.logicnomal;
                      if ( !skillId )
                        goto LABEL_162;
                      v120 = BattleLogicNomal__taskCounterFunc(
                               (BattleLogicNomal_o *)skillId,
                               p_fields->data,
                               HIBYTE(v115->fields.fixedCommands) == 0,
                               1,
                               0,
                               v118);
                      BattleLogic__addBattleLogicTask(v119, v120, 0LL);
                    }
                  }
                  v121 = p_fields->data;
                  if ( task->fields.isFunctionedFunction )
                  {
                    if ( !v121 )
                      goto LABEL_162;
                    BattleData__ResetFunctionedFunctionIds(p_fields->data, 0LL);
                  }
                  else
                  {
                    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
                    if ( !*(_QWORD *)&v40->fields.maxEnemyIndex )
                      goto LABEL_162;
                    v123 = (int)skillId;
                    skillId = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                                *(System_Collections_Generic_List_int__o **)&v40->fields.maxEnemyIndex,
                                                (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
                    if ( !v121 )
                      goto LABEL_162;
                    BattleData__SetFunctionedTargetIdArray(v121, v123, (System_Int32_array *)skillId, 0LL);
                    v124 = v60->fields.logic;
                    if ( !v124 )
                      goto LABEL_162;
                    FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                                        v60->fields.logic,
                                                        p_fields->data,
                                                        0LL);
                    BattleLogic__addBattleLogicTask(v124, FunctionedFunctionBuffTaskArray, 0LL);
                  }
                  v126 = BattleLogicSkill__MakeAddInvokeSkillTask(v60, skillLvMst, v35, task, v122);
                  skillId = (BattleData_o *)SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v35, 0LL);
                  if ( v60->fields.logic )
                  {
                    if ( ((unsigned __int8)skillId & 1) != 0 )
                      BattleLogic__AddTaskTargetTaskAfter(v60->fields.logic, task, v126, 0LL);
                    else
                      BattleLogic__AddBattleLogicTask(v60->fields.logic, v126, 0LL);
                    v127 = p_fields->data;
                    skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                skillInfo,
                                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
                    if ( v127 )
                    {
                      BattleData__AddUseSkillId(v127, (int32_t)skillId, 0LL);
                      if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v40, 0LL) )
                      {
                        v128 = (BattleLogicTask_o *)sub_1BAB668(BattleLogicTask_TypeInfo);
                        BattleLogicTask___ctor(v128, 0LL);
                        if ( !v128 )
                          goto LABEL_162;
                        BattleLogicTask__setCheckEntryFunction(v128, 0LL);
                        skillId = (BattleData_o *)v60->fields.logic;
                        if ( !skillId )
                          goto LABEL_162;
                        BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, v128, 0LL);
                      }
                      if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0 )
                      {
                        skillId = (BattleData_o *)SkillEntity__getSkillCutInId(Entity, 0LL);
                        if ( !(_DWORD)skillId )
                        {
                          v131 = v60->fields.logic;
                          if ( !v131 )
                            goto LABEL_162;
                          perf = v131->fields.perf;
                          CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
                          if ( !perf )
                            goto LABEL_162;
                          BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
                          if ( v40->fields.masterSkillInfo )
                          {
                            if ( !p_fields->data )
                              goto LABEL_162;
                            v134 = p_fields->data->fields.perf;
                            if ( !v134 )
                              goto LABEL_162;
                            skillId = (BattleData_o *)v134->fields.infoComp;
                            if ( !skillId )
                              goto LABEL_162;
                            BattleInformationComponent__showCommonMessage(
                              (BattleInformationComponent_o *)skillId,
                              (BattleActionData_o *)v40,
                              0LL);
                            v40->fields.masterSkillInfo = 0LL;
                            sub_1BAB3C0(
                              (ServantStatusBattleListViewItem_o *)&v40->fields.masterSkillInfo,
                              0,
                              v135,
                              v136);
                            BYTE4(v40->fields.e_entryid) = 1;
                          }
                        }
                      }
                      if ( task->fields.IsNotShowSkillMessage )
                      {
                        v40->fields.masterSkillInfo = 0LL;
                        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v40->fields.masterSkillInfo, 0, v129, v130);
                        BYTE4(v40->fields.e_entryid) = 1;
                      }
                      if ( SkillEntity__IsCheckUpdateShiftServant(Entity, 0LL) )
                      {
                        v137 = (BattleLogicTask_o *)sub_1BAB668(CheckUpdateShiftTask_TypeInfo);
                        BattleLogicTask___ctor(v137, 0LL);
                        v137->fields.actiontype = 68;
                        skillId = (BattleData_o *)v60->fields.logic;
                        if ( !skillId )
                          goto LABEL_162;
                        BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)skillId, task, v137, 0LL);
                      }
                      v138 = BattleLogicTask__getActorId(task, 0LL);
                      BattleLogicSkill__ExecuteShortenSkillBuff(v60, (BattleSkillInfoData_o *)skillInfo, v138, v139);
                      return (BattleActionData_o *)v40;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_162:
      sub_1BAB678(skillId, task);
    }
LABEL_85:
    argument->fields.isShowBattlePointEffect = *p_isShowBattlePointEffect;
    goto LABEL_86;
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

  if ( (byte_4AB8A0C & 1) == 0 )
  {
    sub_1BAB41C(&BattleLogicTask___TypeInfo, method);
    sub_1BAB41C(&BattleLogicTask_TypeInfo, v3);
    sub_1BAB41C(&BattleSkillInfoData_TypeInfo, v4);
    sub_1BAB41C(&int___TypeInfo, v5);
    byte_4AB8A0C = 1;
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
  v12 = sub_1BAB668(BattleSkillInfoData_TypeInfo);
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
  v13 = sub_1BAB668(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, 0LL);
  data = (BattleData_o *)sub_1BAB4C4(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v11;
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 136) = data;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v13 + 136), (int32_t)data, v14, v15);
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
        (data = (BattleData_o *)sub_1BAB4C4(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1BAB678(data, method);
  }
  v19 = data;
  data = (BattleData_o *)sub_1BAB558(v13, data->klass->_1.element_class);
  if ( !data )
  {
    v23 = sub_1BAB69C(0LL);
    sub_1BAB544(v23, 0LL);
  }
  if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1BAB680(data, method);
  v19->fields.rootfsm = (struct PlayMakerFSM_o *)v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v19->fields.rootfsm, v13, v20, v21);
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

  if ( (byte_4AB8A0B & 1) == 0 )
  {
    sub_1BAB41C(&BattleLogicTask_TypeInfo, method);
    sub_1BAB41C(&BattleSkillInfoData_TypeInfo, v3);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AB8A0B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
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
  v18 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( (int)v17->max_length >= 1 )
  {
    v19 = 0LL;
    m_Items = v17->m_Items;
    while ( 1 )
    {
      v21 = sub_1BAB668(BattleSkillInfoData_TypeInfo);
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
        sub_1BAB680(Instance, v11);
      Instance = (DataManager_o *)m_Items[v19];
      if ( !Instance )
        break;
      *(_DWORD *)(v21 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
      v23 = (BattleLogicTask_o *)sub_1BAB668(BattleLogicTask_TypeInfo);
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
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v23;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v23, v26, v27);
      }
      if ( (int)++v19 >= (signed int)v17->max_length )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v18,
                                          (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1BAB678(Instance, v11);
  }
  if ( !v18 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4AB8A04 & 1) == 0 )
  {
    sub_1BAB41C(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1BAB41C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_4AB8A04 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = (BattleLogicTask_o *)sub_1BAB668(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v14, 0LL);
  if ( !v14
    || (BattleLogicTask__setCommandSpell(v14, skillId, 0LL, ptTargetList, 0LL), !v13)
    || (items = v13->fields._items,
        v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
    sub_1BAB678(v15, v16);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v14,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v14;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v14, v17, v18);
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
    (const MethodInfo_354E8A0 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v52; // w3
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
  int32_t v87; // w3
  System_Collections_Generic_IEnumerable_T__o *v88; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]

  if ( (byte_4AB8A03 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_StableSort_BattleLogicTask___, skillInfo);
    sub_1BAB41C(&BattleLogicTask_TypeInfo, v17);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_BattleLogicTask___, v18);
    sub_1BAB41C(&System_Func_BattleLogicTask__int__TypeInfo, v19);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v20);
    sub_1BAB41C(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v21);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v22);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_1BAB41C(&int___TypeInfo, v24);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v25);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v26);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v27);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v28);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v29);
    sub_1BAB41C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v30);
    sub_1BAB41C(&Method_BattleLogicSkill___c__taskSkill_b__5_0__, v31);
    sub_1BAB41C(&BattleLogicSkill___c_TypeInfo, v32);
    byte_4AB8A03 = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v34 = (BattleLogicTask_o *)sub_1BAB668(BattleLogicTask_TypeInfo);
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
    data = sub_1BAB4C4(v45, 1LL);
    if ( !data )
      goto LABEL_94;
    v38 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
      sub_1BAB680(data, svtUniqueId);
    *(_DWORD *)(data + 32) = TargetAiAct;
    enemyTargetList = 0LL;
    if ( !v34 )
LABEL_94:
      sub_1BAB678(data, svtUniqueId);
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
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    if ( !v37 )
      goto LABEL_47;
  }
  else
  {
    v56 = &items->obj.klass + size;
    v33->fields._size = size + 1;
    v56[4] = (Il2CppClass *)v34;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v34, v51, v52);
    if ( !v37 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v33,
                                          (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v57 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v57,
        (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v57 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    v62 = sub_1BFD3FC(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v65 = (*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
  if ( !v65 )
    sub_1BAB678(0LL, v64);
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
      v69 = sub_1BFD3FC(v65, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v73 = sub_1BFD3FC(v65, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v74 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v65, *(_QWORD *)(v73 + 8));
    v75 = (System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 1LL);
    if ( !v74 )
      sub_1BAB678(v75, v76);
    if ( !v75 )
      sub_1BAB678(0LL, v76);
    if ( !v75->max_length )
      sub_1BAB680(v75, v76);
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
      sub_1BAB678(v77, v77);
    System_Collections_Generic_List_object___AddRange(
      v57,
      v77,
      (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    v81 = sub_1BFD3FC(v65, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v81)(v65, *(_QWORD *)(v81 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v57 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v33,
                                        (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v57,
         (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
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
      _9__5_0 = (System_Func_object__int__o *)sub_1BAB668(System_Func_BattleLogicTask__int__TypeInfo);
      System_Func_object__int____ctor(_9__5_0, v84, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v86, v87);
    }
    v88 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                           (System_Collections_Generic_List_T__o *)v57,
                                                           (System_Func_T__int__o *)_9__5_0,
                                                           0,
                                                           (const MethodInfo_2EB4248 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v33,
      0,
      v88,
      (const MethodInfo_354E8A0 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v33,
                                    (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4AB8A12 & 1) == 0 )
  {
    sub_1BAB41C(&BattleLogicSkill___c_TypeInfo, v1);
    byte_4AB8A12 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v2;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)BattleLogicSkill___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BAB678(this, 0LL);
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
    sub_1BAB678(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1BAB678(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0LL )
    sub_1BAB678(this, x);
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

  if ( (byte_4AB8A13 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_4AB8A13 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BAB678(conditions, key);
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

  if ( (byte_4AB8A14 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BAB41C(&long_TypeInfo, v8);
    byte_4AB8A14 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1BAB678(conditions, key);
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
                                                                            (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  v17 = sub_1BAB938(conditions);
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

  if ( (byte_4AB8A15 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_4AB8A15 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BAB678(conditions, key);
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

  if ( (byte_4AB8A16 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BAB41C(&long_TypeInfo, v8);
    byte_4AB8A16 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1BAB678(conditions, key);
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
                                                                            (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  sub_1BAB938(conditions);
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
    sub_1BAB678(0LL, type);
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
    sub_1BAB678(this, type);
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
  if ( (byte_4AB8A17 & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1BAB41C(&Method_System_Linq_Enumerable_Union_int___, current);
    byte_4AB8A17 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)v6->fields.task) == 0LL )
    sub_1BAB678(this, current);
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
                                                            (const MethodInfo_2F00EC0 *)Method_System_Linq_Enumerable_Union_int___);
}


BattleServantData_o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0LL )
    sub_1BAB678(this, uniqueId);
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
    sub_1BAB678(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0LL);
}