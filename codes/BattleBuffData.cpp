void __fastcall BattleBuffData___ctor(BattleBuffData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct System_Int32_array *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  BattleBuffData_SkillRankChangeData_o *v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_435540C & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&BattleBuffData_SkillRankChangeData_TypeInfo);
    byte_435540C = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.passiveList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.passiveList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.activeList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.activeList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.conditionalAuraBuff = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.conditionalAuraBuff,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.auraBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.auraBuffList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.addBuffOrder = 1;
  v31 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.unfixedBuffList = v31;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.unfixedBuffList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.classIconAuraEffectBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v38;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.classIconAuraEffectBuffList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.updateWaitIntervalBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v45;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.updateWaitIntervalBuffList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  this->fields.wkzero = v52;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.wkzero,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v59 = (BattleBuffData_SkillRankChangeData_o *)sub_B70764(BattleBuffData_SkillRankChangeData_TypeInfo);
  BattleBuffData_SkillRankChangeData___ctor(v59, this, 0LL);
  this->fields.skillChangeData = v59;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillChangeData,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
}


void __fastcall BattleBuffData__AddEffectBuffList(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20

  v4 = this;
  if ( (byte_4355453 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    byte_4355453 = 1;
  }
  if ( !buff )
    goto LABEL_15;
  if ( buff->fields.auraEffectId )
  {
    this = (BattleBuffData_o *)v4->fields.auraBuffList;
    if ( !this )
      goto LABEL_15;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
            (WarBoardManager_TaskList_o *)buff,
            (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v4->fields.auraBuffList;
      if ( !this )
        goto LABEL_15;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
  }
  if ( !buff->fields.classIconAuraEffectId )
    return;
  this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
  if ( !this )
LABEL_15:
    sub_B7076C(this, buff);
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
  {
    this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
    if ( this )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      return;
    }
    goto LABEL_15;
  }
}


void __fastcall BattleBuffData__AddForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v5; // x21

  if ( (byte_4355437 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B70694(&Method_BattleBuffData__AddForceBuff_b__90_0__);
    byte_4355437 = 1;
  }
  v5 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleBuffData__AddForceBuff_b__90_0__,
    (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v5,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData__AddGetSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *addBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x19
  BattleBuffData___c_c *v5; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__216_0; // x21
  Il2CppObject *v8; // x22
  struct BattleBuffData___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t v16; // w1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *auraBuffList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *passiveList; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v22; // x20
  void *v23; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v24; // x21
  Il2CppObject *v25; // x22
  struct BattleBuffData___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *activeList; // x20
  void *v34; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v35; // x21
  Il2CppObject *v36; // x22
  struct BattleBuffData___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v44; // x19
  void *v45; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v46; // x20
  Il2CppObject *v47; // x21
  struct BattleBuffData___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_435548B & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_B70694(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_0__);
    sub_B70694(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_1__);
    sub_B70694(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_2__);
    sub_B70694(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_3__);
    this = (BattleBuffData_o *)sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_435548B = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( !addBuffList )
    goto LABEL_58;
  if ( addBuffList->fields._size < 1 )
  {
    v16 = 0;
  }
  else
  {
    v5 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v5 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__216_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__216_0;
    if ( !_9__216_0 )
    {
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__216_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__216_0,
        v8,
        Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_0__,
        (const MethodInfo_29AD124 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v9 = BattleBuffData___c_TypeInfo->static_fields;
      v9->__9__216_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__216_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v9->__9__216_0,
        (System_Int32_array **)_9__216_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)addBuffList,
            (System_Func_TSource__int__o *)_9__216_0,
            (const MethodInfo_1CBF1A4 *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  BattleBuffData__UpdateBuffAddOrder(v4, v16, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)addBuffList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v17 )
      break;
    current = v56.fields.current;
    if ( !v56.fields.current )
      sub_B7076C(v17, v18);
    if ( LODWORD(v56.fields.current[4].klass) )
    {
      auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.auraBuffList;
      if ( !auraBuffList )
        sub_B7076C(0LL, v18);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        auraBuffList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v56.fields.current,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
    if ( BYTE1(current[2].klass) )
    {
      passiveList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.passiveList;
      if ( !passiveList )
        sub_B7076C(0LL, v18);
    }
    else
    {
      passiveList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.activeList;
      if ( !passiveList )
        sub_B7076C(0LL, v18);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      passiveList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)current,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v22 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4->fields.passiveList;
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v23 = this[1].fields.passiveList;
  v24 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)*((_QWORD *)v23 + 28);
  if ( !v24 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v23 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v25 = *(Il2CppObject **)v23;
    v24 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v24,
      v25,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_1__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v26 = BattleBuffData___c_TypeInfo->static_fields;
    v26->__9__216_1 = (struct System_Comparison_BattleBuffData_BuffData__o *)v24;
    sub_B70630(
      (BattleServantConfConponent_o *)&v26->__9__216_1,
      (System_Int32_array **)v24,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v22 )
    goto LABEL_58;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v22,
    (System_Comparison_T__o *)v24,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v34 = this[1].fields.passiveList;
  v35 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)*((_QWORD *)v34 + 29);
  if ( !v35 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v34 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v36 = *(Il2CppObject **)v34;
    v35 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v35,
      v36,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_2__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v37 = BattleBuffData___c_TypeInfo->static_fields;
    v37->__9__216_2 = (struct System_Comparison_BattleBuffData_BuffData__o *)v35;
    sub_B70630(
      (BattleServantConfConponent_o *)&v37->__9__216_2,
      (System_Int32_array **)v35,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !activeList )
    goto LABEL_58;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    activeList,
    (System_Comparison_T__o *)v35,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  v44 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4->fields.auraBuffList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v45 = this[1].fields.passiveList;
  v46 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)*((_QWORD *)v45 + 30);
  if ( !v46 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v45 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v47 = *(Il2CppObject **)v45;
    v46 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v46,
      v47,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_3__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v48 = BattleBuffData___c_TypeInfo->static_fields;
    v48->__9__216_3 = (struct System_Comparison_BattleBuffData_BuffData__o *)v46;
    sub_B70630(
      (BattleServantConfConponent_o *)&v48->__9__216_3,
      (System_Int32_array **)v46,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !v44 )
LABEL_58:
    sub_B7076C(this, addBuffList);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v44,
    (System_Comparison_T__o *)v46,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
}


void __fastcall BattleBuffData__AddResumptionHpFromLossMaxHp(
        BattleBuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.resumptionHpFromLossMaxHp += value;
}


void __fastcall BattleBuffData__AddUpdateWaitIntervalBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *updateWaitIntervalBuffList; // x0

  if ( (byte_4355409 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4355409 = 1;
  }
  updateWaitIntervalBuffList = this->fields.updateWaitIntervalBuffList;
  if ( !updateWaitIntervalBuffList )
    sub_B7076C(0LL, buff);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)updateWaitIntervalBuffList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffEnumerable(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_435549D & 1) == 0 )
  {
    sub_B70694(&BattleBuffData__AllBuffEnumerable_d__244_TypeInfo);
    byte_435549D = 1;
  }
  v3 = sub_B70764(BattleBuffData__AllBuffEnumerable_d__244_TypeInfo);
  BattleBuffData__AllBuffEnumerable_d__244___ctor((BattleBuffData__AllBuffEnumerable_d__244_o *)v3, -2, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 40), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v3;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerable(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_435549F & 1) == 0 )
  {
    sub_B70694(&BattleBuffData__AllBuffValidEnumerable_d__246_TypeInfo);
    byte_435549F = 1;
  }
  v5 = sub_B70764(BattleBuffData__AllBuffValidEnumerable_d__246_TypeInfo);
  BattleBuffData__AllBuffValidEnumerable_d__246___ctor((BattleBuffData__AllBuffValidEnumerable_d__246_o *)v5, -2, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 49) = isCheckInterval;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_435549E & 1) == 0 )
  {
    sub_B70694(&BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_TypeInfo);
    byte_435549E = 1;
  }
  v5 = sub_B70764(BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_TypeInfo);
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__245___ctor(
    (BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 49) = isCheckInterval;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
}


void __fastcall BattleBuffData__ApplyBuffData(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        System_Collections_Generic_List_BattleBuffData_BuffData__o **dataList,
        const MethodInfo *method)
{
  Il2CppObject *current; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4355488 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4355488 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !*dataList )
    sub_B7076C(0LL, buff);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*dataList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v7 )
      break;
    current = v9.fields.current;
    if ( !v9.fields.current )
      sub_B7076C(v7, v8);
    if ( !buff )
      sub_B7076C(v7, v8);
    if ( LODWORD(v9.fields.current[4].klass) == buff->fields.auraEffectId
      && LODWORD(v9.fields.current[1].klass) == buff->fields.buffId )
    {
      LODWORD(v9.fields.current[9].klass) = buff->fields.state;
      HIDWORD(current[8].monitor) = buff->fields.addOrder;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__BoardTurnProgressing(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  void *passiveList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v9; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__69_0; // x22
  Il2CppObject *v12; // x23
  struct BattleBuffData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v20; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x22
  _BOOL8 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  int v25; // w21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  struct BattleBuffData___c_StaticFields *v27; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__69_1; // x22
  Il2CppObject *v29; // x23
  struct BattleBuffData___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v38; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x22
  const MethodInfo *v40; // x3
  System_Collections_Generic_IEnumerable_T__o *v41; // x0
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-98h] BYREF
  int v45[2]; // [xsp+20h] [xbp-80h]
  int v46; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4355425 & 1) == 0 )
  {
    sub_B70694(&Method_BattleBuffData_checkBuffClear__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__BoardTurnProgressing_b__69_0__);
    sub_B70694(&Method_BattleBuffData___c__BoardTurnProgressing_b__69_1__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355425 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v46 = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v47 = v44;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v47,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v6 )
      break;
    if ( !v47.fields.current )
      sub_B7076C(v6, v7);
    if ( LOBYTE(v47.fields.current[23].klass) )
      BattleBuffData__ProgressBuffTurn((BattleBuffData_o *)v6, (BattleBuffData_BuffData_o *)v47.fields.current, v8);
  }
  v45[0] = 69;
  v46 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v46 = 0;
  v9 = this->fields.passiveList;
  passiveList = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)passiveList + 23);
  _9__69_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__69_0;
  if ( !_9__69_0 )
  {
    if ( (*((_BYTE *)passiveList + 307) & 4) != 0 && !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__69_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__69_0,
      v12,
      Method_BattleBuffData___c__BoardTurnProgressing_b__69_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v13 = BattleBuffData___c_TypeInfo->static_fields;
    v13->__9__69_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__69_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v13->__9__69_0,
      (System_Int32_array **)_9__69_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !v9 )
    goto LABEL_42;
  passiveList = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v9,
                  (System_Predicate_T__o *)_9__69_0,
                  (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v3 )
    goto LABEL_42;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    (System_Collections_Generic_IEnumerable_T__o *)passiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v20 = this->fields.passiveList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v20 )
    goto LABEL_42;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v20,
    (System_Predicate_T__o *)v21,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v47 = v44;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v22 )
      break;
    if ( !v47.fields.current )
      sub_B7076C(v22, v23);
    if ( LOBYTE(v47.fields.current[23].klass) )
      BattleBuffData__ProgressBuffTurn((BattleBuffData_o *)v22, (BattleBuffData_BuffData_o *)v47.fields.current, v24);
  }
  v45[0] = 207;
  v25 = ++v46;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v25 && v45[v25 - 1] == 207 )
    v46 = v25 - 1;
  passiveList = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  v27 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)passiveList + 23);
  _9__69_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v27->__9__69_1;
  if ( !_9__69_1 )
  {
    if ( (*((_BYTE *)passiveList + 307) & 4) != 0 && !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      v27 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)v27->__9;
    _9__69_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__69_1,
      v29,
      Method_BattleBuffData___c__BoardTurnProgressing_b__69_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v30 = BattleBuffData___c_TypeInfo->static_fields;
    v30->__9__69_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__69_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v30->__9__69_1,
      (System_Int32_array **)_9__69_1,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !activeList
    || (All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                               (System_Predicate_T__o *)_9__69_1,
                                                               (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
          All,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__),
        v38 = this->fields.activeList,
        v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v39,
          (Il2CppObject *)this,
          Method_BattleBuffData_checkBuffClear__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !v38) )
  {
LABEL_42:
    sub_B7076C(passiveList, v4);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v38,
    (System_Predicate_T__o *)v39,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v41 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3,
                                                         0,
                                                         v40);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    v41,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3,
    v42);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


bool __fastcall BattleBuffData__CancelExtendingLife(BattleBuffData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x19
  BattleBuffData___c_c *v4; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__72_0; // x20
  Il2CppObject *v7; // x21
  struct BattleBuffData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v16; // x0
  BattleBuffData___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_T__o *v18; // x19
  struct BattleBuffData___c_StaticFields *v19; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__72_1; // x20
  Il2CppObject *v21; // x21
  struct BattleBuffData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4355428 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__CancelExtendingLife_b__72_0__);
    sub_B70694(&Method_BattleBuffData___c__CancelExtendingLife_b__72_1__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355428 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffEnumerable(this, method);
  v4 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v4 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__72_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__72_0;
  if ( !_9__72_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__72_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__72_0,
      v7,
      Method_BattleBuffData___c__CancelExtendingLife_b__72_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    v8 = BattleBuffData___c_TypeInfo->static_fields;
    v8->__9__72_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__72_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__72_0,
      (System_Int32_array **)_9__72_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v3,
          (System_Func_TSource__bool__o *)_9__72_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v16 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v15,
          (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v17 = BattleBuffData___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)v16;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v17 = BattleBuffData___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__72_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v19->__9__72_1;
  if ( !_9__72_1 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v19 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__72_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__72_1,
      v21,
      Method_BattleBuffData___c__CancelExtendingLife_b__72_1__,
      (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v22 = BattleBuffData___c_TypeInfo->static_fields;
    v22->__9__72_1 = (struct System_Action_BattleBuffData_BuffData__o *)_9__72_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v22->__9__72_1,
      (System_Int32_array **)_9__72_1,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v18,
    (System_Action_T__o *)_9__72_1,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v18, 0LL);
}


bool __fastcall BattleBuffData__ChangeBuffState(
        BattleBuffData_o *this,
        int32_t now,
        int32_t max,
        System_Int32_array *servantIndv,
        System_Int32_array *buffIndv,
        System_Int32_array *fieldIndiv,
        System_Int32_array *canSubStateBuffIndv,
        const MethodInfo *method)
{
  __int64 v15; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v48; // x21

  if ( (byte_435545D & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass148_0__ChangeBuffState_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass148_0_TypeInfo);
    byte_435545D = 1;
  }
  v15 = sub_B70764(BattleBuffData___c__DisplayClass148_0_TypeInfo);
  BattleBuffData___c__DisplayClass148_0___ctor((BattleBuffData___c__DisplayClass148_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_7;
  *(_QWORD *)(v15 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 24) = now;
  *(_DWORD *)(v15 + 28) = max;
  *(_QWORD *)(v15 + 32) = servantIndv;
  sub_B70630(
    (BattleServantConfConponent_o *)(v15 + 32),
    (System_Int32_array **)servantIndv,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  *(_QWORD *)(v15 + 40) = buffIndv;
  sub_B70630((BattleServantConfConponent_o *)(v15 + 40), (System_Int32_array **)buffIndv, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v15 + 48) = fieldIndiv;
  sub_B70630(
    (BattleServantConfConponent_o *)(v15 + 48),
    (System_Int32_array **)fieldIndiv,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  *(_QWORD *)(v15 + 56) = canSubStateBuffIndv;
  sub_B70630(
    (BattleServantConfConponent_o *)(v15 + 56),
    (System_Int32_array **)canSubStateBuffIndv,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  *(_BYTE *)(v15 + 64) = 0;
  v48 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v48,
    (Il2CppObject *)v15,
    Method_BattleBuffData___c__DisplayClass148_0__ChangeBuffState_b__0__,
    (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v48,
          (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.activeList) == 0LL) )
  {
LABEL_7:
    sub_B7076C(passiveList, v17);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
    (System_Action_T__o *)v48,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  return *(_BYTE *)(v15 + 64);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__CheckAndGetFixedBuffArray(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *checkBuffArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  _BOOL8 IsUnfix; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x8
  unsigned __int64 v10; // x23
  BattleBuffData_BuffData_o *v11; // x22
  __int64 v13; // x0

  if ( (byte_435548F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_435548F = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checkBuffArray )
    goto LABEL_14;
  v9 = *(_QWORD *)&checkBuffArray->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v9 )
      {
        v13 = sub_B70798(IsUnfix);
        sub_B70738(v13, 0LL);
      }
      v11 = checkBuffArray->m_Items[v10];
      IsUnfix = BattleBuffData__IsUnfix(this, v11, v8);
      if ( !IsUnfix )
      {
        if ( !v5 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v9) = checkBuffArray->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v9 );
  }
  if ( !v5 )
LABEL_14:
    sub_B7076C(IsUnfix, v7);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


void __fastcall BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  BuffEntity_o *v9; // x0
  int v10; // w22
  WarEntity_o *Entity; // x8
  int32_t v12; // w21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4355407 & 1) == 0 )
  {
    sub_B70694(&BuffEntity_TypeInfo);
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355407 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
  v9 = (BuffEntity_o *)sub_B70764(BuffEntity_TypeInfo);
  BuffEntity___ctor(v9, 0LL);
  if ( !buffList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v16 = v15;
  v10 = 0;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v13 )
      break;
    if ( !v16.fields.current )
      sub_B7076C(v13, v14);
    if ( !BYTE1(v16.fields.current[24].klass) )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7076C(v13, v14);
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int32_t)v16.fields.current[1].klass,
                 (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = *(&Entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        v10 |= BuffList__CheckType(133, v12, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v10 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      return;
    }
LABEL_21:
    sub_B7076C(Instance, v7);
  }
}


bool __fastcall BattleBuffData__CheckBuffGroup(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        int32_t groupId,
        int32_t attachTarget,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Func_int__bool__o **v12; // x22
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *current; // x23
  BuffMaster_o *buffMst; // x0
  __int64 v17; // x1
  System_Int32_array *monitor; // x23
  System_Func_int__bool__o *v19; // x24
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // w19
  int v27; // w20
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_435543A & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass94_0__CheckBuffGroup_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass94_0_TypeInfo);
    byte_435543A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v9 = sub_B70764(BattleBuffData___c__DisplayClass94_0_TypeInfo);
  BattleBuffData___c__DisplayClass94_0___ctor((BattleBuffData___c__DisplayClass94_0_o *)v9, 0LL);
  if ( !v9 || (*(_DWORD *)(v9 + 16) = attachTarget, !buffList) )
    sub_B7076C(v10, v11);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v31 = v30;
  v12 = (System_Func_int__bool__o **)(v9 + 24);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v13 )
      break;
    current = v31.fields.current;
    if ( !v31.fields.current )
      sub_B7076C(v13, v14);
    if ( !BYTE1(v31.fields.current[24].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v14);
      if ( !buffMst )
        sub_B7076C(0LL, v17);
      if ( BuffMaster__GetBuffGroup(buffMst, (int32_t)current[1].klass, -1, 0LL) == groupId )
      {
        monitor = (System_Int32_array *)current[13].monitor;
        if ( monitor )
        {
          v19 = *v12;
          if ( !*v12 )
          {
            v19 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v19,
              (Il2CppObject *)v9,
              Method_BattleBuffData___c__DisplayClass94_0__CheckBuffGroup_b__0__,
              (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
            *v12 = v19;
            sub_B70630(
              (BattleServantConfConponent_o *)(v9 + 24),
              (System_Int32_array **)v19,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
          }
          if ( BasicHelper__Any_int__29214704(
                 monitor,
                 (System_Func_T__bool__o *)v19,
                 (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616) )
          {
            v26 = 1;
            v27 = 3;
            goto LABEL_17;
          }
        }
      }
    }
  }
  v26 = 0;
  v27 = 1;
LABEL_17:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v26 & ((unsigned int)(v27 + 1) >> 2);
}


bool __fastcall BattleBuffData__CheckBuffRateTypeOrIndiv(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buffData,
        int32_t *value,
        int32_t *maxBuffRate,
        int32_t upperParam,
        const MethodInfo *method)
{
  __int64 BuffList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  il2cpp_array_size_t v14; // w8
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x3
  int v17; // w8
  __int64 v18; // x23
  unsigned int v19; // w25
  bool v20; // w27
  __int64 v21; // x28
  __int64 v22; // x8
  BattleBuffData_BuffData_o **v23; // x28
  __int64 v24; // t1
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x24
  BattleBuffData_o *UpBuffRateBuffIndivList; // x0
  const MethodInfo *v28; // x5
  int32_t v29; // w8
  __int64 v31; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4355467 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&BuffList_TYPE___TypeInfo);
    byte_4355467 = 1;
  }
  entity = 0LL;
  *value = 0;
  *maxBuffRate = upperParam;
  BuffList = sub_B706AC(int___TypeInfo, 2LL);
  if ( !BuffList )
    goto LABEL_41;
  v14 = *(_DWORD *)(BuffList + 24);
  if ( !v14 )
    goto LABEL_42;
  *(_DWORD *)(BuffList + 32) = 162;
  if ( v14 == 1 )
    goto LABEL_42;
  *(_DWORD *)(BuffList + 36) = 161;
  if ( !BattleBuffData__CheckBuffType(this, (System_Int32_array *)BuffList, buffData, v13) )
  {
    BuffList = sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
    if ( BuffList )
    {
      if ( !*(_DWORD *)(BuffList + 24) )
        goto LABEL_42;
      *(_DWORD *)(BuffList + 32) = 162;
      BuffList = (__int64)BattleBuffData__GetBuffList(this, (BuffList_TYPE_array *)BuffList, 0LL, 0, v15);
      if ( BuffList )
      {
        v17 = *(_DWORD *)(BuffList + 24);
        v18 = BuffList;
        if ( v17 >= 1 )
        {
          v19 = 0;
          v20 = 0;
          while ( v19 < v17 )
          {
            v21 = v18 + 8LL * (int)v19;
            v24 = *(_QWORD *)(v21 + 32);
            v23 = (BattleBuffData_BuffData_o **)(v21 + 32);
            v22 = v24;
            if ( !v24 )
              goto LABEL_41;
            v12 = *(_QWORD *)(v22 + 256);
            if ( v12 )
            {
              if ( *(_QWORD *)(v12 + 24) )
              {
                BuffList = BattleBuffData__CheckBuffType(this, (System_Int32_array *)v12, buffData, v16);
                if ( (BuffList & 1) != 0 )
                {
                  if ( v19 >= *(_DWORD *)(v18 + 24) )
                    break;
                  BuffList = BattleBuffData__checkBuffSuccessful(this, *v23, 1, v25);
                  if ( (BuffList & 1) != 0 )
                    goto LABEL_30;
                }
              }
            }
            entity = 0LL;
            BuffList = (__int64)BattleBuffData__get_buffMst(this, (const MethodInfo *)v12);
            if ( v19 >= *(_DWORD *)(v18 + 24) )
              break;
            if ( !*v23 || !BuffList )
              goto LABEL_41;
            BuffList = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)BuffList,
                         &entity,
                         (*v23)->fields.buffId,
                         (const MethodInfo_21C049C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
            if ( (BuffList & 1) != 0 )
            {
              BuffList = (__int64)entity;
              if ( !entity )
                goto LABEL_41;
              BuffList = (__int64)BuffEntity__GetUpBuffRateBuffIndivList((BuffEntity_o *)entity, 0LL);
              if ( BuffList )
              {
                if ( !buffData )
                  goto LABEL_41;
                BuffList = (__int64)BattleBuffData_BuffData__GetIndividualty(buffData, 0, 0, 0, 0LL);
                if ( !entity )
                  goto LABEL_41;
                v26 = (System_Int32_array *)BuffList;
                UpBuffRateBuffIndivList = (BattleBuffData_o *)BuffEntity__GetUpBuffRateBuffIndivList(
                                                                (BuffEntity_o *)entity,
                                                                0LL);
                BuffList = BattleBuffData__checkBuffTypeIndiviuality(
                             UpBuffRateBuffIndivList,
                             v26,
                             (System_Int32_array *)UpBuffRateBuffIndivList,
                             (BuffEntity_o *)entity,
                             0LL,
                             v28);
                if ( (BuffList & 1) != 0 )
                {
                  if ( v19 >= *(_DWORD *)(v18 + 24) )
                    break;
                  BuffList = BattleBuffData__checkBuffSuccessful(this, *v23, 1, v16);
                  if ( (BuffList & 1) != 0 )
                  {
LABEL_30:
                    if ( v19 >= *(_DWORD *)(v18 + 24) )
                      break;
                    if ( !*v23 )
                      goto LABEL_41;
                    *value += (*v23)->fields.param;
                    if ( v19 >= *(_DWORD *)(v18 + 24) )
                      break;
                    if ( !*v23 )
                      goto LABEL_41;
                    v29 = (*v23)->fields.maxBuffRate;
                    v20 = 1;
                    if ( *maxBuffRate >= v29 )
                      v29 = *maxBuffRate;
                    *maxBuffRate = v29;
                  }
                }
              }
            }
            v17 = *(_DWORD *)(v18 + 24);
            if ( (int)++v19 >= v17 )
              return v20;
          }
LABEL_42:
          v31 = sub_B70798(BuffList);
          sub_B70738(v31, 0LL);
        }
        return 0;
      }
    }
LABEL_41:
    sub_B7076C(BuffList, v12);
  }
  return 0;
}


bool __fastcall BattleBuffData__CheckBuffType(
        BattleBuffData_o *this,
        System_Int32_array *types,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v7; // x22
  BuffMaster_o *buffMst; // x0
  const MethodInfo *v9; // x1
  System_Func_int__bool__o *v10; // x20

  if ( (byte_4355479 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass192_0__CheckBuffType_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass192_0_TypeInfo);
    byte_4355479 = 1;
  }
  v7 = sub_B70764(BattleBuffData___c__DisplayClass192_0_TypeInfo);
  BattleBuffData___c__DisplayClass192_0___ctor((BattleBuffData___c__DisplayClass192_0_o *)v7, 0LL);
  if ( !buffData )
    goto LABEL_10;
  if ( buffData->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, v9);
  if ( !v7 || !buffMst )
LABEL_10:
    sub_B7076C(buffMst, v9);
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
         (WarEntity_o **)(v7 + 16),
         buffData->fields.buffId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    v10 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v10,
      (Il2CppObject *)v7,
      Method_BattleBuffData___c__DisplayClass192_0__CheckBuffType_b__0__,
      (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
    return BasicHelper__Any_int__29214704(
             types,
             (System_Func_T__bool__o *)v10,
             (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616);
  }
  return 0;
}


bool __fastcall BattleBuffData__CheckCommandCardBuffActive(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        BattleBuffData_BuffData_o *buff,
        bool isCheckBuffSuccess,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  bool isEnableCommandCardBuff; // w8
  bool result; // w0

  if ( !buff )
    sub_B7076C(this, commandData);
  if ( !buff->fields._isRemove && BattleBuffData_BuffData__isCommandCardBuff(buff, 0LL) )
  {
    buff->fields.isActiveCC = 0;
    isEnableCommandCardBuff = BattleBuffData_BuffData__isEnableCommandCardBuff(buff, commandData, 0LL);
    result = 0;
    if ( !isEnableCommandCardBuff )
      return result;
    if ( !isCheckBuffSuccess || BattleBuffData__checkBuffSuccessful(this, buff, 1, v9) )
    {
      result = 1;
      buff->fields.isActiveCC = 1;
      return result;
    }
  }
  return 0;
}


bool __fastcall BattleBuffData__CheckDisableForciblyAddStateBuffAvoid(
        BattleBuffData_o *this,
        System_Int32_array *selfIndiv,
        System_Int32_array *opponentIndiv,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  BuffList_ActInfo_o *ActInfo; // x24
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v13; // x19
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x19
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  BattleBuffData_BuffData_o *v27; // x0
  __int64 v28; // x1
  BattleBuffData_BuffData_o *v29; // x25
  _BOOL8 IsCommandAssistBuff; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  bool v34; // w20
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  const MethodInfo *v40; // [xsp+0h] [xbp-80h]
  int v41; // [xsp+10h] [xbp-70h]
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_43554AA & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_43554AA = 1;
  }
  plusMinus = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  plusMinus = 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(38, 0LL, 0LL);
  v10 = BattleBuffData__AllBuffValidEnumerable(this, 0, v9);
  if ( !v10 )
    sub_B7076C(0LL, v11);
  klass = v10->klass;
  v13 = v10;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_B08590(v10, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v13,
          *(_QWORD *)(p_method + 8));
  if ( !v18 )
    sub_B7076C(0LL, v17);
  while ( 1 )
  {
    v19 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_21;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_21:
      v22 = sub_B08590(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
      break;
    v23 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v25 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_28;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_28:
      v26 = sub_B08590(v18, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v27 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      sub_B7076C(0LL, v28);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v27, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v29,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v29, 0LL) || v29->fields.isActiveCC) )
    {
      IsCommandAssistBuff = BattleBuffData_BuffData__IsCommandAssistBuff(v29, 0LL);
      if ( !IsCommandAssistBuff || (IsCommandAssistBuff = BattleBuffData_BuffData__IsActiveCommandAssist(v29, 0LL)) )
      {
        if ( !Master_WarQuestSelectionMaster )
          sub_B7076C(IsCommandAssistBuff, v31);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               Master_WarQuestSelectionMaster,
               &entity,
               v29->fields.buffId,
               (const MethodInfo_21C049C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B7076C(0LL, v32);
          if ( BuffEntity__IsDisableForciblyAddState((BuffEntity_o *)entity, 0LL)
            && BattleBuffData__checkIndiviuality_31764832(
                 this,
                 ActInfo,
                 v29,
                 selfIndiv,
                 opponentIndiv,
                 0LL,
                 0LL,
                 &plusMinus,
                 v40)
            && BattleBuffData__checkBuffSuccessful(this, v29, 0, v33) )
          {
            v41 = 178;
            v34 = 1;
            goto LABEL_45;
          }
        }
      }
    }
  }
  v34 = 0;
  v41 = 176;
LABEL_45:
  v35 = *(_QWORD *)v18;
  if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
  {
    v36 = 0LL;
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
        goto LABEL_49;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_49:
    v38 = sub_B08590(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v18, *(_QWORD *)(v38 + 8));
  if ( v41 == 176 )
    return 0;
  return v34;
}


void __fastcall BattleBuffData__CheckDummyBuffData(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *reList,
        const MethodInfo *method)
{
  int32_t size; // w8
  unsigned __int64 v5; // x21
  BattleBuffData_ShowBuffData_o *v6; // x8
  int v7; // w8
  unsigned __int64 i; // x20
  signed __int64 v9; // x8
  struct BattleBuffData_ShowBuffData_array *items; // x8
  BattleBuffData_ShowBuffData_o *v11; // x9
  BattleBuffData_ShowBuffData_o *v12; // x9
  BattleBuffData_ShowBuffData_o *v13; // x8

  if ( (byte_4355418 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Count__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Item__);
    byte_4355418 = 1;
  }
  if ( !reList )
LABEL_32:
    sub_B7076C(this, reList);
  size = reList->fields._size;
  if ( size - 1 >= 0 )
  {
    v5 = size - 1;
    while ( 1 )
    {
      if ( (__int64)v5 < size )
      {
        if ( v5 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v6 = reList->fields._items->m_Items[v5];
        if ( !v6 )
          goto LABEL_32;
        if ( !v6->fields.isRemove )
        {
          v7 = reList->fields._size - 1;
          if ( v7 >= 0 )
          {
            for ( i = v7; (i & 0x80000000) == 0; --i )
            {
              if ( v5 != i )
              {
                v9 = reList->fields._size;
                if ( (__int64)i < v9 && (__int64)v5 < v9 )
                {
                  if ( i >= (unsigned int)reList->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                  items = reList->fields._items;
                  v11 = items->m_Items[i];
                  if ( !v11 )
                    goto LABEL_32;
                  if ( v11->fields.isRemove )
                  {
                    if ( v5 >= (unsigned int)reList->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                    v12 = items->m_Items[v5];
                    if ( !v12 )
                      goto LABEL_32;
                    if ( i >= (unsigned int)reList->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                    v13 = items->m_Items[i];
                    if ( !v13 )
                      goto LABEL_32;
                    if ( v12->fields.addOrder == v13->fields.addOrder )
                      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                        (System_Collections_Generic_List_XWeaponTrail_Element__o *)reList,
                        i,
                        (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__RemoveAt__);
                  }
                }
              }
            }
          }
        }
      }
      if ( (--v5 & 0x80000000) != 0 )
        return;
      size = reList->fields._size;
    }
  }
}


BattleServantData_array *__fastcall BattleBuffData__CheckIndivSvtDataList(
        System_Collections_Generic_List_BattleServantData__o *svtDataList,
        System_Int32_array *tvals,
        bool isIncludeIgnoreIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  bool v10; // w21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x22
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_435543D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_435543D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !svtDataList )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)svtDataList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v19 = v18;
  v10 = isIncludeIgnoreIndiv;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v11 )
      break;
    current = v19.fields.current;
    if ( !v19.fields.current )
      sub_B7076C(v11, v12);
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             (BattleServantData_o *)v19.fields.current,
                                             0LL,
                                             v10,
                                             0,
                                             0,
                                             0LL);
    v15 = Individuality__CheckSignedIndividualities(ConcatServantAndBuffIndividualityies, tvals, 0LL);
    if ( v15 )
    {
      if ( !v7 )
        sub_B7076C(v15, v16);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v7 )
LABEL_14:
    sub_B7076C(v8, v9);
  return (BattleServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                      (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
}


bool __fastcall BattleBuffData__CheckInvalidSacrificeIndiv(
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *v2; // x19
  __int64 InvalidSacrificeIndividualities; // x0
  __int64 v4; // x1
  System_Int32_array *v5; // x20
  bool v6; // w21
  System_Int32_array *Individualty; // x0
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  struct BattleBuffData_StaticFields *static_fields; // x8
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t v16; // w21
  int32_t v17; // w21
  __int64 v19; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = buffData;
  if ( (byte_43554A8 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_TypeInfo);
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    buffData = (BattleBuffData_BuffData_o *)sub_B70694(&int___TypeInfo);
    byte_43554A8 = 1;
  }
  entity = 0LL;
  InvalidSacrificeIndividualities = (__int64)BattleBuffData__GetInvalidSacrificeIndividualities((const MethodInfo *)buffData);
  if ( !v2 )
    goto LABEL_27;
  v5 = (System_Int32_array *)InvalidSacrificeIndividualities;
  v6 = 1;
  Individualty = BattleBuffData_BuffData__GetIndividualty(v2, 1, 0, 0, 0LL);
  if ( !Individuality__CheckIndividualities(Individualty, v5, 0LL) )
  {
    InvalidSacrificeIndividualities = (__int64)BattleBuffData_TypeInfo->static_fields->s_buffMst;
    if ( InvalidSacrificeIndividualities )
      goto LABEL_11;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffMaster___);
    static_fields = BattleBuffData_TypeInfo->static_fields;
    static_fields->s_buffMst = (struct BuffMaster_o *)Master_WarQuestSelectionMaster;
    sub_B70630(
      (BattleServantConfConponent_o *)&static_fields->s_buffMst,
      Master_WarQuestSelectionMaster,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    InvalidSacrificeIndividualities = (__int64)BattleBuffData_TypeInfo->static_fields->s_buffMst;
    if ( InvalidSacrificeIndividualities )
    {
LABEL_11:
      InvalidSacrificeIndividualities = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)InvalidSacrificeIndividualities,
                                          &entity,
                                          v2->fields.buffId,
                                          (const MethodInfo_21C049C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (InvalidSacrificeIndividualities & 1) == 0 )
        return 0;
      if ( entity )
      {
        v16 = *(&entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        InvalidSacrificeIndividualities = BuffList__CheckType(40, v16, 0LL);
        if ( (InvalidSacrificeIndividualities & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_27;
          v17 = *(&entity->fields.id + 1);
          if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          if ( !BuffList__CheckType(41, v17, 0LL) )
            return 0;
        }
        InvalidSacrificeIndividualities = sub_B706AC(int___TypeInfo, 1LL);
        if ( InvalidSacrificeIndividualities )
        {
          if ( !*(_DWORD *)(InvalidSacrificeIndividualities + 24) )
          {
            v19 = sub_B70798(InvalidSacrificeIndividualities);
            sub_B70738(v19, 0LL);
          }
          *(_DWORD *)(InvalidSacrificeIndividualities + 32) = v2->fields.param;
          return Individuality__CheckIndividualities((System_Int32_array *)InvalidSacrificeIndividualities, v5, 0LL);
        }
      }
    }
LABEL_27:
    sub_B7076C(InvalidSacrificeIndividualities, v4);
  }
  return v6;
}


bool __fastcall BattleBuffData__CheckInvalidSacrificeIndivArray(
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffDataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v2; // x19
  const MethodInfo *v3; // x1
  char v4; // w19
  int v5; // w20
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  v2 = buffDataList;
  if ( (byte_43554A9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    buffDataList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_43554A9 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( !v2 )
    sub_B7076C(buffDataList, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v2,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v7.fields.current, v3) )
    {
      v4 = 1;
      v5 = 2;
      goto LABEL_9;
    }
  }
  v5 = 0;
  v4 = 0;
LABEL_9:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v5 == 2) & v4;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__CommonTurnProgressing(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        int32_t defCondState,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  __int64 v10; // x1
  void *passiveList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v16; // x24
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__68_0; // x25
  Il2CppObject *v19; // x26
  struct BattleBuffData___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v27; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x25
  _BOOL8 v29; // x0
  __int64 v30; // x1
  struct BattleData_o *v31; // x8
  struct BaseBattleEvent_o *v32; // x0
  int v33; // w22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x22
  struct BattleBuffData___c_StaticFields *v35; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__68_1; // x23
  Il2CppObject *v37; // x24
  struct BattleBuffData___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v46; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v47; // x23
  const MethodInfo *v48; // x3
  System_Collections_Generic_IEnumerable_T__o *v49; // x0
  const MethodInfo *v50; // x2
  BattleBuffData_o *v51; // x0
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x1
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+8h] [xbp-98h] BYREF
  int v56[2]; // [xsp+20h] [xbp-80h]
  int v57; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4355424 & 1) == 0 )
  {
    sub_B70694(&Method_BattleBuffData_checkBuffClear__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__CommonTurnProgressing_b__68_0__);
    sub_B70694(&Method_BattleBuffData___c__CommonTurnProgressing_b__68_1__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355424 = 1;
  }
  memset(&i, 0, sizeof(i));
  v57 = 0;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v55;
        ;
        ((void (__fastcall *)(struct BaseBattleEvent_o *, BattleBuffData_o *, Il2CppObject *, bool, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._32_ProgressBuffTurn.method)(
          battleEvent,
          this,
          i.fields.current,
          isEndEnemyTurn,
          (unsigned int)defCondState,
          battleEvent->klass->vtable._33_MakeTurnCondStateByServant.methodPtr) )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v12 )
      break;
    if ( !logic )
      sub_B7076C(v12, v13);
    data = logic->fields.data;
    if ( !data )
      sub_B7076C(v12, v13);
    battleEvent = data->fields.battleEvent;
    if ( !battleEvent )
      sub_B7076C(0LL, v13);
  }
  v56[0] = 73;
  v57 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v57 = 0;
  v16 = this->fields.passiveList;
  passiveList = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)passiveList + 23);
  _9__68_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__68_0;
  if ( !_9__68_0 )
  {
    if ( (*((_BYTE *)passiveList + 307) & 4) != 0 && !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__68_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__68_0,
      v19,
      Method_BattleBuffData___c__CommonTurnProgressing_b__68_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v20 = BattleBuffData___c_TypeInfo->static_fields;
    v20->__9__68_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__68_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v20->__9__68_0,
      (System_Int32_array **)_9__68_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v16 )
    goto LABEL_51;
  passiveList = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v16,
                  (System_Predicate_T__o *)_9__68_0,
                  (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v9 )
    goto LABEL_51;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    (System_Collections_Generic_IEnumerable_T__o *)passiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v27 = this->fields.passiveList;
  v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v28,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v27 )
    goto LABEL_51;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v27,
    (System_Predicate_T__o *)v28,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v55;
        ;
        ((void (__fastcall *)(struct BaseBattleEvent_o *, BattleBuffData_o *, Il2CppObject *, bool, _QWORD, Il2CppMethodPointer))v32->klass->vtable._32_ProgressBuffTurn.method)(
          v32,
          this,
          i.fields.current,
          isEndEnemyTurn,
          (unsigned int)defCondState,
          v32->klass->vtable._33_MakeTurnCondStateByServant.methodPtr) )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v29 )
      break;
    if ( !logic )
      sub_B7076C(v29, v30);
    v31 = logic->fields.data;
    if ( !v31 )
      sub_B7076C(v29, v30);
    v32 = v31->fields.battleEvent;
    if ( !v32 )
      sub_B7076C(0LL, v30);
  }
  v56[0] = 214;
  v33 = ++v57;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v33 && v56[v33 - 1] == 214 )
    v57 = v33 - 1;
  activeList = this->fields.activeList;
  passiveList = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  v35 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)passiveList + 23);
  _9__68_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v35->__9__68_1;
  if ( !_9__68_1 )
  {
    if ( (*((_BYTE *)passiveList + 307) & 4) != 0 && !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      v35 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)v35->__9;
    _9__68_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__68_1,
      v37,
      Method_BattleBuffData___c__CommonTurnProgressing_b__68_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v38 = BattleBuffData___c_TypeInfo->static_fields;
    v38->__9__68_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__68_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v38->__9__68_1,
      (System_Int32_array **)_9__68_1,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !activeList )
    goto LABEL_51;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__68_1,
                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    All,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v46 = this->fields.activeList;
  v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v47,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v46 )
    goto LABEL_51;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v46,
    (System_Predicate_T__o *)v47,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v49 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9,
                                                         0,
                                                         v48);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    v49,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9,
    v50);
  BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
    v51,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9,
    logic,
    v52);
  passiveList = (void *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9,
                          v53);
  if ( ((unsigned __int8)passiveList & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateFieldBuff(logic, 0LL);
      return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    }
LABEL_51:
    sub_B7076C(passiveList, v10);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__ConfirmationBuff(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        bool isRect,
        BattleBuffData_BuffData_o **targetBuff,
        System_Int32_array *selfIndvAll,
        System_Int32_array *opIndvAll,
        const MethodInfo *method)
{
  const MethodInfo *v17; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v21; // x19
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x19
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  BattleBuffData_BuffData_o *v35; // x0
  __int64 v36; // x1
  BattleBuffData_BuffData_o *v37; // x28
  const MethodInfo *v38; // x3
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  bool v45; // w20
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  const MethodInfo *v51; // [xsp+0h] [xbp-80h]
  bool isRec; // [xsp+1Ch] [xbp-64h]
  int v53; // [xsp+20h] [xbp-60h]
  int32_t plusMinus; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_435546C & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_435546C = 1;
  }
  *targetBuff = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)targetBuff,
    0LL,
    (System_String_array **)selfIndv,
    (System_String_array **)opIndv,
    (System_Boolean_array **)isRect,
    (System_Int32_array **)targetBuff,
    selfIndvAll,
    opIndvAll);
  plusMinus = 0;
  v18 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v17);
  if ( !v18 )
    sub_B7076C(0LL, v19);
  klass = v18->klass;
  v21 = v18;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(v18, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v21,
          *(_QWORD *)(p_method + 8));
  if ( !v26 )
    sub_B7076C(0LL, v25);
  isRec = isRect;
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_16;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_16:
      v30 = sub_B08590(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_23;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_23:
      v34 = sub_B08590(v26, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v35 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_B7076C(0LL, v36);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v35, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v37,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v37, 0LL) || v37->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v37, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v37, 0LL))
      && BattleBuffData__checkIndiviuality_31764832(
           this,
           actInfo,
           v37,
           selfIndv,
           opIndv,
           selfIndvAll,
           opIndvAll,
           &plusMinus,
           v51)
      && BattleBuffData__checkBuffSuccessful(this, v37, isRec, v38) )
    {
      *targetBuff = v37;
      sub_B70630((BattleServantConfConponent_o *)targetBuff, (System_Int32_array **)v37, v39, v40, v41, v42, v43, v44);
      v53 = 135;
      v45 = 1;
      goto LABEL_36;
    }
  }
  v45 = 0;
  v53 = 133;
LABEL_36:
  v46 = *(_QWORD *)v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v47 = 0LL;
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_40;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_40:
    v49 = sub_B08590(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v26, *(_QWORD *)(v49 + 8));
  if ( v53 == 133 )
    return 0;
  return v45;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__CreateDummyBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t addOrder; // w8
  System_Int32_array **intervalData; // x1

  if ( (byte_4355448 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_BuffData_TypeInfo);
    byte_4355448 = 1;
  }
  v4 = sub_B70764(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v4, 0LL);
  if ( !buff || !v4 )
    sub_B7076C(v5, v6);
  addOrder = buff->fields.addOrder;
  *(_BYTE *)(v4 + 385) = 1;
  *(_DWORD *)(v4 + 140) = addOrder;
  *(_DWORD *)(v4 + 400) = buff->fields.buffId;
  *(_BYTE *)(v4 + 33) = buff->fields.passive;
  *(_DWORD *)(v4 + 144) = buff->fields.state;
  intervalData = (System_Int32_array **)buff->fields.intervalData;
  *(_QWORD *)(v4 + 360) = intervalData;
  sub_B70630((BattleServantConfConponent_o *)(v4 + 360), intervalData, v7, v8, v9, v10, v11, v12);
  return (BattleBuffData_BuffData_o *)v4;
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__DebugGetShowServantParamAll(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **v13; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x22

  if ( (byte_435541C & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass46_0__DebugGetShowServantParamAll_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass46_0_TypeInfo);
    byte_435541C = 1;
  }
  v3 = sub_B70764(BattleBuffData___c__DisplayClass46_0_TypeInfo);
  BattleBuffData___c__DisplayClass46_0___ctor((BattleBuffData___c__DisplayClass46_0_o *)v3, 0LL);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v3 )
    goto LABEL_8;
  *(_QWORD *)(v3 + 16) = v4;
  v13 = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o **)(v3 + 16);
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)v4, v7, v8, v9, v10, v11, v12);
  v14 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_BattleBuffData___c__DisplayClass46_0__DebugGetShowServantParamAll_b__0__,
    (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v14,
          (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v14,
          (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = *v13) == 0LL) )
  {
LABEL_8:
    sub_B7076C(passiveList, v6);
  }
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)passiveList,
                                                (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


void __fastcall BattleBuffData__DelForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v5; // x21

  if ( (byte_4355438 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B70694(&Method_BattleBuffData__DelForceBuff_b__91_0__);
    byte_4355438 = 1;
  }
  v5 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleBuffData__DelForceBuff_b__91_0__,
    (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v5,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData__DeleteDummyBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *v2; // x19
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x23
  int32_t v4; // w20
  __int64 v5; // x21
  __int64 v6; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x23
  int32_t v8; // w20
  __int64 v9; // x21
  __int64 v10; // x8

  v2 = this;
  if ( (byte_4355492 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    byte_4355492 = 1;
  }
  activeList = v2->fields.activeList;
  if ( !activeList )
    goto LABEL_26;
  v4 = activeList->fields._size - 1;
  if ( v4 >= 0 )
  {
    v5 = 8LL * v4 + 32;
    do
    {
      if ( activeList->fields._size <= (unsigned int)v4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v6 = *(__int64 *)((char *)&activeList->fields._items->obj.klass + v5);
      if ( !v6 )
        break;
      if ( *(_BYTE *)(v6 + 385) )
      {
        this = (BattleBuffData_o *)v2->fields.activeList;
        if ( !this )
          break;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v4,
          (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      if ( --v4 < 0 )
        goto LABEL_15;
      activeList = v2->fields.activeList;
      v5 -= 8LL;
    }
    while ( activeList );
LABEL_26:
    sub_B7076C(this, method);
  }
LABEL_15:
  passiveList = v2->fields.passiveList;
  if ( !passiveList )
    goto LABEL_26;
  v8 = passiveList->fields._size - 1;
  if ( v8 >= 0 )
  {
    v9 = 8LL * v8 + 32;
    while ( 1 )
    {
      if ( passiveList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v10 = *(__int64 *)((char *)&passiveList->fields._items->obj.klass + v9);
      if ( !v10 )
        goto LABEL_26;
      if ( *(_BYTE *)(v10 + 385) )
      {
        this = (BattleBuffData_o *)v2->fields.passiveList;
        if ( !this )
          goto LABEL_26;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v8,
          (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      if ( --v8 < 0 )
        return;
      passiveList = v2->fields.passiveList;
      v9 -= 8LL;
      if ( !passiveList )
        goto LABEL_26;
    }
  }
}


void __fastcall BattleBuffData__DirectUpdateWaitIntervalBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *updateWaitIntervalBuffList; // x20
  void *v5; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__28_0; // x21
  Il2CppObject *v8; // x22
  struct BattleBuffData___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_435540B & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    sub_B70694(&Method_BattleBuffData___c__DirectUpdateWaitIntervalBuff_b__28_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_435540B = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.updateWaitIntervalBuffList, 0LL) )
  {
    updateWaitIntervalBuffList = this->fields.updateWaitIntervalBuffList;
    v5 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v5 = BattleBuffData___c_TypeInfo;
    }
    static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)v5 + 23);
    _9__28_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( (*((_BYTE *)v5 + 307) & 4) != 0 && !*((_DWORD *)v5 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v5);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__28_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__28_0,
        v8,
        Method_BattleBuffData___c__DirectUpdateWaitIntervalBuff_b__28_0__,
        (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      v9 = BattleBuffData___c_TypeInfo->static_fields;
      v9->__9__28_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__28_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v9->__9__28_0,
        (System_Int32_array **)_9__28_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    if ( !updateWaitIntervalBuffList
      || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)updateWaitIntervalBuffList,
            (System_Action_T__o *)_9__28_0,
            (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
          (v5 = this->fields.updateWaitIntervalBuffList) == 0LL) )
    {
      sub_B7076C(v5, v3);
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  }
}


bool __fastcall BattleBuffData__ExistsTargetIntervalBuff(
        BattleBuffData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  BattleBuffData_BuffData_array *AllIntervalBuffArray; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_43554A5 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_BattleBuffData_BuffData____69235904);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass252_0__ExistsTargetIntervalBuff_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass252_0_TypeInfo);
    byte_43554A5 = 1;
  }
  v5 = sub_B70764(BattleBuffData___c__DisplayClass252_0_TypeInfo);
  BattleBuffData___c__DisplayClass252_0___ctor((BattleBuffData___c__DisplayClass252_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = targetType;
  AllIntervalBuffArray = BattleBuffData__GetAllIntervalBuffArray(this, v14);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattleBuffData___c__DisplayClass252_0__ExistsTargetIntervalBuff_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)AllIntervalBuffArray,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_BattleBuffData_BuffData____69235904);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__GetActBuffDamageBuffTargetIndivArray(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  System_Int32_array **p_skillChangeData; // x8

  v6 = this;
  if ( (byte_435546D & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_435546D = 1;
  }
  if ( act != 107 )
  {
    this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v6, *(const MethodInfo **)&act);
    if ( buffData )
    {
      if ( this )
      {
        this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     buffData->fields.buffId,
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( this )
        {
          p_skillChangeData = (System_Int32_array **)&this->fields.skillChangeData;
          return *p_skillChangeData;
        }
      }
    }
LABEL_11:
    sub_B7076C(this, *(_QWORD *)&act);
  }
  if ( !buffData )
    goto LABEL_11;
  p_skillChangeData = &buffData->fields.hpReduceToRegainIndiv;
  return *p_skillChangeData;
}


BattleBuffData_ActValueResponse_o *__fastcall BattleBuffData__GetActValueDetail(
        BattleBuffData_o *this,
        BattleBuffData_ActValueRequest_o *actValueRequest,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  struct BattleBuffData_CheckIndividualitiesData_o *CheckIndividualitiesData_k__BackingField; // x8
  BattleBuffData_o *v6; // x21
  int conditionalAuraBuff; // w9
  int32_t v8; // w20
  int32_t v9; // w21
  System_String_o *v10; // x22
  int32_t v11; // w23
  BattleBuffData_ActValueResponse_o *v12; // x24
  const MethodInfo *v14; // [xsp+18h] [xbp-58h]
  int32_t lowerParam; // [xsp+2Ch] [xbp-44h] BYREF
  System_String_o *missText; // [xsp+30h] [xbp-40h] BYREF
  int32_t upperParam; // [xsp+3Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4355464 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&BattleBuffData_ActValueResponse_TypeInfo);
    byte_4355464 = 1;
  }
  upperParam = 0;
  missText = 0LL;
  lowerParam = 0;
  if ( !actValueRequest
    || (this = (BattleBuffData_o *)BattleBuffData_ActValueRequest__get_ActInfo(actValueRequest, 0LL),
        (CheckIndividualitiesData_k__BackingField = actValueRequest->fields._CheckIndividualitiesData_k__BackingField) == 0LL)
    || (v6 = this,
        this = (BattleBuffData_o *)BattleBuffData__getCalculationParam(
                                     v4,
                                     (BuffList_ActInfo_o *)this,
                                     CheckIndividualitiesData_k__BackingField->fields._selfConcatSvtIndividualities_k__BackingField,
                                     actValueRequest->fields._BuffIf_k__BackingField,
                                     CheckIndividualitiesData_k__BackingField->fields._opponentConcatSvtIndividualities_k__BackingField,
                                     &upperParam,
                                     &v4->fields.wkflg,
                                     &missText,
                                     &lowerParam,
                                     actValueRequest->fields._CheckIndividualitiesData_k__BackingField,
                                     0LL,
                                     v14),
        !v6) )
  {
    sub_B7076C(this, actValueRequest);
  }
  conditionalAuraBuff = (int)v6->fields.conditionalAuraBuff;
  v8 = upperParam;
  v9 = lowerParam;
  v10 = missText;
  v11 = (_DWORD)this - conditionalAuraBuff;
  v12 = (BattleBuffData_ActValueResponse_o *)sub_B70764(BattleBuffData_ActValueResponse_TypeInfo);
  BattleBuffData_ActValueResponse___ctor(v12, actValueRequest, v11, v8, v9, v10, 0LL);
  return v12;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllBGMChangeBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x19
  BattleBuffData___c_c *v4; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__249_0; // x20
  Il2CppObject *v7; // x21
  BattleServantConfConponent_o *p__9__249_0; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_43554A2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetAllBGMChangeBuffArray_b__249_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_43554A2 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffEnumerable(this, method);
  v4 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v4 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__249_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__249_0;
  if ( !_9__249_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__249_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__249_0,
      v7,
      Method_BattleBuffData___c__GetAllBGMChangeBuffArray_b__249_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    p__9__249_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__249_0;
    p__9__249_0->klass = (BattleServantConfConponent_c *)_9__249_0;
    sub_B70630(p__9__249_0, (System_Int32_array **)_9__249_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v3,
          (System_Func_TSource__bool__o *)_9__249_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            v15,
                                            (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetAllCommandAssistBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  BattleBuffData___c_c *v4; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__206_0; // x20
  Il2CppObject *v7; // x21
  struct BattleBuffData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4355484 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetAllCommandAssistBuff_b__206_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355484 = 1;
  }
  passiveList = this->fields.passiveList;
  v4 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v4 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__206_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__206_0;
  if ( !_9__206_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__206_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__206_0,
      v7,
      Method_BattleBuffData___c__GetAllCommandAssistBuff_b__206_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v8 = BattleBuffData___c_TypeInfo->static_fields;
    v8->__9__206_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__206_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__206_0,
      (System_Int32_array **)_9__206_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !passiveList )
    sub_B7076C(v4, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)_9__206_0,
                                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetAllCommandCodeBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  BattleBuffData___c_c *v4; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__205_0; // x20
  Il2CppObject *v7; // x21
  struct BattleBuffData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4355483 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetAllCommandCodeBuff_b__205_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355483 = 1;
  }
  passiveList = this->fields.passiveList;
  v4 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v4 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__205_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__205_0;
  if ( !_9__205_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__205_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__205_0,
      v7,
      Method_BattleBuffData___c__GetAllCommandCodeBuff_b__205_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v8 = BattleBuffData___c_TypeInfo->static_fields;
    v8->__9__205_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__205_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__205_0,
      (System_Int32_array **)_9__205_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !passiveList )
    sub_B7076C(v4, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)_9__205_0,
                                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllConnectedCommandCardBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  void *All; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__233_0; // x22
  Il2CppObject *v9; // x23
  BattleServantConfConponent_o *p__9__233_0; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x20
  struct BattleBuffData___c_StaticFields *v18; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__233_1; // x21
  Il2CppObject *v20; // x22
  BattleServantConfConponent_o *p__9__233_1; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_T__o *v28; // x0

  if ( (byte_4355496 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__233_0__);
    sub_B70694(&Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__233_1__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355496 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  activeList = this->fields.activeList;
  All = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__233_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__233_0;
  if ( !_9__233_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__233_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__233_0,
      v9,
      Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__233_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__233_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__233_0;
    p__9__233_0->klass = (BattleServantConfConponent_c *)_9__233_0;
    sub_B70630(p__9__233_0, (System_Int32_array **)_9__233_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !activeList )
    goto LABEL_23;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
          (System_Predicate_T__o *)_9__233_0,
          (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  All = BattleBuffData___c_TypeInfo;
  passiveList = this->fields.passiveList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v18 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__233_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v18->__9__233_1;
  if ( !_9__233_1 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      v18 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__233_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__233_1,
      v20,
      Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__233_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__233_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__233_1;
    p__9__233_1->klass = (BattleServantConfConponent_c *)_9__233_1;
    sub_B70630(p__9__233_1, (System_Int32_array **)_9__233_1, v22, v23, v24, v25, v26, v27);
  }
  if ( !passiveList )
LABEL_23:
    sub_B7076C(All, v4);
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                         (System_Predicate_T__o *)_9__233_1,
                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    v28,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllIntervalBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x19
  BattleBuffData___c_c *v4; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__251_0; // x20
  Il2CppObject *v7; // x21
  BattleServantConfConponent_o *p__9__251_0; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_43554A4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetAllIntervalBuffArray_b__251_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_43554A4 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffEnumerable(this, method);
  v4 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v4 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__251_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__251_0;
  if ( !_9__251_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__251_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__251_0,
      v7,
      Method_BattleBuffData___c__GetAllIntervalBuffArray_b__251_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    p__9__251_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__251_0;
    p__9__251_0->klass = (BattleServantConfConponent_c *)_9__251_0;
    sub_B70630(p__9__251_0, (System_Int32_array **)_9__251_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v3,
          (System_Func_TSource__bool__o *)_9__251_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            v15,
                                            (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllValidBGMChangeBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x19
  BattleBuffData___c_c *v5; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__250_0; // x20
  Il2CppObject *v8; // x21
  BattleServantConfConponent_o *p__9__250_0; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_43554A3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetAllValidBGMChangeBuffArray_b__250_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_43554A3 = 1;
  }
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffValidEnumerable(this, 1, v2);
  v5 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v5 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__250_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__250_0;
  if ( !_9__250_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__250_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__250_0,
      v8,
      Method_BattleBuffData___c__GetAllValidBGMChangeBuffArray_b__250_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    p__9__250_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__250_0;
    p__9__250_0->klass = (BattleServantConfConponent_c *)_9__250_0;
    sub_B70630(p__9__250_0, (System_Int32_array **)_9__250_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v4,
          (System_Func_TSource__bool__o *)_9__250_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            v16,
                                            (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAvaliableActiveBuffArray(
        BattleBuffData_o *this,
        System_Predicate_BattleBuffData_BuffData__o *conditionsToAdd,
        const MethodInfo *method)
{
  __int64 v5; // x21
  void *All; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__104_0; // x20
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  Il2CppObject *v17; // x21
  struct BattleBuffData___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_435543F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetAvaliableActiveBuffArray_b__104_0__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass104_0__GetAvaliableActiveBuffArray_b__1__);
    sub_B70694(&BattleBuffData___c__DisplayClass104_0_TypeInfo);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_435543F = 1;
  }
  v5 = sub_B70764(BattleBuffData___c__DisplayClass104_0_TypeInfo);
  BattleBuffData___c__DisplayClass104_0___ctor((BattleBuffData___c__DisplayClass104_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = conditionsToAdd;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 16),
    (System_Int32_array **)conditionsToAdd,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  activeList = this->fields.activeList;
  if ( !*(_QWORD *)(v5 + 16) )
  {
    All = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      All = BattleBuffData___c_TypeInfo;
    }
    static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
    _9__104_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__104_0;
    if ( !_9__104_0 )
    {
      if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
      {
        j_il2cpp_runtime_class_init_0(All);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__104_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__104_0,
        v17,
        Method_BattleBuffData___c__GetAvaliableActiveBuffArray_b__104_0__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v18 = BattleBuffData___c_TypeInfo->static_fields;
      v18->__9__104_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__104_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v18->__9__104_0,
        (System_Int32_array **)_9__104_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    if ( activeList )
      goto LABEL_16;
LABEL_18:
    sub_B7076C(All, v7);
  }
  _9__104_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    _9__104_0,
    (Il2CppObject *)v5,
    Method_BattleBuffData___c__DisplayClass104_0__GetAvaliableActiveBuffArray_b__1__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !activeList )
    goto LABEL_18;
LABEL_16:
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
          (System_Predicate_T__o *)_9__104_0,
          (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_18;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall BattleBuffData__GetBuffGeneralParamList(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfArray,
        System_Int32_array *opArray,
        bool isRec,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v11; // x19
  BuffList_ActInfo_o *ActInfo; // x24
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x20
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x1
  __int64 v22; // x20
  bool v23; // w25
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  BattleBuffData_BuffData_o *v32; // x0
  __int64 v33; // x1
  BattleBuffData_BuffData_o *v34; // x26
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0

  if ( (byte_4355473 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_4355473 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v14 = BattleBuffData__AllBuffValidEnumerable(this, 1, v13);
  if ( !v14 )
    sub_B7076C(0LL, v15);
  klass = v14->klass;
  v17 = v14;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_B08590(v14, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v17,
          *(_QWORD *)(p_method + 8));
  if ( !v22 )
    sub_B7076C(0LL, v21);
  v23 = isRec;
  while ( 1 )
  {
    v24 = *(_QWORD *)v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_19;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_19:
      v27 = sub_B08590(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v22, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_26;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_26:
      v31 = sub_B08590(v22, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v32 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v22, *(_QWORD *)(v31 + 8));
    v34 = v32;
    if ( !v32 )
      sub_B7076C(0LL, v33);
    if ( !v32->fields._isRemove
      && BattleBuffData_BuffData__CheckCond_24119328(v32, this, ActInfo, selfArray, opArray, v23, 0LL) )
    {
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v34->fields.generalParams, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v11 )
          sub_B7076C(IsNullOrEmpty, v36);
        System_Collections_Generic_List_int___AddRange(
          v11,
          (System_Collections_Generic_IEnumerable_T__o *)v34->fields.generalParams,
          (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
    }
  }
  v37 = *(_QWORD *)v22;
  if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
  {
    v38 = 0LL;
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
        goto LABEL_38;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_38:
    v40 = sub_B08590(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v22, *(_QWORD *)(v40 + 8));
  return v11;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetBuffList(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *checkIndividuality,
        bool isExcludeInterval,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  BattleBuffData_BuffData_array *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4355449 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    byte_4355449 = 1;
  }
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                                              this,
                                                              isExcludeInterval,
                                                              (const MethodInfo *)checkIndividuality);
  v10 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v9,
                                           (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  return BattleBuffData__getBuffList_31731308(this, types, checkIndividuality, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(
        BattleBuffData_o *this,
        int32_t act,
        BattleData_o *data,
        BattleServantData_o *svtData,
        bool isRec,
        const MethodInfo *method)
{
  BattleBuffData_o *v10; // x21
  BattleServantData_o *ServantData; // x23
  BattleBuffData_CheckIndividualitiesData_o *v12; // x24
  const MethodInfo *v13; // x6

  v10 = this;
  if ( (byte_4355476 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4355476 = 1;
  }
  if ( !svtData || (this = (BattleBuffData_o *)BattleServantData__getRevengeTargetUniqueId(svtData, 0LL), !data) )
    sub_B7076C(this, *(_QWORD *)&act);
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, svtData, ServantData, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__getBuffList_31751548(v10, act, v12, isRec, 0, 0LL, v13);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetClassIconEffectBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *classIconAuraEffectBuffList; // x19
  BattleBuffData___c_c *v4; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__261_0; // x20
  Il2CppObject *v7; // x21
  BattleServantConfConponent_o *p__9__261_0; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_43554AC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetClassIconEffectBuffList_b__261_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_43554AC = 1;
  }
  classIconAuraEffectBuffList = this->fields.classIconAuraEffectBuffList;
  v4 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v4 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__261_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__261_0;
  if ( !_9__261_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__261_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__261_0,
      v7,
      Method_BattleBuffData___c__GetClassIconEffectBuffList_b__261_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__261_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__261_0;
    p__9__261_0->klass = (BattleServantConfConponent_c *)_9__261_0;
    sub_B70630(p__9__261_0, (System_Int32_array **)_9__261_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !classIconAuraEffectBuffList )
    sub_B7076C(v4, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)classIconAuraEffectBuffList,
                                                                         (System_Predicate_T__o *)_9__261_0,
                                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetCommandCardBuffArray(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        int32_t targetBuffType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v10; // x2
  DataManager_c *klass; // x8
  DataManager_o *v12; // x20
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  BattleBuffData_BuffData_o *v26; // x25
  const MethodInfo *v27; // x4
  _BOOL8 v28; // x0
  __int64 v29; // x1
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w26
  __int64 v33; // x1
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // [xsp+8h] [xbp-68h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4355494 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355494 = 1;
  }
  entity = 0LL;
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
  Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v10);
  if ( !Instance )
    goto LABEL_48;
  klass = Instance->klass;
  v12 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v15 = sub_B08590(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
  if ( !v17 )
    sub_B7076C(0LL, v16);
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v19 = 0LL;
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_16;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_16:
      v21 = sub_B08590(v17, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v24 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_23;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_23:
      v25 = sub_B08590(v17, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v26 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    v28 = BattleBuffData__CheckCommandCardBuffActive(this, commandData, v26, 1, v27);
    if ( v28 )
    {
      entity = 0LL;
      if ( !v26 )
        sub_B7076C(v28, v29);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7076C(v28, v29);
      v30 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &entity,
              v26->fields.buffId,
              (const MethodInfo_21C049C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( v30 )
      {
        if ( !entity )
          sub_B7076C(v30, v31);
        v32 = *(&entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(targetBuffType, v32, 0LL) )
        {
          if ( !v39 )
            sub_B7076C(0LL, v33);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
      }
    }
  }
  v34 = *(_QWORD *)v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
  {
    v35 = 0LL;
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
        goto LABEL_40;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_40:
    v37 = sub_B08590(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v17, *(_QWORD *)(v37 + 8));
  Instance = (DataManager_o *)v39;
  if ( !v39 )
LABEL_48:
    sub_B7076C(Instance, v8);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetCommandCardTypeChangeBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *result; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  BattleBuffData_BuffData_array *BuffList_31731308; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x8
  __int64 v9; // x0

  if ( (byte_4355490 & 1) == 0 )
  {
    sub_B70694(&BuffList_TYPE___TypeInfo);
    byte_4355490 = 1;
  }
  result = (BattleBuffData_BuffData_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v4);
  if ( !result->fields.count )
    goto LABEL_11;
  *(_DWORD *)&result->fields.isUse = 156;
  BuffList_31731308 = BattleBuffData__getBuffList_31731308(this, (BuffList_TYPE_array *)result, 0LL, 0LL, v5);
  result = (BattleBuffData_BuffData_o *)BattleBuffData__CheckAndGetFixedBuffArray(this, BuffList_31731308, v7);
  if ( result )
  {
    v8 = *(_QWORD *)&result->fields.count;
    if ( v8 )
    {
      if ( (_DWORD)v8 )
        return *(BattleBuffData_BuffData_o **)&result->fields.isUse;
LABEL_11:
      v9 = sub_B70798(result);
      sub_B70738(v9, 0LL);
    }
    return 0LL;
  }
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetCounterFuncBuffDataList(
        BattleBuffData_o *this,
        BattleServantData_o *selfSvt,
        BattleServantData_o *targetSvt,
        bool checkOnly,
        const MethodInfo *method)
{
  bool IsConstantMasterIndvAddBuffActive; // w24
  BattleBuffData_CheckIndividualitiesData_o *v10; // x0
  BattleBuffData_CheckIndividualitiesData_o *v11; // x23
  BattleServantData_o *v12; // x1
  BattleServantData_o *v13; // x2
  const MethodInfo *v14; // x6

  if ( (byte_435549B & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_435549B = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  v11 = v10;
  if ( IsConstantMasterIndvAddBuffActive )
  {
    v12 = selfSvt;
    v13 = targetSvt;
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
  }
  BattleBuffData_CheckIndividualitiesData___ctor(v10, v12, v13, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__getBuffList_31751548(this, 102, v11, 0, checkOnly, 0LL, v14);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetCurrentWarBoardNotAttackedBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentAllBaffList; // x19
  BattleBuffData___c_c *v5; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__239_0; // x20
  Il2CppObject *v8; // x21
  BattleServantConfConponent_o *p__9__239_0; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4355499 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetCurrentWarBoardNotAttackedBuff_b__239_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355499 = 1;
  }
  CurrentAllBaffList = BattleBuffData__getCurrentAllBaffList(this, 1, v2);
  v5 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v5 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__239_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__239_0;
  if ( !_9__239_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__239_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__239_0,
      v8,
      Method_BattleBuffData___c__GetCurrentWarBoardNotAttackedBuff_b__239_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    p__9__239_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__239_0;
    p__9__239_0->klass = (BattleServantConfConponent_c *)_9__239_0;
    sub_B70630(p__9__239_0, (System_Int32_array **)_9__239_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)CurrentAllBaffList,
          (System_Func_TSource__bool__o *)_9__239_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                         v16,
                                                                         (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetEffectBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  void *All; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__223_0; // x22
  Il2CppObject *v9; // x23
  BattleServantConfConponent_o *p__9__223_0; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x20
  struct BattleBuffData___c_StaticFields *v18; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__223_1; // x21
  Il2CppObject *v20; // x22
  BattleServantConfConponent_o *p__9__223_1; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  BattleBuffData___c_c *v29; // x0
  struct BattleBuffData___c_StaticFields *v30; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__223_2; // x20
  Il2CppObject *v32; // x21
  BattleServantConfConponent_o *p__9__223_2; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  BattleBuffData___c_c *v40; // x0
  struct BattleBuffData___c_StaticFields *v41; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__223_3; // x20
  Il2CppObject *v43; // x21
  BattleServantConfConponent_o *p__9__223_3; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_435548E & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetEffectBuffList_b__223_0__);
    sub_B70694(&Method_BattleBuffData___c__GetEffectBuffList_b__223_1__);
    sub_B70694(&Method_BattleBuffData___c__GetEffectBuffList_b__223_2__);
    sub_B70694(&Method_BattleBuffData___c__GetEffectBuffList_b__223_3__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_435548E = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  All = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__223_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__223_0;
  if ( !_9__223_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__223_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__223_0,
      v9,
      Method_BattleBuffData___c__GetEffectBuffList_b__223_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__223_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__223_0;
    p__9__223_0->klass = (BattleServantConfConponent_c *)_9__223_0;
    sub_B70630(p__9__223_0, (System_Int32_array **)_9__223_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !passiveList )
    goto LABEL_39;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
          (System_Predicate_T__o *)_9__223_0,
          (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v3 )
    goto LABEL_39;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  All = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v18 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__223_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v18->__9__223_1;
  if ( !_9__223_1 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      v18 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__223_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__223_1,
      v20,
      Method_BattleBuffData___c__GetEffectBuffList_b__223_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__223_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__223_1;
    p__9__223_1->klass = (BattleServantConfConponent_c *)_9__223_1;
    sub_B70630(p__9__223_1, (System_Int32_array **)_9__223_1, v22, v23, v24, v25, v26, v27);
  }
  if ( !activeList )
LABEL_39:
    sub_B7076C(All, v4);
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__223_1,
                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    v28,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v29 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v29 = BattleBuffData___c_TypeInfo;
  }
  v30 = v29->static_fields;
  _9__223_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v30->__9__223_2;
  if ( !_9__223_2 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v30 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__223_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__223_2,
      v32,
      Method_BattleBuffData___c__GetEffectBuffList_b__223_2__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    p__9__223_2 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__223_2;
    p__9__223_2->klass = (BattleServantConfConponent_c *)_9__223_2;
    sub_B70630(p__9__223_2, (System_Int32_array **)_9__223_2, v34, v35, v36, v37, v38, v39);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v3,
    (System_Comparison_T__o *)_9__223_2,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  v40 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v40 = BattleBuffData___c_TypeInfo;
  }
  v41 = v40->static_fields;
  _9__223_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v41->__9__223_3;
  if ( !_9__223_3 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v41 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)v41->__9;
    _9__223_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__223_3,
      v43,
      Method_BattleBuffData___c__GetEffectBuffList_b__223_3__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__223_3 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__223_3;
    p__9__223_3->klass = (BattleServantConfConponent_c *)_9__223_3;
    sub_B70630(p__9__223_3, (System_Int32_array **)_9__223_3, v45, v46, v47, v48, v49, v50);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v3,
    (System_Predicate_T__o *)_9__223_3,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
}


int32_t __fastcall BattleBuffData__GetFamilyLinkageIdMax(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  System_Collections_Generic_HashSet_int__o *v4; // x22
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v15; // x20
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x1
  __int64 v20; // x20
  System_Action_int__o **v21; // x22
  System_Action_int__o **v22; // x23
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  BattleBuffData_BuffData_o *v31; // x0
  __int64 v32; // x1
  BattleBuffData_BuffData_o *v33; // x24
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  System_Action_int__o *v35; // x26
  System_Collections_Generic_IEnumerable_T__o *v36; // x25
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array *FamilyLinkageIdArray; // x0
  System_Action_int__o *v44; // x25
  System_Collections_Generic_IEnumerable_T__o *v45; // x24
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o **v57; // [xsp+0h] [xbp-60h]

  if ( (byte_435549C & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_int___);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass243_0__GetFamilyLinkageIdMax_b__0__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass243_0__GetFamilyLinkageIdMax_b__1__);
    sub_B70694(&BattleBuffData___c__DisplayClass243_0_TypeInfo);
    byte_435549C = 1;
  }
  v3 = sub_B70764(BattleBuffData___c__DisplayClass243_0_TypeInfo);
  BattleBuffData___c__DisplayClass243_0___ctor((BattleBuffData___c__DisplayClass243_0_o *)v3, 0LL);
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  if ( !v3 )
    goto LABEL_43;
  *(_QWORD *)(v3 + 16) = v4;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)v4, v7, v8, v9, v10, v11, v12);
  v5 = BattleBuffData__AllBuffEnumerable(this, v13);
  if ( !v5 )
    goto LABEL_43;
  klass = v5->klass;
  v15 = v5;
  if ( *(_WORD *)&v5->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&v5->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_B08590(v5, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v57 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o **)(v3 + 16);
  v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v15,
          *(_QWORD *)(p_method + 8));
  if ( !v20 )
    sub_B7076C(0LL, v19);
  v21 = (System_Action_int__o **)(v3 + 24);
  v22 = (System_Action_int__o **)(v3 + 32);
  while ( 1 )
  {
    v23 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_17;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_17:
      v26 = sub_B08590(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v20, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_24;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_24:
      v30 = sub_B08590(v20, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v31 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v20, *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      sub_B7076C(0LL, v32);
    FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(v31, 0LL);
    v35 = *v21;
    v36 = (System_Collections_Generic_IEnumerable_T__o *)FamilyLinkageTargetIdArray;
    if ( !*v21 )
    {
      v35 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v35,
        (Il2CppObject *)v3,
        Method_BattleBuffData___c__DisplayClass243_0__GetFamilyLinkageIdMax_b__0__,
        (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
      *v21 = v35;
      sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
    }
    BasicHelper__ForEach_int_(
      v36,
      (System_Action_T__o *)v35,
      (const MethodInfo_1BDD798 *)Method_BasicHelper_ForEach_int___);
    FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(v33, 0LL);
    v44 = *v22;
    v45 = (System_Collections_Generic_IEnumerable_T__o *)FamilyLinkageIdArray;
    if ( !*v22 )
    {
      v44 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v44,
        (Il2CppObject *)v3,
        Method_BattleBuffData___c__DisplayClass243_0__GetFamilyLinkageIdMax_b__1__,
        (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
      *v22 = v44;
      sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)v44, v46, v47, v48, v49, v50, v51);
    }
    BasicHelper__ForEach_int_(
      v45,
      (System_Action_T__o *)v44,
      (const MethodInfo_1BDD798 *)Method_BasicHelper_ForEach_int___);
  }
  v52 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v53 = 0LL;
    v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      v54 += 4;
      if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_36;
    }
    v55 = v52 + 16LL * *v54 + 312;
  }
  else
  {
LABEL_36:
    v55 = sub_B08590(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v55)(v20, *(_QWORD *)(v55 + 8));
  v5 = *v57;
  if ( !*v57 )
LABEL_43:
    sub_B7076C(v5, v6);
  if ( SLODWORD(v5[2].klass) < 1 )
    return 0;
  else
    return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v5, 0LL);
}


BattleBuffData_FieldChangeData_array *__fastcall BattleBuffData__GetFieldChangeArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v8; // x20
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  int *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x1
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  if ( (byte_43554A1 & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_FieldChangeData__TypeInfo);
    byte_43554A1 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_FieldChangeData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData___ctor__);
  v5 = BattleBuffData__AllBuffValidEnumerable(this, 1, v4);
  if ( !v5 )
    goto LABEL_38;
  klass = v5->klass;
  v8 = v5;
  if ( *(_WORD *)&v5->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&v5->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(v5, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v8,
          *(_QWORD *)(p_method + 8));
  if ( !v13 )
    sub_B7076C(0LL, v12);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
    {
      v15 = 0LL;
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
          goto LABEL_15;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_15:
      v17 = sub_B08590(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    v18 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
    {
      v19 = 0LL;
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v20 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
          goto LABEL_22;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_22:
      v21 = sub_B08590(v13, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_B7076C(0LL, v23);
    v24 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v22 + 312);
    if ( v24 )
    {
      if ( !v3 )
        sub_B7076C(v22, v24);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        v24,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__Add__);
    }
  }
  v25 = *(_QWORD *)v13;
  if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
  {
    v26 = 0LL;
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
        goto LABEL_32;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_32:
    v28 = sub_B08590(v13, System_IDisposable_TypeInfo, 0LL);
  }
  v5 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(
                                                                              v13,
                                                                              *(_QWORD *)(v28 + 8));
  if ( !v3 )
LABEL_38:
    sub_B7076C(v5, v6);
  return (BattleBuffData_FieldChangeData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                                   (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetFirstMatchCondBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x22
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v14; // x19
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x1
  __int64 v19; // x19
  bool v20; // w23
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  BattleBuffData_BuffData_o *v29; // x0
  __int64 v30; // x1
  BattleBuffData_BuffData_o *v31; // x24
  int v32; // w8
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  int v38; // [xsp+0h] [xbp-50h]

  if ( (byte_4355478 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4355478 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v11 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v10);
  if ( !v11 )
    sub_B7076C(0LL, v12);
  klass = v11->klass;
  v14 = v11;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_B08590(v11, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v14,
          *(_QWORD *)(p_method + 8));
  if ( !v19 )
    sub_B7076C(0LL, v18);
  v20 = isRec;
  while ( 1 )
  {
    v21 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_19;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_19:
      v24 = sub_B08590(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v19, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_26;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_26:
      v28 = sub_B08590(v19, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v29 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v19, *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      sub_B7076C(0LL, v30);
    if ( BattleBuffData_BuffData__CheckCond(v29, this, ActInfo, checkIndividualities, v20, 0LL) )
    {
      v32 = 68;
      goto LABEL_32;
    }
  }
  v31 = 0LL;
  v32 = 66;
LABEL_32:
  v38 = v32;
  v33 = *(_QWORD *)v19;
  if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
  {
    v34 = 0LL;
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
        goto LABEL_36;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_36:
    v36 = sub_B08590(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v19, *(_QWORD *)(v36 + 8));
  if ( v38 == 66 )
    return 0LL;
  return v31;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetFixBuffArray(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        const MethodInfo *method)
{
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x23
  const MethodInfo *v10; // x6
  System_Collections_Generic_IEnumerable_TSource__o *BuffList_31751548; // x0

  if ( (byte_4355477 & 1) == 0 )
  {
    sub_B70694(&Method_BattleBuffData_IsFixBuff__);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    byte_4355477 = 1;
  }
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleBuffData_IsFixBuff__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  BuffList_31751548 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList_31751548(
                                                                             this,
                                                                             act,
                                                                             checkIndividualities,
                                                                             isRec,
                                                                             0,
                                                                             (System_Func_BattleBuffData_BuffData__bool__o *)v9,
                                                                             v10);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            BuffList_31751548,
                                            (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetFixedBuffArray(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *targetIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *BuffList_31731308; // x1
  const MethodInfo *v7; // x2

  BuffList_31731308 = BattleBuffData__getBuffList_31731308(this, types, targetIndividualities, checklist, method);
  return BattleBuffData__CheckAndGetFixedBuffArray(this, BuffList_31731308, v7);
}


System_Int32_array *__fastcall BattleBuffData__GetGrantBuffTypeArray(
        BattleBuffData_o *this,
        bool isIncludePassive,
        bool isIncludeActive,
        const MethodInfo *method)
{
  __int64 v7; // x24
  System_Collections_Generic_List_int__o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_int__o **v16; // x19
  System_Collections_Generic_List_int__o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x22
  const MethodInfo *v25; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PassiveList; // x23
  BattleBuffData___c_c *v27; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__118_1; // x24
  Il2CppObject *v30; // x25
  struct BattleBuffData___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ActiveList; // x20
  BattleBuffData___c_c *v40; // x8
  struct BattleBuffData___c_StaticFields *v41; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__118_2; // x21
  Il2CppObject *v43; // x23
  struct BattleBuffData___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_T__o *v51; // x0

  if ( (byte_435544B & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__GetGrantBuffTypeArray_b__118_1__);
    sub_B70694(&Method_BattleBuffData___c__GetGrantBuffTypeArray_b__118_2__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass118_0__GetGrantBuffTypeArray_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass118_0_TypeInfo);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_435544B = 1;
  }
  v7 = sub_B70764(BattleBuffData___c__DisplayClass118_0_TypeInfo);
  BattleBuffData___c__DisplayClass118_0___ctor((BattleBuffData___c__DisplayClass118_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 24) = this;
  v16 = (System_Collections_Generic_List_int__o **)(v7 + 16);
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  v17 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v7 + 16) = v17;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v24,
    (Il2CppObject *)v7,
    Method_BattleBuffData___c__DisplayClass118_0__GetGrantBuffTypeArray_b__0__,
    (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  if ( isIncludePassive )
  {
    PassiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getPassiveList(this, 1, v25);
    v27 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v27 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__118_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__118_1;
    if ( !_9__118_1 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__118_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__118_1,
        v30,
        Method_BattleBuffData___c__GetGrantBuffTypeArray_b__118_1__,
        (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v31 = BattleBuffData___c_TypeInfo->static_fields;
      v31->__9__118_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__118_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v31->__9__118_1,
        (System_Int32_array **)_9__118_1,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           PassiveList,
                                                           (System_Func_TSource__bool__o *)_9__118_1,
                                                           (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v38,
      (System_Action_T__o *)v24,
      (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  if ( isIncludeActive )
  {
    ActiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getActiveList(this, 1, v25);
    v40 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v40 = BattleBuffData___c_TypeInfo;
    }
    v41 = v40->static_fields;
    _9__118_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v41->__9__118_2;
    if ( !_9__118_2 )
    {
      if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v41 = BattleBuffData___c_TypeInfo->static_fields;
      }
      v43 = (Il2CppObject *)v41->__9;
      _9__118_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__118_2,
        v43,
        Method_BattleBuffData___c__GetGrantBuffTypeArray_b__118_2__,
        (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v44 = BattleBuffData___c_TypeInfo->static_fields;
      v44->__9__118_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__118_2;
      sub_B70630(
        (BattleServantConfConponent_o *)&v44->__9__118_2,
        (System_Int32_array **)_9__118_2,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    v51 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           ActiveList,
                                                           (System_Func_TSource__bool__o *)_9__118_2,
                                                           (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v51,
      (System_Action_T__o *)v24,
      (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  v8 = *v16;
  if ( !*v16 )
LABEL_26:
    sub_B7076C(v8, v9);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleBuffData__GetIgnoreAuraBuffIds(BattleBuffData_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  BattleServantConfConponent_o *p_ignoreAuraBuffIds; // x19
  System_Int32_array *ignoreAuraBuffIds; // t1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  System_Int32_array **ValueArray; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4355485 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_7361/*"IGNORE_AURA_BUFF"*/);
    byte_4355485 = 1;
  }
  ignoreAuraBuffIds = this->fields.ignoreAuraBuffIds;
  p_ignoreAuraBuffIds = (BattleServantConfConponent_o *)&this->fields.ignoreAuraBuffIds;
  result = ignoreAuraBuffIds;
  if ( !ignoreAuraBuffIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
    {
      sub_B7076C(Instance, v7);
    }
    ValueArray = (System_Int32_array **)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)Instance,
                                          (System_String_o *)StringLiteral_7361/*"IGNORE_AURA_BUFF"*/,
                                          0LL,
                                          0LL);
    p_ignoreAuraBuffIds->klass = (BattleServantConfConponent_c *)ValueArray;
    sub_B70630(p_ignoreAuraBuffIds, ValueArray, v9, v10, v11, v12, v13, v14);
    return (System_Int32_array *)p_ignoreAuraBuffIds->klass;
  }
  return result;
}


System_Int32_array *__fastcall BattleBuffData__GetInvalidSacrificeIndividualities(const MethodInfo *method)
{
  ConstantStrMaster_o *constantStrMaster; // x0
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  BattleServantConfConponent_o *static_fields; // x8
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  __int64 v10; // x1

  if ( (byte_43554A7 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_7405/*"INVALID_SACRIFICE_INDIV"*/);
    byte_43554A7 = 1;
  }
  constantStrMaster = BattleBuffData_TypeInfo->static_fields->constantStrMaster;
  if ( !constantStrMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    static_fields = (BattleServantConfConponent_o *)BattleBuffData_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)Master_WarQuestSelectionMaster;
    sub_B70630(static_fields, Master_WarQuestSelectionMaster, v4, v5, v6, v7, v8, v9);
    constantStrMaster = BattleBuffData_TypeInfo->static_fields->constantStrMaster;
    if ( !constantStrMaster )
      sub_B7076C(0LL, v10);
  }
  return ConstantStrMaster__GetValueArray(constantStrMaster, (System_String_o *)StringLiteral_7405/*"INVALID_SACRIFICE_INDIV"*/, 0LL, 0LL);
}


int32_t __fastcall BattleBuffData__GetMotionChange(BattleBuffData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t klass; // w19
  int v12; // w20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4355491 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355491 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v4);
  if ( !v3 )
    sub_B7076C(PassiveList, v6);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v7);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v3,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v14.fields.current )
      sub_B7076C(v9, v10);
    klass = (int32_t)v14.fields.current[11].klass;
    if ( klass )
    {
      v12 = 3;
      goto LABEL_10;
    }
  }
  klass = 0;
  v12 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (unsigned int)(v12 + 1) >> 2 )
    return klass;
  else
    return 0;
}


System_Int32_array *__fastcall BattleBuffData__GetNotTargetSkillIdArray(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x23
  const MethodInfo *v7; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  System_Collections_Generic_List_int__o *v12; // x21
  const MethodInfo *v13; // x5
  Il2CppObject *current; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_T__o *klass; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4355471 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355471 = 1;
  }
  plusMinus = 0;
  memset(&v19, 0, sizeof(v19));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(103, 0LL, 0LL);
  plusMinus = 0;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v7);
  if ( !v6 )
    goto LABEL_18;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v10);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
    PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v12 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v19.fields.current;
    v15 = BattleBuffData__checkIndiviuality(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v19.fields.current,
            checkIndividualities,
            &plusMinus,
            v13);
    if ( v15 )
    {
      if ( !current )
        sub_B7076C(v15, v16);
      klass = (System_Collections_Generic_IEnumerable_T__o *)current[19].klass;
      if ( klass )
      {
        if ( !v12 )
          sub_B7076C(v15, klass);
        System_Collections_Generic_List_int___AddRange(
          v12,
          klass,
          (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v12 )
LABEL_18:
    sub_B7076C(ActiveList, v9);
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall BattleBuffData__GetParamAddCount(
        System_Int32_array *checkIndividuality,
        System_Int32_array *paramAddIndividuality,
        const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v5; // x9
  __int64 v6; // x12
  __int64 v7; // x10
  int32_t *v8; // x8
  __int64 v9; // x14
  int32_t v10; // w15

  result = 0;
  if ( checkIndividuality && paramAddIndividuality )
  {
    v5 = *(_QWORD *)&checkIndividuality->max_length;
    if ( v5 )
    {
      v6 = *(_QWORD *)&paramAddIndividuality->max_length;
      result = 0;
      if ( v6 && (int)v6 >= 1 )
      {
        v7 = 0LL;
        result = 0;
        v8 = &checkIndividuality->m_Items[1];
        do
        {
          if ( (int)v5 >= 1 )
          {
            v9 = 0LL;
            do
            {
              v10 = v8[v9++];
              if ( v10 == paramAddIndividuality->m_Items[v7 + 1] )
                ++result;
            }
            while ( v9 < (int)v5 );
          }
          ++v7;
        }
        while ( v7 < (int)v6 );
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}


int32_t __fastcall BattleBuffData__GetShiftGuts(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        BuffEntity_o **buffEntity,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *ShiftGutsBuff; // x0
  const MethodInfo *v10; // x1
  BattleBuffData_BuffData_o *v11; // x20
  BuffMaster_o *buffMst; // x0
  __int64 v13; // x1
  BuffEntity_o *Entity; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t type; // w21

  if ( (byte_435544F & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_435544F = 1;
  }
  ShiftGutsBuff = BattleBuffData__GetShiftGutsBuff(
                    this,
                    servantData,
                    checkIndividualitiesDataArray,
                    (const MethodInfo *)buffEntity);
  if ( ShiftGutsBuff )
  {
    v11 = ShiftGutsBuff;
    buffMst = BattleBuffData__get_buffMst(this, v10);
    if ( !buffMst )
      goto LABEL_14;
    Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                               v11->fields.buffId,
                               (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    *buffEntity = Entity;
    sub_B70630((BattleServantConfConponent_o *)buffEntity, (System_Int32_array **)Entity, v15, v16, v17, v18, v19, v20);
    if ( !*buffEntity )
      goto LABEL_14;
    type = (*buffEntity)->fields.type;
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    buffMst = (BuffMaster_o *)BuffList__CheckType(173, type, 0LL);
    if ( ((unsigned __int8)buffMst & 1) == 0 )
    {
      LODWORD(ShiftGutsBuff) = v11->fields.param;
      return (int)ShiftGutsBuff;
    }
    if ( !servantData )
LABEL_14:
      sub_B7076C(buffMst, v13);
    LODWORD(ShiftGutsBuff) = v11->fields.param * servantData->fields.maxhp / 1000;
  }
  return (int)ShiftGutsBuff;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetShiftGutsBuff(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  BattleBuffData_o *v6; // x20
  const MethodInfo *v7; // x5
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x8
  BattleBuffData_o *v9; // x21
  unsigned __int64 v10; // x23
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_activeList; // x24
  BattleBuffData_BuffData_o *v12; // x22
  __int64 v14; // x0

  if ( !checkIndividualitiesDataArray )
    goto LABEL_12;
  if ( !checkIndividualitiesDataArray->max_length )
    goto LABEL_11;
  v6 = this;
  this = (BattleBuffData_o *)BattleBuffData__getBuffList_31751548(
                               this,
                               111,
                               checkIndividualitiesDataArray->m_Items[0],
                               1,
                               1,
                               0LL,
                               v4);
  if ( !this )
LABEL_12:
    sub_B7076C(this, servantData);
  passiveList = this->fields.passiveList;
  v9 = this;
  if ( (int)passiveList >= 1 )
  {
    v10 = 0LL;
    p_activeList = &this->fields.activeList;
    while ( v10 < (unsigned int)passiveList )
    {
      v12 = (BattleBuffData_BuffData_o *)p_activeList[v10];
      this = (BattleBuffData_o *)BattleBuffData__checkGutsBuffSuccessful(
                                   v6,
                                   v12,
                                   111,
                                   checkIndividualitiesDataArray,
                                   0,
                                   v7);
      if ( ((unsigned __int8)this & 1) != 0 )
        return v12;
      LODWORD(passiveList) = v9->fields.passiveList;
      if ( (__int64)++v10 >= (int)passiveList )
        return 0LL;
    }
LABEL_11:
    v14 = sub_B70798(this);
    sub_B70738(v14, 0LL);
  }
  return 0LL;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  __int64 v6; // x21
  System_Collections_Generic_List_int__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x20

  if ( (byte_435548A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor___69164920);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass215_0__GetSkillTypeBuff_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass215_0_TypeInfo);
    byte_435548A = 1;
  }
  v6 = sub_B70764(BattleBuffData___c__DisplayClass215_0_TypeInfo);
  BattleBuffData___c__DisplayClass215_0___ctor((BattleBuffData___c__DisplayClass215_0_o *)v6, 0LL);
  v7 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51074676(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)skillTypes,
    (const MethodInfo_30B5674 *)Method_System_Collections_Generic_List_int___ctor___69164920);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = v7,
        sub_B70630((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)v7, v10, v11, v12, v13, v14, v15),
        v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v16,
          (Il2CppObject *)v6,
          Method_BattleBuffData___c__DisplayClass215_0__GetSkillTypeBuff_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !buffList) )
  {
    sub_B7076C(v8, v9);
  }
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)buffList,
                                                                         (System_Predicate_T__o *)v16,
                                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetSkillTypePassiveBuff(
        BattleBuffData_o *this,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleBuffData__GetSkillTypeBuff(this, this->fields.passiveList, skillTypes, v3);
}


int32_t __fastcall BattleBuffData__GetTotalParamAddValue(
        BattleBuffData_BuffData_o *buffData,
        BattleData_o *battleData,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleBuffData_ParamAdd_o *paramAdd,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *v8; // x22
  const MethodInfo *v9; // x2
  BattleBuffData_CheckIndividualitiesData_Fields *p_selfIndividualityCanRelease_k__BackingField; // x8
  int32_t ParamAddCount; // w23
  bool v12; // w0
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  int v15; // w21
  System_Int32_array *QuestIndividualities; // x0
  const MethodInfo *v17; // x2
  int32_t v18; // w0
  int32_t maxValue; // w8
  int32_t maxCount; // w9
  int32_t result; // w0

  if ( !buffData )
    goto LABEL_20;
  v8 = buffData;
  buffData = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__checkState(buffData, 0x100000, 0LL);
  if ( !checkIndividualities )
    goto LABEL_20;
  if ( ((unsigned __int8)buffData & 1) != 0 )
  {
    if ( !paramAdd )
      goto LABEL_20;
    p_selfIndividualityCanRelease_k__BackingField = (BattleBuffData_CheckIndividualitiesData_Fields *)&checkIndividualities->fields._selfIndividualityCanRelease_k__BackingField;
  }
  else
  {
    if ( !paramAdd )
      goto LABEL_20;
    p_selfIndividualityCanRelease_k__BackingField = &checkIndividualities->fields;
  }
  ParamAddCount = BattleBuffData__GetParamAddCount(
                    p_selfIndividualityCanRelease_k__BackingField->_selfIndividuality_k__BackingField,
                    paramAdd->fields.selfIndv,
                    v9);
  v12 = BattleBuffData_BuffData__checkState(v8, 0x100000, 0LL);
  v14 = 24LL;
  if ( v12 )
    v14 = 40LL;
  buffData = (BattleBuffData_BuffData_o *)BattleBuffData__GetParamAddCount(
                                            *(System_Int32_array **)((char *)&checkIndividualities->klass + v14),
                                            paramAdd->fields.opIndv,
                                            v13);
  if ( !battleData )
LABEL_20:
    sub_B7076C(buffData, battleData);
  v15 = (_DWORD)buffData + ParamAddCount;
  QuestIndividualities = BattleData__getQuestIndividualities(battleData, 0LL);
  v18 = BattleBuffData__GetParamAddCount(QuestIndividualities, paramAdd->fields.fieldIndv, v17);
  maxValue = paramAdd->fields.maxValue;
  maxCount = paramAdd->fields.maxCount;
  if ( maxCount > v15 + v18 || maxCount < 1 )
    maxCount = v15 + v18;
  result = maxCount * paramAdd->fields.value;
  if ( maxValue >= 1 && maxValue <= result )
    return paramAdd->fields.maxValue;
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetUpdateWaitIntervalBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleBuffData_BuffData_array *v4; // x20
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *updateWaitIntervalBuffList; // x0

  if ( (byte_4355408 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    byte_4355408 = 1;
  }
  v4 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.updateWaitIntervalBuffList, 0LL) )
  {
    updateWaitIntervalBuffList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.updateWaitIntervalBuffList;
    if ( !updateWaitIntervalBuffList
      || (updateWaitIntervalBuffList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(updateWaitIntervalBuffList, (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
          !this->fields.updateWaitIntervalBuffList) )
    {
      sub_B7076C(updateWaitIntervalBuffList, v3);
    }
    v4 = (BattleBuffData_BuffData_array *)updateWaitIntervalBuffList;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.updateWaitIntervalBuffList,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  }
  return v4;
}


void __fastcall BattleBuffData__Initialize(BattleBuffData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0

  if ( (byte_435540D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    byte_435540D = 1;
  }
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)passiveList,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__),
        (passiveList = this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)passiveList,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__),
        (passiveList = this->fields.conditionalAuraBuff) == 0LL) )
  {
    sub_B7076C(passiveList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)passiveList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
}


void __fastcall BattleBuffData__InitializeShift(
        BattleBuffData_o *this,
        int32_t actorId,
        System_Int32_array *buffindivs,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x23
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x21

  if ( (byte_435547D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass197_0__InitializeShift_b__0__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass197_0__InitializeShift_b__1__);
    sub_B70694(&BattleBuffData___c__DisplayClass197_0_TypeInfo);
    byte_435547D = 1;
  }
  v7 = sub_B70764(BattleBuffData___c__DisplayClass197_0_TypeInfo);
  BattleBuffData___c__DisplayClass197_0___ctor((BattleBuffData___c__DisplayClass197_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = actorId;
  *(_QWORD *)(v7 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = buffindivs;
  v16 = v7 + 32;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)buffindivs, v17, v18, v19, v20, v21, v22);
  passiveList = this->fields.passiveList;
  v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v24,
    (Il2CppObject *)v7,
    Method_BattleBuffData___c__DisplayClass197_0__InitializeShift_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !passiveList )
    goto LABEL_10;
  v8 = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
         (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)passiveList,
         (System_Predicate_T__o *)v24,
         (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  if ( !*(_QWORD *)v16 )
    goto LABEL_10;
  if ( *(_QWORD *)(*(_QWORD *)v16 + 24LL) )
  {
    activeList = this->fields.activeList;
    v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v26,
      (Il2CppObject *)v7,
      Method_BattleBuffData___c__DisplayClass197_0__InitializeShift_b__1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    if ( activeList )
    {
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)activeList,
        (System_Predicate_T__o *)v26,
        (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
      return;
    }
LABEL_10:
    sub_B7076C(v8, v9);
  }
}


bool __fastcall BattleBuffData__IsCheckActState(BattleBuffData_o *this, int32_t state, const MethodInfo *method)
{
  if ( state >= 0x4000 )
  {
    if ( state != 0x4000 && state != 0x20000 )
      return state == 0x200000;
    return 1;
  }
  if ( state == 1 || state == 16 )
    return 1;
  return state == 0x200000;
}


bool __fastcall BattleBuffData__IsCounterFunc(
        BattleBuffData_o *this,
        BattleServantData_o *selfSvt,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattleBuffData_BuffData_array *CounterFuncBuffDataList; // x0
  __int64 v6; // x1

  CounterFuncBuffDataList = BattleBuffData__GetCounterFuncBuffDataList(this, selfSvt, targetSvt, 1, v4);
  if ( !CounterFuncBuffDataList )
    sub_B7076C(0LL, v6);
  return CounterFuncBuffDataList->max_length != 0;
}


bool __fastcall BattleBuffData__IsFixBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  return !BattleBuffData__IsUnfix(this, buff, method);
}


bool __fastcall BattleBuffData__IsGutsKeepUsableByFollowingAttackIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buffData,
        int32_t actionType,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        const MethodInfo *method)
{
  BattleBuffData_o *v8; // x20
  BuffList_ActInfo_o *ActInfo; // x22
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v11; // x21
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  BattleBuffData_CheckIndividualitiesData_o *v25; // x3
  const MethodInfo *v26; // x5
  int v27; // w8
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  int v33; // [xsp+0h] [xbp-40h]
  int32_t plusMinus[2]; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_435544D & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Skip_BattleBuffData_CheckIndividualitiesData___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo);
    this = (BattleBuffData_o *)sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_435544D = 1;
  }
  plusMinus[1] = 0;
  if ( !buffData )
    goto LABEL_42;
  this = (BattleBuffData_o *)BattleBuffData_BuffData__get_Entity(buffData, 0LL);
  if ( !this )
    goto LABEL_42;
  if ( !BuffEntity__IsCheckIndividualityForEachDamage((BuffEntity_o *)this, 0LL) )
    return 1;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(actionType, 0LL, 0LL);
  this = (BattleBuffData_o *)System_Linq_Enumerable__Skip_BattleBuffData_CheckIndividualitiesData_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)checkIndividualitiesDataArray,
                               1,
                               (const MethodInfo_1CC7950 *)Method_System_Linq_Enumerable_Skip_BattleBuffData_CheckIndividualitiesData___);
  if ( !this )
LABEL_42:
    sub_B7076C(this, buffData);
  klass = this->klass;
  v11 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_14:
    v14 = sub_B08590(
            this,
            System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo,
            0LL);
  }
  v16 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  if ( !v16 )
    sub_B7076C(0LL, v15);
  while ( 1 )
  {
    v17 = *(_QWORD *)v16;
    if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
    {
      v18 = 0LL;
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
          goto LABEL_21;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_21:
      v20 = sub_B08590(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    v21 = *(_QWORD *)v16;
    if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__c **)v23 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
          goto LABEL_28;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_28:
      v24 = sub_B08590(
              v16,
              System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo,
              0LL);
    }
    v25 = (BattleBuffData_CheckIndividualitiesData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v24)(
                                                         v16,
                                                         *(_QWORD *)(v24 + 8));
    if ( !BattleBuffData__checkIndiviuality(v8, ActInfo, buffData, v25, &plusMinus[1], v26) )
    {
      v27 = 85;
      goto LABEL_33;
    }
  }
  v27 = 83;
LABEL_33:
  v33 = v27;
  v28 = *(_QWORD *)v16;
  if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
  {
    v29 = 0LL;
    v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
        goto LABEL_37;
    }
    v31 = v28 + 16LL * *v30 + 312;
  }
  else
  {
LABEL_37:
    v31 = sub_B08590(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
  return v33 == 83;
}


bool __fastcall BattleBuffData__IsIgnoreIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 0x10000, 0LL);
}


bool __fastcall BattleBuffData__IsPermanentSleep(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  const MethodInfo *v6; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  BuffList_ActInfo_o *ActInfo; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  const MethodInfo *v15; // x5
  char v16; // w19
  int v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4355497 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355497 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  plusMinus = 0;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v6);
  if ( !v5 )
    sub_B7076C(PassiveList, v8);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v9);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(39, 0LL, 0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v12 )
      break;
    current = v19.fields.current;
    if ( !v19.fields.current )
      sub_B7076C(v12, v13);
    if ( !BYTE1(v19.fields.current[24].klass)
      && BattleBuffData_BuffData__IsPermanentSleep((BattleBuffData_BuffData_o *)v19.fields.current, 0LL)
      && BattleBuffData__checkIndiviuality(
           this,
           ActInfo,
           (BattleBuffData_BuffData_o *)current,
           checkIndividualities,
           &plusMinus,
           v15) )
    {
      v16 = 1;
      v17 = 5;
      goto LABEL_15;
    }
  }
  v16 = 0;
  v17 = 3;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v17 == 5) & v16;
}


bool __fastcall BattleBuffData__IsShiftGuts(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        const MethodInfo *method)
{
  return BattleBuffData__GetShiftGutsBuff(this, servantData, checkIndividualitiesDataArray, method) != 0LL;
}


bool __fastcall BattleBuffData__IsUnfix(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  __int64 v6; // x21
  int size; // w8

  v4 = this;
  if ( (byte_4355419 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4355419 = 1;
  }
  unfixedBuffList = v4->fields.unfixedBuffList;
  if ( !unfixedBuffList )
LABEL_11:
    sub_B7076C(this, buff);
  v6 = 0LL;
  while ( 1 )
  {
    size = unfixedBuffList->fields._size;
    if ( (int)v6 >= size )
      return 0;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( !buff )
      goto LABEL_11;
    if ( unfixedBuffList->fields._items->m_Items[v6 + 1] == buff->fields.addOrder )
      return 1;
    unfixedBuffList = v4->fields.unfixedBuffList;
    ++v6;
    if ( !unfixedBuffList )
      goto LABEL_11;
  }
}


bool __fastcall BattleBuffData__IsWarBoardNotAttacked(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentAllBaffList; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  char v8; // w19
  int v9; // w20
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4355498 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4355498 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  CurrentAllBaffList = BattleBuffData__getCurrentAllBaffList(this, 1, v2);
  if ( !CurrentAllBaffList )
    sub_B7076C(0LL, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CurrentAllBaffList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v6 )
      break;
    if ( !v11.fields.current )
      sub_B7076C(v6, v7);
    if ( !BYTE1(v11.fields.current[24].klass)
      && BattleBuffData_BuffData__IsWarBoardNotAttacked((BattleBuffData_BuffData_o *)v11.fields.current, 0LL) )
    {
      v8 = 1;
      v9 = 2;
      goto LABEL_11;
    }
  }
  v9 = 0;
  v8 = 0;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v9 == 2) & v8;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__MakeRemoveBuffInfo(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endList,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *removedLinkedBuffs,
        const MethodInfo *method)
{
  RemovedBuffInfo_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4355447 & 1) == 0 )
  {
    sub_B70694(&RemovedBuffInfo_TypeInfo);
    byte_4355447 = 1;
  }
  v6 = (RemovedBuffInfo_o *)sub_B70764(RemovedBuffInfo_TypeInfo);
  RemovedBuffInfo___ctor(v6, 0LL);
  if ( !v6 )
    sub_B7076C(v7, v8);
  RemovedBuffInfo__AddBuffs(v6, (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)endList, 0, 0LL);
  RemovedBuffInfo__AddBuffs(
    v6,
    (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)removedLinkedBuffs,
    1,
    0LL);
  return v6;
}


bool __fastcall BattleBuffData__OffStateWithAuraConditionCheck(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t state,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3
  bool v9; // w22
  BattleBuffData_o **p_auraBuffList; // x21
  BattleBuffData_o **p_conditionalAuraBuff; // x20
  BattleBuffData_o *conditionalAuraBuff; // t1
  BattleBuffData_o *v13; // x0
  const MethodInfo *v14; // x3

  v6 = this;
  if ( (byte_4355487 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    byte_4355487 = 1;
  }
  if ( !buff )
    goto LABEL_24;
  BattleBuffData_BuffData__offState(buff, state, 0LL);
  v9 = 0;
  if ( state >= 0x4000 )
  {
    if ( state != 0x4000 && state != 0x200000 && state != 0x20000 )
      return v9;
LABEL_11:
    p_auraBuffList = (BattleBuffData_o **)&v6->fields.auraBuffList;
    if ( buff->fields.auraEffectId )
    {
      this = *p_auraBuffList;
      if ( !*p_auraBuffList )
        goto LABEL_24;
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
             (WarBoardManager_TaskList_o *)buff,
             (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        v9 = 0;
      }
      else
      {
        this = *p_auraBuffList;
        if ( !*p_auraBuffList )
          goto LABEL_24;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        v9 = 1;
      }
      conditionalAuraBuff = (BattleBuffData_o *)v6->fields.conditionalAuraBuff;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
      this = conditionalAuraBuff;
      if ( !conditionalAuraBuff )
LABEL_24:
        sub_B7076C(this, buff);
      v7 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
             (WarBoardManager_TaskList_o *)buff,
             (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( !v7 )
      {
        this = *p_conditionalAuraBuff;
        if ( *p_conditionalAuraBuff )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          v9 = 1;
          goto LABEL_22;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v9 = 0;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
    }
LABEL_22:
    BattleBuffData__ApplyBuffData(
      (BattleBuffData_o *)v7,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_auraBuffList,
      v8);
    BattleBuffData__ApplyBuffData(
      v13,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_conditionalAuraBuff,
      v14);
    return v9;
  }
  if ( state == 1 || state == 16 )
    goto LABEL_11;
  return v9;
}


bool __fastcall BattleBuffData__OnStateWithAuraConditionCheck(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t state,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3
  char v9; // w22
  BattleBuffData_o **p_auraBuffList; // x21
  int v11; // w23
  BattleBuffData_o **p_conditionalAuraBuff; // x20
  BattleBuffData_o *conditionalAuraBuff; // t1
  BattleBuffData_o *v14; // x0
  const MethodInfo *v15; // x3

  v6 = this;
  if ( (byte_4355486 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    byte_4355486 = 1;
  }
  if ( !buff )
    goto LABEL_24;
  BattleBuffData_BuffData__onState(buff, state, 0LL);
  v9 = 0;
  if ( state >= 0x4000 )
  {
    if ( state != 0x4000 && state != 0x200000 && state != 0x20000 )
      return v9;
LABEL_11:
    p_auraBuffList = (BattleBuffData_o **)&v6->fields.auraBuffList;
    if ( buff->fields.auraEffectId )
    {
      this = *p_auraBuffList;
      if ( !*p_auraBuffList )
        goto LABEL_24;
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
             (WarBoardManager_TaskList_o *)buff,
             (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        this = *p_auraBuffList;
        if ( !*p_auraBuffList )
          goto LABEL_24;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        v11 = 1;
      }
      else
      {
        v11 = 0;
      }
      conditionalAuraBuff = (BattleBuffData_o *)v6->fields.conditionalAuraBuff;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
      this = conditionalAuraBuff;
      if ( !conditionalAuraBuff )
LABEL_24:
        sub_B7076C(this, buff);
      v7 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
             (WarBoardManager_TaskList_o *)buff,
             (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      v9 = v11 != 0;
      if ( v7 )
      {
        this = *p_conditionalAuraBuff;
        if ( *p_conditionalAuraBuff )
        {
          v7 = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                 (WarBoardManager_TaskList_o *)buff,
                 (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          v9 = 1;
          goto LABEL_22;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v9 = 0;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
    }
LABEL_22:
    BattleBuffData__ApplyBuffData(
      (BattleBuffData_o *)v7,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_auraBuffList,
      v8);
    BattleBuffData__ApplyBuffData(
      v14,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_conditionalAuraBuff,
      v15);
    return v9;
  }
  if ( state == 1 || state == 16 )
    goto LABEL_11;
  return v9;
}


bool __fastcall BattleBuffData__ProgressBuffTurn(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  bool result; // w0

  if ( !buff )
    sub_B7076C(this, 0LL);
  if ( !BattleBuffData_BuffData__checkProgressTurn(buff, 0LL) )
    return 0;
  result = 1;
  --buff->fields.turn;
  return result;
}


void __fastcall BattleBuffData__RechargeCommandAssistBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x20
  WarQuestSelectionMaster_o *EventId; // x0
  __int64 v6; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x20
  __int64 v8; // x21
  __int64 v9; // x21
  int chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4355482 & 1) == 0 )
  {
    sub_B70694(&BattleData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4355482 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  EventId = (WarQuestSelectionMaster_o *)BattleData__GetEventId(0LL);
  if ( !buff || !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    Master_WarQuestSelectionMaster,
                    (int32_t)EventId,
                    buff->fields.commandAssistId,
                    -1,
                    0,
                    0LL);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_B08394(v9);
  EventId = **(WarQuestSelectionMaster_o ***)(v9 + 184);
  if ( !EventId )
    goto LABEL_23;
  EventId = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)EventId,
              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  entity = 0LL;
  if ( !CurrentEntity || !EventId )
    goto LABEL_23;
  EventId = (WarQuestSelectionMaster_o *)SkillLvMaster__TryGetEntity(
                                           (SkillLvMaster_o *)EventId,
                                           &entity,
                                           CurrentEntity->fields.skillId,
                                           CurrentEntity->fields.skillLv,
                                           0LL);
  if ( ((unsigned __int8)EventId & 1) == 0 )
    return;
  if ( !entity )
LABEL_23:
    sub_B7076C(EventId, v6);
  chargeTurn = entity->fields.chargeTurn;
  if ( chargeTurn >= 1 )
    buff->fields.reCharge = chargeTurn;
}


void __fastcall BattleBuffData__RechargeCommandCodeBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v5; // x1
  CommandCodeSkillMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v7; // x20
  __int64 v8; // x20
  SkillLvMaster_o *v9; // x20
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w22
  __int64 v13; // x8
  int chargeTurn; // w8
  __int64 v15; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4355480 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355480 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (CommandCodeSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_B08394(v8);
  Instance = **(void ***)(v8 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !buff)
    || !MasterData_WarQuestSelectionMaster
    || (v9 = (SkillLvMaster_o *)Instance,
        (Instance = CommandCodeSkillMaster__getCommandCodeActiveSkillList(
                      MasterData_WarQuestSelectionMaster,
                      buff->fields.masterCommandCodeId,
                      0LL)) == 0LL) )
  {
LABEL_24:
    sub_B7076C(Instance, v5);
  }
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v15 = sub_B70798(Instance);
        sub_B70738(v15, 0LL);
      }
      v13 = *((_QWORD *)v11 + (int)v12 + 4);
      entity = 0LL;
      if ( !v13 || !v9 )
        goto LABEL_24;
      Instance = (void *)SkillLvMaster__TryGetEntity(v9, &entity, *(_DWORD *)(v13 + 28), 1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_24;
        chargeTurn = entity->fields.chargeTurn;
        if ( chargeTurn >= 1 )
          break;
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return;
    }
    buff->fields.reCharge = chargeTurn;
  }
}


void __fastcall BattleBuffData__RemoveActiveBuffWithCondition(
        BattleBuffData_o *this,
        System_Func_BattleBuffData_BuffData__bool__o *condition,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x24
  int32_t v6; // w21
  int32_t size; // w8

  v4 = this;
  if ( (byte_435541B & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    byte_435541B = 1;
  }
  activeList = v4->fields.activeList;
  if ( !activeList )
LABEL_13:
    sub_B7076C(this, condition);
  v6 = 0;
  while ( 1 )
  {
    size = activeList->fields._size;
    if ( v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( condition )
    {
      this = (BattleBuffData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                   condition,
                                   activeList->fields._items->m_Items[v6],
                                   (const MethodInfo_29AC58C *)Method_System_Func_BattleBuffData_BuffData__bool__Invoke__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleBuffData_o *)v4->fields.activeList;
        if ( !this )
          goto LABEL_13;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v6--,
          (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      activeList = v4->fields.activeList;
      ++v6;
      if ( activeList )
        continue;
    }
    goto LABEL_13;
  }
}


void __fastcall BattleBuffData__RemoveBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *removeBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x23
  int32_t v6; // w21
  int32_t size; // w8
  BattleBuffData_BuffData_o *v8; // x8
  unsigned int v9; // w23
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v10; // x25
  BattleBuffData_BuffData_o *v11; // x8
  int32_t addOrder; // w25
  BattleBuffData_BuffData_o *v13; // x8

  v4 = this;
  if ( (byte_435541A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    byte_435541A = 1;
  }
  activeList = v4->fields.activeList;
  if ( !activeList )
LABEL_26:
    sub_B7076C(this, removeBuffList);
  v6 = 0;
  while ( 1 )
  {
    size = activeList->fields._size;
    if ( v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v8 = activeList->fields._items->m_Items[v6];
    if ( !v8 )
      goto LABEL_26;
    if ( v8->fields._isRemove )
    {
      if ( !removeBuffList )
        goto LABEL_26;
      if ( removeBuffList->fields._size >= 1 )
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = v4->fields.activeList;
          if ( !v10 )
            goto LABEL_26;
          if ( v10->fields._size <= (unsigned int)v6 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v11 = v10->fields._items->m_Items[v6];
          if ( !v11 )
            goto LABEL_26;
          addOrder = v11->fields.addOrder;
          if ( removeBuffList->fields._size <= v9 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v13 = removeBuffList->fields._items->m_Items[v9];
          if ( !v13 )
            goto LABEL_26;
          if ( addOrder == v13->fields.addOrder )
            break;
          if ( (signed int)++v9 >= removeBuffList->fields._size )
            goto LABEL_25;
        }
        this = (BattleBuffData_o *)v4->fields.activeList;
        if ( !this )
          goto LABEL_26;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v6--,
          (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
    }
LABEL_25:
    activeList = v4->fields.activeList;
    ++v6;
    if ( !activeList )
      goto LABEL_26;
  }
}


void __fastcall BattleBuffData__RemoveClassBoardCommandSpellBuff(
        BattleBuffData_o *this,
        AddSkillData_array *classBoardCommandSpellArray,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  AddSkillData_array *v10; // x9
  int max_length; // w8
  int v12; // w10
  AddSkillData_o *v13; // x8
  __int64 v14; // x24
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **current; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x26
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v29; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x26
  __int64 v31; // x0
  __int64 v32; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x26
  __int64 v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerable_T__o *v37; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v38; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x26
  __int64 v40; // x0
  __int64 v41; // x1
  int v42; // w10
  int v43; // w25
  __int64 v44; // x0
  ClassBoardCommandSpellMaster_o *v45; // [xsp+10h] [xbp-B0h]
  int v46; // [xsp+1Ch] [xbp-A4h]
  AddSkillData_array *v47; // [xsp+20h] [xbp-A0h]
  int v48; // [xsp+2Ch] [xbp-94h]
  _BYTE v49[28]; // [xsp+30h] [xbp-90h] BYREF
  int v50; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+68h] [xbp-58h] BYREF

  v47 = classBoardCommandSpellArray;
  if ( (byte_43554AE & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__0__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__1__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__2__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__3__);
    sub_B70694(&BattleBuffData___c__DisplayClass263_0_TypeInfo);
    classBoardCommandSpellArray = v47;
    byte_43554AE = 1;
  }
  entitys = 0LL;
  memset(&v51, 0, sizeof(v51));
  v50 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)classBoardCommandSpellArray, 0LL) )
  {
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    v10 = v47;
    if ( !v47 )
      goto LABEL_39;
    max_length = v47->max_length;
    if ( max_length >= 1 )
    {
      v46 = 0;
      v12 = 0;
      v45 = Master_WarQuestSelectionMaster;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)max_length )
        {
          v44 = sub_B70798(Master_WarQuestSelectionMaster);
          sub_B70738(v44, 0LL);
        }
        v13 = v10->m_Items[v12];
        if ( !v13 )
          break;
        v48 = v12;
        if ( !Master_WarQuestSelectionMaster )
          break;
        if ( ClassBoardCommandSpellMaster__TryGetEntityList(
               Master_WarQuestSelectionMaster,
               &entitys,
               v13->fields.id,
               v13->fields.lv,
               0LL) )
        {
          Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)entitys;
          if ( !entitys )
            break;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v49,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
            (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
          v51 = *(System_Collections_Generic_List_Enumerator_T__o *)v49;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v51,
                    (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
          {
            v14 = sub_B70764(BattleBuffData___c__DisplayClass263_0_TypeInfo);
            BattleBuffData___c__DisplayClass263_0___ctor((BattleBuffData___c__DisplayClass263_0_o *)v14, 0LL);
            if ( !v14 )
              sub_B7076C(v15, v16);
            current = (System_Int32_array **)v51.fields.current;
            *(_QWORD *)(v14 + 16) = v51.fields.current;
            sub_B70630((BattleServantConfConponent_o *)(v14 + 16), current, v17, v18, v19, v20, v21, v22);
            passiveList = this->fields.passiveList;
            v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v25,
              (Il2CppObject *)v14,
              Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__0__,
              (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
            if ( !passiveList )
              sub_B7076C(v26, v27);
            All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                   (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                   (System_Predicate_T__o *)v25,
                                                                   (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
            if ( !v6 )
              sub_B7076C(All, All);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
              All,
              (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
            v29 = this->fields.passiveList;
            v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v30,
              (Il2CppObject *)v14,
              Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__1__,
              (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
            if ( !v29 )
              sub_B7076C(v31, v32);
            System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
              (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v29,
              (System_Predicate_T__o *)v30,
              (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
            activeList = this->fields.activeList;
            v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v34,
              (Il2CppObject *)v14,
              Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__2__,
              (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
            if ( !activeList )
              sub_B7076C(v35, v36);
            v37 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                   (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                                   (System_Predicate_T__o *)v34,
                                                                   (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
              v37,
              (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
            v38 = this->fields.activeList;
            v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v39,
              (Il2CppObject *)v14,
              Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__3__,
              (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
            if ( !v38 )
              sub_B7076C(v40, v41);
            System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
              (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v38,
              (System_Predicate_T__o *)v39,
              (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
          }
          *(_DWORD *)&v49[4 * v46 + 24] = 235;
          v43 = ++v50;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v51,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
          Master_WarQuestSelectionMaster = v45;
          v42 = v48;
          if ( v43 )
          {
            v46 = v43;
            v10 = v47;
            if ( *(_DWORD *)&v49[4 * v43 + 20] == 235 )
            {
              v50 = v43 - 1;
              v46 = v43 - 1;
            }
          }
          else
          {
            v10 = v47;
            v46 = 0;
          }
        }
        else
        {
          v10 = v47;
          Master_WarQuestSelectionMaster = v45;
          v42 = v48;
        }
        max_length = v10->max_length;
        v12 = v42 + 1;
        if ( v12 >= max_length )
          goto LABEL_37;
      }
LABEL_39:
      sub_B7076C(Master_WarQuestSelectionMaster, v8);
    }
LABEL_37:
    BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
      this,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v6,
      logic,
      v9);
  }
}


void __fastcall BattleBuffData__RemoveClassBoardSkillBuff(
        BattleBuffData_o *this,
        AddSkillData_array *classBoardSkillArray,
        AddSkillData_array *classBoardCommandSpellArray,
        bool isDifferentClass,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  System_Collections_Generic_IEnumerable_T__o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  unsigned __int64 v11; // x19
  __int64 v12; // x25
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x27
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v22; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x27
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x27
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v27; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x27
  const MethodInfo *v29; // x3
  AddSkillData_array *v30; // x9
  signed int max_length; // w8
  signed int v32; // w10
  AddSkillData_o *v33; // x8
  __int64 v34; // x24
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **current; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v44; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x26
  __int64 v46; // x0
  __int64 v47; // x1
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v49; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v50; // x26
  __int64 v51; // x0
  __int64 v52; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v53; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v54; // x26
  __int64 v55; // x0
  __int64 v56; // x1
  System_Collections_Generic_IEnumerable_T__o *v57; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v58; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v59; // x26
  __int64 v60; // x0
  __int64 v61; // x1
  signed int v62; // w10
  int v63; // w25
  __int64 v64; // x0
  System_Collections_Generic_IEnumerable_T__o *v66; // [xsp+10h] [xbp-B0h]
  int v68; // [xsp+1Ch] [xbp-A4h]
  signed int v70; // [xsp+28h] [xbp-98h]
  _BYTE v71[28]; // [xsp+30h] [xbp-90h] BYREF
  int v72; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_43554AD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__0__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__1__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__2__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__3__);
    sub_B70694(&BattleBuffData___c__DisplayClass262_0_TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__4__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__5__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__6__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__7__);
    sub_B70694(&BattleBuffData___c__DisplayClass262_1_TypeInfo);
    byte_43554AD = 1;
  }
  entitys = 0LL;
  memset(&v73, 0, sizeof(v73));
  v72 = 0;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__IsNullOrEmpty(
                                                                   (System_Collections_ICollection_o *)classBoardSkillArray,
                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !classBoardSkillArray )
      goto LABEL_51;
    if ( (int)classBoardSkillArray->max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = sub_B70764(BattleBuffData___c__DisplayClass262_0_TypeInfo);
        BattleBuffData___c__DisplayClass262_0___ctor((BattleBuffData___c__DisplayClass262_0_o *)v12, 0LL);
        if ( v11 >= classBoardSkillArray->max_length )
          break;
        if ( !v12 )
          goto LABEL_51;
        v19 = (System_Int32_array **)classBoardSkillArray->m_Items[v11];
        *(_QWORD *)(v12 + 16) = v19;
        sub_B70630((BattleServantConfConponent_o *)(v12 + 16), v19, v13, v14, v15, v16, v17, v18);
        passiveList = this->fields.passiveList;
        v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v21,
          (Il2CppObject *)v12,
          Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !passiveList )
          goto LABEL_51;
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)v21,
                                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
        if ( !v8 )
          goto LABEL_51;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
          IsNullOrEmpty,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        v22 = this->fields.passiveList;
        v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v23,
          (Il2CppObject *)v12,
          Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__1__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !v22 )
          goto LABEL_51;
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v22,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        activeList = this->fields.activeList;
        v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v25,
          (Il2CppObject *)v12,
          Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__2__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !activeList )
          goto LABEL_51;
        All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                               (System_Predicate_T__o *)v25,
                                                               (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
          All,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        v27 = this->fields.activeList;
        v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v28,
          (Il2CppObject *)v12,
          Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__3__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !v27 )
          goto LABEL_51;
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v27,
          (System_Predicate_T__o *)v28,
          (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        if ( (__int64)++v11 >= (int)classBoardSkillArray->max_length )
          goto LABEL_15;
      }
LABEL_52:
      v64 = sub_B70798(IsNullOrEmpty);
      sub_B70738(v64, 0LL);
    }
  }
LABEL_15:
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)classBoardCommandSpellArray, 0LL)
    || !isDifferentClass )
  {
    goto LABEL_50;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v30 = classBoardCommandSpellArray;
  if ( !classBoardCommandSpellArray )
LABEL_51:
    sub_B7076C(IsNullOrEmpty, v10);
  max_length = classBoardCommandSpellArray->max_length;
  if ( max_length >= 1 )
  {
    v68 = 0;
    v32 = 0;
    v66 = IsNullOrEmpty;
    while ( v32 < (unsigned int)max_length )
    {
      v33 = v30->m_Items[v32];
      if ( !v33 )
        goto LABEL_51;
      v70 = v32;
      if ( !IsNullOrEmpty )
        goto LABEL_51;
      if ( ClassBoardCommandSpellMaster__TryGetEntityList(
             (ClassBoardCommandSpellMaster_o *)IsNullOrEmpty,
             &entitys,
             v33->fields.id,
             v33->fields.lv,
             0LL) )
      {
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)entitys;
        if ( !entitys )
          goto LABEL_51;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v71,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v73 = *(System_Collections_Generic_List_Enumerator_T__o *)v71;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v73,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          v34 = sub_B70764(BattleBuffData___c__DisplayClass262_1_TypeInfo);
          BattleBuffData___c__DisplayClass262_1___ctor((BattleBuffData___c__DisplayClass262_1_o *)v34, 0LL);
          if ( !v34 )
            sub_B7076C(v35, v36);
          current = (System_Int32_array **)v73.fields.current;
          *(_QWORD *)(v34 + 16) = v73.fields.current;
          sub_B70630((BattleServantConfConponent_o *)(v34 + 16), current, v37, v38, v39, v40, v41, v42);
          v44 = this->fields.passiveList;
          v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v45,
            (Il2CppObject *)v34,
            Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__4__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v44 )
            sub_B7076C(v46, v47);
          v48 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                 (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v44,
                                                                 (System_Predicate_T__o *)v45,
                                                                 (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
          if ( !v8 )
            sub_B7076C(v48, v48);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
            v48,
            (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v49 = this->fields.passiveList;
          v50 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v50,
            (Il2CppObject *)v34,
            Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__5__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v49 )
            sub_B7076C(v51, v52);
          System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
            (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v49,
            (System_Predicate_T__o *)v50,
            (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
          v53 = this->fields.activeList;
          v54 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v54,
            (Il2CppObject *)v34,
            Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__6__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v53 )
            sub_B7076C(v55, v56);
          v57 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                 (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v53,
                                                                 (System_Predicate_T__o *)v54,
                                                                 (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
            v57,
            (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v58 = this->fields.activeList;
          v59 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v59,
            (Il2CppObject *)v34,
            Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__7__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v58 )
            sub_B7076C(v60, v61);
          System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
            (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v58,
            (System_Predicate_T__o *)v59,
            (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        }
        *(_DWORD *)&v71[4 * v68 + 24] = 395;
        v63 = ++v72;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v73,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
        IsNullOrEmpty = v66;
        v62 = v70;
        if ( v63 )
        {
          v68 = v63;
          v30 = classBoardCommandSpellArray;
          if ( *(_DWORD *)&v71[4 * v63 + 20] == 395 )
          {
            v72 = v63 - 1;
            v68 = v63 - 1;
          }
        }
        else
        {
          v30 = classBoardCommandSpellArray;
          v68 = 0;
        }
      }
      else
      {
        v30 = classBoardCommandSpellArray;
        IsNullOrEmpty = v66;
        v62 = v70;
      }
      max_length = v30->max_length;
      v32 = v62 + 1;
      if ( v32 >= max_length )
        goto LABEL_50;
    }
    goto LABEL_52;
  }
LABEL_50:
  BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v8,
    logic,
    v29);
}


void __fastcall BattleBuffData__RemoveClassIconEffectBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *effectBuff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20

  v4 = this;
  if ( (byte_43554AB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    byte_43554AB = 1;
  }
  if ( !effectBuff )
    goto LABEL_10;
  if ( effectBuff->fields.classIconAuraEffectId )
  {
    this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
    if ( !this )
      goto LABEL_10;
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
           (WarBoardManager_TaskList_o *)effectBuff,
           (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
      if ( this )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)effectBuff,
          (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        return;
      }
LABEL_10:
      sub_B7076C(this, effectBuff);
    }
  }
}


void __fastcall BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *removeBuffList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  BattleBuffData_o *v11; // x0
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43554AF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_43554AF = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffList, 0LL) )
  {
    v8 = BattleBuffData__removeLinkageBuff(this, removeBuffList, 0, v7);
    if ( removeBuffList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)removeBuffList,
        (System_Collections_Generic_IEnumerable_T__o *)v8,
        (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(this, removeBuffList, v10);
      BattleBuffData__CheckAndUpdateFieldIndividualityBuff(v11, removeBuffList, logic, v12);
      v8 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                                                                           removeBuffList,
                                                                           v13);
      if ( ((unsigned __int8)v8 & 1) == 0 )
        goto LABEL_8;
      if ( logic )
      {
        BattleLogic__updateFieldBuff(logic, 0LL);
LABEL_8:
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v15,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)removeBuffList,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v15,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
          BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v15.fields.current, v14);
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v15,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
        return;
      }
    }
    sub_B7076C(v8, v9);
  }
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__RemoveLinkageBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endBuffs,
        bool isCreateDummy,
        bool isFamily,
        const MethodInfo *method)
{
  __int64 v8; // x24
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  System_Collections_Generic_IEnumerable_T__o *linkageTargetIndividualty; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x26
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_WarBoardManager_TaskList__c *klass; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v25; // x25
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x25
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  System_Collections_Generic_IEnumerable_T__o *v41; // x1
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  System_Func_BattleBuffData_BuffData__int__bool__o *v46; // x25
  System_Collections_Generic_List_int__o *v47; // x22
  signed __int64 v48; // x8
  unsigned __int64 v49; // x24
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x27
  int32_t size; // w8
  int32_t v52; // w24
  unsigned __int64 v53; // x26
  int v54; // w22
  BattleBuffData_BuffData_o *v55; // x27
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v58; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x26
  int32_t v60; // w8
  unsigned __int64 v61; // x22
  int v62; // w27
  BattleBuffData_BuffData_o *v63; // x26
  const MethodInfo *v64; // x2
  unsigned __int64 v66; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v67; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // [xsp+20h] [xbp-60h]

  if ( (byte_435542A & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__int__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__int__bool__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass74_0__RemoveLinkageBuff_b__0__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass74_0__RemoveLinkageBuff_b__1__);
    sub_B70694(&BattleBuffData___c__DisplayClass74_0_TypeInfo);
    byte_435542A = 1;
  }
  v8 = sub_B70764(BattleBuffData___c__DisplayClass74_0_TypeInfo);
  BattleBuffData___c__DisplayClass74_0___ctor((BattleBuffData___c__DisplayClass74_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_99;
  *(_BYTE *)(v8 + 16) = isFamily;
  *(_QWORD *)(v8 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v67 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v67,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v8 + 32);
  if ( !v17 )
  {
    v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v17,
      (Il2CppObject *)v8,
      Method_BattleBuffData___c__DisplayClass74_0__RemoveLinkageBuff_b__1__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    *(_QWORD *)(v8 + 32) = v17;
    sub_B70630((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  }
  auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)endBuffs,
                                                                                  (System_Func_TSource__bool__o *)v17,
                                                                                  (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !auraBuffList )
    goto LABEL_99;
  klass = auraBuffList->klass;
  v25 = auraBuffList;
  if ( *(_WORD *)&auraBuffList->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v26;
      p_offset += 4;
      if ( v26 >= *(unsigned __int16 *)&auraBuffList->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_11:
    v28 = sub_B08590(auraBuffList, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_WarBoardManager_TaskList__o *, _QWORD))v28)(
          v25,
          *(_QWORD *)(v28 + 8));
  if ( !v30 )
    sub_B7076C(0LL, v29);
  while ( 1 )
  {
    v31 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_18;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_18:
      v34 = sub_B08590(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v37 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_25;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_25:
      v38 = sub_B08590(v30, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
    if ( !v39 )
      sub_B7076C(0LL, v40);
    v41 = *(System_Collections_Generic_IEnumerable_T__o **)(v39 + 128);
    if ( v41 && v41[1].monitor )
    {
      if ( !v67 )
        sub_B7076C(v39, v41);
      System_Collections_Generic_List_int___AddRange(
        v67,
        v41,
        (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  v42 = *(_QWORD *)v30;
  if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
  {
    v43 = 0LL;
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
        goto LABEL_36;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_36:
    v45 = sub_B08590(v30, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v45)(v30, *(_QWORD *)(v45 + 8));
  v46 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__int__bool__TypeInfo);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v46,
    (Il2CppObject *)v8,
    Method_BattleBuffData___c__DisplayClass74_0__RemoveLinkageBuff_b__0__,
    (const MethodInfo_29B65F0 *)Method_System_Func_BattleBuffData_BuffData__int__bool___ctor__);
  v47 = v67;
  if ( !v67 )
    goto LABEL_99;
  LODWORD(v48) = v67->fields._size;
  if ( (int)v48 >= 1 )
  {
    v49 = 0LL;
    while ( 1 )
    {
      if ( v49 >= (unsigned int)v48 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      activeList = this->fields.activeList;
      if ( !activeList )
        goto LABEL_99;
      size = activeList->fields._size;
      v66 = v49;
      v52 = v47->fields._items->m_Items[v49 + 1];
      if ( size - 1 >= 0 )
        break;
LABEL_72:
      passiveList = this->fields.passiveList;
      if ( !passiveList )
        goto LABEL_99;
      v60 = passiveList->fields._size;
      if ( v60 - 1 >= 0 )
      {
        v61 = v60 - 1;
        v62 = v60 - 2;
        do
        {
          if ( v61 >= (unsigned int)passiveList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          if ( !v46 )
            break;
          v63 = passiveList->fields._items->m_Items[v61];
          auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                                                                          v46,
                                                                                          v63,
                                                                                          v52,
                                                                                          (const MethodInfo_29B6604 *)Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__);
          if ( ((unsigned __int8)auraBuffList & 1) != 0 )
          {
            if ( !v63 )
              break;
            linkageTargetIndividualty = (System_Collections_Generic_IEnumerable_T__o *)v63->fields.linkageTargetIndividualty;
            if ( linkageTargetIndividualty && linkageTargetIndividualty[1].monitor )
              System_Collections_Generic_List_int___AddRange(
                v67,
                linkageTargetIndividualty,
                (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v63->fields.auraEffectId )
            {
              auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
              if ( !auraBuffList )
                break;
              if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                     auraBuffList,
                     (WarBoardManager_TaskList_o *)v63,
                     (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
              {
                auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
                if ( !auraBuffList )
                  break;
                System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                  auraBuffList,
                  (WarBoardManager_TaskList_o *)v63,
                  (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
              }
            }
            BattleBuffData__RemoveClassIconEffectBuff(this, v63, v64);
            if ( !endBuffs )
              break;
            if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)endBuffs,
                    (WarBoardManager_TaskList_o *)v63,
                    (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
            {
              auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v69;
              if ( !v69 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v69,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
            auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.passiveList;
            if ( !auraBuffList )
              break;
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)auraBuffList,
              v62 + 1,
              (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
          }
          if ( (v62 & 0x80000000) != 0 )
            goto LABEL_97;
          passiveList = this->fields.passiveList;
          --v61;
          --v62;
        }
        while ( passiveList );
LABEL_99:
        sub_B7076C(auraBuffList, linkageTargetIndividualty);
      }
LABEL_97:
      v47 = v67;
      v48 = v67->fields._size;
      v49 = v66 + 1;
      if ( (__int64)(v66 + 1) >= v48 )
        return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v69;
    }
    v53 = size - 1;
    v54 = size - 2;
    while ( 1 )
    {
      if ( v53 >= (unsigned int)activeList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( !v46 )
        goto LABEL_99;
      v55 = activeList->fields._items->m_Items[v53];
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                                                                      v46,
                                                                                      v55,
                                                                                      v52,
                                                                                      (const MethodInfo_29B6604 *)Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__);
      if ( ((unsigned __int8)auraBuffList & 1) == 0 )
        goto LABEL_68;
      if ( !v55 )
        goto LABEL_99;
      linkageTargetIndividualty = (System_Collections_Generic_IEnumerable_T__o *)v55->fields.linkageTargetIndividualty;
      if ( linkageTargetIndividualty && linkageTargetIndividualty[1].monitor )
        System_Collections_Generic_List_int___AddRange(
          v67,
          linkageTargetIndividualty,
          (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
      if ( v55->fields.auraEffectId )
      {
        auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
        if ( !auraBuffList )
          goto LABEL_99;
        if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
               auraBuffList,
               (WarBoardManager_TaskList_o *)v55,
               (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
        {
          auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
          if ( !auraBuffList )
            goto LABEL_99;
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            auraBuffList,
            (WarBoardManager_TaskList_o *)v55,
            (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        }
      }
      BattleBuffData__RemoveClassIconEffectBuff(this, v55, v56);
      if ( !endBuffs )
        goto LABEL_99;
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)endBuffs,
              (WarBoardManager_TaskList_o *)v55,
              (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v69;
        if ( !v69 )
          goto LABEL_99;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v69,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.activeList;
      if ( !auraBuffList )
        goto LABEL_99;
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)auraBuffList,
        v53,
        (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      if ( !isCreateDummy )
        goto LABEL_68;
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)BattleBuffData__CreateDummyBuff(
                                                                                      (BattleBuffData_o *)auraBuffList,
                                                                                      v55,
                                                                                      v57);
      v58 = this->fields.activeList;
      if ( !v58 )
        goto LABEL_99;
      if ( (__int64)v53 < v58->fields._size )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.activeList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)auraBuffList,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      if ( (v54 & 0x80000000) != 0 )
        goto LABEL_72;
LABEL_69:
      activeList = this->fields.activeList;
      --v53;
      --v54;
      if ( !activeList )
        goto LABEL_99;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
      v53,
      (XWeaponTrail_Element_o *)auraBuffList,
      (const MethodInfo_302689C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__);
LABEL_68:
    if ( (v54 & 0x80000000) != 0 )
      goto LABEL_72;
    goto LABEL_69;
  }
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v69;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__RemoveNoTurnBuff(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x22
  void *All; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__70_0; // x23
  BattleLogic_o *v11; // x19
  Il2CppObject *v12; // x24
  struct BattleBuffData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v20; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x23
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x22
  struct BattleBuffData___c_StaticFields *v23; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__70_1; // x23
  BattleLogic_o *v25; // x27
  Il2CppObject *v26; // x24
  struct BattleBuffData___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v35; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v36; // x23
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  const MethodInfo *v39; // x2
  BattleBuffData_o *v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x1

  if ( (byte_4355426 & 1) == 0 )
  {
    sub_B70694(&Method_BattleBuffData_checkBuffClear__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__RemoveNoTurnBuff_b__70_0__);
    sub_B70694(&Method_BattleBuffData___c__RemoveNoTurnBuff_b__70_1__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355426 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  All = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__70_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 )
    {
      v11 = logic;
      if ( !*((_DWORD *)All + 56) )
      {
        j_il2cpp_runtime_class_init_0(All);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v11 = logic;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__70_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__70_0,
      v12,
      Method_BattleBuffData___c__RemoveNoTurnBuff_b__70_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v13 = BattleBuffData___c_TypeInfo->static_fields;
    v13->__9__70_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__70_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v13->__9__70_0,
      (System_Int32_array **)_9__70_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    logic = v11;
  }
  if ( !passiveList )
    goto LABEL_30;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
          (System_Predicate_T__o *)_9__70_0,
          (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v5 )
    goto LABEL_30;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v20 = this->fields.passiveList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v20 )
    goto LABEL_30;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v20,
    (System_Predicate_T__o *)v21,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  All = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v23 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__70_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v23->__9__70_1;
  if ( !_9__70_1 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 )
    {
      v25 = logic;
      if ( !*((_DWORD *)All + 56) )
      {
        j_il2cpp_runtime_class_init_0(All);
        v23 = BattleBuffData___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v25 = logic;
    }
    v26 = (Il2CppObject *)v23->__9;
    _9__70_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__70_1,
      v26,
      Method_BattleBuffData___c__RemoveNoTurnBuff_b__70_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v27 = BattleBuffData___c_TypeInfo->static_fields;
    v27->__9__70_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__70_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v27->__9__70_1,
      (System_Int32_array **)_9__70_1,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    logic = v25;
  }
  if ( !activeList )
    goto LABEL_30;
  v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__70_1,
                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    v34,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v35 = this->fields.activeList;
  v36 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v36,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v35 )
    goto LABEL_30;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v35,
    (System_Predicate_T__o *)v36,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v38 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v5,
                                                         0,
                                                         v37);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    v38,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v5,
    v39);
  BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
    v40,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v5,
    logic,
    v41);
  All = (void *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                  (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v5,
                  v42);
  if ( ((unsigned __int8)All & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateFieldBuff(logic, 0LL);
      return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    }
LABEL_30:
    sub_B7076C(All, v6);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


void __fastcall BattleBuffData__RemovePassiveReplacedOnTransform(
        BattleBuffData_o *this,
        int32_t actorId,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass247_0_o *v7; // x21
  System_Collections_Generic_IEnumerable_T__o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v11; // x23
  System_Collections_Generic_List_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x23
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v14; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x24
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v16; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x24
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v18; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x24
  const MethodInfo *v20; // x3

  if ( (byte_43554A0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass247_0__RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0__);
    sub_B70694(&BattleBuffData___c__DisplayClass247_0_TypeInfo);
    byte_43554A0 = 1;
  }
  v7 = (BattleBuffData___c__DisplayClass247_0_o *)sub_B70764(BattleBuffData___c__DisplayClass247_0_TypeInfo);
  BattleBuffData___c__DisplayClass247_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  v7->fields.actorId = actorId;
  passiveList = this->fields.passiveList;
  v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BattleBuffData___c__DisplayClass247_0__RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !passiveList )
    goto LABEL_10;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  activeList = this->fields.activeList;
  v14 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)All;
  v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v15,
    (Il2CppObject *)v7,
    Method_BattleBuffData___c__DisplayClass247_0__RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !activeList )
    goto LABEL_10;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                        (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                        (System_Predicate_T__o *)v15,
                                                        (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v14 )
    goto LABEL_10;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v14,
    v8,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v16 = this->fields.passiveList;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_BattleBuffData___c__DisplayClass247_0__RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v16
    || (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v16,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__),
        v18 = this->fields.activeList,
        v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v19,
          (Il2CppObject *)v7,
          Method_BattleBuffData___c__DisplayClass247_0__RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !v18) )
  {
LABEL_10:
    sub_B7076C(v8, v9);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v18,
    (System_Predicate_T__o *)v19,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v14,
    logic,
    v20);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__RemoveProgressingBuffList(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x19
  BattleBuffData_BuffData_array *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *passiveList; // x21
  void *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v10; // x22
  Il2CppObject *v11; // x23
  struct BattleBuffData___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *activeList; // x21
  void *v20; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x22
  Il2CppObject *v22; // x23
  struct BattleBuffData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *v31; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x22
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *v33; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x22
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v36; // x19
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  _BOOL8 v39; // x0
  const MethodInfo *v40; // x3

  v4 = this;
  if ( (byte_4355435 & 1) == 0 )
  {
    sub_B70694(&Method_BattleBuffData_checkBuffClear__);
    sub_B70694(&BattleLogic_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__RemoveProgressingBuffList_b__88_0__);
    sub_B70694(&Method_BattleBuffData___c__RemoveProgressingBuffList_b__88_1__);
    this = (BattleBuffData_o *)sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355435 = 1;
  }
  if ( !linkedBuffList )
    goto LABEL_32;
  v5 = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)linkedBuffList,
                                          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleBuffData__syncLinkageBuffChangeParam(v4, v5, v6);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v4->fields.passiveList;
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  static_fields = this[1].fields.passiveList;
  v10 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)static_fields + 15);
  if ( !v10 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v11 = *(Il2CppObject **)static_fields;
    v10 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v10,
      v11,
      Method_BattleBuffData___c__RemoveProgressingBuffList_b__88_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v12 = BattleBuffData___c_TypeInfo->static_fields;
    v12->__9__88_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v10;
    sub_B70630(
      (BattleServantConfConponent_o *)&v12->__9__88_0,
      (System_Int32_array **)v10,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !passiveList )
    goto LABEL_32;
  this = (BattleBuffData_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                               passiveList,
                               (System_Predicate_T__o *)v10,
                               (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v7 )
    goto LABEL_32;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v4->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v20 = this[1].fields.passiveList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)v20 + 16);
  if ( !v21 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v20 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v22 = *(Il2CppObject **)v20;
    v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v21,
      v22,
      Method_BattleBuffData___c__RemoveProgressingBuffList_b__88_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v23 = BattleBuffData___c_TypeInfo->static_fields;
    v23->__9__88_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)v21;
    sub_B70630(
      (BattleServantConfConponent_o *)&v23->__9__88_1,
      (System_Int32_array **)v21,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !activeList )
    goto LABEL_32;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         activeList,
                                                         (System_Predicate_T__o *)v21,
                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    All,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v31 = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v4->fields.passiveList;
  v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v32,
    (Il2CppObject *)v4,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v31
    || (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          v31,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__),
        v33 = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v4->fields.activeList,
        v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v34,
          (Il2CppObject *)v4,
          Method_BattleBuffData_checkBuffClear__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !v33) )
  {
LABEL_32:
    sub_B7076C(this, linkedBuffList);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    v33,
    (System_Predicate_T__o *)v34,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v36 = BattleBuffData__removeLinkageBuff(v4, (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7, 0, v35);
  if ( BattleBuffData__CheckInvalidSacrificeIndivArray(
         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7,
         v37)
    || (v39 = BattleBuffData__CheckInvalidSacrificeIndivArray(v36, v38)) )
  {
    if ( (BYTE3(BattleLogic_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleLogic_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleLogic_TypeInfo);
    BattleLogic__DoUpdateFieldBuff(0LL);
  }
  return BattleBuffData__MakeRemoveBuffInfo(
           (BattleBuffData_o *)v39,
           (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7,
           v36,
           v40);
}


void __fastcall BattleBuffData__RemoveSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  System_Collections_Generic_List_BattleBuffData_BuffData__o *SkillTypeBuff; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  v6 = this;
  if ( (byte_4355489 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    byte_4355489 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  SkillTypeBuff = BattleBuffData__GetSkillTypeBuff(this, buffList, skillTypes, method);
  if ( !SkillTypeBuff )
    sub_B7076C(0LL, v8);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SkillTypeBuff,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v19,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v9 )
      break;
    if ( !buffList )
      sub_B7076C(v9, v10);
    current = v19.fields.current;
    v12 = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)buffList,
            (WarBoardManager_TaskList_o *)v19.fields.current,
            (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    if ( !current )
      sub_B7076C(v12, v13);
    if ( LODWORD(current[4].klass) )
    {
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6->fields.auraBuffList;
      if ( !auraBuffList )
        sub_B7076C(0LL, v13);
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             auraBuffList,
             (WarBoardManager_TaskList_o *)current,
             (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        v17 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6->fields.auraBuffList;
        if ( !v17 )
          sub_B7076C(0LL, v16);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v17,
          (WarBoardManager_TaskList_o *)current,
          (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
      }
    }
    BattleBuffData__RemoveClassIconEffectBuff(v6, (BattleBuffData_BuffData_o *)current, v14);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__RemoveSkillTypePassiveBuff(
        BattleBuffData_o *this,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__RemoveSkillTypeBuff(this, this->fields.passiveList, skillTypes, v3);
}


void __fastcall BattleBuffData__RemoveUpdateWaitIntervalBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updateWaitIntervalBuffList; // x0

  if ( (byte_435540A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    byte_435540A = 1;
  }
  updateWaitIntervalBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updateWaitIntervalBuffList;
  if ( !updateWaitIntervalBuffList )
    sub_B7076C(0LL, buff);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    updateWaitIntervalBuffList,
    (WarBoardManager_TaskList_o *)buff,
    (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
}


void __fastcall BattleBuffData__ResetCommandAssistBuffActiveFlg(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v4; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v6; // x19
  unsigned int v7; // w21
  Il2CppClass **v8; // x8
  Il2CppClass *v9; // x20
  __int64 v10; // x0

  PassiveList = BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_11;
  max_length = PassiveList->max_length;
  v6 = PassiveList;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v10 = sub_B70798(PassiveList);
        sub_B70738(v10, 0LL);
      }
      v8 = &v6->obj.klass + (int)v7;
      v9 = v8[4];
      if ( !v9 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                       (BattleBuffData_BuffData_o *)v8[4],
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        LOBYTE(v9->vtable[5].methodPtr) = 0;
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_B7076C(PassiveList, v4);
  }
}


void __fastcall BattleBuffData__ResetCommandCodeBuffActiveFlg(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v4; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v6; // x19
  unsigned int v7; // w21
  Il2CppClass **v8; // x8
  Il2CppClass *v9; // x20
  __int64 v10; // x0

  PassiveList = BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_11;
  max_length = PassiveList->max_length;
  v6 = PassiveList;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v10 = sub_B70798(PassiveList);
        sub_B70738(v10, 0LL);
      }
      v8 = &v6->obj.klass + (int)v7;
      v9 = v8[4];
      if ( !v9 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCodeBuff(
                                                       (BattleBuffData_BuffData_o *)v8[4],
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        LOBYTE(v9->_1.generic_class) = 0;
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_B7076C(PassiveList, v4);
  }
}


void __fastcall BattleBuffData__ResetNotTakeOverBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData___c_c *v3; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__71_0; // x20
  Il2CppObject *v6; // x21
  struct BattleBuffData___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_4355427 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    sub_B70694(&Method_BattleBuffData___c__ResetNotTakeOverBuff_b__71_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355427 = 1;
  }
  v3 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v3 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__71_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__71_0;
  if ( !_9__71_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__71_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__71_0,
      v6,
      Method_BattleBuffData___c__ResetNotTakeOverBuff_b__71_0__,
      (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v7 = BattleBuffData___c_TypeInfo->static_fields;
    v7->__9__71_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__71_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v7->__9__71_0,
      (System_Int32_array **)_9__71_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  activeList = this->fields.activeList;
  if ( !activeList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
          (System_Action_T__o *)_9__71_0,
          (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = this->fields.passiveList) == 0LL) )
  {
    sub_B7076C(activeList, method);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
    (System_Action_T__o *)_9__71_0,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


void __fastcall BattleBuffData__ResetTargetUseBuff(
        BattleBuffData_o *this,
        int32_t targetType,
        bool isIntervalOnly,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x1
  __int64 v32; // x21
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  BattleBuffData_BuffData_o *v41; // x22
  const MethodInfo *v42; // x2
  __int64 v43; // x0
  __int64 v44; // x1
  BattleBuffData_IntervalData_o *intervalData; // x0
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0

  if ( (byte_43554A6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass253_0__ResetTargetUseBuff_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass253_0_TypeInfo);
    byte_43554A6 = 1;
  }
  v7 = sub_B70764(BattleBuffData___c__DisplayClass253_0_TypeInfo);
  BattleBuffData___c__DisplayClass253_0___ctor((BattleBuffData___c__DisplayClass253_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_42;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = targetType;
  v17 = BattleBuffData__AllBuffEnumerable(this, v16);
  v18 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v7 + 32);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !v18 )
  {
    v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v18,
      (Il2CppObject *)v7,
      Method_BattleBuffData___c__DisplayClass253_0__ResetTargetUseBuff_b__0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    *(_QWORD *)(v7 + 32) = v18;
    sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
  }
  v8 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
         v19,
         (System_Func_TSource__bool__o *)v18,
         (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v8 )
LABEL_42:
    sub_B7076C(v8, v9);
  klass = v8->klass;
  v27 = v8;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_B08590(v8, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v27,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_B7076C(0LL, v31);
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_18;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_18:
      v36 = sub_B08590(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v39 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_25;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_25:
      v40 = sub_B08590(v32, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v41 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    BattleBuffData__RemoveUpdateWaitIntervalBuff(this, v41, v42);
    if ( isIntervalOnly )
    {
      if ( !v41 )
        sub_B7076C(v43, v44);
      intervalData = v41->fields.intervalData;
      if ( intervalData )
        BattleBuffData_IntervalData__Reset(intervalData, 0LL);
    }
    else
    {
      if ( !v41 )
        sub_B7076C(v43, v44);
      BattleBuffData_BuffData__RevertUnused(v41, 1, 0LL);
    }
  }
  v46 = *(_QWORD *)v32;
  if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
  {
    v47 = 0LL;
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
        goto LABEL_37;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_37:
    v49 = sub_B08590(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v32, *(_QWORD *)(v49 + 8));
}


void __fastcall BattleBuffData__SetCommandAssistBuffActiveFlg(
        BattleBuffData_o *this,
        int64_t selectCommandAssistId,
        System_Action_BuffEntity__BattleBuffData_BuffData__o *setBuffAction,
        bool isRecharge,
        int32_t cardIndex,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *PassiveList; // x24
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x25
  unsigned int v16; // w27
  BattleBuffData_BuffData_o *v17; // x26
  const MethodInfo *v18; // x3
  __int64 commandAssistId; // x8
  const MethodInfo *v20; // x2
  __int64 v21; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4355481 & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355481 = 1;
  }
  entity = 0LL;
  PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)setBuffAction);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !PassiveList )
    goto LABEL_24;
  max_length = PassiveList->max_length;
  if ( max_length >= 1 )
  {
    v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v21 = sub_B70798(Instance);
        sub_B70738(v21, 0LL);
      }
      v17 = PassiveList->m_Items[v16];
      if ( !v17 )
        break;
      if ( !v17->fields._isRemove )
      {
        Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v17, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          commandAssistId = v17->fields.commandAssistId;
          v17->fields.isActiveCA = 0;
          if ( commandAssistId == selectCommandAssistId && (cardIndex == -1 || v17->fields.cardIndex == cardIndex) )
          {
            Instance = (DataManager_o *)BattleBuffData__checkBuffSuccessful(this, v17, 1, v18);
            if ( ((unsigned __int8)Instance & 1) != 0 && v17->fields.reCharge <= 0 )
            {
              v17->fields.isActiveCA = 1;
              if ( isRecharge )
                BattleBuffData__RechargeCommandAssistBuff((BattleBuffData_o *)Instance, v17, v20);
              if ( !v15 )
                break;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            v15,
                                            &entity,
                                            v17->fields.buffId,
                                            (const MethodInfo_21C049C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                ActionExtensions__Call_object__object_(
                  (System_Action_T1__T2__o *)setBuffAction,
                  (Il2CppObject *)entity,
                  (Il2CppObject *)v17,
                  (const MethodInfo_2BFC378 *)Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
            }
          }
        }
      }
      max_length = PassiveList->max_length;
      if ( (int)++v16 >= max_length )
        return;
    }
LABEL_24:
    sub_B7076C(Instance, v13);
  }
}


void __fastcall BattleBuffData__SetCommandCardBuffActive(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        bool isCheckBuffSuccess,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  const MethodInfo *v8; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v13; // x4
  signed __int64 size; // x8
  unsigned __int64 v15; // x23
  bool v16; // w21

  if ( (byte_4355495 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355495 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v8);
  if ( !v7 )
    sub_B7076C(ActiveList, v10);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v11);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  LODWORD(size) = v7->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    v16 = isCheckBuffSuccess;
    do
    {
      if ( v15 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      BattleBuffData__CheckCommandCardBuffActive(
        this,
        commandData,
        (BattleBuffData_BuffData_o *)v7->fields._items->m_Items[v15],
        v16,
        v13);
      size = v7->fields._size;
      ++v15;
    }
    while ( (__int64)v15 < size );
  }
}


void __fastcall BattleBuffData__SetCommandCodeBuffActiveFlg(
        BattleBuffData_o *this,
        int64_t selectUserCCId,
        System_Action_BuffEntity__BattleBuffData_BuffData__o *setBuffAction,
        bool isRecharge,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *PassiveList; // x23
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x24
  unsigned int v14; // w26
  BattleBuffData_BuffData_o *v15; // x25
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  __int64 v18; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_435547F & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435547F = 1;
  }
  entity = 0LL;
  PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)setBuffAction);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !PassiveList )
    goto LABEL_22;
  max_length = PassiveList->max_length;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v18 = sub_B70798(Instance);
        sub_B70738(v18, 0LL);
      }
      v15 = PassiveList->m_Items[v14];
      if ( !v15 )
        break;
      if ( !v15->fields._isRemove )
      {
        Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v15, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v15->fields.isActiveCC = 0;
          Instance = (DataManager_o *)BattleBuffData_BuffData__IsMineCommandCode(v15, selectUserCCId, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)BattleBuffData__checkBuffSuccessful(this, v15, 1, v16);
            if ( ((unsigned __int8)Instance & 1) != 0 && v15->fields.reCharge <= 0 )
            {
              v15->fields.isActiveCC = 1;
              if ( isRecharge )
                BattleBuffData__RechargeCommandCodeBuff((BattleBuffData_o *)Instance, v15, v17);
              if ( !v13 )
                break;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            v13,
                                            &entity,
                                            v15->fields.buffId,
                                            (const MethodInfo_21C049C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                ActionExtensions__Call_object__object_(
                  (System_Action_T1__T2__o *)setBuffAction,
                  (Il2CppObject *)entity,
                  (Il2CppObject *)v15,
                  (const MethodInfo_2BFC378 *)Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
            }
          }
        }
      }
      max_length = PassiveList->max_length;
      if ( (int)++v14 >= max_length )
        return;
    }
LABEL_22:
    sub_B7076C(Instance, v11);
  }
}


void __fastcall BattleBuffData__SetNoActBuffWithoutExecuteServant(
        BattleBuffData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_435549A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_435549A = 1;
  }
  memset(&v8, 0, sizeof(v8));
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    sub_B7076C(0LL, servantArray);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v8,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v6 )
      break;
    if ( !v8.fields.current )
      sub_B7076C(v6, v7);
    if ( SLODWORD(v8.fields.current[17].klass) >= 1 )
      BattleBuffData_BuffData__SetBuffNoActState((BattleBuffData_BuffData_o *)v8.fields.current, servantArray, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromCheckFunc(
        BattleBuffData_o *this,
        System_Func_BattleBuffData_BuffData__bool__o *checkFunc,
        bool isCreateDummy,
        const MethodInfo *method)
{
  _BOOL4 v4; // w25
  System_Func_BattleBuffData_BuffData__bool__o *v5; // x21
  void *activeList; // x0
  char *v8; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  const MethodInfo *v10; // x3
  __int64 v11; // x8
  const MethodInfo_29AC58C **v12; // x28
  unsigned __int64 v13; // x26
  char *v14; // x27
  BattleBuffData_BuffData_o *v15; // x24
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  char *v18; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x27
  char *v20; // x23
  const MethodInfo_29AC58C **v21; // x22
  _BOOL4 v22; // w28
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v23; // x25
  BattleBuffData_o *v24; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  RemovedBuffInfo_o *v27; // x20
  __int64 v29; // x0
  System_Func_BattleBuffData_BuffData__bool__o *v30; // [xsp+8h] [xbp-58h]

  v4 = isCreateDummy;
  v5 = checkFunc;
  if ( (byte_4355446 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355446 = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_26;
  activeList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                 (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !this->fields.activeList )
    goto LABEL_26;
  v8 = (char *)activeList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v8 )
    goto LABEL_26;
  v11 = *((_QWORD *)v8 + 3);
  if ( (int)v11 >= 1 )
  {
    v12 = (const MethodInfo_29AC58C **)&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__;
    v13 = 0LL;
    v14 = v8 + 32;
    v30 = v5;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v11 )
      {
        v29 = sub_B70798(activeList);
        sub_B70738(v29, 0LL);
      }
      if ( !v5 )
        break;
      v15 = *(BattleBuffData_BuffData_o **)&v14[8 * v13];
      activeList = (void *)System_Func_BattleBuffData_BuffData__bool___Invoke(v5, v15, *v12);
      if ( ((unsigned __int8)activeList & 1) != 0 )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        if ( !v15 )
          break;
        if ( v15->fields.auraEffectId )
        {
          activeList = this->fields.auraBuffList;
          if ( !activeList )
            break;
          if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeList,
                 (WarBoardManager_TaskList_o *)v15,
                 (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
          {
            activeList = this->fields.auraBuffList;
            if ( !activeList )
              break;
            System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeList,
              (WarBoardManager_TaskList_o *)v15,
              (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          }
        }
        BattleBuffData__RemoveClassIconEffectBuff(this, v15, v16);
        if ( v4 )
        {
          v18 = v14;
          v19 = v9;
          v20 = v8;
          v21 = v12;
          v22 = v4;
          v23 = this->fields.activeList;
          activeList = BattleBuffData__CreateDummyBuff((BattleBuffData_o *)activeList, v15, v17);
          if ( !v23 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23,
            (EventMissionProgressRequest_Argument_ProgressData_o *)activeList,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          v4 = v22;
          v12 = v21;
          v8 = v20;
          v9 = v19;
          v14 = v18;
          v5 = v30;
        }
      }
      else
      {
        activeList = this->fields.activeList;
        if ( !activeList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v11) = *((_DWORD *)v8 + 6);
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_24;
    }
LABEL_26:
    sub_B7076C(activeList, checkFunc);
  }
LABEL_24:
  v24 = (BattleBuffData_o *)BattleBuffData__removeLinkageBuff(
                              this,
                              (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9,
                              v4,
                              v10);
  activeList = BattleBuffData__MakeRemoveBuffInfo(
                 v24,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
                 v25);
  if ( !activeList )
    goto LABEL_26;
  v27 = (RemovedBuffInfo_o *)activeList;
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    *((System_Collections_Generic_List_BattleBuffData_BuffData__o **)activeList + 2),
    v26);
  return v27;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromDeadActorId(
        BattleBuffData_o *this,
        int32_t actorId,
        bool isCreateDummy,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass110_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x21
  const MethodInfo *v11; // x3

  if ( (byte_4355444 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass110_0__SubBuffFromDeadActorId_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass110_0_TypeInfo);
    byte_4355444 = 1;
  }
  v7 = (BattleBuffData___c__DisplayClass110_0_o *)sub_B70764(BattleBuffData___c__DisplayClass110_0_TypeInfo);
  BattleBuffData___c__DisplayClass110_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  v7->fields.actorId = actorId;
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_BattleBuffData___c__DisplayClass110_0__SubBuffFromDeadActorId_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v10,
           isCreateDummy,
           v11);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromType(
        BattleBuffData_o *this,
        int32_t buffId,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v7; // x22
  BuffMaster_o *buffMst; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x21
  const MethodInfo *v18; // x3

  if ( (byte_4355443 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass109_0__SubBuffFromType_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass109_0_TypeInfo);
    byte_4355443 = 1;
  }
  v7 = sub_B70764(BattleBuffData___c__DisplayClass109_0_TypeInfo);
  BattleBuffData___c__DisplayClass109_0___ctor((BattleBuffData___c__DisplayClass109_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        (buffMst = BattleBuffData__get_buffMst(this, v16)) == 0LL) )
  {
    sub_B7076C(buffMst, v9);
  }
  *(_DWORD *)(v7 + 24) = BuffMaster__GetBuffType(buffMst, buffId, -1, 0LL);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_BattleBuffData___c__DisplayClass109_0__SubBuffFromType_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v17,
           isCreateDummy,
           v18);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffSpecified(
        BattleBuffData_o *this,
        System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *toRemove,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x21
  const MethodInfo *v17; // x3

  if ( (byte_4355445 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass111_0__SubBuffSpecified_g__CheckFunc_0__);
    sub_B70694(&BattleBuffData___c__DisplayClass111_0_TypeInfo);
    byte_4355445 = 1;
  }
  v7 = sub_B70764(BattleBuffData___c__DisplayClass111_0_TypeInfo);
  BattleBuffData___c__DisplayClass111_0___ctor((BattleBuffData___c__DisplayClass111_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 16) = toRemove;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)toRemove, v10, v11, v12, v13, v14, v15);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v7,
    Method_BattleBuffData___c__DisplayClass111_0__SubBuffSpecified_g__CheckFunc_0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v16,
           isCreateDummy,
           v17);
}


void __fastcall BattleBuffData__UpdateBaseAddOrder(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *v2; // x19
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x20
  BattleBuffData___c_c *v4; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__218_0; // x21
  Il2CppObject *v7; // x22
  BattleServantConfConponent_o *p__9__218_0; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t v15; // w20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  BattleBuffData___c_c *v17; // x0
  struct BattleBuffData___c_StaticFields *v18; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__218_1; // x22
  Il2CppObject *v20; // x23
  BattleServantConfConponent_o *p__9__218_1; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t v28; // w21

  v2 = this;
  if ( (byte_435548D & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__UpdateBaseAddOrder_b__218_0__);
    sub_B70694(&Method_BattleBuffData___c__UpdateBaseAddOrder_b__218_1__);
    this = (BattleBuffData_o *)sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_435548D = 1;
  }
  activeList = v2->fields.activeList;
  if ( !activeList )
    goto LABEL_31;
  if ( activeList->fields._size < 1 )
  {
    v15 = 0;
  }
  else
  {
    v4 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v4 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__218_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__218_0;
    if ( !_9__218_0 )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__218_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__218_0,
        v7,
        Method_BattleBuffData___c__UpdateBaseAddOrder_b__218_0__,
        (const MethodInfo_29AD124 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      p__9__218_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__218_0;
      p__9__218_0->klass = (BattleServantConfConponent_c *)_9__218_0;
      sub_B70630(p__9__218_0, (System_Int32_array **)_9__218_0, v9, v10, v11, v12, v13, v14);
    }
    this = (BattleBuffData_o *)System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)activeList,
                                 (System_Func_TSource__int__o *)_9__218_0,
                                 (const MethodInfo_1CBF1A4 *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
    v15 = (int)this;
  }
  passiveList = v2->fields.passiveList;
  if ( !passiveList )
LABEL_31:
    sub_B7076C(this, method);
  if ( passiveList->fields._size < 1 )
  {
    v28 = 0;
  }
  else
  {
    v17 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v17 = BattleBuffData___c_TypeInfo;
    }
    v18 = v17->static_fields;
    _9__218_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v18->__9__218_1;
    if ( !_9__218_1 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v18 = BattleBuffData___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)v18->__9;
      _9__218_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__218_1,
        v20,
        Method_BattleBuffData___c__UpdateBaseAddOrder_b__218_1__,
        (const MethodInfo_29AD124 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      p__9__218_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__218_1;
      p__9__218_1->klass = (BattleServantConfConponent_c *)_9__218_1;
      sub_B70630(p__9__218_1, (System_Int32_array **)_9__218_1, v22, v23, v24, v25, v26, v27);
    }
    v28 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
            (System_Func_TSource__int__o *)_9__218_1,
            (const MethodInfo_1CBF1A4 *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v2->fields.addBuffOrder = System_Math__Max_45601072(v15, v28, 0LL) + 1;
}


void __fastcall BattleBuffData__UpdateBuffAddOrder(
        BattleBuffData_o *this,
        int32_t addPassiveMaxOrder,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass217_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  BattleBuffData___c_c *v9; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__217_0; // x22
  Il2CppObject *v12; // x23
  struct BattleBuffData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_passiveList; // x25
  int32_t v22; // w22
  BattleBuffData___c_c *v23; // x0
  struct BattleBuffData___c_StaticFields *v24; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__217_1; // x23
  Il2CppObject *v26; // x24
  BattleServantConfConponent_o *p__9__217_1; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w21
  int32_t v35; // w0
  struct BattleBuffData___c_StaticFields *v36; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__217_2; // x22
  Il2CppObject *v38; // x23
  BattleServantConfConponent_o *p__9__217_2; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v46; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v47; // x21
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v48; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v49; // x21

  if ( (byte_435548C & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_0__);
    sub_B70694(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_1__);
    sub_B70694(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_2__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass217_0__UpdateBuffAddOrder_b__3__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass217_0__UpdateBuffAddOrder_b__4__);
    sub_B70694(&BattleBuffData___c__DisplayClass217_0_TypeInfo);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_435548C = 1;
  }
  v5 = (BattleBuffData___c__DisplayClass217_0_o *)sub_B70764(BattleBuffData___c__DisplayClass217_0_TypeInfo);
  BattleBuffData___c__DisplayClass217_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_48;
  v5->fields.addPassiveMaxOrder = addPassiveMaxOrder;
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_48;
  if ( activeList->fields._size <= 0 )
  {
    p_passiveList = &this->fields.passiveList;
    passiveList = this->fields.passiveList;
    if ( !passiveList )
      goto LABEL_48;
    if ( passiveList->fields._size <= 0 )
      return;
    v22 = 0;
  }
  else
  {
    v9 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v9 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__217_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__217_0;
    if ( !_9__217_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__217_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__217_0,
        v12,
        Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_0__,
        (const MethodInfo_29AD124 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v13 = BattleBuffData___c_TypeInfo->static_fields;
      v13->__9__217_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__217_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v13->__9__217_0,
        (System_Int32_array **)_9__217_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v6 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)activeList,
           (System_Func_TSource__int__o *)_9__217_0,
           (const MethodInfo_1CBF8DC *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    p_passiveList = &this->fields.passiveList;
    passiveList = this->fields.passiveList;
    if ( !passiveList )
      goto LABEL_48;
    v22 = v6;
  }
  if ( passiveList->fields._size >= 1 )
  {
    v23 = BattleBuffData___c_TypeInfo;
    if ( v22 <= 0 )
    {
      if ( (WORD1(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
        v23 = BattleBuffData___c_TypeInfo;
      }
      v36 = v23->static_fields;
      _9__217_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v36->__9__217_2;
      if ( !_9__217_2 )
      {
        if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v36 = BattleBuffData___c_TypeInfo->static_fields;
        }
        v38 = (Il2CppObject *)v36->__9;
        _9__217_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleBuffData_BuffData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__217_2,
          v38,
          Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_2__,
          (const MethodInfo_29AD124 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
        p__9__217_2 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__217_2;
        p__9__217_2->klass = (BattleServantConfConponent_c *)_9__217_2;
        sub_B70630(p__9__217_2, (System_Int32_array **)_9__217_2, v40, v41, v42, v43, v44, v45);
      }
      v35 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
              (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
              (System_Func_TSource__int__o *)_9__217_2,
              (const MethodInfo_1CBF8DC *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    }
    else
    {
      if ( (WORD1(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
        v23 = BattleBuffData___c_TypeInfo;
      }
      v24 = v23->static_fields;
      _9__217_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v24->__9__217_1;
      if ( !_9__217_1 )
      {
        if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v24 = BattleBuffData___c_TypeInfo->static_fields;
        }
        v26 = (Il2CppObject *)v24->__9;
        _9__217_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleBuffData_BuffData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__217_1,
          v26,
          Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_1__,
          (const MethodInfo_29AD124 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
        p__9__217_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__217_1;
        p__9__217_1->klass = (BattleServantConfConponent_c *)_9__217_1;
        sub_B70630(p__9__217_1, (System_Int32_array **)_9__217_1, v28, v29, v30, v31, v32, v33);
      }
      v34 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
              (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
              (System_Func_TSource__int__o *)_9__217_1,
              (const MethodInfo_1CBF8DC *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v35 = System_Math__Min_45556056(v22, v34, 0LL);
    }
    v22 = v35;
  }
  if ( v22 <= v5->fields.addPassiveMaxOrder )
  {
    v46 = this->fields.activeList;
    v47 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v47,
      (Il2CppObject *)v5,
      Method_BattleBuffData___c__DisplayClass217_0__UpdateBuffAddOrder_b__3__,
      (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    if ( v46 )
    {
      System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
        (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v46,
        (System_Action_T__o *)v47,
        (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      v48 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)*p_passiveList;
      v49 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v49,
        (Il2CppObject *)v5,
        Method_BattleBuffData___c__DisplayClass217_0__UpdateBuffAddOrder_b__4__,
        (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      if ( v48 )
      {
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v48,
          (System_Action_T__o *)v49,
          (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
        return;
      }
    }
LABEL_48:
    sub_B7076C(v6, v7);
  }
}


void __fastcall BattleBuffData__UpdateForceAllBuffNoAct(
        BattleBuffData_o *this,
        int32_t showState,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass149_0_o *v5; // x21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  __int64 v7; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x20

  if ( (byte_435545E & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass149_0__UpdateForceAllBuffNoAct_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass149_0_TypeInfo);
    byte_435545E = 1;
  }
  v5 = (BattleBuffData___c__DisplayClass149_0_o *)sub_B70764(BattleBuffData___c__DisplayClass149_0_TypeInfo);
  BattleBuffData___c__DisplayClass149_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.showState = showState,
        v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_BattleBuffData___c__DisplayClass149_0__UpdateForceAllBuffNoAct_b__0__,
          (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__),
        (passiveList = this->fields.passiveList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v8,
          (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.activeList) == 0LL) )
  {
    sub_B7076C(passiveList, v7);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
    (System_Action_T__o *)v8,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


void __fastcall BattleBuffData__UpdateForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isAdd,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x19
  __int64 v7; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v8; // x19
  bool v9; // w0
  BattleBuffData___c_c *v10; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__92_0; // x20
  Il2CppObject *v13; // x21
  struct BattleBuffData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v6 = this;
  if ( (byte_4355439 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_B70694(&Method_BattleBuffData___c__UpdateForceBuff_b__92_0__);
    this = (BattleBuffData_o *)sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355439 = 1;
  }
  if ( !buff )
    goto LABEL_21;
  v7 = 32LL;
  if ( buff->fields.passive )
    v7 = 24LL;
  v8 = *(System_Collections_Generic_List_WarBoardManager_TaskList__o **)((char *)&v6->klass + v7);
  if ( !v8 )
LABEL_21:
    sub_B7076C(this, buff);
  v9 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         v8,
         (WarBoardManager_TaskList_o *)buff,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
  if ( isAdd )
  {
    if ( !v9 )
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  else if ( v9 )
  {
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      v8,
      (WarBoardManager_TaskList_o *)buff,
      (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
  }
  v10 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v10 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__92_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__92_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__92_0,
      v13,
      Method_BattleBuffData___c__UpdateForceBuff_b__92_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v14 = BattleBuffData___c_TypeInfo->static_fields;
    v14->__9__92_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__92_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v14->__9__92_0,
      (System_Int32_array **)_9__92_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v8,
    (System_Comparison_T__o *)_9__92_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
}


void __fastcall BattleBuffData__UpdateForceNoField(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData___c_c *v3; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__229_0; // x20
  Il2CppObject *v6; // x21
  BattleServantConfConponent_o *p__9__229_0; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_4355493 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    sub_B70694(&Method_BattleBuffData___c__UpdateForceNoField_b__229_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355493 = 1;
  }
  v3 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v3 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__229_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__229_0;
  if ( !_9__229_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__229_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__229_0,
      v6,
      Method_BattleBuffData___c__UpdateForceNoField_b__229_0__,
      (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    p__9__229_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__229_0;
    p__9__229_0->klass = (BattleServantConfConponent_c *)_9__229_0;
    sub_B70630(p__9__229_0, (System_Int32_array **)_9__229_0, v8, v9, v10, v11, v12, v13);
  }
  activeList = this->fields.activeList;
  if ( !activeList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
          (System_Action_T__o *)_9__229_0,
          (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = this->fields.passiveList) == 0LL) )
  {
    sub_B7076C(activeList, method);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
    (System_Action_T__o *)_9__229_0,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


void __fastcall BattleBuffData__UpdateSkillRelationBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *skillChangeData; // x0

  skillChangeData = this->fields.skillChangeData;
  if ( skillChangeData )
    BattleBuffData_SkillRankChangeData__Update(skillChangeData, 0LL);
}


BattleActionData_BuffData_o *__fastcall BattleBuffData__UseFieldProgressingDoNotAct(
        BattleBuffData_o *this,
        BattleServantData_o *svtData,
        int32_t funcIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x24
  __int64 v8; // x21
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  Il2CppObject *current; // x20
  BuffMaster_o *buffMst; // x0
  __int64 v16; // x1
  BuffEntity_o *Entity; // x0
  __int64 v18; // x1
  BuffEntity_o *v19; // x25
  __int64 DamageRelease; // x0
  __int64 v21; // x1
  System_Int32_array **DamageReleaseText; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4355434 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_BuffData_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355434 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  linkedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)linkedBuffList,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v8 = sub_B70764(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v8, 0LL);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v9);
  if ( !v7 )
    sub_B7076C(PassiveList, v11);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v12);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v7,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v29 )
      break;
    current = v35.fields.current;
    if ( !v35.fields.current )
      sub_B7076C(v29, v30);
    if ( !BYTE1(v35.fields.current[24].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v30);
      if ( !buffMst )
        sub_B7076C(0LL, v16);
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                 (int32_t)current[1].klass,
                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v19 = Entity;
      if ( !Entity )
        sub_B7076C(0LL, v18);
      if ( Entity->fields.type == 32 )
      {
        DamageRelease = BuffEntity__getDamageRelease(Entity, 0LL);
        if ( (int)DamageRelease >= 1 )
        {
          LODWORD(current[1].monitor) = 0;
          if ( !v8 )
            sub_B7076C(DamageRelease, v21);
          *(_DWORD *)(v8 + 16) = funcIndex;
          if ( !svtData )
            sub_B7076C(DamageRelease, v21);
          *(_DWORD *)(v8 + 40) = svtData->fields.uniqueId;
          DamageReleaseText = (System_Int32_array **)BuffEntity__getDamageReleaseText(v19, 0LL);
          *(_QWORD *)(v8 + 56) = DamageReleaseText;
          sub_B70630((BattleServantConfConponent_o *)(v8 + 56), DamageReleaseText, v23, v24, v25, v26, v27, v28);
          *(_DWORD *)(v8 + 68) = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  BattleBuffData__RemoveProgressingBuffList(this, linkedBuffList, v31);
  return (BattleActionData_BuffData_o *)v8;
}


BattleActionData_o *__fastcall BattleBuffData__UseProgressingDoNotAct(
        BattleBuffData_o *this,
        BattleServantData_o *svtData,
        bool doTDamage,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x24
  BattleActionData_o *v8; // x21
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *current; // x25
  BuffMaster_o *buffMst; // x0
  __int64 v18; // x1
  BuffEntity_o *Entity; // x0
  __int64 v20; // x1
  BuffEntity_o *v21; // x24
  __int64 DamageRelease; // x0
  __int64 v23; // x1
  __int64 v24; // x25
  __int64 v25; // x0
  __int64 v26; // x1
  System_Int32_array **DamageReleaseText; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4355433 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionData_BuffData_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355433 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  linkedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)linkedBuffList,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v8 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0LL);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v9);
  if ( !v7 )
    sub_B7076C(PassiveList, v11);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v12);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v7,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v14 )
      break;
    current = v38.fields.current;
    if ( !v38.fields.current )
      sub_B7076C(v14, v15);
    if ( !BYTE1(v38.fields.current[24].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v15);
      if ( !buffMst )
        sub_B7076C(0LL, v18);
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                 (int32_t)current[1].klass,
                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v21 = Entity;
      if ( !Entity )
        sub_B7076C(0LL, v20);
      if ( Entity->fields.type == 32 && BuffEntity__getDamageRelease(Entity, 0LL) >= 1 )
      {
        DamageRelease = BuffEntity__getDamageRelease(v21, 0LL);
        if ( (_DWORD)DamageRelease == 2 || !doTDamage )
        {
          LODWORD(current[1].monitor) = 0;
          if ( !svtData )
            sub_B7076C(DamageRelease, v23);
          if ( !v8 )
            sub_B7076C(DamageRelease, v23);
          v8->fields.targetId = svtData->fields.uniqueId;
          v24 = sub_B70764(BattleActionData_BuffData_TypeInfo);
          BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v24, 0LL);
          if ( !v24 )
            sub_B7076C(v25, v26);
          *(_DWORD *)(v24 + 40) = svtData->fields.uniqueId;
          DamageReleaseText = (System_Int32_array **)BuffEntity__getDamageReleaseText(v21, 0LL);
          *(_QWORD *)(v24 + 56) = DamageReleaseText;
          sub_B70630((BattleServantConfConponent_o *)(v24 + 56), DamageReleaseText, v28, v29, v30, v31, v32, v33);
          *(_DWORD *)(v24 + 68) = 1;
          *(_BYTE *)(v24 + 82) = 1;
          *(_BYTE *)(v24 + 27) = 1;
          BattleActionData__setBuffData(v8, (BattleActionData_BuffData_o *)v24, 0LL, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  BattleBuffData__RemoveProgressingBuffList(this, linkedBuffList, v34);
  return v8;
}


void __fastcall BattleBuffData__UsedProgressing(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *checkList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  signed int max_length; // w8
  unsigned int v10; // w23
  BattleBuffData_BuffData_o *v11; // x22
  int32_t count; // w8
  bool v13; // vf
  int v14; // w8
  __int64 v15; // x0

  if ( (byte_435542F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_435542F = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checkList )
    goto LABEL_17;
  max_length = checkList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v15 = sub_B70798(v6);
        sub_B70738(v15, 0LL);
      }
      v11 = checkList->m_Items[v10];
      if ( !v11 )
        break;
      if ( v11->fields.isDecide )
      {
        if ( v11->fields.isUse )
        {
          count = v11->fields.count;
          v13 = __OFSUB__(count, 1);
          v14 = count - 1;
          if ( v14 < 0 == v13 )
          {
            v11->fields.count = v14;
            v6 = BattleBuffData_BuffData__IslinkageTarget(v11, 0LL);
            if ( v6 )
            {
              if ( !v5 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v5,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
          }
        }
        v11->fields.isUse = 0;
        v11->fields.isDecide = 0;
      }
      max_length = checkList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_B7076C(v6, v7);
  }
LABEL_16:
  BattleBuffData__RemoveProgressingBuffList(this, (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v5, v8);
}


void __fastcall BattleBuffData___AddForceBuff_b__90_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__UpdateForceBuff(this, buff, 1, v3);
}


void __fastcall BattleBuffData___DelForceBuff_b__91_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__UpdateForceBuff(this, buff, 0, v3);
}


bool __fastcall BattleBuffData___updateAuraBuffList_b__39_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *aura,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *conditionalAuraBuff; // x0

  if ( (byte_43554B1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    byte_43554B1 = 1;
  }
  conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.conditionalAuraBuff;
  if ( !conditionalAuraBuff )
    goto LABEL_11;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          conditionalAuraBuff,
          (WarBoardManager_TaskList_o *)aura,
          (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
  {
    conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.activeList;
    if ( conditionalAuraBuff )
    {
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             conditionalAuraBuff,
             (WarBoardManager_TaskList_o *)aura,
             (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        return 0;
      }
      conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.passiveList;
      if ( conditionalAuraBuff )
        return !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  conditionalAuraBuff,
                  (WarBoardManager_TaskList_o *)aura,
                  (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    }
LABEL_11:
    sub_B7076C(conditionalAuraBuff, aura);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__addBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool fieldflg,
        bool unFix,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *auraBuffList; // x0
  __int64 addBuffOrder; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4355436 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    byte_4355436 = 1;
  }
  auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)BattleBuffData__checkConditions(this, buff, (const MethodInfo *)fieldflg);
  if ( ((unsigned __int8)auraBuffList & 1) != 0 )
  {
    if ( !buff )
      goto LABEL_22;
    BattleBuffData_BuffData__onState(buff, 32, 0LL);
  }
  if ( !fieldflg )
    auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)BattleBuffData__OnStateWithAuraConditionCheck(this, buff, 1, v11);
  if ( !buff )
LABEL_22:
    sub_B7076C(auraBuffList, addBuffOrder);
  if ( buff->fields.auraEffectId )
  {
    auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.auraBuffList;
    if ( !auraBuffList )
      goto LABEL_22;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      auraBuffList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  if ( buff->fields.classIconAuraEffectId )
  {
    auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.classIconAuraEffectBuffList;
    if ( !auraBuffList )
      goto LABEL_22;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      auraBuffList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  addBuffOrder = (unsigned int)this->fields.addBuffOrder;
  this->fields.addBuffOrder = addBuffOrder + 1;
  buff->fields.addOrder = addBuffOrder;
  if ( unFix )
  {
    auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.unfixedBuffList;
    if ( !auraBuffList )
      goto LABEL_22;
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)auraBuffList,
      addBuffOrder,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( !buff->fields.passive )
  {
    auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.activeList;
    if ( auraBuffList )
      goto LABEL_20;
    goto LABEL_22;
  }
  auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.passiveList;
  if ( !auraBuffList )
    goto LABEL_22;
LABEL_20:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    auraBuffList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


void __fastcall BattleBuffData__changeBuffStateIfNeeded(
        BattleBuffData_o *this,
        int32_t now,
        int32_t max,
        System_Int32_array *servantIndv,
        System_Int32_array *buffIndv,
        System_Int32_array *fieldIndiv,
        BattleActorControl_o *actor,
        BattleLogic_o *logic,
        System_Int32_array *canSubStateBuffIndv,
        const MethodInfo *method)
{
  _BOOL8 v18; // x0
  __int64 v19; // x1

  if ( (byte_435545C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435545C = 1;
  }
  if ( BattleBuffData__ChangeBuffState(
         this,
         now,
         max,
         servantIndv,
         buffIndv,
         fieldIndiv,
         canSubStateBuffIndv,
         (const MethodInfo *)logic) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)logic, 0LL, 0LL);
      if ( v18 )
      {
        if ( !logic )
          sub_B7076C(v18, v19);
        BattleLogic__updateConditionsBuffAll(logic, 0LL);
      }
    }
  }
}


bool __fastcall BattleBuffData__checkActBuff(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v11; // [xsp+0h] [xbp-40h]
  BattleBuffData_BuffData_o *targetBuff; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4355468 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_4355468 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  targetBuff = 0LL;
  return BattleBuffData__ConfirmationBuff(this, ActInfo, selfIndiv, opIndiv, 0, &targetBuff, 0LL, 0LL, v11);
}


bool __fastcall BattleBuffData__checkActBuffDamageBuffIndiv(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        System_Int32_array *damageBuffIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v12; // x19
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x1
  __int64 v17; // x19
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  BattleBuffData_BuffData_o *v26; // x0
  __int64 v27; // x1
  BattleBuffData_BuffData_o *v28; // x24
  BuffList_ActInfo_o *ActInfo; // x1
  const MethodInfo *v30; // x5
  const MethodInfo *v31; // x3
  System_Int32_array *ActBuffDamageBuffTargetIndivArray; // x1
  const MethodInfo *v33; // x3
  bool v34; // w20
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  int v40; // [xsp+0h] [xbp-60h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_435546E & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_435546E = 1;
  }
  plusMinus = 0;
  v9 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, (const MethodInfo *)checkIndividualities);
  if ( !v9 )
    sub_B7076C(0LL, v10);
  klass = v9->klass;
  v12 = v9;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(v9, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v12,
          *(_QWORD *)(p_method + 8));
  if ( !v17 )
    sub_B7076C(0LL, v16);
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v19 = 0LL;
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_15;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_15:
      v21 = sub_B08590(v17, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v24 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_22;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_22:
      v25 = sub_B08590(v17, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v26 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      sub_B7076C(0LL, v27);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v26, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v28,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v28, 0LL) || v28->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v28, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v28, 0LL)) )
    {
      if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
      if ( BattleBuffData__checkIndiviuality(this, ActInfo, v28, checkIndividualities, &plusMinus, v30) )
      {
        ActBuffDamageBuffTargetIndivArray = BattleBuffData__GetActBuffDamageBuffTargetIndivArray(this, act, v28, v31);
        if ( Individuality__CheckIndividualities(damageBuffIndiv, ActBuffDamageBuffTargetIndivArray, 0LL)
          && BattleBuffData__checkBuffSuccessful(this, v28, 0, v33) )
        {
          v40 = 141;
          v34 = 1;
          goto LABEL_39;
        }
      }
    }
  }
  v34 = 0;
  v40 = 139;
LABEL_39:
  v35 = *(_QWORD *)v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
  {
    v36 = 0LL;
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
        goto LABEL_43;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_43:
    v38 = sub_B08590(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v17, *(_QWORD *)(v38 + 8));
  if ( v40 == 139 )
    return 0;
  return v34;
}


bool __fastcall BattleBuffData__checkActBuff_31767764(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleBuffData_BuffData_o **usedBuff,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v10; // x1
  const MethodInfo *v12; // [xsp+0h] [xbp-40h]

  if ( (byte_4355469 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_4355469 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B7076C(ActInfo, v10);
  return BattleBuffData__ConfirmationBuff(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           0,
           usedBuff,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           v12);
}


int32_t __fastcall BattleBuffData__checkAddParam(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        bool isRec,
        const MethodInfo *method)
{
  __int64 v4; // x8
  BattleBuffData_o *v6; // x20
  int32_t v7; // w21
  unsigned __int64 v8; // x24
  BattleBuffData_BuffData_o **m_Items; // x25
  bool v10; // w22
  BattleBuffData_BuffData_o *v11; // x23
  __int64 v13; // x0

  if ( !bufflist )
LABEL_13:
    sub_B7076C(this, bufflist);
  v4 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0;
  v8 = 0LL;
  m_Items = bufflist->m_Items;
  v10 = isRec;
  do
  {
    if ( v8 >= (unsigned int)v4 )
    {
      v13 = sub_B70798(this);
      sub_B70738(v13, 0LL);
    }
    v11 = m_Items[v8];
    this = (BattleBuffData_o *)BattleBuffData__checkBuffSuccessful(v6, v11, v10, method);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_13;
      v7 += v11->fields.param;
    }
    LODWORD(v4) = bufflist->max_length;
    ++v8;
  }
  while ( (__int64)v8 < (int)v4 );
  return v7;
}


void __fastcall BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  int v9; // w19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  BuffEntity_o *Entity; // x22
  int32_t type; // w23
  int32_t v14; // w23
  __int64 v15; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x23
  BuffEntity_o *v19; // x0
  __int64 v20; // x1
  int v21; // w23
  int v22; // w24
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v23; // [xsp+0h] [xbp-C0h]
  _BYTE v24[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v25; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+30h] [xbp-90h] BYREF
  int32_t pal; // [xsp+4Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4355406 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355406 = 1;
  }
  v23 = buffList;
  memset(&v28, 0, sizeof(v28));
  pal = 0;
  memset(&v26, 0, sizeof(v26));
  v25 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___),
        v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v8,
          (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__),
        !v8) )
  {
    sub_B7076C(Instance, v6);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.passiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.activeList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v9 = 0;
  v28 = *(System_Collections_Generic_List_Enumerator_T__o *)v24;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v10 )
      break;
    if ( !v28.fields.current )
      sub_B7076C(v10, v11);
    if ( !BYTE1(v28.fields.current[24].klass) )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7076C(v10, v11);
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)v28.fields.current[1].klass,
                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( Entity )
      {
        pal = 0;
        type = Entity->fields.type;
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(81, type, 0LL) )
          goto LABEL_19;
        v14 = Entity->fields.type;
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(79, v14, 0LL) )
        {
LABEL_19:
          if ( BuffEntity__isCondition(Entity, 2, &pal, 0LL) )
          {
            if ( !v23 )
              sub_B7076C(0LL, v15);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v24,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v23,
              (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
            v26 = *(System_Collections_Generic_List_Enumerator_T__o *)v24;
            while ( 1 )
            {
              v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v26,
                      (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
              if ( !v16 )
                break;
              current = v26.fields.current;
              if ( !v26.fields.current )
                sub_B7076C(v16, v17);
              if ( !BYTE1(v26.fields.current[24].klass) )
              {
                v19 = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int32_t)v26.fields.current[1].klass,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                if ( SLODWORD(current[8].monitor) >= 1 )
                {
                  if ( !v19 )
                    sub_B7076C(0LL, v20);
                  if ( BuffEntity__checkBuffType(v19, 41, 0LL) && HIDWORD(current[1].monitor) == pal )
                  {
                    this->fields.resumptionHpFromLossMaxHp += LODWORD(current[8].monitor);
                    LODWORD(current[8].monitor) = 0;
                    break;
                  }
                }
              }
            }
            *(_DWORD *)&v24[4 * v9 + 24] = 259;
            v21 = ++v25;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v26,
              (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
            v9 = 0;
            if ( v21 )
            {
              v9 = v21;
              if ( *(_DWORD *)&v24[4 * v21 + 20] == 259 )
              {
                v9 = v21 - 1;
                v25 = v21 - 1;
              }
            }
          }
        }
      }
    }
  }
  *(_DWORD *)&v24[4 * v9 + 24] = 287;
  v22 = ++v25;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v22 && *(_DWORD *)&v24[4 * v22 + 20] == 287 )
    v25 = v22 - 1;
}


bool __fastcall BattleBuffData__checkAuraBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *v2; // x19
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x20
  unsigned __int64 v4; // x21
  WarBoardManager_TaskList_o *v5; // x20

  v2 = this;
  if ( (byte_4355415 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    byte_4355415 = 1;
  }
  auraBuffList = v2->fields.auraBuffList;
  if ( !auraBuffList )
LABEL_13:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v4 >= auraBuffList->fields._size )
      return 0;
    if ( v4 >= (unsigned int)auraBuffList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (BattleBuffData_o *)v2->fields.activeList;
    if ( !this )
      goto LABEL_13;
    v5 = (WarBoardManager_TaskList_o *)auraBuffList->fields._items->m_Items[v4];
    this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                 v5,
                                 (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleBuffData_o *)v2->fields.passiveList;
      if ( !this )
        goto LABEL_13;
      this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                   v5,
                                   (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 1;
    }
    auraBuffList = v2->fields.auraBuffList;
    ++v4;
    if ( !auraBuffList )
      goto LABEL_13;
  }
}


bool __fastcall BattleBuffData__checkBoostSkill(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 2, 0LL);
}


bool __fastcall BattleBuffData__checkBuffClear(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20

  v4 = this;
  if ( (byte_4355431 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    byte_4355431 = 1;
  }
  if ( !buff )
    goto LABEL_14;
  if ( buff->fields._isRemove || buff->fields.count && !BattleBuffData_BuffData__IsCompletelyExpired(buff, 0LL) )
    return 0;
  if ( buff->fields.auraEffectId )
  {
    this = (BattleBuffData_o *)v4->fields.auraBuffList;
    if ( !this )
      goto LABEL_14;
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
           (WarBoardManager_TaskList_o *)buff,
           (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v4->fields.auraBuffList;
      if ( this )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        goto LABEL_13;
      }
LABEL_14:
      sub_B7076C(this, buff);
    }
  }
LABEL_13:
  BattleBuffData__RemoveClassIconEffectBuff(v4, buff, method);
  return 1;
}


bool __fastcall BattleBuffData__checkBuffGroup(
        BattleBuffData_o *this,
        int32_t groupId,
        int32_t attachTarget,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v8; // x4

  return BattleBuffData__CheckBuffGroup(this, this->fields.passiveList, groupId, attachTarget, v4)
      || BattleBuffData__CheckBuffGroup(this, this->fields.activeList, groupId, attachTarget, v8);
}


bool __fastcall BattleBuffData__checkBuffId(
        BattleBuffData_o *this,
        System_Int32_array *idlist,
        const MethodInfo *method)
{
  __int64 v3; // x8
  bool result; // w0
  unsigned __int64 v7; // x21
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int max_length; // w8
  int32_t *v12; // x22
  unsigned int v13; // w9
  BattleBuffData_BuffData_o *v14; // x10
  int v15; // w8
  unsigned int v16; // w9
  BattleBuffData_BuffData_o *v17; // x10
  __int64 v18; // x0

  if ( !idlist )
    return 0;
  v3 = *(_QWORD *)&idlist->max_length;
  result = 0;
  if ( v3 && (int)v3 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      PassiveList = BattleBuffData__getPassiveList(this, 1, method);
      if ( !PassiveList )
LABEL_27:
        sub_B7076C(PassiveList, v9);
      max_length = PassiveList->max_length;
      v12 = &idlist->m_Items[v7 + 1];
      if ( max_length >= 1 )
        break;
LABEL_13:
      PassiveList = BattleBuffData__getActiveList(this, 1, v10);
      if ( !PassiveList )
        goto LABEL_27;
      v15 = PassiveList->max_length;
      if ( v15 >= 1 )
      {
        v16 = 0;
        while ( v16 < v15 )
        {
          v17 = PassiveList->m_Items[v16];
          if ( !v17 )
            goto LABEL_27;
          if ( v7 >= idlist->max_length )
            break;
          if ( v17->fields.buffId == *v12 )
            return 1;
          if ( (int)++v16 >= v15 )
            goto LABEL_21;
        }
LABEL_26:
        v18 = sub_B70798(PassiveList);
        sub_B70738(v18, 0LL);
      }
LABEL_21:
      ++v7;
      result = 0;
      if ( (__int64)v7 >= (int)idlist->max_length )
        return result;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        goto LABEL_26;
      v14 = PassiveList->m_Items[v13];
      if ( !v14 )
        goto LABEL_27;
      if ( v7 >= idlist->max_length )
        goto LABEL_26;
      if ( v14->fields.buffId == *v12 )
        return 1;
      if ( (int)++v13 >= max_length )
        goto LABEL_13;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkBuffIndividualities(
        BattleBuffData_o *this,
        System_Int32_array *individualities,
        bool isActiveOnly,
        bool IsIncludeIgnoreIndividuality,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *PassiveList; // x0
  __int64 v11; // x1
  int count; // w8
  BattleBuffData_BuffData_array *v13; // x23
  unsigned int v14; // w24
  System_Int32_array *Individualty; // x0
  int max_length; // w8
  BattleBuffData_BuffData_array *v17; // x22
  unsigned int v18; // w23
  System_Int32_array *v19; // x0
  __int64 v21; // x0

  if ( !isActiveOnly && !isIgnoreIndivUnreleaseable )
  {
    PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_20;
    count = PassiveList->fields.count;
    v13 = (BattleBuffData_BuffData_array *)PassiveList;
    if ( count >= 1 )
    {
      v14 = 0;
      do
      {
        if ( v14 >= count )
          goto LABEL_19;
        PassiveList = v13->m_Items[v14];
        if ( !PassiveList )
          goto LABEL_20;
        Individualty = BattleBuffData_BuffData__GetIndividualty(PassiveList, IsIncludeIgnoreIndividuality, 0, 0, 0LL);
        PassiveList = (BattleBuffData_BuffData_o *)Individuality__CheckIndividualities(
                                                     Individualty,
                                                     individualities,
                                                     0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          return 1;
        count = v13->max_length;
      }
      while ( (int)++v14 < count );
    }
  }
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_20:
    sub_B7076C(PassiveList, v11);
  max_length = PassiveList->fields.count;
  v17 = (BattleBuffData_BuffData_array *)PassiveList;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < max_length )
    {
      PassiveList = v17->m_Items[v18];
      if ( !PassiveList )
        goto LABEL_20;
      v19 = BattleBuffData_BuffData__GetIndividualty(
              PassiveList,
              IsIncludeIgnoreIndividuality,
              isIgnoreIndivUnreleaseable,
              0,
              0LL);
      PassiveList = (BattleBuffData_BuffData_o *)Individuality__CheckIndividualities(v19, individualities, 0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        return 1;
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        return 0;
    }
LABEL_19:
    v21 = sub_B70798(PassiveList);
    sub_B70738(v21, 0LL);
  }
  return 0;
}


bool __fastcall BattleBuffData__checkBuffSpecialAttack(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  int32_t v6; // w19

  v4 = this;
  if ( (byte_435541F & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    this = (BattleBuffData_o *)sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_435541F = 1;
  }
  if ( !buff )
    goto LABEL_12;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v4, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_B7076C(this, buff);
  }
  v6 = *(&this->fields.resumptionHpFromLossMaxHp + 1);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return BuffList__isSpHit(v6, 0LL);
}


bool __fastcall BattleBuffData__checkBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isRec,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x21
  bool isUse; // w0
  System_Collections_Generic_List_int__o **p_notUseCountWithNoDamageBuffTypes; // x22
  System_String_o *Value; // x0
  System_String_o *v11; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x23
  BattleBuffData___c_c *v13; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__121_0; // x24
  Il2CppObject *v16; // x25
  struct BattleBuffData___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BattleBuffData_o **p_buffMaster; // x23
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_int__o *v40; // x9
  BattleBuffData_o *v41; // x22
  _BOOL8 v42; // x0
  __int64 v43; // x1
  int32_t current; // w23
  int32_t v45; // w24
  int v46; // w22
  int32_t buffRate; // w8
  bool v48; // w2
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_int__o v50; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v51; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_435544C & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Func_string__int___ctor__);
    sub_B70694(&System_Func_string__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_BattleBuffData___c__checkBuffSuccessful_b__121_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)sub_B70694(&StringLiteral_9454/*"NOT_REDUCE_COUNT_WITH_NO_DAMAGE_BUFF"*/);
    byte_435544C = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( !buff )
    goto LABEL_49;
  if ( buff->fields._isRemove )
    return 0;
  if ( v6->fields.isNoDamage )
  {
    p_notUseCountWithNoDamageBuffTypes = &v6->fields.notUseCountWithNoDamageBuffTypes;
    if ( !v6->fields.notUseCountWithNoDamageBuffTypes )
    {
      this = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_49;
      this = (BattleBuffData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( !this )
        goto LABEL_49;
      Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)this, (System_String_o *)StringLiteral_9454/*"NOT_REDUCE_COUNT_WITH_NO_DAMAGE_BUFF"*/, 0LL);
      if ( Value )
      {
        v11 = Value;
        this = (BattleBuffData_o *)sub_B706AC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_49;
        if ( !LODWORD(this->fields.passiveList) )
        {
          v49 = sub_B70798(this);
          sub_B70738(v49, 0LL);
        }
        LOWORD(this->fields.activeList) = 44;
        v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                     v11,
                                                                     (System_Char_array *)this,
                                                                     0LL);
        v13 = BattleBuffData___c_TypeInfo;
        if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
          v13 = BattleBuffData___c_TypeInfo;
        }
        static_fields = v13->static_fields;
        _9__121_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__121_0;
        if ( !_9__121_0 )
        {
          if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v13);
            static_fields = BattleBuffData___c_TypeInfo->static_fields;
          }
          v16 = (Il2CppObject *)static_fields->__9;
          _9__121_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_string__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__121_0,
            v16,
            Method_BattleBuffData___c__checkBuffSuccessful_b__121_0__,
            (const MethodInfo_29AD124 *)Method_System_Func_string__int___ctor__);
          v17 = BattleBuffData___c_TypeInfo->static_fields;
          v17->__9__121_0 = (struct System_Func_string__int__o *)_9__121_0;
          sub_B70630(
            (BattleServantConfConponent_o *)&v17->__9__121_0,
            (System_Int32_array **)_9__121_0,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
        }
        v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                     v12,
                                                                     (System_Func_TSource__TResult__o *)_9__121_0,
                                                                     (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_string__int___);
        v25 = (System_Int32_array **)System_Linq_Enumerable__ToList_int_(
                                       v24,
                                       (const MethodInfo_1CCB4A0 *)Method_System_Linq_Enumerable_ToList_int___);
        *p_notUseCountWithNoDamageBuffTypes = (System_Collections_Generic_List_int__o *)v25;
        sub_B70630(
          (BattleServantConfConponent_o *)&v6->fields.notUseCountWithNoDamageBuffTypes,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      if ( !*p_notUseCountWithNoDamageBuffTypes )
        goto LABEL_38;
    }
    p_buffMaster = (BattleBuffData_o **)&v6->fields.buffMaster;
    this = (BattleBuffData_o *)v6->fields.buffMaster;
    if ( this
      || (this = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0LL
      && (MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)this,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___),
          *p_buffMaster = (BattleBuffData_o *)MasterData_WarQuestSelectionMaster,
          sub_B70630(
            (BattleServantConfConponent_o *)&v6->fields.buffMaster,
            MasterData_WarQuestSelectionMaster,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39),
          (this = *p_buffMaster) != 0LL) )
    {
      this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                   buff->fields.buffId,
                                   (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v40 = *p_notUseCountWithNoDamageBuffTypes;
      if ( *p_notUseCountWithNoDamageBuffTypes )
      {
        v41 = this;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v50,
          v40,
          (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v51 = v50;
        while ( 1 )
        {
          v42 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v51,
                  (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
          if ( !v42 )
            break;
          if ( !v41 )
            sub_B7076C(v42, v43);
          current = v51.fields.current;
          v45 = *(&v41->fields.resumptionHpFromLossMaxHp + 1);
          if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          if ( BuffList__CheckType(current, v45, 0LL) )
          {
            v46 = 392;
            goto LABEL_37;
          }
        }
        v46 = 234;
LABEL_37:
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v51,
          (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v46 == 392 )
          return 0;
        goto LABEL_38;
      }
    }
LABEL_49:
    sub_B7076C(this, buff);
  }
LABEL_38:
  if ( buff->fields.isDecide )
  {
    isUse = buff->fields.isUse;
    if ( !buff->fields.isUse )
      return isUse;
    goto LABEL_40;
  }
  buffRate = buff->fields.buffRate;
  buff->fields.isDecide = 1;
  v48 = buffRate == 1000 || !buffRate || buff->fields.buffRate >= BattleRandom__getNext(1000, 0LL);
  isUse = BattleBuffData_BuffData__FixedUse(buff, v6, v48, 0LL);
  buff->fields.isUse = isUse;
  if ( isUse )
  {
LABEL_40:
    if ( isRec )
    {
      isUse = 1;
      buff->fields.isAct = 1;
    }
  }
  return isUse;
}


bool __fastcall BattleBuffData__checkBuffTurnCount(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return buff->fields.turn > 0 || buff->fields.count > 0 || buff->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData__checkBuffTypeIndiviuality(
        BattleBuffData_o *this,
        System_Int32_array *self,
        System_Int32_array *target,
        BuffEntity_o *buffEnt,
        System_Int32_array *targetCount,
        const MethodInfo *method)
{
  int CkIndvCountAbove; // w21
  int CkIndvCountBelow; // w22
  bool result; // w0
  System_Func_T1__T2__TResult__o *v13; // x20
  System_Func_T1__T2__TResult__o *v14; // x21
  System_Func_T1__T2__TResult__o *v15; // x24
  System_Func_T1__T2__TResult__o *v16; // x25
  System_Func_T1__T2__T3__T4__TResult__o *v17; // x0
  __int64 *v18; // x25
  System_Func_T1__T2__TResult__o *v19; // x24
  System_Func_T1__T2__TResult__o *v20; // x25
  System_Func_int____int____int__int__bool__o *v21; // x23
  System_Func_T1__T2__T3__T4__TResult__o *v22; // x24

  if ( (byte_435547B & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_int____int____bool___ctor__);
    sub_B70694(&System_Func_int____int____bool__TypeInfo);
    sub_B70694(&Method_System_Func_int____int____int__int__bool___ctor__);
    sub_B70694(&System_Func_int____int____int__int__bool__TypeInfo);
    sub_B70694(&Method_Individuality_IsMatchArrayCount__);
    sub_B70694(&Method_Individuality_IsMatchArray__);
    sub_B70694(&Method_Individuality_IsPartialMatchArrayCount__);
    this = (BattleBuffData_o *)sub_B70694(&Method_Individuality_IsPartialMatchArray__);
    byte_435547B = 1;
  }
  if ( !buffEnt )
    sub_B7076C(this, self);
  CkIndvCountAbove = BuffEntity__GetCkIndvCountAbove(buffEnt, 0, 0LL);
  CkIndvCountBelow = BuffEntity__GetCkIndvCountBelow(buffEnt, 0, 0LL);
  switch ( BuffEntity__getCheckIndvType(buffEnt, 0LL) )
  {
    case 0:
      if ( targetCount && (CkIndvCountAbove > 0 || CkIndvCountBelow >= 1) )
      {
        if ( target && *(_QWORD *)&target->max_length && Individuality__CheckIndividualities(self, target, 0LL) )
          goto LABEL_26;
        result = Individuality__IsPartialMatchArrayCount(self, targetCount, CkIndvCountAbove, CkIndvCountBelow, 0LL);
      }
      else
      {
        result = Individuality__CheckIndividualities(self, target, 0LL);
      }
      break;
    case 1:
      if ( !Individuality__CheckAllIndividualities(self, target, 0LL) )
        goto LABEL_17;
      result = Individuality__IsMatchArrayCount(self, targetCount, CkIndvCountAbove, CkIndvCountBelow, 0LL);
      break;
    case 2:
      if ( targetCount && (CkIndvCountAbove > 0 || CkIndvCountBelow >= 1) )
      {
        if ( !target
          || !*(_QWORD *)&target->max_length
          || (v19 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo),
              System_Func_object__object__bool____ctor(
                v19,
                0LL,
                Method_Individuality_IsPartialMatchArray__,
                (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__),
              v20 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo),
              System_Func_object__object__bool____ctor(
                v20,
                0LL,
                Method_Individuality_IsPartialMatchArray__,
                (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__),
              !Individuality__CheckSignedIndividualities_27795680(
                 self,
                 target,
                 (System_Func_int____int____bool__o *)v19,
                 (System_Func_int____int____bool__o *)v20,
                 0LL)) )
        {
          v17 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B70764(System_Func_int____int____int__int__bool__TypeInfo);
          v18 = &Method_Individuality_IsPartialMatchArrayCount__;
          goto LABEL_22;
        }
LABEL_26:
        result = 1;
      }
      else
      {
        v13 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo);
        System_Func_object__object__bool____ctor(
          v13,
          0LL,
          Method_Individuality_IsPartialMatchArray__,
          (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__);
        v14 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo);
        System_Func_object__object__bool____ctor(
          v14,
          0LL,
          Method_Individuality_IsPartialMatchArray__,
          (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__);
        result = Individuality__CheckSignedIndividualities_27795680(
                   self,
                   target,
                   (System_Func_int____int____bool__o *)v13,
                   (System_Func_int____int____bool__o *)v14,
                   0LL);
      }
      break;
    case 3:
      v15 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v15,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__);
      v16 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v16,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__);
      if ( !Individuality__CheckSignedIndividualities_27795680(
              self,
              target,
              (System_Func_int____int____bool__o *)v15,
              (System_Func_int____int____bool__o *)v16,
              0LL) )
        goto LABEL_17;
      v17 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B70764(System_Func_int____int____int__int__bool__TypeInfo);
      v18 = &Method_Individuality_IsMatchArrayCount__;
LABEL_22:
      v21 = (System_Func_int____int____int__int__bool__o *)v17;
      System_Func_object__object__int__int__bool____ctor(
        v17,
        0LL,
        *v18,
        (const MethodInfo_29BC1B0 *)Method_System_Func_int____int____int__int__bool___ctor__);
      v22 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B70764(System_Func_int____int____int__int__bool__TypeInfo);
      System_Func_object__object__int__int__bool____ctor(
        v22,
        0LL,
        *v18,
        (const MethodInfo_29BC1B0 *)Method_System_Func_int____int____int__int__bool___ctor__);
      result = Individuality__CheckSignedIndividualitiesCount(
                 self,
                 targetCount,
                 v21,
                 (System_Func_int____int____int__int__bool__o *)v22,
                 CkIndvCountAbove,
                 CkIndvCountBelow,
                 0LL);
      break;
    default:
LABEL_17:
      result = 0;
      break;
  }
  return result;
}


bool __fastcall BattleBuffData__checkConditions(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20

  v4 = this;
  if ( (byte_4355458 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4355458 = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v4, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B7076C(this, buff);
  }
  return BuffEntity__isConditions((BuffEntity_o *)this, 0LL);
}


void __fastcall BattleBuffData__checkFieldAlive(
        BattleBuffData_o *this,
        FieldAliveServantData_o *aliveSvtData,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *checkList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleBuffData___c_c *v9; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_int__int__bool__bool__o *_9__96_0; // x22
  Il2CppObject *v12; // x24
  struct BattleBuffData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  char v20; // w24
  Il2CppObject *current; // x23
  void *monitor; // x27
  System_Collections_Generic_List_BattleServantData__o *TargetSideSvtDataList; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x1
  __int64 v27; // x1
  __int64 size; // x1
  const MethodInfo *v29; // x3
  bool v30; // w0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_435543C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Func_int__int__bool__bool__Invoke__);
    sub_B70694(&Method_System_Func_int__int__bool__bool___ctor__);
    sub_B70694(&System_Func_int__int__bool__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_B70694(&Method_BattleBuffData___c__checkFieldAlive_b__96_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_435543C = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v9 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v9 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__96_0 = static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__96_0 = (System_Func_int__int__bool__bool__o *)sub_B70764(System_Func_int__int__bool__bool__TypeInfo);
    System_Func_int__int__bool__bool____ctor(
      _9__96_0,
      v12,
      Method_BattleBuffData___c__checkFieldAlive_b__96_0__,
      (const MethodInfo_29B9100 *)Method_System_Func_int__int__bool__bool___ctor__);
    v13 = BattleBuffData___c_TypeInfo->static_fields;
    v13->__9__96_0 = _9__96_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v13->__9__96_0,
      (System_Int32_array **)_9__96_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !checkList )
    goto LABEL_34;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)checkList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v34 = v33;
  v20 = 0;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v31 )
      break;
    current = v34.fields.current;
    if ( !v34.fields.current )
      sub_B7076C(v31, v32);
    monitor = v34.fields.current[9].monitor;
    if ( monitor )
    {
      if ( !aliveSvtData )
        sub_B7076C(v31, v32);
      TargetSideSvtDataList = FieldAliveServantData__getTargetSideSvtDataList(
                                aliveSvtData,
                                *((_BYTE *)monitor + 16),
                                0LL);
      if ( !TargetSideSvtDataList )
        sub_B7076C(0LL, v24);
      v26 = (System_Int32_array *)*((_QWORD *)monitor + 3);
      if ( v26 )
      {
        TargetSideSvtDataList = (System_Collections_Generic_List_BattleServantData__o *)BattleBuffData__CheckIndivSvtDataList(
                                                                                          TargetSideSvtDataList,
                                                                                          v26,
                                                                                          *((_BYTE *)monitor + 32),
                                                                                          v25);
        if ( !TargetSideSvtDataList )
          sub_B7076C(0LL, v27);
      }
      size = (unsigned int)TargetSideSvtDataList->fields._size;
      if ( !_9__96_0 )
        sub_B7076C(TargetSideSvtDataList, size);
      if ( System_Func_int__int__bool__bool___Invoke(
             _9__96_0,
             size,
             *((_DWORD *)monitor + 5),
             *((_BYTE *)monitor + 17),
             (const MethodInfo_29B9114 *)Method_System_Func_int__int__bool__bool__Invoke__) )
      {
        v30 = BattleBuffData__OffStateWithAuraConditionCheck(this, (BattleBuffData_BuffData_o *)current, 0x4000, v29);
      }
      else
      {
        v30 = BattleBuffData__OnStateWithAuraConditionCheck(this, (BattleBuffData_BuffData_o *)current, 0x4000, v29);
      }
      v20 |= v30;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v20 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      return;
    }
LABEL_34:
    sub_B7076C(v9, aliveSvtData);
  }
}


void __fastcall BattleBuffData__checkFieldBuff(
        BattleBuffData_o *this,
        System_Int32_array *idList,
        FieldAliveServantData_o *aliveSvtData,
        BattleBuffData_BuffData_array **onList,
        BattleBuffData_BuffData_array **offList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  char v22; // w24
  int monitor_high; // w9
  signed int max_length; // w10
  unsigned int v25; // w11
  bool v26; // w0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  int v30; // w9
  signed int v31; // w10
  unsigned int v32; // w11
  bool v33; // w0
  _BOOL8 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  int v37; // w22
  const MethodInfo *v38; // x4
  const MethodInfo *v39; // x4
  __int64 v40; // x0
  __int64 v41; // x0
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-88h] BYREF
  int v43[2]; // [xsp+20h] [xbp-70h]
  int v44; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_435543B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_435543B = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  *onList = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)onList,
    0LL,
    (System_String_array **)aliveSvtData,
    (System_String_array **)onList,
    (System_Boolean_array **)offList,
    (System_Int32_array **)logic,
    (System_Int32_array *)method,
    v7);
  *offList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)offList, 0LL, v14, v15, v16, v17, v18, v19);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v22 = 0;
  v45 = v42;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v27 )
      break;
    if ( !v45.fields.current )
      sub_B7076C(v27, v28);
    monitor_high = HIDWORD(v45.fields.current[3].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !idList )
        sub_B7076C(v27, v28);
      max_length = idList->max_length;
      if ( max_length < 1 )
      {
LABEL_13:
        v26 = BattleBuffData__OnStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v45.fields.current,
                1,
                v29);
      }
      else
      {
        v25 = 0;
        while ( 1 )
        {
          if ( v25 >= max_length )
          {
            v40 = sub_B70798(v27);
            sub_B70738(v40, 0LL);
          }
          if ( monitor_high == idList->m_Items[v25 + 1] )
            break;
          if ( (int)++v25 >= max_length )
            goto LABEL_13;
        }
        v26 = BattleBuffData__OffStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v45.fields.current,
                1,
                v29);
      }
      v22 |= v26;
    }
  }
  v43[0] = 137;
  v44 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v44 = 0;
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v45 = v42;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v34 )
      break;
    if ( !v45.fields.current )
      sub_B7076C(v34, v35);
    v30 = HIDWORD(v45.fields.current[3].monitor);
    if ( v30 >= 1 )
    {
      if ( !idList )
        sub_B7076C(v34, v35);
      v31 = idList->max_length;
      if ( v31 < 1 )
      {
LABEL_27:
        v33 = BattleBuffData__OnStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v45.fields.current,
                1,
                v36);
      }
      else
      {
        v32 = 0;
        while ( 1 )
        {
          if ( v32 >= v31 )
          {
            v41 = sub_B70798(v34);
            sub_B70738(v41, 0LL);
          }
          if ( v30 == idList->m_Items[v32 + 1] )
            break;
          if ( (int)++v32 >= v31 )
            goto LABEL_27;
        }
        v33 = BattleBuffData__OffStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v45.fields.current,
                1,
                v36);
      }
      v22 |= v33;
    }
  }
  v43[0] = 273;
  v37 = ++v44;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v37 && v43[v37 - 1] == 273 )
    v44 = v37 - 1;
  if ( (v22 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      goto LABEL_37;
    }
LABEL_42:
    sub_B7076C(passiveList, v20);
  }
LABEL_37:
  BattleBuffData__checkFieldAlive(this, aliveSvtData, this->fields.passiveList, logic, v38);
  BattleBuffData__checkFieldAlive(this, aliveSvtData, this->fields.activeList, logic, v39);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkGutsBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t actionType,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        bool isRec,
        const MethodInfo *method)
{
  _BOOL4 v6; // w20
  int32_t IsGutsKeepUsableByFollowingAttackIndividuality; // w0
  _BOOL4 isDecide; // w8
  int32_t buffRate; // w8
  _BOOL4 isUse; // w8
  _BOOL4 v12; // w9

  if ( !buff )
    sub_B7076C(this, 0LL);
  v6 = isRec;
  if ( buff->fields.isDecide && !buff->fields.isUse )
  {
    LOBYTE(IsGutsKeepUsableByFollowingAttackIndividuality) = 0;
  }
  else
  {
    IsGutsKeepUsableByFollowingAttackIndividuality = BattleBuffData__IsGutsKeepUsableByFollowingAttackIndividuality(
                                                       this,
                                                       buff,
                                                       actionType,
                                                       checkIndividualitiesDataArray,
                                                       (const MethodInfo *)isRec);
    isDecide = buff->fields.isDecide;
    buff->fields.isUse = IsGutsKeepUsableByFollowingAttackIndividuality & 1;
    if ( !isDecide )
    {
      buffRate = buff->fields.buffRate;
      buff->fields.isDecide = 1;
      if ( buffRate == 1000 || !buffRate )
      {
        if ( (IsGutsKeepUsableByFollowingAttackIndividuality & v6 & 1) == 0 )
          return IsGutsKeepUsableByFollowingAttackIndividuality & 1;
        goto LABEL_12;
      }
      IsGutsKeepUsableByFollowingAttackIndividuality = BattleRandom__getGutsNext(1000, 0LL);
      isUse = buff->fields.isUse;
      v12 = buff->fields.buffRate >= IsGutsKeepUsableByFollowingAttackIndividuality;
      LOBYTE(IsGutsKeepUsableByFollowingAttackIndividuality) = isUse && v12;
      buff->fields.isUse = isUse && v12;
      if ( isUse && v12 && v6 )
      {
LABEL_12:
        LOBYTE(IsGutsKeepUsableByFollowingAttackIndividuality) = 1;
        buff->fields.isAct = 1;
      }
    }
  }
  return IsGutsKeepUsableByFollowingAttackIndividuality & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkGutsBuffSuccessfulIndividual(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        int32_t actionType,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        BattleBuffData_BuffData_o **buff,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  MethodInfo *v15; // x5
  __int64 v16; // x8
  _BOOL8 v17; // x0
  unsigned __int64 v18; // x24
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleBuffData_BuffData_o *v24; // x1
  __int64 v25; // x0

  *buff = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)buff,
    0LL,
    *(System_String_array ***)&actionType,
    (System_String_array **)checkIndividualitiesDataArray,
    (System_Boolean_array **)buff,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !bufflist )
    sub_B7076C(v13, v14);
  v16 = *(_QWORD *)&bufflist->max_length;
  v17 = 0LL;
  if ( v16 && (int)v16 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
        goto LABEL_12;
      v17 = BattleBuffData__checkGutsBuffSuccessful(
              this,
              bufflist->m_Items[v18],
              actionType,
              checkIndividualitiesDataArray,
              0,
              v15);
      if ( v17 )
        break;
      LODWORD(v16) = bufflist->max_length;
      if ( (__int64)++v18 >= (int)v16 )
      {
        LOBYTE(v17) = 0;
        return v17;
      }
    }
    if ( (unsigned int)v18 >= bufflist->max_length )
    {
LABEL_12:
      v25 = sub_B70798(v17);
      sub_B70738(v25, 0LL);
    }
    v24 = bufflist->m_Items[v18];
    *buff = v24;
    sub_B70630(
      (BattleServantConfConponent_o *)buff,
      (System_Int32_array **)v24,
      v19,
      v20,
      v21,
      (System_Int32_array **)v15,
      v22,
      v23);
    LOBYTE(v17) = 1;
  }
  return v17;
}


bool __fastcall BattleBuffData__checkIndiviuality(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_BuffData_o *buffData,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        int32_t *plusMinus,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+0h] [xbp-10h]

  if ( !checkIndividualities )
    sub_B7076C(this, actInfo);
  return BattleBuffData__checkIndiviuality_31764832(
           this,
           actInfo,
           buffData,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           plusMinus,
           v7);
}


bool __fastcall BattleBuffData__checkIndiviuality_31764832(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_BuffData_o *buffData,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        System_Int32_array *selfIndvAll,
        System_Int32_array *opIndvAll,
        int32_t *plusMinus,
        const MethodInfo *method)
{
  BattleBuffData_o *v16; // x20
  WarEntity_o *Entity; // x0
  const MethodInfo *v19; // x4
  BuffEntity_o *v20; // x23
  System_Int32_array *ckSelfIndv; // x24
  BattleBuffData_o *CkSelfCountIndividuality; // x0
  const MethodInfo *v23; // x5
  struct BuffList_BaseInvokeCond_o *OpponentInvokeCond_k__BackingField; // x22
  struct System_Int32_array *ckOpIndv; // x21

  v16 = this;
  if ( (byte_435547A & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_435547A = 1;
  }
  *plusMinus = 0;
  if ( !buffData )
    goto LABEL_18;
  if ( buffData->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v16, (const MethodInfo *)actInfo);
  if ( !this )
    goto LABEL_18;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             buffData->fields.buffId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v20 = (BuffEntity_o *)Entity;
  if ( !BattleBuffData__checkTypePlusMinus(
          (BattleBuffData_o *)Entity,
          actInfo,
          *(&Entity->fields.id + 1),
          plusMinus,
          v19) )
    return 0;
  if ( BuffEntity__IsIndvAddBuffPassive(v20, 0LL) )
  {
    if ( selfIndvAll )
      selfIndv = selfIndvAll;
    if ( opIndvAll )
      opIndv = opIndvAll;
  }
  ckSelfIndv = v20->fields.ckSelfIndv;
  CkSelfCountIndividuality = (BattleBuffData_o *)BuffEntity__GetCkSelfCountIndividuality(v20, 0LL);
  this = (BattleBuffData_o *)BattleBuffData__checkBuffTypeIndiviuality(
                               CkSelfCountIndividuality,
                               selfIndv,
                               ckSelfIndv,
                               v20,
                               (System_Int32_array *)CkSelfCountIndividuality,
                               v23);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !actInfo
    || (OpponentInvokeCond_k__BackingField = actInfo->fields._OpponentInvokeCond_k__BackingField,
        ckOpIndv = v20->fields.ckOpIndv,
        this = (BattleBuffData_o *)BuffEntity__GetCkOpCountIndividuality(v20, 0LL),
        !OpponentInvokeCond_k__BackingField) )
  {
LABEL_18:
    sub_B7076C(this, actInfo);
  }
  return ((__int64 (__fastcall *)(struct BuffList_BaseInvokeCond_o *, BattleBuffData_o *, BuffEntity_o *, System_Int32_array *, struct System_Int32_array *, BattleBuffData_o *, Il2CppMethodPointer))OpponentInvokeCond_k__BackingField->klass->vtable._5_CheckInvokeCond.method)(
           OpponentInvokeCond_k__BackingField,
           v16,
           v20,
           opIndv,
           ckOpIndv,
           this,
           OpponentInvokeCond_k__BackingField->klass->vtable._6_CheckBuffTypeCond.methodPtr);
}


bool __fastcall BattleBuffData__checkSameElement(
        BattleBuffData_o *this,
        int32_t elem,
        System_Int32_array *elems,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x9

  if ( !elems )
    return 0;
  v4 = *(_QWORD *)&elems->max_length;
  if ( !v4 || (int)v4 < 1 )
    return 0;
  v5 = 0LL;
  while ( elems->m_Items[v5 + 1] != elem )
  {
    if ( (int)++v5 >= (int)v4 )
      return 0;
  }
  return 1;
}


bool __fastcall BattleBuffData__checkShiftClear(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        System_Int32_array *list,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x21
  System_Int32_array *Individualty; // x0

  v6 = this;
  if ( (byte_435547E & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_435547E = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v6, (const MethodInfo *)buff);
  if ( !this )
LABEL_9:
    sub_B7076C(this, buff);
  if ( !DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          buff->fields.buffId,
          (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__) )
    return 0;
  Individualty = BattleBuffData_BuffData__GetIndividualty(buff, 0, 0, 0, 0LL);
  return Individuality__CheckIndividualities(Individualty, list, 0LL);
}


bool __fastcall BattleBuffData__checkTypePlusMinus(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        int32_t inType,
        int32_t *plusMinus,
        const MethodInfo *method)
{
  struct BuffList_TYPE_array *plusTypes; // x23
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  int32_t v11; // w22
  struct BuffList_TYPE_array *minusTypes; // x22
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  int32_t v15; // w21
  bool result; // w0
  __int64 v17; // x0

  if ( (byte_435547C & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&BuffList_TypeInfo);
    byte_435547C = 1;
  }
  *plusMinus = 0;
  if ( !actInfo )
    sub_B7076C(this, actInfo);
  plusTypes = actInfo->fields.plusTypes;
  if ( plusTypes && (v9 = *(_QWORD *)&plusTypes->max_length, (int)v9 >= 1) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
LABEL_25:
        v17 = sub_B70798(this);
        sub_B70738(v17, 0LL);
      }
      v11 = plusTypes->m_Items[v10 + 1];
      if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      this = (BattleBuffData_o *)BuffList__CheckType(v11, inType, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      LODWORD(v9) = plusTypes->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_13;
    }
    result = 1;
    *plusMinus = 1;
  }
  else
  {
LABEL_13:
    minusTypes = actInfo->fields.minusTypes;
    if ( minusTypes && (v13 = *(_QWORD *)&minusTypes->max_length, (int)v13 >= 1) )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v13 )
          goto LABEL_25;
        v15 = minusTypes->m_Items[v14 + 1];
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        this = (BattleBuffData_o *)BuffList__CheckType(v15, inType, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
        LODWORD(v13) = minusTypes->max_length;
        if ( (__int64)++v14 >= (int)v13 )
          return 0;
      }
      *plusMinus = -1;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void __fastcall BattleBuffData__clearActiveBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_4355420 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    byte_4355420 = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)activeList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
}


void __fastcall BattleBuffData__clearAuraBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x0

  if ( (byte_4355421 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    byte_4355421 = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  if ( !auraBuffList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)auraBuffList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
}


bool __fastcall BattleBuffData__confirmationBuff(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        bool isRect,
        int32_t *value,
        System_Int32_array *selfIndvAll,
        System_Int32_array *opIndvAll,
        const MethodInfo *method)
{
  bool v10; // w0
  int32_t param; // w8
  const MethodInfo *v13; // [xsp+0h] [xbp-20h]
  BattleBuffData_BuffData_o *targetBuff; // [xsp+18h] [xbp-8h] BYREF

  targetBuff = 0LL;
  v10 = BattleBuffData__ConfirmationBuff(
          this,
          actInfo,
          selfIndv,
          opIndv,
          isRect,
          &targetBuff,
          selfIndvAll,
          opIndvAll,
          v13);
  param = (int)targetBuff;
  if ( targetBuff )
    param = targetBuff->fields.param;
  *value = param;
  return v10;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__geCheckBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  unsigned __int64 v10; // x23
  BattleBuffData_BuffData_o *v11; // x22
  __int64 v13; // x0

  if ( (byte_435542E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_435542E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !bufflist )
    goto LABEL_14;
  v9 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v9 )
      {
        v13 = sub_B70798(v6);
        sub_B70738(v13, 0LL);
      }
      v11 = bufflist->m_Items[v10];
      v6 = BattleBuffData__checkBuffSuccessful(this, v11, 1, v8);
      if ( v6 )
      {
        if ( !v5 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v9) = bufflist->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v9 );
  }
  if ( !v5 )
LABEL_14:
    sub_B7076C(v6, v7);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


bool __fastcall BattleBuffData__getActBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        int32_t *value,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v10; // x1
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x2
  System_Int32_array *opponentConcatSvtIndividualities_k__BackingField; // x3
  System_Int32_array *selfIndividuality_k__BackingField; // x6
  System_Int32_array *opponentIndividuality_k__BackingField; // x7
  bool v15; // w0
  int32_t param; // w8
  const MethodInfo *v18; // [xsp+0h] [xbp-40h]
  BattleBuffData_BuffData_o *targetBuff; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_435546A & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_435546A = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B7076C(ActInfo, v10);
  selfConcatSvtIndividualities_k__BackingField = checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField;
  opponentConcatSvtIndividualities_k__BackingField = checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField;
  selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividuality_k__BackingField;
  opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividuality_k__BackingField;
  targetBuff = 0LL;
  v15 = BattleBuffData__ConfirmationBuff(
          this,
          ActInfo,
          selfConcatSvtIndividualities_k__BackingField,
          opponentConcatSvtIndividualities_k__BackingField,
          1,
          &targetBuff,
          selfIndividuality_k__BackingField,
          opponentIndividuality_k__BackingField,
          v18);
  param = (int)targetBuff;
  if ( targetBuff )
    param = targetBuff->fields.param;
  *value = param;
  return v15;
}


float __fastcall BattleBuffData__getActMag(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x7

  return BattleBuffData__getActMag_31764532(
           this,
           act,
           selfIndiv,
           this->fields.wkzero,
           &this->fields.wkStr,
           checkIndividualities,
           0LL,
           v5);
}


float __fastcall BattleBuffData__getActMag_31764516(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  return BattleBuffData__getActMag_31764532(
           this,
           act,
           selfIndiv,
           opIndiv,
           &this->fields.wkStr,
           checkIndividualities,
           buffIf,
           v7);
}


float __fastcall BattleBuffData__getActMag_31764532(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        System_String_o **missText,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v16; // x7

  if ( (byte_4355465 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_4355465 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return (float)BattleBuffData__getActValue_31763380(
                  this,
                  ActInfo,
                  selfIndiv,
                  opIndiv,
                  missText,
                  checkIndividualities,
                  buffIf,
                  v16)
       / 1000.0;
}


float __fastcall BattleBuffData__getActMag_31764736(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7

  if ( !checkIndividualities )
    sub_B7076C(this, actInfo);
  return (float)BattleBuffData__getActValue_31763380(
                  this,
                  actInfo,
                  checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
                  checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
                  &this->fields.wkStr,
                  checkIndividualities,
                  checkIndividualities->fields._buffIf_k__BackingField,
                  v4)
       / 1000.0;
}


float __fastcall BattleBuffData__getActMag_31764796(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7

  if ( !checkIndividualities )
    sub_B7076C(this, act);
  return BattleBuffData__getActMag_31764532(
           this,
           act,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           &this->fields.wkStr,
           checkIndividualities,
           checkIndividualities->fields._buffIf_k__BackingField,
           v4);
}


int32_t __fastcall BattleBuffData__getActValue(
        BattleBuffData_o *this,
        int32_t act,
        bool *actflg,
        System_String_o **missText,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleLogicBuff_BaseProcess_o *buffProc,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v14; // x1
  BuffList_ActInfo_o *v15; // x19
  int32_t v16; // w20
  int32_t v17; // w21
  int32_t v18; // w20
  const MethodInfo *v20; // [xsp+18h] [xbp-48h]
  int32_t upperParam[2]; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_435545F & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    byte_435545F = 1;
  }
  *(_QWORD *)upperParam = 0LL;
  *actflg = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities
    || (v15 = ActInfo,
        ActInfo = (BuffList_ActInfo_o *)BattleBuffData__getCalculationParam(
                                          this,
                                          ActInfo,
                                          checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
                                          0LL,
                                          this->fields.wkzero,
                                          &upperParam[1],
                                          actflg,
                                          missText,
                                          upperParam,
                                          checkIndividualities,
                                          buffProc,
                                          v20),
        !v15) )
  {
    sub_B7076C(ActInfo, v14);
  }
  v16 = (int)ActInfo;
  if ( BuffList_ActInfo__isLowerLimit(v15, 0LL) )
  {
    v17 = upperParam[0];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = System_Math__Max_45601072(v17, v16, 0LL);
  }
  v18 = v16 - v15->fields.baseValue;
  if ( BuffList_ActInfo__isUpperLimit(v15, 0LL) && upperParam[1] < v18 )
    return upperParam[1];
  return v18;
}


int32_t __fastcall BattleBuffData__getActValue_31763184(
        BattleBuffData_o *this,
        int32_t act,
        bool *actflg,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return BattleBuffData__getActValue(this, act, actflg, &this->fields.wkStr, checkIndividualities, 0LL, v5);
}


int32_t __fastcall BattleBuffData__getActValue_31763200(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *selfIf,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v14; // x7

  if ( (byte_4355460 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_4355460 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return BattleBuffData__getActValue_31763380(
           this,
           ActInfo,
           selfIndiv,
           opIndiv,
           &this->fields.wkStr,
           checkIndividualities,
           selfIf,
           v14);
}


int32_t __fastcall BattleBuffData__getActValue_31763380(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        System_String_o **text,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *selfIf,
        const MethodInfo *method)
{
  __int64 CalculationParam; // x0
  __int64 v16; // x1
  int32_t v17; // w20
  int32_t v18; // w21
  int32_t v19; // w20
  const MethodInfo *v21; // [xsp+18h] [xbp-58h]
  int32_t upperParam[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4355462 & 1) == 0 )
  {
    sub_B70694(&System_Math_TypeInfo);
    byte_4355462 = 1;
  }
  *(_QWORD *)upperParam = 0LL;
  CalculationParam = BattleBuffData__getCalculationParam(
                       this,
                       actInfo,
                       selfIndiv,
                       selfIf,
                       opIndiv,
                       &upperParam[1],
                       &this->fields.wkflg,
                       text,
                       upperParam,
                       checkIndividualities,
                       0LL,
                       v21);
  if ( !actInfo )
    sub_B7076C(CalculationParam, v16);
  v17 = CalculationParam;
  if ( BuffList_ActInfo__isLowerLimit(actInfo, 0LL) )
  {
    v18 = upperParam[0];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = System_Math__Max_45601072(v18, v17, 0LL);
  }
  v19 = v17 - actInfo->fields.baseValue;
  if ( BuffList_ActInfo__isUpperLimit(actInfo, 0LL) && upperParam[1] < v19 )
    return upperParam[1];
  return v19;
}


int32_t __fastcall BattleBuffData__getActValue_31763672(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return BattleBuffData__getActValue_31763200(this, act, selfIndiv, this->fields.wkzero, checkIndividualities, 0LL, v5);
}


int32_t __fastcall BattleBuffData__getActValue_31763688(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  if ( !checkIndividualities )
    sub_B7076C(this, act);
  return BattleBuffData__getActValue_31763200(
           this,
           act,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           checkIndividualities,
           0LL,
           v4);
}


int32_t __fastcall BattleBuffData__getActValue_31763724(
        BattleBuffData_o *this,
        int32_t act,
        System_String_o **text,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x7

  if ( (byte_4355461 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_4355461 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B7076C(ActInfo, v10);
  return BattleBuffData__getActValue_31763380(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           text,
           checkIndividualities,
           checkIndividualities->fields._buffIf_k__BackingField,
           v11);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveArrayNoActAfterUsed(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4355411 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355411 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)activeList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v6 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B7076C(v6, v7);
    v9 = BattleBuffData_BuffData__checkAct((BattleBuffData_BuffData_o *)v12.fields.current, 1, 0LL);
    if ( !v9 && LOBYTE(current[2].klass) )
    {
      if ( !v3 )
        sub_B7076C(v9, v10);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v3 )
LABEL_15:
    sub_B7076C(activeList, v4);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


int32_t __fastcall BattleBuffData__getActiveBuffNum(
        BattleBuffData_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 v5; // x1
  unsigned __int64 max_length; // x9
  int32_t v7; // w8
  unsigned __int64 v8; // x10
  unsigned __int64 v9; // x13
  BattleBuffData_BuffData_o *v10; // x15
  unsigned __int64 v11; // x14
  int32_t v12; // w17
  __int64 v14; // x0

  ActiveList = BattleBuffData__getActiveList(this, 1, method);
  if ( !ActiveList )
LABEL_18:
    sub_B7076C(ActiveList, v5);
  max_length = ActiveList->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= max_length )
        goto LABEL_17;
      if ( !ids )
        goto LABEL_18;
      v9 = ids->max_length;
      if ( (__int64)(v9 << 32) >= 1 )
        break;
LABEL_13:
      if ( (__int64)++v8 >= (int)max_length )
        return v7;
    }
    v10 = ActiveList->m_Items[v8];
    v11 = 0LL;
    while ( v11 < v9 )
    {
      if ( !v10 )
        goto LABEL_18;
      v12 = ids->m_Items[++v11];
      if ( v12 == v10->fields.buffId )
        ++v7;
      if ( (__int64)v11 >= (int)v9 )
        goto LABEL_13;
    }
LABEL_17:
    v14 = sub_B70798(ActiveList);
    sub_B70738(v14, 0LL);
  }
  return 0;
}


int32_t __fastcall BattleBuffData__getActiveIndividualitiesNum(
        BattleBuffData_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 v5; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v7; // x20
  int v8; // w22
  int32_t v9; // w21
  System_Int32_array *Individualty; // x0
  __int64 v12; // x0

  ActiveList = BattleBuffData__getActiveList(this, 1, method);
  if ( !ActiveList )
    goto LABEL_11;
  max_length = ActiveList->max_length;
  v7 = ActiveList;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
      {
        v12 = sub_B70798(ActiveList);
        sub_B70738(v12, 0LL);
      }
      ActiveList = (BattleBuffData_BuffData_array *)v7->m_Items[v8];
      if ( !ActiveList )
        break;
      Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)ActiveList, 0, 0, 0, 0LL);
      ActiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities(
                                                      Individualty,
                                                      individualities,
                                                      0LL);
      max_length = v7->max_length;
      ++v8;
      v9 += (unsigned __int8)ActiveList & 1;
      if ( v8 >= max_length )
        return v9;
    }
LABEL_11:
    sub_B7076C(ActiveList, v5);
  }
  return 0;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass32_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_435540F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass32_0__getActiveList_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass32_0_TypeInfo);
    byte_435540F = 1;
  }
  v5 = (BattleBuffData___c__DisplayClass32_0_o *)sub_B70764(BattleBuffData___c__DisplayClass32_0_TypeInfo);
  BattleBuffData___c__DisplayClass32_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.isCheckInterval = isCheckInterval,
        activeList = this->fields.activeList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleBuffData___c__DisplayClass32_0__getActiveList_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !activeList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                (System_Predicate_T__o *)v9,
                (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
    sub_B7076C(All, v7);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveListDebug(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_4355413 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    byte_4355413 = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    sub_B7076C(0LL, method);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


int32_t __fastcall BattleBuffData__getAdjustValue(
        BattleBuffData_o *this,
        int32_t value,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x23
  __int64 CalculationParam; // x0
  __int64 v15; // x1
  int32_t v16; // w20
  const MethodInfo *v18; // [xsp+18h] [xbp-58h]
  System_String_o *missText; // [xsp+28h] [xbp-48h] BYREF
  int32_t val1; // [xsp+38h] [xbp-38h] BYREF
  int32_t upperParam; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4355463 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    byte_4355463 = 1;
  }
  upperParam = 0;
  val1 = 0;
  missText = 0LL;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  CalculationParam = BattleBuffData__getCalculationParam(
                       this,
                       ActInfo,
                       selfIndiv,
                       0LL,
                       opIndiv,
                       &upperParam,
                       &this->fields.wkflg,
                       &missText,
                       &val1,
                       checkIndividualities,
                       0LL,
                       v18);
  if ( !ActInfo )
    sub_B7076C(CalculationParam, v15);
  if ( BuffList_ActInfo__isLowerLimit(ActInfo, 0LL) )
  {
    v16 = val1;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    value = System_Math__Max_45601072(v16, value, 0LL);
  }
  if ( BuffList_ActInfo__isUpperLimit(ActInfo, 0LL) && upperParam < value )
    return upperParam;
  return value;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__getAuraBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x19
  BattleBuffData___c_c *v4; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__37_0; // x20
  Il2CppObject *v7; // x21
  struct BattleBuffData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4355414 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__getAuraBuffList_b__37_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355414 = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  v4 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v4 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__37_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__37_0,
      v7,
      Method_BattleBuffData___c__getAuraBuffList_b__37_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v8 = BattleBuffData___c_TypeInfo->static_fields;
    v8->__9__37_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__37_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !auraBuffList )
    sub_B7076C(v4, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)auraBuffList,
                                                                         (System_Predicate_T__o *)_9__37_0,
                                                                         (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


System_Int32_array *__fastcall BattleBuffData__getBuffActiveIDList(
        BattleBuffData_o *this,
        bool IsIncludeUnsubState,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  void *ActiveList; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__106_0; // x21
  Il2CppObject *v11; // x22
  struct BattleBuffData___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  void *v19; // x20
  int v20; // w8
  unsigned int v21; // w21
  __int64 v22; // x8
  __int64 v24; // x0

  if ( (byte_4355441 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__getBuffActiveIDList_b__106_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355441 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( IsIncludeUnsubState )
  {
    ActiveList = BattleBuffData__getActiveList(this, 1, v7);
  }
  else
  {
    ActiveList = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      ActiveList = BattleBuffData___c_TypeInfo;
    }
    static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)ActiveList + 23);
    _9__106_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__106_0;
    if ( !_9__106_0 )
    {
      if ( (*((_BYTE *)ActiveList + 307) & 4) != 0 && !*((_DWORD *)ActiveList + 56) )
      {
        j_il2cpp_runtime_class_init_0(ActiveList);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__106_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__106_0,
        v11,
        Method_BattleBuffData___c__getBuffActiveIDList_b__106_0__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v12 = BattleBuffData___c_TypeInfo->static_fields;
      v12->__9__106_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__106_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v12->__9__106_0,
        (System_Int32_array **)_9__106_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    if ( !this )
      goto LABEL_24;
    ActiveList = BattleBuffData__GetAvaliableActiveBuffArray(
                   this,
                   (System_Predicate_BattleBuffData_BuffData__o *)_9__106_0,
                   v7);
  }
  v19 = ActiveList;
  if ( !ActiveList )
    goto LABEL_24;
  v20 = *((_DWORD *)ActiveList + 6);
  if ( v20 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= v20 )
      {
        v24 = sub_B70798(ActiveList);
        sub_B70738(v24, 0LL);
      }
      v22 = *((_QWORD *)v19 + (int)v21 + 4);
      if ( !v22 || !v5 )
        break;
      System_Collections_Generic_List_int___Add(
        v5,
        *(_DWORD *)(v22 + 16),
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      v20 = *((_DWORD *)v19 + 6);
      if ( (int)++v21 >= v20 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B7076C(ActiveList, v6);
  }
LABEL_22:
  if ( !v5 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleBuffData__getBuffIDList(
        BattleBuffData_o *this,
        bool IsIncludeUnsubState,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  const MethodInfo *v6; // x2
  void *PassiveList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  void *v10; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v11; // x22
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__105_0; // x23
  Il2CppObject *v14; // x24
  struct BattleBuffData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int v22; // w8
  unsigned int v23; // w22
  __int64 v24; // x8
  __int64 v26; // x0

  if ( (byte_4355440 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___69181968);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__getBuffIDList_b__105_0__);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355440 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v6);
  v10 = PassiveList;
  if ( !IsIncludeUnsubState )
  {
    v11 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v10,
      (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___69181968);
    PassiveList = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      PassiveList = BattleBuffData___c_TypeInfo;
    }
    static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)PassiveList + 23);
    _9__105_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__105_0;
    if ( !_9__105_0 )
    {
      if ( (*((_BYTE *)PassiveList + 307) & 4) != 0 && !*((_DWORD *)PassiveList + 56) )
      {
        j_il2cpp_runtime_class_init_0(PassiveList);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__105_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__105_0,
        v14,
        Method_BattleBuffData___c__getBuffIDList_b__105_0__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v15 = BattleBuffData___c_TypeInfo->static_fields;
      v15->__9__105_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__105_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v15->__9__105_0,
        (System_Int32_array **)_9__105_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( !v11 )
      goto LABEL_24;
    PassiveList = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                    (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v11,
                    (System_Predicate_T__o *)_9__105_0,
                    (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    if ( !PassiveList )
      goto LABEL_24;
    PassiveList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)PassiveList,
                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    v10 = PassiveList;
  }
  if ( !v10 )
    goto LABEL_24;
  v22 = *((_DWORD *)v10 + 6);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= v22 )
      {
        v26 = sub_B70798(PassiveList);
        sub_B70738(v26, 0LL);
      }
      v24 = *((_QWORD *)v10 + (int)v23 + 4);
      if ( !v24 || !v5 )
        break;
      System_Collections_Generic_List_int___Add(
        v5,
        *(_DWORD *)(v24 + 16),
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      v22 = *((_DWORD *)v10 + 6);
      if ( (int)++v23 >= v22 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B7076C(PassiveList, v8);
  }
LABEL_22:
  PassiveList = BattleBuffData__getBuffActiveIDList(this, IsIncludeUnsubState, v9);
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_int___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleBuffData__getBuffIndividualities(
        BattleBuffData_o *this,
        bool isActiveOnly,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        bool isAiCheck,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v11; // x22
  const MethodInfo *v12; // x2
  BattleBuffData_BuffData_o *PassiveList; // x0
  __int64 v14; // x1
  int count; // w8
  BattleBuffData_BuffData_o *v16; // x24
  unsigned int v17; // w25
  int v18; // w8
  BattleBuffData_BuffData_o *v19; // x23
  unsigned int v20; // w24
  __int64 v22; // x0

  if ( (byte_435543E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_435543E = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (isAiCheck || !isIgnoreIndivUnreleaseable) && !isActiveOnly )
  {
    PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getPassiveList(this, 1, v12);
    if ( !PassiveList )
      goto LABEL_21;
    count = PassiveList->fields.count;
    v16 = PassiveList;
    if ( count >= 1 )
    {
      v17 = 0;
      while ( v17 < count )
      {
        PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v16->fields.isUse + (int)v17);
        if ( !PassiveList )
          goto LABEL_21;
        PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                     PassiveList,
                                                     isIncludeIgnoreIndiv,
                                                     isIgnoreIndivUnreleaseable,
                                                     isAiCheck,
                                                     0LL);
        if ( !v11 )
          goto LABEL_21;
        System_Collections_Generic_List_int___AddRange(
          v11,
          (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
          (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
        count = v16->fields.count;
        if ( (int)++v17 >= count )
          goto LABEL_12;
      }
LABEL_22:
      v22 = sub_B70798(PassiveList);
      sub_B70738(v22, 0LL);
    }
  }
LABEL_12:
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, v12);
  if ( !PassiveList )
    goto LABEL_21;
  v18 = PassiveList->fields.count;
  v19 = PassiveList;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v18 )
    {
      PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v19->fields.isUse + (int)v20);
      if ( !PassiveList )
        goto LABEL_21;
      PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                   PassiveList,
                                                   isIncludeIgnoreIndiv,
                                                   isIgnoreIndivUnreleaseable,
                                                   isAiCheck,
                                                   0LL);
      if ( !v11 )
        goto LABEL_21;
      System_Collections_Generic_List_int___AddRange(
        v11,
        (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
        (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
      v18 = v19->fields.count;
      if ( (int)++v20 >= v18 )
        goto LABEL_19;
    }
    goto LABEL_22;
  }
LABEL_19:
  if ( !v11 )
LABEL_21:
    sub_B7076C(PassiveList, v14);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  if ( !checkIndividualities )
    sub_B7076C(this, types);
  return BattleBuffData__getBuffList_31731308(
           this,
           types,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checklist,
           method);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList_31731308(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *targetIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  MethodInfo *monitor; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  signed int max_length; // w8
  signed int v15; // w28
  __int64 v16; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x25
  unsigned __int64 v18; // x22
  int32_t v19; // w26
  int32_t klass_high; // w27
  BattleBuffData_BuffData_o *v21; // x24
  BattleBuffData_BuffData_array *v22; // x19
  __int64 v24; // x0

  if ( (byte_435544A & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_435544A = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checklist )
  {
    ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v11);
    if ( !v8 )
      goto LABEL_32;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
      ActiveList,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v12);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
      PassiveList,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    checklist = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                                   (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    if ( !checklist )
      goto LABEL_32;
  }
  max_length = checklist->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        goto LABEL_31;
      v21 = checklist->m_Items[v15];
      if ( !v21 )
        goto LABEL_32;
      v22 = checklist;
      if ( !v21->fields._isRemove )
      {
        ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__get_buffMst(this, monitor);
        if ( !ActiveList )
          goto LABEL_32;
        ActiveList = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)ActiveList,
                                                                      v21->fields.buffId,
                                                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( ActiveList )
        {
          if ( !types )
            goto LABEL_32;
          v16 = *(_QWORD *)&types->max_length;
          if ( (int)v16 >= 1 )
            break;
        }
      }
LABEL_28:
      max_length = v22->max_length;
      ++v15;
      checklist = v22;
      if ( v15 >= max_length )
        goto LABEL_29;
    }
    v17 = ActiveList;
    v18 = 0LL;
    while ( v18 < (unsigned int)v16 )
    {
      v19 = types->m_Items[v18 + 1];
      klass_high = HIDWORD(v17[1].klass);
      if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BuffList__CheckType(v19, klass_high, 0LL);
      if ( ((unsigned __int8)ActiveList & 1) != 0 )
      {
        monitor = (MethodInfo *)v17[3].monitor;
        if ( !monitor
          || !monitor->klass
          || (ActiveList = (System_Collections_Generic_IEnumerable_T__o *)Individuality__CheckIndividualities(
                                                                            targetIndividualities,
                                                                            (System_Int32_array *)monitor,
                                                                            0LL),
              ((unsigned __int8)ActiveList & 1) != 0) )
        {
          if ( !v8 )
            goto LABEL_32;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
      }
      LODWORD(v16) = types->max_length;
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_28;
    }
LABEL_31:
    v24 = sub_B70798(ActiveList);
    sub_B70738(v24, 0LL);
  }
LABEL_29:
  if ( !v8 )
LABEL_32:
    sub_B7076C(ActiveList, monitor);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList_31751548(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        bool checkOnly,
        System_Func_BattleBuffData_BuffData__bool__o *funcCond,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v18; // x20
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  const MethodInfo *v32; // x5
  BattleBuffData_BuffData_o *v33; // x27
  _BOOL8 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  bool isReca; // [xsp+8h] [xbp-68h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4355475 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355475 = 1;
  }
  plusMinus = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  plusMinus = 0;
  v15 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v14);
  if ( !v15 )
    goto LABEL_44;
  klass = v15->klass;
  v18 = v15;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_B08590(v15, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v18,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_B7076C(0LL, v22);
  isReca = isRec;
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_19;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_19:
      v27 = sub_B08590(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_26;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_26:
      v31 = sub_B08590(v23, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v33 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    if ( !funcCond
      || System_Func_BattleBuffData_BuffData__bool___Invoke(
           funcCond,
           v33,
           (const MethodInfo_29AC58C *)Method_System_Func_BattleBuffData_BuffData__bool__Invoke__) )
    {
      v34 = BattleBuffData__checkIndiviuality(this, ActInfo, v33, checkIndividualities, &plusMinus, v32);
      if ( v34 && (checkOnly || (v34 = BattleBuffData__checkBuffSuccessful(this, v33, isReca, v36))) )
      {
        if ( !v13 )
          sub_B7076C(v34, v35);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
    }
  }
  v37 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v38 = 0LL;
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_39;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_39:
    v40 = sub_B08590(v23, System_IDisposable_TypeInfo, 0LL);
  }
  v15 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(
                                                                               v23,
                                                                               *(_QWORD *)(v40 + 8));
  if ( !v13 )
LABEL_44:
    sub_B7076C(v15, v16);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


System_Int32_array *__fastcall BattleBuffData__getBuffParamList(
        BattleBuffData_o *this,
        int32_t act,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x22
  System_Collections_Generic_List_int__o *v8; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v15; // x24
  System_Int32_array *v16; // x24
  Il2CppObject *current; // x23
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v21; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+10h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4355474 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355474 = 1;
  }
  plusMinus = 0;
  memset(&v22, 0, sizeof(v22));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v8 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  plusMinus = 0;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v10);
  if ( !v9 )
    goto LABEL_21;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v13);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( servantData )
  {
    v15 = sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(
      (BattleBuffData_CheckIndividualitiesData_o *)v15,
      servantData,
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( !v15 )
      goto LABEL_21;
    servantData = *(BattleServantData_o **)(v15 + 48);
    v16 = *(System_Int32_array **)(v15 + 16);
  }
  else
  {
    v16 = 0LL;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v22.fields.current;
    v18 = BattleBuffData__checkIndiviuality_31764832(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v22.fields.current,
            (System_Int32_array *)servantData,
            0LL,
            v16,
            0LL,
            &plusMinus,
            v21);
    if ( v18 )
    {
      if ( !current )
        sub_B7076C(v18, v19);
      if ( !v8 )
        sub_B7076C(v18, v19);
      System_Collections_Generic_List_int___Add(
        v8,
        HIDWORD(current[1].monitor),
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v8 )
LABEL_21:
    sub_B7076C(ActiveList, v12);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__getBuffSuccessfulIndividual(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v4; // x9

  if ( !bufflist )
    goto LABEL_10;
  v3 = *(_QWORD *)&bufflist->max_length;
  if ( v3 && (int)v3 >= 1 )
  {
    v4 = 0LL;
    while ( 1 )
    {
      this = (BattleBuffData_o *)bufflist->m_Items[v4];
      if ( !this )
        break;
      if ( LOBYTE(this->fields.activeList) )
        return (BattleBuffData_BuffData_o *)this;
      if ( (int)++v4 >= (int)v3 )
        return 0LL;
    }
LABEL_10:
    sub_B7076C(this, bufflist);
  }
  return 0LL;
}


int32_t __fastcall BattleBuffData__getCalculationParam(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndv,
        BuffInterface_o *selfIf,
        System_Int32_array *opIndv,
        int32_t *upperParam,
        bool *actflg,
        System_String_o **missText,
        int32_t *lowerParam,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleLogicBuff_BaseProcess_o *buffProc,
        const MethodInfo *method)
{
  int32_t *v13; // x25
  BuffInterface_o *buffIf_k__BackingField; // x21
  BuffList_ActInfo_o *v15; // x23
  int32_t baseParam; // w8
  const MethodInfo *v17; // x2
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v20; // x19
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x20
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **v26; // x28
  __int64 v27; // x8
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c *v28; // x1
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  BattleBuffData_BuffData_o *v32; // x0
  __int64 v33; // x1
  BattleBuffData_BuffData_o *v34; // x24
  _BOOL8 IsCommandAssistBuff; // x0
  __int64 v36; // x1
  System_Int32_array *selfIndividuality_k__BackingField; // x19
  System_Int32_array *opponentIndividuality_k__BackingField; // x21
  System_Int32_array *v39; // x4
  System_Int32_array *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x1
  BuffMaster_o *buffMst; // x0
  __int64 v44; // x1
  WarEntity_o *Entity; // x0
  __int64 v46; // x1
  BuffEntity_o *v47; // x21
  int32_t v48; // w23
  int emptyMessage_high; // w25
  int32_t v50; // w19
  int32_t v51; // w0
  int32_t v52; // w19
  int32_t v53; // w8
  int32_t ExtendLowerLimit; // w23
  _BOOL4 isValidHpRange; // w0
  BuffInterface_o *v56; // x13
  BuffInterface_c *v57; // x8
  unsigned int v58; // w15
  unsigned int v59; // w27
  unsigned int ratioRangeHigh; // w23
  unsigned int ratioRangeLow; // w25
  unsigned __int64 v62; // x10
  BuffInterface_c **v63; // x11
  int32_t v64; // w21
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **v65; // x19
  int32_t v66; // w28
  __int64 v67; // x0
  int ratioHpLow; // w19
  BuffInterface_c *v69; // x8
  int32_t param; // w23
  unsigned __int64 v71; // x10
  BuffInterface_c **v72; // x11
  __int64 p_method; // x0
  int ratioHpHigh; // w19
  BuffInterface_o *v75; // x13
  BuffInterface_c *v76; // x8
  unsigned __int64 v77; // x10
  BuffInterface_c **v78; // x11
  __int64 v79; // x0
  int v80; // w0
  int v81; // w0
  int v82; // w19
  int v83; // w25
  BattleData_o *battleData; // x19
  BattleBuffData_ParamAdd_o *v85; // x23
  const MethodInfo *v86; // x4
  int v87; // w8
  const MethodInfo *v88; // x5
  const MethodInfo *v89; // x6
  System_Int32_array **v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  int32_t plusAction; // w1
  int v98; // w19
  int v99; // w8
  int v100; // w8
  int v101; // w19
  int32_t v102; // w21
  float v103; // s0
  double v104; // d1
  bool v105; // zf
  double v106; // d0
  int32_t v107; // w8
  __int64 v108; // x8
  unsigned __int64 v109; // x10
  int *v110; // x11
  __int64 v111; // x0
  __int64 v112; // x8
  unsigned __int64 v113; // x10
  int *v114; // x11
  __int64 v115; // x0
  const MethodInfo *v117; // [xsp+0h] [xbp-100h]
  BuffEntity_o *v118; // [xsp+8h] [xbp-F8h]
  BattleLogicBuff_BaseProcess_o *v119; // [xsp+10h] [xbp-F0h]
  BattleServantConfConponent_o *v120; // [xsp+18h] [xbp-E8h]
  int v121; // [xsp+24h] [xbp-DCh]
  BuffList_ActInfo_o *v122; // [xsp+28h] [xbp-D8h]
  int32_t *v123; // [xsp+30h] [xbp-D0h]
  BuffInterface_o *v125; // [xsp+40h] [xbp-C0h]
  int32_t v128; // [xsp+64h] [xbp-9Ch]
  BattleBuffData_o *v129; // [xsp+68h] [xbp-98h]
  int32_t maxBuffRate; // [xsp+7Ch] [xbp-84h] BYREF
  int32_t value; // [xsp+80h] [xbp-80h] BYREF
  int v132[3]; // [xsp+84h] [xbp-7Ch] BYREF
  int32_t plusMinus[2]; // [xsp+98h] [xbp-68h] BYREF

  v13 = upperParam;
  buffIf_k__BackingField = selfIf;
  v15 = actInfo;
  v129 = this;
  if ( (byte_4355466 & 1) == 0 )
  {
    sub_B70694(&BuffInterface_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&BattleBuffData_ParamAdd_TypeInfo);
    this = (BattleBuffData_o *)sub_B70694(&StringLiteral_11290/*"REVERT_BUFF_LOWER_LIMIT"*/);
    byte_4355466 = 1;
  }
  *(_QWORD *)plusMinus = 0LL;
  v132[0] = 0;
  maxBuffRate = 0;
  value = 0;
  if ( !v15 )
    goto LABEL_119;
  baseParam = v15->fields.baseParam;
  plusMinus[0] = 0;
  plusMinus[1] = baseParam;
  *actflg = 0;
  *v13 = baseParam;
  *lowerParam = 0;
  *missText = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)missText,
    0LL,
    (System_String_array **)selfIndv,
    (System_String_array **)selfIf,
    (System_Boolean_array **)opIndv,
    (System_Int32_array **)upperParam,
    (System_Int32_array *)actflg,
    (System_Int32_array *)missText);
  this = (BattleBuffData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11290/*"REVERT_BUFF_LOWER_LIMIT"*/, 0LL);
  v121 = (int)this;
  if ( !buffIf_k__BackingField )
  {
    if ( !checkIndividualities )
      goto LABEL_119;
    buffIf_k__BackingField = checkIndividualities->fields._buffIf_k__BackingField;
  }
  v125 = buffIf_k__BackingField;
  this = (BattleBuffData_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(v129, 0, v17);
  if ( !this )
LABEL_119:
    sub_B7076C(this, actInfo);
  klass = this->klass;
  v20 = this;
  v120 = (BattleServantConfConponent_o *)missText;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v23 = sub_B08590(this, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_B7076C(0LL, v24);
  v26 = &System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo;
  v122 = v15;
  v123 = v13;
  while ( 1 )
  {
    v108 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v109 = 0LL;
      v110 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v110 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v109;
        v110 += 4;
        if ( v109 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_105;
      }
      v111 = v108 + 16LL * *v110 + 312;
    }
    else
    {
LABEL_105:
      v111 = sub_B08590(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v111)(v25, *(_QWORD *)(v111 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v25;
    v28 = *v26;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v30 - 1) != v28 )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_20;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_20:
      v31 = sub_B08590(v25, v28, 0LL);
    }
    v32 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v25, *(_QWORD *)(v31 + 8));
    v34 = v32;
    if ( !v32 )
      sub_B7076C(0LL, v33);
    if ( !v32->fields._isRemove
      && (!BattleBuffData_BuffData__isCommandCodeBuff(v32, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v34,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v34, 0LL) || v34->fields.isActiveCC) )
    {
      IsCommandAssistBuff = BattleBuffData_BuffData__IsCommandAssistBuff(v34, 0LL);
      if ( !IsCommandAssistBuff || (IsCommandAssistBuff = BattleBuffData_BuffData__IsActiveCommandAssist(v34, 0LL)) )
      {
        if ( !checkIndividualities )
          sub_B7076C(IsCommandAssistBuff, v36);
        selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividuality_k__BackingField;
        opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividuality_k__BackingField;
        if ( BattleBuffData_BuffData__checkState(v34, 0x100000, 0LL) )
        {
          selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividualityCanRelease_k__BackingField;
          opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividualityCanRemove_k__BackingField;
          v39 = opponentIndividuality_k__BackingField;
          v40 = selfIndividuality_k__BackingField;
        }
        else
        {
          v40 = selfIndv;
          v39 = opIndv;
        }
        if ( BattleBuffData__checkIndiviuality_31764832(
               v129,
               v15,
               v34,
               v40,
               v39,
               selfIndividuality_k__BackingField,
               opponentIndividuality_k__BackingField,
               plusMinus,
               v117)
          && BattleBuffData__checkBuffSuccessful(v129, v34, v15->fields.isRec, v41) )
        {
          *actflg = 1;
          buffMst = BattleBuffData__get_buffMst(v129, v42);
          if ( !buffMst )
            sub_B7076C(0LL, v44);
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                     v34->fields.buffId,
                     (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          v47 = (BuffEntity_o *)Entity;
          v128 = plusMinus[0];
          if ( v121 <= 0 && (plusMinus[0] & 0x80000000) != 0 )
          {
            if ( !Entity )
              sub_B7076C(0LL, v46);
            v48 = v15->fields.baseParam;
            emptyMessage_high = HIDWORD(Entity->fields.emptyMessage);
            v50 = *lowerParam;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            v51 = System_Math__Min_45556056(v50, v48 - emptyMessage_high, 0LL);
            v13 = v123;
            v52 = v51;
            *lowerParam = v51;
          }
          else
          {
            if ( !Entity )
              sub_B7076C(0LL, v46);
            v53 = *v13;
            if ( *v13 < SHIDWORD(Entity->fields.emptyMessage) )
              v53 = HIDWORD(Entity->fields.emptyMessage);
            *v13 = v53;
            v52 = *lowerParam;
          }
          ExtendLowerLimit = BuffEntity__GetExtendLowerLimit(v47, 0LL);
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          *lowerParam = System_Math__Min_45556056(v52, ExtendLowerLimit, 0LL);
          v132[0] = v34->fields.param;
          isValidHpRange = BattleBuffData_BuffData__isValidHpRange(v34, 0LL);
          v56 = v125;
          if ( !v125 || !isValidHpRange )
          {
            if ( v125 )
            {
              ratioHpLow = v34->fields.ratioHpLow;
              if ( ratioHpLow >= 1 )
              {
                v69 = v125->klass;
                param = v34->fields.param;
                if ( *(_WORD *)&v125->klass->_2.bitflags1 )
                {
                  v71 = 0LL;
                  v72 = (BuffInterface_c **)&v69->_1.interfaceOffsets->offset;
                  while ( *(v72 - 1) != BuffInterface_TypeInfo )
                  {
                    ++v71;
                    v72 += 2;
                    if ( v71 >= *(unsigned __int16 *)&v125->klass->_2.bitflags1 )
                      goto LABEL_64;
                  }
                  p_method = (__int64)&v69->vtable[*(_DWORD *)v72 + 1].method;
                }
                else
                {
LABEL_64:
                  p_method = sub_B08590(v125, BuffInterface_TypeInfo, 1LL);
                  v56 = v125;
                }
                v81 = (*(__int64 (__fastcall **)(BuffInterface_o *, __int64, _QWORD, _QWORD))p_method)(
                        v56,
                        1LL,
                        (unsigned int)ratioHpLow,
                        *(_QWORD *)(p_method + 8));
LABEL_78:
                v132[0] = v81 + param;
                goto LABEL_79;
              }
            }
            if ( v125 )
            {
              ratioHpHigh = v34->fields.ratioHpHigh;
              if ( ratioHpHigh >= 1 )
              {
                v75 = v125;
                param = v34->fields.param;
                v76 = v125->klass;
                if ( *(_WORD *)&v125->klass->_2.bitflags1 )
                {
                  v77 = 0LL;
                  v78 = (BuffInterface_c **)&v76->_1.interfaceOffsets->offset;
                  while ( *(v78 - 1) != BuffInterface_TypeInfo )
                  {
                    ++v77;
                    v78 += 2;
                    if ( v77 >= *(unsigned __int16 *)&v125->klass->_2.bitflags1 )
                      goto LABEL_71;
                  }
                  v79 = (__int64)&v76->vtable[*(_DWORD *)v78 + 1].method;
                }
                else
                {
LABEL_71:
                  v79 = sub_B08590(v125, BuffInterface_TypeInfo, 1LL);
                  v75 = v125;
                }
                v81 = (*(__int64 (__fastcall **)(BuffInterface_o *, _QWORD, _QWORD, _QWORD))v79)(
                        v75,
                        0LL,
                        (unsigned int)ratioHpHigh,
                        *(_QWORD *)(v79 + 8));
                goto LABEL_78;
              }
            }
          }
          else
          {
            v57 = v125->klass;
            v119 = buffProc;
            v59 = v34->fields.ratioHpHigh;
            v58 = v34->fields.ratioHpLow;
            ratioRangeHigh = v34->fields.ratioRangeHigh;
            ratioRangeLow = v34->fields.ratioRangeLow;
            v118 = v47;
            if ( *(_WORD *)&v125->klass->_2.bitflags1 )
            {
              v62 = 0LL;
              v63 = (BuffInterface_c **)&v57->_1.interfaceOffsets->offset;
              while ( *(v63 - 1) != BuffInterface_TypeInfo )
              {
                ++v62;
                v63 += 2;
                if ( v62 >= *(unsigned __int16 *)&v125->klass->_2.bitflags1 )
                  goto LABEL_57;
              }
              v65 = v26;
              v66 = v34->fields.param;
              v67 = (__int64)&v57->vtable[*(_DWORD *)v63 + 2].method;
            }
            else
            {
LABEL_57:
              v64 = v34->fields.ratioHpLow;
              v65 = v26;
              v66 = v34->fields.param;
              v67 = sub_B08590(v125, BuffInterface_TypeInfo, 2LL);
              v56 = v125;
              v58 = v64;
            }
            v80 = (*(__int64 (__fastcall **)(BuffInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v67)(
                    v56,
                    v58,
                    v59,
                    ratioRangeLow,
                    ratioRangeHigh,
                    *(_QWORD *)(v67 + 8));
            v47 = v118;
            buffProc = v119;
            v13 = v123;
            v132[0] = v80 + v66;
            v26 = v65;
          }
LABEL_79:
          v15 = v122;
          v82 = v128;
          if ( BattleBuffData_BuffData__isParamAddIndividualiry(v34, 0LL) )
          {
            v83 = v132[0];
            battleData = v122->fields.battleData;
            v85 = (BattleBuffData_ParamAdd_o *)sub_B70764(BattleBuffData_ParamAdd_TypeInfo);
            BattleBuffData_ParamAdd___ctor_24125240(v85, v34, 0LL);
            v87 = BattleBuffData__GetTotalParamAddValue(v34, battleData, checkIndividualities, v85, v86) + v83;
            v15 = v122;
            v13 = v123;
            v82 = v128;
            v132[0] = v87;
          }
          if ( BuffEntity__checkMissText(v47, 0LL) )
          {
            v90 = (System_Int32_array **)BuffEntity__getMissText(v47, 0LL);
            v120->klass = (BattleServantConfConponent_c *)v90;
            sub_B70630(v120, v90, v91, v92, v93, v94, v95, v96);
          }
          if ( v82 >= 1 )
          {
            plusAction = v15->fields.plusAction;
            if ( plusAction )
            {
              v98 = v132[0];
              v99 = BattleBuffData__getActValue_31763200(
                      v129,
                      plusAction,
                      v47->fields.vals,
                      v129->fields.wkzero,
                      checkIndividualities,
                      0LL,
                      v89)
                  * v98;
              v82 = v128;
              if ( v99 <= -1000 )
                v100 = 0;
              else
                v100 = v99 / 1000;
              v132[0] = v100;
            }
          }
          maxBuffRate = *v13;
          value = 0;
          if ( BattleBuffData__CheckBuffRateTypeOrIndiv(v129, v34, &value, &maxBuffRate, maxBuffRate, v88) )
          {
            v101 = v132[0];
            v102 = value;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            v103 = System_Math__Max_45601120(0.0, (float)((float)v102 / 1000.0) + 1.0, 0LL) * (float)v101;
            v104 = v103;
            v105 = v103 == INFINITY;
            v106 = -v103;
            if ( !v105 )
              v106 = v104;
            v132[0] = (int)v106;
            v107 = *v13;
            v82 = v128;
            if ( *v13 < maxBuffRate )
              v107 = maxBuffRate;
            *v13 = v107;
          }
          if ( buffProc )
            ((void (__fastcall *)(BattleLogicBuff_BaseProcess_o *, BattleBuffData_BuffData_o *, _QWORD, _QWORD, int *, Il2CppMethodPointer))buffProc->klass->vtable._4_PrevAddCalcBuffParam.method)(
              buffProc,
              v34,
              (unsigned int)plusMinus[1],
              (unsigned int)v82,
              v132,
              buffProc->klass->vtable._5_AfterAllAddCalcBuffParam.methodPtr);
          plusMinus[1] += v132[0] * v82;
        }
      }
    }
  }
  v112 = *(_QWORD *)v25;
  if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
  {
    v113 = 0LL;
    v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v114 - 1) != System_IDisposable_TypeInfo )
    {
      ++v113;
      v114 += 4;
      if ( v113 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
        goto LABEL_112;
    }
    v115 = v112 + 16LL * *v114 + 312;
  }
  else
  {
LABEL_112:
    v115 = sub_B08590(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v115)(v25, *(_QWORD *)(v115 + 8));
  if ( buffProc )
    ((void (__fastcall *)(BattleLogicBuff_BaseProcess_o *, int32_t *, void *))buffProc->klass->vtable._5_AfterAllAddCalcBuffParam.method)(
      buffProc,
      &plusMinus[1],
      buffProc->klass[1]._1.image);
  return plusMinus[1];
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__getCurrentAllBaffList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  bool v6; // w20
  const MethodInfo *v7; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0

  if ( (byte_4355410 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355410 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v6 = isCheckInterval;
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, v6, v7);
  if ( !v5 )
    sub_B7076C(PassiveList, v9);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, v6, v10);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleBuffData__getMaxBuffCount(
        BattleBuffData_o *this,
        System_Int64_array *individualities,
        bool isActiveOnly,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v7; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v9; // x22
  unsigned int v10; // w24
  int64_t count; // x20
  BattleBuffData_BuffData_o *v12; // x23
  System_Int32_array *Individualty; // x0
  int v14; // w8
  BattleBuffData_BuffData_array *v15; // x21
  unsigned int v16; // w23
  BattleBuffData_BuffData_o *v17; // x22
  System_Int32_array *v18; // x0
  __int64 v20; // x0

  if ( !isActiveOnly )
  {
    PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_24;
    max_length = PassiveList->max_length;
    v9 = PassiveList;
    if ( max_length >= 1 )
    {
      v10 = 0;
      count = 0LL;
      while ( v10 < max_length )
      {
        v12 = v9->m_Items[v10];
        if ( !v12 )
          goto LABEL_24;
        if ( count < v12->fields.count )
        {
          Individualty = BattleBuffData_BuffData__GetIndividualty(v12, 0, 0, 0, 0LL);
          PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities_27796092(
                                                           Individualty,
                                                           individualities,
                                                           0LL);
          if ( ((unsigned __int8)PassiveList & 1) != 0 )
            count = v12->fields.count;
        }
        max_length = v9->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_13;
      }
LABEL_23:
      v20 = sub_B70798(PassiveList);
      sub_B70738(v20, 0LL);
    }
  }
  count = 0LL;
LABEL_13:
  PassiveList = BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_24:
    sub_B7076C(PassiveList, v7);
  v14 = PassiveList->max_length;
  v15 = PassiveList;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( v16 < v14 )
    {
      v17 = v15->m_Items[v16];
      if ( !v17 )
        goto LABEL_24;
      if ( count < v17->fields.count )
      {
        v18 = BattleBuffData_BuffData__GetIndividualty(v17, 0, 0, 0, 0LL);
        PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities_27796092(
                                                         v18,
                                                         individualities,
                                                         0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          count = v17->fields.count;
      }
      v14 = v15->max_length;
      if ( (int)++v16 >= v14 )
        return count;
    }
    goto LABEL_23;
  }
  return count;
}


int32_t __fastcall BattleBuffData__getMaxTurnBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        int32_t lowTurn,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  bool actFlg; // [xsp+Ch] [xbp-4h] BYREF

  actFlg = 0;
  return BattleBuffData__getMaxTurnBuffBase(this, act, checkIndividualities, 0, &actFlg, lowTurn, v5);
}


int32_t __fastcall BattleBuffData__getMaxTurnBuffBase(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool checkCount,
        bool *actFlg,
        int32_t lowTurn,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  BuffList_ActInfo_o *v14; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x25
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  Il2CppObject *current; // x25
  _BOOL8 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x5
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_435546F & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_435546F = 1;
  }
  plusMinus = 0;
  memset(&v26, 0, sizeof(v26));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  plusMinus = 0;
  *actFlg = 0;
  v14 = ActInfo;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v16);
  if ( !v15 )
    sub_B7076C(ActiveList, v18);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v19);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v26.fields.current;
    v22 = BattleBuffData__checkIndiviuality(
            this,
            v14,
            (BattleBuffData_BuffData_o *)v26.fields.current,
            checkIndividualities,
            &plusMinus,
            v24);
    if ( v22 )
    {
      if ( !current )
        sub_B7076C(v22, v23);
      if ( lowTurn < SHIDWORD(current[1].klass) )
        lowTurn = HIDWORD(current[1].klass);
      if ( checkCount && SLODWORD(current[1].monitor) >= 1 )
      {
        LOBYTE(current[2].klass) = 1;
        BYTE3(current[2].klass) = 1;
      }
      *actFlg = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return lowTurn;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getPassiveList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass31_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_435540E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass31_0__getPassiveList_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass31_0_TypeInfo);
    byte_435540E = 1;
  }
  v5 = (BattleBuffData___c__DisplayClass31_0_o *)sub_B70764(BattleBuffData___c__DisplayClass31_0_TypeInfo);
  BattleBuffData___c__DisplayClass31_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.isCheckInterval = isCheckInterval,
        passiveList = this->fields.passiveList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleBuffData___c__DisplayClass31_0__getPassiveList_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !passiveList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                (System_Predicate_T__o *)v9,
                (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
    sub_B7076C(All, v7);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getPassiveListDebug(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0

  if ( (byte_4355412 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    byte_4355412 = 1;
  }
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    sub_B7076C(0LL, method);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)passiveList,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__getRectBuffList(
        BattleBuffData_o *this,
        bool isAtkSide,
        bool isShowOverwriteClassRelation,
        bool isShowDarkClassRelation,
        const MethodInfo *method)
{
  int v6; // w8
  System_String_o *Value; // x0
  System_Int32_array *v8; // x24
  const MethodInfo *v9; // x2
  void *ActiveList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int v13; // w8
  void *v14; // x25
  unsigned int v15; // w20
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x2
  int32_t v18; // w1
  const MethodInfo *v19; // x1
  int v20; // w23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x8
  System_Func_int__bool__o *v28; // x28
  _BOOL4 v29; // w27
  char v30; // w28
  int v31; // w23
  BattleBuffData_ShowBuffData_o *v32; // x27
  BattleBuffData_BuffData_o *v33; // x26
  __int64 v34; // x27
  int v35; // w8
  void *v36; // x24
  int i; // w27
  BattleBuffData_BuffData_o *v38; // x25
  const MethodInfo *v39; // x2
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  BattleBuffData_ShowBuffData_o *v43; // x26
  int v44; // w19
  bool v45; // zf
  __int64 v47; // x0
  _BOOL4 v48; // [xsp+4h] [xbp-6Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // [xsp+8h] [xbp-68h]
  int v51; // [xsp+18h] [xbp-58h]

  v48 = isShowDarkClassRelation;
  if ( (byte_4355455 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
    sub_B70694(&BattleBuffData_ShowBuffData_TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass140_0__getRectBuffList_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass140_0_TypeInfo);
    sub_B70694(&StringLiteral_7177/*"HIDE_DEFF_TYPE"*/);
    byte_4355455 = 1;
  }
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( isAtkSide )
    v6 = 108;
  else
    v6 = 109;
  v51 = v6;
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_7177/*"HIDE_DEFF_TYPE"*/, 0LL);
  v8 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
  ActiveList = BattleBuffData__getActiveList(this, 1, v9);
  if ( !ActiveList )
    goto LABEL_88;
  v13 = *((_DWORD *)ActiveList + 6);
  v14 = ActiveList;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
LABEL_89:
        v47 = sub_B70798(ActiveList);
        sub_B70738(v47, 0LL);
      }
      v33 = (BattleBuffData_BuffData_o *)*((_QWORD *)v14 + (int)v15 + 4);
      v34 = sub_B70764(BattleBuffData___c__DisplayClass140_0_TypeInfo);
      BattleBuffData___c__DisplayClass140_0___ctor((BattleBuffData___c__DisplayClass140_0_o *)v34, 0LL);
      if ( !v33 )
        break;
      if ( !v33->fields._isRemove )
      {
        ActiveList = (void *)BattleBuffData_BuffData__isCommandCardBuff(v33, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 || v33->fields.isActiveCC )
        {
          ActiveList = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v33, 0LL);
          if ( ((unsigned __int8)ActiveList & 1) == 0 || v33->fields.isActiveCA )
          {
            v16 = BattleBuffData_BuffData__checkState(v33, 8, 0LL);
            v20 = (!v16
                || (!isAtkSide ? (v18 = 1024) : (v18 = 0x2000), v16 = BattleBuffData_BuffData__checkState(v33, v18, 0LL)))
               && !BattleBuffData__isInvalidHide((BattleBuffData_o *)v16, v33, v17);
            ActiveList = BattleBuffData__get_buffMst(this, v19);
            if ( !ActiveList )
              break;
            ActiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)ActiveList,
                           v33->fields.buffId,
                           (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !v34 )
              break;
            *(_QWORD *)(v34 + 16) = ActiveList;
            sub_B70630(
              (BattleServantConfConponent_o *)(v34 + 16),
              (System_Int32_array **)ActiveList,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26);
            v27 = *(_QWORD *)(v34 + 16);
            if ( v27 )
            {
              if ( v8 != 0LL && !isAtkSide )
              {
                v28 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v28,
                  (Il2CppObject *)v34,
                  Method_BattleBuffData___c__DisplayClass140_0__getRectBuffList_b__0__,
                  (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
                ActiveList = (void *)BasicHelper__Any_int__29214704(
                                       v8,
                                       (System_Func_T__bool__o *)v28,
                                       (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616);
                v27 = *(_QWORD *)(v34 + 16);
                if ( !v27 )
                  break;
                v20 &= (unsigned int)ActiveList ^ 1;
              }
              v29 = *(_DWORD *)(v27 + 20) == 144 || *(_DWORD *)(v27 + 20) == v51;
              v30 = (v20 & v29) != 0 ? isShowOverwriteClassRelation : v20;
              ActiveList = (void *)BattleBuffData_BuffData__checkState(v33, 4096, 0LL);
              if ( v33->fields.isAct && (v30 & 1) != 0 && ((unsigned __int8)ActiveList & 1) == 0 )
              {
                ActiveList = (void *)BattleBuffData_BuffData__checkState(v33, 512, 0LL);
                if ( ((unsigned __int8)ActiveList & 1) == 0 )
                {
                  v31 = v20 & v29 & v48;
                  v32 = (BattleBuffData_ShowBuffData_o *)sub_B70764(BattleBuffData_ShowBuffData_TypeInfo);
                  BattleBuffData_ShowBuffData___ctor_24113384(v32, v33, 0LL);
                  if ( v31 )
                  {
                    if ( !v32 )
                      break;
                    v32->fields.isReady = 0;
                  }
                  ActiveList = v49;
                  if ( !v49 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v49,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
                }
              }
            }
          }
        }
      }
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_42;
    }
LABEL_88:
    sub_B7076C(ActiveList, v11);
  }
LABEL_42:
  ActiveList = BattleBuffData__getPassiveList(this, 1, v12);
  if ( !ActiveList )
    goto LABEL_88;
  v35 = *((_DWORD *)ActiveList + 6);
  v36 = ActiveList;
  if ( v35 >= 1 )
  {
    for ( i = 0; i < v35; ++i )
    {
      if ( i >= (unsigned int)v35 )
        goto LABEL_89;
      v38 = (BattleBuffData_BuffData_o *)*((_QWORD *)v36 + i + 4);
      if ( !v38 )
        goto LABEL_88;
      if ( !v38->fields._isRemove )
      {
        ActiveList = (void *)BattleBuffData_BuffData__checkState(v38, 8, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 )
        {
          ActiveList = (void *)BattleBuffData_BuffData__checkState(v38, 4096, 0LL);
          if ( ((unsigned __int8)ActiveList & 1) == 0 )
          {
            ActiveList = (void *)BattleBuffData_BuffData__isCommandCardBuff(v38, 0LL);
            if ( ((unsigned __int8)ActiveList & 1) == 0 || v38->fields.isActiveCC )
            {
              ActiveList = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v38, 0LL);
              if ( ((unsigned __int8)ActiveList & 1) == 0 || v38->fields.isActiveCA )
              {
                if ( BattleBuffData_BuffData__isCommandCodeBuff(v38, 0LL)
                  || BattleBuffData_BuffData__IsCommandAssistBuff(v38, 0LL)
                  || !v38->fields.isAct
                  || !(v40 = BattleBuffData__checkBuffSpecialAttack(this, v38, v39))
                  && v38->fields.turn <= 0
                  && v38->fields.count <= 0
                  && !v38->fields._IsExtendingLife_k__BackingField
                  && !(v40 = BattleBuffData_BuffData__checkState(v38, 4, 0LL))
                  && !(v40 = BattleBuffData_BuffData__checkState(v38, 0x2000, 0LL))
                  && (isAtkSide || !(v40 = BattleBuffData_BuffData__checkState(v38, 1024, 0LL)))
                  || BattleBuffData__isInvalidHide((BattleBuffData_o *)v40, v38, v41) )
                {
                  ActiveList = (void *)BattleBuffData_BuffData__isActiveCommandCode(v38, 0LL);
                  if ( ((unsigned __int8)ActiveList & 1) == 0 )
                    goto LABEL_85;
                  if ( !v38->fields.isAct )
                    goto LABEL_85;
                  ActiveList = (void *)BattleBuffData_BuffData__checkState(v38, 4, 0LL);
                  if ( ((unsigned __int8)ActiveList & 1) == 0 )
                    goto LABEL_85;
                  v43 = (BattleBuffData_ShowBuffData_o *)sub_B70764(BattleBuffData_ShowBuffData_TypeInfo);
                  BattleBuffData_ShowBuffData___ctor_24113384(v43, v38, 0LL);
                  if ( !v49 )
                    goto LABEL_88;
                  goto LABEL_84;
                }
                ActiveList = BattleBuffData__get_buffMst(this, v42);
                if ( !ActiveList )
                  goto LABEL_88;
                ActiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)ActiveList,
                               v38->fields.buffId,
                               (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                if ( !ActiveList )
                  goto LABEL_88;
                v44 = *((_DWORD *)ActiveList + 5);
                if ( v44 != v51 && v44 != 144 || isShowOverwriteClassRelation )
                {
                  v43 = (BattleBuffData_ShowBuffData_o *)sub_B70764(BattleBuffData_ShowBuffData_TypeInfo);
                  BattleBuffData_ShowBuffData___ctor_24113384(v43, v38, 0LL);
                  v45 = v44 == 144 || v44 == v51;
                  if ( v45 && v48 )
                  {
                    if ( !v43 )
                      goto LABEL_88;
                    v43->fields.isReady = 0;
                  }
                  if ( !v49 )
                    goto LABEL_88;
LABEL_84:
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v49,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
                }
              }
            }
          }
        }
      }
LABEL_85:
      v35 = *((_DWORD *)v36 + 6);
    }
  }
  if ( !v49 )
    goto LABEL_88;
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v49,
                                                (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getReflectionEffectFunction(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  BuffList_TYPE_array *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  BattleBuffData_BuffData_array *BuffList_31731308; // x1
  const MethodInfo *v7; // x2
  __int64 v9; // x0

  if ( (byte_435542D & 1) == 0 )
  {
    sub_B70694(&BuffList_TYPE___TypeInfo);
    byte_435542D = 1;
  }
  v3 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  if ( !v3->max_length )
  {
    v9 = sub_B70798(v3);
    sub_B70738(v9, 0LL);
  }
  v3->m_Items[1] = 97;
  BuffList_31731308 = BattleBuffData__getBuffList_31731308(this, v3, 0LL, 0LL, v5);
  return BattleBuffData__geCheckBuffSuccessful(this, BuffList_31731308, v7);
}


int32_t __fastcall BattleBuffData__getResumptionHpFromLossMaxHp(
        BattleBuffData_o *this,
        bool isUse,
        const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.resumptionHpFromLossMaxHp;
  if ( isUse )
    this->fields.resumptionHpFromLossMaxHp = 0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getSameIndivualityBuffSum(
        BattleBuffData_o *this,
        System_Int32_array *indv,
        bool isActiveOnly,
        bool IsIncludeIgnoreIndividuality,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  int32_t v10; // w22
  BattleBuffData_BuffData_o *PassiveList; // x0
  __int64 v12; // x1
  int count; // w8
  BattleBuffData_BuffData_o *v14; // x24
  unsigned int v15; // w25
  int v16; // w8
  BattleBuffData_BuffData_o *v17; // x23
  unsigned int v18; // w24
  __int64 v20; // x0

  v10 = 0;
  if ( !isActiveOnly && !isIgnoreIndivUnreleaseable )
  {
    PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_23;
    count = PassiveList->fields.count;
    v14 = PassiveList;
    if ( count >= 1 )
    {
      v15 = 0;
      v10 = 0;
      while ( v15 < count )
      {
        PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v14->fields.isUse + (int)v15);
        if ( !PassiveList )
          goto LABEL_23;
        PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                     PassiveList,
                                                     IsIncludeIgnoreIndividuality,
                                                     0,
                                                     0,
                                                     0LL);
        if ( PassiveList )
        {
          PassiveList = (BattleBuffData_BuffData_o *)Individuality__CheckIndividualities(
                                                       (System_Int32_array *)PassiveList,
                                                       indv,
                                                       0LL);
          v10 += (unsigned __int8)PassiveList & 1;
        }
        count = v14->fields.count;
        if ( (int)++v15 >= count )
          goto LABEL_13;
      }
LABEL_22:
      v20 = sub_B70798(PassiveList);
      sub_B70738(v20, 0LL);
    }
    v10 = 0;
  }
LABEL_13:
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_23:
    sub_B7076C(PassiveList, v12);
  v16 = PassiveList->fields.count;
  v17 = PassiveList;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( v18 < v16 )
    {
      PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v17->fields.isUse + (int)v18);
      if ( !PassiveList )
        goto LABEL_23;
      PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                   PassiveList,
                                                   IsIncludeIgnoreIndividuality,
                                                   isIgnoreIndivUnreleaseable,
                                                   0,
                                                   0LL);
      if ( PassiveList )
      {
        PassiveList = (BattleBuffData_BuffData_o *)Individuality__CheckIndividualities(
                                                     (System_Int32_array *)PassiveList,
                                                     indv,
                                                     0LL);
        v10 += (unsigned __int8)PassiveList & 1;
      }
      v16 = v17->fields.count;
      if ( (int)++v18 >= v16 )
        return v10;
    }
    goto LABEL_22;
  }
  return v10;
}


BattleBuffData_SaveData_o *__fastcall BattleBuffData__getSaveData(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *passiveList; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleBuffData_SaveData_o *result; // x0

  if ( (byte_4355451 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&BattleBuffData_SaveData_TypeInfo);
    byte_4355451 = 1;
  }
  v3 = sub_B70764(BattleBuffData_SaveData_TypeInfo);
  BattleBuffData_SaveData___ctor((BattleBuffData_SaveData_o *)v3, 0LL);
  passiveList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.passiveList;
  if ( !passiveList
    || (passiveList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                      passiveList,
                                                                                      (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
        !v3)
    || (*(_QWORD *)(v3 + 16) = passiveList,
        sub_B70630(
          (BattleServantConfConponent_o *)(v3 + 16),
          (System_Int32_array **)passiveList,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (passiveList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.activeList) == 0LL) )
  {
    sub_B7076C(passiveList, v4);
  }
  v12 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 passiveList,
                                 (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  *(_QWORD *)(v3 + 24) = v12;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), v12, v13, v14, v15, v16, v17, v18);
  result = (BattleBuffData_SaveData_o *)v3;
  *(_DWORD *)(v3 + 32) = this->fields.addBuffOrder;
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getShowCommandBuffListActive(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  const MethodInfo *v4; // x2
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 v6; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v8; // x20
  unsigned int v9; // w22
  Il2CppClass **v10; // x8
  BattleBuffData_BuffData_o *v11; // x21
  const MethodInfo *v12; // x2
  __int64 v14; // x0

  if ( (byte_435541D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_435541D = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = BattleBuffData__getActiveList(this, 1, v4);
  if ( !ActiveList )
    goto LABEL_16;
  max_length = ActiveList->max_length;
  v8 = ActiveList;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v14 = sub_B70798(ActiveList);
        sub_B70738(v14, 0LL);
      }
      v10 = &v8->obj.klass + (int)v9;
      v11 = (BattleBuffData_BuffData_o *)v10[4];
      if ( !v11 )
        break;
      ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(
                                                      (BattleBuffData_BuffData_o *)v10[4],
                                                      8,
                                                      0LL);
      if ( ((unsigned __int8)ActiveList & 1) == 0 )
      {
        ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v11, 4096, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 )
        {
          ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData__isInvalidHide(
                                                          (BattleBuffData_o *)ActiveList,
                                                          v11,
                                                          v12);
          if ( ((unsigned __int8)ActiveList & 1) == 0 )
          {
            if ( !v3 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v3,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
        }
      }
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7076C(ActiveList, v6);
  }
LABEL_14:
  if ( !v3 )
    goto LABEL_16;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getShowCommandBuffListPassive(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  const MethodInfo *v4; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v6; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v8; // x21
  unsigned int v9; // w23
  Il2CppClass **v10; // x8
  BattleBuffData_BuffData_o *v11; // x22
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  __int64 v15; // x0

  if ( (byte_435541E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_435541E = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v4);
  if ( !PassiveList )
    goto LABEL_24;
  max_length = PassiveList->max_length;
  v8 = PassiveList;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v15 = sub_B70798(PassiveList);
        sub_B70738(v15, 0LL);
      }
      v10 = &v8->obj.klass + (int)v9;
      v11 = (BattleBuffData_BuffData_o *)v10[4];
      if ( !v11 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(
                                                       (BattleBuffData_BuffData_o *)v10[4],
                                                       8,
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) == 0 )
      {
        PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v11, 4096, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) == 0 )
        {
          PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData__isInvalidHide(
                                                           (BattleBuffData_o *)PassiveList,
                                                           v11,
                                                           v12);
          if ( ((unsigned __int8)PassiveList & 1) == 0 )
          {
            PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v11, 512, 0LL);
            if ( ((unsigned __int8)PassiveList & 1) != 0
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v11, 0x2000, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData__checkBuffSpecialAttack(this, v11, v13),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || v11->fields.turn > 0
              || v11->fields.count > 0
              || v11->fields._IsExtendingLife_k__BackingField
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v11, 2, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v11, 4, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0) )
            {
              if ( !v3 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v3,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
          }
        }
      }
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_22;
    }
LABEL_24:
    sub_B7076C(PassiveList, v6);
  }
LABEL_22:
  if ( !v3 )
    goto LABEL_24;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__getShowServantParam(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  System_Collections_Generic_List_BattleBuffData_ShowBuffData__o **v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v20; // x22
  BattleBuffData_o *v21; // x0
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *v23; // x19
  BattleBuffData___c_c *v24; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__40_1; // x20
  Il2CppObject *v27; // x21
  struct BattleBuffData___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4355417 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_OrderByDescending_BattleBuffData_ShowBuffData__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_ShowBuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_ShowBuffData__int___ctor__);
    sub_B70694(&System_Func_BattleBuffData_ShowBuffData__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__getShowServantParam_b__40_1__);
    sub_B70694(&Method_BattleBuffData___c__DisplayClass40_0__getShowServantParam_b__0__);
    sub_B70694(&BattleBuffData___c__DisplayClass40_0_TypeInfo);
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_4355417 = 1;
  }
  v3 = sub_B70764(BattleBuffData___c__DisplayClass40_0_TypeInfo);
  BattleBuffData___c__DisplayClass40_0___ctor((BattleBuffData___c__DisplayClass40_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  v13 = (System_Collections_Generic_List_BattleBuffData_ShowBuffData__o **)(v3 + 24);
  *(_QWORD *)(v3 + 24) = v12;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v20,
    (Il2CppObject *)v3,
    Method_BattleBuffData___c__DisplayClass40_0__getShowServantParam_b__0__,
    (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v20,
          (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.activeList) == 0LL) )
  {
LABEL_15:
    sub_B7076C(passiveList, v5);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
    (System_Action_T__o *)v20,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  BattleBuffData__CheckDummyBuffData(v21, *v13, v22);
  v23 = *v13;
  v24 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v24 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__40_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__40_1;
  if ( !_9__40_1 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__40_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleBuffData_ShowBuffData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__40_1,
      v27,
      Method_BattleBuffData___c__getShowServantParam_b__40_1__,
      (const MethodInfo_29AD124 *)Method_System_Func_BattleBuffData_ShowBuffData__int___ctor__);
    v28 = BattleBuffData___c_TypeInfo->static_fields;
    v28->__9__40_1 = (struct System_Func_BattleBuffData_ShowBuffData__int__o *)_9__40_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v28->__9__40_1,
      (System_Int32_array **)_9__40_1,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                                                               (System_Func_TSource__TKey__o *)_9__40_1,
                                                               (const MethodInfo_1CBFF6C *)Method_System_Linq_Enumerable_OrderByDescending_BattleBuffData_ShowBuffData__int___);
  return (BattleBuffData_ShowBuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                v35,
                                                (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_ShowBuffData___);
}


System_Boolean_array *__fastcall BattleBuffData__getSkillSealSelectListFromValue(
        BattleBuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  System_Boolean_array *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x20
  int32_t v7; // w21
  uint16_t Chars; // w22
  double NumericValue; // d0
  int v10; // w8
  int max_length; // w9
  __int64 v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = value;
  if ( (byte_4355472 & 1) == 0 )
  {
    sub_B70694(&bool___TypeInfo);
    sub_B70694(&char_TypeInfo);
    byte_4355472 = 1;
  }
  v3 = (System_Boolean_array *)sub_B706AC(bool___TypeInfo, 3LL);
  v4 = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !v4 )
LABEL_18:
    sub_B7076C(v4, v5);
  v6 = v4;
  if ( v4->fields.m_stringLength >= 1 )
  {
    v7 = 0;
    do
    {
      Chars = System_String__get_Chars(v6, v7, 0LL);
      if ( (BYTE3(char_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      NumericValue = System_Char__GetNumericValue(Chars, 0LL);
      if ( NumericValue == INFINITY )
        NumericValue = -INFINITY;
      v10 = (int)NumericValue - 1;
      if ( v10 >= 0 )
      {
        if ( !v3 )
          goto LABEL_18;
        max_length = v3->max_length;
        if ( v10 < max_length )
        {
          if ( v10 >= (unsigned int)max_length )
          {
            v13 = sub_B70798(v4);
            sub_B70738(v13, 0LL);
          }
          v3->m_Items[v10 + 4] = 1;
        }
      }
      ++v7;
    }
    while ( v7 < v6->fields.m_stringLength );
  }
  return v3;
}


System_Int32_array *__fastcall BattleBuffData__getSkillSealSelectTurnList(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x19
  BuffList_ActInfo_o *ActInfo; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x23
  const MethodInfo *v8; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  Il2CppObject *current; // x23
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Boolean_array *SkillSealSelectListFromValue; // x0
  __int64 v18; // x1
  unsigned __int64 v19; // x8
  il2cpp_array_size_t max_length; // w10
  const MethodInfo *v21; // x5
  __int64 v23; // x0
  __int64 v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4355470 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355470 = 1;
  }
  plusMinus = 0;
  memset(&v26, 0, sizeof(v26));
  v5 = (System_Int32_array *)sub_B706AC(int___TypeInfo, 3LL);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(99, 0LL, 0LL);
  plusMinus = 0;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v8);
  if ( !v7 )
    sub_B7076C(ActiveList, v10);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v11);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v7,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v26.fields.current;
    v14 = BattleBuffData__checkIndiviuality(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v26.fields.current,
            checkIndividualities,
            &plusMinus,
            v21);
    if ( v14 )
    {
      if ( !current )
        sub_B7076C(v14, v15);
      SkillSealSelectListFromValue = BattleBuffData__getSkillSealSelectListFromValue(
                                       (BattleBuffData_o *)v14,
                                       HIDWORD(current[1].monitor),
                                       v16);
      if ( !SkillSealSelectListFromValue )
        sub_B7076C(0LL, v18);
      if ( (int)*(_QWORD *)&SkillSealSelectListFromValue->max_length >= 1 )
      {
        v19 = 0LL;
        max_length = *(_QWORD *)&SkillSealSelectListFromValue->max_length;
        do
        {
          if ( v19 >= max_length )
          {
            v23 = sub_B70798(SkillSealSelectListFromValue);
            sub_B70738(v23, 0LL);
          }
          if ( SkillSealSelectListFromValue->m_Items[v19 + 4] )
          {
            if ( !v5 )
              sub_B7076C(SkillSealSelectListFromValue, v18);
            if ( v19 >= v5->max_length )
            {
              v24 = sub_B70798(SkillSealSelectListFromValue);
              sub_B70738(v24, 0LL);
            }
            v5->m_Items[v19 + 1] = HIDWORD(current[1].klass);
          }
          max_length = SkillSealSelectListFromValue->max_length;
          ++v19;
        }
        while ( (__int64)v19 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v5;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__getTDTypeChangeBuffData(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  const MethodInfo *v6; // x6
  BattleBuffData_BuffData_array *BuffList_31751548; // x20
  BattleBuffData_BuffData_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  int max_length; // w8
  int v12; // w9
  int v13; // w10
  BattleBuffData_BuffData_o *v14; // x11
  int addOrder; // w12
  bool v16; // cc
  __int64 v18; // x0

  if ( (byte_4355450 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_BuffData_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4355450 = 1;
  }
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, servantData, 0LL, 0LL, 0LL, 0LL, 0LL);
  BuffList_31751548 = BattleBuffData__getBuffList_31751548(this, 86, v5, 1, 0, 0LL, v6);
  v8 = (BattleBuffData_BuffData_o *)sub_B70764(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor(v8, 0LL);
  if ( !BuffList_31751548 )
    goto LABEL_15;
  max_length = BuffList_31751548->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    v13 = -1;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
      {
        v18 = sub_B70798(v9);
        sub_B70738(v18, 0LL);
      }
      v14 = BuffList_31751548->m_Items[v12];
      if ( !v14 )
        break;
      addOrder = v14->fields.addOrder;
      ++v12;
      v16 = v13 < addOrder;
      if ( v13 < addOrder )
        v13 = v14->fields.addOrder;
      if ( v16 )
        v8 = v14;
      if ( v12 >= max_length )
        return v8;
    }
LABEL_15:
    sub_B7076C(v9, v10);
  }
  return v8;
}


bool __fastcall BattleBuffData__getTestActBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        int32_t *value,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v10; // x1
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x2
  System_Int32_array *opponentConcatSvtIndividualities_k__BackingField; // x3
  System_Int32_array *selfIndividuality_k__BackingField; // x6
  System_Int32_array *opponentIndividuality_k__BackingField; // x7
  bool v15; // w0
  int32_t param; // w8
  const MethodInfo *v18; // [xsp+0h] [xbp-40h]
  BattleBuffData_BuffData_o *targetBuff; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_435546B & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_435546B = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B7076C(ActInfo, v10);
  selfConcatSvtIndividualities_k__BackingField = checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField;
  opponentConcatSvtIndividualities_k__BackingField = checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField;
  selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividuality_k__BackingField;
  opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividuality_k__BackingField;
  targetBuff = 0LL;
  v15 = BattleBuffData__ConfirmationBuff(
          this,
          ActInfo,
          selfConcatSvtIndividualities_k__BackingField,
          opponentConcatSvtIndividualities_k__BackingField,
          0,
          &targetBuff,
          selfIndividuality_k__BackingField,
          opponentIndividuality_k__BackingField,
          v18);
  param = (int)targetBuff;
  if ( targetBuff )
    param = targetBuff->fields.param;
  *value = param;
  return v15;
}


bool __fastcall BattleBuffData__get_IsNoDamage(BattleBuffData_o *this, const MethodInfo *method)
{
  return this->fields.isNoDamage;
}


BuffMaster_o *__fastcall BattleBuffData__get_buffMst(BattleBuffData_o *this, const MethodInfo *method)
{
  BuffMaster_o *result; // x0
  BattleServantConfConponent_o *p_tmpBuffMst; // x19
  BuffMaster_o *tmpBuffMst; // t1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4355422 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355422 = 1;
  }
  tmpBuffMst = this->fields._tmpBuffMst;
  p_tmpBuffMst = (BattleServantConfConponent_o *)&this->fields._tmpBuffMst;
  result = tmpBuffMst;
  if ( !tmpBuffMst )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v7);
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
    p_tmpBuffMst->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B70630(p_tmpBuffMst, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
    return (BuffMaster_o *)p_tmpBuffMst->klass;
  }
  return result;
}


bool __fastcall BattleBuffData__isConditionHp(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleBuffData_o *v8; // x22
  const MethodInfo *v9; // x1
  BuffEntity_o *v10; // x19
  double v11; // d8
  bool v12; // w20
  int32_t pal[2]; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4355457 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4355457 = 1;
  }
  *(_QWORD *)pal = 0LL;
  if ( !buff )
    goto LABEL_18;
  if ( buff->fields._isRemove || !BattleBuffData_BuffData__checkState(buff, 32, 0LL) )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v8, v9);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_18:
    sub_B7076C(this, buff);
  }
  v10 = (BuffEntity_o *)this;
  if ( !BuffEntity__isConditionsHp((BuffEntity_o *)this, 0LL) )
    return 0;
  *(_QWORD *)pal = 0LL;
  v11 = (double)now * 1000.0 / (double)max;
  if ( BuffEntity__isCondition(v10, 0, &pal[1], 0LL) && BuffEntity__isCondition(v10, 1, pal, 0LL) )
  {
    if ( v11 < (double)pal[1] )
      return 0;
    return v11 <= (double)pal[0];
  }
  v12 = 0;
  if ( BuffEntity__isCondition(v10, 0, &pal[1], 0LL) )
    v12 = v11 >= (double)pal[1];
  if ( BuffEntity__isCondition(v10, 1, pal, 0LL) )
    return v11 <= (double)pal[0];
  return v12;
}


bool __fastcall BattleBuffData__isConditionIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        System_Int32_array *servantIndv,
        System_Int32_array *buffIndv,
        System_Int32_array *fieldIndiv,
        System_Int32_array *canSubStateBuffIndv,
        const MethodInfo *method)
{
  BattleBuffData_o *v12; // x24
  const MethodInfo *v13; // x1
  BuffEntity_o *v14; // x23
  il2cpp_array_size_t v15; // w24
  il2cpp_array_size_t v16; // w25
  System_Collections_Generic_List_int__o *v17; // x21
  int32_t IndividualitieCountAbove; // w22
  int32_t IndividualitieCountBelow; // w23
  System_Int32_array *v20; // x19
  BattleBuffData_o *v21; // x20
  System_Func_T1__T2__TResult__o *v22; // x21
  System_Func_T1__T2__TResult__o *v23; // x22
  System_Int32_array *v24; // x0
  System_Int32_array *v25; // x1
  System_Int32_array *v26; // x0
  System_Int32_array *v27; // x19
  System_Int32_array *v28; // x20
  System_Func_T1__T2__TResult__o *v29; // x21
  System_Func_T1__T2__TResult__o *v30; // x22
  System_Int32_array *v32; // x0
  System_Int32_array *v33; // x19
  System_Int32_array *v34; // x20
  System_Func_T1__T2__T3__T4__TResult__o *v36; // x21
  System_Func_T1__T2__T3__T4__TResult__o *v37; // x24
  __int64 v38; // x0
  System_Int32_array *v39; // [xsp+0h] [xbp-50h] BYREF
  int32_t pal; // [xsp+Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_435545B & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Func_int____int____bool___ctor__);
    sub_B70694(&System_Func_int____int____bool__TypeInfo);
    sub_B70694(&Method_System_Func_int____int____int__int__bool___ctor__);
    sub_B70694(&System_Func_int____int____int__int__bool__TypeInfo);
    sub_B70694(&Method_Individuality_IsMatchArray__);
    sub_B70694(&Method_Individuality_IsPartialMatchArrayCount__);
    sub_B70694(&Method_Individuality_IsPartialMatchArray__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor___69164928);
    this = (BattleBuffData_o *)sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_435545B = 1;
  }
  pal = 0;
  v39 = 0LL;
  if ( !buff )
    goto LABEL_31;
  if ( buff->fields._isRemove || !BattleBuffData_BuffData__checkState(buff, 32, 0LL) )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v12, v13);
  if ( !this )
    goto LABEL_31;
  this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               buff->fields.buffId,
                               (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  pal = 0;
  v39 = 0LL;
  if ( !this )
    goto LABEL_31;
  v14 = (BuffEntity_o *)this;
  this = (BattleBuffData_o *)BuffEntity__IsExcludeUnSubStateIndiv((BuffEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    buffIndv = canSubStateBuffIndv;
  if ( !servantIndv || !buffIndv )
    goto LABEL_31;
  v15 = buffIndv->max_length + servantIndv->max_length;
  v16 = fieldIndiv ? fieldIndiv->max_length : 0;
  v17 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51074380(
    v17,
    v15 + v16,
    (const MethodInfo_30B554C *)Method_System_Collections_Generic_List_int___ctor___69164928);
  if ( !v17 )
    goto LABEL_31;
  System_Collections_Generic_List_int___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)servantIndv,
    (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  System_Collections_Generic_List_int___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)buffIndv,
    (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( fieldIndiv )
    System_Collections_Generic_List_int___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)fieldIndiv,
      (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( BuffEntity__isCondition(v14, 2, &pal, 0LL) )
  {
    IndividualitieCountAbove = BuffEntity__GetIndividualitieCountAbove(v14, 0, 0LL);
    IndividualitieCountBelow = BuffEntity__GetIndividualitieCountBelow(v14, 0, 0LL);
    v20 = System_Collections_Generic_List_int___ToArray(
            v17,
            (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
    this = (BattleBuffData_o *)sub_B706AC(int___TypeInfo, 1LL);
    if ( this )
    {
      v21 = this;
      if ( !LODWORD(this->fields.passiveList) )
      {
        v38 = sub_B70798(this);
        sub_B70738(v38, 0LL);
      }
      LODWORD(this->fields.activeList) = pal;
      if ( IndividualitieCountAbove >= 1 || IndividualitieCountBelow >= 1 )
      {
        v36 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B70764(System_Func_int____int____int__int__bool__TypeInfo);
        System_Func_object__object__int__int__bool____ctor(
          v36,
          0LL,
          Method_Individuality_IsPartialMatchArrayCount__,
          (const MethodInfo_29BC1B0 *)Method_System_Func_int____int____int__int__bool___ctor__);
        v37 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B70764(System_Func_int____int____int__int__bool__TypeInfo);
        System_Func_object__object__int__int__bool____ctor(
          v37,
          0LL,
          Method_Individuality_IsPartialMatchArrayCount__,
          (const MethodInfo_29BC1B0 *)Method_System_Func_int____int____int__int__bool___ctor__);
        return Individuality__CheckSignedIndividualitiesCount(
                 v20,
                 (System_Int32_array *)v21,
                 (System_Func_int____int____int__int__bool__o *)v36,
                 (System_Func_int____int____int__int__bool__o *)v37,
                 IndividualitieCountAbove,
                 IndividualitieCountBelow,
                 0LL);
      }
      v22 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v22,
        0LL,
        Method_Individuality_IsPartialMatchArray__,
        (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__);
      v23 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v23,
        0LL,
        Method_Individuality_IsPartialMatchArray__,
        (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__);
      v24 = v20;
      v25 = (System_Int32_array *)v21;
      return Individuality__CheckSignedIndividualities_27795680(
               v24,
               v25,
               (System_Func_int____int____bool__o *)v22,
               (System_Func_int____int____bool__o *)v23,
               0LL);
    }
LABEL_31:
    sub_B7076C(this, buff);
  }
  if ( !BuffEntity__TryGetConditionParamArray(v14, 3, &v39, 0LL) )
  {
    if ( BuffEntity__TryGetConditionParamArray(v14, 4, &v39, 0LL) )
    {
      v32 = System_Collections_Generic_List_int___ToArray(
              v17,
              (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
      v33 = v39;
      v34 = v32;
      v22 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v22,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__);
      v23 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v23,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__);
      v24 = v34;
      v25 = v33;
      return Individuality__CheckSignedIndividualities_27795680(
               v24,
               v25,
               (System_Func_int____int____bool__o *)v22,
               (System_Func_int____int____bool__o *)v23,
               0LL);
    }
    return 0;
  }
  v26 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v27 = v39;
  v28 = v26;
  v29 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(
    v29,
    0LL,
    Method_Individuality_IsPartialMatchArray__,
    (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__);
  v30 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(
    v30,
    0LL,
    Method_Individuality_IsPartialMatchArray__,
    (const MethodInfo_29B772C *)Method_System_Func_int____int____bool___ctor__);
  return Individuality__CheckSignedIndividualitiesPartialMatch(
           v28,
           v27,
           (System_Func_int____int____bool__o *)v29,
           (System_Func_int____int____bool__o *)v30,
           0LL);
}


bool __fastcall BattleBuffData__isContainConditionIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20

  v4 = this;
  if ( (byte_435545A & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_435545A = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v4, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B7076C(this, buff);
  }
  return BuffEntity__isConditionIndividuality((BuffEntity_o *)this, 0LL);
}


bool __fastcall BattleBuffData__isContainConditionsHp(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20

  v4 = this;
  if ( (byte_4355459 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4355459 = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v4, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B7076C(this, buff);
  }
  return BuffEntity__isConditionsHp((BuffEntity_o *)this, 0LL);
}


bool __fastcall BattleBuffData__isGuts(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o **buff,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6
  BattleBuffData_BuffData_array *BuffList_31751548; // x0
  const MethodInfo *v15; // x5
  __int64 v17; // x0

  *buff = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)buff,
    0LL,
    (System_String_array **)checkIndividualitiesDataArray,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !checkIndividualitiesDataArray )
    sub_B7076C(v11, v12);
  if ( !checkIndividualitiesDataArray->max_length )
  {
    v17 = sub_B70798(v11);
    sub_B70738(v17, 0LL);
  }
  BuffList_31751548 = BattleBuffData__getBuffList_31751548(
                        this,
                        126,
                        checkIndividualitiesDataArray->m_Items[0],
                        1,
                        1,
                        0LL,
                        v13);
  return BattleBuffData__checkGutsBuffSuccessfulIndividual(
           this,
           BuffList_31751548,
           126,
           checkIndividualitiesDataArray,
           buff,
           v15);
}


bool __fastcall BattleBuffData__isHide(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 8, 0LL);
}


bool __fastcall BattleBuffData__isHideOtherCommand(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 512, 0LL);
}


bool __fastcall BattleBuffData__isIgnoreDefeatPoint(BattleBuffData_o *this, const MethodInfo *method)
{
  BuffList_TYPE_array *BuffList_31731308; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  __int64 v7; // x0

  if ( (byte_43554B0 & 1) == 0 )
  {
    sub_B70694(&BuffList_TYPE___TypeInfo);
    byte_43554B0 = 1;
  }
  BuffList_31731308 = (BuffList_TYPE_array *)sub_B706AC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !BuffList_31731308 )
    goto LABEL_7;
  if ( !BuffList_31731308->max_length )
  {
    v7 = sub_B70798(BuffList_31731308);
    sub_B70738(v7, 0LL);
  }
  BuffList_31731308->m_Items[1] = 184;
  BuffList_31731308 = (BuffList_TYPE_array *)BattleBuffData__getBuffList_31731308(this, BuffList_31731308, 0LL, 0LL, v5);
  if ( !BuffList_31731308 )
LABEL_7:
    sub_B7076C(BuffList_31731308, v4);
  return BuffList_31731308->max_length != 0;
}


bool __fastcall BattleBuffData__isInvalidHide(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return !BattleBuffData_BuffData__checkAct(buff, 1, 0LL) && BattleBuffData_BuffData__checkState(buff, 0x8000, 0LL);
}


bool __fastcall BattleBuffData__isShow(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 4, 0LL);
}


bool __fastcall BattleBuffData__isShowDamageAndCommandCardBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 0x2000, 0LL);
}


bool __fastcall BattleBuffData__isShowDeff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 1024, 0LL);
}


bool __fastcall BattleBuffData__isShowStatusBuffOnly(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 4096, 0LL);
}


bool __fastcall BattleBuffData__isSphitBuff(BattleBuffData_o *this, int32_t *effectId, const MethodInfo *method)
{
  void *PassiveList; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w24
  __int64 v11; // x22
  BuffEntity_o *v12; // x22
  int32_t v13; // w23
  int v14; // w8
  void *v15; // x21
  unsigned int v16; // w24
  __int64 v17; // x22
  int32_t v18; // w23
  __int64 v20; // x0

  if ( (byte_4355456 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4355456 = 1;
  }
  *effectId = 0;
  PassiveList = BattleBuffData__getPassiveList(this, 1, method);
  if ( !PassiveList )
    goto LABEL_33;
  v8 = *((_DWORD *)PassiveList + 6);
  v9 = PassiveList;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        goto LABEL_34;
      v11 = *((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 )
        goto LABEL_33;
      if ( !*(_BYTE *)(v11 + 385) && *(_BYTE *)(v11 + 34) )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v6);
        if ( !PassiveList )
          goto LABEL_33;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        *(_DWORD *)(v11 + 16),
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          goto LABEL_33;
        v12 = (BuffEntity_o *)PassiveList;
        v13 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__isSpHit(v13, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          break;
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_17;
    }
LABEL_32:
    *effectId = BuffEntity__getEffectId(v12, 0LL);
    return 1;
  }
LABEL_17:
  PassiveList = BattleBuffData__getActiveList(this, 1, v7);
  if ( !PassiveList )
LABEL_33:
    sub_B7076C(PassiveList, v6);
  v14 = *((_DWORD *)PassiveList + 6);
  v15 = PassiveList;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( v16 < v14 )
    {
      v17 = *((_QWORD *)v15 + (int)v16 + 4);
      if ( !v17 )
        goto LABEL_33;
      if ( !*(_BYTE *)(v17 + 385) && *(_BYTE *)(v17 + 34) )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v6);
        if ( !PassiveList )
          goto LABEL_33;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        *(_DWORD *)(v17 + 16),
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          goto LABEL_33;
        v12 = (BuffEntity_o *)PassiveList;
        v18 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__isSpHit(v18, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          goto LABEL_32;
      }
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
        return 0;
    }
LABEL_34:
    v20 = sub_B70798(PassiveList);
    sub_B70738(v20, 0LL);
  }
  return 0;
}


bool __fastcall BattleBuffData__isTDTypeChange(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *v3; // x0
  __int64 v4; // x1

  v3 = BattleBuffData__getTDTypeChangeBuffData(this, servantData, method);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  return v3->fields.param > 0;
}


bool __fastcall BattleBuffData__isTurnBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool checkCnt,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  bool actFlg; // [xsp+Ch] [xbp-4h] BYREF

  actFlg = 0;
  BattleBuffData__getMaxTurnBuffBase(this, act, checkIndividualities, checkCnt, &actFlg, 0, v5);
  return actFlg;
}


void __fastcall BattleBuffData__recBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  if ( !buffData )
    sub_B7076C(this, 0LL);
  buffData->fields.isAct = 1;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__removeLinkageBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endBuffs,
        bool isCreateDummy,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  bool v8; // w22
  const MethodInfo *v9; // x4
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  System_Collections_Generic_IEnumerable_T__o *v13; // x0

  if ( (byte_4355429 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355429 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v8 = isCreateDummy;
  v10 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__RemoveLinkageBuff(this, endBuffs, v8, 1, v9);
  if ( !v7 )
    sub_B7076C(v10, v11);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    v10,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v13 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__RemoveLinkageBuff(this, endBuffs, v8, 0, v12);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    v13,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7;
}


void __fastcall BattleBuffData__setSaveData(
        BattleBuffData_o *this,
        BattleBuffData_SaveData_o *sv,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *passiveList; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x22
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *activeList; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x22

  v4 = this;
  if ( (byte_4355452 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData__setSaveData_b__136_0__);
    sub_B70694(&Method_BattleBuffData__setSaveData_b__136_1__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    byte_4355452 = 1;
  }
  if ( !sv )
    goto LABEL_9;
  this = (BattleBuffData_o *)v4->fields.passiveList;
  if ( !this )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)sv->fields.passive,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  this = (BattleBuffData_o *)v4->fields.activeList;
  if ( !this )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)sv->fields.active,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  passiveList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v4->fields.passiveList;
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)v4,
    Method_BattleBuffData__setSaveData_b__136_0__,
    (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          passiveList,
          (System_Action_T__o *)v6,
          (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        activeList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v4->fields.activeList,
        v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v8,
          (Il2CppObject *)v4,
          Method_BattleBuffData__setSaveData_b__136_1__,
          (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__),
        !activeList) )
  {
LABEL_9:
    sub_B7076C(this, sv);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    activeList,
    (System_Action_T__o *)v8,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  v4->fields.addBuffOrder = sv->fields.addBuffOrder;
}


void __fastcall BattleBuffData__set_IsNoDamage(BattleBuffData_o *this, bool value, const MethodInfo *method)
{
  this->fields.isNoDamage = value;
}


void __fastcall BattleBuffData__startBattleRec(BattleBuffData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int v8; // w19
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-68h] BYREF
  int v10[2]; // [xsp+20h] [xbp-50h]
  int v11; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_4355454 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4355454 = 1;
  }
  memset(&i, 0, sizeof(i));
  v11 = 0;
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v9; ; BYTE2(i.fields.current[2].klass) = 0 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &i,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v4 )
      break;
    if ( !i.fields.current )
      sub_B7076C(v4, v5);
  }
  v10[0] = 52;
  v11 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v11 = 0;
  passiveList = this->fields.activeList;
  if ( !passiveList )
LABEL_19:
    sub_B7076C(passiveList, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v9; ; BYTE2(i.fields.current[2].klass) = 0 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &i,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v6 )
      break;
    if ( !i.fields.current )
      sub_B7076C(v6, v7);
  }
  v10[0] = 104;
  v8 = ++v11;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v8 )
  {
    if ( v10[v8 - 1] == 104 )
      v11 = v8 - 1;
  }
}


RemovedBuffInfo_o *__fastcall BattleBuffData__subBuffFromIndividualites(
        BattleBuffData_o *this,
        System_Int32_array *individualities,
        int32_t fromHead,
        int32_t fromTail,
        bool isCreateDummy,
        bool isForceSubState,
        const MethodInfo *method)
{
  _BOOL4 v12; // w28
  void *activeList; // x0
  _DWORD *v14; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x24
  const MethodInfo *v16; // x3
  int v17; // w8
  unsigned int v18; // w20
  int32_t v19; // w25
  bool v20; // w26
  char *v21; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x27
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x4
  XWeaponTrail_Element_o *v26; // x2
  const MethodInfo_302689C *v27; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x1
  const MethodInfo_3025688 *v29; // x2
  BattleBuffData_o *v30; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  RemovedBuffInfo_o *v33; // x20
  __int64 v35; // x0

  if ( (byte_4355442 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Reverse__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355442 = 1;
  }
  v12 = fromHead == 0 && fromTail > 0;
  if ( v12 )
  {
    activeList = this->fields.activeList;
    if ( !activeList )
      goto LABEL_34;
    System_Collections_Generic_List_MapControl_WarInfo___Reverse(
      (System_Collections_Generic_List_MapControl_WarInfo__o *)activeList,
      (const MethodInfo_30274E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Reverse__);
    fromHead = fromTail;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_34;
  activeList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                 (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !this->fields.activeList )
    goto LABEL_34;
  v14 = activeList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v14 )
    goto LABEL_34;
  v17 = v14[6];
  if ( v17 >= 1 )
  {
    v18 = 0;
    v19 = 0;
    v20 = isForceSubState;
    do
    {
      if ( v18 >= v17 )
      {
        v35 = sub_B70798(activeList);
        sub_B70738(v35, 0LL);
      }
      v21 = (char *)&v14[2 * v18];
      v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)v21 + 4);
      if ( !v22 )
        goto LABEL_34;
      activeList = (void *)BattleBuffData_BuffData__RemoveBuffCond(
                             *((BattleBuffData_BuffData_o **)v21 + 4),
                             fromHead,
                             v19,
                             individualities,
                             v20,
                             0LL);
      if ( ((unsigned __int8)activeList & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          v22,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        if ( v22[1].fields.targetId )
        {
          activeList = this->fields.auraBuffList;
          if ( !activeList )
            goto LABEL_34;
          if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeList,
                 (WarBoardManager_TaskList_o *)v22,
                 (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
          {
            activeList = this->fields.auraBuffList;
            if ( !activeList )
              goto LABEL_34;
            System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeList,
              (WarBoardManager_TaskList_o *)v22,
              (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          }
        }
        BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v22, v23);
        ++v19;
        if ( !isCreateDummy )
          goto LABEL_31;
        activeList = BattleBuffData__CreateDummyBuff(
                       (BattleBuffData_o *)activeList,
                       (BattleBuffData_BuffData_o *)v22,
                       v24);
        if ( !this->fields.activeList )
          goto LABEL_34;
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)activeList;
        if ( !v12 )
        {
          activeList = this->fields.activeList;
          v28 = v25;
          v29 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          goto LABEL_30;
        }
        activeList = this->fields.activeList;
        v26 = (XWeaponTrail_Element_o *)v25;
        v27 = (const MethodInfo_302689C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__;
      }
      else
      {
        activeList = this->fields.activeList;
        if ( !activeList )
          goto LABEL_34;
        if ( !v12 )
        {
          v28 = v22;
          v29 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
LABEL_30:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeList,
            v28,
            v29);
          goto LABEL_31;
        }
        v26 = (XWeaponTrail_Element_o *)v22;
        v27 = (const MethodInfo_302689C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Insert(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)activeList,
        0,
        v26,
        v27);
LABEL_31:
      v17 = v14[6];
    }
    while ( (int)++v18 < v17 );
  }
  v30 = (BattleBuffData_o *)BattleBuffData__removeLinkageBuff(
                              this,
                              (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v15,
                              isCreateDummy,
                              v16);
  activeList = BattleBuffData__MakeRemoveBuffInfo(
                 v30,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v15,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v30,
                 v31);
  if ( !activeList )
LABEL_34:
    sub_B7076C(activeList, individualities);
  v33 = (RemovedBuffInfo_o *)activeList;
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    *((System_Collections_Generic_List_BattleBuffData_BuffData__o **)activeList + 2),
    v32);
  return v33;
}


void __fastcall BattleBuffData__syncLinkageBuffChangeParam(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *linkedArray,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v5; // x21
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *activeList; // x21
  void *passiveList; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v8; // x22
  Il2CppObject *v9; // x23
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleBuffData___c_c *v17; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v18; // x22
  BattleBuffData_o *v19; // x21
  struct BattleBuffData___c_StaticFields *v20; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__75_1; // x23
  Il2CppObject *v22; // x24
  struct BattleBuffData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  WarBoardUiData_SaveData_array *v30; // x0
  const MethodInfo *v31; // x4
  __int64 v32; // x8
  BattleBuffData_BuffData_array *v33; // x22
  unsigned __int64 v34; // x24
  BattleBuffData_BuffData_o *v35; // x23
  const MethodInfo *v36; // x4
  __int64 v37; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *reflectedBuffList; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_435542B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___69181968);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__75_0__);
    sub_B70694(&Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__75_1__);
    this = (BattleBuffData_o *)sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_435542B = 1;
  }
  reflectedBuffList = 0LL;
  if ( !linkedArray )
    goto LABEL_31;
  if ( !*(_QWORD *)&linkedArray->max_length )
    return;
  v5 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)linkedArray,
    (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___69181968);
  reflectedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v5;
  activeList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v4->fields.activeList;
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  passiveList = this[1].fields.passiveList;
  v8 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)passiveList + 13);
  if ( !v8 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      passiveList = BattleBuffData___c_TypeInfo->static_fields;
    }
    v9 = *(Il2CppObject **)passiveList;
    v8 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v8,
      v9,
      Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__75_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__75_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v8;
    sub_B70630(
      (BattleServantConfConponent_o *)&static_fields->__9__75_0,
      (System_Int32_array **)v8,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !activeList )
    goto LABEL_31;
  this = (BattleBuffData_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                               activeList,
                               (System_Predicate_T__o *)v8,
                               (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !this )
    goto LABEL_31;
  this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                               (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v17 = BattleBuffData___c_TypeInfo;
  v18 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v4->fields.passiveList;
  v19 = this;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v17 = BattleBuffData___c_TypeInfo;
  }
  v20 = v17->static_fields;
  _9__75_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v20->__9__75_1;
  if ( !_9__75_1 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v20 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__75_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__75_1,
      v22,
      Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__75_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v23 = BattleBuffData___c_TypeInfo->static_fields;
    v23->__9__75_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__75_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v23->__9__75_1,
      (System_Int32_array **)_9__75_1,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v18
    || (this = (BattleBuffData_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                     v18,
                                     (System_Predicate_T__o *)_9__75_1,
                                     (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
LABEL_31:
    sub_B7076C(this, linkedArray);
  }
  v30 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v32 = *(_QWORD *)&linkedArray->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = (BattleBuffData_BuffData_array *)v30;
    v34 = 0LL;
    do
    {
      if ( v34 >= (unsigned int)v32 )
      {
        v37 = sub_B70798(v30);
        sub_B70738(v37, 0LL);
      }
      v35 = linkedArray->m_Items[v34];
      BattleBuffData__syncLinkageBuffChangeParam_31730456(
        v4,
        v35,
        (BattleBuffData_BuffData_array *)v19,
        &reflectedBuffList,
        v31);
      BattleBuffData__syncLinkageBuffChangeParam_31730456(v4, v35, v33, &reflectedBuffList, v36);
      LODWORD(v32) = linkedArray->max_length;
      ++v34;
    }
    while ( (__int64)v34 < (int)v32 );
  }
}


void __fastcall BattleBuffData__syncLinkageBuffChangeParam_31730456(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *linkedBuff,
        BattleBuffData_BuffData_array *checkArray,
        System_Collections_Generic_List_BattleBuffData_BuffData__o **reflectedBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v8; // x22
  __int64 v9; // x8
  unsigned __int64 v10; // x25
  BattleBuffData_BuffData_o *v11; // x23
  int v12; // w24
  System_Int32_array *linkageTargetIndividualty; // x24
  System_Int32_array *LinkageIdArray; // x0
  const MethodInfo *v15; // x4
  __int64 v16; // x0

  v8 = this;
  if ( (byte_435542C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    this = (BattleBuffData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    byte_435542C = 1;
  }
  if ( !checkArray )
    goto LABEL_17;
  v9 = *(_QWORD *)&checkArray->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
        v16 = sub_B70798(this);
        sub_B70738(v16, 0LL);
      }
      this = (BattleBuffData_o *)*reflectedBuffList;
      if ( !*reflectedBuffList )
        break;
      v11 = checkArray->m_Items[v10];
      this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                   (WarBoardManager_TaskList_o *)v11,
                                   (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v11 )
          break;
        this = (BattleBuffData_o *)BattleBuffData_BuffData__IsFamilyBuff(v11, 0LL);
        if ( !linkedBuff )
          break;
        v12 = (int)this;
        this = (BattleBuffData_o *)BattleBuffData_BuffData__IsFamilyBuff(linkedBuff, 0LL);
        if ( ((v12 ^ (unsigned int)this) & 1) == 0 )
        {
          linkageTargetIndividualty = linkedBuff->fields.linkageTargetIndividualty;
          LinkageIdArray = BattleBuffData_BuffData__get_LinkageIdArray(v11, 0LL);
          this = (BattleBuffData_o *)Individuality__IsPartialMatchArray(linkageTargetIndividualty, LinkageIdArray, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v11->fields.turn = linkedBuff->fields.turn;
            v11->fields.count = linkedBuff->fields.count;
            this = (BattleBuffData_o *)*reflectedBuffList;
            if ( !*reflectedBuffList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            BattleBuffData__syncLinkageBuffChangeParam_31730456(v8, v11, checkArray, reflectedBuffList, v15);
          }
        }
      }
      LODWORD(v9) = checkArray->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        return;
    }
LABEL_17:
    sub_B7076C(this, linkedBuff);
  }
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__turnProgressing(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  BattleBuffData_o *v8; // x21
  struct BattleData_o *data; // x8
  int32_t v10; // w0
  const MethodInfo *v11; // x4

  v8 = this;
  if ( (byte_4355423 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B70694(&BattleBuffData_BuffData___TypeInfo);
    byte_4355423 = 1;
  }
  if ( !logic )
    goto LABEL_10;
  this = (BattleBuffData_o *)BattleLogic__get_BattleEvent(logic, 0LL);
  if ( !this )
    goto LABEL_10;
  this = (BattleBuffData_o *)((__int64 (__fastcall *)(BattleBuffData_o *, _QWORD, Il2CppClass *))this->klass[2]._1.castClass)(
                               this,
                               (unsigned int)svtUniqueId,
                               this->klass[2]._1.declaringType);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    data = logic->fields.data;
    if ( data )
    {
      this = (BattleBuffData_o *)data->fields.battleEvent;
      if ( this )
      {
        v10 = ((__int64 (__fastcall *)(BattleBuffData_o *, _QWORD, void *))this->klass[2]._1.typeMetadataHandle)(
                this,
                (unsigned int)svtUniqueId,
                this->klass[2]._1.interopData);
        return BattleBuffData__CommonTurnProgressing(v8, logic, isEndEnemyTurn, v10, v11);
      }
    }
LABEL_10:
    sub_B7076C(this, logic);
  }
  return (BattleBuffData_BuffData_array *)sub_B706AC(BattleBuffData_BuffData___TypeInfo, 0LL);
}


void __fastcall BattleBuffData__turnProgressingIncrease(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_o *PassiveList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v7; // x8
  BattleBuffData_o *v8; // x20
  unsigned __int64 v9; // x21
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v11; // x8
  BattleBuffData_o *v12; // x19
  unsigned __int64 v13; // x20
  __int64 v14; // x0

  PassiveList = (BattleBuffData_o *)BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_13;
  v7 = PassiveList->fields.passiveList;
  v8 = PassiveList;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    while ( v9 < (unsigned int)v7 )
    {
      BattleBuffData__turnProgressingIncreaseCalc(
        PassiveList,
        *((BattleBuffData_BuffData_o **)&v8->fields.activeList + v9),
        v6);
      LODWORD(v7) = v8->fields.passiveList;
      if ( (__int64)++v9 >= (int)v7 )
        goto LABEL_6;
    }
LABEL_12:
    v14 = sub_B70798(PassiveList);
    sub_B70738(v14, 0LL);
  }
LABEL_6:
  PassiveList = (BattleBuffData_o *)BattleBuffData__getActiveList(this, 1, v6);
  if ( !PassiveList )
LABEL_13:
    sub_B7076C(PassiveList, v5);
  v11 = PassiveList->fields.passiveList;
  v12 = PassiveList;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( v13 < (unsigned int)v11 )
    {
      BattleBuffData__turnProgressingIncreaseCalc(
        PassiveList,
        *((BattleBuffData_BuffData_o **)&v12->fields.activeList + v13),
        v10);
      LODWORD(v11) = v12->fields.passiveList;
      if ( (__int64)++v13 >= (int)v11 )
        return;
    }
    goto LABEL_12;
  }
}


void __fastcall BattleBuffData__turnProgressingIncreaseCalc(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t paramAdd; // w9
  int32_t paramMax; // w8
  int32_t v5; // w10

  if ( !buff )
    sub_B7076C(this, 0LL);
  paramAdd = buff->fields.paramAdd;
  if ( paramAdd )
  {
    paramMax = buff->fields.paramMax;
    v5 = buff->fields.param + paramAdd;
    buff->fields.param = v5;
    if ( paramAdd >= 1 )
    {
      if ( paramMax >= v5 )
        return;
      goto LABEL_5;
    }
    if ( paramMax > v5 )
LABEL_5:
      buff->fields.param = paramMax;
  }
}


void __fastcall BattleBuffData__updateAuraBuffList(BattleBuffData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4355416 & 1) == 0 )
  {
    sub_B70694(&Method_BattleBuffData__updateAuraBuffList_b__39_0__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    byte_4355416 = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  v4 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleBuffData__updateAuraBuffList_b__39_0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !auraBuffList )
    sub_B7076C(v5, v6);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)auraBuffList,
    (System_Predicate_T__o *)v4,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
}


int32_t __fastcall BattleBuffData__useGuts(
        BattleBuffData_o *this,
        int32_t maxhp,
        System_String_o **motionName,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  _BYTE *BuffSuccessfulIndividual; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x6
  BattleBuffData_o *BuffList_31751548; // x0
  const MethodInfo *v16; // x2
  _BYTE *v17; // x21
  int32_t v18; // w8
  _BYTE *v19; // x22
  System_String_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t v27; // w20
  bool v28; // w0
  unsigned __int64 v29; // x8
  __int64 v31; // x0

  if ( (byte_435544E & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_435544E = 1;
  }
  *motionName = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)motionName,
    0LL,
    (System_String_array **)motionName,
    (System_String_array **)checkIndividualitiesDataArray,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !checkIndividualitiesDataArray )
    goto LABEL_16;
  if ( !checkIndividualitiesDataArray->max_length )
  {
    v31 = sub_B70798(BuffSuccessfulIndividual);
    sub_B70738(v31, 0LL);
  }
  BuffList_31751548 = (BattleBuffData_o *)BattleBuffData__getBuffList_31751548(
                                            this,
                                            126,
                                            checkIndividualitiesDataArray->m_Items[0],
                                            1,
                                            1,
                                            0LL,
                                            v14);
  BuffSuccessfulIndividual = BattleBuffData__getBuffSuccessfulIndividual(
                               BuffList_31751548,
                               (BattleBuffData_BuffData_array *)BuffList_31751548,
                               v16);
  if ( !BuffSuccessfulIndividual )
    goto LABEL_16;
  v17 = BuffSuccessfulIndividual;
  if ( BuffSuccessfulIndividual[385] )
    return 0;
  BuffSuccessfulIndividual = BattleBuffData__get_buffMst(this, v13);
  if ( !BuffSuccessfulIndividual
    || (BuffSuccessfulIndividual = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)BuffSuccessfulIndividual,
                                     *((_DWORD *)v17 + 4),
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_16:
    sub_B7076C(BuffSuccessfulIndividual, v13);
  }
  v19 = BuffSuccessfulIndividual;
  v20 = BuffEntity__GetMotionName((BuffEntity_o *)BuffSuccessfulIndividual, 0LL);
  *motionName = v20;
  sub_B70630((BattleServantConfConponent_o *)motionName, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  v27 = *((_DWORD *)v19 + 5);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v28 = BuffList__CheckType(104, v27, 0LL);
  v18 = *((_DWORD *)v17 + 7);
  if ( v28 )
  {
    v29 = (unsigned __int128)(v18 * (__int64)maxhp * (__int128)0x20C49BA5E353F7CFLL) >> 64;
    return (v29 >> 7) + (v29 >> 63);
  }
  return v18;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__usedProgressing(BattleBuffData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  const MethodInfo *v5; // x2
  void *PassiveList; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v10; // x1
  System_Collections_Generic_IEnumerable_T__o *ActiveArrayNoActAfterUsed; // x0
  const MethodInfo *v12; // x2
  int v13; // w8
  void *v14; // x21
  unsigned int v15; // w24
  int32_t v16; // w23
  int32_t count; // w8
  bool v18; // vf
  int v19; // w8
  BattleBuffData_BuffData_o *v20; // x22
  __int64 v22; // x0

  if ( (byte_4355430 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355430 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v5);
  if ( !v4 )
    goto LABEL_25;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v8);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveArrayNoActAfterUsed = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveArrayNoActAfterUsed(
                                                                               this,
                                                                               v10);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    ActiveArrayNoActAfterUsed,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                  (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !PassiveList )
    goto LABEL_25;
  v13 = *((_DWORD *)PassiveList + 6);
  v14 = PassiveList;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v22 = sub_B70798(PassiveList);
        sub_B70738(v22, 0LL);
      }
      v20 = (BattleBuffData_BuffData_o *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !v20 )
        break;
      if ( !v20->fields._isRemove && v20->fields.isDecide )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v7);
        if ( !PassiveList )
          break;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        v20->fields.buffId,
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          break;
        v16 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__CheckGutsType(v16, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) == 0 )
        {
          if ( v20->fields.isUse )
          {
            count = v20->fields.count;
            v18 = __OFSUB__(count, 1);
            v19 = count - 1;
            if ( v19 < 0 == v18 )
            {
              v20->fields.count = v19;
              PassiveList = (void *)BattleBuffData_BuffData__IslinkageTarget(v20, 0LL);
              if ( ((unsigned __int8)PassiveList & 1) != 0 )
              {
                if ( !v3 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v3,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
              }
            }
          }
          v20->fields.isUse = 0;
          v20->fields.isDecide = 0;
        }
      }
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        return BattleBuffData__RemoveProgressingBuffList(
                 this,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3,
                 v12);
    }
LABEL_25:
    sub_B7076C(PassiveList, v7);
  }
  return BattleBuffData__RemoveProgressingBuffList(
           this,
           (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3,
           v12);
}


void __fastcall BattleBuffData__usedProgressingGuts(BattleBuffData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  const MethodInfo *v5; // x2
  void *PassiveList; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v10; // x2
  int v11; // w8
  void *v12; // x21
  unsigned int v13; // w24
  int32_t v14; // w23
  int32_t count; // w8
  bool v16; // vf
  int v17; // w8
  BattleBuffData_BuffData_o *v18; // x22
  __int64 v19; // x0

  if ( (byte_4355432 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4355432 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v5);
  if ( !v4 )
    goto LABEL_25;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v8);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    ActiveList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                  (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !PassiveList )
    goto LABEL_25;
  v11 = *((_DWORD *)PassiveList + 6);
  v12 = PassiveList;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
        v19 = sub_B70798(PassiveList);
        sub_B70738(v19, 0LL);
      }
      v18 = (BattleBuffData_BuffData_o *)*((_QWORD *)v12 + (int)v13 + 4);
      if ( !v18 )
        break;
      if ( !v18->fields._isRemove && v18->fields.isDecide )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v7);
        if ( !PassiveList )
          break;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        v18->fields.buffId,
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          break;
        v14 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__CheckGutsType(v14, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
        {
          if ( v18->fields.isUse )
          {
            count = v18->fields.count;
            v16 = __OFSUB__(count, 1);
            v17 = count - 1;
            if ( v17 < 0 == v16 )
            {
              v18->fields.count = v17;
              PassiveList = (void *)BattleBuffData_BuffData__IslinkageTarget(v18, 0LL);
              if ( ((unsigned __int8)PassiveList & 1) != 0 )
              {
                if ( !v3 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v3,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
              }
            }
          }
          v18->fields.isUse = 0;
          v18->fields.isDecide = 0;
        }
      }
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        goto LABEL_24;
    }
LABEL_25:
    sub_B7076C(PassiveList, v7);
  }
LABEL_24:
  BattleBuffData__RemoveProgressingBuffList(this, (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3, v10);
}


void __fastcall BattleBuffData_ActValueRequest___ctor(
        BattleBuffData_ActValueRequest_o *this,
        int32_t buffAction,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualitiesData,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BuffAction_k__BackingField = buffAction;
  this->fields._CheckIndividualitiesData_k__BackingField = checkIndividualitiesData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._CheckIndividualitiesData_k__BackingField,
    (System_Int32_array **)checkIndividualitiesData,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._BuffIf_k__BackingField = buffIf;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._BuffIf_k__BackingField,
    (System_Int32_array **)buffIf,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


BuffList_ActInfo_o *__fastcall BattleBuffData_ActValueRequest__get_ActInfo(
        BattleBuffData_ActValueRequest_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_actInfo; // x19
  System_Int32_array **actInfo; // x21
  int32_t BuffAction_k__BackingField; // w20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_435134E & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_435134E = 1;
  }
  p_actInfo = (BattleServantConfConponent_o *)&this->fields.actInfo;
  actInfo = (System_Int32_array **)this->fields.actInfo;
  if ( !actInfo )
  {
    BuffAction_k__BackingField = this->fields._BuffAction_k__BackingField;
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    actInfo = (System_Int32_array **)BuffList__getActInfo(BuffAction_k__BackingField, 0LL, 0LL);
    p_actInfo->klass = (BattleServantConfConponent_c *)actInfo;
    sub_B70630(p_actInfo, actInfo, v6, v7, v8, v9, v10, v11);
  }
  return (BuffList_ActInfo_o *)actInfo;
}


int32_t __fastcall BattleBuffData_ActValueRequest__get_BuffAction(
        BattleBuffData_ActValueRequest_o *this,
        const MethodInfo *method)
{
  return this->fields._BuffAction_k__BackingField;
}


BuffInterface_o *__fastcall BattleBuffData_ActValueRequest__get_BuffIf(
        BattleBuffData_ActValueRequest_o *this,
        const MethodInfo *method)
{
  return this->fields._BuffIf_k__BackingField;
}


BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleBuffData_ActValueRequest__get_CheckIndividualitiesData(
        BattleBuffData_ActValueRequest_o *this,
        const MethodInfo *method)
{
  return this->fields._CheckIndividualitiesData_k__BackingField;
}


void __fastcall BattleBuffData_ActValueResponse___ctor(
        BattleBuffData_ActValueResponse_o *this,
        BattleBuffData_ActValueRequest_o *actValueRequest,
        int32_t value,
        int32_t upperParam,
        int32_t lowerParam,
        System_String_o *text,
        const MethodInfo *method)
{
  BattleBuffData_ActValueResponse_o *v12; // x24
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.ActValueRequest = actValueRequest;
  sub_B70630(
    (BattleServantConfConponent_o *)&v12->fields,
    (System_Int32_array **)actValueRequest,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v12->fields._Text_k__BackingField = text;
  v12 = (BattleBuffData_ActValueResponse_o *)((char *)v12 + 40);
  v12[-1].fields._LowerParam_k__BackingField = value;
  *(&v12[-1].fields._LowerParam_k__BackingField + 1) = upperParam;
  LODWORD(v12[-1].fields._Text_k__BackingField) = lowerParam;
  sub_B70630((BattleServantConfConponent_o *)v12, (System_Int32_array **)text, v19, v20, v21, v22, v23, v24);
}


int32_t __fastcall BattleBuffData_ActValueResponse__GetClampedValue(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  BattleBuffData_ActValueRequest_o *ActValueRequest; // x0
  BuffList_ActInfo_o *v4; // x20
  int v5; // w21
  int32_t LowerParam_k__BackingField; // w22
  int32_t v7; // w21

  if ( (byte_435134F & 1) == 0 )
  {
    sub_B70694(&System_Math_TypeInfo);
    byte_435134F = 1;
  }
  ActValueRequest = this->fields.ActValueRequest;
  if ( !ActValueRequest
    || (ActValueRequest = (BattleBuffData_ActValueRequest_o *)BattleBuffData_ActValueRequest__get_ActInfo(
                                                                ActValueRequest,
                                                                method)) == 0LL )
  {
    sub_B7076C(ActValueRequest, method);
  }
  v4 = (BuffList_ActInfo_o *)ActValueRequest;
  v5 = LODWORD(ActValueRequest->fields.actInfo) + this->fields._Value_k__BackingField;
  if ( BuffList_ActInfo__isLowerLimit((BuffList_ActInfo_o *)ActValueRequest, 0LL) )
  {
    LowerParam_k__BackingField = this->fields._LowerParam_k__BackingField;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v5 = System_Math__Max_45601072(LowerParam_k__BackingField, v5, 0LL);
  }
  v7 = v5 - v4->fields.baseValue;
  if ( !BuffList_ActInfo__isUpperLimit(v4, 0LL) )
    return v7;
  if ( this->fields._UpperParam_k__BackingField >= v7 )
    return v7;
  return this->fields._UpperParam_k__BackingField;
}


void __fastcall BattleBuffData_ActValueResponse__Merge(
        BattleBuffData_ActValueResponse_o *this,
        BattleBuffData_ActValueResponse_o *response,
        const MethodInfo *method)
{
  BattleBuffData_ActValueResponse_o *v4; // x20
  int32_t UpperParam_k__BackingField; // w21
  int32_t v6; // w22

  v4 = this;
  if ( (byte_4351350 & 1) == 0 )
  {
    this = (BattleBuffData_ActValueResponse_o *)sub_B70694(&System_Math_TypeInfo);
    byte_4351350 = 1;
  }
  if ( !response )
    sub_B7076C(this, response);
  UpperParam_k__BackingField = v4->fields._UpperParam_k__BackingField;
  v6 = response->fields._UpperParam_k__BackingField;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4->fields._UpperParam_k__BackingField = System_Math__Max_45601072(UpperParam_k__BackingField, v6, 0LL);
  v4->fields._LowerParam_k__BackingField = System_Math__Min_45556056(
                                             v4->fields._LowerParam_k__BackingField,
                                             response->fields._LowerParam_k__BackingField,
                                             0LL);
  v4->fields._Value_k__BackingField += response->fields._Value_k__BackingField;
}


int32_t __fastcall BattleBuffData_ActValueResponse__get_LowerParam(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  return this->fields._LowerParam_k__BackingField;
}


System_String_o *__fastcall BattleBuffData_ActValueResponse__get_Text(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  return this->fields._Text_k__BackingField;
}


int32_t __fastcall BattleBuffData_ActValueResponse__get_UpperParam(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  return this->fields._UpperParam_k__BackingField;
}


int32_t __fastcall BattleBuffData_ActValueResponse__get_Value(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  return this->fields._Value_k__BackingField;
}


void __fastcall BattleBuffData_ActValueResponse__set_LowerParam(
        BattleBuffData_ActValueResponse_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._LowerParam_k__BackingField = value;
}


void __fastcall BattleBuffData_ActValueResponse__set_UpperParam(
        BattleBuffData_ActValueResponse_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._UpperParam_k__BackingField = value;
}


void __fastcall BattleBuffData_ActValueResponse__set_Value(
        BattleBuffData_ActValueResponse_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Value_k__BackingField = value;
}


void __fastcall BattleBuffData_BuffData___ctor(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  this->fields.userCommandCodeId = -1LL;
  this->fields.buffRate = 1000;
  this->fields.progressTurnCond = 1;
  *(_QWORD *)&this->fields.counterLv = 0x100000001LL;
  this->fields.masterCommandCodeId = -1;
  *(_QWORD *)&this->fields.commandAssistId = -1LL;
  this->fields.displayPriority = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData_BuffData__CheckCond(
        BattleBuffData_BuffData_o *this,
        BattleBuffData_o *svtBuff,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRect,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+8h] [xbp-18h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-4h] BYREF

  plusMinus = 0;
  if ( !checkIndividualities )
    sub_B7076C(this, svtBuff);
  return BattleBuffData_BuffData__CheckCond_24119088(
           this,
           svtBuff,
           actInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           isRect,
           &plusMinus,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           v7);
}


bool __fastcall BattleBuffData_BuffData__CheckCond_24119088(
        BattleBuffData_BuffData_o *this,
        BattleBuffData_o *svtBuff,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        bool isRect,
        int32_t *plusMinus,
        System_Int32_array *selfIndvAll,
        System_Int32_array *opIndvAll,
        const MethodInfo *method)
{
  _BOOL8 isCommandCardBuff; // x0
  __int64 v19; // x1

  *plusMinus = 0;
  if ( this->fields.userCommandCodeId >= 1 && !this->fields.isActiveCC )
    return 0;
  isCommandCardBuff = BattleBuffData_BuffData__isCommandCardBuff(this, (const MethodInfo *)svtBuff);
  if ( isCommandCardBuff && !this->fields.isActiveCC )
    return 0;
  if ( this->fields.commandAssistId >= 1 && !this->fields.isActiveCA )
    return 0;
  if ( !svtBuff )
    sub_B7076C(isCommandCardBuff, v19);
  return BattleBuffData__checkIndiviuality_31764832(
           svtBuff,
           actInfo,
           this,
           selfIndv,
           opIndv,
           selfIndvAll,
           opIndvAll,
           plusMinus,
           0LL)
      && BattleBuffData__checkBuffSuccessful(svtBuff, this, isRect, 0LL);
}


bool __fastcall BattleBuffData_BuffData__CheckCond_24119328(
        BattleBuffData_BuffData_o *this,
        BattleBuffData_o *svtBuff,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        bool isRect,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+8h] [xbp-18h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-4h] BYREF

  plusMinus = 0;
  return BattleBuffData_BuffData__CheckCond_24119088(
           this,
           svtBuff,
           actInfo,
           selfIndv,
           opIndv,
           isRect,
           &plusMinus,
           0LL,
           0LL,
           v8);
}


bool __fastcall BattleBuffData_BuffData__CheckUnsubState(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  unsigned int state; // w8
  _BOOL4 v3; // w0

  state = this->fields.state;
  if ( (state & 0x80040) != 0 )
    LOBYTE(v3) = 1;
  else
    return (state >> 23) & 1;
  return v3;
}


bool __fastcall BattleBuffData_BuffData__CheckUnsubStateAi(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.state) >> 3) & 1;
}


bool __fastcall BattleBuffData_BuffData__EqualBuffType(
        BattleBuffData_BuffData_o *this,
        BuffMaster_o *buffMst,
        int32_t targetType,
        const MethodInfo *method)
{
  if ( !buffMst )
    sub_B7076C(this, 0LL);
  return BuffMaster__GetBuffType(buffMst, this->fields.buffId, -1, 0LL) == targetType;
}


bool __fastcall BattleBuffData_BuffData__FixedUse(
        BattleBuffData_BuffData_o *this,
        BattleBuffData_o *buffData,
        bool isUseBuff,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattleBuffData_IntervalData_o *intervalData; // x0
  _BOOL8 v7; // x0

  intervalData = this->fields.intervalData;
  if ( intervalData )
    LOBYTE(v7) = BattleBuffData_IntervalData__Use(intervalData, buffData, this, isUseBuff, v4);
  else
    return isUseBuff;
  return v7;
}


int32_t __fastcall BattleBuffData_BuffData__GetDisplayPriority(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  int32_t displayPriority; // w20
  BuffEntity_o *Entity; // x0

  displayPriority = this->fields.displayPriority;
  if ( displayPriority == -1 )
  {
    if ( this->fields.passive )
      displayPriority = 1000;
    else
      displayPriority = 0;
    Entity = BattleBuffData_BuffData__get_Entity(this, method);
    if ( Entity )
      displayPriority = BuffEntity__GetDisplayPriority(Entity, displayPriority, 0LL);
    this->fields.displayPriority = displayPriority;
  }
  return displayPriority;
}


BuffDataExtension_GeneralParamAccessors_o *__fastcall BattleBuffData_BuffData__GetGeneralParamOwner(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  BuffEntity_o *Entity; // x0
  __int64 v4; // x1
  BuffDataExtension_GeneralParamContinueFunction_o *v5; // x19

  if ( (byte_4351351 & 1) == 0 )
  {
    sub_B70694(&BuffDataExtension_GeneralParamContinueFunction_TypeInfo);
    byte_4351351 = 1;
  }
  Entity = BattleBuffData_BuffData__get_Entity(this, method);
  if ( !Entity )
    sub_B7076C(0LL, v4);
  if ( Entity->fields.type != 194 )
    return 0LL;
  v5 = (BuffDataExtension_GeneralParamContinueFunction_o *)sub_B70764(BuffDataExtension_GeneralParamContinueFunction_TypeInfo);
  BuffDataExtension_GeneralParamContinueFunction___ctor(v5, 0LL);
  return (BuffDataExtension_GeneralParamAccessors_o *)v5;
}


System_Int32_array *__fastcall BattleBuffData_BuffData__GetIndividualty(
        BattleBuffData_BuffData_o *this,
        bool IsIncludeIgnoreIndividuality,
        bool isIgnoreIndivUnreleaseable,
        bool isAiCheck,
        const MethodInfo *method)
{
  int32_t state; // w8
  System_Int32_array *v10; // x20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v15; // x21
  struct System_Int32_array *addIndividualty; // x8
  __int64 v17; // x8

  if ( (byte_4351353 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351353 = 1;
  }
  state = this->fields.state;
  if ( (state & 0x10000) != 0 && !IsIncludeIgnoreIndividuality )
    return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  if ( isIgnoreIndivUnreleaseable )
  {
    if ( isAiCheck )
    {
      if ( (state & 0x80000) != 0 )
        return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
    }
    else if ( (state & 0x880040) != 0 )
    {
      return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
    }
  }
  if ( !this->fields._isRemove )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   this->fields.buffId,
                   (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !Entity )
          return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
        v15 = Entity;
        Instance = (DataManager_o *)BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)this->fields.addIndividualty,
                                      0LL);
        v10 = *(System_Int32_array **)&v15->fields.bannerId;
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v10;
        if ( v10 )
        {
          addIndividualty = this->fields.addIndividualty;
          if ( addIndividualty )
          {
            Instance = (DataManager_o *)sub_B706AC(int___TypeInfo, addIndividualty->max_length + v10->max_length);
            if ( *(_QWORD *)&v15->fields.bannerId )
            {
              v10 = (System_Int32_array *)Instance;
              System_Array__CopyTo(*(System_Array_o **)&v15->fields.bannerId, (System_Array_o *)Instance, 0, 0LL);
              v17 = *(_QWORD *)&v15->fields.bannerId;
              if ( v17 )
              {
                Instance = (DataManager_o *)this->fields.addIndividualty;
                if ( Instance )
                {
                  System_Array__CopyTo((System_Array_o *)Instance, (System_Array_o *)v10, *(_DWORD *)(v17 + 24), 0LL);
                  return v10;
                }
              }
            }
          }
        }
      }
    }
    sub_B7076C(Instance, v13);
  }
  return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
}


int32_t __fastcall BattleBuffData_BuffData__GetUniqueId(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.addOrder;
}


bool __fastcall BattleBuffData_BuffData__HasInterval(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  intervalData = this->fields.intervalData;
  if ( !intervalData )
    return 0;
  if ( intervalData->fields.intervalTurn <= 0 )
    return intervalData->fields.intervalCount > 0;
  return 1;
}


bool __fastcall BattleBuffData_BuffData__IsActiveCommandAssist(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  return this->fields.commandAssistId >= 1 && this->fields.isActiveCA;
}


bool __fastcall BattleBuffData_BuffData__IsCommandAssistBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData_BuffData__IsCompletelyExpired(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return !this->fields.turn && !this->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData_BuffData__IsFamilyBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.state) >> 6) & 1;
}


bool __fastcall BattleBuffData_BuffData__IsMineCommandCode(
        BattleBuffData_BuffData_o *this,
        int64_t id,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeId == id;
}


bool __fastcall BattleBuffData_BuffData__IsPermanentSleep(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1

  if ( (byte_4351358 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4351358 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          this->fields.buffId,
                                                                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  }
  return *(&Master_WarQuestSelectionMaster->fields._MasterKind_k__BackingField + 1) == 32
      && BuffEntity__getDamageRelease((BuffEntity_o *)Master_WarQuestSelectionMaster, 0LL) == -1;
}


bool __fastcall BattleBuffData_BuffData__IsUnSubStateWhenContinue(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  return (HIBYTE(this->fields.state) >> 1) & 1;
}


bool __fastcall BattleBuffData_BuffData__IsWarBoardNotAttacked(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  BuffMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1

  if ( (byte_4351359 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4351359 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v4);
  return BuffMaster__GetBuffType(Master_WarQuestSelectionMaster, this->fields.buffId, -1, 0LL) == 183;
}


bool __fastcall BattleBuffData_BuffData__IslinkageTarget(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.linkageTargetIndividualty != 0LL;
}


void __fastcall BattleBuffData_BuffData__RegisterGeneralParams(
        BattleBuffData_BuffData_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  struct BuffDataExtension_GeneralParamAccessors_o *GeneralParamOwner; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct BuffDataExtension_GeneralParamAccessors_o *v18; // x0
  struct System_Int32_array *v19; // x1
  struct System_Int32_array **p_generalParams; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct BuffDataExtension_GeneralParamAccessors_o *v27; // x0
  System_Int32_array **v28; // x1

  GeneralParamOwner = BattleBuffData_BuffData__GetGeneralParamOwner(this, (const MethodInfo *)dataVals);
  this->fields.generalParamOwner = GeneralParamOwner;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.generalParamOwner,
    (System_Int32_array **)GeneralParamOwner,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v18 = this->fields.generalParamOwner;
  if ( v18 )
    v19 = (struct System_Int32_array *)((__int64 (__fastcall *)(struct BuffDataExtension_GeneralParamAccessors_o *, DataVals_o *, Il2CppMethodPointer))v18->klass->vtable._4_unknown.method)(
                                         v18,
                                         dataVals,
                                         v18->klass->vtable._5_get_NotExecFunctionIfKeepAlive.methodPtr);
  else
    v19 = 0LL;
  p_generalParams = &this->fields.generalParams;
  this->fields.generalParams = v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.generalParams,
    (System_Int32_array **)v19,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v27 = this->fields.generalParamOwner;
  if ( v27 )
  {
    v28 = (System_Int32_array **)*p_generalParams;
    v27->fields.generalParams = *p_generalParams;
    sub_B70630((BattleServantConfConponent_o *)&v27->fields, v28, v21, v22, v23, v24, v25, v26);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData_BuffData__RemoveBuffCond(
        BattleBuffData_BuffData_o *this,
        int32_t removeTo,
        int32_t removeCnt,
        System_Int32_array *individualities,
        bool isForceSubState,
        const MethodInfo *method)
{
  System_Int32_array *Individualty; // x0
  int32_t state; // w8
  bool result; // w0

  result = 0;
  if ( (!removeTo || removeCnt < removeTo) && (this->fields.state & 1) == 0 )
  {
    Individualty = BattleBuffData_BuffData__GetIndividualty(this, 0, 0, 0, (const MethodInfo *)isForceSubState);
    if ( Individuality__CheckIndividualities(Individualty, individualities, 0LL) )
    {
      state = this->fields.state;
      if ( (state & 0x10000) == 0
        && !this->fields._isRemove
        && (state & 0x800000) == 0
        && ((state & 0x80000) == 0 || isForceSubState) )
      {
        return 1;
      }
    }
  }
  return result;
}


void __fastcall BattleBuffData_BuffData__RevertUnused(
        BattleBuffData_BuffData_o *this,
        bool isUnused,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  this->fields.isUse = 0;
  this->fields.isDecide = 0;
  if ( isUnused )
  {
    intervalData = this->fields.intervalData;
    if ( intervalData )
      intervalData->fields.updateTiming = 0;
  }
}


void __fastcall BattleBuffData_BuffData__SetBuffNoActState(
        BattleBuffData_BuffData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v5; // x21
  bool v6; // w0
  int32_t state; // w8
  int v8; // w9
  unsigned int v9; // w8

  if ( (byte_4351357 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_BattleServantData____69235496);
    sub_B70694(&Method_BattleBuffData_BuffData__SetBuffNoActState_b__142_0__);
    sub_B70694(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B70694(&System_Func_BattleServantData__bool__TypeInfo);
    byte_4351357 = 1;
  }
  v5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleBuffData_BuffData__SetBuffNoActState_b__142_0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleServantData__bool___ctor__);
  v6 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)servantArray,
         (System_Func_T__bool__o *)v5,
         (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_BattleServantData____69235496);
  state = this->fields.state;
  v8 = state | 0x200000;
  v9 = state & 0xFFDFFFFF;
  if ( !v6 )
    v9 = v8;
  this->fields.state = v9;
}


void __fastcall BattleBuffData_BuffData__SetIntervalOtherTiming(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  intervalData = this->fields.intervalData;
  if ( intervalData )
    intervalData->fields.updateTiming = 2;
}


void __fastcall BattleBuffData_BuffData__TryExtendLife(
        BattleBuffData_BuffData_o *this,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  if ( !isEndEnemyTurn && !this->fields.turn && this->fields.isDelayRemoveIfExpiredOnPlayerTurn )
    this->fields._IsExtendingLife_k__BackingField = 1;
}


bool __fastcall BattleBuffData_BuffData__UpdateInterval(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_IntervalData_o *intervalData; // x0

  intervalData = this->fields.intervalData;
  if ( intervalData )
    LOBYTE(intervalData) = BattleBuffData_IntervalData__Update(intervalData, this, v2);
  return (char)intervalData;
}


bool __fastcall BattleBuffData_BuffData__UpdateIntervalCurrent(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleBuffData_IntervalData_o *intervalData; // x0

  intervalData = this->fields.intervalData;
  return intervalData
      && intervalData->fields.updateTiming == 1
      && BattleBuffData_IntervalData__Update(intervalData, this, v2);
}


bool __fastcall BattleBuffData_BuffData___SetBuffNoActState_b__142_0(
        BattleBuffData_BuffData_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B7076C(this, 0LL);
  return svt->fields.uniqueId == this->fields.onPartyUniqueId;
}


bool __fastcall BattleBuffData_BuffData__checkAct(
        BattleBuffData_BuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8

  if ( isCheckInterval )
  {
    intervalData = this->fields.intervalData;
    if ( intervalData )
    {
      if ( intervalData->fields.intervalTurn > 0 || intervalData->fields.intervalCount > 0 )
        return 0;
    }
  }
  state = this->fields.state;
  return (state & 0x24011) == 0 && (state & 0x200000) == 0;
}


bool __fastcall BattleBuffData_BuffData__checkProgressTurn(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return (this->fields.state & 1) == 0 && this->fields.turn > 0;
}


int32_t __fastcall BattleBuffData_BuffData__checkRelationOrder(
        BattleBuffData_BuffData_o *this,
        BattleBuffData_BuffData_o *optBuff,
        bool isAttack,
        const MethodInfo *method)
{
  struct BattleBuffData_RelationOverwriteData_o *relationOverwrite; // x8
  struct BattleBuffData_RelationOverwriteData_o *v5; // x9
  __int64 v6; // x10
  int32_t v7; // w8

  relationOverwrite = this->fields.relationOverwrite;
  if ( !relationOverwrite )
  {
    if ( optBuff )
      return this->fields.addOrder - optBuff->fields.addOrder;
LABEL_11:
    sub_B7076C(this, optBuff);
  }
  if ( !optBuff )
    goto LABEL_11;
  v5 = optBuff->fields.relationOverwrite;
  if ( !v5 )
    return this->fields.addOrder - optBuff->fields.addOrder;
  v6 = 24LL;
  if ( isAttack )
    v6 = 20LL;
  v7 = *(_DWORD *)((char *)&v5->klass + v6) - *(_DWORD *)((char *)&relationOverwrite->klass + v6);
  if ( !v7 )
    return this->fields.addOrder - optBuff->fields.addOrder;
  return v7;
}


bool __fastcall BattleBuffData_BuffData__checkState(
        BattleBuffData_BuffData_o *this,
        int32_t stateenum,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.state & stateenum) < 0) ^ v3 | ((this->fields.state & stateenum) == 0));
}


int32_t __fastcall BattleBuffData_BuffData__get_DispTurn(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  int32_t turn; // w8
  int v3; // w8

  turn = this->fields.turn;
  if ( turn + 1 >= 0 )
    v3 = turn + 1;
  else
    v3 = turn + 2;
  return v3 >> 1;
}


BuffEntity_o *__fastcall BattleBuffData_BuffData__get_Entity(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  struct BuffEntity_o *cachedEntity; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4351352 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4351352 = 1;
  }
  cachedEntity = this->fields.cachedEntity;
  if ( !cachedEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B7076C(0LL, v5);
    if ( this->fields._isRemove )
      v6 = 400LL;
    else
      v6 = 16LL;
    cachedEntity = (struct BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            Master_WarQuestSelectionMaster,
                                            *(_DWORD *)((char *)&this->klass + v6),
                                            (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this->fields.cachedEntity = cachedEntity;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.cachedEntity,
      (System_Int32_array **)cachedEntity,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  return cachedEntity;
}


bool __fastcall BattleBuffData_BuffData__get_ExistChangeBgm(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.changeBgmData != 0LL;
}


bool __fastcall BattleBuffData_BuffData__get_ExistDelProc(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.delAfterProcType != 0;
}


System_Int32_array *__fastcall BattleBuffData_BuffData__get_FamilyLinkageIdArray(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  if ( (this->fields.state & 0x400000) != 0 )
    return this->fields.familyLinkageIds;
  else
    return 0LL;
}


System_Int32_array *__fastcall BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  if ( (this->fields.state & 0x400000) != 0 )
    return this->fields.linkageTargetIndividualty;
  else
    return 0LL;
}


BuffDataExtension_GeneralParamAccessors_o *__fastcall BattleBuffData_BuffData__get_GeneralParamOwner(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  struct BuffDataExtension_GeneralParamAccessors_o **p_generalParamOwner; // x19
  const MethodInfo *v4; // x1
  struct BuffDataExtension_GeneralParamAccessors_o *GeneralParamOwner; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct BuffDataExtension_GeneralParamAccessors_o *v18; // x0
  System_Int32_array **generalParams; // x1

  p_generalParamOwner = &this->fields.generalParamOwner;
  if ( !this->fields.generalParamOwner
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.generalParams, 0LL) )
  {
    GeneralParamOwner = BattleBuffData_BuffData__GetGeneralParamOwner(this, v4);
    this->fields.generalParamOwner = GeneralParamOwner;
    sub_B70630(
      (BattleServantConfConponent_o *)p_generalParamOwner,
      (System_Int32_array **)GeneralParamOwner,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v18 = this->fields.generalParamOwner;
    if ( v18 )
    {
      generalParams = (System_Int32_array **)this->fields.generalParams;
      v18->fields.generalParams = (struct System_Int32_array *)generalParams;
      sub_B70630((BattleServantConfConponent_o *)&v18->fields, generalParams, v12, v13, v14, v15, v16, v17);
    }
  }
  return *p_generalParamOwner;
}


bool __fastcall BattleBuffData_BuffData__get_IsExtendingLife(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields._IsExtendingLife_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_BuffData__get_LinkageIdArray(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 120LL;
  if ( (this->fields.state & 0x400000) != 0 )
    v2 = 296LL;
  return *(System_Int32_array **)((char *)&this->klass + v2);
}


int32_t __fastcall BattleBuffData_BuffData__get_RemoveDeadActorId(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isRemoveFieldBuffActorDeath )
    return this->fields.actorId;
  else
    return -1;
}


bool __fastcall BattleBuffData_BuffData__get_isRemove(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields._isRemove;
}


int32_t __fastcall BattleBuffData_BuffData__get_removeBuffId(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields._removeBuffId;
}


bool __fastcall BattleBuffData_BuffData__isActiveCommandCode(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.userCommandCodeId >= 1 && this->fields.isActiveCC;
}


bool __fastcall BattleBuffData_BuffData__isCommandCardBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  _DWORD *klass; // x8
  BattleServantConfConponent_o *p_servantCardIdsIndexArray; // x19
  struct System_Int32_array *servantCardIdsIndexArray; // t1
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4351356 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_4351356 = 1;
  }
  servantCardIdsIndexArray = this->fields.servantCardIdsIndexArray;
  p_servantCardIdsIndexArray = (BattleServantConfConponent_o *)&this->fields.servantCardIdsIndexArray;
  klass = servantCardIdsIndexArray;
  if ( !servantCardIdsIndexArray )
  {
    v6 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 0LL);
    p_servantCardIdsIndexArray->klass = (BattleServantConfConponent_c *)v6;
    sub_B70630(p_servantCardIdsIndexArray, v6, v7, v8, v9, v10, v11, v12);
    klass = p_servantCardIdsIndexArray->klass;
    if ( !p_servantCardIdsIndexArray->klass )
      sub_B7076C(v13, v14);
  }
  return klass[6] != 0;
}


bool __fastcall BattleBuffData_BuffData__isCommandCodeBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.userCommandCodeId > 0;
}


bool __fastcall BattleBuffData_BuffData__isEffectBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  WarEntity_o *Entity; // x0
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4351354 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351354 = 1;
  }
  if ( this->fields._isRemove )
  {
    LOBYTE(Entity) = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___)) == 0LL )
    {
      sub_B7076C(Instance, v5);
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               this->fields.buffId,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    if ( Entity )
      LOBYTE(Entity) = SLODWORD(Entity->fields.coordinate) > 0;
  }
  return (char)Entity;
}


bool __fastcall BattleBuffData_BuffData__isEnableCommandCardBuff(
        BattleBuffData_BuffData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  System_Int32_array *servantCardIdsIndexArray; // x19
  System_Func_int__bool__o *v16; // x20

  if ( (byte_4351355 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData_BuffData___c__DisplayClass137_0__isEnableCommandCardBuff_b__0__);
    sub_B70694(&BattleBuffData_BuffData___c__DisplayClass137_0_TypeInfo);
    byte_4351355 = 1;
  }
  v5 = sub_B70764(BattleBuffData_BuffData___c__DisplayClass137_0_TypeInfo);
  BattleBuffData_BuffData___c__DisplayClass137_0___ctor((BattleBuffData_BuffData___c__DisplayClass137_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = command;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)command, v8, v9, v10, v11, v12, v13);
  if ( !BattleBuffData_BuffData__isCommandCardBuff(this, v14) )
    return 0;
  servantCardIdsIndexArray = this->fields.servantCardIdsIndexArray;
  v16 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattleBuffData_BuffData___c__DisplayClass137_0__isEnableCommandCardBuff_b__0__,
    (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__29214704(
           servantCardIdsIndexArray,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616);
}


bool __fastcall BattleBuffData_BuffData__isParamAddIndividualiry(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *paramAddSelfIndividuality; // x8
  struct System_Int32_array *paramAddOpIndividuality; // x8
  struct System_Int32_array *paramAddFieldIndividuality; // x8

  paramAddSelfIndividuality = this->fields.paramAddSelfIndividuality;
  if ( paramAddSelfIndividuality && *(_QWORD *)&paramAddSelfIndividuality->max_length )
    return 1;
  paramAddOpIndividuality = this->fields.paramAddOpIndividuality;
  if ( paramAddOpIndividuality )
  {
    if ( *(_QWORD *)&paramAddOpIndividuality->max_length )
      return 1;
  }
  paramAddFieldIndividuality = this->fields.paramAddFieldIndividuality;
  return paramAddFieldIndividuality && paramAddFieldIndividuality->max_length != 0;
}


bool __fastcall BattleBuffData_BuffData__isTargetSkill(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetSkill; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  targetSkill = this->fields.targetSkill;
  if ( !targetSkill )
    return 0;
  v3 = *(_QWORD *)&targetSkill->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
  }
  return targetSkill->m_Items[1] != 0;
}


bool __fastcall BattleBuffData_BuffData__isValidHpRange(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.ratioRangeHigh > 0 || this->fields.ratioRangeLow > 0;
}


void __fastcall BattleBuffData_BuffData__offState(
        BattleBuffData_BuffData_o *this,
        int32_t stateenum,
        const MethodInfo *method)
{
  this->fields.state &= ~stateenum;
}


void __fastcall BattleBuffData_BuffData__onState(
        BattleBuffData_BuffData_o *this,
        int32_t stateenum,
        const MethodInfo *method)
{
  this->fields.state |= stateenum;
}


void __fastcall BattleBuffData_BuffData__setShowState(
        BattleBuffData_BuffData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int v3; // w8

  v3 = type + 2;
  if ( (unsigned int)(type + 2) <= 5 && ((0x3Bu >> v3) & 1) != 0 )
    this->fields.state |= dword_32EA3B0[v3];
}


void __fastcall BattleBuffData_BuffData__set_IsExtendingLife(
        BattleBuffData_BuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsExtendingLife_k__BackingField = value;
}


void __fastcall BattleBuffData_BuffData__set_isRemove(
        BattleBuffData_BuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isRemove = value;
}


void __fastcall BattleBuffData_BuffData__set_removeBuffId(
        BattleBuffData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._removeBuffId = value;
}


void __fastcall BattleBuffData_BuffData___c__DisplayClass137_0___ctor(
        BattleBuffData_BuffData___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData_BuffData___c__DisplayClass137_0___isEnableCommandCardBuff_b__0(
        BattleBuffData_BuffData___c__DisplayClass137_0_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleCommandData_o *command; // x8

  command = this->fields.command;
  if ( !command )
    sub_B7076C(this, index);
  return command->fields.servantCardIdsIndex == index;
}


void __fastcall BattleBuffData_ChangeBgmData___ctor(BattleBuffData_ChangeBgmData_o *this, const MethodInfo *method)
{
  BuffUniqueValue_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_435135A & 1) == 0 )
  {
    sub_B70694(&BuffUniqueValue_TypeInfo);
    byte_435135A = 1;
  }
  this->fields.addBgmOrder = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (BuffUniqueValue_o *)sub_B70764(BuffUniqueValue_TypeInfo);
  BuffUniqueValue___ctor(v3, 0LL);
  this->fields.uniqueVal = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattleBuffData_ChangeBgmData___ctor_24121044(
        BattleBuffData_ChangeBgmData_o *this,
        int32_t actorId,
        BattleBuffData_BuffData_o *buff,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  int32_t addOrder; // w22
  BuffUniqueValue_o *v12; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t Param; // w0
  struct System_String_o *BgmFileName; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_435135B & 1) == 0 )
  {
    sub_B70694(&BuffUniqueValue_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435135B = 1;
  }
  this->fields.addBgmOrder = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !buff )
    goto LABEL_10;
  addOrder = buff->fields.addOrder;
  v12 = (BuffUniqueValue_o *)sub_B70764(BuffUniqueValue_TypeInfo);
  BuffUniqueValue___ctor_29144744(v12, addOrder, actorId, 0LL);
  this->fields.uniqueVal = v12;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
  if ( !baseVal )
    goto LABEL_10;
  Param = DataVals__GetParam(baseVal, 105, 0, 0LL);
  this->fields.bgmId = Param;
  this->fields.priority = DataVals__GetBgmPriority(baseVal, Param, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_10:
    sub_B7076C(Master_WarQuestSelectionMaster, v10);
  BgmFileName = BgmMaster__GetBgmFileName(
                  Master_WarQuestSelectionMaster,
                  this->fields.bgmId,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
  this->fields.bgmName = BgmFileName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bgmName,
    (System_Int32_array **)BgmFileName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.isAllowSubBgmPlaying = DataVals__IsEqualsTo1(baseVal, 160, 0LL);
  this->fields.isResetBgmPriorityAtWaveStart = DataVals__TryGetParam(
                                                 baseVal,
                                                 163,
                                                 &this->fields.bgmPriorityResetAtWaveStart,
                                                 0LL);
}


Generator_BGM_o *__fastcall BattleBuffData_ChangeBgmData__MakeBgmGenerator(
        BattleBuffData_ChangeBgmData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  Generator_BGMFromChangeBgmBuff_o *v5; // x21

  if ( (byte_435135C & 1) == 0 )
  {
    sub_B70694(&Generator_BGMFromChangeBgmBuff_TypeInfo);
    byte_435135C = 1;
  }
  v5 = (Generator_BGMFromChangeBgmBuff_o *)sub_B70764(Generator_BGMFromChangeBgmBuff_TypeInfo);
  Generator_BGMFromChangeBgmBuff___ctor(v5, data, this, 0LL);
  return (Generator_BGM_o *)v5;
}


void __fastcall BattleBuffData_ChangeBgmData__UpdatePriorityForWaveStart(
        BattleBuffData_ChangeBgmData_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isResetBgmPriorityAtWaveStart )
    this->fields.priority = this->fields.bgmPriorityResetAtWaveStart;
}


void __fastcall BattleBuffData_ChangeBgmData__UpdateUniqueVal(
        BattleBuffData_ChangeBgmData_o *this,
        int32_t buffUid,
        int32_t actorId,
        const MethodInfo *method)
{
  BuffUniqueValue_o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_435135D & 1) == 0 )
  {
    sub_B70694(&BuffUniqueValue_TypeInfo);
    byte_435135D = 1;
  }
  v7 = (BuffUniqueValue_o *)sub_B70764(BuffUniqueValue_TypeInfo);
  BuffUniqueValue___ctor_29144744(v7, buffUid, actorId, 0LL);
  this->fields.uniqueVal = v7;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BattleBuffData_CheckIndividualitiesData___ctor(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandSelf,
        BattleCommandData_o *commandOpponent,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x5
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct BuffInterface_o *v23; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattleBuffData_CheckIndividualitiesData__InitializeIndividuality(
    this,
    self,
    opponent,
    commandSelf,
    commandOpponent,
    v13);
  BattleBuffData_CheckIndividualitiesData__InitializeSelfConcatSvtIndividualities(this, self, commandSelf, v14);
  BattleBuffData_CheckIndividualitiesData__InitializeOpponentConcatSvtIndividualities(
    this,
    opponent,
    commandOpponent,
    v15);
  if ( buffIf )
    v23 = buffIf;
  else
    v23 = (struct BuffInterface_o *)self;
  if ( !this )
    sub_B7076C(v16, v23);
  this->fields._buffIf_k__BackingField = v23;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._buffIf_k__BackingField,
    (System_Int32_array **)v23,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall BattleBuffData_CheckIndividualitiesData___ctor_24123036(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleServantData_o *opponent,
        System_Int32_array *selfConcatSvtIndividualities,
        System_Int32_array *opponentConcatSvtIndividualities,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x5
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct BuffInterface_o *v32; // x1
  __int64 v33; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattleBuffData_CheckIndividualitiesData__InitializeIndividuality(this, self, opponent, 0LL, 0LL, v13);
  if ( selfConcatSvtIndividualities )
  {
    this->fields._selfConcatSvtIndividualities_k__BackingField = selfConcatSvtIndividualities;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._selfConcatSvtIndividualities_k__BackingField,
      (System_Int32_array **)selfConcatSvtIndividualities,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  else
  {
    BattleBuffData_CheckIndividualitiesData__InitializeSelfConcatSvtIndividualities(
      this,
      self,
      0LL,
      (const MethodInfo *)v15);
  }
  if ( opponentConcatSvtIndividualities )
  {
    this->fields._opponentConcatSvtIndividualities_k__BackingField = opponentConcatSvtIndividualities;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._opponentConcatSvtIndividualities_k__BackingField,
      (System_Int32_array **)opponentConcatSvtIndividualities,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    if ( buffIf )
      v32 = buffIf;
    else
      v32 = (struct BuffInterface_o *)self;
  }
  else
  {
    BattleBuffData_CheckIndividualitiesData__InitializeOpponentConcatSvtIndividualities(
      this,
      opponent,
      0LL,
      (const MethodInfo *)v21);
    if ( buffIf )
      v32 = buffIf;
    else
      v32 = (struct BuffInterface_o *)self;
    if ( !this )
      sub_B7076C(v33, v32);
  }
  this->fields._buffIf_k__BackingField = v32;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._buffIf_k__BackingField,
    (System_Int32_array **)v32,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleBuffData_CheckIndividualitiesData__AddSelfIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v6; // x3
  struct System_Int32_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattleBuffData_CheckIndividualitiesData_o *v14; // x0
  const MethodInfo *v15; // x3
  struct System_Int32_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleBuffData_CheckIndividualitiesData_o *v23; // x0
  const MethodInfo *v24; // x3
  struct System_Int32_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)individuality, 0LL);
  if ( !IsNullOrEmpty )
  {
    v7 = BattleBuffData_CheckIndividualitiesData__GetConcatIndividuality(
           (BattleBuffData_CheckIndividualitiesData_o *)IsNullOrEmpty,
           this->fields._selfIndividuality_k__BackingField,
           individuality,
           v6);
    this->fields._selfIndividuality_k__BackingField = v7;
    sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
    v16 = BattleBuffData_CheckIndividualitiesData__GetConcatIndividuality(
            v14,
            this->fields._selfIndividualityCanRelease_k__BackingField,
            individuality,
            v15);
    this->fields._selfIndividualityCanRelease_k__BackingField = v16;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._selfIndividualityCanRelease_k__BackingField,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v25 = BattleBuffData_CheckIndividualitiesData__GetConcatIndividuality(
            v23,
            this->fields._selfConcatSvtIndividualities_k__BackingField,
            individuality,
            v24);
    this->fields._selfConcatSvtIndividualities_k__BackingField = v25;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._selfConcatSvtIndividualities_k__BackingField,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  return this;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__GetConcatIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *baseArray,
        System_Int32_array *addArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0

  if ( (byte_4351361 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Concat_int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4351361 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseArray, 0LL) )
    return addArray;
  v7 = System_Linq_Enumerable__Concat_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
         (System_Collections_Generic_IEnumerable_TSource__o *)addArray,
         (const MethodInfo_1CB525C *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v7,
           (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__InitializeIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandSelf,
        BattleCommandData_o *commandOpponent,
        const MethodInfo *method)
{
  struct System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Int32_array *v24; // x1
  struct System_Int32_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int32_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Int32_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattleServantData_o *v53; // x0
  BattleCommandData_o *v54; // x1
  struct System_Int32_array *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7

  if ( (byte_435135E & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_435135E = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( !BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
  {
    if ( self )
      ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                               self,
                                               0LL,
                                               0,
                                               0,
                                               0,
                                               0LL);
    else
      ConcatServantAndBuffIndividualityies = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
    v24 = ConcatServantAndBuffIndividualityies;
    if ( this )
    {
      this->fields._selfIndividuality_k__BackingField = ConcatServantAndBuffIndividualityies;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields,
        (System_Int32_array **)ConcatServantAndBuffIndividualityies,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      if ( opponent )
        v32 = BattleServantData__getConcatServantAndBuffIndividualityies(opponent, 0LL, 0, 0, 0, 0LL);
      else
        v32 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
      this->fields._opponentIndividuality_k__BackingField = v32;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields._opponentIndividuality_k__BackingField,
        (System_Int32_array **)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      if ( self )
        v46 = BattleServantData__getConcatServantAndBuffIndividualityies(self, 0LL, 0, 1, 0, 0LL);
      else
        v46 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
      this->fields._selfIndividualityCanRelease_k__BackingField = v46;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields._selfIndividualityCanRelease_k__BackingField,
        (System_Int32_array **)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      if ( opponent )
      {
        v53 = opponent;
        v54 = 0LL;
        goto LABEL_31;
      }
LABEL_32:
      v55 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
      goto LABEL_33;
    }
LABEL_34:
    sub_B7076C(ConcatServantAndBuffIndividualityies, v24);
  }
  if ( self )
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             self,
                                             commandSelf,
                                             0,
                                             0,
                                             0,
                                             0LL);
  else
    ConcatServantAndBuffIndividualityies = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  v24 = ConcatServantAndBuffIndividualityies;
  if ( !this )
    goto LABEL_34;
  this->fields._selfIndividuality_k__BackingField = ConcatServantAndBuffIndividualityies;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)ConcatServantAndBuffIndividualityies,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( opponent )
    v25 = BattleServantData__getConcatServantAndBuffIndividualityies(opponent, commandOpponent, 0, 0, 0, 0LL);
  else
    v25 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  this->fields._opponentIndividuality_k__BackingField = v25;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._opponentIndividuality_k__BackingField,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( self )
    v39 = BattleServantData__getConcatServantAndBuffIndividualityies(self, commandSelf, 0, 1, 0, 0LL);
  else
    v39 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  this->fields._selfIndividualityCanRelease_k__BackingField = v39;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._selfIndividualityCanRelease_k__BackingField,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !opponent )
    goto LABEL_32;
  v53 = opponent;
  v54 = commandOpponent;
LABEL_31:
  v55 = BattleServantData__getConcatServantAndBuffIndividualityies(v53, v54, 0, 1, 0, 0LL);
LABEL_33:
  this->fields._opponentIndividualityCanRemove_k__BackingField = v55;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._opponentIndividualityCanRemove_k__BackingField,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__InitializeOpponentConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandOpponent,
        const MethodInfo *method)
{
  System_Int32_array *IsConstantMasterIndvAddBuffActive; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Int32_array *v14; // x1

  if ( (byte_4351360 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_4351360 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = (System_Int32_array *)BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  if ( ((unsigned __int8)IsConstantMasterIndvAddBuffActive & 1) != 0 )
  {
    if ( opponent )
    {
      IsConstantMasterIndvAddBuffActive = BattleServantData__getConcatSvtIndividualities(
                                            opponent,
                                            commandOpponent,
                                            0LL,
                                            0LL);
      goto LABEL_11;
    }
LABEL_13:
    v14 = 0LL;
    if ( this )
      goto LABEL_12;
LABEL_14:
    sub_B7076C(IsConstantMasterIndvAddBuffActive, v14);
  }
  if ( !opponent )
    goto LABEL_13;
  IsConstantMasterIndvAddBuffActive = BattleServantData__getIndividualities(opponent, commandOpponent, 0LL);
LABEL_11:
  v14 = IsConstantMasterIndvAddBuffActive;
  if ( !this )
    goto LABEL_14;
LABEL_12:
  this->fields._opponentConcatSvtIndividualities_k__BackingField = v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._opponentConcatSvtIndividualities_k__BackingField,
    (System_Int32_array **)v14,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__InitializeSelfConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleCommandData_o *commandSelf,
        const MethodInfo *method)
{
  System_Int32_array *IsConstantMasterIndvAddBuffActive; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Int32_array *v14; // x1

  if ( (byte_435135F & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    byte_435135F = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = (System_Int32_array *)BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  if ( ((unsigned __int8)IsConstantMasterIndvAddBuffActive & 1) != 0 )
  {
    if ( self )
    {
      IsConstantMasterIndvAddBuffActive = BattleServantData__getConcatSvtIndividualities(self, commandSelf, 0LL, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    v14 = 0LL;
    if ( this )
      goto LABEL_12;
LABEL_14:
    sub_B7076C(IsConstantMasterIndvAddBuffActive, v14);
  }
  if ( !self )
    goto LABEL_13;
  IsConstantMasterIndvAddBuffActive = BattleServantData__getIndividualities(self, commandSelf, 0LL);
LABEL_11:
  v14 = IsConstantMasterIndvAddBuffActive;
  if ( !this )
    goto LABEL_14;
LABEL_12:
  this->fields._selfConcatSvtIndividualities_k__BackingField = v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._selfConcatSvtIndividualities_k__BackingField,
    (System_Int32_array **)v14,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


BuffInterface_o *__fastcall BattleBuffData_CheckIndividualitiesData__get_buffIf(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._buffIf_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_opponentConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._opponentConcatSvtIndividualities_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_opponentIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._opponentIndividuality_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_opponentIndividualityCanRemove(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._opponentIndividualityCanRemove_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_selfConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._selfConcatSvtIndividualities_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_selfIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._selfIndividuality_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_selfIndividualityCanRelease(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._selfIndividualityCanRelease_k__BackingField;
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_buffIf(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BuffInterface_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._buffIf_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._buffIf_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_opponentConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._opponentConcatSvtIndividualities_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._opponentConcatSvtIndividualities_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_opponentIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._opponentIndividuality_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._opponentIndividuality_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_opponentIndividualityCanRemove(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._opponentIndividualityCanRemove_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._opponentIndividualityCanRemove_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_selfConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._selfConcatSvtIndividualities_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._selfConcatSvtIndividualities_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_selfIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._selfIndividuality_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_selfIndividualityCanRelease(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._selfIndividualityCanRelease_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._selfIndividualityCanRelease_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBuffData_CheckInvokeBuff___ctor(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleServantData_o *selfSvt,
        BattleServantData_o *targetSvt,
        BuffList_ACTION_array *actions,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SelfSvt_k__BackingField = selfSvt;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)selfSvt, v9, v10, v11, v12, v13, v14);
  this->fields._TargetSvt_k__BackingField = targetSvt;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._TargetSvt_k__BackingField,
    (System_Int32_array **)targetSvt,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.checkActs = actions;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.checkActs,
    (System_Int32_array **)actions,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


bool __fastcall BattleBuffData_CheckInvokeBuff__IsInvoke(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleBuffData_BuffData_o *buff,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantData_o *SelfSvt_k__BackingField; // x22
  BattleServantData_o *TargetSvt_k__BackingField; // x23
  BattleBuffData_CheckIndividualitiesData_o *v24; // x24
  const MethodInfo *v25; // x6
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct BuffList_ACTION_array *checkActs; // x19
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v33; // x20

  if ( (byte_4351362 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_BuffList_ACTION___);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Func_BuffList_ACTION__bool___ctor__);
    sub_B70694(&System_Func_BuffList_ACTION__bool__TypeInfo);
    sub_B70694(&Method_BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0__IsInvoke_b__0__);
    sub_B70694(&BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_TypeInfo);
    byte_4351362 = 1;
  }
  v7 = sub_B70764(BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_TypeInfo);
  BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0___ctor(
    (BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 16) = buff;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)buff, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  SelfSvt_k__BackingField = this->fields._SelfSvt_k__BackingField;
  TargetSvt_k__BackingField = this->fields._TargetSvt_k__BackingField;
  v24 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(
    v24,
    SelfSvt_k__BackingField,
    TargetSvt_k__BackingField,
    command,
    0LL,
    0LL,
    v25);
  *(_QWORD *)(v7 + 32) = v24;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)v24, v26, v27, v28, v29, v30, v31);
  checkActs = this->fields.checkActs;
  v33 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B70764(System_Func_BuffList_ACTION__bool__TypeInfo);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v33,
    (Il2CppObject *)v7,
    Method_BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0__IsInvoke_b__0__,
    (const MethodInfo_29A80E0 *)Method_System_Func_BuffList_ACTION__bool___ctor__);
  return BasicHelper__Any_ListViewSort_FilterCategoryKind_(
           (ListViewSort_FilterCategoryKind_array *)checkActs,
           (System_Func_T__bool__o *)v33,
           (const MethodInfo_1BDC940 *)Method_BasicHelper_Any_BuffList_ACTION___);
}


BattleServantData_o *__fastcall BattleBuffData_CheckInvokeBuff__get_SelfSvt(
        BattleBuffData_CheckInvokeBuff_o *this,
        const MethodInfo *method)
{
  return this->fields._SelfSvt_k__BackingField;
}


BattleServantData_o *__fastcall BattleBuffData_CheckInvokeBuff__get_TargetSvt(
        BattleBuffData_CheckInvokeBuff_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetSvt_k__BackingField;
}


void __fastcall BattleBuffData_CheckInvokeBuff__set_SelfSvt(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleServantData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SelfSvt_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBuffData_CheckInvokeBuff__set_TargetSvt(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleServantData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._TargetSvt_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._TargetSvt_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0___ctor(
        BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0___IsInvoke_b__0(
        BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *this,
        int32_t act,
        const MethodInfo *method)
{
  BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *v4; // x19
  struct BattleBuffData_CheckInvokeBuff_o *_4__this; // x8
  struct BattleServantData_o *SelfSvt_k__BackingField; // x9
  BattleBuffData_BuffData_o *buff; // x21
  BattleBuffData_o *buffData; // x22
  BattleServantData_o *TargetSvt_k__BackingField; // x23

  v4 = this;
  if ( (byte_435158A & 1) == 0 )
  {
    this = (BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *)sub_B70694(&BuffList_TypeInfo);
    byte_435158A = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  SelfSvt_k__BackingField = _4__this->fields._SelfSvt_k__BackingField;
  if ( !SelfSvt_k__BackingField )
    goto LABEL_10;
  buff = v4->fields.buff;
  buffData = SelfSvt_k__BackingField->fields.buffData;
  TargetSvt_k__BackingField = _4__this->fields._TargetSvt_k__BackingField;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *)BuffList__getActInfo(
                                                                     act,
                                                                     TargetSvt_k__BackingField,
                                                                     0LL);
  if ( !buff )
LABEL_10:
    sub_B7076C(this, *(_QWORD *)&act);
  return BattleBuffData_BuffData__CheckCond(
           buff,
           buffData,
           (BuffList_ActInfo_o *)this,
           v4->fields.checkIndividualities,
           1,
           0LL);
}


void __fastcall BattleBuffData_FieldAliveCondData___ctor(
        BattleBuffData_FieldAliveCondData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_FieldChangeData___ctor(BattleBuffData_FieldChangeData_o *this, const MethodInfo *method)
{
  this->fields.buffUniqueId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_FieldChangeData___ctor_24124064(
        BattleBuffData_FieldChangeData_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  int32_t Param; // w0
  struct System_String_o *BgmFileName; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Int32_array *ParamArray; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4351363 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351363 = 1;
  }
  this->fields.buffUniqueId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseVals )
    goto LABEL_9;
  this->fields.priority = DataVals__GetFieldPriority(baseVals, 0LL);
  this->fields.bgId = DataVals__GetParam(baseVals, 103, 0, 0LL);
  this->fields.bgType = DataVals__GetParam(baseVals, 104, 0, 0LL);
  Param = DataVals__GetParam(baseVals, 105, 0, 0LL);
  this->fields.bgmId = Param;
  this->fields.bgmPriority = DataVals__GetBgmPriority(baseVals, Param, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_9:
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
  BgmFileName = BgmMaster__GetBgmFileName(
                  Master_WarQuestSelectionMaster,
                  this->fields.bgmId,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
  this->fields.bgmName = BgmFileName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bgmName,
    (System_Int32_array **)BgmFileName,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.isAllowSubBgmPlaying = DataVals__IsEqualsTo1(baseVals, 160, 0LL);
  ParamArray = DataVals__GetParamArray(baseVals, 102, 0LL);
  this->fields.individuality = ParamArray;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.individuality,
    (System_Int32_array **)ParamArray,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.isTakeOverNextWave = DataVals__GetParam(baseVals, 107, 0, 0LL) > 0;
  this->fields._HasBgmPriorityInVals_k__BackingField = DataVals__HasBgmPriorityInVals(baseVals, 0LL);
}


bool __fastcall BattleBuffData_FieldChangeData__get_HasBgmPriorityInVals(
        BattleBuffData_FieldChangeData_o *this,
        const MethodInfo *method)
{
  return this->fields._HasBgmPriorityInVals_k__BackingField;
}


BuffUniqueValue_o *__fastcall BattleBuffData_FieldChangeData__get_UniqueVal(
        BattleBuffData_FieldChangeData_o *this,
        const MethodInfo *method)
{
  int32_t buffUniqueId; // w19
  BuffUniqueValue_o *v4; // x20

  if ( (byte_4351364 & 1) == 0 )
  {
    sub_B70694(&BuffUniqueValue_TypeInfo);
    byte_4351364 = 1;
  }
  buffUniqueId = this->fields.buffUniqueId;
  v4 = (BuffUniqueValue_o *)sub_B70764(BuffUniqueValue_TypeInfo);
  BuffUniqueValue___ctor_29144744(v4, buffUniqueId, -1, 0LL);
  return v4;
}


void __fastcall BattleBuffData_IntervalData___ctor(BattleBuffData_IntervalData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_IntervalData___ctor_24124640(
        BattleBuffData_IntervalData_o *this,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseVal )
    sub_B7076C(v5, v6);
  this->fields.baseTurn = DataVals__GetParam(baseVal, 130, 0, 0LL);
  this->fields.baseCount = DataVals__GetParam(baseVal, 131, 0, 0LL);
}


void __fastcall BattleBuffData_IntervalData__DecrementCount(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.intervalCount = UnityEngine_Mathf__Max_41127884(0, this->fields.intervalCount - 1, 0LL);
}


void __fastcall BattleBuffData_IntervalData__DecrementTurn(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.intervalTurn = UnityEngine_Mathf__Max_41127884(0, this->fields.intervalTurn - 1, 0LL);
}


int32_t __fastcall BattleBuffData_IntervalData__GetIntervalVal(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.intervalTurn;
  if ( result <= 0 )
    return this->fields.intervalCount;
  return result;
}


void __fastcall BattleBuffData_IntervalData__Reset(BattleBuffData_IntervalData_o *this, const MethodInfo *method)
{
  this->fields.updateTiming = 0;
}


void __fastcall BattleBuffData_IntervalData__SetInterval(BattleBuffData_IntervalData_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.intervalTurn = *(_QWORD *)&this->fields.baseTurn;
}


void __fastcall BattleBuffData_IntervalData__SetOtherTiming(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.updateTiming = 2;
}


bool __fastcall BattleBuffData_IntervalData__Update(
        BattleBuffData_IntervalData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t intervalCount; // w8
  bool result; // w0
  __int64 v7; // x0
  __int64 v8; // x1

  if ( !this->fields.updateTiming )
    return 0;
  intervalCount = this->fields.intervalCount;
  if ( this->fields.intervalTurn > 0 || intervalCount >= 1 )
  {
    v7 = UnityEngine_Mathf__Max_41127884(0, intervalCount - 1, 0LL);
    this->fields.intervalCount = v7;
    if ( !buff )
      sub_B7076C(v7, v8);
    buff->fields.isUse = 0;
    buff->fields.isDecide = 0;
  }
  else
  {
    *(_QWORD *)&this->fields.intervalTurn = *(_QWORD *)&this->fields.baseTurn;
  }
  result = 1;
  this->fields.updateTiming = 0;
  return result;
}


bool __fastcall BattleBuffData_IntervalData__UpdateCurrent(
        BattleBuffData_IntervalData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  return this->fields.updateTiming == 1 && BattleBuffData_IntervalData__Update(this, buff, method);
}


bool __fastcall BattleBuffData_IntervalData__Use(
        BattleBuffData_IntervalData_o *this,
        BattleBuffData_o *buffData,
        BattleBuffData_BuffData_o *buff,
        bool isUse,
        const MethodInfo *method)
{
  if ( !isUse )
    return 0;
  this->fields.updateTiming = 1;
  if ( !buffData )
    sub_B7076C(this, 0LL);
  BattleBuffData__AddUpdateWaitIntervalBuff(buffData, buff, 0LL);
  return this->fields.intervalTurn <= 0 && this->fields.intervalCount < 1;
}


bool __fastcall BattleBuffData_IntervalData__get_HasInterval(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  return this->fields.intervalTurn > 0 || this->fields.intervalCount > 0;
}


bool __fastcall BattleBuffData_IntervalData__get_HasIntervalCount(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  return this->fields.intervalCount > 0;
}


bool __fastcall BattleBuffData_IntervalData__get_HasIntervalTurn(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  return this->fields.intervalTurn > 0;
}


void __fastcall BattleBuffData_ParamAdd___ctor(
        BattleBuffData_ParamAdd_o *this,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        System_Int32_array *fieldIndv,
        int32_t value,
        int32_t maxValue,
        int32_t maxCount,
        const MethodInfo *method)
{
  BattleBuffData_ParamAdd_o *v14; // x25
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields.selfIndv = selfIndv;
  sub_B70630(
    (BattleServantConfConponent_o *)&v14->fields,
    (System_Int32_array **)selfIndv,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v14->fields.opIndv = opIndv;
  sub_B70630(
    (BattleServantConfConponent_o *)&v14->fields.opIndv,
    (System_Int32_array **)opIndv,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v14->fields.fieldIndv = fieldIndv;
  v14 = (BattleBuffData_ParamAdd_o *)((char *)v14 + 32);
  sub_B70630((BattleServantConfConponent_o *)v14, (System_Int32_array **)fieldIndv, v27, v28, v29, v30, v31, v32);
  LODWORD(v14->monitor) = value;
  HIDWORD(v14->monitor) = maxValue;
  LODWORD(v14->fields.selfIndv) = maxCount;
}


void __fastcall BattleBuffData_ParamAdd___ctor_24125020(
        BattleBuffData_ParamAdd_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  System_Int32_array *ParamArray; // x21
  System_Int32_array *v6; // x22
  System_Int32_array *v7; // x23
  int32_t Param; // w24
  int32_t v9; // w25
  int32_t v10; // w6
  const MethodInfo *v11; // x7

  if ( !dataVals )
    sub_B7076C(this, 0LL);
  ParamArray = DataVals__GetParamArray(dataVals, 151, 0LL);
  v6 = DataVals__GetParamArray(dataVals, 152, 0LL);
  v7 = DataVals__GetParamArray(dataVals, 153, 0LL);
  Param = DataVals__GetParam(dataVals, 154, 0, 0LL);
  v9 = DataVals__GetParam(dataVals, 155, 0, 0LL);
  v10 = DataVals__GetParam(dataVals, 156, 0, 0LL);
  BattleBuffData_ParamAdd___ctor(this, ParamArray, v6, v7, Param, v9, v10, v11);
}


void __fastcall BattleBuffData_ParamAdd___ctor_24125240(
        BattleBuffData_ParamAdd_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7

  if ( !buffData )
    sub_B7076C(this, 0LL);
  BattleBuffData_ParamAdd___ctor(
    this,
    buffData->fields.paramAddSelfIndividuality,
    buffData->fields.paramAddOpIndividuality,
    buffData->fields.paramAddFieldIndividuality,
    buffData->fields.paramAddValue,
    buffData->fields.paramAddMax,
    buffData->fields.paramAddMaxCount,
    v3);
}


void __fastcall BattleBuffData_RelationOverwriteData___ctor(
        BattleBuffData_RelationOverwriteData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleBuffData_RelationOverwriteData__getPriority(
        BattleBuffData_RelationOverwriteData_o *this,
        bool isAttack,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 24LL;
  if ( isAttack )
    v3 = 20LL;
  return *(_DWORD *)((char *)&this->klass + v3);
}


void __fastcall BattleBuffData_SaveData___ctor(BattleBuffData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_ShowBuffData___ctor(BattleBuffData_ShowBuffData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_ShowBuffData___ctor_24113384(
        BattleBuffData_ShowBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t removeBuffId; // w8
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  unsigned int state; // w8
  bool v16; // w8
  struct BattleBuffData_IntervalData_o *v17; // x1
  const MethodInfo *v18; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !buff )
    sub_B7076C(v5, v6);
  this->fields.buffId = buff->fields.buffId;
  if ( buff->fields._isRemove )
  {
    removeBuffId = buff->fields._removeBuffId;
    this->fields.isRemove = 1;
    this->fields.buffId = removeBuffId;
  }
  this->fields.isPassive = buff->fields.passive;
  intervalData = buff->fields.intervalData;
  v16 = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
     && (state = buff->fields.state, (state & 0x24011) == 0)
     && ((state >> 21) & 1) == 0;
  this->fields.isReady = v16;
  this->fields.isBoost = (buff->fields.state & 2) != 0;
  this->fields.turn = buff->fields.turn;
  this->fields.count = buff->fields.count;
  this->fields.isFrame = (buff->fields.state & 0x40) != 0;
  this->fields.isHideParam = (buff->fields.state & 0x80) != 0;
  this->fields.addOrder = buff->fields.addOrder;
  v17 = buff->fields.intervalData;
  this->fields._IntervalData_k__BackingField = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._IntervalData_k__BackingField,
    (System_Int32_array **)v17,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields._DisplayPriority_k__BackingField = BattleBuffData_BuffData__GetDisplayPriority(buff, v18);
}


int32_t __fastcall BattleBuffData_ShowBuffData__get_DisplayPriority(
        BattleBuffData_ShowBuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._DisplayPriority_k__BackingField;
}


BattleBuffData_IntervalData_o *__fastcall BattleBuffData_ShowBuffData__get_IntervalData(
        BattleBuffData_ShowBuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._IntervalData_k__BackingField;
}


void __fastcall BattleBuffData_ShowBuffData__set_DisplayPriority(
        BattleBuffData_ShowBuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DisplayPriority_k__BackingField = value;
}


void __fastcall BattleBuffData_ShowBuffData__set_IntervalData(
        BattleBuffData_ShowBuffData_o *this,
        BattleBuffData_IntervalData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._IntervalData_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._IntervalData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBuffData_SkillRankChangeData___ctor(
        BattleBuffData_SkillRankChangeData_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.buffData = buffData;
  v4 = (BattleBuffData_SkillRankChangeData_o *)((char *)v4 + 16);
  sub_B70630((BattleServantConfConponent_o *)v4, (System_Int32_array **)buffData, v5, v6, v7, v8, v9, v10);
  LODWORD(v4->monitor) = 0;
  BYTE4(v4->monitor) = 0;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData__GetLogicRankUpCount(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  const MethodInfo *v5; // x6
  __int64 v6; // x0
  __int64 v7; // x1
  BattleBuffData_BuffData_array *BuffList_31751548; // x19
  const MethodInfo *v9; // x3
  BattleBuffData_SkillRankChangeData___c_c *v10; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__11_0; // x20
  Il2CppObject *v13; // x21
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4351366 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_B70694(&Method_BattleBuffData_SkillRankChangeData___c__GetLogicRankUpCount_b__11_0__);
    sub_B70694(&BattleBuffData_SkillRankChangeData___c_TypeInfo);
    byte_4351366 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, 0LL, 0LL, 0LL, 0LL, 0LL, v5);
  if ( !buffData )
    sub_B7076C(v6, v7);
  BuffList_31751548 = BattleBuffData__getBuffList_31751548(buffData, 92, v4, 0, 0, 0LL, 0LL);
  BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, BuffList_31751548, 1, v9);
  v10 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
    v10 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__11_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__11_0,
      v13,
      Method_BattleBuffData_SkillRankChangeData___c__GetLogicRankUpCount_b__11_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v14 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    v14->__9__11_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__11_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v14->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BuffList_31751548,
           (System_Func_TSource__int__o *)_9__11_0,
           (const MethodInfo_1CC7BBC *)Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData_SkillRankChangeData__RevertUnusedBuff(
        BattleBuffData_SkillRankChangeData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        bool isUnused,
        const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *v7; // x22
  BattleBuffData_o *buffData; // x0
  __int64 v9; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x21

  if ( (byte_4351367 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B70694(&Method_BattleBuffData_SkillRankChangeData___c__DisplayClass12_0__RevertUnusedBuff_b__0__);
    sub_B70694(&BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_TypeInfo);
    byte_4351367 = 1;
  }
  v7 = (BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *)sub_B70764(BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_TypeInfo);
  BattleBuffData_SkillRankChangeData___c__DisplayClass12_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  v7->fields.isUnused = isUnused;
  v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_BattleBuffData_SkillRankChangeData___c__DisplayClass12_0__RevertUnusedBuff_b__0__,
    (const MethodInfo_264C148 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v10,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  if ( v7->fields.isUnused )
  {
    buffData = this->fields.buffData;
    if ( buffData )
    {
      BattleBuffData__ResetTargetUseBuff(buffData, 154, 0, 0LL);
      return;
    }
LABEL_8:
    sub_B7076C(buffData, v9);
  }
}


void __fastcall BattleBuffData_SkillRankChangeData__Update(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  const MethodInfo *v5; // x6
  __int64 v6; // x0
  __int64 v7; // x1
  BattleBuffData_BuffData_array *FixBuffArray; // x20
  const MethodInfo *v9; // x3
  BattleBuffData_SkillRankChangeData___c_c *v10; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v13; // x22
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4351365 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_B70694(&Method_BattleBuffData_SkillRankChangeData___c__Update_b__10_0__);
    sub_B70694(&BattleBuffData_SkillRankChangeData___c_TypeInfo);
    byte_4351365 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, 0LL, 0LL, 0LL, 0LL, 0LL, v5);
  if ( !buffData )
    sub_B7076C(v6, v7);
  FixBuffArray = BattleBuffData__GetFixBuffArray(buffData, 92, v4, 0, 0LL);
  BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, FixBuffArray, 1, v9);
  v10 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
    v10 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__10_0,
      v13,
      Method_BattleBuffData_SkillRankChangeData___c__Update_b__10_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v14 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    v14->__9__10_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__10_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v14->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  this->fields._RankUpCount_k__BackingField = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)FixBuffArray,
                                                (System_Func_TSource__int__o *)_9__10_0,
                                                (const MethodInfo_1CC7BBC *)Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData_SkillRankChangeData__UpdateAddRightAfter(
        BattleBuffData_SkillRankChangeData_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields._IsAddRightAfter_k__BackingField = flg;
}


void __fastcall BattleBuffData_SkillRankChangeData__UseBuff(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  const MethodInfo *v5; // x6
  BattleBuffData_o *FixBuffArray; // x0
  BattleBuffData_BuffData_array *v7; // x1
  BattleBuffData_BuffData_array *v8; // x20
  BattleBuffData_SkillRankChangeData___c_c *v9; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__13_0; // x21
  Il2CppObject *v12; // x22
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleBuffData_BuffData_array *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4351368 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_FindAll_BattleBuffData_BuffData___);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleBuffData_SkillRankChangeData___c__UseBuff_b__13_0__);
    sub_B70694(&BattleBuffData_SkillRankChangeData___c_TypeInfo);
    byte_4351368 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, 0LL, 0LL, 0LL, 0LL, 0LL, v5);
  if ( !buffData )
    goto LABEL_20;
  FixBuffArray = (BattleBuffData_o *)BattleBuffData__GetFixBuffArray(buffData, 92, v4, 0, 0LL);
  if ( !FixBuffArray )
    goto LABEL_20;
  v8 = (BattleBuffData_BuffData_array *)FixBuffArray;
  if ( FixBuffArray->fields.passiveList )
  {
    v9 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
      v9 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__13_0,
        v12,
        Method_BattleBuffData_SkillRankChangeData___c__UseBuff_b__13_0__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v13 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
      v13->__9__13_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__13_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v13->__9__13_0,
        (System_Int32_array **)_9__13_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    All_BattleBuffData_BuffData = System_Array__FindAll_BattleBuffData_BuffData_(
                                    v8,
                                    (System_Predicate_T__o *)_9__13_0,
                                    (const MethodInfo_1FCAFA4 *)Method_System_Array_FindAll_BattleBuffData_BuffData___);
    if ( !All_BattleBuffData_BuffData )
      goto LABEL_18;
    v7 = All_BattleBuffData_BuffData;
    if ( !*(_QWORD *)&All_BattleBuffData_BuffData->max_length )
      goto LABEL_18;
    FixBuffArray = this->fields.buffData;
    if ( FixBuffArray )
    {
      BattleBuffData__UsedProgressing(FixBuffArray, v7, 0LL);
LABEL_18:
      BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, v8, 0, v21);
      return;
    }
LABEL_20:
    sub_B7076C(FixBuffArray, v7);
  }
}


bool __fastcall BattleBuffData_SkillRankChangeData__get_IsAddRightAfter(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAddRightAfter_k__BackingField;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData__get_RankUpCount(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  return this->fields._RankUpCount_k__BackingField;
}


void __fastcall BattleBuffData_SkillRankChangeData__set_IsAddRightAfter(
        BattleBuffData_SkillRankChangeData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAddRightAfter_k__BackingField = value;
}


void __fastcall BattleBuffData_SkillRankChangeData__set_RankUpCount(
        BattleBuffData_SkillRankChangeData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._RankUpCount_k__BackingField = value;
}


void __fastcall BattleBuffData_SkillRankChangeData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_435158B & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_SkillRankChangeData___c_TypeInfo);
    byte_435158B = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleBuffData_SkillRankChangeData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleBuffData_SkillRankChangeData___c___ctor(
        BattleBuffData_SkillRankChangeData___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleBuffData_SkillRankChangeData___c___GetLogicRankUpCount_b__11_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return buff->fields.param;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData___c___Update_b__10_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return buff->fields.param;
}


bool __fastcall BattleBuffData_SkillRankChangeData___c___UseBuff_b__13_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return buff->fields.count > 0;
}


void __fastcall BattleBuffData_SkillRankChangeData___c__DisplayClass12_0___ctor(
        BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_SkillRankChangeData___c__DisplayClass12_0___RevertUnusedBuff_b__0(
        BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  BattleBuffData_BuffData__RevertUnused(buff, this->fields.isUnused, 0LL);
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__244___ctor(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffEnumerable_d__244__MoveNext(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  BattleBuffData__AllBuffEnumerable_d__244_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleBuffData_o *_4__this; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *activeList; // x0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap1; // x20
  __int128 v7; // q0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **current; // x1
  bool result; // w0
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *passiveList; // x0
  __int128 v26; // q0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+38h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4351348 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleBuffData__AllBuffEnumerable_d__244_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4351348 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__7__wrap1 = &v2->fields.__7__wrap1;
  }
  else
  {
    _4__this = v2->fields.__4__this;
    if ( _1__state == 1 )
    {
      p__7__wrap1 = &v2->fields.__7__wrap1;
    }
    else
    {
      if ( _1__state )
        return 0;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_B7076C(this, method);
      activeList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.activeList;
      if ( !activeList )
        sub_B7076C(0LL, method);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v41,
        activeList,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      p__7__wrap1 = &v2->fields.__7__wrap1;
      v7 = *(_OWORD *)&v41.fields.list;
      v2->fields.__7__wrap1.fields.current = (struct BattleBuffData_BuffData_o *)v41.fields.current;
      *(_OWORD *)&v2->fields.__7__wrap1.fields.list = v7;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields.__7__wrap1, 0LL, v8, v9, v10, v11, v12, v13);
    }
    v2->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
    {
      current = (System_Int32_array **)v2->fields.__7__wrap1.fields.current;
      v2->fields.__2__current = (struct BattleBuffData_BuffData_o *)current;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields.__2__current, current, v15, v16, v17, v18, v19, v20);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    }
    BattleBuffData__AllBuffEnumerable_d__244____m__Finally1(v2, v14);
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
    if ( !_4__this )
      sub_B7076C(v23, v24);
    passiveList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.passiveList;
    if ( !passiveList )
      sub_B7076C(0LL, v24);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v41,
      passiveList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v26 = *(_OWORD *)&v41.fields.list;
    p__7__wrap1->fields.current = (struct BattleBuffData_BuffData_o *)v41.fields.current;
    *(_OWORD *)&p__7__wrap1->fields.list = v26;
    sub_B70630((BattleServantConfConponent_o *)p__7__wrap1, 0LL, v27, v28, v29, v30, v31, v32);
  }
  v2->fields.__1__state = -4;
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    v40 = (System_Int32_array **)v2->fields.__7__wrap1.fields.current;
    v2->fields.__2__current = (struct BattleBuffData_BuffData_o *)v40;
    sub_B70630((BattleServantConfConponent_o *)&v2->fields.__2__current, v40, v34, v35, v36, v37, v38, v39);
    v2->fields.__1__state = 2;
    return 1;
  }
  else
  {
    BattleBuffData__AllBuffEnumerable_d__244____m__Finally2(v2, v33);
    result = 0;
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffEnumerable_d__244__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_435134B & 1) == 0 )
  {
    sub_B70694(&BattleBuffData__AllBuffEnumerable_d__244_TypeInfo);
    byte_435134B = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_B70764(BattleBuffData__AllBuffEnumerable_d__244_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    if ( !v4 )
      sub_B7076C(CurrentManagedThreadId, v6);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_B70630((BattleServantConfConponent_o *)(v4 + 40), _4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffEnumerable_d__244__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffEnumerable_d__244__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleBuffData__AllBuffEnumerable_d__244_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffEnumerable_d__244__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__244__System_IDisposable_Dispose(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  int v2; // w19
  int v3[2]; // [xsp+0h] [xbp-20h]
  int v4; // [xsp+8h] [xbp-18h]

  v4 = 0;
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFC:
    case 2:
      v2 = v4;
      v3[0] = 65;
      ++v4;
      BattleBuffData__AllBuffEnumerable_d__244____m__Finally2(this, method);
      if ( v4 )
      {
        if ( v3[v2] == 65 )
          v4 = v2;
      }
      break;
    case 0xFFFFFFFD:
    case 1:
      BattleBuffData__AllBuffEnumerable_d__244____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__244____m__Finally1(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  if ( (byte_4351349 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    byte_4351349 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__244____m__Finally2(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  if ( (byte_435134A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    byte_435134A = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245___ctor(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__MoveNext(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  BattleBuffData_o *_4__this; // x21
  struct BattleBuffData_BuffData_array *ActiveList; // x0
  BattleServantConfConponent_o *p__7__wrap1; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t v19; // w8
  int32_t v20; // w8
  BattleServantConfConponent_c *klass; // x9
  int32_t namespaze; // w10
  struct BattleBuffData_BuffData_o *v23; // x1
  struct BattleBuffData_BuffData_o **p__2__current; // x19
  bool result; // w0
  int32_t _7__wrap2; // w8
  int32_t v27; // w8
  struct BattleBuffData_BuffData_array *PassiveList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleServantConfConponent_c *v35; // x9
  int32_t v36; // w10
  struct BattleBuffData_BuffData_o *v37; // x1
  struct BattleBuffData_BuffData_o **v38; // x19
  __int64 v39; // x0

  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    _7__wrap2 = this->fields.__7__wrap2;
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    this->fields.__1__state = -1;
    v27 = _7__wrap2 + 1;
    this->fields.__7__wrap2 = v27;
    goto LABEL_14;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    v20 = this->fields.__7__wrap2;
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    this->fields.__1__state = -1;
    v19 = v20 + 1;
    this->fields.__7__wrap2 = v19;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_20:
      sub_B7076C(this, method);
    ActiveList = BattleBuffData__getActiveList(_4__this, this->fields.isCheckInterval, 0LL);
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    this->fields.__7__wrap1 = ActiveList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__7__wrap1,
      (System_Int32_array **)ActiveList,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v19 = 0;
    this->fields.__7__wrap2 = 0;
  }
  klass = p__7__wrap1->klass;
  if ( !p__7__wrap1->klass )
    goto LABEL_20;
  namespaze = (int32_t)klass->_1.namespaze;
  if ( v19 < namespaze )
  {
    if ( v19 < (unsigned int)namespaze )
    {
      v23 = (struct BattleBuffData_BuffData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v19);
      this->fields.__2__current = v23;
      p__2__current = &this->fields.__2__current;
      sub_B70630((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v23, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_21:
    v39 = sub_B70798(this);
    sub_B70738(v39, 0LL);
  }
  p__7__wrap1->klass = 0LL;
  sub_B70630(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_20;
  PassiveList = BattleBuffData__getPassiveList(_4__this, this->fields.isCheckInterval, 0LL);
  this->fields.__7__wrap1 = PassiveList;
  sub_B70630(p__7__wrap1, (System_Int32_array **)PassiveList, v29, v30, v31, v32, v33, v34);
  v27 = 0;
  this->fields.__7__wrap2 = 0;
LABEL_14:
  v35 = p__7__wrap1->klass;
  if ( !p__7__wrap1->klass )
    goto LABEL_20;
  v36 = (int32_t)v35->_1.namespaze;
  if ( v27 >= v36 )
  {
    p__7__wrap1->klass = 0LL;
    sub_B70630(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
    return 0;
  }
  if ( v27 >= (unsigned int)v36 )
    goto LABEL_21;
  v37 = (struct BattleBuffData_BuffData_o *)*((_QWORD *)&v35->_1.byval_arg.data + v27);
  this->fields.__2__current = v37;
  v38 = &this->fields.__2__current;
  sub_B70630((BattleServantConfConponent_o *)v38, (System_Int32_array **)v37, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)v38 - 2) = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **_4__this; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_435134D & 1) == 0 )
  {
    sub_B70694(&BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_TypeInfo);
    byte_435134D = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *)sub_B70764(BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v4 )
      sub_B7076C(CurrentManagedThreadId, v6);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v4->fields.__4__this = (struct BattleBuffData_o *)_4__this;
    sub_B70630((BattleServantConfConponent_o *)&v4->fields.__4__this, _4__this, v7, v8, v9, v10, v11, v12);
  }
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  v4->fields.isCheckInterval = this->fields.__3__isCheckInterval;
  return result;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__System_IDisposable_Dispose(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBuffData__AllBuffValidEnumerable_d__246___ctor(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffValidEnumerable_d__246__MoveNext(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  BattleBuffData_o *_4__this; // x21
  struct BattleBuffData_BuffData_array *PassiveList; // x0
  BattleServantConfConponent_o *p__7__wrap1; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t v19; // w8
  int32_t v20; // w8
  BattleServantConfConponent_c *klass; // x9
  int32_t namespaze; // w10
  struct BattleBuffData_BuffData_o *v23; // x1
  struct BattleBuffData_BuffData_o **p__2__current; // x19
  bool result; // w0
  int32_t _7__wrap2; // w8
  int32_t v27; // w8
  struct BattleBuffData_BuffData_array *ActiveList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleServantConfConponent_c *v35; // x9
  int32_t v36; // w10
  struct BattleBuffData_BuffData_o *v37; // x1
  struct BattleBuffData_BuffData_o **v38; // x19
  __int64 v39; // x0

  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    _7__wrap2 = this->fields.__7__wrap2;
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    this->fields.__1__state = -1;
    v27 = _7__wrap2 + 1;
    this->fields.__7__wrap2 = v27;
    goto LABEL_14;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    v20 = this->fields.__7__wrap2;
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    this->fields.__1__state = -1;
    v19 = v20 + 1;
    this->fields.__7__wrap2 = v19;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_20:
      sub_B7076C(this, method);
    PassiveList = BattleBuffData__getPassiveList(_4__this, this->fields.isCheckInterval, 0LL);
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    this->fields.__7__wrap1 = PassiveList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__7__wrap1,
      (System_Int32_array **)PassiveList,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v19 = 0;
    this->fields.__7__wrap2 = 0;
  }
  klass = p__7__wrap1->klass;
  if ( !p__7__wrap1->klass )
    goto LABEL_20;
  namespaze = (int32_t)klass->_1.namespaze;
  if ( v19 < namespaze )
  {
    if ( v19 < (unsigned int)namespaze )
    {
      v23 = (struct BattleBuffData_BuffData_o *)*((_QWORD *)&klass->_1.byval_arg.data + v19);
      this->fields.__2__current = v23;
      p__2__current = &this->fields.__2__current;
      sub_B70630((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v23, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_21:
    v39 = sub_B70798(this);
    sub_B70738(v39, 0LL);
  }
  p__7__wrap1->klass = 0LL;
  sub_B70630(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_20;
  ActiveList = BattleBuffData__getActiveList(_4__this, this->fields.isCheckInterval, 0LL);
  this->fields.__7__wrap1 = ActiveList;
  sub_B70630(p__7__wrap1, (System_Int32_array **)ActiveList, v29, v30, v31, v32, v33, v34);
  v27 = 0;
  this->fields.__7__wrap2 = 0;
LABEL_14:
  v35 = p__7__wrap1->klass;
  if ( !p__7__wrap1->klass )
    goto LABEL_20;
  v36 = (int32_t)v35->_1.namespaze;
  if ( v27 >= v36 )
  {
    p__7__wrap1->klass = 0LL;
    sub_B70630(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
    return 0;
  }
  if ( v27 >= (unsigned int)v36 )
    goto LABEL_21;
  v37 = (struct BattleBuffData_BuffData_o *)*((_QWORD *)&v35->_1.byval_arg.data + v27);
  this->fields.__2__current = v37;
  v38 = &this->fields.__2__current;
  sub_B70630((BattleServantConfConponent_o *)v38, (System_Int32_array **)v37, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)v38 - 2) = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerable_d__246__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  BattleBuffData__AllBuffValidEnumerable_d__246_o *v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **_4__this; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_435134C & 1) == 0 )
  {
    sub_B70694(&BattleBuffData__AllBuffValidEnumerable_d__246_TypeInfo);
    byte_435134C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (BattleBuffData__AllBuffValidEnumerable_d__246_o *)sub_B70764(BattleBuffData__AllBuffValidEnumerable_d__246_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v4 )
      sub_B7076C(CurrentManagedThreadId, v6);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v4->fields.__4__this = (struct BattleBuffData_o *)_4__this;
    sub_B70630((BattleServantConfConponent_o *)&v4->fields.__4__this, _4__this, v7, v8, v9, v10, v11, v12);
  }
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  v4->fields.isCheckInterval = this->fields.__3__isCheckInterval;
  return result;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffValidEnumerable_d__246__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffValidEnumerable_d__246__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleBuffData__AllBuffValidEnumerable_d__246_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffValidEnumerable_d__246__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffValidEnumerable_d__246__System_IDisposable_Dispose(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBuffData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_435133F & 1) == 0 )
  {
    sub_B70694(&BattleBuffData___c_TypeInfo);
    byte_435133F = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleBuffData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleBuffData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleBuffData___c___ctor(BattleBuffData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__216_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__216_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__216_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__216_3(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleBuffData___c___BoardTurnProgressing_b__69_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___BoardTurnProgressing_b__69_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___CancelExtendingLife_b__72_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields._IsExtendingLife_k__BackingField;
}


void __fastcall BattleBuffData___c___CancelExtendingLife_b__72_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  x->fields._IsExtendingLife_k__BackingField = 0;
}


bool __fastcall BattleBuffData___c___CommonTurnProgressing_b__68_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___CommonTurnProgressing_b__68_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


void __fastcall BattleBuffData___c___DirectUpdateWaitIntervalBuff_b__28_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_B7076C(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__Update(intervalData, buff, method);
}


bool __fastcall BattleBuffData___c___GetAllBGMChangeBuffArray_b__249_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.changeBgmData != 0LL;
}


bool __fastcall BattleBuffData___c___GetAllCommandAssistBuff_b__206_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return buff->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData___c___GetAllCommandCodeBuff_b__205_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return buff->fields.userCommandCodeId > 0;
}


bool __fastcall BattleBuffData___c___GetAllConnectedCommandCardBuff_b__233_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetAllConnectedCommandCardBuff_b__233_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, (const MethodInfo *)buff)
      || buff->fields.userCommandCodeId > 0
      || buff->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData___c___GetAllIntervalBuffArray_b__251_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.intervalData != 0LL;
}


bool __fastcall BattleBuffData___c___GetAllValidBGMChangeBuffArray_b__250_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.changeBgmData != 0LL;
}


bool __fastcall BattleBuffData___c___GetAvaliableActiveBuffArray_b__104_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  bool result; // w0
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8

  if ( !s )
    sub_B7076C(this, 0LL);
  result = !s->fields._isRemove
        && ((intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___GetClassIconEffectBuffList_b__261_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !b )
    sub_B7076C(this, 0LL);
  intervalData = b->fields.intervalData;
  result = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = b->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___GetCurrentWarBoardNotAttackedBuff_b__239_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return !buff->fields._isRemove && BattleBuffData_BuffData__IsWarBoardNotAttacked(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__223_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__isEffectBuff(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__223_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__isEffectBuff(buff, (const MethodInfo *)buff);
}


int32_t __fastcall BattleBuffData___c___GetEffectBuffList_b__223_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__223_3(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  if ( !buff )
    sub_B7076C(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( !intervalData )
    return 0;
  if ( intervalData->fields.intervalTurn <= 0 )
    return intervalData->fields.intervalCount > 0;
  return 1;
}


bool __fastcall BattleBuffData___c___GetGrantBuffTypeArray_b__118_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return !buff->fields._isRemove;
}


bool __fastcall BattleBuffData___c___GetGrantBuffTypeArray_b__118_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return !buff->fields._isRemove;
}


bool __fastcall BattleBuffData___c___RemoveNoTurnBuff_b__70_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___RemoveNoTurnBuff_b__70_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___RemoveProgressingBuffList_b__88_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *_,
        const MethodInfo *method)
{
  if ( !_ )
    sub_B7076C(this, 0LL);
  return _->fields.count == 0;
}


bool __fastcall BattleBuffData___c___RemoveProgressingBuffList_b__88_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *_,
        const MethodInfo *method)
{
  if ( !_ )
    sub_B7076C(this, 0LL);
  return _->fields.count == 0;
}


void __fastcall BattleBuffData___c___ResetNotTakeOverBuff_b__71_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  if ( !buff->fields.isTakeOverNextBattle )
  {
    buff->fields.turn = 0;
    buff->fields._IsExtendingLife_k__BackingField = 0;
  }
}


int32_t __fastcall BattleBuffData___c___UpdateBaseAddOrder_b__218_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBaseAddOrder_b__218_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__217_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__217_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__217_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateForceBuff_b__92_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleBuffData___c___UpdateForceNoField_b__229_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  if ( buff->fields.onfiledUniqueId >= 1 )
    buff->fields.state |= 1u;
  if ( buff->fields.onFieldAliveCond )
    buff->fields.state |= 0x4000u;
}


int32_t __fastcall BattleBuffData___c___checkBuffSuccessful_b__121_0(
        BattleBuffData___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


bool __fastcall BattleBuffData___c___checkFieldAlive_b__96_0(
        BattleBuffData___c_o *this,
        int32_t value,
        int32_t cond,
        bool isOrMore,
        const MethodInfo *method)
{
  if ( isOrMore )
    return cond <= value;
  else
    return value <= cond;
}


bool __fastcall BattleBuffData___c___getAuraBuffList_b__37_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !s )
    sub_B7076C(this, 0LL);
  intervalData = s->fields.intervalData;
  result = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___getBuffActiveIDList_b__106_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return (s->fields.state & 0x80000) == 0;
}


bool __fastcall BattleBuffData___c___getBuffIDList_b__105_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return (s->fields.state & 0x80000) == 0;
}


int32_t __fastcall BattleBuffData___c___getShowServantParam_b__40_1(
        BattleBuffData___c_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return buff->fields._DisplayPriority_k__BackingField;
}


bool __fastcall BattleBuffData___c___syncLinkageBuffChangeParam_b__75_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x8

  if ( !x )
    sub_B7076C(this, 0LL);
  v3 = 120LL;
  if ( (x->fields.state & 0x400000) != 0 )
    v3 = 296LL;
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)((char *)&x->klass + v3), 0LL);
}


bool __fastcall BattleBuffData___c___syncLinkageBuffChangeParam_b__75_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x8

  if ( !x )
    sub_B7076C(this, 0LL);
  v3 = 120LL;
  if ( (x->fields.state & 0x400000) != 0 )
    v3 = 296LL;
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)((char *)&x->klass + v3), 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass104_0___ctor(
        BattleBuffData___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass104_0___GetAvaliableActiveBuffArray_b__1(
        BattleBuffData___c__DisplayClass104_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass104_0_o *v4; // x20
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  v4 = this;
  if ( (byte_4351340 & 1) == 0 )
  {
    this = (BattleBuffData___c__DisplayClass104_0_o *)sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData__Invoke__);
    byte_4351340 = 1;
  }
  if ( !s )
    goto LABEL_12;
  if ( s->fields._isRemove )
    return 0;
  intervalData = s->fields.intervalData;
  if ( intervalData )
  {
    if ( intervalData->fields.intervalTurn > 0 || intervalData->fields.intervalCount > 0 )
      return 0;
  }
  if ( (s->fields.state & 0x224011) != 0 )
    return 0;
  this = (BattleBuffData___c__DisplayClass104_0_o *)v4->fields.conditionsToAdd;
  if ( !this )
LABEL_12:
    sub_B7076C(this, s);
  return System_Predicate_BattleBuffData_BuffData___Invoke(
           (System_Predicate_BattleBuffData_BuffData__o *)this,
           s,
           (const MethodInfo_2BF23CC *)Method_System_Predicate_BattleBuffData_BuffData__Invoke__);
}


void __fastcall BattleBuffData___c__DisplayClass109_0___ctor(
        BattleBuffData___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass109_0___SubBuffFromType_b__0(
        BattleBuffData___c__DisplayClass109_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !buff) || !_4__this )
    sub_B7076C(_4__this, buff);
  return BuffMaster__GetBuffType((BuffMaster_o *)_4__this, buff->fields.buffId, -1, 0LL) == this->fields.checkBuffType;
}


void __fastcall BattleBuffData___c__DisplayClass110_0___ctor(
        BattleBuffData___c__DisplayClass110_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass110_0___SubBuffFromDeadActorId_b__0(
        BattleBuffData___c__DisplayClass110_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t actorId; // w8
  int32_t v4; // w9

  actorId = this->fields.actorId;
  if ( actorId < 1 )
    return 0;
  if ( !buff )
    sub_B7076C(this, 0LL);
  if ( buff->fields.isRemoveFieldBuffActorDeath )
    v4 = buff->fields.actorId;
  else
    v4 = -1;
  return v4 == actorId;
}


void __fastcall BattleBuffData___c__DisplayClass111_0___ctor(
        BattleBuffData___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass111_0___SubBuffSpecified_g__CheckFunc_0(
        BattleBuffData___c__DisplayClass111_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *toRemove; // x0

  if ( (byte_4351341 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4351341 = 1;
  }
  toRemove = this->fields.toRemove;
  if ( !toRemove )
    sub_B7076C(0LL, buff);
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           toRemove,
           buff,
           (const MethodInfo_2EB4ED4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void __fastcall BattleBuffData___c__DisplayClass118_0___ctor(
        BattleBuffData___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass118_0___GetGrantBuffTypeArray_b__0(
        BattleBuffData___c__DisplayClass118_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  System_Collections_Generic_List_int__o *buffTypeList; // x20

  if ( (byte_4351342 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    byte_4351342 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (buffTypeList = this->fields.buffTypeList,
        _4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL),
        !buff)
    || !_4__this
    || (_4__this = (BattleBuffData_o *)BuffMaster__GetBuffType((BuffMaster_o *)_4__this, buff->fields.buffId, -1, 0LL),
        !buffTypeList) )
  {
    sub_B7076C(_4__this, buff);
  }
  System_Collections_Generic_List_int___Add(
    buffTypeList,
    (int32_t)_4__this,
    (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass140_0___ctor(
        BattleBuffData___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass140_0___getRectBuffList_b__0(
        BattleBuffData___c__DisplayClass140_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *ent; // x8

  ent = this->fields.ent;
  if ( !ent )
    sub_B7076C(this, type);
  return ent->fields.type == type;
}


void __fastcall BattleBuffData___c__DisplayClass148_0___ctor(
        BattleBuffData___c__DisplayClass148_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass148_0___ChangeBuffState_b__0(
        BattleBuffData___c__DisplayClass148_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass148_0_o *v4; // x19
  bool isContainConditionIndividuality; // w22
  bool isConditionHp; // w21
  char isConditionIndividuality; // w8
  _BOOL4 isValueChanged; // w21
  bool v9; // w0

  if ( !buff )
    goto LABEL_22;
  if ( (buff->fields.state & 0x20) == 0 )
    return;
  v4 = this;
  this = (BattleBuffData___c__DisplayClass148_0_o *)this->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  if ( BattleBuffData__isContainConditionsHp((BattleBuffData_o *)this, buff, 0LL) )
  {
    this = (BattleBuffData___c__DisplayClass148_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_22;
    isContainConditionIndividuality = BattleBuffData__isContainConditionIndividuality(
                                        (BattleBuffData_o *)this,
                                        buff,
                                        0LL);
  }
  else
  {
    isContainConditionIndividuality = 0;
  }
  this = (BattleBuffData___c__DisplayClass148_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  isConditionHp = BattleBuffData__isConditionHp((BattleBuffData_o *)this, buff, v4->fields.now, v4->fields.max, 0LL);
  if ( isContainConditionIndividuality )
  {
    if ( isConditionHp )
    {
      this = (BattleBuffData___c__DisplayClass148_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_22;
      isConditionIndividuality = BattleBuffData__isConditionIndividuality(
                                   (BattleBuffData_o *)this,
                                   buff,
                                   v4->fields.servantIndv,
                                   v4->fields.buffIndv,
                                   v4->fields.fieldIndiv,
                                   v4->fields.canSubStateBuffIndv,
                                   0LL);
    }
    else
    {
      isConditionIndividuality = 0;
    }
  }
  else
  {
    this = (BattleBuffData___c__DisplayClass148_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_22;
    isConditionIndividuality = isConditionHp | BattleBuffData__isConditionIndividuality(
                                                 (BattleBuffData_o *)this,
                                                 buff,
                                                 v4->fields.servantIndv,
                                                 v4->fields.buffIndv,
                                                 v4->fields.fieldIndiv,
                                                 v4->fields.canSubStateBuffIndv,
                                                 0LL);
  }
  this = (BattleBuffData___c__DisplayClass148_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_22:
    sub_B7076C(this, buff);
  isValueChanged = v4->fields.isValueChanged;
  if ( (isConditionIndividuality & 1) != 0 )
    v9 = BattleBuffData__OffStateWithAuraConditionCheck((BattleBuffData_o *)this, buff, 16, 0LL);
  else
    v9 = BattleBuffData__OnStateWithAuraConditionCheck((BattleBuffData_o *)this, buff, 16, 0LL);
  v4->fields.isValueChanged = isValueChanged || v9;
}


void __fastcall BattleBuffData___c__DisplayClass149_0___ctor(
        BattleBuffData___c__DisplayClass149_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass149_0___UpdateForceAllBuffNoAct_b__0(
        BattleBuffData___c__DisplayClass149_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  BattleBuffData_BuffData__setShowState(buff, this->fields.showState, method);
  buff->fields.state |= 0x20000u;
}


void __fastcall BattleBuffData___c__DisplayClass192_0___ctor(
        BattleBuffData___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass192_0___CheckBuffType_b__0(
        BattleBuffData___c__DisplayClass192_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_B7076C(this, type);
  return buffEnt->fields.type == type;
}


void __fastcall BattleBuffData___c__DisplayClass197_0___ctor(
        BattleBuffData___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass197_0___InitializeShift_b__0(
        BattleBuffData___c__DisplayClass197_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return s->fields.actorId == this->fields.actorId;
}


bool __fastcall BattleBuffData___c__DisplayClass197_0___InitializeShift_b__1(
        BattleBuffData___c__DisplayClass197_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, s);
  return BattleBuffData__checkShiftClear(_4__this, s, this->fields.buffindivs, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass215_0___ctor(
        BattleBuffData___c__DisplayClass215_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass215_0___GetSkillTypeBuff_b__0(
        BattleBuffData___c__DisplayClass215_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass215_0_o *v4; // x20

  v4 = this;
  if ( (byte_4351343 & 1) == 0 )
  {
    this = (BattleBuffData___c__DisplayClass215_0_o *)sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4351343 = 1;
  }
  if ( !buff || (this = (BattleBuffData___c__DisplayClass215_0_o *)v4->fields.targetSkillList) == 0LL )
    sub_B7076C(this, buff);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           buff->fields.grantSkillType,
           (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall BattleBuffData___c__DisplayClass217_0___ctor(
        BattleBuffData___c__DisplayClass217_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass217_0___UpdateBuffAddOrder_b__3(
        BattleBuffData___c__DisplayClass217_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  x->fields.addOrder += this->fields.addPassiveMaxOrder;
}


void __fastcall BattleBuffData___c__DisplayClass217_0___UpdateBuffAddOrder_b__4(
        BattleBuffData___c__DisplayClass217_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  x->fields.addOrder += this->fields.addPassiveMaxOrder;
}


void __fastcall BattleBuffData___c__DisplayClass243_0___ctor(
        BattleBuffData___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData___c__DisplayClass243_0___GetFamilyLinkageIdMax_b__0(
        BattleBuffData___c__DisplayClass243_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hash; // x0

  if ( (byte_4351344 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4351344 = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_B7076C(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    hash,
    x,
    (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData___c__DisplayClass243_0___GetFamilyLinkageIdMax_b__1(
        BattleBuffData___c__DisplayClass243_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hash; // x0

  if ( (byte_4351345 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4351345 = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_B7076C(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    hash,
    x,
    (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass247_0___ctor(
        BattleBuffData___c__DisplayClass247_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass247_0___RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0(
        BattleBuffData___c__DisplayClass247_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return this->fields.actorId == buff->fields.actorId
      && BattleSkillInfoData__IsReplacePassiveTypeOnTransform(buff->fields.grantSkillType, 0LL)
      && !buff->fields.isNotRemoveOnTransform;
}


void __fastcall BattleBuffData___c__DisplayClass252_0___ctor(
        BattleBuffData___c__DisplayClass252_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass252_0___ExistsTargetIntervalBuff_b__0(
        BattleBuffData___c__DisplayClass252_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !buff) )
    sub_B7076C(_4__this, buff);
  return BattleBuffData_BuffData__EqualBuffType(buff, (BuffMaster_o *)_4__this, this->fields.targetType, v6);
}


void __fastcall BattleBuffData___c__DisplayClass253_0___ctor(
        BattleBuffData___c__DisplayClass253_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass253_0___ResetTargetUseBuff_b__0(
        BattleBuffData___c__DisplayClass253_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !x) )
    sub_B7076C(_4__this, x);
  return BattleBuffData_BuffData__EqualBuffType(x, (BuffMaster_o *)_4__this, this->fields.targetType, v6);
}


void __fastcall BattleBuffData___c__DisplayClass262_0___ctor(
        BattleBuffData___c__DisplayClass262_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass262_0___RemoveClassBoardSkillBuff_b__0(
        BattleBuffData___c__DisplayClass262_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !p || (skillData = this->fields.skillData) == 0LL )
    sub_B7076C(this, p);
  return p->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass262_0___RemoveClassBoardSkillBuff_b__1(
        BattleBuffData___c__DisplayClass262_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !p || (skillData = this->fields.skillData) == 0LL )
    sub_B7076C(this, p);
  return p->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass262_0___RemoveClassBoardSkillBuff_b__2(
        BattleBuffData___c__DisplayClass262_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !a || (skillData = this->fields.skillData) == 0LL )
    sub_B7076C(this, a);
  return a->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass262_0___RemoveClassBoardSkillBuff_b__3(
        BattleBuffData___c__DisplayClass262_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !a || (skillData = this->fields.skillData) == 0LL )
    sub_B7076C(this, a);
  return a->fields.skillId == skillData->fields.id;
}


void __fastcall BattleBuffData___c__DisplayClass262_1___ctor(
        BattleBuffData___c__DisplayClass262_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass262_1___RemoveClassBoardSkillBuff_b__4(
        BattleBuffData___c__DisplayClass262_1_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_B7076C(this, p);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass262_1___RemoveClassBoardSkillBuff_b__5(
        BattleBuffData___c__DisplayClass262_1_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_B7076C(this, p);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass262_1___RemoveClassBoardSkillBuff_b__6(
        BattleBuffData___c__DisplayClass262_1_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_B7076C(this, a);
  return a->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass262_1___RemoveClassBoardSkillBuff_b__7(
        BattleBuffData___c__DisplayClass262_1_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_B7076C(this, a);
  return a->fields.skillId == entity->fields.commandSpellId;
}


void __fastcall BattleBuffData___c__DisplayClass263_0___ctor(
        BattleBuffData___c__DisplayClass263_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass263_0___RemoveClassBoardCommandSpellBuff_b__0(
        BattleBuffData___c__DisplayClass263_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_B7076C(this, p);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass263_0___RemoveClassBoardCommandSpellBuff_b__1(
        BattleBuffData___c__DisplayClass263_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_B7076C(this, p);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass263_0___RemoveClassBoardCommandSpellBuff_b__2(
        BattleBuffData___c__DisplayClass263_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_B7076C(this, a);
  return a->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass263_0___RemoveClassBoardCommandSpellBuff_b__3(
        BattleBuffData___c__DisplayClass263_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_B7076C(this, a);
  return a->fields.skillId == entity->fields.commandSpellId;
}


void __fastcall BattleBuffData___c__DisplayClass31_0___ctor(
        BattleBuffData___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass31_0___getPassiveList_b__0(
        BattleBuffData___c__DisplayClass31_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !s )
    sub_B7076C(this, 0LL);
  result = (!this->fields.isCheckInterval
         || (intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


void __fastcall BattleBuffData___c__DisplayClass32_0___ctor(
        BattleBuffData___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass32_0___getActiveList_b__0(
        BattleBuffData___c__DisplayClass32_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !s )
    sub_B7076C(this, 0LL);
  result = (!this->fields.isCheckInterval
         || (intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


void __fastcall BattleBuffData___c__DisplayClass40_0___ctor(
        BattleBuffData___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass40_0___getShowServantParam_b__0(
        BattleBuffData___c__DisplayClass40_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_ShowBuffData_o *v5; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  BattleBuffData_o *_4__this; // x0

  if ( (byte_4351346 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
    sub_B70694(&BattleBuffData_ShowBuffData_TypeInfo);
    byte_4351346 = 1;
  }
  v5 = (BattleBuffData_ShowBuffData_o *)sub_B70764(BattleBuffData_ShowBuffData_TypeInfo);
  BattleBuffData_ShowBuffData___ctor_24113384(v5, buff, v6);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  if ( BattleBuffData__isHide(_4__this, buff, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  if ( BattleBuffData__isHideOtherCommand(_4__this, buff, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  if ( BattleBuffData__isShowDeff(_4__this, buff, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  if ( BattleBuffData__isShowDamageAndCommandCardBuff(_4__this, buff, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  if ( BattleBuffData__isInvalidHide(_4__this, buff, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  _4__this = (BattleBuffData_o *)BattleBuffData__IsUnfix(_4__this, buff, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !buff )
LABEL_35:
    sub_B7076C(_4__this, v7);
  if ( !buff->fields.passive )
    goto LABEL_30;
  if ( buff->fields.userCommandCodeId <= 0 && buff->fields.commandAssistId <= 0 )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    if ( BattleBuffData__isShow(_4__this, buff, 0LL) )
      goto LABEL_33;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    if ( BattleBuffData__checkBuffSpecialAttack(_4__this, buff, 0LL) )
      goto LABEL_33;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    if ( BattleBuffData__checkBuffTurnCount(_4__this, buff, 0LL) )
      goto LABEL_33;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    if ( BattleBuffData__checkBoostSkill(_4__this, buff, 0LL) )
      goto LABEL_33;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    if ( BattleBuffData__isShowStatusBuffOnly(_4__this, buff, 0LL) )
    {
LABEL_33:
      _4__this = (BattleBuffData_o *)this->fields.reList;
      if ( _4__this )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
        return;
      }
      goto LABEL_35;
    }
    if ( buff->fields.passive )
      return;
LABEL_30:
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_35;
    if ( BattleBuffData__isHide(_4__this, buff, 0LL) )
      return;
    goto LABEL_33;
  }
}


void __fastcall BattleBuffData___c__DisplayClass46_0___ctor(
        BattleBuffData___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass46_0___DebugGetShowServantParamAll_b__0(
        BattleBuffData___c__DisplayClass46_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_ShowBuffData_o *v5; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *reList; // x0

  if ( (byte_4351347 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
    sub_B70694(&BattleBuffData_ShowBuffData_TypeInfo);
    byte_4351347 = 1;
  }
  v5 = (BattleBuffData_ShowBuffData_o *)sub_B70764(BattleBuffData_ShowBuffData_TypeInfo);
  BattleBuffData_ShowBuffData___ctor_24113384(v5, buff, v6);
  reList = this->fields.reList;
  if ( !reList )
    sub_B7076C(0LL, v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass74_0___ctor(
        BattleBuffData___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass74_0___RemoveLinkageBuff_b__0(
        BattleBuffData___c__DisplayClass74_0_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t indiv,
        const MethodInfo *method)
{
  int32_t state; // w8
  bool v6; // zf
  __int64 v7; // x8

  if ( !buff )
    goto LABEL_8;
  state = buff->fields.state;
  if ( ((this->fields.isFamily ^ ((state & 0x400000u) >> 22)) & 1) != 0 )
    return 0;
  this = (BattleBuffData___c__DisplayClass74_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_8:
    sub_B7076C(this, buff);
  v6 = (state & 0x400000) == 0;
  v7 = 296LL;
  if ( v6 )
    v7 = 120LL;
  return BattleBuffData__checkSameElement(
           (BattleBuffData_o *)this,
           indiv,
           *(System_Int32_array **)((char *)&buff->klass + v7),
           0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass74_0___RemoveLinkageBuff_b__1(
        BattleBuffData___c__DisplayClass74_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return this->fields.isFamily ^ ((x->fields.state & 0x400000) == 0);
}


void __fastcall BattleBuffData___c__DisplayClass94_0___ctor(
        BattleBuffData___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass94_0___CheckBuffGroup_b__0(
        BattleBuffData___c__DisplayClass94_0_o *this,
        int32_t target,
        const MethodInfo *method)
{
  return this->fields.attachTarget == target;
}