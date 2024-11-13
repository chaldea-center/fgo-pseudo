void __fastcall BattleLogicSkill___ctor(BattleLogicSkill_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // x3
  BattleBuffData_o *buffData; // x21
  BattleServantData_o *v13; // x19
  BattleBuffData_CheckIndividualitiesData_o *v14; // x22
  BattleBuffData_BuffData_array *BuffList_43192668; // x21
  int max_length; // w8
  int32_t index; // w20
  unsigned int v18; // w24
  int32_t v19; // w22
  Il2CppClass **v20; // x8
  BattleBuffData_BuffData_o *v21; // x23

  if ( (byte_4B18EF1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, actSkillInfo, *(_QWORD *)&actorSvtUniqueId);
    byte_4B18EF1 = 1;
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
      v13 = ServantData;
      if ( !buffData )
        return;
      v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                           BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                           v9,
                                                           v10,
                                                           v11);
      BattleBuffData_CheckIndividualitiesData___ctor_43379556(v14, v13, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      BuffList_43192668 = BattleBuffData__getBuffList_43192668(buffData, 143, v14, 1, 0, 0LL, 0LL, 0LL);
      data = (BattleData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList_43192668, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
        return;
      if ( BuffList_43192668 )
      {
        max_length = BuffList_43192668->max_length;
        index = actSkillInfo->fields.index;
        if ( max_length < 1 )
        {
          v19 = 0;
LABEL_21:
          data = (BattleData_o *)v13->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            BattleServantData__skillChageShorten(v13, v19, 0, index, 0LL, 0LL);
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
              sub_1BCAA44(data, actSkillInfo);
            v20 = &BuffList_43192668->obj.klass + (int)v18;
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
            max_length = BuffList_43192668->max_length;
            if ( (int)++v18 >= max_length )
              goto LABEL_21;
          }
        }
      }
    }
    sub_1BCAA3C(data, actSkillInfo);
  }
}


int32_t __fastcall BattleLogicSkill__GetHitGimmickSkillId(
        BattleLogicSkill_o *this,
        System_Int32_array *rateArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WeightRate_int__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  unsigned __int64 v17; // x21
  int32_t Next; // w1

  if ( (byte_4B18EED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, rateArray, method);
    sub_1BCA7E0(&Method_WeightRate_int__getData__, v5, v6);
    sub_1BCA7E0(&Method_WeightRate_int__getTotalWeight__, v7, v8);
    sub_1BCA7E0(&Method_WeightRate_int__setWeight__, v9, v10);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v11, v12);
    byte_4B18EED = 1;
  }
  if ( !rateArray )
    return -1;
  v13 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, rateArray, method, v3);
  WeightRate_int____ctor(v13, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
  v16 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1BCAA44(v14, v15);
      if ( !v13 )
        break;
      WeightRate_int___setWeight(
        v13,
        rateArray->m_Items[v17 + 1],
        v17,
        (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
      LODWORD(v16) = rateArray->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_12;
    }
LABEL_13:
    sub_1BCAA3C(v14, v15);
  }
  if ( !v13 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v13->fields.totalweight, 0LL);
  return WeightRate_int___getData(v13, Next, (const MethodInfo_398439C *)Method_WeightRate_int__getData__);
}


System_Collections_Generic_List_BattleLogicTask__o *__fastcall BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        System_Int32_array *ptTargetArray,
        System_Int32_array *enemyTargetArray,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x21
  __int64 *v68; // x0
  __int64 v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x25
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  System_Collections_Generic_List_object__o *v86; // x19
  __int64 v87; // x2
  __int64 v88; // x3
  long double inited; // q0
  _QWORD *v90; // x24
  __int64 v91; // x8
  __int64 v92; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v93; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x24
  DataVals_array *DataValArray; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  BattleLogicSkill___c_c *v99; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x22
  System_Func_T__TResult__o *_9__7_0; // x23
  Il2CppObject *v102; // x25
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x22
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  System_Func_T1__T2__TResult__o *v114; // x23
  System_Func_T__TResult__o *v115; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v116; // x0
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  BattleLogicSkill___c_c *v120; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x22
  System_Func_object__bool__o *_9__7_3; // x23
  Il2CppObject *v123; // x24
  struct BattleLogicSkill___c_StaticFields *v124; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x22
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  System_Func_object__object__o *v135; // x23
  __int64 v136; // x8
  void *v137; // x21
  __int64 v138; // x9
  int *v139; // x10
  __int64 v140; // x0
  __int64 v141; // x1
  __int64 v142; // x21
  __int64 v143; // x8
  __int64 v144; // x9
  int *v145; // x10
  __int64 v146; // x0
  __int64 v147; // x8
  __int64 v148; // x9
  int *v149; // x10
  __int64 v150; // x0
  BattleSkillInfoData_o *v151; // x22
  System_Int32_array *v152; // x0
  __int64 v153; // x1
  System_Collections_Generic_IEnumerable_T__o *v154; // x0
  __int64 v155; // x8
  __int64 v156; // x9
  int *v157; // x10
  __int64 v158; // x0
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x3
  BattleLogicSkill___c_c *v162; // x8
  System_Func_object__int__o *_9__7_5; // x20
  Il2CppObject *v164; // x21
  struct BattleLogicSkill___c_StaticFields *v165; // x0
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  const MethodInfo *v173; // [xsp+8h] [xbp-68h]

  if ( (byte_4B18EE5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, task, ptTargetArray);
    sub_1BCA7E0(&Method_BasicHelper_StableSort_BattleLogicTask___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Union_int___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v21, v22);
    sub_1BCA7E0(&System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Func_BattleLogicTask__int__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Func_int__BattleServantData__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Func_DataVals__Target_TYPE__TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo, v33, v34);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v37, v38);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v39, v40);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v41, v42);
    sub_1BCA7E0(&int___TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v47, v48);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v49, v50);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__, v51, v52);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__, v53, v54);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__, v55, v56);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__, v57, v58);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__, v59, v60);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__, v61, v62);
    sub_1BCA7E0(&BattleLogicSkill___c__DisplayClass7_0_TypeInfo, v63, v64);
    sub_1BCA7E0(&BattleLogicSkill___c_TypeInfo, v65, v66);
    byte_4B18EE5 = 1;
  }
  v67 = sub_1BCAA2C(BattleLogicSkill___c__DisplayClass7_0_TypeInfo, task, ptTargetArray, enemyTargetArray);
  BattleLogicSkill___c__DisplayClass7_0___ctor((BattleLogicSkill___c__DisplayClass7_0_o *)v67, 0LL);
  if ( !v67 )
    goto LABEL_75;
  *(_QWORD *)(v67 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 16), (int64_t)this, v70, v71, v72, v73, v74, v75);
  *(_QWORD *)(v67 + 24) = task;
  v76 = v67 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 24), (int64_t)task, v77, v78, v79, v80, v81, v82);
  v86 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v83,
                                                       v84,
                                                       v85);
  System_Collections_Generic_List_object____ctor(
    v86,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v90 = Method_System_Array_Empty_int___;
  v91 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v91 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v69);
    v91 = v90[7];
  }
  v92 = *(_QWORD *)(v91 + 16);
  if ( (*(_BYTE *)(v92 + 309) & 1) == 0 )
    v92 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v92 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v92, v69);
  v68 = *(__int64 **)(v90[7] + 16LL);
  if ( (*((_BYTE *)v68 + 309) & 1) == 0 )
    v68 = (__int64 *)sub_1C1C6BC(inited);
  v93 = (System_Collections_Generic_IEnumerable_TSource__o **)v68[23];
  v94 = *v93;
  if ( ptTargetArray )
  {
    v68 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       *v93,
                       (System_Collections_Generic_IEnumerable_TSource__o *)ptTargetArray,
                       (const MethodInfo_2F4FC20 *)Method_System_Linq_Enumerable_Union_int___);
    v94 = (System_Collections_Generic_IEnumerable_TSource__o *)v68;
  }
  if ( enemyTargetArray )
  {
    v68 = (__int64 *)System_Linq_Enumerable__Union_int_(
                       v94,
                       (System_Collections_Generic_IEnumerable_TSource__o *)enemyTargetArray,
                       (const MethodInfo_2F4FC20 *)Method_System_Linq_Enumerable_Union_int___);
    v94 = (System_Collections_Generic_IEnumerable_TSource__o *)v68;
  }
  if ( !*(_QWORD *)v76 )
    goto LABEL_75;
  v68 = *(__int64 **)(*(_QWORD *)v76 + 72LL);
  if ( !v68 )
    goto LABEL_75;
  if ( *((_DWORD *)v68 + 4) != 2 )
  {
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)v68, 0LL);
    v99 = BattleLogicSkill___c_TypeInfo;
    v100 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo, v96);
      v99 = BattleLogicSkill___c_TypeInfo;
    }
    _9__7_0 = (System_Func_T__TResult__o *)v99->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99, v96);
        v99 = BattleLogicSkill___c_TypeInfo;
      }
      v102 = (Il2CppObject *)v99->static_fields->__9;
      _9__7_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_DataVals__Target_TYPE__TypeInfo, v96, v97, v98);
      System_Func_object__Int32Enum____ctor(
        _9__7_0,
        v102,
        Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_0__,
        0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_DataVals__Target_TYPE__o *)_9__7_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
    }
    v110 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                                  v100,
                                                                  (System_Func_TSource__TResult__o *)_9__7_0,
                                                                  (const MethodInfo_2F43488 *)Method_System_Linq_Enumerable_Select_DataVals__Target_TYPE___);
    v114 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                               System_Func_IEnumerable_int___Target_TYPE__IEnumerable_int___TypeInfo,
                                               v111,
                                               v112,
                                               v113);
    System_Func_object__Int32Enum__object____ctor(
      v114,
      (Il2CppObject *)v67,
      Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__1__,
      0LL);
    v94 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Aggregate_Int32Enum__object_(
                                                                 v110,
                                                                 (Il2CppObject *)v94,
                                                                 (System_Func_TAccumulate__TSource__TAccumulate__o *)v114,
                                                                 (const MethodInfo_2F1B8B0 *)Method_System_Linq_Enumerable_Aggregate_Target_TYPE__IEnumerable_int____);
  }
  v115 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__BattleServantData__TypeInfo, v69, v87, v88);
  System_Func_int__object____ctor(
    v115,
    (Il2CppObject *)v67,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__2__,
    0LL);
  v116 = System_Linq_Enumerable__Select_int__object_(
           v94,
           (System_Func_TSource__TResult__o *)v115,
           (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v120 = BattleLogicSkill___c_TypeInfo;
  v121 = (System_Collections_Generic_IEnumerable_TSource__o *)v116;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo, v117);
    v120 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_3 = (System_Func_object__bool__o *)v120->static_fields->__9__7_3;
  if ( !_9__7_3 )
  {
    if ( !v120->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v120, v117);
      v120 = BattleLogicSkill___c_TypeInfo;
    }
    v123 = (Il2CppObject *)v120->static_fields->__9;
    _9__7_3 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_BattleServantData__bool__TypeInfo,
                                               v117,
                                               v118,
                                               v119);
    System_Func_object__bool____ctor(
      _9__7_3,
      v123,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_3__,
      0LL);
    v124 = BattleLogicSkill___c_TypeInfo->static_fields;
    v124->__9__7_3 = (struct System_Func_BattleServantData__bool__o *)_9__7_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v124->__9__7_3, (int64_t)_9__7_3, v125, v126, v127, v128, v129, v130);
  }
  v131 = System_Linq_Enumerable__Where_object_(
           v121,
           (System_Func_TSource__bool__o *)_9__7_3,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v135 = (System_Func_object__object__o *)sub_1BCAA2C(
                                            System_Func_BattleServantData__IEnumerable_BattleSkillInfoData___TypeInfo,
                                            v132,
                                            v133,
                                            v134);
  System_Func_object__object____ctor(
    v135,
    (Il2CppObject *)v67,
    Method_BattleLogicSkill___c__DisplayClass7_0__GetSkillTargetedBeforeFunctionSkill_b__4__,
    0LL);
  v68 = (__int64 *)System_Linq_Enumerable__SelectMany_object__object_(
                     v131,
                     (System_Func_TSource__IEnumerable_TResult___o *)v135,
                     (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleSkillInfoData___);
  if ( !v68 )
LABEL_75:
    sub_1BCAA3C(v68, v69);
  v136 = *v68;
  v137 = v68;
  v138 = *(unsigned __int16 *)(*v68 + 302);
  if ( *(_WORD *)(*v68 + 302) )
  {
    v139 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v139 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v138;
      v139 += 4;
      if ( !v138 )
        goto LABEL_37;
    }
    v140 = v136 + 16LL * *v139 + 312;
  }
  else
  {
LABEL_37:
    v140 = sub_1C1C7C0(v68, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v142 = (*(__int64 (__fastcall **)(void *, _QWORD))v140)(v137, *(_QWORD *)(v140 + 8));
  if ( !v142 )
    sub_1BCAA3C(0LL, v141);
  while ( 1 )
  {
    v143 = *(_QWORD *)v142;
    v144 = *(unsigned __int16 *)(*(_QWORD *)v142 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v142 + 302LL) )
    {
      v145 = (int *)(*(_QWORD *)(v143 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v145 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v144;
        v145 += 4;
        if ( !v144 )
          goto LABEL_44;
      }
      v146 = v143 + 16LL * *v145 + 312;
    }
    else
    {
LABEL_44:
      v146 = sub_1C1C7C0(v142, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v146)(v142, *(_QWORD *)(v146 + 8)) & 1) == 0 )
      break;
    v147 = *(_QWORD *)v142;
    v148 = *(unsigned __int16 *)(*(_QWORD *)v142 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v142 + 302LL) )
    {
      v149 = (int *)(*(_QWORD *)(v147 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v149 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v148;
        v149 += 4;
        if ( !v148 )
          goto LABEL_51;
      }
      v150 = v147 + 16LL * *v149 + 312;
    }
    else
    {
LABEL_51:
      v150 = sub_1C1C7C0(v142, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v151 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v150)(v142, *(_QWORD *)(v150 + 8));
    v152 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
    if ( !v151 )
      sub_1BCAA3C(v152, v153);
    if ( !v152 )
      sub_1BCAA3C(0LL, v153);
    if ( !v152->max_length )
      sub_1BCAA44(v152, v153);
    v152->m_Items[1] = v151->fields.svtUniqueId;
    v154 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                            this,
                                                            v151,
                                                            v152,
                                                            0LL,
                                                            0,
                                                            0,
                                                            0,
                                                            0,
                                                            1,
                                                            v173);
    if ( !v86 )
      sub_1BCAA3C(v154, v154);
    System_Collections_Generic_List_object___AddRange(
      v86,
      v154,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v155 = *(_QWORD *)v142;
  v156 = *(unsigned __int16 *)(*(_QWORD *)v142 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v142 + 302LL) )
  {
    v157 = (int *)(*(_QWORD *)(v155 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v157 - 1) != System_IDisposable_TypeInfo )
    {
      --v156;
      v157 += 4;
      if ( !v156 )
        goto LABEL_62;
    }
    v158 = v155 + 16LL * *v157 + 312;
  }
  else
  {
LABEL_62:
    v158 = sub_1C1C7C0(v142, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v158)(v142, *(_QWORD *)(v158 + 8));
  v162 = BattleLogicSkill___c_TypeInfo;
  if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo, v159);
    v162 = BattleLogicSkill___c_TypeInfo;
  }
  _9__7_5 = (System_Func_object__int__o *)v162->static_fields->__9__7_5;
  if ( !_9__7_5 )
  {
    if ( !v162->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v162, v159);
      v162 = BattleLogicSkill___c_TypeInfo;
    }
    v164 = (Il2CppObject *)v162->static_fields->__9;
    _9__7_5 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleLogicTask__int__TypeInfo, v159, v160, v161);
    System_Func_object__int____ctor(
      _9__7_5,
      v164,
      Method_BattleLogicSkill___c__GetSkillTargetedBeforeFunctionSkill_b__7_5__,
      0LL);
    v165 = BattleLogicSkill___c_TypeInfo->static_fields;
    v165->__9__7_5 = (struct System_Func_BattleLogicTask__int__o *)_9__7_5;
    sub_1BCA784((PartyOrganizationUtility_o *)&v165->__9__7_5, (int64_t)_9__7_5, v166, v167, v168, v169, v170, v171);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)BasicHelper__StableSort_object_(
                                                                 (System_Collections_Generic_List_T__o *)v86,
                                                                 (System_Func_T__int__o *)_9__7_5,
                                                                 0,
                                                                 (const MethodInfo_2F028E0 *)Method_BasicHelper_StableSort_BattleLogicTask___);
}


bool __fastcall BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
        BattleLogicSkill_o *this,
        System_Int32_array *actorIndividualities,
        System_Int32_array *notSkillCopyTargetIndividualities,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  unsigned __int64 v16; // x23
  BattleLogicSkill___c__DisplayClass18_0_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  System_Func_int__bool__o *v20; // x22
  bool v21; // w0

  if ( (byte_4B18EEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, actorIndividualities, notSkillCopyTargetIndividualities);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass18_0__IsNotSkillCopyTargetIndividuality_b__0__, v8, v9);
    sub_1BCA7E0(&BattleLogicSkill___c__DisplayClass18_0_TypeInfo, v10, v11);
    byte_4B18EEF = 1;
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
        v16 = 0LL;
        while ( 1 )
        {
          v17 = (BattleLogicSkill___c__DisplayClass18_0_o *)sub_1BCAA2C(
                                                              BattleLogicSkill___c__DisplayClass18_0_TypeInfo,
                                                              v13,
                                                              v14,
                                                              v15);
          BattleLogicSkill___c__DisplayClass18_0___ctor(v17, 0LL);
          if ( v16 >= notSkillCopyTargetIndividualities->max_length )
            sub_1BCAA44(IsNullOrEmpty, v13);
          if ( !v17 )
            break;
          v17->fields.individuality = notSkillCopyTargetIndividualities->m_Items[v16 + 1];
          v20 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v13, v18, v19);
          System_Func_int__bool____ctor(
            v20,
            (Il2CppObject *)v17,
            Method_BattleLogicSkill___c__DisplayClass18_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0LL);
          v21 = BasicHelper__Any_int__49273364(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v20,
                  (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
          if ( !v21 && (__int64)++v16 < (int)notSkillCopyTargetIndividualities->max_length )
            continue;
          return v21;
        }
LABEL_16:
        sub_1BCAA3C(IsNullOrEmpty, v13);
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
  __int64 v14; // x3
  BattleData_o *data; // x21
  bool isPlayerID; // w23
  int32_t data_high; // w20
  int32_t v18; // w24
  TempBattleSkillInfoData_o *v19; // x25

  v8 = this;
  if ( (byte_4B18EE7 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1BCA7E0(&TempBattleSkillInfoData_TypeInfo, skillLvMst, skillLvEnt);
    byte_4B18EE7 = 1;
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
          v18 = (int32_t)v9->fields.data;
          data_high = HIDWORD(v9->fields.data);
          v19 = (TempBattleSkillInfoData_o *)sub_1BCAA2C(TempBattleSkillInfoData_TypeInfo, v12, v13, v14);
          TempBattleSkillInfoData___ctor(v19, v18, data_high, v11, 0LL);
          return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v19, actortype, isPlayerID, 0LL);
        }
      }
    }
LABEL_13:
    sub_1BCAA3C(this, skillLvMst);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  BalanceConfig_c *v21; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  BattleData_o *IsQuestClear_38310172; // x0
  __int64 v24; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v26; // x22
  __int64 v27; // x1
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v30; // x22
  unsigned int v31; // w24
  AddSkillData_o *v32; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18EF0 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId, targetIds);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataVals__AddRange__, v19, v20);
    byte_4B18EF0 = 1;
  }
  v21 = BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    v21 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v21->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&commandSpellId);
  IsQuestClear_38310172 = (BattleData_o *)CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_38310172 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !targetIds->max_length )
      goto LABEL_30;
    IsQuestClear_38310172 = this->fields.data;
    if ( !IsQuestClear_38310172 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_38310172, targetIds->m_Items[1], 0LL);
    if ( !ServantData )
      return;
    v26 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0LL) )
    {
      return;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
    IsQuestClear_38310172 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v26->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1BCAA3C(IsQuestClear_38310172, v24);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v30 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_38310172;
      v31 = 0;
      while ( v31 < max_length )
      {
        v32 = classBoardAddCommandSpells->m_Items[v31];
        if ( !v32 || !v30 )
          goto LABEL_29;
        IsQuestClear_38310172 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v30,
                                                  &entity,
                                                  v32->fields.id,
                                                  commandSpellId,
                                                  v32->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_38310172 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_38310172 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_38310172 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_38310172,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v31 >= max_length )
          return;
      }
LABEL_30:
      sub_1BCAA44(IsQuestClear_38310172, v24);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  BattleData_o *data; // x8
  BattleLogicSkill_o *v46; // x25
  BattleServantData_o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  int64_t v54; // x2
  __int64 v55; // x3
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x23
  unsigned __int64 v58; // x20
  __int64 v59; // x24
  struct System_Int32_array *v60; // x8
  __int64 v61; // x1
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Func_int__bool__o *v66; // x27
  __int64 v67; // x27
  __int64 v68; // x2
  __int64 v69; // x3
  System_Func_int__bool__o *v70; // x27
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v72; // x3
  __int64 v73; // x2
  __int64 v74; // x3
  System_Func_int__bool__o *v75; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  System_Int32_array *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_Object_array *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  PartyOrganizationUtility_o *v106; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v107; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v108; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v11 = skillLvEnt;
  v12 = this;
  if ( (byte_4B18EEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, skillLvEnt, copyFuncVals);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataVals__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataVals__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataVals___ctor__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_DataVals__TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__0__, v37, v38);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__1__, v39, v40);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__2__, v41, v42);
    this = (BattleLogicSkill_o *)sub_1BCA7E0(&BattleLogicSkill___c__DisplayClass17_0_TypeInfo, v43, v44);
    byte_4B18EEE = 1;
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
  v46 = this;
  this = (BattleLogicSkill_o *)BattleData__getServantData(data, actorId, 0LL);
  if ( !v11 )
    goto LABEL_52;
  v47 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(v11, 0LL);
  actorIndividualities = v47 ? BattleServantData__getConcatServantAndBuffIndividualityies(v47, 0LL, 0, 0, 0, 0LL) : 0LL;
  v106 = (PartyOrganizationUtility_o *)functionIdArray;
  v108 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v48,
                                                     v49,
                                                     v50);
  System_Collections_Generic_List_int____ctor(
    v108,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v107 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_DataVals__TypeInfo,
                                                        v51,
                                                        v52,
                                                        v53);
  System_Collections_Generic_List_object____ctor(
    v107,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v58 = 0LL;
  while ( (__int64)v58 < (int)funcId->max_length )
  {
    v59 = sub_1BCAA2C(BattleLogicSkill___c__DisplayClass17_0_TypeInfo, skillLvEnt, v54, v55);
    System_Object___ctor((Il2CppObject *)v59, 0LL);
    v60 = v11->fields.funcId;
    if ( !v60 )
      goto LABEL_52;
    if ( v58 >= v60->max_length )
      goto LABEL_57;
    if ( !v59 )
      goto LABEL_52;
    *(_DWORD *)(v59 + 16) = v60->m_Items[v58 + 1];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v46, 0LL)
      || (v66 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v61, v54, v55),
          System_Func_int__bool____ctor(
            v66,
            (Il2CppObject *)v59,
            Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__0__,
            0LL),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__49273364(
                                         (System_Int32_array *)v46,
                                         (System_Func_T__bool__o *)v66,
                                         (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v59 + 24) = 0LL;
      v67 = v59 + 24;
      sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 24), 0LL, v54, v55, v62, v63, v64, v65);
      if ( !v57 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v57,
                                     (Il2CppObject **)(v59 + 24),
                                     *(_DWORD *)(v59 + 16),
                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v67 )
          goto LABEL_52;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v67 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v67 )
            goto LABEL_52;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v67 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v67 )
              goto LABEL_52;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v67 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v67 )
                goto LABEL_52;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v67 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v67 )
                  goto LABEL_52;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v67 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v70 = (System_Func_int__bool__o *)sub_1BCAA2C(
                                                          System_Func_int__bool__TypeInfo,
                                                          skillLvEnt,
                                                          v68,
                                                          v69),
                      System_Func_int__bool____ctor(
                        v70,
                        (Il2CppObject *)v59,
                        Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__1__,
                        0LL),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__49273364(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v70,
                                                     (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v58 >= SetTypeDataValArray->max_length )
LABEL_57:
                    sub_1BCAA44(this, skillLvEnt);
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v58];
                  if ( !this )
                    goto LABEL_52;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0LL);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v72);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v75 = (System_Func_int__bool__o *)sub_1BCAA2C(
                                                              System_Func_int__bool__TypeInfo,
                                                              skillLvEnt,
                                                              v73,
                                                              v74),
                          System_Func_int__bool____ctor(
                            v75,
                            (Il2CppObject *)v59,
                            Method_BattleLogicSkill___c__DisplayClass17_0__SetSkillCopyFunction_b__2__,
                            0LL),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__49273364(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v75,
                                                         (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v108;
                      if ( !v108 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*(unsigned int *)(v59 + 16);
                      items = v108->fields._items;
                      v77 = Method_System_Collections_Generic_List_int__Add__;
                      ++v108->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v108->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v108,
                          (int32_t)skillLvEnt,
                          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v108->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)skillLvEnt;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v11, 0LL);
                      if ( !this )
                        goto LABEL_52;
                      if ( v58 >= LODWORD(this->fields.logic) )
                        goto LABEL_57;
                      if ( !v107 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*((_QWORD *)&this->fields.logictarget + v58);
                      v85 = v107->fields._items;
                      v86 = Method_System_Collections_Generic_List_DataVals__Add__;
                      ++v107->fields._version;
                      if ( !v85 )
                        goto LABEL_52;
                      v87 = v107->fields._size;
                      if ( (unsigned int)v87 >= v85->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v107,
                          (Il2CppObject *)skillLvEnt,
                          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v88 = &v85->obj.klass + v87;
                        v107->fields._size = v87 + 1;
                        v88[4] = (Il2CppClass *)skillLvEnt;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)(v88 + 4),
                          (int64_t)skillLvEnt,
                          v79,
                          v80,
                          v81,
                          v82,
                          v83,
                          v84);
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
    ++v58;
    if ( !funcId )
      goto LABEL_52;
  }
  this = (BattleLogicSkill_o *)v108;
  if ( !v108
    || (v89 = System_Collections_Generic_List_int___ToArray(
                v108,
                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        v106->klass = (PartyOrganizationUtility_c *)v89,
        sub_1BCA784(v106, (int64_t)v89, v90, v91, v92, v93, v94, v95),
        (this = (BattleLogicSkill_o *)v107) == 0LL)
    || (v96 = System_Collections_Generic_List_object___ToArray(
                v107,
                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v96,
        sub_1BCA784((PartyOrganizationUtility_o *)dataValsArray, (int64_t)v96, v97, v98, v99, v100, v101, v102),
        !v106->klass) )
  {
LABEL_52:
    sub_1BCAA3C(this, skillLvEnt);
  }
  return LODWORD(v106->klass->_1.namespaze) != 0;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t svtUniqueId; // w26
  int32_t v34; // w0
  int32_t skilllv; // w27
  int32_t v36; // w29
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  BattleActionData_o *v40; // x24
  BattleServantData_o *ServantData; // x25
  bool v42; // w22
  Il2CppObject *Entity; // x0
  SkillEntity_o *v44; // x28
  SkillLvEntity_o *v45; // x27
  System_Int32_array *Individualities; // x29
  __int64 v47; // x1
  System_Int32_array *ActIndividuality; // x21
  ServantEntity_o *svtdata; // x21
  int32_t Rarity; // w0
  __int64 v51; // x21
  __int64 v52; // x26
  int32_t v53; // w0
  __int64 v54; // x2
  __int64 v55; // x3
  bool v56; // w28
  int32_t Timing_k__BackingField; // w21
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  int32_t type; // w8
  BattleLogicFunction_o *logicfunction; // x22
  System_Int32_array *funcId; // x23
  __int64 v62; // x2
  __int64 v63; // x3
  struct BattleBuffData_o *buffData; // x8
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x8
  int v66; // w9
  BattleData_o *data; // x20
  struct FunctionMaster_o *master; // x21
  Il2CppObject *klass; // x22
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  bool v77; // [xsp+3Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  v10 = this;
  if ( (byte_4B18EE8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleServantData__TypeInfo, skillInfo, isShift);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&BattleLogicFunction_FunctionArgument_TypeInfo, v19, v20);
    sub_1BCA7E0(&Individuality_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__, v29, v30);
    this = (BattleLogicSkill_o *)sub_1BCA7E0(&BattleLogicSkill___c_TypeInfo, v31, v32);
    byte_4B18EE8 = 1;
  }
  if ( !skillInfo )
    goto LABEL_45;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v34 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, bool, BattleLogicSkill_SkillExecArgs_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
          isShift,
          isDeckDataLoad,
          skillExecArgs,
          method);
  skilllv = skillInfo->fields.skilllv;
  v36 = v34;
  v40 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v37, v38, v39);
  BattleActionData___ctor(v40, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_45;
  v77 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  v42 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v36,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v44 = (SkillEntity_o *)Entity;
  if ( SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
    return;
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v36, skilllv, 0LL);
  v45 = (SkillLvEntity_o *)this;
  if ( skillInfo->fields.type != 12 )
    goto LABEL_48;
  if ( !ServantData )
    goto LABEL_45;
  Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 1, 0, 0LL);
  ActIndividuality = SkillEntity__getActIndividuality(v44, 0LL);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v47);
  if ( Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
  {
    svtdata = ServantData->fields.svtdata;
    Rarity = BattleServantData__getRarity(ServantData, 0LL);
    this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v45, svtdata, Rarity, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_48:
      if ( v40 )
      {
        v40->fields.actorId = svtUniqueId;
        if ( ServantData )
        {
          v52 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
          v51 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfo);
          *(_QWORD *)&v78.fields.currentCryptoKey = v52;
          *(_QWORD *)&v78.fields.fakeValue = v51;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v78, 0LL);
          v40->fields.motionId = SkillEntity__GetMotionId(v44, v53, 0LL);
          v56 = v42;
          v40->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
          v40->fields.commandAssistId = skillInfo->fields.commandAssistId;
          v40->fields.cardIndex = skillInfo->fields.index;
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
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BCAA2C(
                                                                 BattleLogicFunction_FunctionArgument_TypeInfo,
                                                                 skillInfo,
                                                                 v54,
                                                                 v55);
          BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
          if ( argument )
          {
            type = skillInfo->fields.type;
            argument->fields.isDeckDataLoad = v77;
            argument->fields._SkillTiming_k__BackingField = Timing_k__BackingField;
            argument->fields.grantSkillType = type;
            if ( v45 )
            {
              logicfunction = v10->fields.logicfunction;
              funcId = v45->fields.funcId;
              this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v45, 0LL);
              if ( logicfunction )
              {
                this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                               logicfunction,
                                               v40,
                                               funcId,
                                               (DataVals_array *)this,
                                               1,
                                               1,
                                               0,
                                               v56,
                                               0,
                                               1,
                                               1,
                                               argument,
                                               v45->fields.skillId,
                                               0LL);
                if ( !skillExecArgs || skillExecArgs->fields._RemoveActorUnfixedBuff_k__BackingField )
                {
                  buffData = ServantData->fields.buffData;
                  if ( !buffData )
                    goto LABEL_45;
                  unfixedBuffList = buffData->fields.unfixedBuffList;
                  if ( !unfixedBuffList )
                    goto LABEL_45;
                  v66 = unfixedBuffList->fields._version + 1;
                  unfixedBuffList->fields._size = 0;
                  unfixedBuffList->fields._version = v66;
                }
                data = v10->fields.data;
                this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo, skillInfo);
                  this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                }
                master = this[3].fields.logicfunction->fields.master;
                if ( !master )
                {
                  if ( !LODWORD(this[4].fields.logictarget) )
                  {
                    j_il2cpp_runtime_class_init_0(this, skillInfo);
                    this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                  }
                  klass = (Il2CppObject *)this[3].fields.logicfunction->klass;
                  master = (struct FunctionMaster_o *)sub_1BCAA2C(
                                                        System_Action_BattleServantData__TypeInfo,
                                                        skillInfo,
                                                        v62,
                                                        v63);
                  System_Action_object____ctor(
                    (System_Action_object__o *)master,
                    klass,
                    Method_BattleLogicSkill___c__actPassiveSkill_b__11_0__,
                    0LL);
                  static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                  static_fields->__9__11_0 = (struct System_Action_BattleServantData__o *)master;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
                    (int64_t)master,
                    v71,
                    v72,
                    v73,
                    v74,
                    v75,
                    v76);
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
      sub_1BCAA3C(this, skillInfo);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x26
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 Instance; // x0
  __int64 v65; // x1
  SkillLvMaster_o *v66; // x22
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x1
  System_Collections_Generic_Dictionary_object__object__o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x25
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x24
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x23
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x22
  BattleServantData_o *v91; // x21
  __int64 v92; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v94; // x8
  __int64 v95; // x1
  unsigned int NowHp; // w0
  __int64 v97; // x1
  unsigned int v98; // w0
  __int64 v99; // x1
  int32_t v100; // w20
  int32_t v101; // w20
  __int64 *v103; // x8
  System_String_o *v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7

  if ( (byte_4B18EEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo, text);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7, v8);
    sub_1BCA7E0(&System_Func_string__int__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_string__double__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__0__, v17, v18);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__1__, v19, v20);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__2__, v21, v22);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__3__, v23, v24);
    sub_1BCA7E0(&BattleLogicSkill___c__DisplayClass13_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_3008/*"BATTLE_SKILLERROR_NP_LOWER"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3006/*"BATTLE_SKILLERROR_HP_LOWER"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12412/*"STAR_HIGHER"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_7282/*"HP_PER_LOWER"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_3007/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3005/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_7281/*"HP_PER_HIGHER"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3009/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_9458/*"NP_HIGHER"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_3010/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_7283/*"HP_VAL_HIGHER"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_12413/*"STAR_LOWER"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_9459/*"NP_LOWER"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_7284/*"HP_VAL_LOWER"*/, v55, v56);
    byte_4B18EEA = 1;
  }
  v57 = sub_1BCAA2C(BattleLogicSkill___c__DisplayClass13_0_TypeInfo, skillInfo, text, method);
  System_Object___ctor((Il2CppObject *)v57, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)text, (int64_t)StringLiteral_1/*""*/, v58, v59, v60, v61, v62, v63);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_47;
  v66 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v66 )
    goto LABEL_47;
  Instance = (__int64)SkillLvMaster__GetEntity(v66, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v57 )
    goto LABEL_47;
  v73 = *(_QWORD *)(Instance + 56);
  *(_QWORD *)(v57 + 16) = v73;
  sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 16), v73, v67, v68, v69, v70, v71, v72);
  v74 = *(System_Collections_Generic_Dictionary_object__object__o **)(v57 + 16);
  if ( !v74 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v74,
         (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v78 = sub_1BCAA2C(System_Func_string__int__bool__TypeInfo, v75, v76, v77);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v78,
    (Il2CppObject *)v57,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__0__,
    0LL);
  v82 = sub_1BCAA2C(System_Func_string__int__bool__TypeInfo, v79, v80, v81);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v82,
    (Il2CppObject *)v57,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__1__,
    0LL);
  v86 = sub_1BCAA2C(System_Func_string__double__bool__TypeInfo, v83, v84, v85);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v86,
    (Il2CppObject *)v57,
    Method_BattleLogicSkill___c__DisplayClass13_0__checkConditions_b__2__,
    0LL);
  v90 = sub_1BCAA2C(System_Func_string__double__bool__TypeInfo, v87, v88, v89);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v90,
    (Il2CppObject *)v57,
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
  v91 = (BattleServantData_o *)Instance;
  Instance = BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v78 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v78 + 24))(
          *(_QWORD *)(v78 + 64),
          StringLiteral_9458/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v78 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92);
    v103 = &StringLiteral_3007/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v91, 0LL);
  if ( !v82 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v82 + 24))(
               *(_QWORD *)(v82 + 64),
               StringLiteral_9459/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v82 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
    v103 = &StringLiteral_3008/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v78 + 24))(
               *(_QWORD *)(v78 + 64),
               StringLiteral_12412/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v78 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
    v103 = &StringLiteral_3009/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v94 = this->fields.data;
  if ( !v94 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v82 + 24))(
          *(_QWORD *)(v82 + 64),
          StringLiteral_12413/*"STAR_LOWER"*/,
          (unsigned int)v94->fields.totalCriticalStars,
          *(_QWORD *)(v82 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
    v103 = &StringLiteral_3010/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v91, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v78 + 24))(
          *(_QWORD *)(v78 + 64),
          StringLiteral_7283/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v78 + 40)) & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v97);
    v103 = &StringLiteral_3005/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v98 = BattleServantData__getNowHp(v91, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v82 + 24))(
          *(_QWORD *)(v82 + 64),
          StringLiteral_7284/*"HP_VAL_LOWER"*/,
          v98,
          *(_QWORD *)(v82 + 40)) & 1) != 0 )
  {
    v100 = BattleServantData__getNowHp(v91, 0LL);
    Instance = BattleServantData__getMaxHp(v91, 0LL);
    if ( !v86 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v86 + 24))(
            *(_QWORD *)(v86 + 64),
            StringLiteral_7281/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v86 + 40),
            (double)v100 * 1000.0 / (double)(int)Instance) & 1) != 0 )
    {
      v101 = BattleServantData__getNowHp(v91, 0LL);
      Instance = BattleServantData__getMaxHp(v91, 0LL);
      if ( v90 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v90 + 24))(
                *(_QWORD *)(v90 + 64),
                StringLiteral_7282/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v90 + 40),
                (double)v101 * 1000.0 / (double)(int)Instance) & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1BCAA3C(Instance, v65);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v99);
  v103 = &StringLiteral_3006/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v104 = LocalizationManager__Get((System_String_o *)*v103, 0LL);
  *text = v104;
  sub_1BCA784((PartyOrganizationUtility_o *)text, (int64_t)v104, v105, v106, v107, v108, v109, v110);
  return 0;
}


BattleActionData_o *__fastcall BattleLogicSkill__createCommandSpell(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x22
  DataManager_o *skillId; // x0
  __int64 v32; // x1
  struct BattleSkillInfoData_o *skillInfo; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  DataManager_o *v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  BattleActionData_c *v42; // x0
  struct System_Int32_array *ptTarget; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_int__o *v53; // x24
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Collections_Generic_List_object__o *v57; // x25
  const MethodInfo *v58; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v60; // x24
  System_Object_array *v61; // x25
  BattleActionData_o *v62; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v66; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_4B18EE9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, task, method);
    sub_1BCA7E0(&BattleActionLogManagerInterface_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandSpellMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataVals__AddRange__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataVals__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataVals___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_DataVals__TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    byte_4B18EE9 = 1;
  }
  v30 = sub_1BCAA2C(BattleActionData_TypeInfo, task, method, v3);
  BattleActionData___ctor((BattleActionData_o *)v30, 0LL);
  if ( !task )
    goto LABEL_29;
  skillInfo = task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_29;
  skillId = (DataManager_o *)DataManager__GetMasterData_object_(
                               skillId,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_29;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v34 )
    goto LABEL_29;
  skillId = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                               v34,
                               (int32_t)skillId,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v30 )
    goto LABEL_29;
  v35 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v30, 0LL);
  *(_DWORD *)(v30 + 32) = -1;
  if ( !v35 )
    goto LABEL_29;
  *(_DWORD *)(v30 + 48) = HIDWORD(v35->fields.m_CancellationTokenSource);
  v42 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, v32);
    v42 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v30 + 56) = v42->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = task->fields.ptTarget;
  *(_QWORD *)(v30 + 40) = ptTarget;
  sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 40), (int64_t)ptTarget, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v30 + 144) = skillInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 144), (int64_t)skillInfo, v44, v45, v46, v47, v48, v49);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_29;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v53 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v50,
                                                    v51,
                                                    v52);
  System_Collections_Generic_List_int____ctor(
    v53,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v57 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_DataVals__TypeInfo,
                                                       v54,
                                                       v55,
                                                       v56);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v53 )
    goto LABEL_29;
  System_Collections_Generic_List_int___AddRange(
    v53,
    (System_Collections_Generic_IEnumerable_T__o *)v35->fields.lookup,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v35, 0LL);
  if ( !v57 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v57,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v35->fields.m_CachedPtr,
    task->fields.ptTarget,
    v53,
    (System_Collections_Generic_List_DataVals__o *)v57,
    v58);
  logicfunction = this->fields.logicfunction;
  v60 = System_Collections_Generic_List_int___ToArray(
          v53,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  v61 = System_Collections_Generic_List_object___ToArray(
          v57,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !logicfunction )
    goto LABEL_29;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v30,
                               v60,
                               (DataVals_array *)v61,
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
  v62 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_29;
  klass = actionLogManager->klass;
  v66 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v66;
      p_offset += 2;
      if ( !v66 )
        goto LABEL_22;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_22:
    p_method = sub_1C1C7C0(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
    actionLogManager,
    task,
    *(_QWORD *)(p_method + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v35, 0LL) > 0.0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      perf = logic->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v35, 0LL);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0LL);
        return v62;
      }
    }
LABEL_29:
    sub_1BCAA3C(skillId, v32);
  }
  return v62;
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
  v5 = BattleLogicSkill__createSkillData_44374332(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_1BCAA3C(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_44374332(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  BattleData_o *skillId; // x0
  BattleLogicSkill_Fields *p_fields; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  BattleActionData_o *v46; // x22
  BattleActionData_o *v47; // x25
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  BattleBoostItemInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x22
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *v57; // x24
  BattleActionData_c *v58; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 methodPtr_low; // x10
  BattleData_o *data; // x26
  BattleData_o *v62; // x26
  SkillEntity_o *v63; // x23
  bool isForcedSkillSpeedOne; // w26
  bool v65; // w27
  BattleLogicSkill_o *v66; // x22
  BattleData_o *v67; // x29
  BattleServantData_o *EnemyServantData; // x0
  __int64 v69; // x1
  __int64 v70; // x28
  __int64 v71; // x29
  BattleData_o *v72; // x29
  struct System_Int32_array *ptTarget; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_String_o *Name; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  BattleLogicSkill_o *v99; // x29
  System_String_array *v100; // x26
  System_Object_array *v101; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  PartyOrganizationUtility_o *p_motionMessage; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t effectList; // x1
  int m_CancellationTokenSource; // w8
  DataVals_array *v113; // x26
  int i; // w9
  __int64 v115; // x11
  BattleLogicFunction_o *logicfunction; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  __int64 v119; // x2
  __int64 v120; // x3
  bool v121; // w23
  int32_t ActorId; // w0
  const MethodInfo *v123; // x6
  bool v124; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  __int64 v126; // x2
  __int64 v127; // x3
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  bool *p_isShowBattlePointEffect; // x27
  BattleLogicFunction_o *v130; // x29
  System_Int32_array *v131; // x27
  DataVals_array *v132; // x28
  int32_t v133; // w0
  __int64 v134; // x1
  UnityEngine_Object_o *battle_ent; // x28
  int32_t v136; // w27
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v147; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  int64_t masterSkillInfo; // x1
  void *v157; // x1
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  int64_t *p_boostSkillInfo; // x27
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  int64_t v171; // x1
  void *v172; // x1
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  int32_t type; // w23
  BattleData_o *v180; // x25
  int v181; // w8
  BattleData_o *v182; // x25
  BattleData_o *v183; // x25
  BattleData_o *v184; // x27
  int32_t v185; // w28
  const MethodInfo *v186; // x5
  BattleLogic_o *v187; // x27
  BattleLogicTask_array *v188; // x0
  BattleData_o *v189; // x25
  const MethodInfo *v190; // x4
  int32_t v191; // w27
  BattleLogic_o *v192; // x25
  BattleLogicTask_array *FunctionedFunctionBuffTaskArray; // x0
  BattleLogicTask_o *v194; // x23
  BattleData_o *v195; // x23
  __int64 v196; // x1
  __int64 v197; // x2
  __int64 v198; // x3
  BattleLogicTask_o *v199; // x23
  int64_t v200; // x2
  int32_t v201; // w3
  System_String_o *v202; // x4
  BattleSetupInfo_o *v203; // x5
  FollowerInfo_o *v204; // x6
  PartyListViewItem_o *v205; // x7
  struct BattleLogic_o *v206; // x8
  BattlePerformance_o *perf; // x23
  float CutinAdditionalTime; // s0
  struct BattlePerformance_o *v209; // x8
  int64_t v210; // x2
  int32_t v211; // w3
  System_String_o *v212; // x4
  BattleSetupInfo_o *v213; // x5
  FollowerInfo_o *v214; // x6
  PartyListViewItem_o *v215; // x7
  __int64 v216; // x1
  __int64 v217; // x2
  __int64 v218; // x3
  BattleLogicTask_o *v219; // x22
  int32_t v220; // w0
  const MethodInfo *v221; // x3
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-88h]
  DataVals_o *v224; // [xsp+40h] [xbp-80h]
  SkillEntity_o *Entity; // [xsp+48h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // 0:x0.16

  if ( (byte_4B18EE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int___, task, fromSkillCopyFunc);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v11, v12);
    sub_1BCA7E0(&BattleActionLogManagerInterface_TypeInfo, v13, v14);
    sub_1BCA7E0(&BattleBoostItemInfoData_TypeInfo, v15, v16);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v17, v18);
    sub_1BCA7E0(&CheckUpdateShiftTask_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&BattleLogicFunction_FunctionArgument_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v39, v40);
    byte_4B18EE6 = 1;
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
  v46 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v43, v44, v45);
  BattleActionData___ctor(v46, 0LL);
  if ( !v46 )
    goto LABEL_162;
  v47 = BattleActionData__AddDisplayTriggerIntervalBuff(v46, task, 0LL);
  *baseActionData = v47;
  sub_1BCA784((PartyOrganizationUtility_o *)baseActionData, (int64_t)v47, v48, v49, v50, v51, v52, v53);
  if ( !task )
    goto LABEL_162;
  if ( !v47 )
    goto LABEL_162;
  v47->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  skillId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_162;
  skillId = (BattleData_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)skillId,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_162;
  v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                              skillInfo,
                              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v55 )
    goto LABEL_162;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v55,
                              (int32_t)skillId,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillId = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_162;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillId,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v57 = (SkillLvEntity_o *)skillId;
  v47->fields.isCounter = task->fields.isCounter;
  v58 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, task);
    v58 = BattleActionData_TypeInfo;
  }
  static_fields = v58->static_fields;
  v47->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58, task);
      static_fields = BattleActionData_TypeInfo->static_fields;
    }
    v47->fields.type = static_fields->TYPE_BOOSTSKILL;
    v47->fields.imageId = skillInfo->fields.itemImageId;
    methodPtr_low = LOBYTE(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      skillId = (BattleData_o *)BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( ((unsigned __int8)skillId & 1) != 0 )
        v47->fields.noOperation = 1;
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
        v62 = 0LL,
        ((unsigned __int8)skillId & 1) != 0) )
  {
LABEL_26:
    v224 = baseVals;
    if ( task->fields.isForcedSpeedOne )
    {
      v63 = Entity;
      isForcedSkillSpeedOne = 1;
    }
    else
    {
      v63 = Entity;
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
    v65 = fromSkillCopyFunc;
    v66 = this;
    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
    v47->fields.actorId = (int)skillId;
    if ( !v57 )
      goto LABEL_162;
    v67 = p_fields->data;
    skillId = (BattleData_o *)SkillLvEntity__GetActNpcServantId(v57, 0LL);
    if ( !v67 )
      goto LABEL_162;
    EnemyServantData = BattleData__getEnemyServantData(v67, (int32_t)skillId, 0LL);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v70 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v71 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v69);
      *(_QWORD *)&v228.fields.currentCryptoKey = v70;
      *(_QWORD *)&v228.fields.fakeValue = v71;
      v47->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v228, 0LL);
    }
    v72 = p_fields->data;
    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( !v72 )
      goto LABEL_162;
    skillId = (BattleData_o *)BattleData__getServantId(v72, (int32_t)skillId, 0LL);
    if ( !v63 )
      goto LABEL_162;
    v47->fields.motionId = SkillEntity__GetMotionId(v63, (int32_t)skillId, 0LL);
    v47->fields.targetId = BattleLogicTask__getTarget(task, 0LL);
    ptTarget = task->fields.ptTarget;
    v47->fields.pttargetIds = ptTarget;
    sub_1BCA784((PartyOrganizationUtility_o *)&v47->fields.pttargetIds, (int64_t)ptTarget, v74, v75, v76, v77, v78, v79);
    Name = SkillEntity__getName(v63, 0LL);
    v47->fields.skillMessage = Name;
    sub_1BCA784((PartyOrganizationUtility_o *)&v47->fields.skillMessage, (int64_t)Name, v81, v82, v83, v84, v85, v86);
    v47->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_1BCA784((PartyOrganizationUtility_o *)&v47->fields.skillInfo, (int64_t)skillInfo, v87, v88, v89, v90, v91, v92);
    v47->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
    v47->fields.checkRevengeId = task->fields.checkRevengeId;
    v99 = v66;
    if ( BattleLogicTask__IsGimmick(task, 0LL) )
    {
      skillId = p_fields->data;
      if ( !p_fields->data )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleData__GetGimmickStartVoiceArray(skillId, 0LL);
      if ( !p_fields->data )
        goto LABEL_162;
      v100 = (System_String_array *)skillId;
      skillId = (BattleData_o *)BattleData__GetGimmickResultVoiceArray(p_fields->data, 0LL);
      if ( !p_fields->data )
        goto LABEL_162;
      v101 = (System_Object_array *)skillId;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(p_fields->data, 0LL);
      BattleActionData__SetGimmickData(v47, task->fields.gimmickIndexArray, v100, v101, GimmickAnimTypeArray, 0LL);
      v99 = v66;
    }
    motionMessage = task->fields.motionMessage;
    if ( motionMessage && motionMessage->fields._stringLength >= 1 )
    {
      v47->fields.motionMessage = motionMessage;
      p_motionMessage = (PartyOrganizationUtility_o *)&v47->fields.motionMessage;
    }
    else
    {
      v47->fields.motionMessage = 0LL;
      p_motionMessage = (PartyOrganizationUtility_o *)&v47->fields.motionMessage;
      motionMessage = 0LL;
    }
    sub_1BCA784(p_motionMessage, (int64_t)motionMessage, v93, v94, v95, v96, v97, v98);
    if ( (task->fields.actortype | 4) == 5 )
      BattleActionData__setStateField(v47, 0LL);
    effectList = (int64_t)v63->fields.effectList;
    v47->fields.effectlist = (struct System_Int32_array *)effectList;
    sub_1BCA784((PartyOrganizationUtility_o *)&v47->fields.effectlist, effectList, v105, v106, v107, v108, v109, v110);
    skillId = (BattleData_o *)v99->fields.logic;
    if ( !skillId )
      goto LABEL_162;
    BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
    if ( skillInfo->fields.type == 21 )
    {
      skillId = (BattleData_o *)SkillLvEntity__getDataValsList(v57, 0LL);
      if ( !skillId )
        goto LABEL_162;
      m_CancellationTokenSource = (int)skillId->fields.m_CancellationTokenSource;
      v113 = (DataVals_array *)skillId;
      if ( m_CancellationTokenSource >= 1 )
      {
        for ( i = 0; i != m_CancellationTokenSource; ++i )
        {
          if ( m_CancellationTokenSource == i )
            sub_1BCAA44(skillId, task);
          v115 = *((_QWORD *)&skillId->fields.rootfsm + i);
          if ( !v115 )
            goto LABEL_162;
          *(_BYTE *)(v115 + 72) = 1;
        }
      }
      logicfunction = v99->fields.logicfunction;
      funcId = v57->fields.funcId;
      skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !logicfunction )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleLogicFunction__procList(
                                  logicfunction,
                                  v47,
                                  funcId,
                                  v113,
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
      v62 = skillId;
      goto LABEL_88;
    }
    changeTDCommandType = skillInfo->fields.changeTDCommandType;
    if ( (changeTDCommandType & 0x80000000) == 0 )
      v47->fields.commandType = changeTDCommandType;
    functionIdArray = v57->fields.funcId;
    dataValsArray = SkillLvEntity__getDataValsList(v57, 0LL);
    v121 = v224 == 0LL || !v65;
    if ( v224 != 0LL && v65 )
    {
      ActorId = BattleLogicTask__getActorId(task, 0LL);
      v62 = 0LL;
      if ( !BattleLogicSkill__SetSkillCopyFunction(v99, v57, v224, &functionIdArray, &dataValsArray, ActorId, v123) )
        return (BattleActionData_o *)v62;
      skillId = p_fields->data;
      if ( !p_fields->data )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleData__isEnemyID(skillId, v47->fields.actorId, 0LL);
      if ( ((unsigned __int8)skillId & 1) != 0 )
      {
        if ( !p_fields->data )
          goto LABEL_162;
        v124 = p_fields->data->fields.currentTurn == 0;
      }
      else
      {
        v124 = 0;
      }
      v47->fields.isReversalShortBuffTurn = v124;
    }
    if ( skillInfo->fields.type == 1 )
    {
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BCAA2C(
                                                             BattleLogicFunction_FunctionArgument_TypeInfo,
                                                             task,
                                                             v119,
                                                             v120);
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
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BCAA2C(
                                                               BattleLogicFunction_FunctionArgument_TypeInfo,
                                                               task,
                                                               v119,
                                                               v120);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( !argument )
          goto LABEL_162;
        goto LABEL_85;
      }
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BCAA2C(
                                                             BattleLogicFunction_FunctionArgument_TypeInfo,
                                                             task,
                                                             v119,
                                                             v120);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
    }
    overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1BCAA2C(
                                                                                                    BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo,
                                                                                                    task,
                                                                                                    v126,
                                                                                                    v127);
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
      v130 = v99->fields.logicfunction;
      v132 = dataValsArray;
      v131 = functionIdArray;
      skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v130 )
        goto LABEL_162;
      skillId = (BattleData_o *)BattleLogicFunction__procList(
                                  v130,
                                  v47,
                                  v131,
                                  v132,
                                  0,
                                  1,
                                  0,
                                  0,
                                  0,
                                  v121,
                                  1,
                                  argument,
                                  (int32_t)skillId,
                                  0LL);
      v62 = skillId;
      v99 = v66;
LABEL_88:
      if ( task->fields.actortype == 5 )
      {
        if ( !v62 )
          goto LABEL_162;
        v133 = BasicHelper__IndexValue_int__49288952(
                 *(System_Collections_Generic_List_T__o **)&v62->fields.maxEnemyIndex,
                 0,
                 0,
                 (const MethodInfo_2F016F8 *)Method_BasicHelper_IndexValue_int___);
        battle_ent = (UnityEngine_Object_o *)v62->fields.battle_ent;
        v136 = v133;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v134);
        skillId = (BattleData_o *)UnityEngine_Object__op_Equality(battle_ent, 0LL, 0LL);
        if ( v136 >= 1 && ((unsigned __int8)skillId & 1) != 0 )
        {
          logic = v99->fields.logic;
          if ( !logic )
            goto LABEL_162;
          skillId = (BattleData_o *)logic->fields.perf;
          if ( !skillId )
            goto LABEL_162;
          ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)skillId, v136, 0LL);
          v62->fields.battle_ent = (struct BattleEntity_o *)ServantGameObject;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v62->fields.battle_ent,
            (int64_t)ServantGameObject,
            v139,
            v140,
            v141,
            v142,
            v143,
            v144);
        }
      }
      ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
        skillInfo,
        skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
      BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
      skillId = (BattleData_o *)v99->fields.logic;
      if ( skillId )
      {
        BattleLogic__updateConditionsBuffAll((BattleLogic_o *)skillId, 0LL);
        if ( v62 )
        {
          BYTE4(v62->fields.quest_ent) = 0;
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
                v147 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
                {
                  p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
                  while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
                  {
                    --v147;
                    p_offset += 2;
                    if ( !v147 )
                      goto LABEL_106;
                  }
                  p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
                }
                else
                {
LABEL_106:
                  p_method = sub_1C1C7C0(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL);
                }
                (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
                  actionLogManager,
                  task,
                  *(_QWORD *)(p_method + 8));
                if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v62, 0LL) )
                {
                  masterSkillInfo = (int64_t)v62->fields.masterSkillInfo;
                  v62->fields.draw_commandlist = (struct BattleCommandData_array *)masterSkillInfo;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v62->fields.draw_commandlist,
                    masterSkillInfo,
                    v150,
                    v151,
                    v152,
                    v153,
                    v154,
                    v155);
                  v157 = StringLiteral_1/*""*/;
                  v62->fields.masterSkillInfo = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)StringLiteral_1/*""*/;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v62->fields.masterSkillInfo,
                    (int64_t)v157,
                    v158,
                    v159,
                    v160,
                    v161,
                    v162,
                    v163);
                  p_boostSkillInfo = (int64_t *)&v62->fields.boostSkillInfo;
                  if ( !System_String__IsNullOrEmpty((System_String_o *)v62->fields.boostSkillInfo, 0LL) )
                  {
                    v171 = *p_boostSkillInfo;
                    v62->fields.draw_commandlist = (struct BattleCommandData_array *)*p_boostSkillInfo;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v62->fields.draw_commandlist,
                      v171,
                      v165,
                      v166,
                      v167,
                      v168,
                      v169,
                      v170);
                    v172 = StringLiteral_1/*""*/;
                    *p_boostSkillInfo = (int64_t)StringLiteral_1/*""*/;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v62->fields.boostSkillInfo,
                      (int64_t)v172,
                      v173,
                      v174,
                      v175,
                      v176,
                      v177,
                      v178);
                  }
                }
                type = skillInfo->fields.type;
                v180 = p_fields->data;
                skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
                if ( v180 )
                {
                  skillId = (BattleData_o *)BattleData__getServantData(v180, (int32_t)skillId, 0LL);
                  if ( type == 1 || skillId )
                  {
                    skillId = (BattleData_o *)SkillLvEntity__IsNoTargetSkipSkill(v57, 0LL);
                    v181 = (unsigned __int8)skillId & 1;
                  }
                  else
                  {
                    v181 = 1;
                  }
                  if ( (v181 & !v62->fields.turnElapsedEndBattleFlag) != 0
                    || BYTE1(v62->fields.p_entryid) && !BYTE2(v62->fields.p_entryid) )
                  {
                    return 0LL;
                  }
                  if ( task->fields.isCanCounterTask )
                  {
                    v182 = p_fields->data;
                    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
                    if ( !v182 )
                      goto LABEL_162;
                    skillId = (BattleData_o *)BattleData__getServantData(v182, (int32_t)skillId, 0LL);
                    if ( skillId )
                    {
                      v183 = skillId;
                      (*(void (__fastcall **)(BattleData_o *, struct BattleData_o *, void *))&v62->klass[1]._1.byval_arg.bits)(
                        v62,
                        p_fields->data,
                        v62->klass[1]._1.this_arg.data);
                      skillId = *(BattleData_o **)&v62->fields.maxEnemyIndex;
                      if ( !skillId )
                        goto LABEL_162;
                      v184 = p_fields->data;
                      v185 = (int32_t)v183->fields.m_CancellationTokenSource;
                      skillId = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                                  (System_Collections_Generic_List_int__o *)skillId,
                                                  (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
                      if ( !v184 )
                        goto LABEL_162;
                      BattleData__SetWasAttackTargetIdList(v184, v185, (System_Int32_array *)skillId, 0LL);
                      v187 = v99->fields.logic;
                      if ( !v187 )
                        goto LABEL_162;
                      skillId = (BattleData_o *)v187->fields.logicnomal;
                      if ( !skillId )
                        goto LABEL_162;
                      v188 = BattleLogicNomal__taskCounterFunc(
                               (BattleLogicNomal_o *)skillId,
                               p_fields->data,
                               HIBYTE(v183->fields.fixedCommands) == 0,
                               1,
                               0,
                               v186);
                      BattleLogic__addBattleLogicTask(v187, v188, 0LL);
                    }
                  }
                  v189 = p_fields->data;
                  if ( task->fields.isFunctionedFunction )
                  {
                    if ( !v189 )
                      goto LABEL_162;
                    BattleData__ResetFunctionedFunctionIds(p_fields->data, 0LL);
                  }
                  else
                  {
                    skillId = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
                    if ( !*(_QWORD *)&v62->fields.maxEnemyIndex )
                      goto LABEL_162;
                    v191 = (int)skillId;
                    skillId = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                                *(System_Collections_Generic_List_int__o **)&v62->fields.maxEnemyIndex,
                                                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
                    if ( !v189 )
                      goto LABEL_162;
                    BattleData__SetFunctionedTargetIdArray(v189, v191, (System_Int32_array *)skillId, 0LL);
                    v192 = v99->fields.logic;
                    if ( !v192 )
                      goto LABEL_162;
                    FunctionedFunctionBuffTaskArray = BattleLogic__GetFunctionedFunctionBuffTaskArray(
                                                        v99->fields.logic,
                                                        p_fields->data,
                                                        0LL);
                    BattleLogic__addBattleLogicTask(v192, FunctionedFunctionBuffTaskArray, 0LL);
                  }
                  v194 = BattleLogicSkill__MakeAddInvokeSkillTask(v99, skillLvMst, v57, task, v190);
                  skillId = (BattleData_o *)SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v57, 0LL);
                  if ( v99->fields.logic )
                  {
                    if ( ((unsigned __int8)skillId & 1) != 0 )
                      BattleLogic__AddTaskTargetTaskAfter(v99->fields.logic, task, v194, 0LL);
                    else
                      BattleLogic__AddBattleLogicTask(v99->fields.logic, v194, 0LL);
                    v195 = p_fields->data;
                    skillId = (BattleData_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                skillInfo,
                                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
                    if ( v195 )
                    {
                      BattleData__AddUseSkillId(v195, (int32_t)skillId, 0LL);
                      if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v62, 0LL) )
                      {
                        v199 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v196, v197, v198);
                        BattleLogicTask___ctor(v199, 0LL);
                        if ( !v199 )
                          goto LABEL_162;
                        BattleLogicTask__setCheckEntryFunction(v199, 0LL);
                        skillId = (BattleData_o *)v99->fields.logic;
                        if ( !skillId )
                          goto LABEL_162;
                        BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, v199, 0LL);
                      }
                      if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0 )
                      {
                        skillId = (BattleData_o *)SkillEntity__getSkillCutInId(Entity, 0LL);
                        if ( !(_DWORD)skillId )
                        {
                          v206 = v99->fields.logic;
                          if ( !v206 )
                            goto LABEL_162;
                          perf = v206->fields.perf;
                          CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
                          if ( !perf )
                            goto LABEL_162;
                          BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
                          if ( v62->fields.masterSkillInfo )
                          {
                            if ( !p_fields->data )
                              goto LABEL_162;
                            v209 = p_fields->data->fields.perf;
                            if ( !v209 )
                              goto LABEL_162;
                            skillId = (BattleData_o *)v209->fields.infoComp;
                            if ( !skillId )
                              goto LABEL_162;
                            BattleInformationComponent__showCommonMessage(
                              (BattleInformationComponent_o *)skillId,
                              (BattleActionData_o *)v62,
                              0LL);
                            v62->fields.masterSkillInfo = 0LL;
                            sub_1BCA784(
                              (PartyOrganizationUtility_o *)&v62->fields.masterSkillInfo,
                              0LL,
                              v210,
                              v211,
                              v212,
                              v213,
                              v214,
                              v215);
                            BYTE4(v62->fields.e_entryid) = 1;
                          }
                        }
                      }
                      if ( task->fields.IsNotShowSkillMessage )
                      {
                        v62->fields.masterSkillInfo = 0LL;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&v62->fields.masterSkillInfo,
                          0LL,
                          v200,
                          v201,
                          v202,
                          v203,
                          v204,
                          v205);
                        BYTE4(v62->fields.e_entryid) = 1;
                      }
                      if ( SkillEntity__IsCheckUpdateShiftServant(Entity, 0LL) )
                      {
                        v219 = (BattleLogicTask_o *)sub_1BCAA2C(CheckUpdateShiftTask_TypeInfo, v216, v217, v218);
                        BattleLogicTask___ctor(v219, 0LL);
                        v219->fields.actiontype = 68;
                        skillId = (BattleData_o *)v99->fields.logic;
                        if ( !skillId )
                          goto LABEL_162;
                        BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)skillId, task, v219, 0LL);
                      }
                      v220 = BattleLogicTask__getActorId(task, 0LL);
                      BattleLogicSkill__ExecuteShortenSkillBuff(v99, (BattleSkillInfoData_o *)skillInfo, v220, v221);
                      return (BattleActionData_o *)v62;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_162:
      sub_1BCAA3C(skillId, task);
    }
LABEL_85:
    argument->fields.isShowBattlePointEffect = *p_isShowBattlePointEffect;
    goto LABEL_86;
  }
  return (BattleActionData_o *)v62;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getGimmickTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleData_o *data; // x0
  BattleData_o *v11; // x20
  BattleData_o *v12; // x21
  const MethodInfo *v13; // x2
  int32_t HitGimmickSkillId; // w0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  unsigned int v18; // w22
  __int64 v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  int64_t v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  BattleData_o *v30; // x8
  System_Int32_array *v31; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  BattleData_o *v33; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v41; // x0

  if ( (byte_4B18EEC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask___TypeInfo, method, v2);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v4, v5);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    byte_4B18EEC = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__GetGimmickSkillIdArray(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v11 = data;
  data = (BattleData_o *)BattleData__GetGimmickSkillRateArray(this->fields.data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v12 = data;
  data = (BattleData_o *)BattleData__GetReelIconArray(this->fields.data, 0LL);
  if ( !v11 )
    goto LABEL_26;
  if ( !v11->fields.m_CancellationTokenSource )
    return 0LL;
  if ( !v12 )
    goto LABEL_26;
  if ( !v12->fields.m_CancellationTokenSource )
    return 0LL;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.m_CancellationTokenSource )
    return 0LL;
  HitGimmickSkillId = BattleLogicSkill__GetHitGimmickSkillId((BattleLogicSkill_o *)data, (System_Int32_array *)v12, v13);
  if ( (HitGimmickSkillId & 0x80000000) != 0 )
    return 0LL;
  v18 = HitGimmickSkillId;
  v19 = sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v15, v16, v17);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_26;
  *(_DWORD *)(v19 + 24) = -1;
  *(_QWORD *)(v19 + 16) = 20LL;
  if ( v18 >= LODWORD(v11->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 376LL))(
    v19,
    *((unsigned int *)&v11->fields.rootfsm + v18),
    *(_QWORD *)(*(_QWORD *)v19 + 384LL));
  *(_DWORD *)(v19 + 36) = 1;
  v23 = sub_1BCAA2C(BattleLogicTask_TypeInfo, v20, v21, v22);
  BattleLogicTask___ctor((BattleLogicTask_o *)v23, 0LL);
  data = (BattleData_o *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v18;
  if ( !v23 )
    goto LABEL_26;
  *(_QWORD *)(v23 + 136) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 136), (int64_t)data, v24, v25, v26, v27, v28, v29);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v30 = this->fields.data) == 0LL)
    || (v31 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v30, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v23,
          (BattleSkillInfoData_o *)v19,
          v31,
          FieldPlayerServantIDList,
          0,
          0,
          0LL),
        BattleLogicTask__setActor((BattleLogicTask_o *)v23, 5, -1, 0LL),
        (data = (BattleData_o *)sub_1BCA888(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1BCAA3C(data, method);
  }
  v33 = data;
  data = (BattleData_o *)sub_1BCA91C(v23, data->klass->_1.element_class);
  if ( !data )
  {
    v41 = sub_1BCAA60(0LL);
    sub_1BCA908(v41, 0LL);
  }
  if ( !LODWORD(v33->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1BCAA44(data, method);
  v33->fields.rootfsm = (struct PlayMakerFSM_o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->fields.rootfsm, v23, v34, v35, v36, v37, v38, v39);
  return (BattleLogicTask_array *)v33;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getQuestBehaviorSkillTask(
        BattleLogicSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  QuestBehaviorMaster_o *v21; // x20
  int32_t v22; // w21
  int32_t Phase; // w0
  QuestBehaviorEntity_array *BattleSkill; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  QuestBehaviorEntity_array *v28; // x20
  System_Collections_Generic_List_object__o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x25
  QuestBehaviorEntity_o **m_Items; // x26
  __int64 v34; // x22
  unsigned int v35; // w0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  BattleLogicTask_o *v39; // x23
  System_Int32_array *v40; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0

  if ( (byte_4B18EEB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B18EEB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !MasterData_object )
    return 0LL;
  v21 = (QuestBehaviorMaster_o *)MasterData_object;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v22 = (int)Instance;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  BattleSkill = QuestBehaviorMaster__getBattleSkill(v21, v22, Phase, 0LL);
  if ( !BattleSkill )
    return 0LL;
  v28 = BattleSkill;
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( (int)v28->max_length >= 1 )
  {
    v32 = 0LL;
    m_Items = v28->m_Items;
    while ( 1 )
    {
      v34 = sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v19, v30, v31);
      BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v34, 0LL);
      if ( !v34 )
        break;
      *(_DWORD *)(v34 + 24) = -1;
      *(_QWORD *)(v34 + 16) = 20LL;
      if ( (unsigned int)v32 >= v28->max_length )
        goto LABEL_29;
      Instance = (DataManager_o *)m_Items[v32];
      if ( !Instance )
        break;
      v35 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0LL);
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v34 + 376LL))(
                                    v34,
                                    v35,
                                    *(_QWORD *)(*(_QWORD *)v34 + 384LL));
      if ( (unsigned int)v32 >= v28->max_length )
LABEL_29:
        sub_1BCAA44(Instance, v19);
      Instance = (DataManager_o *)m_Items[v32];
      if ( !Instance )
        break;
      *(_DWORD *)(v34 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
      v39 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v36, v37, v38);
      BattleLogicTask___ctor(v39, 0LL);
      if ( !v39 )
        break;
      BattleLogicTask__setActor(v39, 5, -1, 0LL);
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
      if ( !this->fields.data )
        break;
      v40 = (System_Int32_array *)Instance;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
      BattleLogicTask__setActionSkill(v39, (BattleSkillInfoData_o *)v34, v40, FieldPlayerServantIDList, 0, 0, 0LL);
      BattleLogicTask__setActor(v39, 5, -1, 0LL);
      if ( !v29 )
        break;
      items = v29->fields._items;
      v49 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v29->fields._version;
      if ( !items )
        break;
      size = v29->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)v39,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v39;
        sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v39, v42, v43, v44, v45, v46, v47);
      }
      if ( (int)++v32 >= (signed int)v28->max_length )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v29,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1BCAA3C(Instance, v19);
  }
  if ( !v29 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v29,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  BattleLogicTask_o *v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  const MethodInfo *v35; // x4
  System_Collections_Generic_IEnumerable_T__o *SkillTargetedBeforeFunctionSkill; // x0

  if ( (byte_4B18EE4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId, *(_QWORD *)&skillLv);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17);
    byte_4B18EE4 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&skillId,
                                                       *(_QWORD *)&skillLv,
                                                       ptTargetList);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v22 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v19, v20, v21);
  BattleLogicTask___ctor(v22, 0LL);
  if ( !v22
    || (BattleLogicTask__setCommandSpell(v22, skillId, 0LL, ptTargetList, 0LL), !v18)
    || (items = v18->fields._items,
        v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v18->fields._version,
        !items) )
  {
    sub_1BCAA3C(v23, v24);
  }
  size = v18->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)v22,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v18->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v22;
    sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v22, v25, v26, v27, v28, v29, v30);
  }
  SkillTargetedBeforeFunctionSkill = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(
                                                                                      this,
                                                                                      v22,
                                                                                      ptTargetList,
                                                                                      0LL,
                                                                                      v35);
  System_Collections_Generic_List_object___InsertRange(
    v18,
    0,
    SkillTargetedBeforeFunctionSkill,
    (const MethodInfo_35A2C40 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Int32_array *v14; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_object__o *v49; // x19
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  BattleLogicTask_o *v53; // x23
  __int64 data; // x0
  __int64 svtUniqueId; // x1
  BattleServantData_o *v56; // x25
  System_Int32_array *v57; // x2
  BattleLogicTarget_o *logictarget; // x21
  int32_t v59; // w29
  int32_t GlobalTargetId; // w0
  BattleData_o *v61; // x21
  int32_t v62; // w29
  int32_t TargetAiAct; // w21
  Il2CppClass *v64; // x0
  BattleLogicTarget_o *v65; // x29
  int32_t v66; // w21
  bool isPlayerID; // w0
  int32_t v68; // w2
  int32_t v69; // w1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Collections_Generic_List_object__o *v83; // x24
  __int64 v84; // x8
  __int64 v85; // x25
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  const MethodInfo *v89; // x4
  __int64 v90; // x1
  __int64 v91; // x25
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  __int64 v96; // x8
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  BattleSkillInfoData_o *v100; // x26
  System_Int32_array *v101; // x0
  __int64 v102; // x1
  System_Collections_Generic_IEnumerable_T__o *v103; // x0
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  BattleLogicSkill___c_c *v111; // x0
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v113; // x21
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  System_Collections_Generic_IEnumerable_T__o *v121; // x0
  const MethodInfo *isDeadToEnableUpHate; // [xsp+8h] [xbp-88h]

  v14 = enemyTargetList;
  if ( (byte_4B18EE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_StableSort_BattleLogicTask___, skillInfo, ptTargetList);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_BattleLogicTask___, v19, v20);
    sub_1BCA7E0(&System_Func_BattleLogicTask__int__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v29, v30);
    sub_1BCA7E0(&int___TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v41, v42);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_BattleLogicSkill___c__taskSkill_b__5_0__, v45, v46);
    sub_1BCA7E0(&BattleLogicSkill___c_TypeInfo, v47, v48);
    byte_4B18EE3 = 1;
  }
  v49 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       skillInfo,
                                                       ptTargetList,
                                                       enemyTargetList);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v53 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v50, v51, v52);
  BattleLogicTask___ctor(v53, 0LL);
  if ( !skillInfo )
    goto LABEL_94;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_94;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0LL);
  v56 = (BattleServantData_o *)data;
  if ( data )
  {
    data = BattleSkillInfoData__isServantSkill(skillInfo, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !v53 )
        goto LABEL_94;
      v53->fields.isCanCounterTask = isCanCounterSkill;
      v53->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  if ( v14 )
  {
    v57 = v14;
    if ( !v53 )
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
        v59 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !logictarget )
          goto LABEL_94;
        GlobalTargetId = BattleLogicTarget__getGlobalTargetId(
                           logictarget,
                           v59,
                           v59 == -1,
                           (System_Int32_array *)data,
                           0LL);
      }
      else
      {
        v61 = this->fields.data;
        v62 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !v61 )
          goto LABEL_94;
        GlobalTargetId = BattleData__getTargetLock(v61, v62, v62 == -1, (System_Int32_array *)data, 0LL);
      }
      TargetAiAct = GlobalTargetId;
      v64 = int___TypeInfo;
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_94;
      v65 = this->fields.logictarget;
      v66 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !v65 )
        goto LABEL_94;
      TargetAiAct = BattleLogicTarget__getTargetAiAct(
                      v65,
                      1,
                      v66,
                      0LL,
                      (System_Int32_array *)data,
                      1,
                      0,
                      0LL,
                      0LL,
                      (bool)&dword_0 + 1,
                      0LL);
      v64 = int___TypeInfo;
    }
    data = sub_1BCA888(v64, 1LL);
    if ( !data )
      goto LABEL_94;
    v57 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
      sub_1BCAA44(data, svtUniqueId);
    *(_DWORD *)(data + 32) = TargetAiAct;
    v14 = 0LL;
    if ( !v53 )
LABEL_94:
      sub_1BCAA3C(data, svtUniqueId);
  }
  BattleLogicTask__setActionSkill(v53, skillInfo, v57, ptTargetList, checkAlive, checkRevengeId, 0LL);
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v69 = 1;
    v68 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_94;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    v68 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v69 = 2;
    else
      v69 = 3;
  }
  BattleLogicTask__setActor(v53, v69, v68, 0LL);
  if ( !v49 )
    goto LABEL_94;
  items = v49->fields._items;
  v77 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v49->fields._version;
  if ( !items )
    goto LABEL_94;
  size = v49->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      (Il2CppObject *)v53,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    if ( !v56 )
      goto LABEL_47;
  }
  else
  {
    v79 = &items->obj.klass + size;
    v49->fields._size = size + 1;
    v79[4] = (Il2CppClass *)v53;
    sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 4), (int64_t)v53, v70, v71, v72, v73, v74, v75);
    if ( !v56 )
    {
LABEL_47:
      if ( isRecursiveCalled )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v49,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_48:
      v83 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                           v80,
                                                           v81,
                                                           v82);
      System_Collections_Generic_List_object____ctor(
        v83,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      goto LABEL_79;
    }
  }
  if ( !isManualBoot )
    goto LABEL_47;
  v83 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v80,
                                                       v81,
                                                       v82);
  System_Collections_Generic_List_object____ctor(
    v83,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)BattleServantData__EnumerateSkillBeforeFunctionSkill(v56, this->fields.data, 0LL);
  if ( !data )
    goto LABEL_94;
  v84 = *(_QWORD *)data;
  v85 = data;
  v86 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
  if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
  {
    v87 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)v87 - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v86;
      v87 += 4;
      if ( !v86 )
        goto LABEL_46;
    }
    v88 = v84 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_46:
    v88 = sub_1C1C7C0(data, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v91 = (*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v85, *(_QWORD *)(v88 + 8));
  if ( !v91 )
    sub_1BCAA3C(0LL, v90);
  while ( 1 )
  {
    v92 = *(_QWORD *)v91;
    v93 = *(unsigned __int16 *)(*(_QWORD *)v91 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v91 + 302LL) )
    {
      v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v94 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v93;
        v94 += 4;
        if ( !v93 )
          goto LABEL_55;
      }
      v95 = v92 + 16LL * *v94 + 312;
    }
    else
    {
LABEL_55:
      v95 = sub_1C1C7C0(v91, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8)) & 1) == 0 )
      break;
    v96 = *(_QWORD *)v91;
    v97 = *(unsigned __int16 *)(*(_QWORD *)v91 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v91 + 302LL) )
    {
      v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v98 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v97;
        v98 += 4;
        if ( !v97 )
          goto LABEL_62;
      }
      v99 = v96 + 16LL * *v98 + 312;
    }
    else
    {
LABEL_62:
      v99 = sub_1C1C7C0(v91, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v100 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v91, *(_QWORD *)(v99 + 8));
    v101 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
    if ( !v100 )
      sub_1BCAA3C(v101, v102);
    if ( !v101 )
      sub_1BCAA3C(0LL, v102);
    if ( !v101->max_length )
      sub_1BCAA44(v101, v102);
    v101->m_Items[1] = v100->fields.svtUniqueId;
    v103 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                            this,
                                                            v100,
                                                            v101,
                                                            0LL,
                                                            0,
                                                            0,
                                                            0,
                                                            0,
                                                            1,
                                                            isDeadToEnableUpHate);
    if ( !v83 )
      sub_1BCAA3C(v103, v103);
    System_Collections_Generic_List_object___AddRange(
      v83,
      v103,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  v104 = *(_QWORD *)v91;
  v105 = *(unsigned __int16 *)(*(_QWORD *)v91 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v91 + 302LL) )
  {
    v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
    {
      --v105;
      v106 += 4;
      if ( !v105 )
        goto LABEL_73;
    }
    v107 = v104 + 16LL * *v106 + 312;
  }
  else
  {
LABEL_73:
    v107 = sub_1C1C7C0(v91, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v107)(v91, *(_QWORD *)(v107 + 8));
  if ( isRecursiveCalled )
  {
    if ( !v83 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v49,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_81;
  }
  if ( !v83 )
    goto LABEL_48;
LABEL_79:
  data = (__int64)BattleLogicSkill__GetSkillTargetedBeforeFunctionSkill(this, v53, ptTargetList, v14, v89);
  if ( !v83 )
    goto LABEL_94;
  System_Collections_Generic_List_object___AddRange(
    v83,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_81:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v83,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_BattleLogicTask___) )
  {
    v111 = BattleLogicSkill___c_TypeInfo;
    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo, v108);
      v111 = BattleLogicSkill___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__int__o *)v111->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v111->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v111, v108);
        v111 = BattleLogicSkill___c_TypeInfo;
      }
      v113 = (Il2CppObject *)v111->static_fields->__9;
      _9__5_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleLogicTask__int__TypeInfo, v108, v109, v110);
      System_Func_object__int____ctor(_9__5_0, v113, Method_BattleLogicSkill___c__taskSkill_b__5_0__, 0LL);
      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_BattleLogicTask__int__o *)_9__5_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
    }
    v121 = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__StableSort_object_(
                                                            (System_Collections_Generic_List_T__o *)v83,
                                                            (System_Func_T__int__o *)_9__5_0,
                                                            0,
                                                            (const MethodInfo_2F028E0 *)Method_BasicHelper_StableSort_BattleLogicTask___);
    System_Collections_Generic_List_object___InsertRange(
      v49,
      0,
      v121,
      (const MethodInfo_35A2C40 *)Method_System_Collections_Generic_List_BattleLogicTask__InsertRange__);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v49,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18EF2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicSkill___c_TypeInfo, v1, v2);
    byte_4B18EF2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicSkill___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleLogicSkill___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__11_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1BCAA3C(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill___c___taskSkill_b__5_0(
        BattleLogicSkill___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8

  if ( !x || (skillInfo = x->fields.skillInfo) == 0LL )
    sub_1BCAA3C(this, x);
  return skillInfo->fields.priority;
}


void __fastcall BattleLogicSkill___c__DisplayClass13_0___ctor(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__0(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v10; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18EF3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, *(_QWORD *)&val);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    byte_4B18EF3 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BCAA3C(conditions, key);
  }
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v10, &result, 0LL) )
    return (int)result <= val;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__1(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  BattleLogicSkill___c__DisplayClass13_0_o *v16; // x0
  System_String_o *v17; // x1
  const MethodInfo *v18; // x2
  long double v19; // q0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18EF4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, *(_QWORD *)&val);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B18EF4 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(conditions, key);
  }
  v12 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v12, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v13, v14) >= val;
  v19 = sub_1BCACFC(conditions);
  return BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__2(v16, v17, *(double *)&v19, v18);
}


bool __fastcall BattleLogicSkill___c__DisplayClass13_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass13_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v10; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18EF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    byte_4B18EF5 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BCAA3C(conditions, key);
  }
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v10, &result, 0LL) )
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  BattleLogicSkill___c__DisplayClass17_0_o *v16; // x0
  int32_t v17; // w1
  const MethodInfo *v18; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18EF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    byte_4B18EF6 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(conditions, key);
  }
  v12 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v12, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v13, v14) >= val;
  sub_1BCACFC(conditions);
  return BattleLogicSkill___c__DisplayClass17_0___SetSkillCopyFunction_b__0(v16, v17, v18);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicSkill___c__DisplayClass17_0___SetSkillCopyFunction_b__1(
        BattleLogicSkill___c__DisplayClass17_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEntity; // x0

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1BCAA3C(0LL, *(_QWORD *)&type);
  return FunctionEntity__GetAddStateBuffTypeFromFunction(funcEntity, 0LL) == type;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicSkill___c__DisplayClass17_0___SetSkillCopyFunction_b__2(
        BattleLogicSkill___c__DisplayClass17_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1BCAA3C(this, *(_QWORD *)&type);
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
  if ( (byte_4B18EF7 & 1) == 0 )
  {
    this = (BattleLogicSkill___c__DisplayClass7_0_o *)sub_1BCA7E0(
                                                        &Method_System_Linq_Enumerable_Union_int___,
                                                        current,
                                                        *(_QWORD *)&targetType);
    byte_4B18EF7 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this || (task = v6->fields.task) == 0LL )
    sub_1BCAA3C(this, current);
  actorIdlist = task->fields.actorIdlist;
  data = _4__this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1BCAA44(data, current);
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
                                                            (const MethodInfo_2F4FC20 *)Method_System_Linq_Enumerable_Union_int___);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *__fastcall BattleLogicSkill___c__DisplayClass7_0___GetSkillTargetedBeforeFunctionSkill_b__2(
        BattleLogicSkill___c__DisplayClass7_0_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleLogicSkill_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicSkill___c__DisplayClass7_0_o *)_4__this->fields.data) == 0LL )
    sub_1BCAA3C(this, *(_QWORD *)&uniqueId);
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
    sub_1BCAA3C(this, svtData);
  return BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(svtData, task->fields.skillInfo, 0LL);
}