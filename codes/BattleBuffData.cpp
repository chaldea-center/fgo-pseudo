void __fastcall BattleBuffData___ctor(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_int__o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct System_Int32_array *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  BattleBuffData_SkillRankChangeData_o *v76; // x20
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7

  if ( (byte_42EC112 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&BattleBuffData_SkillRankChangeData_TypeInfo, v17, v18, v19);
    byte_42EC112 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.passiveList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.passiveList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.activeList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.activeList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.conditionalAuraBuff = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.conditionalAuraBuff,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.auraBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.auraBuffList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.addBuffOrder = 1;
  v48 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.unfixedBuffList = v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.unfixedBuffList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.classIconAuraEffectBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v55;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classIconAuraEffectBuffList,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.updateWaitIntervalBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v62;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.updateWaitIntervalBuffList,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v69 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.wkzero = v69;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.wkzero,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v76 = (BattleBuffData_SkillRankChangeData_o *)sub_B5D694(BattleBuffData_SkillRankChangeData_TypeInfo);
  BattleBuffData_SkillRankChangeData___ctor(v76, this, 0LL);
  this->fields.skillChangeData = v76;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillChangeData,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
}


void __fastcall BattleBuffData__AddEffectBuffList(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3

  v5 = this;
  if ( (byte_42EC158 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, (_DWORD)buff, (_DWORD)method, v3);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
                                 v6,
                                 v7,
                                 v8);
    byte_42EC158 = 1;
  }
  if ( !buff )
    goto LABEL_15;
  if ( buff->fields.auraEffectId )
  {
    this = (BattleBuffData_o *)v5->fields.auraBuffList;
    if ( !this )
      goto LABEL_15;
    if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
            (WarBoardManager_TaskList_o *)buff,
            (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v5->fields.auraBuffList;
      if ( !this )
        goto LABEL_15;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
  }
  if ( !buff->fields.classIconAuraEffectId )
    return;
  this = (BattleBuffData_o *)v5->fields.classIconAuraEffectBuffList;
  if ( !this )
LABEL_15:
    sub_B5D69C(this, buff);
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
  {
    this = (BattleBuffData_o *)v5->fields.classIconAuraEffectBuffList;
    if ( this )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21

  if ( (byte_42EC13D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)buffArray, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v9, v10, v11);
    sub_B5D5C4(&Method_BattleBuffData__AddForceBuff_b__89_0__, v12, v13, v14);
    byte_42EC13D = 1;
  }
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleBuffData__AddForceBuff_b__89_0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v15,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData__AddGetSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *addBuffList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  BattleBuffData___c_c *v54; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__212_0; // x21
  Il2CppObject *v57; // x22
  struct BattleBuffData___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int32_t v65; // w1
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *auraBuffList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *passiveList; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v71; // x20
  void *v72; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v73; // x21
  Il2CppObject *v74; // x22
  struct BattleBuffData___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *activeList; // x20
  void *v83; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v84; // x21
  Il2CppObject *v85; // x22
  struct BattleBuffData___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v93; // x19
  void *v94; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v95; // x20
  Il2CppObject *v96; // x21
  struct BattleBuffData___c_StaticFields *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Collections_Generic_List_Enumerator_T__o v104; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v105; // [xsp+20h] [xbp-50h] BYREF

  v5 = this;
  if ( (byte_42EC18F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, (_DWORD)addBuffList, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v36, v37, v38);
    sub_B5D5C4(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__212_0__, v39, v40, v41);
    sub_B5D5C4(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__212_1__, v42, v43, v44);
    sub_B5D5C4(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__212_2__, v45, v46, v47);
    sub_B5D5C4(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__212_3__, v48, v49, v50);
    this = (BattleBuffData_o *)sub_B5D5C4(&BattleBuffData___c_TypeInfo, v51, v52, v53);
    byte_42EC18F = 1;
  }
  memset(&v105, 0, sizeof(v105));
  if ( !addBuffList )
    goto LABEL_58;
  if ( addBuffList->fields._size < 1 )
  {
    v65 = 0;
  }
  else
  {
    v54 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v54 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v54->static_fields;
    _9__212_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__212_0;
    if ( !_9__212_0 )
    {
      if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v57 = (Il2CppObject *)static_fields->__9;
      _9__212_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__212_0,
        v57,
        Method_BattleBuffData___c__AddGetSkillTypeBuff_b__212_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v58 = BattleBuffData___c_TypeInfo->static_fields;
      v58->__9__212_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__212_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v58->__9__212_0,
        (System_Int32_array **)_9__212_0,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
    v65 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)addBuffList,
            (System_Func_TSource__int__o *)_9__212_0,
            (const MethodInfo_1CAE860 *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  BattleBuffData__UpdateBuffAddOrder(v5, v65, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v104,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)addBuffList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v105 = v104;
  while ( 1 )
  {
    v66 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v105,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v66 )
      break;
    current = v105.fields.current;
    if ( !v105.fields.current )
      sub_B5D69C(v66, v67);
    if ( LODWORD(v105.fields.current[4].klass) )
    {
      auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.auraBuffList;
      if ( !auraBuffList )
        sub_B5D69C(0LL, v67);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        auraBuffList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v105.fields.current,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
    if ( BYTE1(current[2].klass) )
    {
      passiveList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.passiveList;
      if ( !passiveList )
        sub_B5D69C(0LL, v67);
    }
    else
    {
      passiveList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.activeList;
      if ( !passiveList )
        sub_B5D69C(0LL, v67);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      passiveList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)current,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v105,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v71 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5->fields.passiveList;
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v72 = this[1].fields.passiveList;
  v73 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)*((_QWORD *)v72 + 27);
  if ( !v73 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v72 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v74 = *(Il2CppObject **)v72;
    v73 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v73,
      v74,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__212_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v75 = BattleBuffData___c_TypeInfo->static_fields;
    v75->__9__212_1 = (struct System_Comparison_BattleBuffData_BuffData__o *)v73;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v75->__9__212_1,
      (System_Int32_array **)v73,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  if ( !v71 )
    goto LABEL_58;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v71,
    (System_Comparison_T__o *)v73,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v83 = this[1].fields.passiveList;
  v84 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)*((_QWORD *)v83 + 28);
  if ( !v84 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v83 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v85 = *(Il2CppObject **)v83;
    v84 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v84,
      v85,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__212_2__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v86 = BattleBuffData___c_TypeInfo->static_fields;
    v86->__9__212_2 = (struct System_Comparison_BattleBuffData_BuffData__o *)v84;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v86->__9__212_2,
      (System_Int32_array **)v84,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
  }
  if ( !activeList )
    goto LABEL_58;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    activeList,
    (System_Comparison_T__o *)v84,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  v93 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5->fields.auraBuffList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v94 = this[1].fields.passiveList;
  v95 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)*((_QWORD *)v94 + 29);
  if ( !v95 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v94 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v96 = *(Il2CppObject **)v94;
    v95 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v95,
      v96,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__212_3__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v97 = BattleBuffData___c_TypeInfo->static_fields;
    v97->__9__212_3 = (struct System_Comparison_BattleBuffData_BuffData__o *)v95;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v97->__9__212_3,
      (System_Int32_array **)v95,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
  }
  if ( !v93 )
LABEL_58:
    sub_B5D69C(this, addBuffList);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v93,
    (System_Comparison_T__o *)v95,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
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
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *updateWaitIntervalBuffList; // x0

  if ( (byte_42EC10F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, (_DWORD)buff, (_DWORD)method, v3);
    byte_42EC10F = 1;
  }
  updateWaitIntervalBuffList = this->fields.updateWaitIntervalBuffList;
  if ( !updateWaitIntervalBuffList )
    sub_B5D69C(0LL, buff);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)updateWaitIntervalBuffList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffEnumerable(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EC1A1 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData__AllBuffEnumerable_d__239_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC1A1 = 1;
  }
  v5 = sub_B5D694(BattleBuffData__AllBuffEnumerable_d__239_TypeInfo);
  BattleBuffData__AllBuffEnumerable_d__239___ctor((BattleBuffData__AllBuffEnumerable_d__239_o *)v5, -2, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerable(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EC1A3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData__AllBuffValidEnumerable_d__241_TypeInfo, isCheckInterval, (_DWORD)method, v3);
    byte_42EC1A3 = 1;
  }
  v6 = sub_B5D694(BattleBuffData__AllBuffValidEnumerable_d__241_TypeInfo);
  BattleBuffData__AllBuffValidEnumerable_d__241___ctor((BattleBuffData__AllBuffValidEnumerable_d__241_o *)v6, -2, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v6 + 49) = isCheckInterval;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v6;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EC1A2 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_TypeInfo, isCheckInterval, (_DWORD)method, v3);
    byte_42EC1A2 = 1;
  }
  v6 = sub_B5D694(BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_TypeInfo);
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__240___ctor(
    (BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_o *)v6,
    -2,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v6 + 49) = isCheckInterval;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v6;
}


void __fastcall BattleBuffData__ApplyBuffData(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        System_Collections_Generic_List_BattleBuffData_BuffData__o **dataList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  Il2CppObject *current; // x8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC18C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)buff,
      (_DWORD)dataList,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12, v13, v14);
    byte_42EC18C = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !*dataList )
    sub_B5D69C(0LL, buff);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*dataList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    current = v18.fields.current;
    if ( !v18.fields.current )
      sub_B5D69C(v16, v17);
    if ( !buff )
      sub_B5D69C(v16, v17);
    if ( LODWORD(v18.fields.current[4].klass) == buff->fields.auraEffectId
      && LODWORD(v18.fields.current[1].klass) == buff->fields.buffId )
    {
      LODWORD(v18.fields.current[9].klass) = buff->fields.state;
      HIDWORD(current[8].monitor) = buff->fields.addOrder;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__BoardTurnProgressing(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x20
  __int64 v51; // x1
  void *passiveList; // x0
  _BOOL8 v53; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v56; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__68_0; // x22
  Il2CppObject *v59; // x23
  struct BattleBuffData___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v67; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v68; // x22
  _BOOL8 v69; // x0
  __int64 v70; // x1
  const MethodInfo *v71; // x2
  int v72; // w21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  struct BattleBuffData___c_StaticFields *v74; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__68_1; // x22
  Il2CppObject *v76; // x23
  struct BattleBuffData___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v85; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v86; // x22
  const MethodInfo *v87; // x3
  System_Collections_Generic_IEnumerable_T__o *v88; // x0
  const MethodInfo *v89; // x2
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+8h] [xbp-98h] BYREF
  int v92[2]; // [xsp+20h] [xbp-80h]
  int v93; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42EC12B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleBuffData_checkBuffClear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_BattleBuffData___c__BoardTurnProgressing_b__68_0__, v41, v42, v43);
    sub_B5D5C4(&Method_BattleBuffData___c__BoardTurnProgressing_b__68_1__, v44, v45, v46);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v47, v48, v49);
    byte_42EC12B = 1;
  }
  memset(&v94, 0, sizeof(v94));
  v93 = 0;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v91,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v94 = v91;
  while ( 1 )
  {
    v53 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v94,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v53 )
      break;
    if ( !v94.fields.current )
      sub_B5D69C(v53, v54);
    if ( LOBYTE(v94.fields.current[23].klass) )
      BattleBuffData__ProgressBuffTurn((BattleBuffData_o *)v53, (BattleBuffData_BuffData_o *)v94.fields.current, v55);
  }
  v92[0] = 69;
  v93 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v94,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v93 = 0;
  v56 = this->fields.passiveList;
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
    v59 = (Il2CppObject *)static_fields->__9;
    _9__68_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__68_0,
      v59,
      Method_BattleBuffData___c__BoardTurnProgressing_b__68_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v60 = BattleBuffData___c_TypeInfo->static_fields;
    v60->__9__68_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__68_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v60->__9__68_0,
      (System_Int32_array **)_9__68_0,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  if ( !v56 )
    goto LABEL_42;
  passiveList = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v56,
                  (System_Predicate_T__o *)_9__68_0,
                  (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v50 )
    goto LABEL_42;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v50,
    (System_Collections_Generic_IEnumerable_T__o *)passiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v67 = this->fields.passiveList;
  v68 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v68,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v67 )
    goto LABEL_42;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v67,
    (System_Predicate_T__o *)v68,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v91,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v94 = v91;
  while ( 1 )
  {
    v69 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v94,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v69 )
      break;
    if ( !v94.fields.current )
      sub_B5D69C(v69, v70);
    if ( LOBYTE(v94.fields.current[23].klass) )
      BattleBuffData__ProgressBuffTurn((BattleBuffData_o *)v69, (BattleBuffData_BuffData_o *)v94.fields.current, v71);
  }
  v92[0] = 207;
  v72 = ++v93;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v94,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v72 && v92[v72 - 1] == 207 )
    v93 = v72 - 1;
  passiveList = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  v74 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)passiveList + 23);
  _9__68_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v74->__9__68_1;
  if ( !_9__68_1 )
  {
    if ( (*((_BYTE *)passiveList + 307) & 4) != 0 && !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      v74 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v76 = (Il2CppObject *)v74->__9;
    _9__68_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__68_1,
      v76,
      Method_BattleBuffData___c__BoardTurnProgressing_b__68_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v77 = BattleBuffData___c_TypeInfo->static_fields;
    v77->__9__68_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__68_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v77->__9__68_1,
      (System_Int32_array **)_9__68_1,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
  if ( !activeList
    || (All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                               (System_Predicate_T__o *)_9__68_1,
                                                               (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v50,
          All,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__),
        v85 = this->fields.activeList,
        v86 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v86,
          (Il2CppObject *)this,
          Method_BattleBuffData_checkBuffClear__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !v85) )
  {
LABEL_42:
    sub_B5D69C(passiveList, v51);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v85,
    (System_Predicate_T__o *)v86,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v88 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v50,
                                                         0,
                                                         v87);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v50,
    v88,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v50,
    v89);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v50,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


bool __fastcall BattleBuffData__CancelExtendingLife(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  BattleBuffData___c_c *v33; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__71_0; // x20
  Il2CppObject *v36; // x21
  struct BattleBuffData___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v45; // x0
  BattleBuffData___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_T__o *v47; // x19
  struct BattleBuffData___c_StaticFields *v48; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__71_1; // x20
  Il2CppObject *v50; // x21
  struct BattleBuffData___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_42EC12E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_BattleBuffData___c__CancelExtendingLife_b__71_0__, v23, v24, v25);
    sub_B5D5C4(&Method_BattleBuffData___c__CancelExtendingLife_b__71_1__, v26, v27, v28);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v29, v30, v31);
    byte_42EC12E = 1;
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffEnumerable(this, method);
  v33 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v33 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__71_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__71_0;
  if ( !_9__71_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__71_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__71_0,
      v36,
      Method_BattleBuffData___c__CancelExtendingLife_b__71_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    v37 = BattleBuffData___c_TypeInfo->static_fields;
    v37->__9__71_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__71_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v37->__9__71_0,
      (System_Int32_array **)_9__71_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v32,
          (System_Func_TSource__bool__o *)_9__71_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v45 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v44,
          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v46 = BattleBuffData___c_TypeInfo;
  v47 = (System_Collections_Generic_IEnumerable_T__o *)v45;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v46 = BattleBuffData___c_TypeInfo;
  }
  v48 = v46->static_fields;
  _9__71_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v48->__9__71_1;
  if ( !_9__71_1 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v48 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)v48->__9;
    _9__71_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__71_1,
      v50,
      Method_BattleBuffData___c__CancelExtendingLife_b__71_1__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v51 = BattleBuffData___c_TypeInfo->static_fields;
    v51->__9__71_1 = (struct System_Action_BattleBuffData_BuffData__o *)_9__71_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v51->__9__71_1,
      (System_Int32_array **)_9__71_1,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v47,
    (System_Action_T__o *)_9__71_1,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v47, 0LL);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  __int64 v29; // x1
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
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v60; // x21

  if ( (byte_42EC162 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, now, max, servantIndv);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v18, v19, v20);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass146_0__ChangeBuffState_b__0__, v21, v22, v23);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass146_0_TypeInfo, v24, v25, v26);
    byte_42EC162 = 1;
  }
  v27 = sub_B5D694(BattleBuffData___c__DisplayClass146_0_TypeInfo);
  BattleBuffData___c__DisplayClass146_0___ctor((BattleBuffData___c__DisplayClass146_0_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_7;
  *(_QWORD *)(v27 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_DWORD *)(v27 + 24) = now;
  *(_DWORD *)(v27 + 28) = max;
  *(_QWORD *)(v27 + 32) = servantIndv;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v27 + 32),
    (System_Int32_array **)servantIndv,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  *(_QWORD *)(v27 + 40) = buffIndv;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 40), (System_Int32_array **)buffIndv, v42, v43, v44, v45, v46, v47);
  *(_QWORD *)(v27 + 48) = fieldIndiv;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v27 + 48),
    (System_Int32_array **)fieldIndiv,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  *(_QWORD *)(v27 + 56) = canSubStateBuffIndv;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v27 + 56),
    (System_Int32_array **)canSubStateBuffIndv,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  *(_BYTE *)(v27 + 64) = 0;
  v60 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v60,
    (Il2CppObject *)v27,
    Method_BattleBuffData___c__DisplayClass146_0__ChangeBuffState_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v60,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.activeList) == 0LL) )
  {
LABEL_7:
    sub_B5D69C(passiveList, v29);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
    (System_Action_T__o *)v60,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  return *(_BYTE *)(v27 + 64);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__CheckAndGetFixedBuffArray(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *checkBuffArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  _BOOL8 IsUnfix; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x8
  unsigned __int64 v20; // x23
  BattleBuffData_BuffData_o *v21; // x22
  __int64 v23; // x0

  if ( (byte_42EC193 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
      (_DWORD)checkBuffArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12, v13, v14);
    byte_42EC193 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checkBuffArray )
    goto LABEL_14;
  v19 = *(_QWORD *)&checkBuffArray->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v19 )
      {
        v23 = sub_B5D6C8(IsUnfix);
        sub_B5D668(v23, 0LL);
      }
      v21 = checkBuffArray->m_Items[v20];
      IsUnfix = BattleBuffData__IsUnfix(this, v21, v18);
      if ( !IsUnfix )
      {
        if ( !v15 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v19) = checkBuffArray->max_length;
      ++v20;
    }
    while ( (__int64)v20 < (int)v19 );
  }
  if ( !v15 )
LABEL_14:
    sub_B5D69C(IsUnfix, v17);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


void __fastcall BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  WebViewManager_o *Instance; // x0
  __int64 v31; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  BuffEntity_o *v33; // x0
  int v34; // w22
  WarEntity_o *Entity; // x8
  int32_t v36; // w21
  _BOOL8 v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EC10D & 1) == 0 )
  {
    sub_B5D5C4(&BuffEntity_TypeInfo, (_DWORD)buffList, (_DWORD)logic, method);
    sub_B5D5C4(&BuffList_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    byte_42EC10D = 1;
  }
  memset(&v40, 0, sizeof(v40));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  v33 = (BuffEntity_o *)sub_B5D694(BuffEntity_TypeInfo);
  BuffEntity___ctor(v33, 0LL);
  if ( !buffList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v40 = v39;
  v34 = 0;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v37 )
      break;
    if ( !v40.fields.current )
      sub_B5D69C(v37, v38);
    if ( !BYTE3(v40.fields.current[23].klass) )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(v37, v38);
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int32_t)v40.fields.current[1].klass,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( Entity )
      {
        v36 = *(&Entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        v34 |= BuffList__CheckType(133, v36, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v34 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      return;
    }
LABEL_21:
    sub_B5D69C(Instance, v31);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__CheckBuffGroup(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        int32_t groupId,
        int32_t attachTarget,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  System_Func_int__bool__o **v36; // x22
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x1
  Il2CppObject *current; // x23
  BuffMaster_o *buffMst; // x0
  __int64 v41; // x1
  System_Int32_array *monitor; // x23
  System_Func_int__bool__o *v43; // x24
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int v50; // w19
  int v51; // w20
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EC140 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)buffList, groupId, *(_QWORD *)&attachTarget);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass93_0__CheckBuffGroup_b__0__, v27, v28, v29);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass93_0_TypeInfo, v30, v31, v32);
    byte_42EC140 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v33 = sub_B5D694(BattleBuffData___c__DisplayClass93_0_TypeInfo);
  BattleBuffData___c__DisplayClass93_0___ctor((BattleBuffData___c__DisplayClass93_0_o *)v33, 0LL);
  if ( !v33 || (*(_DWORD *)(v33 + 16) = attachTarget, !buffList) )
    sub_B5D69C(v34, v35);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v54,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v55 = v54;
  v36 = (System_Func_int__bool__o **)(v33 + 24);
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v37 )
      break;
    current = v55.fields.current;
    if ( !v55.fields.current )
      sub_B5D69C(v37, v38);
    if ( !BYTE3(v55.fields.current[23].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v38);
      if ( !buffMst )
        sub_B5D69C(0LL, v41);
      if ( BuffMaster__GetBuffGroup(buffMst, (int32_t)current[1].klass, -1, 0LL) == groupId )
      {
        monitor = (System_Int32_array *)current[13].monitor;
        if ( monitor )
        {
          v43 = *v36;
          if ( !*v36 )
          {
            v43 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v43,
              (Il2CppObject *)v33,
              Method_BattleBuffData___c__DisplayClass93_0__CheckBuffGroup_b__0__,
              (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
            *v36 = v43;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v33 + 24),
              (System_Int32_array **)v43,
              v44,
              v45,
              v46,
              v47,
              v48,
              v49);
          }
          if ( BasicHelper__Any_int__28142236(
                 monitor,
                 (System_Func_T__bool__o *)v43,
                 (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
          {
            v50 = 1;
            v51 = 3;
            goto LABEL_17;
          }
        }
      }
    }
  }
  v50 = 0;
  v51 = 1;
LABEL_17:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v50 & ((unsigned int)(v51 + 1) >> 2);
}


bool __fastcall BattleBuffData__CheckBuffRateTypeOrIndiv(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buffData,
        int32_t *value,
        int32_t *maxBuffRate,
        int32_t upperParam,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 BuffList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  il2cpp_array_size_t v20; // w8
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x3
  int v23; // w8
  __int64 v24; // x23
  unsigned int v25; // w25
  bool v26; // w27
  __int64 v27; // x28
  __int64 v28; // x8
  BattleBuffData_BuffData_o **v29; // x28
  __int64 v30; // t1
  const MethodInfo *v31; // x3
  System_Int32_array *v32; // x24
  BattleBuffData_o *UpBuffRateBuffIndivList; // x0
  const MethodInfo *v34; // x5
  int32_t v35; // w8
  __int64 v37; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EC16C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__,
      (_DWORD)buffData,
      (_DWORD)value,
      maxBuffRate);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BuffList_TYPE___TypeInfo, v14, v15, v16);
    byte_42EC16C = 1;
  }
  entity = 0LL;
  *value = 0;
  *maxBuffRate = upperParam;
  BuffList = sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !BuffList )
    goto LABEL_41;
  v20 = *(_DWORD *)(BuffList + 24);
  if ( !v20 )
    goto LABEL_42;
  *(_DWORD *)(BuffList + 32) = 162;
  if ( v20 == 1 )
    goto LABEL_42;
  *(_DWORD *)(BuffList + 36) = 161;
  if ( !BattleBuffData__CheckBuffType(this, (System_Int32_array *)BuffList, buffData, v19) )
  {
    BuffList = sub_B5D5DC(BuffList_TYPE___TypeInfo, 1LL);
    if ( BuffList )
    {
      if ( !*(_DWORD *)(BuffList + 24) )
        goto LABEL_42;
      *(_DWORD *)(BuffList + 32) = 162;
      BuffList = (__int64)BattleBuffData__GetBuffList(this, (BuffList_TYPE_array *)BuffList, 0LL, 0, v21);
      if ( BuffList )
      {
        v23 = *(_DWORD *)(BuffList + 24);
        v24 = BuffList;
        if ( v23 >= 1 )
        {
          v25 = 0;
          v26 = 0;
          while ( v25 < v23 )
          {
            v27 = v24 + 8LL * (int)v25;
            v30 = *(_QWORD *)(v27 + 32);
            v29 = (BattleBuffData_BuffData_o **)(v27 + 32);
            v28 = v30;
            if ( !v30 )
              goto LABEL_41;
            v18 = *(_QWORD *)(v28 + 256);
            if ( v18 )
            {
              if ( *(_QWORD *)(v18 + 24) )
              {
                BuffList = BattleBuffData__CheckBuffType(this, (System_Int32_array *)v18, buffData, v22);
                if ( (BuffList & 1) != 0 )
                {
                  if ( v25 >= *(_DWORD *)(v24 + 24) )
                    break;
                  BuffList = BattleBuffData__checkBuffSuccessful(this, *v29, 1, v31);
                  if ( (BuffList & 1) != 0 )
                    goto LABEL_30;
                }
              }
            }
            entity = 0LL;
            BuffList = (__int64)BattleBuffData__get_buffMst(this, (const MethodInfo *)v18);
            if ( v25 >= *(_DWORD *)(v24 + 24) )
              break;
            if ( !*v29 || !BuffList )
              goto LABEL_41;
            BuffList = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)BuffList,
                         &entity,
                         (*v29)->fields.buffId,
                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
                v32 = (System_Int32_array *)BuffList;
                UpBuffRateBuffIndivList = (BattleBuffData_o *)BuffEntity__GetUpBuffRateBuffIndivList(
                                                                (BuffEntity_o *)entity,
                                                                0LL);
                BuffList = BattleBuffData__checkBuffTypeIndiviuality(
                             UpBuffRateBuffIndivList,
                             v32,
                             (System_Int32_array *)UpBuffRateBuffIndivList,
                             (BuffEntity_o *)entity,
                             0LL,
                             v34);
                if ( (BuffList & 1) != 0 )
                {
                  if ( v25 >= *(_DWORD *)(v24 + 24) )
                    break;
                  BuffList = BattleBuffData__checkBuffSuccessful(this, *v29, 1, v22);
                  if ( (BuffList & 1) != 0 )
                  {
LABEL_30:
                    if ( v25 >= *(_DWORD *)(v24 + 24) )
                      break;
                    if ( !*v29 )
                      goto LABEL_41;
                    *value += (*v29)->fields.param;
                    if ( v25 >= *(_DWORD *)(v24 + 24) )
                      break;
                    if ( !*v29 )
                      goto LABEL_41;
                    v35 = (*v29)->fields.maxBuffRate;
                    v26 = 1;
                    if ( *maxBuffRate >= v35 )
                      v35 = *maxBuffRate;
                    *maxBuffRate = v35;
                  }
                }
              }
            }
            v23 = *(_DWORD *)(v24 + 24);
            if ( (int)++v25 >= v23 )
              return v26;
          }
LABEL_42:
          v37 = sub_B5D6C8(BuffList);
          sub_B5D668(v37, 0LL);
        }
        return 0;
      }
    }
LABEL_41:
    sub_B5D69C(BuffList, v18);
  }
  return 0;
}


bool __fastcall BattleBuffData__CheckBuffType(
        BattleBuffData_o *this,
        System_Int32_array *types,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x22
  BuffMaster_o *buffMst; // x0
  const MethodInfo *v24; // x1
  System_Func_int__bool__o *v25; // x20

  if ( (byte_42EC17D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)types, (_DWORD)buffData, method);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass188_0__CheckBuffType_b__0__, v16, v17, v18);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass188_0_TypeInfo, v19, v20, v21);
    byte_42EC17D = 1;
  }
  v22 = sub_B5D694(BattleBuffData___c__DisplayClass188_0_TypeInfo);
  BattleBuffData___c__DisplayClass188_0___ctor((BattleBuffData___c__DisplayClass188_0_o *)v22, 0LL);
  if ( !buffData )
    goto LABEL_10;
  if ( buffData->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, v24);
  if ( !v22 || !buffMst )
LABEL_10:
    sub_B5D69C(buffMst, v24);
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
         (WarEntity_o **)(v22 + 16),
         buffData->fields.buffId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    v25 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v25,
      (Il2CppObject *)v22,
      Method_BattleBuffData___c__DisplayClass188_0__CheckBuffType_b__0__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    return BasicHelper__Any_int__28142236(
             types,
             (System_Func_T__bool__o *)v25,
             (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
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
    sub_B5D69C(this, commandData);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  BuffList_ActInfo_o *ActInfo; // x24
  const MethodInfo *v30; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v35; // x19
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x3
  __int64 v41; // x19
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  BattleBuffData_BuffData_o *v50; // x0
  __int64 v51; // x1
  BattleBuffData_BuffData_o *v52; // x25
  _BOOL8 IsCommandAssistBuff; // x0
  __int64 v54; // x1
  __int64 v55; // x1
  bool v56; // w20
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  const MethodInfo *v62; // [xsp+0h] [xbp-80h]
  int v63; // [xsp+10h] [xbp-70h]
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42EC1AB & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)selfIndiv, (_DWORD)opponentIndiv, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v25, v26, v27);
    byte_42EC1AB = 1;
  }
  plusMinus = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  plusMinus = 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(38, 0LL, 0LL);
  v31 = BattleBuffData__AllBuffValidEnumerable(this, 0, v30);
  if ( !v31 )
    sub_B5D69C(0LL, v32);
  klass = v31->klass;
  v35 = v31;
  if ( *(_WORD *)&v31->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v36;
      p_offset += 4;
      if ( v36 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AF54C0(v31, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v33);
  }
  v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v35,
          *(_QWORD *)(p_method + 8));
  if ( !v41 )
    sub_B5D69C(0LL, v39);
  while ( 1 )
  {
    v42 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_21;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_21:
      v45 = sub_AF54C0(v41, System_Collections_IEnumerator_TypeInfo, 0LL, v40);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
      break;
    v46 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v47 = 0LL;
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v48 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_28;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_28:
      v49 = sub_AF54C0(v41, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v40);
    }
    v50 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
    v52 = v50;
    if ( !v50 )
      sub_B5D69C(0LL, v51);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v50, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v52,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v52, 0LL) || v52->fields.isActiveCC) )
    {
      IsCommandAssistBuff = BattleBuffData_BuffData__IsCommandAssistBuff(v52, 0LL);
      if ( !IsCommandAssistBuff || (IsCommandAssistBuff = BattleBuffData_BuffData__IsActiveCommandAssist(v52, 0LL)) )
      {
        if ( !Master_WarQuestSelectionMaster )
          sub_B5D69C(IsCommandAssistBuff, v54);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               Master_WarQuestSelectionMaster,
               &entity,
               v52->fields.buffId,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B5D69C(0LL, v55);
          if ( BuffEntity__IsDisableForciblyAddState((BuffEntity_o *)entity, 0LL)
            && BattleBuffData__checkIndiviuality_31681276(
                 this,
                 ActInfo,
                 v52,
                 selfIndiv,
                 opponentIndiv,
                 0LL,
                 0LL,
                 &plusMinus,
                 v62)
            && BattleBuffData__checkBuffSuccessful(this, v52, 0, v40) )
          {
            v63 = 178;
            v56 = 1;
            goto LABEL_45;
          }
        }
      }
    }
  }
  v56 = 0;
  v63 = 176;
LABEL_45:
  v57 = *(_QWORD *)v41;
  if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
  {
    v58 = 0LL;
    v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      ++v58;
      v59 += 4;
      if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
        goto LABEL_49;
    }
    v60 = v57 + 16LL * *v59 + 312;
  }
  else
  {
LABEL_49:
    v60 = sub_AF54C0(v41, System_IDisposable_TypeInfo, 0LL, v40);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v60)(v41, *(_QWORD *)(v60 + 8));
  if ( v63 == 176 )
    return 0;
  return v56;
}


void __fastcall BattleBuffData__CheckDummyBuffData(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *reList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t size; // w8
  unsigned __int64 v12; // x21
  BattleBuffData_ShowBuffData_o *v13; // x8
  int v14; // w8
  unsigned __int64 i; // x20
  signed __int64 v16; // x8
  struct BattleBuffData_ShowBuffData_array *items; // x8
  BattleBuffData_ShowBuffData_o *v18; // x9
  BattleBuffData_ShowBuffData_o *v19; // x9
  BattleBuffData_ShowBuffData_o *v20; // x8

  if ( (byte_42EC11E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__RemoveAt__,
      (_DWORD)reList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Count__, v5, v6, v7);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Item__,
                                 v8,
                                 v9,
                                 v10);
    byte_42EC11E = 1;
  }
  if ( !reList )
LABEL_32:
    sub_B5D69C(this, reList);
  size = reList->fields._size;
  if ( size - 1 >= 0 )
  {
    v12 = size - 1;
    while ( 1 )
    {
      if ( (__int64)v12 < size )
      {
        if ( v12 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v13 = reList->fields._items->m_Items[v12];
        if ( !v13 )
          goto LABEL_32;
        if ( !v13->fields.isRemove )
        {
          v14 = reList->fields._size - 1;
          if ( v14 >= 0 )
          {
            for ( i = v14; (i & 0x80000000) == 0; --i )
            {
              if ( v12 != i )
              {
                v16 = reList->fields._size;
                if ( (__int64)i < v16 && (__int64)v12 < v16 )
                {
                  if ( i >= (unsigned int)reList->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  items = reList->fields._items;
                  v18 = items->m_Items[i];
                  if ( !v18 )
                    goto LABEL_32;
                  if ( v18->fields.isRemove )
                  {
                    if ( v12 >= (unsigned int)reList->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                    v19 = items->m_Items[v12];
                    if ( !v19 )
                      goto LABEL_32;
                    if ( i >= (unsigned int)reList->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                    v20 = items->m_Items[i];
                    if ( !v20 )
                      goto LABEL_32;
                    if ( v19->fields.addOrder == v20->fields.addOrder )
                      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                        (System_Collections_Generic_List_XWeaponTrail_Element__o *)reList,
                        i,
                        (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__RemoveAt__);
                  }
                }
              }
            }
          }
        }
      }
      if ( (--v12 & 0x80000000) != 0 )
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  __int64 v29; // x0
  __int64 v30; // x1
  bool v31; // w21
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x22
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EC143 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__,
      (_DWORD)tvals,
      isIncludeIgnoreIndiv,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v25, v26, v27);
    byte_42EC143 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !svtDataList )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)svtDataList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v40 = v39;
  v31 = isIncludeIgnoreIndiv;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v32 )
      break;
    current = v40.fields.current;
    if ( !v40.fields.current )
      sub_B5D69C(v32, v33);
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             (BattleServantData_o *)v40.fields.current,
                                             0LL,
                                             v31,
                                             0,
                                             0,
                                             0LL);
    v36 = Individuality__CheckSignedIndividualities(ConcatServantAndBuffIndividualityies, tvals, 0LL);
    if ( v36 )
    {
      if ( !v28 )
        sub_B5D69C(v36, v37);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v28 )
LABEL_14:
    sub_B5D69C(v29, v30);
  return (BattleServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
}


bool __fastcall BattleBuffData__CheckInvalidSacrificeIndiv(
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleBuffData_BuffData_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 InvalidSacrificeIndividualities; // x0
  __int64 v21; // x1
  System_Int32_array *v22; // x20
  bool v23; // w21
  System_Int32_array *Individualty; // x0
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  struct BattleBuffData_StaticFields *static_fields; // x8
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t v33; // w21
  int32_t v34; // w21
  __int64 v36; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = buffData;
  if ( (byte_42EC1A9 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BuffList_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v14, v15, v16);
    buffData = (BattleBuffData_BuffData_o *)sub_B5D5C4(&int___TypeInfo, v17, v18, v19);
    byte_42EC1A9 = 1;
  }
  entity = 0LL;
  InvalidSacrificeIndividualities = (__int64)BattleBuffData__GetInvalidSacrificeIndividualities((const MethodInfo *)buffData);
  if ( !v4 )
    goto LABEL_27;
  v22 = (System_Int32_array *)InvalidSacrificeIndividualities;
  v23 = 1;
  Individualty = BattleBuffData_BuffData__GetIndividualty(v4, 1, 0, 0, 0LL);
  if ( !Individuality__CheckIndividualities(Individualty, v22, 0LL) )
  {
    InvalidSacrificeIndividualities = (__int64)BattleBuffData_TypeInfo->static_fields->s_buffMst;
    if ( InvalidSacrificeIndividualities )
      goto LABEL_11;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
    static_fields = BattleBuffData_TypeInfo->static_fields;
    static_fields->s_buffMst = (struct BuffMaster_o *)Master_WarQuestSelectionMaster;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->s_buffMst,
      Master_WarQuestSelectionMaster,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    InvalidSacrificeIndividualities = (__int64)BattleBuffData_TypeInfo->static_fields->s_buffMst;
    if ( InvalidSacrificeIndividualities )
    {
LABEL_11:
      InvalidSacrificeIndividualities = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)InvalidSacrificeIndividualities,
                                          &entity,
                                          v4->fields.buffId,
                                          (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (InvalidSacrificeIndividualities & 1) == 0 )
        return 0;
      if ( entity )
      {
        v33 = *(&entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        InvalidSacrificeIndividualities = BuffList__CheckType(40, v33, 0LL);
        if ( (InvalidSacrificeIndividualities & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_27;
          v34 = *(&entity->fields.id + 1);
          if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          if ( !BuffList__CheckType(41, v34, 0LL) )
            return 0;
        }
        InvalidSacrificeIndividualities = sub_B5D5DC(int___TypeInfo, 1LL);
        if ( InvalidSacrificeIndividualities )
        {
          if ( !*(_DWORD *)(InvalidSacrificeIndividualities + 24) )
          {
            v36 = sub_B5D6C8(InvalidSacrificeIndividualities);
            sub_B5D668(v36, 0LL);
          }
          *(_DWORD *)(InvalidSacrificeIndividualities + 32) = v4->fields.param;
          return Individuality__CheckIndividualities((System_Int32_array *)InvalidSacrificeIndividualities, v22, 0LL);
        }
      }
    }
LABEL_27:
    sub_B5D69C(InvalidSacrificeIndividualities, v21);
  }
  return v23;
}


bool __fastcall BattleBuffData__CheckInvalidSacrificeIndivArray(
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffDataList,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x1
  char v15; // w19
  int v16; // w20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-28h] BYREF

  v4 = buffDataList;
  if ( (byte_42EC1AA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8, v9, v10);
    buffDataList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B5D5C4(
                                                                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                                   v11,
                                                                                   v12,
                                                                                   v13);
    byte_42EC1AA = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !v4 )
    sub_B5D69C(buffDataList, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v18.fields.current, v14) )
    {
      v15 = 1;
      v16 = 2;
      goto LABEL_9;
    }
  }
  v16 = 0;
  v15 = 0;
LABEL_9:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v16 == 2) & v15;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__CommonTurnProgressing(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        int32_t defCondState,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x21
  __int64 v55; // x1
  void *passiveList; // x0
  _BOOL8 v57; // x0
  __int64 v58; // x1
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v61; // x24
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__67_0; // x25
  Il2CppObject *v64; // x26
  struct BattleBuffData___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v72; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v73; // x25
  _BOOL8 v74; // x0
  __int64 v75; // x1
  struct BattleData_o *v76; // x8
  struct BaseBattleEvent_o *v77; // x0
  int v78; // w22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x22
  struct BattleBuffData___c_StaticFields *v80; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__67_1; // x23
  Il2CppObject *v82; // x24
  struct BattleBuffData___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v91; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v92; // x23
  const MethodInfo *v93; // x3
  System_Collections_Generic_IEnumerable_T__o *v94; // x0
  const MethodInfo *v95; // x2
  BattleBuffData_o *v96; // x0
  const MethodInfo *v97; // x3
  const MethodInfo *v98; // x1
  System_Collections_Generic_List_Enumerator_T__o v100; // [xsp+8h] [xbp-98h] BYREF
  int v101[2]; // [xsp+20h] [xbp-80h]
  int v102; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42EC12A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleBuffData_checkBuffClear__, (_DWORD)logic, isEndEnemyTurn, *(_QWORD *)&defCondState);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v39, v40, v41);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_BattleBuffData___c__CommonTurnProgressing_b__67_0__, v45, v46, v47);
    sub_B5D5C4(&Method_BattleBuffData___c__CommonTurnProgressing_b__67_1__, v48, v49, v50);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v51, v52, v53);
    byte_42EC12A = 1;
  }
  memset(&i, 0, sizeof(i));
  v102 = 0;
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v100,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v100;
        ;
        ((void (__fastcall *)(struct BaseBattleEvent_o *, BattleBuffData_o *, Il2CppObject *, bool, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._32_ProgressBuffTurn.method)(
          battleEvent,
          this,
          i.fields.current,
          isEndEnemyTurn,
          (unsigned int)defCondState,
          battleEvent->klass->vtable._33_MakeTurnCondStateByServant.methodPtr) )
  {
    v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v57 )
      break;
    if ( !logic )
      sub_B5D69C(v57, v58);
    data = logic->fields.data;
    if ( !data )
      sub_B5D69C(v57, v58);
    battleEvent = data->fields.battleEvent;
    if ( !battleEvent )
      sub_B5D69C(0LL, v58);
  }
  v101[0] = 73;
  v102 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v102 = 0;
  v61 = this->fields.passiveList;
  passiveList = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)passiveList + 23);
  _9__67_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( (*((_BYTE *)passiveList + 307) & 4) != 0 && !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v64 = (Il2CppObject *)static_fields->__9;
    _9__67_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__67_0,
      v64,
      Method_BattleBuffData___c__CommonTurnProgressing_b__67_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v65 = BattleBuffData___c_TypeInfo->static_fields;
    v65->__9__67_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__67_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v65->__9__67_0,
      (System_Int32_array **)_9__67_0,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
  }
  if ( !v61 )
    goto LABEL_51;
  passiveList = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v61,
                  (System_Predicate_T__o *)_9__67_0,
                  (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v54 )
    goto LABEL_51;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v54,
    (System_Collections_Generic_IEnumerable_T__o *)passiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v72 = this->fields.passiveList;
  v73 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v73,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v72 )
    goto LABEL_51;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v72,
    (System_Predicate_T__o *)v73,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v100,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v100;
        ;
        ((void (__fastcall *)(struct BaseBattleEvent_o *, BattleBuffData_o *, Il2CppObject *, bool, _QWORD, Il2CppMethodPointer))v77->klass->vtable._32_ProgressBuffTurn.method)(
          v77,
          this,
          i.fields.current,
          isEndEnemyTurn,
          (unsigned int)defCondState,
          v77->klass->vtable._33_MakeTurnCondStateByServant.methodPtr) )
  {
    v74 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v74 )
      break;
    if ( !logic )
      sub_B5D69C(v74, v75);
    v76 = logic->fields.data;
    if ( !v76 )
      sub_B5D69C(v74, v75);
    v77 = v76->fields.battleEvent;
    if ( !v77 )
      sub_B5D69C(0LL, v75);
  }
  v101[0] = 214;
  v78 = ++v102;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v78 && v101[v78 - 1] == 214 )
    v102 = v78 - 1;
  activeList = this->fields.activeList;
  passiveList = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  v80 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)passiveList + 23);
  _9__67_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v80->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( (*((_BYTE *)passiveList + 307) & 4) != 0 && !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      v80 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v82 = (Il2CppObject *)v80->__9;
    _9__67_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__67_1,
      v82,
      Method_BattleBuffData___c__CommonTurnProgressing_b__67_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v83 = BattleBuffData___c_TypeInfo->static_fields;
    v83->__9__67_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__67_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v83->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  if ( !activeList )
    goto LABEL_51;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__67_1,
                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v54,
    All,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v91 = this->fields.activeList;
  v92 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v92,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v91 )
    goto LABEL_51;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v91,
    (System_Predicate_T__o *)v92,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v94 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v54,
                                                         0,
                                                         v93);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v54,
    v94,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v54,
    v95);
  BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
    v96,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v54,
    logic,
    v97);
  passiveList = (void *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v54,
                          v98);
  if ( ((unsigned __int8)passiveList & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateFieldBuff(logic, 0LL);
      return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v54,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    }
LABEL_51:
    sub_B5D69C(passiveList, v55);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v54,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__CreateDummyBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int32_t addOrder; // w8
  System_Int32_array **intervalData; // x1

  if ( (byte_42EC14D & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_BuffData_TypeInfo, (_DWORD)buff, (_DWORD)method, v3);
    byte_42EC14D = 1;
  }
  v5 = sub_B5D694(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v5, 0LL);
  if ( !buff || !v5 )
    sub_B5D69C(v6, v7);
  addOrder = buff->fields.addOrder;
  *(_BYTE *)(v5 + 371) = 1;
  *(_DWORD *)(v5 + 140) = addOrder;
  *(_DWORD *)(v5 + 372) = buff->fields.buffId;
  *(_BYTE *)(v5 + 33) = buff->fields.passive;
  *(_DWORD *)(v5 + 144) = buff->fields.state;
  intervalData = (System_Int32_array **)buff->fields.intervalData;
  *(_QWORD *)(v5 + 360) = intervalData;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 360), intervalData, v8, v9, v10, v11, v12, v13);
  return (BattleBuffData_BuffData_o *)v5;
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__DebugGetShowServantParamAll(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **v36; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v37; // x22

  if ( (byte_42EC122 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass45_0__DebugGetShowServantParamAll_b__0__, v20, v21, v22);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass45_0_TypeInfo, v23, v24, v25);
    byte_42EC122 = 1;
  }
  v26 = sub_B5D694(BattleBuffData___c__DisplayClass45_0_TypeInfo);
  BattleBuffData___c__DisplayClass45_0___ctor((BattleBuffData___c__DisplayClass45_0_o *)v26, 0LL);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v26 )
    goto LABEL_8;
  *(_QWORD *)(v26 + 16) = v27;
  v36 = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o **)(v26 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)v27, v30, v31, v32, v33, v34, v35);
  v37 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v37,
    (Il2CppObject *)v26,
    Method_BattleBuffData___c__DisplayClass45_0__DebugGetShowServantParamAll_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v37,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v37,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = *v36) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(passiveList, v29);
  }
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)passiveList,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


void __fastcall BattleBuffData__DelForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21

  if ( (byte_42EC13E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)buffArray, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v9, v10, v11);
    sub_B5D5C4(&Method_BattleBuffData__DelForceBuff_b__90_0__, v12, v13, v14);
    byte_42EC13E = 1;
  }
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleBuffData__DelForceBuff_b__90_0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v15,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData__DeleteDummyBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleBuffData_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x23
  int32_t v12; // w20
  __int64 v13; // x21
  __int64 v14; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x23
  int32_t v16; // w20
  __int64 v17; // x21
  __int64 v18; // x8

  v4 = this;
  if ( (byte_42EC196 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v5, v6, v7);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__,
                                 v8,
                                 v9,
                                 v10);
    byte_42EC196 = 1;
  }
  activeList = v4->fields.activeList;
  if ( !activeList )
    goto LABEL_26;
  v12 = activeList->fields._size - 1;
  if ( v12 >= 0 )
  {
    v13 = 8LL * v12 + 32;
    do
    {
      if ( activeList->fields._size <= (unsigned int)v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v14 = *(__int64 *)((char *)&activeList->fields._items->obj.klass + v13);
      if ( !v14 )
        break;
      if ( *(_BYTE *)(v14 + 371) )
      {
        this = (BattleBuffData_o *)v4->fields.activeList;
        if ( !this )
          break;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v12,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      if ( --v12 < 0 )
        goto LABEL_15;
      activeList = v4->fields.activeList;
      v13 -= 8LL;
    }
    while ( activeList );
LABEL_26:
    sub_B5D69C(this, method);
  }
LABEL_15:
  passiveList = v4->fields.passiveList;
  if ( !passiveList )
    goto LABEL_26;
  v16 = passiveList->fields._size - 1;
  if ( v16 >= 0 )
  {
    v17 = 8LL * v16 + 32;
    while ( 1 )
    {
      if ( passiveList->fields._size <= (unsigned int)v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v18 = *(__int64 *)((char *)&passiveList->fields._items->obj.klass + v17);
      if ( !v18 )
        goto LABEL_26;
      if ( *(_BYTE *)(v18 + 371) )
      {
        this = (BattleBuffData_o *)v4->fields.passiveList;
        if ( !this )
          goto LABEL_26;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v16,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      if ( --v16 < 0 )
        return;
      passiveList = v4->fields.passiveList;
      v17 -= 8LL;
      if ( !passiveList )
        goto LABEL_26;
    }
  }
}


void __fastcall BattleBuffData__DirectUpdateWaitIntervalBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *updateWaitIntervalBuffList; // x20
  void *v22; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__27_0; // x21
  Il2CppObject *v25; // x22
  struct BattleBuffData___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42EC111 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v11, v12, v13);
    sub_B5D5C4(&Method_BattleBuffData___c__DirectUpdateWaitIntervalBuff_b__27_0__, v14, v15, v16);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v17, v18, v19);
    byte_42EC111 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.updateWaitIntervalBuffList, 0LL) )
  {
    updateWaitIntervalBuffList = this->fields.updateWaitIntervalBuffList;
    v22 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v22 = BattleBuffData___c_TypeInfo;
    }
    static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)v22 + 23);
    _9__27_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (*((_BYTE *)v22 + 307) & 4) != 0 && !*((_DWORD *)v22 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__27_0,
        v25,
        Method_BattleBuffData___c__DirectUpdateWaitIntervalBuff_b__27_0__,
        (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      v26 = BattleBuffData___c_TypeInfo->static_fields;
      v26->__9__27_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__27_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v26->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    if ( !updateWaitIntervalBuffList
      || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)updateWaitIntervalBuffList,
            (System_Action_T__o *)_9__27_0,
            (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
          (v22 = this->fields.updateWaitIntervalBuffList) == 0LL) )
    {
      sub_B5D69C(v22, v20);
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v22,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  }
}


bool __fastcall BattleBuffData__ExistsTargetIntervalBuff(
        BattleBuffData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  BattleBuffData_BuffData_array *AllIntervalBuffArray; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x20

  if ( (byte_42EC1A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleBuffData_BuffData____68810672, targetType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass244_0__ExistsTargetIntervalBuff_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass244_0_TypeInfo, v15, v16, v17);
    byte_42EC1A6 = 1;
  }
  v18 = sub_B5D694(BattleBuffData___c__DisplayClass244_0_TypeInfo);
  BattleBuffData___c__DisplayClass244_0___ctor((BattleBuffData___c__DisplayClass244_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v18 + 24) = targetType;
  AllIntervalBuffArray = BattleBuffData__GetAllIntervalBuffArray(this, v27);
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v29,
    (Il2CppObject *)v18,
    Method_BattleBuffData___c__DisplayClass244_0__ExistsTargetIntervalBuff_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)AllIntervalBuffArray,
           (System_Func_T__bool__o *)v29,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_BattleBuffData_BuffData____68810672);
}


BattleBuffData_ActValueResponse_o *__fastcall BattleBuffData__GetActValueDetail(
        BattleBuffData_o *this,
        BattleBuffData_ActValueRequest_o *actValueRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20
  struct BattleBuffData_CheckIndividualitiesData_o *CheckIndividualitiesData_k__BackingField; // x8
  BattleBuffData_o *v7; // x21
  int conditionalAuraBuff; // w9
  int32_t v9; // w20
  int32_t v10; // w21
  System_String_o *v11; // x22
  int32_t v12; // w23
  BattleBuffData_ActValueResponse_o *v13; // x24
  const MethodInfo *v15; // [xsp+18h] [xbp-58h]
  int32_t lowerParam; // [xsp+2Ch] [xbp-44h] BYREF
  System_String_o *missText; // [xsp+30h] [xbp-40h] BYREF
  int32_t upperParam; // [xsp+3Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_42EC169 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &BattleBuffData_ActValueResponse_TypeInfo,
                                 (_DWORD)actValueRequest,
                                 (_DWORD)method,
                                 v3);
    byte_42EC169 = 1;
  }
  upperParam = 0;
  missText = 0LL;
  lowerParam = 0;
  if ( !actValueRequest
    || (this = (BattleBuffData_o *)BattleBuffData_ActValueRequest__get_ActInfo(actValueRequest, 0LL),
        (CheckIndividualitiesData_k__BackingField = actValueRequest->fields._CheckIndividualitiesData_k__BackingField) == 0LL)
    || (v7 = this,
        this = (BattleBuffData_o *)BattleBuffData__getCalculationParam(
                                     v5,
                                     (BuffList_ActInfo_o *)this,
                                     CheckIndividualitiesData_k__BackingField->fields._selfConcatSvtIndividualities_k__BackingField,
                                     actValueRequest->fields._BuffIf_k__BackingField,
                                     CheckIndividualitiesData_k__BackingField->fields._opponentConcatSvtIndividualities_k__BackingField,
                                     &upperParam,
                                     &v5->fields.wkflg,
                                     &missText,
                                     &lowerParam,
                                     actValueRequest->fields._CheckIndividualitiesData_k__BackingField,
                                     0LL,
                                     v15),
        !v7) )
  {
    sub_B5D69C(this, actValueRequest);
  }
  conditionalAuraBuff = (int)v7->fields.conditionalAuraBuff;
  v9 = upperParam;
  v10 = lowerParam;
  v11 = missText;
  v12 = (_DWORD)this - conditionalAuraBuff;
  v13 = (BattleBuffData_ActValueResponse_o *)sub_B5D694(BattleBuffData_ActValueResponse_TypeInfo);
  BattleBuffData_ActValueResponse___ctor(v13, actValueRequest, v12, v9, v10, v11, 0LL);
  return v13;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetAllCommandAssistBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  BattleBuffData___c_c *v18; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__202_0; // x20
  Il2CppObject *v21; // x21
  struct BattleBuffData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EC188 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleBuffData___c__GetAllCommandAssistBuff_b__202_0__, v11, v12, v13);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v14, v15, v16);
    byte_42EC188 = 1;
  }
  passiveList = this->fields.passiveList;
  v18 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v18 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__202_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__202_0;
  if ( !_9__202_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__202_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__202_0,
      v21,
      Method_BattleBuffData___c__GetAllCommandAssistBuff_b__202_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v22 = BattleBuffData___c_TypeInfo->static_fields;
    v22->__9__202_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__202_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__202_0,
      (System_Int32_array **)_9__202_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !passiveList )
    sub_B5D69C(v18, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)_9__202_0,
                                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetAllCommandCodeBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  BattleBuffData___c_c *v18; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__201_0; // x20
  Il2CppObject *v21; // x21
  struct BattleBuffData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EC187 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleBuffData___c__GetAllCommandCodeBuff_b__201_0__, v11, v12, v13);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v14, v15, v16);
    byte_42EC187 = 1;
  }
  passiveList = this->fields.passiveList;
  v18 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v18 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__201_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__201_0;
  if ( !_9__201_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__201_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__201_0,
      v21,
      Method_BattleBuffData___c__GetAllCommandCodeBuff_b__201_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v22 = BattleBuffData___c_TypeInfo->static_fields;
    v22->__9__201_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__201_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__201_0,
      (System_Int32_array **)_9__201_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !passiveList )
    sub_B5D69C(v18, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)_9__201_0,
                                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllConnectedCommandCardBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  __int64 v33; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  void *All; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__229_0; // x22
  Il2CppObject *v38; // x23
  BattleServantConfConponent_o *p__9__229_0; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x20
  struct BattleBuffData___c_StaticFields *v47; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__229_1; // x21
  Il2CppObject *v49; // x22
  BattleServantConfConponent_o *p__9__229_1; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerable_T__o *v57; // x0

  if ( (byte_42EC19A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__229_0__, v23, v24, v25);
    sub_B5D5C4(&Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__229_1__, v26, v27, v28);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v29, v30, v31);
    byte_42EC19A = 1;
  }
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  activeList = this->fields.activeList;
  All = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__229_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__229_0;
  if ( !_9__229_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__229_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__229_0,
      v38,
      Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__229_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__229_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__229_0;
    p__9__229_0->klass = (BattleServantConfConponent_c *)_9__229_0;
    sub_B5D560(p__9__229_0, (System_Int32_array **)_9__229_0, v40, v41, v42, v43, v44, v45);
  }
  if ( !activeList )
    goto LABEL_23;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
          (System_Predicate_T__o *)_9__229_0,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v32 )
    goto LABEL_23;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  All = BattleBuffData___c_TypeInfo;
  passiveList = this->fields.passiveList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v47 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__229_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v47->__9__229_1;
  if ( !_9__229_1 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      v47 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)v47->__9;
    _9__229_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__229_1,
      v49,
      Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__229_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__229_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__229_1;
    p__9__229_1->klass = (BattleServantConfConponent_c *)_9__229_1;
    sub_B5D560(p__9__229_1, (System_Int32_array **)_9__229_1, v51, v52, v53, v54, v55, v56);
  }
  if ( !passiveList )
LABEL_23:
    sub_B5D69C(All, v33);
  v57 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                         (System_Predicate_T__o *)_9__229_1,
                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
    v57,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllIntervalBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  BattleBuffData___c_c *v21; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__243_0; // x20
  Il2CppObject *v24; // x21
  BattleServantConfConponent_o *p__9__243_0; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42EC1A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleBuffData___c__GetAllIntervalBuffArray_b__243_0__, v14, v15, v16);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v17, v18, v19);
    byte_42EC1A5 = 1;
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffEnumerable(this, method);
  v21 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v21 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__243_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__243_0;
  if ( !_9__243_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__243_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__243_0,
      v24,
      Method_BattleBuffData___c__GetAllIntervalBuffArray_b__243_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    p__9__243_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__243_0;
    p__9__243_0->klass = (BattleServantConfConponent_c *)_9__243_0;
    sub_B5D560(p__9__243_0, (System_Int32_array **)_9__243_0, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v20,
          (System_Func_TSource__bool__o *)_9__243_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            v32,
                                            (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAvaliableActiveBuffArray(
        BattleBuffData_o *this,
        System_Predicate_BattleBuffData_BuffData__o *conditionsToAdd,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x21
  void *All; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__103_0; // x20
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  Il2CppObject *v39; // x21
  struct BattleBuffData___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_42EC145 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__,
      (_DWORD)conditionsToAdd,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleBuffData___c__GetAvaliableActiveBuffArray_b__103_0__, v15, v16, v17);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass103_0__GetAvaliableActiveBuffArray_b__1__, v18, v19, v20);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass103_0_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v24, v25, v26);
    byte_42EC145 = 1;
  }
  v27 = sub_B5D694(BattleBuffData___c__DisplayClass103_0_TypeInfo);
  BattleBuffData___c__DisplayClass103_0___ctor((BattleBuffData___c__DisplayClass103_0_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_18;
  *(_QWORD *)(v27 + 16) = conditionsToAdd;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v27 + 16),
    (System_Int32_array **)conditionsToAdd,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  activeList = this->fields.activeList;
  if ( !*(_QWORD *)(v27 + 16) )
  {
    All = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      All = BattleBuffData___c_TypeInfo;
    }
    static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
    _9__103_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__103_0;
    if ( !_9__103_0 )
    {
      if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
      {
        j_il2cpp_runtime_class_init_0(All);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v39 = (Il2CppObject *)static_fields->__9;
      _9__103_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__103_0,
        v39,
        Method_BattleBuffData___c__GetAvaliableActiveBuffArray_b__103_0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v40 = BattleBuffData___c_TypeInfo->static_fields;
      v40->__9__103_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__103_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v40->__9__103_0,
        (System_Int32_array **)_9__103_0,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    if ( activeList )
      goto LABEL_16;
LABEL_18:
    sub_B5D69C(All, v29);
  }
  _9__103_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    _9__103_0,
    (Il2CppObject *)v27,
    Method_BattleBuffData___c__DisplayClass103_0__GetAvaliableActiveBuffArray_b__1__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !activeList )
    goto LABEL_18;
LABEL_16:
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
          (System_Predicate_T__o *)_9__103_0,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_18;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall BattleBuffData__GetBuffGeneralParamList(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfArray,
        System_Int32_array *opArray,
        bool isRec,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_int__o *v32; // x19
  BuffList_ActInfo_o *ActInfo; // x24
  const MethodInfo *v34; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v39; // x20
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v43; // x1
  __int64 v44; // x3
  __int64 v45; // x20
  bool v46; // w25
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x3
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  BattleBuffData_BuffData_o *v56; // x0
  __int64 v57; // x1
  BattleBuffData_BuffData_o *v58; // x26
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v60; // x1
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0

  if ( (byte_42EC177 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)selfArray, opArray);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    byte_42EC177 = 1;
  }
  v32 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v35 = BattleBuffData__AllBuffValidEnumerable(this, 1, v34);
  if ( !v35 )
    sub_B5D69C(0LL, v36);
  klass = v35->klass;
  v39 = v35;
  if ( *(_WORD *)&v35->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v40;
      p_offset += 4;
      if ( v40 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AF54C0(v35, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v37);
  }
  v45 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v39,
          *(_QWORD *)(p_method + 8));
  if ( !v45 )
    sub_B5D69C(0LL, v43);
  v46 = isRec;
  while ( 1 )
  {
    v47 = *(_QWORD *)v45;
    if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
    {
      v48 = 0LL;
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
          goto LABEL_19;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_19:
      v50 = sub_AF54C0(v45, System_Collections_IEnumerator_TypeInfo, 0LL, v44);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v45, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v45;
    if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
    {
      v53 = 0LL;
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v54 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
          goto LABEL_26;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_26:
      v55 = sub_AF54C0(v45, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v51);
    }
    v56 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v45, *(_QWORD *)(v55 + 8));
    v58 = v56;
    if ( !v56 )
      sub_B5D69C(0LL, v57);
    if ( !v56->fields._isRemove
      && BattleBuffData_BuffData__CheckCond_23684576(v56, this, ActInfo, selfArray, opArray, v46, 0LL) )
    {
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v58->fields.generalParams, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v32 )
          sub_B5D69C(IsNullOrEmpty, v60);
        System_Collections_Generic_List_int___AddRange(
          v32,
          (System_Collections_Generic_IEnumerable_T__o *)v58->fields.generalParams,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
    }
  }
  v61 = *(_QWORD *)v45;
  if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
  {
    v62 = 0LL;
    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      ++v62;
      v63 += 4;
      if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
        goto LABEL_38;
    }
    v64 = v61 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_38:
    v64 = sub_AF54C0(v45, System_IDisposable_TypeInfo, 0LL, v51);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v64)(v45, *(_QWORD *)(v64 + 8));
  return v32;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42EC14E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___,
      (_DWORD)types,
      (_DWORD)checkIndividuality,
      isExcludeInterval);
    byte_42EC14E = 1;
  }
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                                              this,
                                                              isExcludeInterval,
                                                              (const MethodInfo *)checkIndividuality);
  v10 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v9,
                                           (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  return BattleBuffData__getBuffList_31648088(this, types, checkIndividuality, v10, v11);
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
  if ( (byte_42EC17A & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, act, (_DWORD)data, svtData);
    byte_42EC17A = 1;
  }
  if ( !svtData || (this = (BattleBuffData_o *)BattleServantData__getRevengeTargetUniqueId(svtData, 0LL), !data) )
    sub_B5D69C(this, *(_QWORD *)&act);
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, svtData, ServantData, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__getBuffList_31668004(v10, act, v12, isRec, 0, 0LL, v13);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetClassIconEffectBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *classIconAuraEffectBuffList; // x19
  BattleBuffData___c_c *v18; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__253_0; // x20
  Il2CppObject *v21; // x21
  BattleServantConfConponent_o *p__9__253_0; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EC1AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleBuffData___c__GetClassIconEffectBuffList_b__253_0__, v11, v12, v13);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v14, v15, v16);
    byte_42EC1AD = 1;
  }
  classIconAuraEffectBuffList = this->fields.classIconAuraEffectBuffList;
  v18 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v18 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__253_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__253_0;
  if ( !_9__253_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__253_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__253_0,
      v21,
      Method_BattleBuffData___c__GetClassIconEffectBuffList_b__253_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__253_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__253_0;
    p__9__253_0->klass = (BattleServantConfConponent_c *)_9__253_0;
    sub_B5D560(p__9__253_0, (System_Int32_array **)_9__253_0, v23, v24, v25, v26, v27, v28);
  }
  if ( !classIconAuraEffectBuffList )
    sub_B5D69C(v18, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)classIconAuraEffectBuffList,
                                                                         (System_Predicate_T__o *)_9__253_0,
                                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetCommandCardBuffArray(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        int32_t targetBuffType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  DataManager_o *Instance; // x0
  __int64 v41; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v43; // x2
  __int64 v44; // x3
  DataManager_c *klass; // x8
  DataManager_o *v46; // x20
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x3
  __int64 v52; // x20
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x3
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  BattleBuffData_BuffData_o *v62; // x25
  const MethodInfo *v63; // x4
  _BOOL8 v64; // x0
  __int64 v65; // x1
  _BOOL8 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w26
  __int64 v69; // x1
  __int64 v70; // x8
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // [xsp+8h] [xbp-68h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42EC198 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)commandData, targetBuffType, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    byte_42EC198 = 1;
  }
  entity = 0LL;
  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v75,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v43);
  if ( !Instance )
    goto LABEL_48;
  klass = Instance->klass;
  v46 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v47;
      p_offset += 4;
      if ( v47 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v49 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v49 = sub_AF54C0(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v44);
  }
  v52 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v49)(v46, *(_QWORD *)(v49 + 8));
  if ( !v52 )
    sub_B5D69C(0LL, v50);
  while ( 1 )
  {
    v53 = *(_QWORD *)v52;
    if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
    {
      v54 = 0LL;
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
          goto LABEL_16;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_16:
      v56 = sub_AF54C0(v52, System_Collections_IEnumerator_TypeInfo, 0LL, v51);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
      break;
    v58 = *(_QWORD *)v52;
    if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
    {
      v59 = 0LL;
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v60 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
          goto LABEL_23;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_23:
      v61 = sub_AF54C0(v52, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v57);
    }
    v62 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v52, *(_QWORD *)(v61 + 8));
    v64 = BattleBuffData__CheckCommandCardBuffActive(this, commandData, v62, 1, v63);
    if ( v64 )
    {
      entity = 0LL;
      if ( !v62 )
        sub_B5D69C(v64, v65);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(v64, v65);
      v66 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &entity,
              v62->fields.buffId,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( v66 )
      {
        if ( !entity )
          sub_B5D69C(v66, v67);
        v68 = *(&entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(targetBuffType, v68, 0LL) )
        {
          if ( !v75 )
            sub_B5D69C(0LL, v69);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v75,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
      }
    }
  }
  v70 = *(_QWORD *)v52;
  if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
  {
    v71 = 0LL;
    v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      ++v71;
      v72 += 4;
      if ( v71 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
        goto LABEL_40;
    }
    v73 = v70 + 16LL * *v72 + 312;
  }
  else
  {
LABEL_40:
    v73 = sub_AF54C0(v52, System_IDisposable_TypeInfo, 0LL, v57);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v73)(v52, *(_QWORD *)(v73 + 8));
  Instance = (DataManager_o *)v75;
  if ( !v75 )
LABEL_48:
    sub_B5D69C(Instance, v41);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v75,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetCommandCardTypeChangeBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleBuffData_BuffData_o *result; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  BattleBuffData_BuffData_array *BuffList_31648088; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x8
  __int64 v11; // x0

  if ( (byte_42EC194 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TYPE___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC194 = 1;
  }
  result = (BattleBuffData_BuffData_o *)sub_B5D5DC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v6);
  if ( !result->fields.count )
    goto LABEL_11;
  *(_DWORD *)&result->fields.isUse = 156;
  BuffList_31648088 = BattleBuffData__getBuffList_31648088(this, (BuffList_TYPE_array *)result, 0LL, 0LL, v7);
  result = (BattleBuffData_BuffData_o *)BattleBuffData__CheckAndGetFixedBuffArray(this, BuffList_31648088, v9);
  if ( result )
  {
    v10 = *(_QWORD *)&result->fields.count;
    if ( v10 )
    {
      if ( (_DWORD)v10 )
        return *(BattleBuffData_BuffData_o **)&result->fields.isUse;
LABEL_11:
      v11 = sub_B5D6C8(result);
      sub_B5D668(v11, 0LL);
    }
    return 0LL;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetCounterFuncBuffDataList(
        BattleBuffData_o *this,
        BattleServantData_o *selfSvt,
        BattleServantData_o *targetSvt,
        bool checkOnly,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  bool IsConstantMasterIndvAddBuffActive; // w24
  BattleBuffData_CheckIndividualitiesData_o *v13; // x0
  BattleBuffData_CheckIndividualitiesData_o *v14; // x23
  BattleServantData_o *v15; // x1
  BattleServantData_o *v16; // x2
  const MethodInfo *v17; // x6

  if ( (byte_42EC19F & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)selfSvt, (_DWORD)targetSvt, checkOnly);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9, v10, v11);
    byte_42EC19F = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  v14 = v13;
  if ( IsConstantMasterIndvAddBuffActive )
  {
    v15 = selfSvt;
    v16 = targetSvt;
  }
  else
  {
    v15 = 0LL;
    v16 = 0LL;
  }
  BattleBuffData_CheckIndividualitiesData___ctor(v13, v15, v16, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__getBuffList_31668004(this, 102, v14, 0, checkOnly, 0LL, v17);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetCurrentWarBoardNotAttackedBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentAllBaffList; // x19
  BattleBuffData___c_c *v21; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__234_0; // x20
  Il2CppObject *v24; // x21
  BattleServantConfConponent_o *p__9__234_0; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42EC19D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleBuffData___c__GetCurrentWarBoardNotAttackedBuff_b__234_0__, v14, v15, v16);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v17, v18, v19);
    byte_42EC19D = 1;
  }
  CurrentAllBaffList = BattleBuffData__getCurrentAllBaffList(this, 1, v2);
  v21 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v21 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__234_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__234_0;
  if ( !_9__234_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__234_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__234_0,
      v24,
      Method_BattleBuffData___c__GetCurrentWarBoardNotAttackedBuff_b__234_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    p__9__234_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__234_0;
    p__9__234_0->klass = (BattleServantConfConponent_c *)_9__234_0;
    sub_B5D560(p__9__234_0, (System_Int32_array **)_9__234_0, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)CurrentAllBaffList,
          (System_Func_TSource__bool__o *)_9__234_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                         v32,
                                                                         (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetEffectBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x19
  __int64 v48; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  void *All; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__219_0; // x22
  Il2CppObject *v53; // x23
  BattleServantConfConponent_o *p__9__219_0; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x20
  struct BattleBuffData___c_StaticFields *v62; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__219_1; // x21
  Il2CppObject *v64; // x22
  BattleServantConfConponent_o *p__9__219_1; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Collections_Generic_IEnumerable_T__o *v72; // x0
  BattleBuffData___c_c *v73; // x0
  struct BattleBuffData___c_StaticFields *v74; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__219_2; // x20
  Il2CppObject *v76; // x21
  BattleServantConfConponent_o *p__9__219_2; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  BattleBuffData___c_c *v84; // x0
  struct BattleBuffData___c_StaticFields *v85; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__219_3; // x20
  Il2CppObject *v87; // x21
  BattleServantConfConponent_o *p__9__219_3; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7

  if ( (byte_42EC192 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_BattleBuffData___c__GetEffectBuffList_b__219_0__, v32, v33, v34);
    sub_B5D5C4(&Method_BattleBuffData___c__GetEffectBuffList_b__219_1__, v35, v36, v37);
    sub_B5D5C4(&Method_BattleBuffData___c__GetEffectBuffList_b__219_2__, v38, v39, v40);
    sub_B5D5C4(&Method_BattleBuffData___c__GetEffectBuffList_b__219_3__, v41, v42, v43);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v44, v45, v46);
    byte_42EC192 = 1;
  }
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  All = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__219_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__219_0;
  if ( !_9__219_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)static_fields->__9;
    _9__219_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__219_0,
      v53,
      Method_BattleBuffData___c__GetEffectBuffList_b__219_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__219_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__219_0;
    p__9__219_0->klass = (BattleServantConfConponent_c *)_9__219_0;
    sub_B5D560(p__9__219_0, (System_Int32_array **)_9__219_0, v55, v56, v57, v58, v59, v60);
  }
  if ( !passiveList )
    goto LABEL_39;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
          (System_Predicate_T__o *)_9__219_0,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v47 )
    goto LABEL_39;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v47,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  All = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v62 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__219_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v62->__9__219_1;
  if ( !_9__219_1 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      v62 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v64 = (Il2CppObject *)v62->__9;
    _9__219_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__219_1,
      v64,
      Method_BattleBuffData___c__GetEffectBuffList_b__219_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__219_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__219_1;
    p__9__219_1->klass = (BattleServantConfConponent_c *)_9__219_1;
    sub_B5D560(p__9__219_1, (System_Int32_array **)_9__219_1, v66, v67, v68, v69, v70, v71);
  }
  if ( !activeList )
LABEL_39:
    sub_B5D69C(All, v48);
  v72 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__219_1,
                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v47,
    v72,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v73 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v73 = BattleBuffData___c_TypeInfo;
  }
  v74 = v73->static_fields;
  _9__219_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v74->__9__219_2;
  if ( !_9__219_2 )
  {
    if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v74 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v76 = (Il2CppObject *)v74->__9;
    _9__219_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__219_2,
      v76,
      Method_BattleBuffData___c__GetEffectBuffList_b__219_2__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    p__9__219_2 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__219_2;
    p__9__219_2->klass = (BattleServantConfConponent_c *)_9__219_2;
    sub_B5D560(p__9__219_2, (System_Int32_array **)_9__219_2, v78, v79, v80, v81, v82, v83);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v47,
    (System_Comparison_T__o *)_9__219_2,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  v84 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v84 = BattleBuffData___c_TypeInfo;
  }
  v85 = v84->static_fields;
  _9__219_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v85->__9__219_3;
  if ( !_9__219_3 )
  {
    if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      v85 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v87 = (Il2CppObject *)v85->__9;
    _9__219_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__219_3,
      v87,
      Method_BattleBuffData___c__GetEffectBuffList_b__219_3__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__219_3 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__219_3;
    p__9__219_3->klass = (BattleServantConfConponent_c *)_9__219_3;
    sub_B5D560(p__9__219_3, (System_Int32_array **)_9__219_3, v89, v90, v91, v92, v93, v94);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v47,
    (System_Predicate_T__o *)_9__219_3,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v47;
}


int32_t __fastcall BattleBuffData__GetFamilyLinkageIdMax(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  __int64 v41; // x21
  System_Collections_Generic_HashSet_int__o *v42; // x22
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v43; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x1
  __int64 v52; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v54; // x20
  unsigned __int64 v55; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v58; // x1
  __int64 v59; // x3
  __int64 v60; // x20
  System_Action_int__o **v61; // x22
  System_Action_int__o **v62; // x23
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  __int64 v67; // x3
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  BattleBuffData_BuffData_o *v72; // x0
  __int64 v73; // x1
  BattleBuffData_BuffData_o *v74; // x24
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  System_Action_int__o *v76; // x26
  System_Collections_Generic_IEnumerable_T__o *v77; // x25
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array *FamilyLinkageIdArray; // x0
  System_Action_int__o *v85; // x25
  System_Collections_Generic_IEnumerable_T__o *v86; // x24
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  int *v95; // x11
  __int64 v96; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o **v98; // [xsp+0h] [xbp-60h]

  if ( (byte_42EC1A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass238_0__GetFamilyLinkageIdMax_b__0__, v32, v33, v34);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass238_0__GetFamilyLinkageIdMax_b__1__, v35, v36, v37);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass238_0_TypeInfo, v38, v39, v40);
    byte_42EC1A0 = 1;
  }
  v41 = sub_B5D694(BattleBuffData___c__DisplayClass238_0_TypeInfo);
  BattleBuffData___c__DisplayClass238_0___ctor((BattleBuffData___c__DisplayClass238_0_o *)v41, 0LL);
  v42 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v42,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( !v41 )
    goto LABEL_43;
  *(_QWORD *)(v41 + 16) = v42;
  sub_B5D560((BattleServantConfConponent_o *)(v41 + 16), (System_Int32_array **)v42, v45, v46, v47, v48, v49, v50);
  v43 = BattleBuffData__AllBuffEnumerable(this, v51);
  if ( !v43 )
    goto LABEL_43;
  klass = v43->klass;
  v54 = v43;
  if ( *(_WORD *)&v43->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v55;
      p_offset += 4;
      if ( v55 >= *(unsigned __int16 *)&v43->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AF54C0(v43, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v52);
  }
  v98 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o **)(v41 + 16);
  v60 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v54,
          *(_QWORD *)(p_method + 8));
  if ( !v60 )
    sub_B5D69C(0LL, v58);
  v61 = (System_Action_int__o **)(v41 + 24);
  v62 = (System_Action_int__o **)(v41 + 32);
  while ( 1 )
  {
    v63 = *(_QWORD *)v60;
    if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
    {
      v64 = 0LL;
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v65 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v64;
        v65 += 4;
        if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
          goto LABEL_17;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_17:
      v66 = sub_AF54C0(v60, System_Collections_IEnumerator_TypeInfo, 0LL, v59);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v60, *(_QWORD *)(v66 + 8)) & 1) == 0 )
      break;
    v68 = *(_QWORD *)v60;
    if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
    {
      v69 = 0LL;
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v70 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v69;
        v70 += 4;
        if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
          goto LABEL_24;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_24:
      v71 = sub_AF54C0(v60, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v67);
    }
    v72 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v60, *(_QWORD *)(v71 + 8));
    v74 = v72;
    if ( !v72 )
      sub_B5D69C(0LL, v73);
    FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(v72, 0LL);
    v76 = *v61;
    v77 = (System_Collections_Generic_IEnumerable_T__o *)FamilyLinkageTargetIdArray;
    if ( !*v61 )
    {
      v76 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v76,
        (Il2CppObject *)v41,
        Method_BattleBuffData___c__DisplayClass238_0__GetFamilyLinkageIdMax_b__0__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      *v61 = v76;
      sub_B5D560((BattleServantConfConponent_o *)(v41 + 24), (System_Int32_array **)v76, v78, v79, v80, v81, v82, v83);
    }
    BasicHelper__ForEach_int_(
      v77,
      (System_Action_T__o *)v76,
      (const MethodInfo_1AD7A44 *)Method_BasicHelper_ForEach_int___);
    FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(v74, 0LL);
    v85 = *v62;
    v86 = (System_Collections_Generic_IEnumerable_T__o *)FamilyLinkageIdArray;
    if ( !*v62 )
    {
      v85 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v85,
        (Il2CppObject *)v41,
        Method_BattleBuffData___c__DisplayClass238_0__GetFamilyLinkageIdMax_b__1__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      *v62 = v85;
      sub_B5D560((BattleServantConfConponent_o *)(v41 + 32), (System_Int32_array **)v85, v87, v88, v89, v90, v91, v92);
    }
    BasicHelper__ForEach_int_(
      v86,
      (System_Action_T__o *)v85,
      (const MethodInfo_1AD7A44 *)Method_BasicHelper_ForEach_int___);
  }
  v93 = *(_QWORD *)v60;
  if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
  {
    v94 = 0LL;
    v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v95 - 1) != System_IDisposable_TypeInfo )
    {
      ++v94;
      v95 += 4;
      if ( v94 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
        goto LABEL_36;
    }
    v96 = v93 + 16LL * *v95 + 312;
  }
  else
  {
LABEL_36:
    v96 = sub_AF54C0(v60, System_IDisposable_TypeInfo, 0LL, v67);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v96)(v60, *(_QWORD *)(v96 + 8));
  v43 = *v98;
  if ( !*v98 )
LABEL_43:
    sub_B5D69C(v43, v44);
  if ( SLODWORD(v43[2].klass) < 1 )
    return 0;
  else
    return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v43, 0LL);
}


BattleBuffData_FieldChangeData_array *__fastcall BattleBuffData__GetFieldChangeArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v32; // x20
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  __int64 v38; // x20
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x3
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x1
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0

  if ( (byte_42EC1A4 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_FieldChangeData__TypeInfo, v23, v24, v25);
    byte_42EC1A4 = 1;
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_FieldChangeData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData___ctor__);
  v28 = BattleBuffData__AllBuffValidEnumerable(this, 1, v27);
  if ( !v28 )
    goto LABEL_38;
  klass = v28->klass;
  v32 = v28;
  if ( *(_WORD *)&v28->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v28, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v30);
  }
  v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v32,
          *(_QWORD *)(p_method + 8));
  if ( !v38 )
    sub_B5D69C(0LL, v36);
  while ( 1 )
  {
    v39 = *(_QWORD *)v38;
    if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
    {
      v40 = 0LL;
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
          goto LABEL_15;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_15:
      v42 = sub_AF54C0(v38, System_Collections_IEnumerator_TypeInfo, 0LL, v37);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v44 = *(_QWORD *)v38;
    if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
    {
      v45 = 0LL;
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v46 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
          goto LABEL_22;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_22:
      v47 = sub_AF54C0(v38, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v43);
    }
    v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v38, *(_QWORD *)(v47 + 8));
    if ( !v48 )
      sub_B5D69C(0LL, v49);
    v50 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v48 + 312);
    if ( v50 )
    {
      if ( !v26 )
        sub_B5D69C(v48, v50);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v26,
        v50,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__Add__);
    }
  }
  v51 = *(_QWORD *)v38;
  if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
  {
    v52 = 0LL;
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
        goto LABEL_32;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_32:
    v54 = sub_AF54C0(v38, System_IDisposable_TypeInfo, 0LL, v43);
  }
  v28 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(
                                                                               v38,
                                                                               *(_QWORD *)(v54 + 8));
  if ( !v26 )
LABEL_38:
    sub_B5D69C(v28, v29);
  return (BattleBuffData_FieldChangeData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetFirstMatchCondBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BuffList_ActInfo_o *ActInfo; // x22
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v27; // x19
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  __int64 v33; // x19
  bool v34; // w23
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  BattleBuffData_BuffData_o *v43; // x0
  __int64 v44; // x1
  BattleBuffData_BuffData_o *v45; // x24
  int v46; // w8
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  int v52; // [xsp+0h] [xbp-50h]

  if ( (byte_42EC17C & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)checkIndividualities, isRec);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    byte_42EC17C = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v23 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v22);
  if ( !v23 )
    sub_B5D69C(0LL, v24);
  klass = v23->klass;
  v27 = v23;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AF54C0(v23, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v25);
  }
  v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v27,
          *(_QWORD *)(p_method + 8));
  if ( !v33 )
    sub_B5D69C(0LL, v31);
  v34 = isRec;
  while ( 1 )
  {
    v35 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_19;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_19:
      v38 = sub_AF54C0(v33, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v33, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v40 = 0LL;
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v41 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_26;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_26:
      v42 = sub_AF54C0(v33, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v32);
    }
    v43 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v33, *(_QWORD *)(v42 + 8));
    v45 = v43;
    if ( !v43 )
      sub_B5D69C(0LL, v44);
    if ( BattleBuffData_BuffData__CheckCond(v43, this, ActInfo, checkIndividualities, v34, 0LL) )
    {
      v46 = 68;
      goto LABEL_32;
    }
  }
  v45 = 0LL;
  v46 = 66;
LABEL_32:
  v52 = v46;
  v47 = *(_QWORD *)v33;
  if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
  {
    v48 = 0LL;
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
        goto LABEL_36;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_36:
    v50 = sub_AF54C0(v33, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v33, *(_QWORD *)(v50 + 8));
  if ( v52 == 66 )
    return 0LL;
  return v45;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetFixBuffArray(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x23
  const MethodInfo *v19; // x6
  System_Collections_Generic_IEnumerable_TSource__o *BuffList_31668004; // x0

  if ( (byte_42EC17B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleBuffData_IsFixBuff__, act, (_DWORD)checkIndividualities, isRec);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v15, v16, v17);
    byte_42EC17B = 1;
  }
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleBuffData_IsFixBuff__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  BuffList_31668004 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList_31668004(
                                                                             this,
                                                                             act,
                                                                             checkIndividualities,
                                                                             isRec,
                                                                             0,
                                                                             (System_Func_BattleBuffData_BuffData__bool__o *)v18,
                                                                             v19);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            BuffList_31668004,
                                            (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetFixedBuffArray(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *targetIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *BuffList_31648088; // x1
  const MethodInfo *v7; // x2

  BuffList_31648088 = BattleBuffData__getBuffList_31648088(this, types, targetIndividualities, checklist, method);
  return BattleBuffData__CheckAndGetFixedBuffArray(this, BuffList_31648088, v7);
}


System_Int32_array *__fastcall BattleBuffData__GetGrantBuffTypeArray(
        BattleBuffData_o *this,
        bool isIncludePassive,
        bool isIncludeActive,
        const MethodInfo *method)
{
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  char v19; // w1
  char v20; // w2
  __int64 v21; // x3
  char v22; // w1
  char v23; // w2
  __int64 v24; // x3
  char v25; // w1
  char v26; // w2
  __int64 v27; // x3
  char v28; // w1
  char v29; // w2
  __int64 v30; // x3
  char v31; // w1
  char v32; // w2
  __int64 v33; // x3
  char v34; // w1
  char v35; // w2
  __int64 v36; // x3
  char v37; // w1
  char v38; // w2
  __int64 v39; // x3
  char v40; // w1
  char v41; // w2
  __int64 v42; // x3
  char v43; // w1
  char v44; // w2
  __int64 v45; // x3
  __int64 v46; // x24
  System_Collections_Generic_List_int__o *v47; // x0
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_int__o **v55; // x19
  System_Collections_Generic_List_int__o *v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v63; // x22
  const MethodInfo *v64; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PassiveList; // x23
  BattleBuffData___c_c *v66; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__116_1; // x24
  Il2CppObject *v69; // x25
  struct BattleBuffData___c_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_IEnumerable_T__o *v77; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ActiveList; // x20
  BattleBuffData___c_c *v79; // x8
  struct BattleBuffData___c_StaticFields *v80; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__116_2; // x21
  Il2CppObject *v82; // x23
  struct BattleBuffData___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_IEnumerable_T__o *v90; // x0

  if ( (byte_42EC150 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, isIncludePassive, isIncludeActive, method);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_BattleBuffData___c__GetGrantBuffTypeArray_b__116_1__, v31, v32, v33);
    sub_B5D5C4(&Method_BattleBuffData___c__GetGrantBuffTypeArray_b__116_2__, v34, v35, v36);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass116_0__GetGrantBuffTypeArray_b__0__, v37, v38, v39);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass116_0_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v43, v44, v45);
    byte_42EC150 = 1;
  }
  v46 = sub_B5D694(BattleBuffData___c__DisplayClass116_0_TypeInfo);
  BattleBuffData___c__DisplayClass116_0___ctor((BattleBuffData___c__DisplayClass116_0_o *)v46, 0LL);
  if ( !v46 )
    goto LABEL_26;
  *(_QWORD *)(v46 + 24) = this;
  v55 = (System_Collections_Generic_List_int__o **)(v46 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 24), (System_Int32_array **)this, v49, v50, v51, v52, v53, v54);
  v56 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v56,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  *(_QWORD *)(v46 + 16) = v56;
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 16), (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
  v63 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v63,
    (Il2CppObject *)v46,
    Method_BattleBuffData___c__DisplayClass116_0__GetGrantBuffTypeArray_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  if ( isIncludePassive )
  {
    PassiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getPassiveList(this, 1, v64);
    v66 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v66 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v66->static_fields;
    _9__116_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__116_1;
    if ( !_9__116_1 )
    {
      if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v69 = (Il2CppObject *)static_fields->__9;
      _9__116_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__116_1,
        v69,
        Method_BattleBuffData___c__GetGrantBuffTypeArray_b__116_1__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v70 = BattleBuffData___c_TypeInfo->static_fields;
      v70->__9__116_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__116_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v70->__9__116_1,
        (System_Int32_array **)_9__116_1,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
    }
    v77 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           PassiveList,
                                                           (System_Func_TSource__bool__o *)_9__116_1,
                                                           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v77,
      (System_Action_T__o *)v63,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  if ( isIncludeActive )
  {
    ActiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getActiveList(this, 1, v64);
    v79 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v79 = BattleBuffData___c_TypeInfo;
    }
    v80 = v79->static_fields;
    _9__116_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v80->__9__116_2;
    if ( !_9__116_2 )
    {
      if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 && !v79->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v79);
        v80 = BattleBuffData___c_TypeInfo->static_fields;
      }
      v82 = (Il2CppObject *)v80->__9;
      _9__116_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__116_2,
        v82,
        Method_BattleBuffData___c__GetGrantBuffTypeArray_b__116_2__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v83 = BattleBuffData___c_TypeInfo->static_fields;
      v83->__9__116_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__116_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v83->__9__116_2,
        (System_Int32_array **)_9__116_2,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89);
    }
    v90 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           ActiveList,
                                                           (System_Func_TSource__bool__o *)_9__116_2,
                                                           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v90,
      (System_Action_T__o *)v63,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  v47 = *v55;
  if ( !*v55 )
LABEL_26:
    sub_B5D69C(v47, v48);
  return System_Collections_Generic_List_int___ToArray(
           v47,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleBuffData__GetIgnoreAuraBuffIds(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Int32_array *result; // x0
  BattleServantConfConponent_o *p_ignoreAuraBuffIds; // x19
  System_Int32_array *ignoreAuraBuffIds; // t1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  System_Int32_array **ValueArray; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42EC189 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_7346/*"IGNORE_AURA_BUFF"*/, v8, v9, v10);
    byte_42EC189 = 1;
  }
  ignoreAuraBuffIds = this->fields.ignoreAuraBuffIds;
  p_ignoreAuraBuffIds = (BattleServantConfConponent_o *)&this->fields.ignoreAuraBuffIds;
  result = ignoreAuraBuffIds;
  if ( !ignoreAuraBuffIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v15);
    }
    ValueArray = (System_Int32_array **)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)Instance,
                                          (System_String_o *)StringLiteral_7346/*"IGNORE_AURA_BUFF"*/,
                                          0LL,
                                          0LL);
    p_ignoreAuraBuffIds->klass = (BattleServantConfConponent_c *)ValueArray;
    sub_B5D560(p_ignoreAuraBuffIds, ValueArray, v17, v18, v19, v20, v21, v22);
    return (System_Int32_array *)p_ignoreAuraBuffIds->klass;
  }
  return result;
}


System_Int32_array *__fastcall BattleBuffData__GetInvalidSacrificeIndividualities(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  ConstantStrMaster_o *constantStrMaster; // x0
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  BattleServantConfConponent_o *static_fields; // x8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1

  if ( (byte_42EC1A8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantStrMaster___, v4, v5, v6);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_7390/*"INVALID_SACRIFICE_INDIV"*/, v10, v11, v12);
    byte_42EC1A8 = 1;
  }
  constantStrMaster = BattleBuffData_TypeInfo->static_fields->constantStrMaster;
  if ( !constantStrMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantStrMaster___);
    static_fields = (BattleServantConfConponent_o *)BattleBuffData_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)Master_WarQuestSelectionMaster;
    sub_B5D560(static_fields, Master_WarQuestSelectionMaster, v16, v17, v18, v19, v20, v21);
    constantStrMaster = BattleBuffData_TypeInfo->static_fields->constantStrMaster;
    if ( !constantStrMaster )
      sub_B5D69C(0LL, v22);
  }
  return ConstantStrMaster__GetValueArray(constantStrMaster, (System_String_o *)StringLiteral_7390/*"INVALID_SACRIFICE_INDIV"*/, 0LL, 0LL);
}


int32_t __fastcall BattleBuffData__GetMotionChange(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  const MethodInfo *v24; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t klass; // w19
  int v32; // w20
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC195 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v20, v21, v22);
    byte_42EC195 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v24);
  if ( !v23 )
    sub_B5D69C(PassiveList, v26);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
    PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v27);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v23,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v29 )
      break;
    if ( !v34.fields.current )
      sub_B5D69C(v29, v30);
    klass = (int32_t)v34.fields.current[11].klass;
    if ( klass )
    {
      v32 = 3;
      goto LABEL_10;
    }
  }
  klass = 0;
  v32 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (unsigned int)(v32 + 1) >> 2 )
    return klass;
  else
    return 0;
}


System_Int32_array *__fastcall BattleBuffData__GetNotTargetSkillIdArray(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  BuffList_ActInfo_o *ActInfo; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x23
  const MethodInfo *v41; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  System_Collections_Generic_List_int__o *v46; // x21
  const MethodInfo *v47; // x5
  Il2CppObject *current; // x23
  _BOOL8 v49; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerable_T__o *klass; // x1
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-58h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_42EC175 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)checkIndividualities, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v36, v37, v38);
    byte_42EC175 = 1;
  }
  plusMinus = 0;
  memset(&v53, 0, sizeof(v53));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(103, 0LL, 0LL);
  plusMinus = 0;
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v41);
  if ( !v40 )
    goto LABEL_18;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v40,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v44);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v40,
    PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v46 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v53,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v40,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v53,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v53.fields.current;
    v49 = BattleBuffData__checkIndiviuality(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v53.fields.current,
            checkIndividualities,
            &plusMinus,
            v47);
    if ( v49 )
    {
      if ( !current )
        sub_B5D69C(v49, v50);
      klass = (System_Collections_Generic_IEnumerable_T__o *)current[19].klass;
      if ( klass )
      {
        if ( !v46 )
          sub_B5D69C(v49, klass);
        System_Collections_Generic_List_int___AddRange(
          v46,
          klass,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v53,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v46 )
LABEL_18:
    sub_B5D69C(ActiveList, v43);
  return System_Collections_Generic_List_int___ToArray(
           v46,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall BattleBuffData__GetParamAddCount(
        BattleBuffData_o *this,
        System_Int32_array *checkIndividuality,
        System_Int32_array *paramAddIndividuality,
        const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v5; // x8
  __int64 v6; // x11
  __int64 v7; // x9
  __int64 v8; // x14
  int32_t v9; // w15

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
        do
        {
          if ( (int)v5 >= 1 )
          {
            v8 = 0LL;
            do
            {
              v9 = checkIndividuality->m_Items[++v8];
              if ( v9 == paramAddIndividuality->m_Items[v7 + 1] )
                ++result;
            }
            while ( v8 < (int)v5 );
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleBuffData_BuffData_o *ShiftGutsBuff; // x0
  const MethodInfo *v13; // x1
  BattleBuffData_BuffData_o *v14; // x20
  BuffMaster_o *buffMst; // x0
  __int64 v16; // x1
  BuffEntity_o *Entity; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t type; // w21

  if ( (byte_42EC154 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)servantData, (_DWORD)checkIndividualitiesDataArray, buffEntity);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9, v10, v11);
    byte_42EC154 = 1;
  }
  ShiftGutsBuff = BattleBuffData__GetShiftGutsBuff(
                    this,
                    servantData,
                    checkIndividualitiesDataArray,
                    (const MethodInfo *)buffEntity);
  if ( ShiftGutsBuff )
  {
    v14 = ShiftGutsBuff;
    buffMst = BattleBuffData__get_buffMst(this, v13);
    if ( !buffMst )
      goto LABEL_14;
    Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                               v14->fields.buffId,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    *buffEntity = Entity;
    sub_B5D560((BattleServantConfConponent_o *)buffEntity, (System_Int32_array **)Entity, v18, v19, v20, v21, v22, v23);
    if ( !*buffEntity )
      goto LABEL_14;
    type = (*buffEntity)->fields.type;
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    buffMst = (BuffMaster_o *)BuffList__CheckType(173, type, 0LL);
    if ( ((unsigned __int8)buffMst & 1) == 0 )
    {
      LODWORD(ShiftGutsBuff) = v14->fields.param;
      return (int)ShiftGutsBuff;
    }
    if ( !servantData )
LABEL_14:
      sub_B5D69C(buffMst, v16);
    LODWORD(ShiftGutsBuff) = v14->fields.param * servantData->fields.maxhp / 1000;
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
  this = (BattleBuffData_o *)BattleBuffData__getBuffList_31668004(
                               this,
                               111,
                               checkIndividualitiesDataArray->m_Items[0],
                               1,
                               1,
                               0LL,
                               v4);
  if ( !this )
LABEL_12:
    sub_B5D69C(this, servantData);
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
    v14 = sub_B5D6C8(this);
    sub_B5D668(v14, 0LL);
  }
  return 0LL;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x21
  System_Collections_Generic_List_int__o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x20

  if ( (byte_42EC18E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__,
      (_DWORD)buffList,
      (_DWORD)skillTypes,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass211_0__GetSkillTypeBuff_b__0__, v18, v19, v20);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass211_0_TypeInfo, v21, v22, v23);
    byte_42EC18E = 1;
  }
  v24 = sub_B5D694(BattleBuffData___c__DisplayClass211_0_TypeInfo);
  BattleBuffData___c__DisplayClass211_0___ctor((BattleBuffData___c__DisplayClass211_0_o *)v24, 0LL);
  v25 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)skillTypes,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v24
    || (*(_QWORD *)(v24 + 16) = v25,
        sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)v25, v28, v29, v30, v31, v32, v33),
        v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v34,
          (Il2CppObject *)v24,
          Method_BattleBuffData___c__DisplayClass211_0__GetSkillTypeBuff_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !buffList) )
  {
    sub_B5D69C(v26, v27);
  }
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)buffList,
                                                                         (System_Predicate_T__o *)v34,
                                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
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
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buffData,
        BattleData_o *battleData,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  int32_t ParamAddCount; // w22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x8
  int v14; // w21
  BattleBuffData_o *QuestIndividualities; // x0
  const MethodInfo *v16; // x3
  int32_t v17; // w0
  int32_t paramAddMaxCount; // w9
  int32_t paramAddMax; // w8
  int32_t result; // w0

  if ( !buffData )
    goto LABEL_17;
  this = (BattleBuffData_o *)BattleBuffData_BuffData__checkState(buffData, 0x100000, 0LL);
  if ( !checkIndividualities )
    goto LABEL_17;
  v9 = 16LL;
  if ( ((unsigned __int8)this & 1) != 0 )
    v9 = 32LL;
  ParamAddCount = BattleBuffData__GetParamAddCount(
                    this,
                    *(System_Int32_array **)((char *)&checkIndividualities->klass + v9),
                    buffData->fields.paramAddSelfIndividuality,
                    v8);
  v11 = BattleBuffData_BuffData__checkState(buffData, 0x100000, 0LL);
  v13 = 24LL;
  if ( v11 )
    v13 = 40LL;
  this = (BattleBuffData_o *)BattleBuffData__GetParamAddCount(
                               (BattleBuffData_o *)v11,
                               *(System_Int32_array **)((char *)&checkIndividualities->klass + v13),
                               buffData->fields.paramAddOpIndividuality,
                               v12);
  if ( !battleData )
LABEL_17:
    sub_B5D69C(this, buffData);
  v14 = (_DWORD)this + ParamAddCount;
  QuestIndividualities = (BattleBuffData_o *)BattleData__getQuestIndividualities(battleData, 0LL);
  v17 = BattleBuffData__GetParamAddCount(
          QuestIndividualities,
          (System_Int32_array *)QuestIndividualities,
          buffData->fields.paramAddFieldIndividuality,
          v16);
  paramAddMaxCount = buffData->fields.paramAddMaxCount;
  paramAddMax = buffData->fields.paramAddMax;
  if ( paramAddMaxCount > v14 + v17 || paramAddMaxCount < 1 )
    paramAddMaxCount = v14 + v17;
  result = paramAddMaxCount * buffData->fields.paramAddValue;
  if ( paramAddMax >= 1 && paramAddMax <= result )
    return buffData->fields.paramAddMax;
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetUpdateWaitIntervalBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  BattleBuffData_BuffData_array *v9; // x20
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *updateWaitIntervalBuffList; // x0

  if ( (byte_42EC10E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5, v6, v7);
    byte_42EC10E = 1;
  }
  v9 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.updateWaitIntervalBuffList, 0LL) )
  {
    updateWaitIntervalBuffList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.updateWaitIntervalBuffList;
    if ( !updateWaitIntervalBuffList
      || (updateWaitIntervalBuffList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(updateWaitIntervalBuffList, (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
          !this->fields.updateWaitIntervalBuffList) )
    {
      sub_B5D69C(updateWaitIntervalBuffList, v8);
    }
    v9 = (BattleBuffData_BuffData_array *)updateWaitIntervalBuffList;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.updateWaitIntervalBuffList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  }
  return v9;
}


void __fastcall BattleBuffData__Initialize(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0

  if ( (byte_42EC113 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, (_DWORD)method, v2, v3);
    byte_42EC113 = 1;
  }
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)passiveList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__),
        (passiveList = this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)passiveList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__),
        (passiveList = this->fields.conditionalAuraBuff) == 0LL) )
  {
    sub_B5D69C(passiveList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)passiveList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
}


void __fastcall BattleBuffData__InitializeShift(
        BattleBuffData_o *this,
        int32_t actorId,
        System_Int32_array *buffindivs,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x23
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v41; // x21

  if ( (byte_42EC181 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__,
      actorId,
      (_DWORD)buffindivs,
      method);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass193_0__InitializeShift_b__0__, v13, v14, v15);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass193_0__InitializeShift_b__1__, v16, v17, v18);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass193_0_TypeInfo, v19, v20, v21);
    byte_42EC181 = 1;
  }
  v22 = sub_B5D694(BattleBuffData___c__DisplayClass193_0_TypeInfo);
  BattleBuffData___c__DisplayClass193_0___ctor((BattleBuffData___c__DisplayClass193_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_10;
  *(_DWORD *)(v22 + 16) = actorId;
  *(_QWORD *)(v22 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 32) = buffindivs;
  v31 = v22 + 32;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v22 + 32),
    (System_Int32_array **)buffindivs,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  passiveList = this->fields.passiveList;
  v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v39,
    (Il2CppObject *)v22,
    Method_BattleBuffData___c__DisplayClass193_0__InitializeShift_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !passiveList )
    goto LABEL_10;
  v23 = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)passiveList,
          (System_Predicate_T__o *)v39,
          (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  if ( !*(_QWORD *)v31 )
    goto LABEL_10;
  if ( *(_QWORD *)(*(_QWORD *)v31 + 24LL) )
  {
    activeList = this->fields.activeList;
    v41 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v41,
      (Il2CppObject *)v22,
      Method_BattleBuffData___c__DisplayClass193_0__InitializeShift_b__1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    if ( activeList )
    {
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)activeList,
        (System_Predicate_T__o *)v41,
        (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
      return;
    }
LABEL_10:
    sub_B5D69C(v23, v24);
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
    sub_B5D69C(0LL, v6);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  BuffList_ActInfo_o *ActInfo; // x22
  __int64 v25; // x3
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v27; // x21
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  __int64 v33; // x21
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  BattleBuffData_CheckIndividualitiesData_o *v42; // x3
  const MethodInfo *v43; // x5
  int v44; // w8
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  int v50; // [xsp+0h] [xbp-40h]
  int32_t plusMinus[2]; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_42EC152 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)buffData, actionType, checkIndividualitiesDataArray);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Skip_BattleBuffData_CheckIndividualitiesData___, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo, v18, v19, v20);
    this = (BattleBuffData_o *)sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    byte_42EC152 = 1;
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
                               (const MethodInfo_1CB6AFC *)Method_System_Linq_Enumerable_Skip_BattleBuffData_CheckIndividualitiesData___);
  if ( !this )
LABEL_42:
    sub_B5D69C(this, buffData);
  klass = this->klass;
  v27 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_14:
    v30 = sub_AF54C0(
            this,
            System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo,
            0LL,
            v25);
  }
  v33 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  if ( !v33 )
    sub_B5D69C(0LL, v31);
  while ( 1 )
  {
    v34 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_21;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_21:
      v37 = sub_AF54C0(v33, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_28;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_28:
      v41 = sub_AF54C0(
              v33,
              System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo,
              0LL,
              v32);
    }
    v42 = (BattleBuffData_CheckIndividualitiesData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(
                                                         v33,
                                                         *(_QWORD *)(v41 + 8));
    if ( !BattleBuffData__checkIndiviuality(v8, ActInfo, buffData, v42, &plusMinus[1], v43) )
    {
      v44 = 85;
      goto LABEL_33;
    }
  }
  v44 = 83;
LABEL_33:
  v50 = v44;
  v45 = *(_QWORD *)v33;
  if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
  {
    v46 = 0LL;
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
        goto LABEL_37;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_37:
    v48 = sub_AF54C0(v33, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v33, *(_QWORD *)(v48 + 8));
  return v50 == 83;
}


bool __fastcall BattleBuffData__IsIgnoreIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 0x10000, 0LL);
}


bool __fastcall BattleBuffData__IsPermanentSleep(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  const MethodInfo *v28; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  BuffList_ActInfo_o *ActInfo; // x22
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x21
  const MethodInfo *v37; // x5
  char v38; // w19
  int v39; // w20
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-48h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_42EC19B & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)checkIndividualities, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v24, v25, v26);
    byte_42EC19B = 1;
  }
  memset(&v41, 0, sizeof(v41));
  plusMinus = 0;
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v28);
  if ( !v27 )
    sub_B5D69C(PassiveList, v30);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
    PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v31);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(39, 0LL, 0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v27,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v34 )
      break;
    current = v41.fields.current;
    if ( !v41.fields.current )
      sub_B5D69C(v34, v35);
    if ( !BYTE3(v41.fields.current[23].klass)
      && BattleBuffData_BuffData__IsPermanentSleep((BattleBuffData_BuffData_o *)v41.fields.current, 0LL)
      && BattleBuffData__checkIndiviuality(
           this,
           ActInfo,
           (BattleBuffData_BuffData_o *)current,
           checkIndividualities,
           &plusMinus,
           v37) )
    {
      v38 = 1;
      v39 = 5;
      goto LABEL_15;
    }
  }
  v38 = 0;
  v39 = 3;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v39 == 5) & v38;
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
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  __int64 v10; // x21
  int size; // w8

  v5 = this;
  if ( (byte_42EC11F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)buff, (_DWORD)method, v3);
    this = (BattleBuffData_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7, v8);
    byte_42EC11F = 1;
  }
  unfixedBuffList = v5->fields.unfixedBuffList;
  if ( !unfixedBuffList )
LABEL_11:
    sub_B5D69C(this, buff);
  v10 = 0LL;
  while ( 1 )
  {
    size = unfixedBuffList->fields._size;
    if ( (int)v10 >= size )
      return 0;
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !buff )
      goto LABEL_11;
    if ( unfixedBuffList->fields._items->m_Items[v10 + 1] == buff->fields.addOrder )
      return 1;
    unfixedBuffList = v5->fields.unfixedBuffList;
    ++v10;
    if ( !unfixedBuffList )
      goto LABEL_11;
  }
}


bool __fastcall BattleBuffData__IsWarBoardNotAttacked(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentAllBaffList; // x0
  __int64 v15; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  char v18; // w19
  int v19; // w20
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC19C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v11, v12, v13);
    byte_42EC19C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  CurrentAllBaffList = BattleBuffData__getCurrentAllBaffList(this, 1, v2);
  if ( !CurrentAllBaffList )
    sub_B5D69C(0LL, v15);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CurrentAllBaffList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    if ( !v21.fields.current )
      sub_B5D69C(v16, v17);
    if ( !BYTE3(v21.fields.current[23].klass)
      && BattleBuffData_BuffData__IsWarBoardNotAttacked((BattleBuffData_BuffData_o *)v21.fields.current, 0LL) )
    {
      v18 = 1;
      v19 = 2;
      goto LABEL_11;
    }
  }
  v19 = 0;
  v18 = 0;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v19 == 2) & v18;
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

  if ( (byte_42EC14C & 1) == 0 )
  {
    sub_B5D5C4(&RemovedBuffInfo_TypeInfo, (_DWORD)endList, (_DWORD)removedLinkedBuffs, method);
    byte_42EC14C = 1;
  }
  v6 = (RemovedBuffInfo_o *)sub_B5D694(RemovedBuffInfo_TypeInfo);
  RemovedBuffInfo___ctor(v6, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  bool v12; // w22
  BattleBuffData_o **p_auraBuffList; // x21
  BattleBuffData_o **p_conditionalAuraBuff; // x20
  BattleBuffData_o *conditionalAuraBuff; // t1
  BattleBuffData_o *v16; // x0
  const MethodInfo *v17; // x3

  v6 = this;
  if ( (byte_42EC18B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, (_DWORD)buff, state, method);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
                                 v7,
                                 v8,
                                 v9);
    byte_42EC18B = 1;
  }
  if ( !buff )
    goto LABEL_24;
  BattleBuffData_BuffData__offState(buff, state, 0LL);
  v12 = 0;
  if ( state >= 0x4000 )
  {
    if ( state != 0x4000 && state != 0x200000 && state != 0x20000 )
      return v12;
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
             (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        v12 = 0;
      }
      else
      {
        this = *p_auraBuffList;
        if ( !*p_auraBuffList )
          goto LABEL_24;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        v12 = 1;
      }
      conditionalAuraBuff = (BattleBuffData_o *)v6->fields.conditionalAuraBuff;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
      this = conditionalAuraBuff;
      if ( !conditionalAuraBuff )
LABEL_24:
        sub_B5D69C(this, buff);
      v10 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
              (WarBoardManager_TaskList_o *)buff,
              (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( !v10 )
      {
        this = *p_conditionalAuraBuff;
        if ( *p_conditionalAuraBuff )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          v12 = 1;
          goto LABEL_22;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v12 = 0;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
    }
LABEL_22:
    BattleBuffData__ApplyBuffData(
      (BattleBuffData_o *)v10,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_auraBuffList,
      v11);
    BattleBuffData__ApplyBuffData(
      v16,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_conditionalAuraBuff,
      v17);
    return v12;
  }
  if ( state == 1 || state == 16 )
    goto LABEL_11;
  return v12;
}


bool __fastcall BattleBuffData__OnStateWithAuraConditionCheck(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t state,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  char v12; // w22
  BattleBuffData_o **p_auraBuffList; // x21
  int v14; // w23
  BattleBuffData_o **p_conditionalAuraBuff; // x20
  BattleBuffData_o *conditionalAuraBuff; // t1
  BattleBuffData_o *v17; // x0
  const MethodInfo *v18; // x3

  v6 = this;
  if ( (byte_42EC18A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, (_DWORD)buff, state, method);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
                                 v7,
                                 v8,
                                 v9);
    byte_42EC18A = 1;
  }
  if ( !buff )
    goto LABEL_24;
  BattleBuffData_BuffData__onState(buff, state, 0LL);
  v12 = 0;
  if ( state >= 0x4000 )
  {
    if ( state != 0x4000 && state != 0x200000 && state != 0x20000 )
      return v12;
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
             (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        this = *p_auraBuffList;
        if ( !*p_auraBuffList )
          goto LABEL_24;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        v14 = 1;
      }
      else
      {
        v14 = 0;
      }
      conditionalAuraBuff = (BattleBuffData_o *)v6->fields.conditionalAuraBuff;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
      this = conditionalAuraBuff;
      if ( !conditionalAuraBuff )
LABEL_24:
        sub_B5D69C(this, buff);
      v10 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
              (WarBoardManager_TaskList_o *)buff,
              (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      v12 = v14 != 0;
      if ( v10 )
      {
        this = *p_conditionalAuraBuff;
        if ( *p_conditionalAuraBuff )
        {
          v10 = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                  (WarBoardManager_TaskList_o *)buff,
                  (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          v12 = 1;
          goto LABEL_22;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v12 = 0;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
    }
LABEL_22:
    BattleBuffData__ApplyBuffData(
      (BattleBuffData_o *)v10,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_auraBuffList,
      v11);
    BattleBuffData__ApplyBuffData(
      v17,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_conditionalAuraBuff,
      v18);
    return v12;
  }
  if ( state == 1 || state == 16 )
    goto LABEL_11;
  return v12;
}


bool __fastcall BattleBuffData__ProgressBuffTurn(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  bool result; // w0

  if ( !buff )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x20
  WarQuestSelectionMaster_o *EventId; // x0
  __int64 v19; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x20
  __int64 v21; // x21
  __int64 v22; // x21
  int chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC186 & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)buff, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15, v16);
    byte_42EC186 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AF52C4(v22);
  EventId = **(WarQuestSelectionMaster_o ***)(v22 + 184);
  if ( !EventId )
    goto LABEL_23;
  EventId = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)EventId,
              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    sub_B5D69C(EventId, v19);
  chargeTurn = entity->fields.chargeTurn;
  if ( chargeTurn >= 1 )
    buff->fields.reCharge = chargeTurn;
}


void __fastcall BattleBuffData__RechargeCommandCodeBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *Instance; // x0
  __int64 v15; // x1
  CommandCodeSkillMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v17; // x20
  __int64 v18; // x20
  SkillLvMaster_o *v19; // x20
  int v20; // w8
  void *v21; // x21
  unsigned int v22; // w22
  __int64 v23; // x8
  int chargeTurn; // w8
  __int64 v25; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC184 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, (_DWORD)buff, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EC184 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (CommandCodeSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v18 = **(_QWORD **)(v17 + 192);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AF52C4(v18);
  Instance = **(void ***)(v18 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !buff)
    || !MasterData_WarQuestSelectionMaster
    || (v19 = (SkillLvMaster_o *)Instance,
        (Instance = CommandCodeSkillMaster__getCommandCodeActiveSkillList(
                      MasterData_WarQuestSelectionMaster,
                      buff->fields.masterCommandCodeId,
                      0LL)) == 0LL) )
  {
LABEL_24:
    sub_B5D69C(Instance, v15);
  }
  v20 = *((_DWORD *)Instance + 6);
  v21 = Instance;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v20 )
      {
        v25 = sub_B5D6C8(Instance);
        sub_B5D668(v25, 0LL);
      }
      v23 = *((_QWORD *)v21 + (int)v22 + 4);
      entity = 0LL;
      if ( !v23 || !v19 )
        goto LABEL_24;
      Instance = (void *)SkillLvMaster__TryGetEntity(v19, &entity, *(_DWORD *)(v23 + 28), 1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_24;
        chargeTurn = entity->fields.chargeTurn;
        if ( chargeTurn >= 1 )
          break;
      }
      v20 = *((_DWORD *)v21 + 6);
      if ( (int)++v22 >= v20 )
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
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x24
  int32_t v16; // w21
  int32_t size; // w8

  v5 = this;
  if ( (byte_42EC121 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__, (_DWORD)condition, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v9, v10, v11);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__,
                                 v12,
                                 v13,
                                 v14);
    byte_42EC121 = 1;
  }
  activeList = v5->fields.activeList;
  if ( !activeList )
LABEL_13:
    sub_B5D69C(this, condition);
  v16 = 0;
  while ( 1 )
  {
    size = activeList->fields._size;
    if ( v16 >= size )
      break;
    if ( size <= (unsigned int)v16 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( condition )
    {
      this = (BattleBuffData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                   condition,
                                   activeList->fields._items->m_Items[v16],
                                   (const MethodInfo_2C2ECE4 *)Method_System_Func_BattleBuffData_BuffData__bool__Invoke__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleBuffData_o *)v5->fields.activeList;
        if ( !this )
          goto LABEL_13;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v16--,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      activeList = v5->fields.activeList;
      ++v16;
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
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x23
  int32_t v13; // w21
  int32_t size; // w8
  BattleBuffData_BuffData_o *v15; // x8
  unsigned int v16; // w23
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v17; // x25
  BattleBuffData_BuffData_o *v18; // x8
  int32_t addOrder; // w25
  BattleBuffData_BuffData_o *v20; // x8

  v5 = this;
  if ( (byte_42EC120 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__,
      (_DWORD)removeBuffList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v6, v7, v8);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__,
                                 v9,
                                 v10,
                                 v11);
    byte_42EC120 = 1;
  }
  activeList = v5->fields.activeList;
  if ( !activeList )
LABEL_26:
    sub_B5D69C(this, removeBuffList);
  v13 = 0;
  while ( 1 )
  {
    size = activeList->fields._size;
    if ( v13 >= size )
      break;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v15 = activeList->fields._items->m_Items[v13];
    if ( !v15 )
      goto LABEL_26;
    if ( v15->fields._isRemove )
    {
      if ( !removeBuffList )
        goto LABEL_26;
      if ( removeBuffList->fields._size >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          v17 = v5->fields.activeList;
          if ( !v17 )
            goto LABEL_26;
          if ( v17->fields._size <= (unsigned int)v13 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v18 = v17->fields._items->m_Items[v13];
          if ( !v18 )
            goto LABEL_26;
          addOrder = v18->fields.addOrder;
          if ( removeBuffList->fields._size <= v16 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v20 = removeBuffList->fields._items->m_Items[v16];
          if ( !v20 )
            goto LABEL_26;
          if ( addOrder == v20->fields.addOrder )
            break;
          if ( (signed int)++v16 >= removeBuffList->fields._size )
            goto LABEL_25;
        }
        this = (BattleBuffData_o *)v5->fields.activeList;
        if ( !this )
          goto LABEL_26;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v13--,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
    }
LABEL_25:
    activeList = v5->fields.activeList;
    ++v13;
    if ( !activeList )
      goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__RemoveClassBoardSkillBuff(
        BattleBuffData_o *this,
        AddSkillData_array *classBoardSkillArray,
        AddSkillData_array *classBoardCommandSpellArray,
        bool isDifferentClass,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x22
  System_Collections_Generic_IEnumerable_T__o *IsNullOrEmpty; // x0
  __int64 v76; // x1
  unsigned __int64 v77; // x19
  __int64 v78; // x25
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v87; // x27
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v88; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v89; // x27
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v91; // x27
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v93; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v94; // x27
  const MethodInfo *v95; // x3
  AddSkillData_array *v96; // x9
  signed int max_length; // w8
  signed int v98; // w10
  AddSkillData_o *v99; // x8
  __int64 v100; // x24
  __int64 v101; // x0
  __int64 v102; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **current; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v110; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v111; // x26
  __int64 v112; // x0
  __int64 v113; // x1
  System_Collections_Generic_IEnumerable_T__o *v114; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v115; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v116; // x26
  __int64 v117; // x0
  __int64 v118; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v119; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v120; // x26
  __int64 v121; // x0
  __int64 v122; // x1
  System_Collections_Generic_IEnumerable_T__o *v123; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v124; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v125; // x26
  __int64 v126; // x0
  __int64 v127; // x1
  signed int v128; // w10
  int v129; // w25
  __int64 v130; // x0
  System_Collections_Generic_IEnumerable_T__o *v132; // [xsp+10h] [xbp-B0h]
  int v134; // [xsp+1Ch] [xbp-A4h]
  signed int v136; // [xsp+28h] [xbp-98h]
  _BYTE v137[28]; // [xsp+30h] [xbp-90h] BYREF
  int v138; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v139; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42EC1AE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___,
      (_DWORD)classBoardSkillArray,
      (_DWORD)classBoardCommandSpellArray,
      isDifferentClass);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass254_0__RemoveClassBoardSkillBuff_b__0__, v44, v45, v46);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass254_0__RemoveClassBoardSkillBuff_b__1__, v47, v48, v49);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass254_0__RemoveClassBoardSkillBuff_b__2__, v50, v51, v52);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass254_0__RemoveClassBoardSkillBuff_b__3__, v53, v54, v55);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass254_0_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass254_1__RemoveClassBoardSkillBuff_b__4__, v59, v60, v61);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass254_1__RemoveClassBoardSkillBuff_b__5__, v62, v63, v64);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass254_1__RemoveClassBoardSkillBuff_b__6__, v65, v66, v67);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass254_1__RemoveClassBoardSkillBuff_b__7__, v68, v69, v70);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass254_1_TypeInfo, v71, v72, v73);
    byte_42EC1AE = 1;
  }
  entitys = 0LL;
  memset(&v139, 0, sizeof(v139));
  v138 = 0;
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__IsNullOrEmpty(
                                                                   (System_Collections_ICollection_o *)classBoardSkillArray,
                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !classBoardSkillArray )
      goto LABEL_51;
    if ( (int)classBoardSkillArray->max_length >= 1 )
    {
      v77 = 0LL;
      while ( 1 )
      {
        v78 = sub_B5D694(BattleBuffData___c__DisplayClass254_0_TypeInfo);
        BattleBuffData___c__DisplayClass254_0___ctor((BattleBuffData___c__DisplayClass254_0_o *)v78, 0LL);
        if ( v77 >= classBoardSkillArray->max_length )
          break;
        if ( !v78 )
          goto LABEL_51;
        v85 = (System_Int32_array **)classBoardSkillArray->m_Items[v77];
        *(_QWORD *)(v78 + 16) = v85;
        sub_B5D560((BattleServantConfConponent_o *)(v78 + 16), v85, v79, v80, v81, v82, v83, v84);
        passiveList = this->fields.passiveList;
        v87 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v87,
          (Il2CppObject *)v78,
          Method_BattleBuffData___c__DisplayClass254_0__RemoveClassBoardSkillBuff_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !passiveList )
          goto LABEL_51;
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)v87,
                                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
        if ( !v74 )
          goto LABEL_51;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v74,
          IsNullOrEmpty,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        v88 = this->fields.passiveList;
        v89 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v89,
          (Il2CppObject *)v78,
          Method_BattleBuffData___c__DisplayClass254_0__RemoveClassBoardSkillBuff_b__1__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !v88 )
          goto LABEL_51;
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v88,
          (System_Predicate_T__o *)v89,
          (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        activeList = this->fields.activeList;
        v91 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v91,
          (Il2CppObject *)v78,
          Method_BattleBuffData___c__DisplayClass254_0__RemoveClassBoardSkillBuff_b__2__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !activeList )
          goto LABEL_51;
        All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                               (System_Predicate_T__o *)v91,
                                                               (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v74,
          All,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        v93 = this->fields.activeList;
        v94 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v94,
          (Il2CppObject *)v78,
          Method_BattleBuffData___c__DisplayClass254_0__RemoveClassBoardSkillBuff_b__3__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !v93 )
          goto LABEL_51;
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v93,
          (System_Predicate_T__o *)v94,
          (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        if ( (__int64)++v77 >= (int)classBoardSkillArray->max_length )
          goto LABEL_15;
      }
LABEL_52:
      v130 = sub_B5D6C8(IsNullOrEmpty);
      sub_B5D668(v130, 0LL);
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
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v96 = classBoardCommandSpellArray;
  if ( !classBoardCommandSpellArray )
LABEL_51:
    sub_B5D69C(IsNullOrEmpty, v76);
  max_length = classBoardCommandSpellArray->max_length;
  if ( max_length >= 1 )
  {
    v134 = 0;
    v98 = 0;
    v132 = IsNullOrEmpty;
    while ( v98 < (unsigned int)max_length )
    {
      v99 = v96->m_Items[v98];
      if ( !v99 )
        goto LABEL_51;
      v136 = v98;
      if ( !IsNullOrEmpty )
        goto LABEL_51;
      if ( ClassBoardCommandSpellMaster__TryGetEntityList(
             (ClassBoardCommandSpellMaster_o *)IsNullOrEmpty,
             &entitys,
             v99->fields.id,
             v99->fields.lv,
             0LL) )
      {
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)entitys;
        if ( !entitys )
          goto LABEL_51;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v137,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v139 = *(System_Collections_Generic_List_Enumerator_T__o *)v137;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v139,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          v100 = sub_B5D694(BattleBuffData___c__DisplayClass254_1_TypeInfo);
          BattleBuffData___c__DisplayClass254_1___ctor((BattleBuffData___c__DisplayClass254_1_o *)v100, 0LL);
          if ( !v100 )
            sub_B5D69C(v101, v102);
          current = (System_Int32_array **)v139.fields.current;
          *(_QWORD *)(v100 + 16) = v139.fields.current;
          sub_B5D560((BattleServantConfConponent_o *)(v100 + 16), current, v103, v104, v105, v106, v107, v108);
          v110 = this->fields.passiveList;
          v111 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v111,
            (Il2CppObject *)v100,
            Method_BattleBuffData___c__DisplayClass254_1__RemoveClassBoardSkillBuff_b__4__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v110 )
            sub_B5D69C(v112, v113);
          v114 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v110,
                                                                  (System_Predicate_T__o *)v111,
                                                                  (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
          if ( !v74 )
            sub_B5D69C(v114, v114);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v74,
            v114,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v115 = this->fields.passiveList;
          v116 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v116,
            (Il2CppObject *)v100,
            Method_BattleBuffData___c__DisplayClass254_1__RemoveClassBoardSkillBuff_b__5__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v115 )
            sub_B5D69C(v117, v118);
          System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
            (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v115,
            (System_Predicate_T__o *)v116,
            (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
          v119 = this->fields.activeList;
          v120 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v120,
            (Il2CppObject *)v100,
            Method_BattleBuffData___c__DisplayClass254_1__RemoveClassBoardSkillBuff_b__6__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v119 )
            sub_B5D69C(v121, v122);
          v123 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v119,
                                                                  (System_Predicate_T__o *)v120,
                                                                  (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v74,
            v123,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v124 = this->fields.activeList;
          v125 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v125,
            (Il2CppObject *)v100,
            Method_BattleBuffData___c__DisplayClass254_1__RemoveClassBoardSkillBuff_b__7__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v124 )
            sub_B5D69C(v126, v127);
          System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
            (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v124,
            (System_Predicate_T__o *)v125,
            (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        }
        *(_DWORD *)&v137[4 * v134 + 24] = 395;
        v129 = ++v138;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v139,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
        IsNullOrEmpty = v132;
        v128 = v136;
        if ( v129 )
        {
          v134 = v129;
          v96 = classBoardCommandSpellArray;
          if ( *(_DWORD *)&v137[4 * v129 + 20] == 395 )
          {
            v138 = v129 - 1;
            v134 = v129 - 1;
          }
        }
        else
        {
          v96 = classBoardCommandSpellArray;
          v134 = 0;
        }
      }
      else
      {
        v96 = classBoardCommandSpellArray;
        IsNullOrEmpty = v132;
        v128 = v136;
      }
      max_length = v96->max_length;
      v98 = v128 + 1;
      if ( v98 >= max_length )
        goto LABEL_50;
    }
    goto LABEL_52;
  }
LABEL_50:
  BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v74,
    logic,
    v95);
}


void __fastcall BattleBuffData__RemoveClassIconEffectBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *effectBuff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3

  v5 = this;
  if ( (byte_42EC1AC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
      (_DWORD)effectBuff,
      (_DWORD)method,
      v3);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
                                 v6,
                                 v7,
                                 v8);
    byte_42EC1AC = 1;
  }
  if ( !effectBuff )
    goto LABEL_10;
  if ( effectBuff->fields.classIconAuraEffectId )
  {
    this = (BattleBuffData_o *)v5->fields.classIconAuraEffectBuffList;
    if ( !this )
      goto LABEL_10;
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
           (WarBoardManager_TaskList_o *)effectBuff,
           (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v5->fields.classIconAuraEffectBuffList;
      if ( this )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)effectBuff,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        return;
      }
LABEL_10:
      sub_B5D69C(this, effectBuff);
    }
  }
}


void __fastcall BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *removeBuffList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  BattleBuffData_o *v23; // x0
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC1AF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)removeBuffList,
      (_DWORD)logic,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v16, v17, v18);
    byte_42EC1AF = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffList, 0LL) )
  {
    v20 = BattleBuffData__removeLinkageBuff(this, removeBuffList, 0, v19);
    if ( removeBuffList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)removeBuffList,
        (System_Collections_Generic_IEnumerable_T__o *)v20,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(this, removeBuffList, v22);
      BattleBuffData__CheckAndUpdateFieldIndividualityBuff(v23, removeBuffList, logic, v24);
      v20 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                                                                            removeBuffList,
                                                                            v25);
      if ( ((unsigned __int8)v20 & 1) == 0 )
        goto LABEL_8;
      if ( logic )
      {
        BattleLogic__updateFieldBuff(logic, 0LL);
LABEL_8:
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v27,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)removeBuffList,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v27,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
          BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v27.fields.current, v26);
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v27,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
        return;
      }
    }
    sub_B5D69C(v20, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__RemoveLinkageBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endBuffs,
        bool isCreateDummy,
        bool isFamily,
        const MethodInfo *method)
{
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  int v41; // w1
  char v42; // w2
  __int64 v43; // x3
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  int v47; // w1
  char v48; // w2
  __int64 v49; // x3
  int v50; // w1
  char v51; // w2
  __int64 v52; // x3
  int v53; // w1
  char v54; // w2
  __int64 v55; // x3
  int v56; // w1
  char v57; // w2
  __int64 v58; // x3
  int v59; // w1
  char v60; // w2
  __int64 v61; // x3
  int v62; // w1
  char v63; // w2
  __int64 v64; // x3
  int v65; // w1
  char v66; // w2
  __int64 v67; // x3
  int v68; // w1
  char v69; // w2
  __int64 v70; // x3
  int v71; // w1
  char v72; // w2
  __int64 v73; // x3
  int v74; // w1
  char v75; // w2
  __int64 v76; // x3
  int v77; // w1
  char v78; // w2
  __int64 v79; // x3
  int v80; // w1
  char v81; // w2
  __int64 v82; // x3
  int v83; // w1
  char v84; // w2
  __int64 v85; // x3
  __int64 v86; // x24
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  System_Collections_Generic_IEnumerable_T__o *linkageTargetIndividualty; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v95; // x26
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  __int64 v102; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__c *klass; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v104; // x25
  unsigned __int64 v105; // x10
  int32_t *p_offset; // x11
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x3
  __int64 v110; // x25
  __int64 v111; // x8
  unsigned __int64 v112; // x10
  int *v113; // x11
  __int64 v114; // x0
  __int64 v115; // x3
  __int64 v116; // x8
  unsigned __int64 v117; // x10
  int *v118; // x11
  __int64 v119; // x0
  __int64 v120; // x0
  __int64 v121; // x1
  System_Collections_Generic_IEnumerable_T__o *v122; // x1
  __int64 v123; // x8
  unsigned __int64 v124; // x10
  int *v125; // x11
  __int64 v126; // x0
  System_Func_BattleBuffData_BuffData__int__bool__o *v127; // x25
  System_Collections_Generic_List_int__o *v128; // x22
  signed __int64 v129; // x8
  unsigned __int64 v130; // x24
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x27
  int32_t size; // w8
  int32_t v133; // w24
  unsigned __int64 v134; // x26
  int v135; // w22
  BattleBuffData_BuffData_o *v136; // x27
  const MethodInfo *v137; // x2
  const MethodInfo *v138; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v139; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x26
  int32_t v141; // w8
  unsigned __int64 v142; // x22
  int v143; // w27
  BattleBuffData_BuffData_o *v144; // x26
  const MethodInfo *v145; // x2
  unsigned __int64 v147; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v148; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v150; // [xsp+20h] [xbp-60h]

  if ( (byte_42EC130 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___,
      (_DWORD)endBuffs,
      isCreateDummy,
      isFamily);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__int__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__int__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v68, v69, v70);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass73_0__RemoveLinkageBuff_b__0__, v77, v78, v79);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass73_0__RemoveLinkageBuff_b__1__, v80, v81, v82);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass73_0_TypeInfo, v83, v84, v85);
    byte_42EC130 = 1;
  }
  v86 = sub_B5D694(BattleBuffData___c__DisplayClass73_0_TypeInfo);
  BattleBuffData___c__DisplayClass73_0___ctor((BattleBuffData___c__DisplayClass73_0_o *)v86, 0LL);
  if ( !v86 )
    goto LABEL_99;
  *(_BYTE *)(v86 + 16) = isFamily;
  *(_QWORD *)(v86 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v86 + 24), (System_Int32_array **)this, v89, v90, v91, v92, v93, v94);
  v150 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v150,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v148 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v148,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v95 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v86 + 32);
  if ( !v95 )
  {
    v95 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v95,
      (Il2CppObject *)v86,
      Method_BattleBuffData___c__DisplayClass73_0__RemoveLinkageBuff_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    *(_QWORD *)(v86 + 32) = v95;
    sub_B5D560((BattleServantConfConponent_o *)(v86 + 32), (System_Int32_array **)v95, v96, v97, v98, v99, v100, v101);
  }
  auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)endBuffs,
                                                                                  (System_Func_TSource__bool__o *)v95,
                                                                                  (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !auraBuffList )
    goto LABEL_99;
  klass = auraBuffList->klass;
  v104 = auraBuffList;
  if ( *(_WORD *)&auraBuffList->klass->_2.bitflags1 )
  {
    v105 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v105;
      p_offset += 4;
      if ( v105 >= *(unsigned __int16 *)&auraBuffList->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    v107 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_11:
    v107 = sub_AF54C0(auraBuffList, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v102);
  }
  v110 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_WarBoardManager_TaskList__o *, _QWORD))v107)(
           v104,
           *(_QWORD *)(v107 + 8));
  if ( !v110 )
    sub_B5D69C(0LL, v108);
  while ( 1 )
  {
    v111 = *(_QWORD *)v110;
    if ( *(_WORD *)(*(_QWORD *)v110 + 298LL) )
    {
      v112 = 0LL;
      v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v113 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v112;
        v113 += 4;
        if ( v112 >= *(unsigned __int16 *)(*(_QWORD *)v110 + 298LL) )
          goto LABEL_18;
      }
      v114 = v111 + 16LL * *v113 + 312;
    }
    else
    {
LABEL_18:
      v114 = sub_AF54C0(v110, System_Collections_IEnumerator_TypeInfo, 0LL, v109);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v114)(v110, *(_QWORD *)(v114 + 8)) & 1) == 0 )
      break;
    v116 = *(_QWORD *)v110;
    if ( *(_WORD *)(*(_QWORD *)v110 + 298LL) )
    {
      v117 = 0LL;
      v118 = (int *)(*(_QWORD *)(v116 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v118 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v117;
        v118 += 4;
        if ( v117 >= *(unsigned __int16 *)(*(_QWORD *)v110 + 298LL) )
          goto LABEL_25;
      }
      v119 = v116 + 16LL * *v118 + 312;
    }
    else
    {
LABEL_25:
      v119 = sub_AF54C0(v110, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v115);
    }
    v120 = (*(__int64 (__fastcall **)(__int64, _QWORD))v119)(v110, *(_QWORD *)(v119 + 8));
    if ( !v120 )
      sub_B5D69C(0LL, v121);
    v122 = *(System_Collections_Generic_IEnumerable_T__o **)(v120 + 128);
    if ( v122 && v122[1].monitor )
    {
      if ( !v148 )
        sub_B5D69C(v120, v122);
      System_Collections_Generic_List_int___AddRange(
        v148,
        v122,
        (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  v123 = *(_QWORD *)v110;
  if ( *(_WORD *)(*(_QWORD *)v110 + 298LL) )
  {
    v124 = 0LL;
    v125 = (int *)(*(_QWORD *)(v123 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v125 - 1) != System_IDisposable_TypeInfo )
    {
      ++v124;
      v125 += 4;
      if ( v124 >= *(unsigned __int16 *)(*(_QWORD *)v110 + 298LL) )
        goto LABEL_36;
    }
    v126 = v123 + 16LL * *v125 + 312;
  }
  else
  {
LABEL_36:
    v126 = sub_AF54C0(v110, System_IDisposable_TypeInfo, 0LL, v115);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v126)(v110, *(_QWORD *)(v126 + 8));
  v127 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__int__bool__TypeInfo);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v127,
    (Il2CppObject *)v86,
    Method_BattleBuffData___c__DisplayClass73_0__RemoveLinkageBuff_b__0__,
    (const MethodInfo_2C388D0 *)Method_System_Func_BattleBuffData_BuffData__int__bool___ctor__);
  v128 = v148;
  if ( !v148 )
    goto LABEL_99;
  LODWORD(v129) = v148->fields._size;
  if ( (int)v129 >= 1 )
  {
    v130 = 0LL;
    while ( 1 )
    {
      if ( v130 >= (unsigned int)v129 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      activeList = this->fields.activeList;
      if ( !activeList )
        goto LABEL_99;
      size = activeList->fields._size;
      v147 = v130;
      v133 = v128->fields._items->m_Items[v130 + 1];
      if ( size - 1 >= 0 )
        break;
LABEL_72:
      passiveList = this->fields.passiveList;
      if ( !passiveList )
        goto LABEL_99;
      v141 = passiveList->fields._size;
      if ( v141 - 1 >= 0 )
      {
        v142 = v141 - 1;
        v143 = v141 - 2;
        do
        {
          if ( v142 >= (unsigned int)passiveList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( !v127 )
            break;
          v144 = passiveList->fields._items->m_Items[v142];
          auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                                                                          v127,
                                                                                          v144,
                                                                                          v133,
                                                                                          (const MethodInfo_2C388E4 *)Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__);
          if ( ((unsigned __int8)auraBuffList & 1) != 0 )
          {
            if ( !v144 )
              break;
            linkageTargetIndividualty = (System_Collections_Generic_IEnumerable_T__o *)v144->fields.linkageTargetIndividualty;
            if ( linkageTargetIndividualty && linkageTargetIndividualty[1].monitor )
              System_Collections_Generic_List_int___AddRange(
                v148,
                linkageTargetIndividualty,
                (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v144->fields.auraEffectId )
            {
              auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
              if ( !auraBuffList )
                break;
              if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                     auraBuffList,
                     (WarBoardManager_TaskList_o *)v144,
                     (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
              {
                auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
                if ( !auraBuffList )
                  break;
                System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                  auraBuffList,
                  (WarBoardManager_TaskList_o *)v144,
                  (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
              }
            }
            BattleBuffData__RemoveClassIconEffectBuff(this, v144, v145);
            if ( !endBuffs )
              break;
            if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)endBuffs,
                    (WarBoardManager_TaskList_o *)v144,
                    (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
            {
              auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v150;
              if ( !v150 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v150,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v144,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
            auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.passiveList;
            if ( !auraBuffList )
              break;
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)auraBuffList,
              v143 + 1,
              (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
          }
          if ( (v143 & 0x80000000) != 0 )
            goto LABEL_97;
          passiveList = this->fields.passiveList;
          --v142;
          --v143;
        }
        while ( passiveList );
LABEL_99:
        sub_B5D69C(auraBuffList, linkageTargetIndividualty);
      }
LABEL_97:
      v128 = v148;
      v129 = v148->fields._size;
      v130 = v147 + 1;
      if ( (__int64)(v147 + 1) >= v129 )
        return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v150;
    }
    v134 = size - 1;
    v135 = size - 2;
    while ( 1 )
    {
      if ( v134 >= (unsigned int)activeList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v127 )
        goto LABEL_99;
      v136 = activeList->fields._items->m_Items[v134];
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                                                                      v127,
                                                                                      v136,
                                                                                      v133,
                                                                                      (const MethodInfo_2C388E4 *)Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__);
      if ( ((unsigned __int8)auraBuffList & 1) == 0 )
        goto LABEL_68;
      if ( !v136 )
        goto LABEL_99;
      linkageTargetIndividualty = (System_Collections_Generic_IEnumerable_T__o *)v136->fields.linkageTargetIndividualty;
      if ( linkageTargetIndividualty && linkageTargetIndividualty[1].monitor )
        System_Collections_Generic_List_int___AddRange(
          v148,
          linkageTargetIndividualty,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      if ( v136->fields.auraEffectId )
      {
        auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
        if ( !auraBuffList )
          goto LABEL_99;
        if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
               auraBuffList,
               (WarBoardManager_TaskList_o *)v136,
               (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
        {
          auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
          if ( !auraBuffList )
            goto LABEL_99;
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            auraBuffList,
            (WarBoardManager_TaskList_o *)v136,
            (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        }
      }
      BattleBuffData__RemoveClassIconEffectBuff(this, v136, v137);
      if ( !endBuffs )
        goto LABEL_99;
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)endBuffs,
              (WarBoardManager_TaskList_o *)v136,
              (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v150;
        if ( !v150 )
          goto LABEL_99;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v150,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v136,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.activeList;
      if ( !auraBuffList )
        goto LABEL_99;
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)auraBuffList,
        v134,
        (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      if ( !isCreateDummy )
        goto LABEL_68;
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)BattleBuffData__CreateDummyBuff(
                                                                                      (BattleBuffData_o *)auraBuffList,
                                                                                      v136,
                                                                                      v138);
      v139 = this->fields.activeList;
      if ( !v139 )
        goto LABEL_99;
      if ( (__int64)v134 < v139->fields._size )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.activeList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)auraBuffList,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      if ( (v135 & 0x80000000) != 0 )
        goto LABEL_72;
LABEL_69:
      activeList = this->fields.activeList;
      --v134;
      --v135;
      if ( !activeList )
        goto LABEL_99;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
      v134,
      (XWeaponTrail_Element_o *)auraBuffList,
      (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__);
LABEL_68:
    if ( (v135 & 0x80000000) != 0 )
      goto LABEL_72;
    goto LABEL_69;
  }
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v150;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__RemoveNoTurnBuff(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogic_o *v4; // x24
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x21
  __int64 v40; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x22
  void *All; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__69_0; // x23
  BattleLogic_o *v45; // x19
  Il2CppObject *v46; // x24
  struct BattleBuffData___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v54; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v55; // x23
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x22
  struct BattleBuffData___c_StaticFields *v57; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__69_1; // x23
  BattleLogic_o *v59; // x27
  Il2CppObject *v60; // x24
  struct BattleBuffData___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_IEnumerable_T__o *v68; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v69; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v70; // x23
  const MethodInfo *v71; // x3
  System_Collections_Generic_IEnumerable_T__o *v72; // x0
  const MethodInfo *v73; // x2
  BattleBuffData_o *v74; // x0
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x1

  v4 = logic;
  if ( (byte_42EC12C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleBuffData_checkBuffClear__, (_DWORD)logic, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_BattleBuffData___c__RemoveNoTurnBuff_b__69_0__, v30, v31, v32);
    sub_B5D5C4(&Method_BattleBuffData___c__RemoveNoTurnBuff_b__69_1__, v33, v34, v35);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v36, v37, v38);
    byte_42EC12C = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  All = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__69_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__69_0;
  if ( !_9__69_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 )
    {
      v45 = v4;
      if ( !*((_DWORD *)All + 56) )
      {
        j_il2cpp_runtime_class_init_0(All);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v45 = v4;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__69_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__69_0,
      v46,
      Method_BattleBuffData___c__RemoveNoTurnBuff_b__69_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v47 = BattleBuffData___c_TypeInfo->static_fields;
    v47->__9__69_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__69_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v47->__9__69_0,
      (System_Int32_array **)_9__69_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v4 = v45;
  }
  if ( !passiveList )
    goto LABEL_30;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
          (System_Predicate_T__o *)_9__69_0,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v39 )
    goto LABEL_30;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v54 = this->fields.passiveList;
  v55 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v55,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v54 )
    goto LABEL_30;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v54,
    (System_Predicate_T__o *)v55,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  All = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v57 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__69_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v57->__9__69_1;
  if ( !_9__69_1 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 )
    {
      v59 = v4;
      if ( !*((_DWORD *)All + 56) )
      {
        j_il2cpp_runtime_class_init_0(All);
        v57 = BattleBuffData___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v59 = v4;
    }
    v60 = (Il2CppObject *)v57->__9;
    _9__69_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__69_1,
      v60,
      Method_BattleBuffData___c__RemoveNoTurnBuff_b__69_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v61 = BattleBuffData___c_TypeInfo->static_fields;
    v61->__9__69_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__69_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v61->__9__69_1,
      (System_Int32_array **)_9__69_1,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v4 = v59;
  }
  if ( !activeList )
    goto LABEL_30;
  v68 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__69_1,
                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
    v68,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v69 = this->fields.activeList;
  v70 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v70,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v69 )
    goto LABEL_30;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v69,
    (System_Predicate_T__o *)v70,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v72 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v39,
                                                         0,
                                                         v71);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
    v72,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v39,
    v73);
  BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
    v74,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v39,
    v4,
    v75);
  All = (void *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                  (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v39,
                  v76);
  if ( ((unsigned __int8)All & 1) != 0 )
  {
    if ( v4 )
    {
      BattleLogic__updateFieldBuff(v4, 0LL);
      return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    }
LABEL_30:
    sub_B5D69C(All, v40);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__RemoveProgressingBuffList(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  BattleBuffData_BuffData_array *v42; // x0
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *passiveList; // x21
  void *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v47; // x22
  Il2CppObject *v48; // x23
  struct BattleBuffData___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *activeList; // x21
  void *v57; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v58; // x22
  Il2CppObject *v59; // x23
  struct BattleBuffData___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *v68; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v69; // x22
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *v70; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v71; // x22
  const MethodInfo *v72; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v73; // x19
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x1
  _BOOL8 v76; // x0
  const MethodInfo *v77; // x3

  v5 = this;
  if ( (byte_42EC13B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleBuffData_checkBuffClear__, (_DWORD)linkedBuffList, (_DWORD)method, v3);
    sub_B5D5C4(&BattleLogic_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_BattleBuffData___c__RemoveProgressingBuffList_b__87_0__, v33, v34, v35);
    sub_B5D5C4(&Method_BattleBuffData___c__RemoveProgressingBuffList_b__87_1__, v36, v37, v38);
    this = (BattleBuffData_o *)sub_B5D5C4(&BattleBuffData___c_TypeInfo, v39, v40, v41);
    byte_42EC13B = 1;
  }
  if ( !linkedBuffList )
    goto LABEL_32;
  v42 = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)linkedBuffList,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleBuffData__syncLinkageBuffChangeParam(v5, v42, v43);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v5->fields.passiveList;
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  static_fields = this[1].fields.passiveList;
  v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)static_fields + 14);
  if ( !v47 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v48 = *(Il2CppObject **)static_fields;
    v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v47,
      v48,
      Method_BattleBuffData___c__RemoveProgressingBuffList_b__87_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v49 = BattleBuffData___c_TypeInfo->static_fields;
    v49->__9__87_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v47;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__87_0,
      (System_Int32_array **)v47,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !passiveList )
    goto LABEL_32;
  this = (BattleBuffData_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                               passiveList,
                               (System_Predicate_T__o *)v47,
                               (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v44 )
    goto LABEL_32;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v44,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v5->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v57 = this[1].fields.passiveList;
  v58 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)v57 + 15);
  if ( !v58 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v57 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v59 = *(Il2CppObject **)v57;
    v58 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v58,
      v59,
      Method_BattleBuffData___c__RemoveProgressingBuffList_b__87_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v60 = BattleBuffData___c_TypeInfo->static_fields;
    v60->__9__87_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)v58;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v60->__9__87_1,
      (System_Int32_array **)v58,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  if ( !activeList )
    goto LABEL_32;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         activeList,
                                                         (System_Predicate_T__o *)v58,
                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v44,
    All,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v68 = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v5->fields.passiveList;
  v69 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v69,
    (Il2CppObject *)v5,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v68
    || (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          v68,
          (System_Predicate_T__o *)v69,
          (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__),
        v70 = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v5->fields.activeList,
        v71 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v71,
          (Il2CppObject *)v5,
          Method_BattleBuffData_checkBuffClear__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !v70) )
  {
LABEL_32:
    sub_B5D69C(this, linkedBuffList);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    v70,
    (System_Predicate_T__o *)v71,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v73 = BattleBuffData__removeLinkageBuff(v5, (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v44, 0, v72);
  if ( BattleBuffData__CheckInvalidSacrificeIndivArray(
         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v44,
         v74)
    || (v76 = BattleBuffData__CheckInvalidSacrificeIndivArray(v73, v75)) )
  {
    if ( (BYTE3(BattleLogic_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleLogic_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleLogic_TypeInfo);
    BattleLogic__DoUpdateFieldBuff(0LL);
  }
  return BattleBuffData__MakeRemoveBuffInfo(
           (BattleBuffData_o *)v76,
           (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v44,
           v73,
           v77);
}


void __fastcall BattleBuffData__RemoveSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *SkillTypeBuff; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v32; // x0
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-50h] BYREF

  v6 = this;
  if ( (byte_42EC18D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)buffList,
      (_DWORD)skillTypes,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v16, v17, v18);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
                                 v19,
                                 v20,
                                 v21);
    byte_42EC18D = 1;
  }
  memset(&v34, 0, sizeof(v34));
  SkillTypeBuff = BattleBuffData__GetSkillTypeBuff(this, buffList, skillTypes, method);
  if ( !SkillTypeBuff )
    sub_B5D69C(0LL, v23);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SkillTypeBuff,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v24 )
      break;
    if ( !buffList )
      sub_B5D69C(v24, v25);
    current = v34.fields.current;
    v27 = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)buffList,
            (WarBoardManager_TaskList_o *)v34.fields.current,
            (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    if ( !current )
      sub_B5D69C(v27, v28);
    if ( LODWORD(current[4].klass) )
    {
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6->fields.auraBuffList;
      if ( !auraBuffList )
        sub_B5D69C(0LL, v28);
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             auraBuffList,
             (WarBoardManager_TaskList_o *)current,
             (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        v32 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6->fields.auraBuffList;
        if ( !v32 )
          sub_B5D69C(0LL, v31);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v32,
          (WarBoardManager_TaskList_o *)current,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
      }
    }
    BattleBuffData__RemoveClassIconEffectBuff(v6, (BattleBuffData_BuffData_o *)current, v29);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  __int64 v3; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updateWaitIntervalBuffList; // x0

  if ( (byte_42EC110 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
      (_DWORD)buff,
      (_DWORD)method,
      v3);
    byte_42EC110 = 1;
  }
  updateWaitIntervalBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updateWaitIntervalBuffList;
  if ( !updateWaitIntervalBuffList )
    sub_B5D69C(0LL, buff);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    updateWaitIntervalBuffList,
    (WarBoardManager_TaskList_o *)buff,
    (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
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
        v10 = sub_B5D6C8(PassiveList);
        sub_B5D668(v10, 0LL);
      }
      v8 = &v6->obj.klass + (int)v7;
      v9 = v8[4];
      if ( !v9 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                       (BattleBuffData_BuffData_o *)v8[4],
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        BYTE2(v9->vtable[4].methodPtr) = 0;
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_B5D69C(PassiveList, v4);
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
        v10 = sub_B5D6C8(PassiveList);
        sub_B5D668(v10, 0LL);
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
    sub_B5D69C(PassiveList, v4);
  }
}


void __fastcall BattleBuffData__ResetNotTakeOverBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleBuffData___c_c *v17; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__70_0; // x20
  Il2CppObject *v20; // x21
  struct BattleBuffData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_42EC12D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_BattleBuffData___c__ResetNotTakeOverBuff_b__70_0__, v11, v12, v13);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v14, v15, v16);
    byte_42EC12D = 1;
  }
  v17 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v17 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__70_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__70_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__70_0,
      v20,
      Method_BattleBuffData___c__ResetNotTakeOverBuff_b__70_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v21 = BattleBuffData___c_TypeInfo->static_fields;
    v21->__9__70_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__70_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v21->__9__70_0,
      (System_Int32_array **)_9__70_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  activeList = this->fields.activeList;
  if ( !activeList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
          (System_Action_T__o *)_9__70_0,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = this->fields.passiveList) == 0LL) )
  {
    sub_B5D69C(activeList, method);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
    (System_Action_T__o *)_9__70_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


void __fastcall BattleBuffData__ResetTargetUseBuff(
        BattleBuffData_o *this,
        int32_t targetType,
        bool isIntervalOnly,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  __int64 v31; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v41; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x21
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v56; // x1
  __int64 v57; // x3
  __int64 v58; // x21
  __int64 v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  __int64 v63; // x3
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  BattleBuffData_BuffData_o *v68; // x22
  const MethodInfo *v69; // x2
  __int64 v70; // x0
  __int64 v71; // x1
  BattleBuffData_IntervalData_o *intervalData; // x0
  __int64 v73; // x8
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0

  if ( (byte_42EC1A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, targetType, isIntervalOnly, method);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass245_0__ResetTargetUseBuff_b__0__, v25, v26, v27);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass245_0_TypeInfo, v28, v29, v30);
    byte_42EC1A7 = 1;
  }
  v31 = sub_B5D694(BattleBuffData___c__DisplayClass245_0_TypeInfo);
  BattleBuffData___c__DisplayClass245_0___ctor((BattleBuffData___c__DisplayClass245_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_42;
  *(_QWORD *)(v31 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  *(_DWORD *)(v31 + 24) = targetType;
  v41 = BattleBuffData__AllBuffEnumerable(this, v40);
  v42 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v31 + 32);
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
  if ( !v42 )
  {
    v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v42,
      (Il2CppObject *)v31,
      Method_BattleBuffData___c__DisplayClass245_0__ResetTargetUseBuff_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    *(_QWORD *)(v31 + 32) = v42;
    sub_B5D560((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)v42, v44, v45, v46, v47, v48, v49);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v43,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v32 )
LABEL_42:
    sub_B5D69C(v32, v33);
  klass = v32->klass;
  v52 = v32;
  if ( *(_WORD *)&v32->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v53;
      p_offset += 4;
      if ( v53 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AF54C0(v32, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v50);
  }
  v58 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v52,
          *(_QWORD *)(p_method + 8));
  if ( !v58 )
    sub_B5D69C(0LL, v56);
  while ( 1 )
  {
    v59 = *(_QWORD *)v58;
    if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
    {
      v60 = 0LL;
      v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v61 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v60;
        v61 += 4;
        if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
          goto LABEL_18;
      }
      v62 = v59 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_18:
      v62 = sub_AF54C0(v58, System_Collections_IEnumerator_TypeInfo, 0LL, v57);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v58, *(_QWORD *)(v62 + 8)) & 1) == 0 )
      break;
    v64 = *(_QWORD *)v58;
    if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
    {
      v65 = 0LL;
      v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v66 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v65;
        v66 += 4;
        if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
          goto LABEL_25;
      }
      v67 = v64 + 16LL * *v66 + 312;
    }
    else
    {
LABEL_25:
      v67 = sub_AF54C0(v58, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v63);
    }
    v68 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v58, *(_QWORD *)(v67 + 8));
    BattleBuffData__RemoveUpdateWaitIntervalBuff(this, v68, v69);
    if ( isIntervalOnly )
    {
      if ( !v68 )
        sub_B5D69C(v70, v71);
      intervalData = v68->fields.intervalData;
      if ( intervalData )
        BattleBuffData_IntervalData__Reset(intervalData, 0LL);
    }
    else
    {
      if ( !v68 )
        sub_B5D69C(v70, v71);
      BattleBuffData_BuffData__RevertUnused(v68, 1, 0LL);
    }
  }
  v73 = *(_QWORD *)v58;
  if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
  {
    v74 = 0LL;
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      ++v74;
      v75 += 4;
      if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
        goto LABEL_37;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_37:
    v76 = sub_AF54C0(v58, System_IDisposable_TypeInfo, 0LL, v63);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v76)(v58, *(_QWORD *)(v76 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__SetCommandAssistBuffActiveFlg(
        BattleBuffData_o *this,
        int64_t selectCommandAssistId,
        System_Action_BuffEntity__BattleBuffData_BuffData__o *setBuffAction,
        bool isRecharge,
        int32_t cardIndex,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleBuffData_BuffData_array *PassiveList; // x24
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x25
  unsigned int v25; // w27
  BattleBuffData_BuffData_o *v26; // x26
  const MethodInfo *v27; // x3
  __int64 commandAssistId; // x8
  const MethodInfo *v29; // x2
  __int64 v30; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EC185 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___,
      selectCommandAssistId,
      (_DWORD)setBuffAction,
      isRecharge);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42EC185 = 1;
  }
  entity = 0LL;
  PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)setBuffAction);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !PassiveList )
    goto LABEL_24;
  max_length = PassiveList->max_length;
  if ( max_length >= 1 )
  {
    v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        v30 = sub_B5D6C8(Instance);
        sub_B5D668(v30, 0LL);
      }
      v26 = PassiveList->m_Items[v25];
      if ( !v26 )
        break;
      if ( !v26->fields._isRemove )
      {
        Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v26, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          commandAssistId = v26->fields.commandAssistId;
          v26->fields.isActiveCA = 0;
          if ( commandAssistId == selectCommandAssistId && (cardIndex == -1 || v26->fields.cardIndex == cardIndex) )
          {
            Instance = (DataManager_o *)BattleBuffData__checkBuffSuccessful(this, v26, 1, v27);
            if ( ((unsigned __int8)Instance & 1) != 0 && v26->fields.reCharge <= 0 )
            {
              v26->fields.isActiveCA = 1;
              if ( isRecharge )
                BattleBuffData__RechargeCommandAssistBuff((BattleBuffData_o *)Instance, v26, v29);
              if ( !v24 )
                break;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            v24,
                                            &entity,
                                            v26->fields.buffId,
                                            (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                ActionExtensions__Call_object__object_(
                  (System_Action_T1__T2__o *)setBuffAction,
                  (Il2CppObject *)entity,
                  (Il2CppObject *)v26,
                  (const MethodInfo_2CECE48 *)Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
            }
          }
        }
      }
      max_length = PassiveList->max_length;
      if ( (int)++v25 >= max_length )
        return;
    }
LABEL_24:
    sub_B5D69C(Instance, v22);
  }
}


void __fastcall BattleBuffData__SetCommandCardBuffActive(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        bool isCheckBuffSuccess,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x22
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v25; // x4
  signed __int64 size; // x8
  unsigned __int64 v27; // x23
  bool v28; // w21

  if ( (byte_42EC199 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__,
      (_DWORD)commandData,
      isCheckBuffSuccess,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v16, v17, v18);
    byte_42EC199 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v20);
  if ( !v19 )
    sub_B5D69C(ActiveList, v22);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v23);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  LODWORD(size) = v19->fields._size;
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    v28 = isCheckBuffSuccess;
    do
    {
      if ( v27 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      BattleBuffData__CheckCommandCardBuffActive(
        this,
        commandData,
        (BattleBuffData_BuffData_o *)v19->fields._items->m_Items[v27],
        v28,
        v25);
      size = v19->fields._size;
      ++v27;
    }
    while ( (__int64)v27 < size );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__SetCommandCodeBuffActiveFlg(
        BattleBuffData_o *this,
        int64_t selectUserCCId,
        System_Action_BuffEntity__BattleBuffData_BuffData__o *setBuffAction,
        bool isRecharge,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleBuffData_BuffData_array *PassiveList; // x23
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x24
  unsigned int v23; // w26
  BattleBuffData_BuffData_o *v24; // x25
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  __int64 v27; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EC183 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___,
      selectUserCCId,
      (_DWORD)setBuffAction,
      isRecharge);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42EC183 = 1;
  }
  entity = 0LL;
  PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)setBuffAction);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !PassiveList )
    goto LABEL_22;
  max_length = PassiveList->max_length;
  if ( max_length >= 1 )
  {
    v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
      {
        v27 = sub_B5D6C8(Instance);
        sub_B5D668(v27, 0LL);
      }
      v24 = PassiveList->m_Items[v23];
      if ( !v24 )
        break;
      if ( !v24->fields._isRemove )
      {
        Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v24, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v24->fields.isActiveCC = 0;
          Instance = (DataManager_o *)BattleBuffData_BuffData__IsMineCommandCode(v24, selectUserCCId, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)BattleBuffData__checkBuffSuccessful(this, v24, 1, v25);
            if ( ((unsigned __int8)Instance & 1) != 0 && v24->fields.reCharge <= 0 )
            {
              v24->fields.isActiveCC = 1;
              if ( isRecharge )
                BattleBuffData__RechargeCommandCodeBuff((BattleBuffData_o *)Instance, v24, v26);
              if ( !v22 )
                break;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            v22,
                                            &entity,
                                            v24->fields.buffId,
                                            (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                ActionExtensions__Call_object__object_(
                  (System_Action_T1__T2__o *)setBuffAction,
                  (Il2CppObject *)entity,
                  (Il2CppObject *)v24,
                  (const MethodInfo_2CECE48 *)Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
            }
          }
        }
      }
      max_length = PassiveList->max_length;
      if ( (int)++v23 >= max_length )
        return;
    }
LABEL_22:
    sub_B5D69C(Instance, v20);
  }
}


void __fastcall BattleBuffData__SetNoActBuffWithoutExecuteServant(
        BattleBuffData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC19E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)servantArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12, v13, v14);
    byte_42EC19E = 1;
  }
  memset(&v18, 0, sizeof(v18));
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    sub_B5D69C(0LL, servantArray);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    if ( !v18.fields.current )
      sub_B5D69C(v16, v17);
    if ( SLODWORD(v18.fields.current[17].klass) >= 1 )
      BattleBuffData_BuffData__SetBuffNoActState((BattleBuffData_BuffData_o *)v18.fields.current, servantArray, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromCheckFunc(
        BattleBuffData_o *this,
        System_Func_BattleBuffData_BuffData__bool__o *checkFunc,
        bool isCreateDummy,
        const MethodInfo *method)
{
  _BOOL4 v4; // w25
  System_Func_BattleBuffData_BuffData__bool__o *v5; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  void *activeList; // x0
  char *v23; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  const MethodInfo_2C2ECE4 **v27; // x28
  unsigned __int64 v28; // x26
  char *v29; // x27
  BattleBuffData_BuffData_o *v30; // x24
  const MethodInfo *v31; // x2
  BattleBuffData_o *v32; // x8
  _BOOL4 v33; // w19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x25
  char *v35; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x27
  char *v37; // x23
  const MethodInfo_2C2ECE4 **v38; // x22
  BattleBuffData_o *v39; // x28
  BattleBuffData_o *v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  RemovedBuffInfo_o *v43; // x20
  __int64 v45; // x0
  System_Func_BattleBuffData_BuffData__bool__o *v46; // [xsp+8h] [xbp-58h]

  v4 = isCreateDummy;
  v5 = checkFunc;
  if ( (byte_42EC14B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__, (_DWORD)checkFunc, isCreateDummy, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v19, v20, v21);
    byte_42EC14B = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_20;
  activeList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !this->fields.activeList )
    goto LABEL_20;
  v23 = (char *)activeList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v23 )
    goto LABEL_20;
  v26 = *((_QWORD *)v23 + 3);
  if ( (int)v26 >= 1 )
  {
    v27 = (const MethodInfo_2C2ECE4 **)&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__;
    v28 = 0LL;
    v29 = v23 + 32;
    v46 = v5;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v26 )
      {
        v45 = sub_B5D6C8(activeList);
        sub_B5D668(v45, 0LL);
      }
      if ( !v5 )
        break;
      v30 = *(BattleBuffData_BuffData_o **)&v29[8 * v28];
      activeList = (void *)System_Func_BattleBuffData_BuffData__bool___Invoke(v5, v30, *v27);
      if ( ((unsigned __int8)activeList & 1) != 0 )
      {
        if ( !v24 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        if ( v4 )
        {
          v32 = this;
          v33 = v4;
          v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v32->fields.activeList;
          v35 = v29;
          v36 = v24;
          v37 = v23;
          v38 = v27;
          v39 = v32;
          activeList = BattleBuffData__CreateDummyBuff((BattleBuffData_o *)activeList, v30, v31);
          if ( !v34 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v34,
            (EventMissionProgressRequest_Argument_ProgressData_o *)activeList,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          v4 = v33;
          this = v39;
          v27 = v38;
          v23 = v37;
          v24 = v36;
          v29 = v35;
          v5 = v46;
        }
      }
      else
      {
        activeList = this->fields.activeList;
        if ( !activeList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v26) = *((_DWORD *)v23 + 6);
      if ( (__int64)++v28 >= (int)v26 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(activeList, checkFunc);
  }
LABEL_18:
  v40 = (BattleBuffData_o *)BattleBuffData__removeLinkageBuff(
                              this,
                              (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
                              v4,
                              v25);
  activeList = BattleBuffData__MakeRemoveBuffInfo(
                 v40,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v40,
                 v41);
  if ( !activeList )
    goto LABEL_20;
  v43 = (RemovedBuffInfo_o *)activeList;
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    *((System_Collections_Generic_List_BattleBuffData_BuffData__o **)activeList + 2),
    v42);
  return v43;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromDeadActorId(
        BattleBuffData_o *this,
        int32_t actorId,
        bool isCreateDummy,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  BattleBuffData___c__DisplayClass109_0_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x21
  const MethodInfo *v20; // x3

  if ( (byte_42EC14A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, actorId, isCreateDummy, method);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass109_0__SubBuffFromDeadActorId_b__0__, v10, v11, v12);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass109_0_TypeInfo, v13, v14, v15);
    byte_42EC14A = 1;
  }
  v16 = (BattleBuffData___c__DisplayClass109_0_o *)sub_B5D694(BattleBuffData___c__DisplayClass109_0_TypeInfo);
  BattleBuffData___c__DisplayClass109_0___ctor(v16, 0LL);
  if ( !v16 )
    sub_B5D69C(v17, v18);
  v16->fields.actorId = actorId;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v16,
    Method_BattleBuffData___c__DisplayClass109_0__SubBuffFromDeadActorId_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v19,
           isCreateDummy,
           v20);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromType(
        BattleBuffData_o *this,
        int32_t buffId,
        bool isCreateDummy,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  __int64 v16; // x22
  BuffMaster_o *buffMst; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x21
  const MethodInfo *v27; // x3

  if ( (byte_42EC149 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, buffId, isCreateDummy, method);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass108_0__SubBuffFromType_b__0__, v10, v11, v12);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass108_0_TypeInfo, v13, v14, v15);
    byte_42EC149 = 1;
  }
  v16 = sub_B5D694(BattleBuffData___c__DisplayClass108_0_TypeInfo);
  BattleBuffData___c__DisplayClass108_0___ctor((BattleBuffData___c__DisplayClass108_0_o *)v16, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v16 + 16),
          (System_Int32_array **)this,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (buffMst = BattleBuffData__get_buffMst(this, v25)) == 0LL) )
  {
    sub_B5D69C(buffMst, v18);
  }
  *(_DWORD *)(v16 + 24) = BuffMaster__GetBuffType(buffMst, buffId, -1, 0LL);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v16,
    Method_BattleBuffData___c__DisplayClass108_0__SubBuffFromType_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v26,
           isCreateDummy,
           v27);
}


void __fastcall BattleBuffData__UpdateBaseAddOrder(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleBuffData_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x20
  BattleBuffData___c_c *v27; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__214_0; // x21
  Il2CppObject *v30; // x22
  BattleServantConfConponent_o *p__9__214_0; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t v38; // w20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  BattleBuffData___c_c *v40; // x0
  struct BattleBuffData___c_StaticFields *v41; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__214_1; // x22
  Il2CppObject *v43; // x23
  BattleServantConfConponent_o *p__9__214_1; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int32_t v51; // w21

  v4 = this;
  if ( (byte_42EC191 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v11, v12, v13);
    sub_B5D5C4(&System_Math_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_BattleBuffData___c__UpdateBaseAddOrder_b__214_0__, v17, v18, v19);
    sub_B5D5C4(&Method_BattleBuffData___c__UpdateBaseAddOrder_b__214_1__, v20, v21, v22);
    this = (BattleBuffData_o *)sub_B5D5C4(&BattleBuffData___c_TypeInfo, v23, v24, v25);
    byte_42EC191 = 1;
  }
  activeList = v4->fields.activeList;
  if ( !activeList )
    goto LABEL_31;
  if ( activeList->fields._size < 1 )
  {
    v38 = 0;
  }
  else
  {
    v27 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v27 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__214_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__214_0;
    if ( !_9__214_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__214_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__214_0,
        v30,
        Method_BattleBuffData___c__UpdateBaseAddOrder_b__214_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      p__9__214_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__214_0;
      p__9__214_0->klass = (BattleServantConfConponent_c *)_9__214_0;
      sub_B5D560(p__9__214_0, (System_Int32_array **)_9__214_0, v32, v33, v34, v35, v36, v37);
    }
    this = (BattleBuffData_o *)System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)activeList,
                                 (System_Func_TSource__int__o *)_9__214_0,
                                 (const MethodInfo_1CAE860 *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
    v38 = (int)this;
  }
  passiveList = v4->fields.passiveList;
  if ( !passiveList )
LABEL_31:
    sub_B5D69C(this, method);
  if ( passiveList->fields._size < 1 )
  {
    v51 = 0;
  }
  else
  {
    v40 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v40 = BattleBuffData___c_TypeInfo;
    }
    v41 = v40->static_fields;
    _9__214_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v41->__9__214_1;
    if ( !_9__214_1 )
    {
      if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v41 = BattleBuffData___c_TypeInfo->static_fields;
      }
      v43 = (Il2CppObject *)v41->__9;
      _9__214_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__214_1,
        v43,
        Method_BattleBuffData___c__UpdateBaseAddOrder_b__214_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      p__9__214_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__214_1;
      p__9__214_1->klass = (BattleServantConfConponent_c *)_9__214_1;
      sub_B5D560(p__9__214_1, (System_Int32_array **)_9__214_1, v45, v46, v47, v48, v49, v50);
    }
    v51 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
            (System_Func_TSource__int__o *)_9__214_1,
            (const MethodInfo_1CAE860 *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4->fields.addBuffOrder = System_Math__Max_45149472(v38, v51, 0LL) + 1;
}


void __fastcall BattleBuffData__UpdateBuffAddOrder(
        BattleBuffData_o *this,
        int32_t addPassiveMaxOrder,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  BattleBuffData___c__DisplayClass213_0_o *v48; // x20
  __int64 v49; // x0
  __int64 v50; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  BattleBuffData___c_c *v52; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__213_0; // x22
  Il2CppObject *v55; // x23
  struct BattleBuffData___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_passiveList; // x25
  int32_t v65; // w22
  BattleBuffData___c_c *v66; // x0
  struct BattleBuffData___c_StaticFields *v67; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__213_1; // x23
  Il2CppObject *v69; // x24
  struct BattleBuffData___c_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int32_t v77; // w21
  int32_t v78; // w0
  struct BattleBuffData___c_StaticFields *v79; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__213_2; // x22
  Il2CppObject *v81; // x23
  BattleServantConfConponent_o *p__9__213_2; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v89; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v90; // x21
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v91; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v92; // x21

  if ( (byte_42EC190 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, addPassiveMaxOrder, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v21, v22, v23);
    sub_B5D5C4(&System_Math_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__213_0__, v27, v28, v29);
    sub_B5D5C4(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__213_1__, v30, v31, v32);
    sub_B5D5C4(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__213_2__, v33, v34, v35);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass213_0__UpdateBuffAddOrder_b__3__, v36, v37, v38);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass213_0__UpdateBuffAddOrder_b__4__, v39, v40, v41);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass213_0_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v45, v46, v47);
    byte_42EC190 = 1;
  }
  v48 = (BattleBuffData___c__DisplayClass213_0_o *)sub_B5D694(BattleBuffData___c__DisplayClass213_0_TypeInfo);
  BattleBuffData___c__DisplayClass213_0___ctor(v48, 0LL);
  if ( !v48 )
    goto LABEL_48;
  v48->fields.addPassiveMaxOrder = addPassiveMaxOrder;
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
    v65 = 0;
  }
  else
  {
    v52 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v52 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v52->static_fields;
    _9__213_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__213_0;
    if ( !_9__213_0 )
    {
      if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v55 = (Il2CppObject *)static_fields->__9;
      _9__213_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__213_0,
        v55,
        Method_BattleBuffData___c__UpdateBuffAddOrder_b__213_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v56 = BattleBuffData___c_TypeInfo->static_fields;
      v56->__9__213_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__213_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v56->__9__213_0,
        (System_Int32_array **)_9__213_0,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
    }
    v49 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)activeList,
            (System_Func_TSource__int__o *)_9__213_0,
            (const MethodInfo_1CAEF98 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    p_passiveList = &this->fields.passiveList;
    passiveList = this->fields.passiveList;
    if ( !passiveList )
      goto LABEL_48;
    v65 = v49;
  }
  if ( passiveList->fields._size >= 1 )
  {
    v66 = BattleBuffData___c_TypeInfo;
    if ( v65 <= 0 )
    {
      if ( (WORD1(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
        v66 = BattleBuffData___c_TypeInfo;
      }
      v79 = v66->static_fields;
      _9__213_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v79->__9__213_2;
      if ( !_9__213_2 )
      {
        if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v66);
          v79 = BattleBuffData___c_TypeInfo->static_fields;
        }
        v81 = (Il2CppObject *)v79->__9;
        _9__213_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__213_2,
          v81,
          Method_BattleBuffData___c__UpdateBuffAddOrder_b__213_2__,
          (const MethodInfo_2C2F87C *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
        p__9__213_2 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__213_2;
        p__9__213_2->klass = (BattleServantConfConponent_c *)_9__213_2;
        sub_B5D560(p__9__213_2, (System_Int32_array **)_9__213_2, v83, v84, v85, v86, v87, v88);
      }
      v78 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
              (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
              (System_Func_TSource__int__o *)_9__213_2,
              (const MethodInfo_1CAEF98 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    }
    else
    {
      if ( (WORD1(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
        v66 = BattleBuffData___c_TypeInfo;
      }
      v67 = v66->static_fields;
      _9__213_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v67->__9__213_1;
      if ( !_9__213_1 )
      {
        if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v66);
          v67 = BattleBuffData___c_TypeInfo->static_fields;
        }
        v69 = (Il2CppObject *)v67->__9;
        _9__213_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__213_1,
          v69,
          Method_BattleBuffData___c__UpdateBuffAddOrder_b__213_1__,
          (const MethodInfo_2C2F87C *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
        v70 = BattleBuffData___c_TypeInfo->static_fields;
        v70->__9__213_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__213_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v70->__9__213_1,
          (System_Int32_array **)_9__213_1,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76);
      }
      v77 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
              (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
              (System_Func_TSource__int__o *)_9__213_1,
              (const MethodInfo_1CAEF98 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v78 = System_Math__Min_45104456(v65, v77, 0LL);
    }
    v65 = v78;
  }
  if ( v65 <= v48->fields.addPassiveMaxOrder )
  {
    v89 = this->fields.activeList;
    v90 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v90,
      (Il2CppObject *)v48,
      Method_BattleBuffData___c__DisplayClass213_0__UpdateBuffAddOrder_b__3__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    if ( v89 )
    {
      System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
        (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v89,
        (System_Action_T__o *)v90,
        (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      v91 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)*p_passiveList;
      v92 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v92,
        (Il2CppObject *)v48,
        Method_BattleBuffData___c__DisplayClass213_0__UpdateBuffAddOrder_b__4__,
        (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      if ( v91 )
      {
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v91,
          (System_Action_T__o *)v92,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
        return;
      }
    }
LABEL_48:
    sub_B5D69C(v49, v50);
  }
}


void __fastcall BattleBuffData__UpdateForceAllBuffNoAct(
        BattleBuffData_o *this,
        int32_t showState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleBuffData___c__DisplayClass147_0_o *v18; // x21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  __int64 v20; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x20

  if ( (byte_42EC163 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, showState, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v9, v10, v11);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass147_0__UpdateForceAllBuffNoAct_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass147_0_TypeInfo, v15, v16, v17);
    byte_42EC163 = 1;
  }
  v18 = (BattleBuffData___c__DisplayClass147_0_o *)sub_B5D694(BattleBuffData___c__DisplayClass147_0_TypeInfo);
  BattleBuffData___c__DisplayClass147_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.showState = showState,
        v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v21,
          (Il2CppObject *)v18,
          Method_BattleBuffData___c__DisplayClass147_0__UpdateForceAllBuffNoAct_b__0__,
          (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__),
        (passiveList = this->fields.passiveList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v21,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.activeList) == 0LL) )
  {
    sub_B5D69C(passiveList, v20);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
    (System_Action_T__o *)v21,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


void __fastcall BattleBuffData__UpdateForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isAdd,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x19
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  __int64 v28; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v29; // x19
  bool v30; // w0
  BattleBuffData___c_c *v31; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__91_0; // x20
  Il2CppObject *v34; // x21
  struct BattleBuffData___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  v6 = this;
  if ( (byte_42EC13F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, (_DWORD)buff, isAdd, method);
    sub_B5D5C4(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v19, v20, v21);
    sub_B5D5C4(&Method_BattleBuffData___c__UpdateForceBuff_b__91_0__, v22, v23, v24);
    this = (BattleBuffData_o *)sub_B5D5C4(&BattleBuffData___c_TypeInfo, v25, v26, v27);
    byte_42EC13F = 1;
  }
  if ( !buff )
    goto LABEL_21;
  v28 = 32LL;
  if ( buff->fields.passive )
    v28 = 24LL;
  v29 = *(System_Collections_Generic_List_WarBoardManager_TaskList__o **)((char *)&v6->klass + v28);
  if ( !v29 )
LABEL_21:
    sub_B5D69C(this, buff);
  v30 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          v29,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
  if ( isAdd )
  {
    if ( !v30 )
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  else if ( v30 )
  {
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      v29,
      (WarBoardManager_TaskList_o *)buff,
      (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
  }
  v31 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v31 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__91_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__91_0;
  if ( !_9__91_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__91_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__91_0,
      v34,
      Method_BattleBuffData___c__UpdateForceBuff_b__91_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v35 = BattleBuffData___c_TypeInfo->static_fields;
    v35->__9__91_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__91_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v35->__9__91_0,
      (System_Int32_array **)_9__91_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v29,
    (System_Comparison_T__o *)_9__91_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
}


void __fastcall BattleBuffData__UpdateForceNoField(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleBuffData___c_c *v17; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__225_0; // x20
  Il2CppObject *v20; // x21
  BattleServantConfConponent_o *p__9__225_0; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_42EC197 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_BattleBuffData___c__UpdateForceNoField_b__225_0__, v11, v12, v13);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v14, v15, v16);
    byte_42EC197 = 1;
  }
  v17 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v17 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__225_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__225_0;
  if ( !_9__225_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__225_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__225_0,
      v20,
      Method_BattleBuffData___c__UpdateForceNoField_b__225_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    p__9__225_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__225_0;
    p__9__225_0->klass = (BattleServantConfConponent_c *)_9__225_0;
    sub_B5D560(p__9__225_0, (System_Int32_array **)_9__225_0, v22, v23, v24, v25, v26, v27);
  }
  activeList = this->fields.activeList;
  if ( !activeList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
          (System_Action_T__o *)_9__225_0,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = this->fields.passiveList) == 0LL) )
  {
    sub_B5D69C(activeList, method);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
    (System_Action_T__o *)_9__225_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x24
  __int64 v32; // x21
  const MethodInfo *v33; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  Il2CppObject *current; // x20
  BuffMaster_o *buffMst; // x0
  __int64 v40; // x1
  BuffEntity_o *Entity; // x0
  __int64 v42; // x1
  BuffEntity_o *v43; // x25
  __int64 DamageRelease; // x0
  __int64 v45; // x1
  System_Int32_array **DamageReleaseText; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  _BOOL8 v53; // x0
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EC13A & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_BuffData_TypeInfo, (_DWORD)svtData, funcIndex, method);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v28, v29, v30);
    byte_42EC13A = 1;
  }
  memset(&v59, 0, sizeof(v59));
  linkedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)linkedBuffList,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v32 = sub_B5D694(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v32, 0LL);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v33);
  if ( !v31 )
    sub_B5D69C(PassiveList, v35);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v31,
    PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v36);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v31,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v58,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v31,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v53 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v53 )
      break;
    current = v59.fields.current;
    if ( !v59.fields.current )
      sub_B5D69C(v53, v54);
    if ( !BYTE3(v59.fields.current[23].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v54);
      if ( !buffMst )
        sub_B5D69C(0LL, v40);
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                 (int32_t)current[1].klass,
                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v43 = Entity;
      if ( !Entity )
        sub_B5D69C(0LL, v42);
      if ( Entity->fields.type == 32 )
      {
        DamageRelease = BuffEntity__getDamageRelease(Entity, 0LL);
        if ( (int)DamageRelease >= 1 )
        {
          LODWORD(current[1].monitor) = 0;
          if ( !v32 )
            sub_B5D69C(DamageRelease, v45);
          *(_DWORD *)(v32 + 16) = funcIndex;
          if ( !svtData )
            sub_B5D69C(DamageRelease, v45);
          *(_DWORD *)(v32 + 40) = svtData->fields.uniqueId;
          DamageReleaseText = (System_Int32_array **)BuffEntity__getDamageReleaseText(v43, 0LL);
          *(_QWORD *)(v32 + 56) = DamageReleaseText;
          sub_B5D560((BattleServantConfConponent_o *)(v32 + 56), DamageReleaseText, v47, v48, v49, v50, v51, v52);
          *(_DWORD *)(v32 + 68) = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  BattleBuffData__RemoveProgressingBuffList(this, linkedBuffList, v55);
  return (BattleActionData_BuffData_o *)v32;
}


BattleActionData_o *__fastcall BattleBuffData__UseProgressingDoNotAct(
        BattleBuffData_o *this,
        BattleServantData_o *svtData,
        bool doTDamage,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x24
  BattleActionData_o *v35; // x21
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  _BOOL8 v41; // x0
  const MethodInfo *v42; // x1
  Il2CppObject *current; // x25
  BuffMaster_o *buffMst; // x0
  __int64 v45; // x1
  BuffEntity_o *Entity; // x0
  __int64 v47; // x1
  BuffEntity_o *v48; // x24
  __int64 DamageRelease; // x0
  __int64 v50; // x1
  __int64 v51; // x25
  __int64 v52; // x0
  __int64 v53; // x1
  System_Int32_array **DamageReleaseText; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EC139 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)svtData, doTDamage, method);
    sub_B5D5C4(&BattleActionData_BuffData_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v31, v32, v33);
    byte_42EC139 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  linkedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)linkedBuffList,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v35 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v35, 0LL);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v36);
  if ( !v34 )
    sub_B5D69C(PassiveList, v38);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
    PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v39);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v64,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v34,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v65 = v64;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v65,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v41 )
      break;
    current = v65.fields.current;
    if ( !v65.fields.current )
      sub_B5D69C(v41, v42);
    if ( !BYTE3(v65.fields.current[23].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v42);
      if ( !buffMst )
        sub_B5D69C(0LL, v45);
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                 (int32_t)current[1].klass,
                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v48 = Entity;
      if ( !Entity )
        sub_B5D69C(0LL, v47);
      if ( Entity->fields.type == 32 && BuffEntity__getDamageRelease(Entity, 0LL) >= 1 )
      {
        DamageRelease = BuffEntity__getDamageRelease(v48, 0LL);
        if ( (_DWORD)DamageRelease == 2 || !doTDamage )
        {
          LODWORD(current[1].monitor) = 0;
          if ( !svtData )
            sub_B5D69C(DamageRelease, v50);
          if ( !v35 )
            sub_B5D69C(DamageRelease, v50);
          v35->fields.targetId = svtData->fields.uniqueId;
          v51 = sub_B5D694(BattleActionData_BuffData_TypeInfo);
          BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v51, 0LL);
          if ( !v51 )
            sub_B5D69C(v52, v53);
          *(_DWORD *)(v51 + 40) = svtData->fields.uniqueId;
          DamageReleaseText = (System_Int32_array **)BuffEntity__getDamageReleaseText(v48, 0LL);
          *(_QWORD *)(v51 + 56) = DamageReleaseText;
          sub_B5D560((BattleServantConfConponent_o *)(v51 + 56), DamageReleaseText, v55, v56, v57, v58, v59, v60);
          *(_DWORD *)(v51 + 68) = 1;
          *(_BYTE *)(v51 + 82) = 1;
          *(_BYTE *)(v51 + 27) = 1;
          BattleActionData__setBuffData(v35, (BattleActionData_BuffData_o *)v51, 0LL, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v65,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  BattleBuffData__RemoveProgressingBuffList(this, linkedBuffList, v61);
  return v35;
}


void __fastcall BattleBuffData__UsedProgressing(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *checkList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  signed int max_length; // w8
  unsigned int v17; // w23
  BattleBuffData_BuffData_o *v18; // x22
  int32_t count; // w8
  bool v20; // vf
  int v21; // w8
  __int64 v22; // x0

  if ( (byte_42EC135 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
      (_DWORD)checkList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9, v10, v11);
    byte_42EC135 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checkList )
    goto LABEL_17;
  max_length = checkList->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v22 = sub_B5D6C8(v13);
        sub_B5D668(v22, 0LL);
      }
      v18 = checkList->m_Items[v17];
      if ( !v18 )
        break;
      if ( v18->fields.isDecide )
      {
        if ( v18->fields.isUse )
        {
          count = v18->fields.count;
          v20 = __OFSUB__(count, 1);
          v21 = count - 1;
          if ( v21 < 0 == v20 )
          {
            v18->fields.count = v21;
            v13 = BattleBuffData_BuffData__IslinkageTarget(v18, 0LL);
            if ( v13 )
            {
              if ( !v12 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v12,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
          }
        }
        v18->fields.isUse = 0;
        v18->fields.isDecide = 0;
      }
      max_length = checkList->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_B5D69C(v13, v14);
  }
LABEL_16:
  BattleBuffData__RemoveProgressingBuffList(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v12,
    v15);
}


void __fastcall BattleBuffData___AddForceBuff_b__89_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__UpdateForceBuff(this, buff, 1, v3);
}


void __fastcall BattleBuffData___DelForceBuff_b__90_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__UpdateForceBuff(this, buff, 0, v3);
}


bool __fastcall BattleBuffData___updateAuraBuffList_b__38_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *aura,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *conditionalAuraBuff; // x0

  if ( (byte_42EC1B1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
      (_DWORD)aura,
      (_DWORD)method,
      v3);
    byte_42EC1B1 = 1;
  }
  conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.conditionalAuraBuff;
  if ( !conditionalAuraBuff )
    goto LABEL_11;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          conditionalAuraBuff,
          (WarBoardManager_TaskList_o *)aura,
          (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
  {
    conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.activeList;
    if ( conditionalAuraBuff )
    {
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             conditionalAuraBuff,
             (WarBoardManager_TaskList_o *)aura,
             (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        return 0;
      }
      conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.passiveList;
      if ( conditionalAuraBuff )
        return !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  conditionalAuraBuff,
                  (WarBoardManager_TaskList_o *)aura,
                  (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    }
LABEL_11:
    sub_B5D69C(conditionalAuraBuff, aura);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *auraBuffList; // x0
  __int64 addBuffOrder; // x1
  const MethodInfo *v14; // x3

  if ( (byte_42EC13C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, (_DWORD)buff, fieldflg, unFix);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v9, v10, v11);
    byte_42EC13C = 1;
  }
  auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)BattleBuffData__checkConditions(this, buff, (const MethodInfo *)fieldflg);
  if ( ((unsigned __int8)auraBuffList & 1) != 0 )
  {
    if ( !buff )
      goto LABEL_22;
    BattleBuffData_BuffData__onState(buff, 32, 0LL);
  }
  if ( !fieldflg )
    auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)BattleBuffData__OnStateWithAuraConditionCheck(this, buff, 1, v14);
  if ( !buff )
LABEL_22:
    sub_B5D69C(auraBuffList, addBuffOrder);
  if ( buff->fields.auraEffectId )
  {
    auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.auraBuffList;
    if ( !auraBuffList )
      goto LABEL_22;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      auraBuffList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  if ( buff->fields.classIconAuraEffectId )
  {
    auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.classIconAuraEffectBuffList;
    if ( !auraBuffList )
      goto LABEL_22;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      auraBuffList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
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
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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

  if ( (byte_42EC161 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, now, max, servantIndv);
    byte_42EC161 = 1;
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
          sub_B5D69C(v18, v19);
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
  int32_t value; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42EC16D & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)selfIndiv, opIndiv);
    byte_42EC16D = 1;
  }
  value = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return BattleBuffData__confirmationBuff(this, ActInfo, selfIndiv, opIndiv, 0, &value, 0LL, 0LL, v11);
}


bool __fastcall BattleBuffData__checkActBuffDamageBuffIndiv(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        System_Int32_array *damageBuffIndiv,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v25; // x19
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  __int64 v31; // x19
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  BattleBuffData_BuffData_o *v40; // x0
  __int64 v41; // x1
  BattleBuffData_BuffData_o *v42; // x24
  BuffList_ActInfo_o *ActInfo; // x1
  const MethodInfo *v44; // x5
  bool v45; // w20
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  int v51; // [xsp+0h] [xbp-60h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42EC172 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)checkIndividualities, damageBuffIndiv);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    byte_42EC172 = 1;
  }
  plusMinus = 0;
  v21 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, (const MethodInfo *)checkIndividualities);
  if ( !v21 )
    sub_B5D69C(0LL, v22);
  klass = v21->klass;
  v25 = v21;
  if ( *(_WORD *)&v21->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v26;
      p_offset += 4;
      if ( v26 >= *(unsigned __int16 *)&v21->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v21, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v23);
  }
  v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v25,
          *(_QWORD *)(p_method + 8));
  if ( !v31 )
    sub_B5D69C(0LL, v29);
  while ( 1 )
  {
    v32 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_15;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_15:
      v35 = sub_AF54C0(v31, System_Collections_IEnumerator_TypeInfo, 0LL, v30);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v38 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_22;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_22:
      v39 = sub_AF54C0(v31, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v30);
    }
    v40 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
    v42 = v40;
    if ( !v40 )
      sub_B5D69C(0LL, v41);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v40, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v42,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v42, 0LL) || v42->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v42, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v42, 0LL)) )
    {
      if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
      if ( BattleBuffData__checkIndiviuality(this, ActInfo, v42, checkIndividualities, &plusMinus, v44)
        && Individuality__CheckIndividualities(damageBuffIndiv, v42->fields.hpReduceToRegainIndiv, 0LL)
        && BattleBuffData__checkBuffSuccessful(this, v42, 0, v30) )
      {
        v51 = 141;
        v45 = 1;
        goto LABEL_39;
      }
    }
  }
  v45 = 0;
  v51 = 139;
LABEL_39:
  v46 = *(_QWORD *)v31;
  if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
  {
    v47 = 0LL;
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
        goto LABEL_43;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_43:
    v49 = sub_AF54C0(v31, System_IDisposable_TypeInfo, 0LL, v30);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v31, *(_QWORD *)(v49 + 8));
  if ( v51 == 139 )
    return 0;
  return v45;
}


bool __fastcall BattleBuffData__checkActBuff_31685144(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v8; // x1
  const MethodInfo *v10; // [xsp+0h] [xbp-30h]
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EC16E & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)checkIndividualities, method);
    byte_42EC16E = 1;
  }
  value = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B5D69C(ActInfo, v8);
  return BattleBuffData__confirmationBuff(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           0,
           &value,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           v10);
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
    sub_B5D69C(this, bufflist);
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
      v13 = sub_B5D6C8(this);
      sub_B5D668(v13, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  WebViewManager_o *Instance; // x0
  __int64 v37; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x22
  int v40; // w19
  _BOOL8 v41; // x0
  __int64 v42; // x1
  BuffEntity_o *Entity; // x22
  int32_t type; // w23
  int32_t v45; // w23
  __int64 v46; // x1
  _BOOL8 v47; // x0
  __int64 v48; // x1
  Il2CppObject *current; // x23
  BuffEntity_o *v50; // x0
  __int64 v51; // x1
  int v52; // w23
  int v53; // w24
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v54; // [xsp+0h] [xbp-C0h]
  _BYTE v55[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v56; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+30h] [xbp-90h] BYREF
  int32_t pal; // [xsp+4Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42EC10C & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)buffList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    byte_42EC10C = 1;
  }
  v54 = buffList;
  memset(&v59, 0, sizeof(v59));
  pal = 0;
  memset(&v57, 0, sizeof(v57));
  v56 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___),
        v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v39,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__),
        !v39) )
  {
    sub_B5D69C(Instance, v37);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.passiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.activeList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v39,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v40 = 0;
  v59 = *(System_Collections_Generic_List_Enumerator_T__o *)v55;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v41 )
      break;
    if ( !v59.fields.current )
      sub_B5D69C(v41, v42);
    if ( !BYTE3(v59.fields.current[23].klass) )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(v41, v42);
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)v59.fields.current[1].klass,
                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( Entity )
      {
        pal = 0;
        type = Entity->fields.type;
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(81, type, 0LL) )
          goto LABEL_19;
        v45 = Entity->fields.type;
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(79, v45, 0LL) )
        {
LABEL_19:
          if ( BuffEntity__isCondition(Entity, 2, &pal, 0LL) )
          {
            if ( !v54 )
              sub_B5D69C(0LL, v46);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v55,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v54,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
            v57 = *(System_Collections_Generic_List_Enumerator_T__o *)v55;
            while ( 1 )
            {
              v47 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v57,
                      (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
              if ( !v47 )
                break;
              current = v57.fields.current;
              if ( !v57.fields.current )
                sub_B5D69C(v47, v48);
              if ( !BYTE3(v57.fields.current[23].klass) )
              {
                v50 = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int32_t)v57.fields.current[1].klass,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                if ( SLODWORD(current[8].monitor) >= 1 )
                {
                  if ( !v50 )
                    sub_B5D69C(0LL, v51);
                  if ( BuffEntity__checkBuffType(v50, 41, 0LL) && HIDWORD(current[1].monitor) == pal )
                  {
                    this->fields.resumptionHpFromLossMaxHp += LODWORD(current[8].monitor);
                    LODWORD(current[8].monitor) = 0;
                    break;
                  }
                }
              }
            }
            *(_DWORD *)&v55[4 * v40 + 24] = 259;
            v52 = ++v56;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v57,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
            v40 = 0;
            if ( v52 )
            {
              v40 = v52;
              if ( *(_DWORD *)&v55[4 * v52 + 20] == 259 )
              {
                v40 = v52 - 1;
                v56 = v52 - 1;
              }
            }
          }
        }
      }
    }
  }
  *(_DWORD *)&v55[4 * v40 + 24] = 287;
  v53 = ++v56;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v53 && *(_DWORD *)&v55[4 * v53 + 20] == 287 )
    v56 = v53 - 1;
}


bool __fastcall BattleBuffData__checkAuraBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleBuffData_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x20
  unsigned __int64 v12; // x21
  WarBoardManager_TaskList_o *v13; // x20

  v4 = this;
  if ( (byte_42EC11B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v5, v6, v7);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__,
                                 v8,
                                 v9,
                                 v10);
    byte_42EC11B = 1;
  }
  auraBuffList = v4->fields.auraBuffList;
  if ( !auraBuffList )
LABEL_13:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v12 >= auraBuffList->fields._size )
      return 0;
    if ( v12 >= (unsigned int)auraBuffList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (BattleBuffData_o *)v4->fields.activeList;
    if ( !this )
      goto LABEL_13;
    v13 = (WarBoardManager_TaskList_o *)auraBuffList->fields._items->m_Items[v12];
    this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                 v13,
                                 (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleBuffData_o *)v4->fields.passiveList;
      if ( !this )
        goto LABEL_13;
      this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                   v13,
                                   (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 1;
    }
    auraBuffList = v4->fields.auraBuffList;
    ++v12;
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
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 2, 0LL);
}


bool __fastcall BattleBuffData__checkBuffClear(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3

  v5 = this;
  if ( (byte_42EC137 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
      (_DWORD)buff,
      (_DWORD)method,
      v3);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
                                 v6,
                                 v7,
                                 v8);
    byte_42EC137 = 1;
  }
  if ( !buff )
    goto LABEL_14;
  if ( buff->fields._isRemove || buff->fields.count && !BattleBuffData_BuffData__IsCompletelyExpired(buff, 0LL) )
    return 0;
  if ( buff->fields.auraEffectId )
  {
    this = (BattleBuffData_o *)v5->fields.auraBuffList;
    if ( !this )
      goto LABEL_14;
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
           (WarBoardManager_TaskList_o *)buff,
           (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v5->fields.auraBuffList;
      if ( this )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        goto LABEL_13;
      }
LABEL_14:
      sub_B5D69C(this, buff);
    }
  }
LABEL_13:
  BattleBuffData__RemoveClassIconEffectBuff(v5, buff, method);
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
        sub_B5D69C(PassiveList, v9);
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
        v18 = sub_B5D6C8(PassiveList);
        sub_B5D668(v18, 0LL);
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
    sub_B5D69C(PassiveList, v11);
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
    v21 = sub_B5D6C8(PassiveList);
    sub_B5D668(v21, 0LL);
  }
  return 0;
}


bool __fastcall BattleBuffData__checkBuffSpecialAttack(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t v10; // w19

  v5 = this;
  if ( (byte_42EC125 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)buff, (_DWORD)method, v3);
    this = (BattleBuffData_o *)sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6, v7, v8);
    byte_42EC125 = 1;
  }
  if ( !buff )
    goto LABEL_12;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v5, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_B5D69C(this, buff);
  }
  v10 = *(&this->fields.resumptionHpFromLossMaxHp + 1);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return BuffList__isSpHit(v10, 0LL);
}


bool __fastcall BattleBuffData__checkBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isRec,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x21
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  bool isUse; // w0
  System_Collections_Generic_List_int__o **p_notUseCountWithNoDamageBuffTypes; // x22
  System_String_o *Value; // x0
  System_String_o *v59; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x23
  BattleBuffData___c_c *v61; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__119_0; // x24
  Il2CppObject *v64; // x25
  struct BattleBuffData___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_Int32_array **v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  BattleBuffData_o **p_buffMaster; // x23
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_List_int__o *v88; // x9
  BattleBuffData_o *v89; // x22
  _BOOL8 v90; // x0
  __int64 v91; // x1
  int32_t current; // w23
  int32_t v93; // w24
  int v94; // w22
  int32_t buffRate; // w8
  bool v96; // w2
  __int64 v97; // x0
  System_Collections_Generic_List_Enumerator_int__o v98; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v99; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_42EC151 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)buff, isRec, method);
    sub_B5D5C4(&char___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44, v45);
    sub_B5D5C4(&Method_BattleBuffData___c__checkBuffSuccessful_b__119_0__, v46, v47, v48);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v49, v50, v51);
    this = (BattleBuffData_o *)sub_B5D5C4(&StringLiteral_9438/*"NOT_REDUCE_COUNT_WITH_NO_DAMAGE_BUFF"*/, v52, v53, v54);
    byte_42EC151 = 1;
  }
  memset(&v99, 0, sizeof(v99));
  if ( !buff )
    goto LABEL_49;
  if ( buff->fields._isRemove )
    return 0;
  if ( v6->fields.isNoDamage )
  {
    p_notUseCountWithNoDamageBuffTypes = &v6->fields.notUseCountWithNoDamageBuffTypes;
    if ( !v6->fields.notUseCountWithNoDamageBuffTypes )
    {
      this = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_49;
      this = (BattleBuffData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( !this )
        goto LABEL_49;
      Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)this, (System_String_o *)StringLiteral_9438/*"NOT_REDUCE_COUNT_WITH_NO_DAMAGE_BUFF"*/, 0LL);
      if ( Value )
      {
        v59 = Value;
        this = (BattleBuffData_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_49;
        if ( !LODWORD(this->fields.passiveList) )
        {
          v97 = sub_B5D6C8(this);
          sub_B5D668(v97, 0LL);
        }
        LOWORD(this->fields.activeList) = 44;
        v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                     v59,
                                                                     (System_Char_array *)this,
                                                                     0LL);
        v61 = BattleBuffData___c_TypeInfo;
        if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
          v61 = BattleBuffData___c_TypeInfo;
        }
        static_fields = v61->static_fields;
        _9__119_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__119_0;
        if ( !_9__119_0 )
        {
          if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v61);
            static_fields = BattleBuffData___c_TypeInfo->static_fields;
          }
          v64 = (Il2CppObject *)static_fields->__9;
          _9__119_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__119_0,
            v64,
            Method_BattleBuffData___c__checkBuffSuccessful_b__119_0__,
            (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
          v65 = BattleBuffData___c_TypeInfo->static_fields;
          v65->__9__119_0 = (struct System_Func_string__int__o *)_9__119_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v65->__9__119_0,
            (System_Int32_array **)_9__119_0,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71);
        }
        v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                     v60,
                                                                     (System_Func_TSource__TResult__o *)_9__119_0,
                                                                     (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
        v73 = (System_Int32_array **)System_Linq_Enumerable__ToList_int_(
                                       v72,
                                       (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
        *p_notUseCountWithNoDamageBuffTypes = (System_Collections_Generic_List_int__o *)v73;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v6->fields.notUseCountWithNoDamageBuffTypes,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79);
      }
      if ( !*p_notUseCountWithNoDamageBuffTypes )
        goto LABEL_38;
    }
    p_buffMaster = (BattleBuffData_o **)&v6->fields.buffMaster;
    this = (BattleBuffData_o *)v6->fields.buffMaster;
    if ( this
      || (this = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0LL
      && (MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)this,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___),
          *p_buffMaster = (BattleBuffData_o *)MasterData_WarQuestSelectionMaster,
          sub_B5D560(
            (BattleServantConfConponent_o *)&v6->fields.buffMaster,
            MasterData_WarQuestSelectionMaster,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87),
          (this = *p_buffMaster) != 0LL) )
    {
      this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                   buff->fields.buffId,
                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v88 = *p_notUseCountWithNoDamageBuffTypes;
      if ( *p_notUseCountWithNoDamageBuffTypes )
      {
        v89 = this;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v98,
          v88,
          (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v99 = v98;
        while ( 1 )
        {
          v90 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v99,
                  (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
          if ( !v90 )
            break;
          if ( !v89 )
            sub_B5D69C(v90, v91);
          current = v99.fields.current;
          v93 = *(&v89->fields.resumptionHpFromLossMaxHp + 1);
          if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          if ( BuffList__CheckType(current, v93, 0LL) )
          {
            v94 = 392;
            goto LABEL_37;
          }
        }
        v94 = 234;
LABEL_37:
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v99,
          (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v94 == 392 )
          return 0;
        goto LABEL_38;
      }
    }
LABEL_49:
    sub_B5D69C(this, buff);
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
  v96 = buffRate == 1000 || !buffRate || buff->fields.buffRate >= BattleRandom__getNext(1000, 0LL);
  isUse = BattleBuffData_BuffData__FixedUse(buff, v6, v96, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int CkIndvCountAbove; // w21
  int CkIndvCountBelow; // w22
  bool result; // w0
  System_Func_T1__T2__TResult__o *v34; // x20
  System_Func_T1__T2__TResult__o *v35; // x21
  System_Func_T1__T2__TResult__o *v36; // x24
  System_Func_T1__T2__TResult__o *v37; // x25
  System_Func_T1__T2__T3__T4__TResult__o *v38; // x0
  __int64 *v39; // x25
  System_Func_T1__T2__TResult__o *v40; // x24
  System_Func_T1__T2__TResult__o *v41; // x25
  System_Func_int____int____int__int__bool__o *v42; // x23
  System_Func_T1__T2__T3__T4__TResult__o *v43; // x24

  if ( (byte_42EC17F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_int____int____bool___ctor__, (_DWORD)self, (_DWORD)target, buffEnt);
    sub_B5D5C4(&System_Func_int____int____bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_int____int____int__int__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_int____int____int__int__bool__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_Individuality_IsMatchArrayCount__, v19, v20, v21);
    sub_B5D5C4(&Method_Individuality_IsMatchArray__, v22, v23, v24);
    sub_B5D5C4(&Method_Individuality_IsPartialMatchArrayCount__, v25, v26, v27);
    this = (BattleBuffData_o *)sub_B5D5C4(&Method_Individuality_IsPartialMatchArray__, v28, v29, v30);
    byte_42EC17F = 1;
  }
  if ( !buffEnt )
    sub_B5D69C(this, self);
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
          || (v40 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo),
              System_Func_object__object__bool____ctor(
                v40,
                0LL,
                Method_Individuality_IsPartialMatchArray__,
                (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__),
              v41 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo),
              System_Func_object__object__bool____ctor(
                v41,
                0LL,
                Method_Individuality_IsPartialMatchArray__,
                (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__),
              !Individuality__CheckSignedIndividualities_28468572(
                 self,
                 target,
                 (System_Func_int____int____bool__o *)v40,
                 (System_Func_int____int____bool__o *)v41,
                 0LL)) )
        {
          v38 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B5D694(System_Func_int____int____int__int__bool__TypeInfo);
          v39 = &Method_Individuality_IsPartialMatchArrayCount__;
          goto LABEL_22;
        }
LABEL_26:
        result = 1;
      }
      else
      {
        v34 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
        System_Func_object__object__bool____ctor(
          v34,
          0LL,
          Method_Individuality_IsPartialMatchArray__,
          (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
        v35 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
        System_Func_object__object__bool____ctor(
          v35,
          0LL,
          Method_Individuality_IsPartialMatchArray__,
          (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
        result = Individuality__CheckSignedIndividualities_28468572(
                   self,
                   target,
                   (System_Func_int____int____bool__o *)v34,
                   (System_Func_int____int____bool__o *)v35,
                   0LL);
      }
      break;
    case 3:
      v36 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v36,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
      v37 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v37,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
      if ( !Individuality__CheckSignedIndividualities_28468572(
              self,
              target,
              (System_Func_int____int____bool__o *)v36,
              (System_Func_int____int____bool__o *)v37,
              0LL) )
        goto LABEL_17;
      v38 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B5D694(System_Func_int____int____int__int__bool__TypeInfo);
      v39 = &Method_Individuality_IsMatchArrayCount__;
LABEL_22:
      v42 = (System_Func_int____int____int__int__bool__o *)v38;
      System_Func_object__object__int__int__bool____ctor(
        v38,
        0LL,
        *v39,
        (const MethodInfo_2C3E040 *)Method_System_Func_int____int____int__int__bool___ctor__);
      v43 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B5D694(System_Func_int____int____int__int__bool__TypeInfo);
      System_Func_object__object__int__int__bool____ctor(
        v43,
        0LL,
        *v39,
        (const MethodInfo_2C3E040 *)Method_System_Func_int____int____int__int__bool___ctor__);
      result = Individuality__CheckSignedIndividualitiesCount(
                 self,
                 targetCount,
                 v42,
                 (System_Func_int____int____int__int__bool__o *)v43,
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
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20

  v5 = this;
  if ( (byte_42EC15D & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__,
                                 (_DWORD)buff,
                                 (_DWORD)method,
                                 v3);
    byte_42EC15D = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v5, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B5D69C(this, buff);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  BattleBuffData___c_c *v36; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_int__int__bool__bool__o *_9__95_0; // x22
  Il2CppObject *v39; // x24
  struct BattleBuffData___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  char v47; // w24
  Il2CppObject *current; // x23
  void *monitor; // x27
  System_Collections_Generic_List_BattleServantData__o *TargetSideSvtDataList; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x3
  System_Int32_array *v53; // x1
  __int64 v54; // x1
  __int64 size; // x1
  const MethodInfo *v56; // x3
  bool v57; // w0
  _BOOL8 v58; // x0
  __int64 v59; // x1
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EC142 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)aliveSvtData,
      (_DWORD)checkList,
      logic);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_int__int__bool__bool__Invoke__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_int__int__bool__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_int__int__bool__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_BattleBuffData___c__checkFieldAlive_b__95_0__, v30, v31, v32);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v33, v34, v35);
    byte_42EC142 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v36 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v36 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__95_0 = static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_int__int__bool__bool__o *)sub_B5D694(System_Func_int__int__bool__bool__TypeInfo);
    System_Func_int__int__bool__bool____ctor(
      _9__95_0,
      v39,
      Method_BattleBuffData___c__checkFieldAlive_b__95_0__,
      (const MethodInfo_2C3AF90 *)Method_System_Func_int__int__bool__bool___ctor__);
    v40 = BattleBuffData___c_TypeInfo->static_fields;
    v40->__9__95_0 = _9__95_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v40->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !checkList )
    goto LABEL_34;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)checkList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v61 = v60;
  v47 = 0;
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v58 )
      break;
    current = v61.fields.current;
    if ( !v61.fields.current )
      sub_B5D69C(v58, v59);
    monitor = v61.fields.current[9].monitor;
    if ( monitor )
    {
      if ( !aliveSvtData )
        sub_B5D69C(v58, v59);
      TargetSideSvtDataList = FieldAliveServantData__getTargetSideSvtDataList(
                                aliveSvtData,
                                *((_BYTE *)monitor + 16),
                                0LL);
      if ( !TargetSideSvtDataList )
        sub_B5D69C(0LL, v51);
      v53 = (System_Int32_array *)*((_QWORD *)monitor + 3);
      if ( v53 )
      {
        TargetSideSvtDataList = (System_Collections_Generic_List_BattleServantData__o *)BattleBuffData__CheckIndivSvtDataList(
                                                                                          TargetSideSvtDataList,
                                                                                          v53,
                                                                                          *((_BYTE *)monitor + 32),
                                                                                          v52);
        if ( !TargetSideSvtDataList )
          sub_B5D69C(0LL, v54);
      }
      size = (unsigned int)TargetSideSvtDataList->fields._size;
      if ( !_9__95_0 )
        sub_B5D69C(TargetSideSvtDataList, size);
      if ( System_Func_int__int__bool__bool___Invoke(
             _9__95_0,
             size,
             *((_DWORD *)monitor + 5),
             *((_BYTE *)monitor + 17),
             (const MethodInfo_2C3AFA4 *)Method_System_Func_int__int__bool__bool__Invoke__) )
      {
        v57 = BattleBuffData__OffStateWithAuraConditionCheck(this, (BattleBuffData_BuffData_o *)current, 0x4000, v56);
      }
      else
      {
        v57 = BattleBuffData__OnStateWithAuraConditionCheck(this, (BattleBuffData_BuffData_o *)current, 0x4000, v56);
      }
      v47 |= v57;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v47 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      return;
    }
LABEL_34:
    sub_B5D69C(v36, aliveSvtData);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  char v31; // w24
  int monitor_high; // w9
  signed int max_length; // w10
  unsigned int v34; // w11
  bool v35; // w0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x3
  int v39; // w9
  signed int v40; // w10
  unsigned int v41; // w11
  bool v42; // w0
  _BOOL8 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x3
  int v46; // w22
  const MethodInfo *v47; // x4
  const MethodInfo *v48; // x4
  __int64 v49; // x0
  __int64 v50; // x0
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-88h] BYREF
  int v52[2]; // [xsp+20h] [xbp-70h]
  int v53; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_42EC141 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)idList,
      (_DWORD)aliveSvtData,
      onList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v20, v21, v22);
    byte_42EC141 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v53 = 0;
  *onList = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)onList,
    0LL,
    (System_String_array **)aliveSvtData,
    (System_String_array **)onList,
    (System_Boolean_array **)offList,
    (System_Int32_array **)logic,
    (System_Int32_array *)method,
    v7);
  *offList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)offList, 0LL, v23, v24, v25, v26, v27, v28);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v31 = 0;
  v54 = v51;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v36 )
      break;
    if ( !v54.fields.current )
      sub_B5D69C(v36, v37);
    monitor_high = HIDWORD(v54.fields.current[3].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !idList )
        sub_B5D69C(v36, v37);
      max_length = idList->max_length;
      if ( max_length < 1 )
      {
LABEL_13:
        v35 = BattleBuffData__OnStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v54.fields.current,
                1,
                v38);
      }
      else
      {
        v34 = 0;
        while ( 1 )
        {
          if ( v34 >= max_length )
          {
            v49 = sub_B5D6C8(v36);
            sub_B5D668(v49, 0LL);
          }
          if ( monitor_high == idList->m_Items[v34 + 1] )
            break;
          if ( (int)++v34 >= max_length )
            goto LABEL_13;
        }
        v35 = BattleBuffData__OffStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v54.fields.current,
                1,
                v38);
      }
      v31 |= v35;
    }
  }
  v52[0] = 137;
  v53 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v53 = 0;
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v54 = v51;
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v43 )
      break;
    if ( !v54.fields.current )
      sub_B5D69C(v43, v44);
    v39 = HIDWORD(v54.fields.current[3].monitor);
    if ( v39 >= 1 )
    {
      if ( !idList )
        sub_B5D69C(v43, v44);
      v40 = idList->max_length;
      if ( v40 < 1 )
      {
LABEL_27:
        v42 = BattleBuffData__OnStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v54.fields.current,
                1,
                v45);
      }
      else
      {
        v41 = 0;
        while ( 1 )
        {
          if ( v41 >= v40 )
          {
            v50 = sub_B5D6C8(v43);
            sub_B5D668(v50, 0LL);
          }
          if ( v39 == idList->m_Items[v41 + 1] )
            break;
          if ( (int)++v41 >= v40 )
            goto LABEL_27;
        }
        v42 = BattleBuffData__OffStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v54.fields.current,
                1,
                v45);
      }
      v31 |= v42;
    }
  }
  v52[0] = 273;
  v46 = ++v53;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v46 && v52[v46 - 1] == 273 )
    v53 = v46 - 1;
  if ( (v31 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      goto LABEL_37;
    }
LABEL_42:
    sub_B5D69C(passiveList, v29);
  }
LABEL_37:
  BattleBuffData__checkFieldAlive(this, aliveSvtData, this->fields.passiveList, logic, v47);
  BattleBuffData__checkFieldAlive(this, aliveSvtData, this->fields.activeList, logic, v48);
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
    sub_B5D69C(this, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)buff,
    0LL,
    *(System_String_array ***)&actionType,
    (System_String_array **)checkIndividualitiesDataArray,
    (System_Boolean_array **)buff,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !bufflist )
    sub_B5D69C(v13, v14);
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
      v25 = sub_B5D6C8(v17);
      sub_B5D668(v25, 0LL);
    }
    v24 = bufflist->m_Items[v18];
    *buff = v24;
    sub_B5D560(
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
    sub_B5D69C(this, actInfo);
  return BattleBuffData__checkIndiviuality_31681276(
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


bool __fastcall BattleBuffData__checkIndiviuality_31681276(
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
  System_Int32_array *v13; // x22
  BattleBuffData_o *v16; // x20
  WarEntity_o *Entity; // x0
  const MethodInfo *v19; // x4
  BuffEntity_o *v20; // x23
  System_Int32_array *ckSelfIndv; // x24
  BattleBuffData_o *CkSelfCountIndividuality; // x0
  const MethodInfo *v23; // x5
  struct BuffList_BaseInvokeCond_o *OpponentInvokeCond_k__BackingField; // x22
  struct System_Int32_array *ckOpIndv; // x21

  v13 = selfIndv;
  v16 = this;
  if ( (byte_42EC17E & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__,
                                 (_DWORD)actInfo,
                                 (_DWORD)buffData,
                                 selfIndv);
    byte_42EC17E = 1;
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
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
      v13 = selfIndvAll;
    if ( opIndvAll )
      opIndv = opIndvAll;
  }
  ckSelfIndv = v20->fields.ckSelfIndv;
  CkSelfCountIndividuality = (BattleBuffData_o *)BuffEntity__GetCkSelfCountIndividuality(v20, 0LL);
  this = (BattleBuffData_o *)BattleBuffData__checkBuffTypeIndiviuality(
                               CkSelfCountIndividuality,
                               v13,
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
    sub_B5D69C(this, actInfo);
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
  if ( (byte_42EC182 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__,
                                 (_DWORD)buff,
                                 (_DWORD)list,
                                 method);
    byte_42EC182 = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v6, (const MethodInfo *)buff);
  if ( !this )
LABEL_9:
    sub_B5D69C(this, buff);
  if ( !DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          buff->fields.buffId,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__) )
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

  if ( (byte_42EC180 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)actInfo, inType, plusMinus);
    byte_42EC180 = 1;
  }
  *plusMinus = 0;
  if ( !actInfo )
    sub_B5D69C(this, actInfo);
  plusTypes = actInfo->fields.plusTypes;
  if ( plusTypes && (v9 = *(_QWORD *)&plusTypes->max_length, (int)v9 >= 1) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
LABEL_25:
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_42EC126 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, (_DWORD)method, v2, v3);
    byte_42EC126 = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)activeList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
}


void __fastcall BattleBuffData__clearAuraBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x0

  if ( (byte_42EC127 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, (_DWORD)method, v2, v3);
    byte_42EC127 = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  if ( !auraBuffList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)auraBuffList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v30; // x19
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  __int64 v36; // x19
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  BattleBuffData_BuffData_o *v45; // x0
  __int64 v46; // x1
  BattleBuffData_BuffData_o *v47; // x28
  bool v48; // w20
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  const MethodInfo *v54; // [xsp+0h] [xbp-80h]
  bool isRec; // [xsp+1Ch] [xbp-64h]
  int v56; // [xsp+20h] [xbp-60h]
  int32_t plusMinus[2]; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42EC171 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)actInfo, (_DWORD)selfIndv, opIndv);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v23, v24, v25);
    byte_42EC171 = 1;
  }
  plusMinus[1] = 0;
  *value = 0;
  v26 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, (const MethodInfo *)selfIndv);
  if ( !v26 )
    sub_B5D69C(0LL, v27);
  klass = v26->klass;
  v30 = v26;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v31;
      p_offset += 4;
      if ( v31 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v26, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v28);
  }
  v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v30,
          *(_QWORD *)(p_method + 8));
  if ( !v36 )
    sub_B5D69C(0LL, v34);
  isRec = isRect;
  while ( 1 )
  {
    v37 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_16;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_16:
      v40 = sub_AF54C0(v36, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v43 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_23;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_23:
      v44 = sub_AF54C0(v36, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v35);
    }
    v45 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45 )
      sub_B5D69C(0LL, v46);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v45, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v47,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v47, 0LL) || v47->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v47, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v47, 0LL))
      && BattleBuffData__checkIndiviuality_31681276(
           this,
           actInfo,
           v47,
           selfIndv,
           opIndv,
           selfIndvAll,
           opIndvAll,
           &plusMinus[1],
           v54)
      && BattleBuffData__checkBuffSuccessful(this, v47, isRec, v35) )
    {
      *value = v47->fields.param;
      v56 = 140;
      v48 = 1;
      goto LABEL_36;
    }
  }
  v48 = 0;
  v56 = 138;
LABEL_36:
  v49 = *(_QWORD *)v36;
  if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
  {
    v50 = 0LL;
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
        goto LABEL_40;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_40:
    v52 = sub_AF54C0(v36, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v36, *(_QWORD *)(v52 + 8));
  if ( v56 == 138 )
    return 0;
  return v48;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__geCheckBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  unsigned __int64 v20; // x23
  BattleBuffData_BuffData_o *v21; // x22
  __int64 v23; // x0

  if ( (byte_42EC134 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
      (_DWORD)bufflist,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12, v13, v14);
    byte_42EC134 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !bufflist )
    goto LABEL_14;
  v19 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v19 )
      {
        v23 = sub_B5D6C8(v16);
        sub_B5D668(v23, 0LL);
      }
      v21 = bufflist->m_Items[v20];
      v16 = BattleBuffData__checkBuffSuccessful(this, v21, 1, v18);
      if ( v16 )
      {
        if ( !v15 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v19) = bufflist->max_length;
      ++v20;
    }
    while ( (__int64)v20 < (int)v19 );
  }
  if ( !v15 )
LABEL_14:
    sub_B5D69C(v16, v17);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  const MethodInfo *v12; // [xsp+0h] [xbp-40h]

  if ( (byte_42EC16F & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)checkIndividualities, value);
    byte_42EC16F = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B5D69C(ActInfo, v10);
  return BattleBuffData__confirmationBuff(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           1,
           value,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           v12);
}


float __fastcall BattleBuffData__getActMag(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x7

  return BattleBuffData__getActMag_31680976(
           this,
           act,
           selfIndiv,
           this->fields.wkzero,
           &this->fields.wkStr,
           checkIndividualities,
           0LL,
           v5);
}


float __fastcall BattleBuffData__getActMag_31680960(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  return BattleBuffData__getActMag_31680976(
           this,
           act,
           selfIndiv,
           opIndiv,
           &this->fields.wkStr,
           checkIndividualities,
           buffIf,
           v7);
}


float __fastcall BattleBuffData__getActMag_31680976(
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

  if ( (byte_42EC16A & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)selfIndiv, opIndiv);
    byte_42EC16A = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return (float)BattleBuffData__getActValue_31679824(
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


float __fastcall BattleBuffData__getActMag_31681180(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7

  if ( !checkIndividualities )
    sub_B5D69C(this, actInfo);
  return (float)BattleBuffData__getActValue_31679824(
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


float __fastcall BattleBuffData__getActMag_31681240(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7

  if ( !checkIndividualities )
    sub_B5D69C(this, act);
  return BattleBuffData__getActMag_31680976(
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v17; // x1
  BuffList_ActInfo_o *v18; // x19
  int32_t v19; // w20
  int32_t v20; // w21
  int32_t v21; // w20
  const MethodInfo *v23; // [xsp+18h] [xbp-48h]
  int32_t upperParam[2]; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42EC164 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)actflg, missText);
    sub_B5D5C4(&System_Math_TypeInfo, v13, v14, v15);
    byte_42EC164 = 1;
  }
  *(_QWORD *)upperParam = 0LL;
  *actflg = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities
    || (v18 = ActInfo,
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
                                          v23),
        !v18) )
  {
    sub_B5D69C(ActInfo, v17);
  }
  v19 = (int)ActInfo;
  if ( BuffList_ActInfo__isLowerLimit(v18, 0LL) )
  {
    v20 = upperParam[0];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v19 = System_Math__Max_45149472(v20, v19, 0LL);
  }
  v21 = v19 - v18->fields.baseValue;
  if ( BuffList_ActInfo__isUpperLimit(v18, 0LL) && upperParam[1] < v21 )
    return upperParam[1];
  return v21;
}


int32_t __fastcall BattleBuffData__getActValue_31679628(
        BattleBuffData_o *this,
        int32_t act,
        bool *actflg,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return BattleBuffData__getActValue(this, act, actflg, &this->fields.wkStr, checkIndividualities, 0LL, v5);
}


int32_t __fastcall BattleBuffData__getActValue_31679644(
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

  if ( (byte_42EC165 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)selfIndiv, opIndiv);
    byte_42EC165 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return BattleBuffData__getActValue_31679824(
           this,
           ActInfo,
           selfIndiv,
           opIndiv,
           &this->fields.wkStr,
           checkIndividualities,
           selfIf,
           v14);
}


int32_t __fastcall BattleBuffData__getActValue_31679824(
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

  if ( (byte_42EC167 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)actInfo, (_DWORD)selfIndiv, opIndiv);
    byte_42EC167 = 1;
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
    sub_B5D69C(CalculationParam, v16);
  v17 = CalculationParam;
  if ( BuffList_ActInfo__isLowerLimit(actInfo, 0LL) )
  {
    v18 = upperParam[0];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = System_Math__Max_45149472(v18, v17, 0LL);
  }
  v19 = v17 - actInfo->fields.baseValue;
  if ( BuffList_ActInfo__isUpperLimit(actInfo, 0LL) && upperParam[1] < v19 )
    return upperParam[1];
  return v19;
}


int32_t __fastcall BattleBuffData__getActValue_31680116(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return BattleBuffData__getActValue_31679644(this, act, selfIndiv, this->fields.wkzero, checkIndividualities, 0LL, v5);
}


int32_t __fastcall BattleBuffData__getActValue_31680132(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  if ( !checkIndividualities )
    sub_B5D69C(this, act);
  return BattleBuffData__getActValue_31679644(
           this,
           act,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           checkIndividualities,
           0LL,
           v4);
}


int32_t __fastcall BattleBuffData__getActValue_31680168(
        BattleBuffData_o *this,
        int32_t act,
        System_String_o **text,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x7

  if ( (byte_42EC166 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)text, checkIndividualities);
    byte_42EC166 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B5D69C(ActInfo, v10);
  return BattleBuffData__getActValue_31679824(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  __int64 v27; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x20
  _BOOL8 v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC117 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v23, v24, v25);
    byte_42EC117 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)activeList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v29 )
      break;
    current = v35.fields.current;
    if ( !v35.fields.current )
      sub_B5D69C(v29, v30);
    v32 = BattleBuffData_BuffData__checkAct((BattleBuffData_BuffData_o *)v35.fields.current, 1, 0LL);
    if ( !v32 && LOBYTE(current[2].klass) )
    {
      if ( !v26 )
        sub_B5D69C(v32, v33);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v26,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v26 )
LABEL_15:
    sub_B5D69C(activeList, v27);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
    sub_B5D69C(ActiveList, v5);
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
    v14 = sub_B5D6C8(ActiveList);
    sub_B5D668(v14, 0LL);
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
        v12 = sub_B5D6C8(ActiveList);
        sub_B5D668(v12, 0LL);
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
    sub_B5D69C(ActiveList, v5);
  }
  return 0;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BattleBuffData___c__DisplayClass31_0_o *v21; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x20

  if ( (byte_42EC115 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__,
      isCheckInterval,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass31_0__getActiveList_b__0__, v15, v16, v17);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass31_0_TypeInfo, v18, v19, v20);
    byte_42EC115 = 1;
  }
  v21 = (BattleBuffData___c__DisplayClass31_0_o *)sub_B5D694(BattleBuffData___c__DisplayClass31_0_TypeInfo);
  BattleBuffData___c__DisplayClass31_0___ctor(v21, 0LL);
  if ( !v21
    || (v21->fields.isCheckInterval = isCheckInterval,
        activeList = this->fields.activeList,
        v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v25,
          (Il2CppObject *)v21,
          Method_BattleBuffData___c__DisplayClass31_0__getActiveList_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !activeList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                (System_Predicate_T__o *)v25,
                (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
    sub_B5D69C(All, v23);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveListDebug(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_42EC119 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, (_DWORD)method, v2, v3);
    byte_42EC119 = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    sub_B5D69C(0LL, method);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  int32_t v11; // w19
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  BuffList_ActInfo_o *ActInfo; // x23
  __int64 CalculationParam; // x0
  __int64 v18; // x1
  int32_t v19; // w20
  const MethodInfo *v21; // [xsp+18h] [xbp-58h]
  System_String_o *missText; // [xsp+28h] [xbp-48h] BYREF
  int32_t val1; // [xsp+38h] [xbp-38h] BYREF
  int32_t upperParam; // [xsp+3Ch] [xbp-34h] BYREF

  v11 = value;
  if ( (byte_42EC168 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, value, act, selfIndiv);
    sub_B5D5C4(&System_Math_TypeInfo, v13, v14, v15);
    byte_42EC168 = 1;
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
                       v21);
  if ( !ActInfo )
    sub_B5D69C(CalculationParam, v18);
  if ( BuffList_ActInfo__isLowerLimit(ActInfo, 0LL) )
  {
    v19 = val1;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v11 = System_Math__Max_45149472(v19, v11, 0LL);
  }
  if ( BuffList_ActInfo__isUpperLimit(ActInfo, 0LL) && upperParam < v11 )
    return upperParam;
  return v11;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__getAuraBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x19
  BattleBuffData___c_c *v18; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__36_0; // x20
  Il2CppObject *v21; // x21
  struct BattleBuffData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EC11A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleBuffData___c__getAuraBuffList_b__36_0__, v11, v12, v13);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v14, v15, v16);
    byte_42EC11A = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  v18 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v18 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__36_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__36_0,
      v21,
      Method_BattleBuffData___c__getAuraBuffList_b__36_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v22 = BattleBuffData___c_TypeInfo->static_fields;
    v22->__9__36_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__36_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !auraBuffList )
    sub_B5D69C(v18, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)auraBuffList,
                                                                         (System_Predicate_T__o *)_9__36_0,
                                                                         (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


System_Int32_array *__fastcall BattleBuffData__getBuffActiveIDList(
        BattleBuffData_o *this,
        bool IsIncludeUnsubState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_int__o *v27; // x19
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  void *ActiveList; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__105_0; // x21
  Il2CppObject *v33; // x22
  struct BattleBuffData___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  void *v41; // x20
  int v42; // w8
  unsigned int v43; // w21
  __int64 v44; // x8
  __int64 v46; // x0

  if ( (byte_42EC147 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, IsIncludeUnsubState, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BattleBuffData___c__getBuffActiveIDList_b__105_0__, v21, v22, v23);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v24, v25, v26);
    byte_42EC147 = 1;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( IsIncludeUnsubState )
  {
    ActiveList = BattleBuffData__getActiveList(this, 1, v29);
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
    _9__105_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__105_0;
    if ( !_9__105_0 )
    {
      if ( (*((_BYTE *)ActiveList + 307) & 4) != 0 && !*((_DWORD *)ActiveList + 56) )
      {
        j_il2cpp_runtime_class_init_0(ActiveList);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)static_fields->__9;
      _9__105_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__105_0,
        v33,
        Method_BattleBuffData___c__getBuffActiveIDList_b__105_0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v34 = BattleBuffData___c_TypeInfo->static_fields;
      v34->__9__105_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__105_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v34->__9__105_0,
        (System_Int32_array **)_9__105_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    if ( !this )
      goto LABEL_24;
    ActiveList = BattleBuffData__GetAvaliableActiveBuffArray(
                   this,
                   (System_Predicate_BattleBuffData_BuffData__o *)_9__105_0,
                   v29);
  }
  v41 = ActiveList;
  if ( !ActiveList )
    goto LABEL_24;
  v42 = *((_DWORD *)ActiveList + 6);
  if ( v42 >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= v42 )
      {
        v46 = sub_B5D6C8(ActiveList);
        sub_B5D668(v46, 0LL);
      }
      v44 = *((_QWORD *)v41 + (int)v43 + 4);
      if ( !v44 || !v27 )
        break;
      System_Collections_Generic_List_int___Add(
        v27,
        *(_DWORD *)(v44 + 16),
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      v42 = *((_DWORD *)v41 + 6);
      if ( (int)++v43 >= v42 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B5D69C(ActiveList, v28);
  }
LABEL_22:
  if ( !v27 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v27,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleBuffData__getBuffIDList(
        BattleBuffData_o *this,
        bool IsIncludeUnsubState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char v36; // w1
  int v37; // w2
  __int64 v38; // x3
  char v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_List_int__o *v42; // x21
  const MethodInfo *v43; // x2
  void *PassiveList; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  void *v47; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v48; // x22
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__104_0; // x23
  Il2CppObject *v51; // x24
  struct BattleBuffData___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int v59; // w8
  unsigned int v60; // w22
  __int64 v61; // x8
  __int64 v63; // x0

  if ( (byte_42EC146 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, IsIncludeUnsubState, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___68757064, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_BattleBuffData___c__getBuffIDList_b__104_0__, v36, v37, v38);
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v39, v40, v41);
    byte_42EC146 = 1;
  }
  v42 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v43);
  v47 = PassiveList;
  if ( !IsIncludeUnsubState )
  {
    v48 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v48,
      (System_Collections_Generic_IEnumerable_T__o *)v47,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___68757064);
    PassiveList = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      PassiveList = BattleBuffData___c_TypeInfo;
    }
    static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)PassiveList + 23);
    _9__104_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__104_0;
    if ( !_9__104_0 )
    {
      if ( (*((_BYTE *)PassiveList + 307) & 4) != 0 && !*((_DWORD *)PassiveList + 56) )
      {
        j_il2cpp_runtime_class_init_0(PassiveList);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v51 = (Il2CppObject *)static_fields->__9;
      _9__104_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__104_0,
        v51,
        Method_BattleBuffData___c__getBuffIDList_b__104_0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v52 = BattleBuffData___c_TypeInfo->static_fields;
      v52->__9__104_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__104_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v52->__9__104_0,
        (System_Int32_array **)_9__104_0,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    if ( !v48 )
      goto LABEL_24;
    PassiveList = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                    (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v48,
                    (System_Predicate_T__o *)_9__104_0,
                    (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    if ( !PassiveList )
      goto LABEL_24;
    PassiveList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)PassiveList,
                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    v47 = PassiveList;
  }
  if ( !v47 )
    goto LABEL_24;
  v59 = *((_DWORD *)v47 + 6);
  if ( v59 >= 1 )
  {
    v60 = 0;
    while ( 1 )
    {
      if ( v60 >= v59 )
      {
        v63 = sub_B5D6C8(PassiveList);
        sub_B5D668(v63, 0LL);
      }
      v61 = *((_QWORD *)v47 + (int)v60 + 4);
      if ( !v61 || !v42 )
        break;
      System_Collections_Generic_List_int___Add(
        v42,
        *(_DWORD *)(v61 + 16),
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      v59 = *((_DWORD *)v47 + 6);
      if ( (int)++v60 >= v59 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B5D69C(PassiveList, v45);
  }
LABEL_22:
  PassiveList = BattleBuffData__getBuffActiveIDList(this, IsIncludeUnsubState, v46);
  if ( !v42 )
    goto LABEL_24;
  System_Collections_Generic_List_int___AddRange(
    v42,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v42,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__getBuffIndividualities(
        BattleBuffData_o *this,
        bool isActiveOnly,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        bool isAiCheck,
        const MethodInfo *method)
{
  char v11; // w1
  char v12; // w2
  __int64 v13; // x3
  char v14; // w1
  char v15; // w2
  __int64 v16; // x3
  char v17; // w1
  char v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_int__o *v20; // x22
  const MethodInfo *v21; // x2
  BattleBuffData_BuffData_o *PassiveList; // x0
  __int64 v23; // x1
  int count; // w8
  BattleBuffData_BuffData_o *v25; // x24
  unsigned int v26; // w25
  int v27; // w8
  BattleBuffData_BuffData_o *v28; // x23
  unsigned int v29; // w24
  __int64 v31; // x0

  if ( (byte_42EC144 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_int__AddRange__,
      isActiveOnly,
      isIncludeIgnoreIndiv,
      isIgnoreIndivUnreleaseable);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    byte_42EC144 = 1;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (isAiCheck || !isIgnoreIndivUnreleaseable) && !isActiveOnly )
  {
    PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getPassiveList(this, 1, v21);
    if ( !PassiveList )
      goto LABEL_21;
    count = PassiveList->fields.count;
    v25 = PassiveList;
    if ( count >= 1 )
    {
      v26 = 0;
      while ( v26 < count )
      {
        PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v25->fields.isUse + (int)v26);
        if ( !PassiveList )
          goto LABEL_21;
        PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                     PassiveList,
                                                     isIncludeIgnoreIndiv,
                                                     isIgnoreIndivUnreleaseable,
                                                     isAiCheck,
                                                     0LL);
        if ( !v20 )
          goto LABEL_21;
        System_Collections_Generic_List_int___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
        count = v25->fields.count;
        if ( (int)++v26 >= count )
          goto LABEL_12;
      }
LABEL_22:
      v31 = sub_B5D6C8(PassiveList);
      sub_B5D668(v31, 0LL);
    }
  }
LABEL_12:
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, v21);
  if ( !PassiveList )
    goto LABEL_21;
  v27 = PassiveList->fields.count;
  v28 = PassiveList;
  if ( v27 >= 1 )
  {
    v29 = 0;
    while ( v29 < v27 )
    {
      PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v28->fields.isUse + (int)v29);
      if ( !PassiveList )
        goto LABEL_21;
      PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                   PassiveList,
                                                   isIncludeIgnoreIndiv,
                                                   isIgnoreIndivUnreleaseable,
                                                   isAiCheck,
                                                   0LL);
      if ( !v20 )
        goto LABEL_21;
      System_Collections_Generic_List_int___AddRange(
        v20,
        (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
        (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      v27 = v28->fields.count;
      if ( (int)++v29 >= v27 )
        goto LABEL_19;
    }
    goto LABEL_22;
  }
LABEL_19:
  if ( !v20 )
LABEL_21:
    sub_B5D69C(PassiveList, v23);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  if ( !checkIndividualities )
    sub_B5D69C(this, types);
  return BattleBuffData__getBuffList_31648088(
           this,
           types,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checklist,
           method);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList_31648088(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *targetIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  int *v5; // x22
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x23
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  MethodInfo *monitor; // x1
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  int v35; // w8
  int v36; // w28
  __int64 v37; // x8
  System_Collections_Generic_IEnumerable_T__o *v38; // x25
  unsigned __int64 v39; // x22
  int32_t v40; // w26
  int32_t klass_high; // w27
  __int64 v42; // x24
  int *v43; // x19
  __int64 v45; // x0

  v5 = (int *)checklist;
  if ( (byte_42EC14F & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)types, (_DWORD)targetIndividualities, checklist);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v26, v27, v28);
    byte_42EC14F = 1;
  }
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v5 )
  {
    ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v32);
    if ( !v29 )
      goto LABEL_32;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
      ActiveList,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v33);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
      PassiveList,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    v5 = (int *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v29,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    if ( !v5 )
      goto LABEL_32;
  }
  v35 = v5[6];
  if ( v35 >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v35 )
        goto LABEL_31;
      v42 = *(_QWORD *)&v5[2 * v36 + 8];
      if ( !v42 )
        goto LABEL_32;
      v43 = v5;
      if ( !*(_BYTE *)(v42 + 371) )
      {
        ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__get_buffMst(this, monitor);
        if ( !ActiveList )
          goto LABEL_32;
        ActiveList = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)ActiveList,
                                                                      *(_DWORD *)(v42 + 16),
                                                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( ActiveList )
        {
          if ( !types )
            goto LABEL_32;
          v37 = *(_QWORD *)&types->max_length;
          if ( (int)v37 >= 1 )
            break;
        }
      }
LABEL_28:
      v35 = v43[6];
      ++v36;
      v5 = v43;
      if ( v36 >= v35 )
        goto LABEL_29;
    }
    v38 = ActiveList;
    v39 = 0LL;
    while ( v39 < (unsigned int)v37 )
    {
      v40 = types->m_Items[v39 + 1];
      klass_high = HIDWORD(v38[1].klass);
      if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BuffList__CheckType(v40, klass_high, 0LL);
      if ( ((unsigned __int8)ActiveList & 1) != 0 )
      {
        monitor = (MethodInfo *)v38[3].monitor;
        if ( !monitor
          || !monitor->klass
          || (ActiveList = (System_Collections_Generic_IEnumerable_T__o *)Individuality__CheckIndividualities(
                                                                            targetIndividualities,
                                                                            (System_Int32_array *)monitor,
                                                                            0LL),
              ((unsigned __int8)ActiveList & 1) != 0) )
        {
          if ( !v29 )
            goto LABEL_32;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
      }
      LODWORD(v37) = types->max_length;
      if ( (__int64)++v39 >= (int)v37 )
        goto LABEL_28;
    }
LABEL_31:
    v45 = sub_B5D6C8(ActiveList);
    sub_B5D668(v45, 0LL);
  }
LABEL_29:
  if ( !v29 )
LABEL_32:
    sub_B5D69C(ActiveList, monitor);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList_31668004(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        bool checkOnly,
        System_Func_BattleBuffData_BuffData__bool__o *funcCond,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  BuffList_ActInfo_o *ActInfo; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x19
  const MethodInfo *v41; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v46; // x20
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x3
  __int64 v52; // x20
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x3
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  const MethodInfo *v62; // x5
  BattleBuffData_BuffData_o *v63; // x27
  _BOOL8 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  bool isReca; // [xsp+8h] [xbp-68h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42EC179 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)checkIndividualities, isRec);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v36, v37, v38);
    byte_42EC179 = 1;
  }
  plusMinus = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  plusMinus = 0;
  v42 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v41);
  if ( !v42 )
    goto LABEL_44;
  klass = v42->klass;
  v46 = v42;
  if ( *(_WORD *)&v42->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v47;
      p_offset += 4;
      if ( v47 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AF54C0(v42, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v44);
  }
  v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v46,
          *(_QWORD *)(p_method + 8));
  if ( !v52 )
    sub_B5D69C(0LL, v50);
  isReca = isRec;
  while ( 1 )
  {
    v53 = *(_QWORD *)v52;
    if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
    {
      v54 = 0LL;
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
          goto LABEL_19;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_19:
      v56 = sub_AF54C0(v52, System_Collections_IEnumerator_TypeInfo, 0LL, v51);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
      break;
    v58 = *(_QWORD *)v52;
    if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
    {
      v59 = 0LL;
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v60 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
          goto LABEL_26;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_26:
      v61 = sub_AF54C0(v52, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v57);
    }
    v63 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v52, *(_QWORD *)(v61 + 8));
    if ( !funcCond
      || System_Func_BattleBuffData_BuffData__bool___Invoke(
           funcCond,
           v63,
           (const MethodInfo_2C2ECE4 *)Method_System_Func_BattleBuffData_BuffData__bool__Invoke__) )
    {
      v64 = BattleBuffData__checkIndiviuality(this, ActInfo, v63, checkIndividualities, &plusMinus, v62);
      if ( v64 && (checkOnly || (v64 = BattleBuffData__checkBuffSuccessful(this, v63, isReca, v51))) )
      {
        if ( !v40 )
          sub_B5D69C(v64, v65);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v40,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
    }
  }
  v66 = *(_QWORD *)v52;
  if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
  {
    v67 = 0LL;
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
        goto LABEL_39;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_39:
    v69 = sub_AF54C0(v52, System_IDisposable_TypeInfo, 0LL, v57);
  }
  v42 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v69)(
                                                                               v52,
                                                                               *(_QWORD *)(v69 + 8));
  if ( !v40 )
LABEL_44:
    sub_B5D69C(v42, v43);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


System_Int32_array *__fastcall BattleBuffData__getBuffParamList(
        BattleBuffData_o *this,
        int32_t act,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  BuffList_ActInfo_o *ActInfo; // x22
  System_Collections_Generic_List_int__o *v44; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x23
  const MethodInfo *v46; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  BattleBuffData_CheckIndividualitiesData_o *v51; // x24
  System_Int32_array *selfIndividuality_k__BackingField; // x24
  Il2CppObject *current; // x23
  _BOOL8 v54; // x0
  __int64 v55; // x1
  const MethodInfo *v57; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+10h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-44h] BYREF

  selfConcatSvtIndividualities_k__BackingField = servantData;
  if ( (byte_42EC178 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)servantData, method);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v40, v41, v42);
    byte_42EC178 = 1;
  }
  plusMinus = 0;
  memset(&v58, 0, sizeof(v58));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v44 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  plusMinus = 0;
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v46);
  if ( !v45 )
    goto LABEL_21;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v45,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v49);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v45,
    PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( selfConcatSvtIndividualities_k__BackingField )
  {
    v51 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(
      v51,
      selfConcatSvtIndividualities_k__BackingField,
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( !v51 )
      goto LABEL_21;
    selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v51->fields._selfConcatSvtIndividualities_k__BackingField;
    selfIndividuality_k__BackingField = v51->fields._selfIndividuality_k__BackingField;
  }
  else
  {
    selfIndividuality_k__BackingField = 0LL;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v58,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v45,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v58,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v58.fields.current;
    v54 = BattleBuffData__checkIndiviuality_31681276(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v58.fields.current,
            (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
            0LL,
            selfIndividuality_k__BackingField,
            0LL,
            &plusMinus,
            v57);
    if ( v54 )
    {
      if ( !current )
        sub_B5D69C(v54, v55);
      if ( !v44 )
        sub_B5D69C(v54, v55);
      System_Collections_Generic_List_int___Add(
        v44,
        HIDWORD(current[1].monitor),
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v58,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v44 )
LABEL_21:
    sub_B5D69C(ActiveList, v48);
  return System_Collections_Generic_List_int___ToArray(
           v44,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B5D69C(this, bufflist);
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
  int32_t *v13; // x28
  System_Int32_array *v14; // x26
  BuffInterface_o *buffIf_k__BackingField; // x21
  BuffList_ActInfo_o *v16; // x23
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int32_t baseParam; // w8
  const MethodInfo *v39; // x2
  __int64 v40; // x3
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v43; // x19
  unsigned __int64 v44; // x10
  int32_t *p_offset; // x11
  __int64 v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  __int64 v49; // x20
  System_Collections_IEnumerator_c **v50; // x21
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **v51; // x19
  __int64 v52; // x8
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c *v53; // x1
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  BattleBuffData_BuffData_o *v57; // x0
  __int64 v58; // x1
  BattleBuffData_BuffData_o *v59; // x24
  _BOOL8 IsCommandAssistBuff; // x0
  __int64 v61; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **v62; // x22
  System_Collections_IEnumerator_c **v63; // x27
  System_Int32_array *selfIndividuality_k__BackingField; // x19
  System_Int32_array *opponentIndividuality_k__BackingField; // x21
  System_Int32_array *v66; // x4
  System_Int32_array *v67; // x3
  bool v68; // w0
  const MethodInfo *v69; // x1
  BuffMaster_o *buffMst; // x0
  __int64 v71; // x1
  WarEntity_o *Entity; // x0
  __int64 v73; // x1
  BuffEntity_o *v74; // x10
  BattleLogicBuff_BaseProcess_o *v75; // x21
  int32_t v76; // w23
  int emptyMessage_high; // w19
  int32_t v78; // w25
  int32_t v79; // w0
  int32_t v80; // w19
  int32_t v81; // w8
  int32_t ExtendLowerLimit; // w23
  _BOOL4 isValidHpRange; // w0
  __int64 v84; // x3
  BuffInterface_o *v85; // x13
  System_Int32_array *v86; // x28
  BuffInterface_c *v87; // x8
  unsigned int ratioHpHigh; // w23
  unsigned int ratioHpLow; // w25
  unsigned int ratioRangeHigh; // w19
  unsigned int ratioRangeLow; // w26
  unsigned __int64 v92; // x10
  BuffInterface_c **v93; // x11
  __int64 p_method; // x0
  int v95; // w19
  BuffInterface_c *v96; // x8
  int32_t v97; // w23
  unsigned __int64 v98; // x10
  BuffInterface_c **v99; // x11
  __int64 v100; // x0
  int v101; // w19
  BuffInterface_o *v102; // x13
  BuffInterface_c *v103; // x8
  unsigned __int64 v104; // x10
  BuffInterface_c **v105; // x11
  __int64 v106; // x0
  int v107; // w0
  int32_t v108; // w8
  int v109; // w0
  bool isParamAddIndividualiry; // w0
  const MethodInfo *v111; // x4
  BuffEntity_o *v112; // x8
  int32_t v113; // w19
  const MethodInfo *v114; // x5
  const MethodInfo *v115; // x6
  System_Int32_array **v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  int32_t plusAction; // w1
  int32_t v124; // w19
  int32_t ActValue_31679644; // w0
  int v126; // w8
  int32_t v127; // w4
  int v128; // w19
  int v129; // w21
  float v130; // s0
  double v131; // d1
  bool v132; // zf
  double v133; // d0
  int32_t v134; // w8
  __int64 v135; // x8
  System_Collections_IEnumerator_c *v136; // x1
  unsigned __int64 v137; // x10
  int *v138; // x11
  __int64 v139; // x0
  __int64 v140; // x3
  __int64 v141; // x8
  unsigned __int64 v142; // x10
  int *v143; // x11
  __int64 v144; // x0
  const MethodInfo *v146; // [xsp+0h] [xbp-110h]
  int32_t param; // [xsp+14h] [xbp-FCh]
  int32_t *v148; // [xsp+18h] [xbp-F8h]
  BattleLogicBuff_BaseProcess_o *v149; // [xsp+20h] [xbp-F0h]
  BattleServantConfConponent_o *v150; // [xsp+28h] [xbp-E8h]
  BuffList_ActInfo_o *v151; // [xsp+30h] [xbp-E0h]
  int v152; // [xsp+3Ch] [xbp-D4h]
  BuffInterface_o *v154; // [xsp+48h] [xbp-C8h]
  int v156; // [xsp+5Ch] [xbp-B4h]
  BuffEntity_o *v157; // [xsp+68h] [xbp-A8h]
  BattleBuffData_o *v158; // [xsp+78h] [xbp-98h]
  int32_t maxBuffRate[5]; // [xsp+8Ch] [xbp-84h] BYREF
  int32_t plusMinus[2]; // [xsp+A8h] [xbp-68h] BYREF

  v13 = upperParam;
  v14 = opIndv;
  buffIf_k__BackingField = selfIf;
  v16 = actInfo;
  v158 = this;
  if ( (byte_42EC16B & 1) == 0 )
  {
    sub_B5D5C4(&BuffInterface_TypeInfo, (_DWORD)actInfo, (_DWORD)selfIndv, selfIf);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Math_TypeInfo, v32, v33, v34);
    this = (BattleBuffData_o *)sub_B5D5C4(&StringLiteral_11269/*"REVERT_BUFF_LOWER_LIMIT"*/, v35, v36, v37);
    byte_42EC16B = 1;
  }
  *(_QWORD *)plusMinus = 0LL;
  *(_QWORD *)&maxBuffRate[1] = 0LL;
  maxBuffRate[0] = 0;
  if ( !v16 )
    goto LABEL_120;
  baseParam = v16->fields.baseParam;
  plusMinus[0] = 0;
  plusMinus[1] = baseParam;
  *actflg = 0;
  *v13 = baseParam;
  *lowerParam = 0;
  *missText = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)missText,
    0LL,
    (System_String_array **)selfIndv,
    (System_String_array **)selfIf,
    (System_Boolean_array **)opIndv,
    (System_Int32_array **)upperParam,
    (System_Int32_array *)actflg,
    (System_Int32_array *)missText);
  this = (BattleBuffData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11269/*"REVERT_BUFF_LOWER_LIMIT"*/, 0LL);
  v152 = (int)this;
  if ( !buffIf_k__BackingField )
  {
    if ( !checkIndividualities )
      goto LABEL_120;
    buffIf_k__BackingField = checkIndividualities->fields._buffIf_k__BackingField;
  }
  v154 = buffIf_k__BackingField;
  this = (BattleBuffData_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(v158, 0, v39);
  if ( !this )
LABEL_120:
    sub_B5D69C(this, actInfo);
  klass = this->klass;
  v43 = this;
  v150 = (BattleServantConfConponent_o *)missText;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v44;
      p_offset += 4;
      if ( v44 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    v46 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v46 = sub_AF54C0(this, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v40);
  }
  v49 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
  if ( !v49 )
    sub_B5D69C(0LL, v47);
  v50 = &System_Collections_IEnumerator_TypeInfo;
  v51 = &System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo;
  v151 = v16;
  while ( 1 )
  {
    v135 = *(_QWORD *)v49;
    v136 = *v50;
    if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
    {
      v137 = 0LL;
      v138 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v138 - 1) != v136 )
      {
        ++v137;
        v138 += 4;
        if ( v137 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
          goto LABEL_106;
      }
      v139 = v135 + 16LL * *v138 + 312;
    }
    else
    {
LABEL_106:
      v139 = sub_AF54C0(v49, v136, 0LL, v48);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v139)(v49, *(_QWORD *)(v139 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v49;
    v53 = *v51;
    if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
    {
      v54 = 0LL;
      v55 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v55 - 1) != v53 )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
          goto LABEL_20;
      }
      v56 = v52 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_20:
      v56 = sub_AF54C0(v49, v53, 0LL, v140);
    }
    v57 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v49, *(_QWORD *)(v56 + 8));
    v59 = v57;
    if ( !v57 )
      sub_B5D69C(0LL, v58);
    if ( !v57->fields._isRemove
      && (!BattleBuffData_BuffData__isCommandCodeBuff(v57, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v59,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v59, 0LL) || v59->fields.isActiveCC) )
    {
      IsCommandAssistBuff = BattleBuffData_BuffData__IsCommandAssistBuff(v59, 0LL);
      if ( !IsCommandAssistBuff || (IsCommandAssistBuff = BattleBuffData_BuffData__IsActiveCommandAssist(v59, 0LL)) )
      {
        if ( !checkIndividualities )
          sub_B5D69C(IsCommandAssistBuff, v61);
        v62 = v51;
        v63 = v50;
        selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividuality_k__BackingField;
        opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividuality_k__BackingField;
        if ( BattleBuffData_BuffData__checkState(v59, 0x100000, 0LL) )
        {
          selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividualityCanRelease_k__BackingField;
          opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividualityCanRemove_k__BackingField;
          v66 = opponentIndividuality_k__BackingField;
          v67 = selfIndividuality_k__BackingField;
        }
        else
        {
          v67 = selfIndv;
          v66 = v14;
        }
        v68 = BattleBuffData__checkIndiviuality_31681276(
                v158,
                v16,
                v59,
                v67,
                v66,
                selfIndividuality_k__BackingField,
                opponentIndividuality_k__BackingField,
                plusMinus,
                v146);
        v50 = v63;
        v51 = v62;
        if ( v68 && BattleBuffData__checkBuffSuccessful(v158, v59, v16->fields.isRec, v48) )
        {
          *actflg = 1;
          buffMst = BattleBuffData__get_buffMst(v158, v69);
          if ( !buffMst )
            sub_B5D69C(0LL, v71);
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                     v59->fields.buffId,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          v74 = (BuffEntity_o *)Entity;
          v157 = (BuffEntity_o *)Entity;
          v156 = plusMinus[0];
          if ( v152 <= 0 && (plusMinus[0] & 0x80000000) != 0 )
          {
            v75 = buffProc;
            if ( !Entity )
              sub_B5D69C(0LL, v73);
            v76 = v16->fields.baseParam;
            emptyMessage_high = HIDWORD(Entity->fields.emptyMessage);
            v78 = *lowerParam;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            v79 = System_Math__Min_45104456(v78, v76 - emptyMessage_high, 0LL);
            v74 = v157;
            v80 = v79;
            buffProc = v75;
            v50 = v63;
            *lowerParam = v79;
          }
          else
          {
            if ( !Entity )
              sub_B5D69C(0LL, v73);
            v81 = *v13;
            if ( *v13 < SHIDWORD(Entity->fields.emptyMessage) )
              v81 = HIDWORD(Entity->fields.emptyMessage);
            *v13 = v81;
            v80 = *lowerParam;
          }
          ExtendLowerLimit = BuffEntity__GetExtendLowerLimit(v74, 0LL);
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          *lowerParam = System_Math__Min_45104456(v80, ExtendLowerLimit, 0LL);
          maxBuffRate[2] = v59->fields.param;
          isValidHpRange = BattleBuffData_BuffData__isValidHpRange(v59, 0LL);
          v85 = v154;
          if ( v154 && isValidHpRange )
          {
            v148 = v13;
            v149 = buffProc;
            v86 = v14;
            param = v59->fields.param;
            v87 = v154->klass;
            ratioHpHigh = v59->fields.ratioHpHigh;
            ratioHpLow = v59->fields.ratioHpLow;
            ratioRangeHigh = v59->fields.ratioRangeHigh;
            ratioRangeLow = v59->fields.ratioRangeLow;
            if ( *(_WORD *)&v154->klass->_2.bitflags1 )
            {
              v92 = 0LL;
              v93 = (BuffInterface_c **)&v87->_1.interfaceOffsets->offset;
              while ( *(v93 - 1) != BuffInterface_TypeInfo )
              {
                ++v92;
                v93 += 2;
                if ( v92 >= *(unsigned __int16 *)&v154->klass->_2.bitflags1 )
                  goto LABEL_57;
              }
              p_method = (__int64)&v87->vtable[*(_DWORD *)v93 + 2].method;
            }
            else
            {
LABEL_57:
              p_method = sub_AF54C0(v154, BuffInterface_TypeInfo, 2LL, v84);
              v85 = v154;
            }
            v107 = (*(__int64 (__fastcall **)(BuffInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))p_method)(
                     v85,
                     ratioHpLow,
                     ratioHpHigh,
                     ratioRangeLow,
                     ratioRangeHigh,
                     *(_QWORD *)(p_method + 8));
            v14 = v86;
            v13 = v148;
            buffProc = v149;
            v108 = v107 + param;
            goto LABEL_79;
          }
          if ( v154 )
          {
            v95 = v59->fields.ratioHpLow;
            if ( v95 >= 1 )
            {
              v96 = v154->klass;
              v97 = v59->fields.param;
              if ( *(_WORD *)&v154->klass->_2.bitflags1 )
              {
                v98 = 0LL;
                v99 = (BuffInterface_c **)&v96->_1.interfaceOffsets->offset;
                while ( *(v99 - 1) != BuffInterface_TypeInfo )
                {
                  ++v98;
                  v99 += 2;
                  if ( v98 >= *(unsigned __int16 *)&v154->klass->_2.bitflags1 )
                    goto LABEL_64;
                }
                v100 = (__int64)&v96->vtable[*(_DWORD *)v99 + 1].method;
              }
              else
              {
LABEL_64:
                v100 = sub_AF54C0(v154, BuffInterface_TypeInfo, 1LL, v84);
                v85 = v154;
              }
              v109 = (*(__int64 (__fastcall **)(BuffInterface_o *, __int64, _QWORD, _QWORD))v100)(
                       v85,
                       1LL,
                       (unsigned int)v95,
                       *(_QWORD *)(v100 + 8));
LABEL_78:
              v108 = v109 + v97;
LABEL_79:
              maxBuffRate[2] = v108;
              goto LABEL_80;
            }
          }
          if ( v154 )
          {
            v101 = v59->fields.ratioHpHigh;
            if ( v101 >= 1 )
            {
              v102 = v154;
              v97 = v59->fields.param;
              v103 = v154->klass;
              if ( *(_WORD *)&v154->klass->_2.bitflags1 )
              {
                v104 = 0LL;
                v105 = (BuffInterface_c **)&v103->_1.interfaceOffsets->offset;
                while ( *(v105 - 1) != BuffInterface_TypeInfo )
                {
                  ++v104;
                  v105 += 2;
                  if ( v104 >= *(unsigned __int16 *)&v154->klass->_2.bitflags1 )
                    goto LABEL_71;
                }
                v106 = (__int64)&v103->vtable[*(_DWORD *)v105 + 1].method;
              }
              else
              {
LABEL_71:
                v106 = sub_AF54C0(v154, BuffInterface_TypeInfo, 1LL, v84);
                v102 = v154;
              }
              v109 = (*(__int64 (__fastcall **)(BuffInterface_o *, _QWORD, _QWORD, _QWORD))v106)(
                       v102,
                       0LL,
                       (unsigned int)v101,
                       *(_QWORD *)(v106 + 8));
              goto LABEL_78;
            }
          }
LABEL_80:
          isParamAddIndividualiry = BattleBuffData_BuffData__isParamAddIndividualiry(v59, 0LL);
          v16 = v151;
          v112 = v157;
          if ( isParamAddIndividualiry )
          {
            v113 = maxBuffRate[2];
            maxBuffRate[2] = BattleBuffData__GetTotalParamAddValue(
                               v158,
                               v59,
                               v151->fields.battleData,
                               checkIndividualities,
                               v111)
                           + v113;
            v112 = v157;
          }
          v51 = v62;
          if ( BuffEntity__checkMissText(v112, 0LL) )
          {
            v116 = (System_Int32_array **)BuffEntity__getMissText(v157, 0LL);
            v150->klass = (BattleServantConfConponent_c *)v116;
            sub_B5D560(v150, v116, v117, v118, v119, v120, v121, v122);
          }
          if ( v156 >= 1 )
          {
            plusAction = v151->fields.plusAction;
            if ( plusAction )
            {
              v124 = maxBuffRate[2];
              ActValue_31679644 = BattleBuffData__getActValue_31679644(
                                    v158,
                                    plusAction,
                                    v157->fields.vals,
                                    v158->fields.wkzero,
                                    checkIndividualities,
                                    0LL,
                                    v115);
              if ( ActValue_31679644 * v124 <= -1000 )
                v126 = 0;
              else
                v126 = ActValue_31679644 * v124 / 1000;
              v51 = v62;
              maxBuffRate[2] = v126;
            }
          }
          v127 = *v13;
          *(_QWORD *)maxBuffRate = (unsigned int)*v13;
          if ( BattleBuffData__CheckBuffRateTypeOrIndiv(v158, v59, &maxBuffRate[1], maxBuffRate, v127, v114) )
          {
            v129 = maxBuffRate[1];
            v128 = maxBuffRate[2];
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            v130 = System_Math__Max_45149520(0.0, (float)((float)v129 / 1000.0) + 1.0, 0LL) * (float)v128;
            v131 = v130;
            v132 = v130 == INFINITY;
            v133 = -v130;
            if ( !v132 )
              v133 = v131;
            maxBuffRate[2] = (int)v133;
            v134 = *v13;
            v50 = v63;
            v51 = v62;
            if ( *v13 < maxBuffRate[0] )
              v134 = maxBuffRate[0];
            *v13 = v134;
          }
          if ( buffProc )
            ((void (__fastcall *)(BattleLogicBuff_BaseProcess_o *, BattleBuffData_BuffData_o *, _QWORD, _QWORD, int32_t *, Il2CppMethodPointer))buffProc->klass->vtable._4_PrevAddCalcBuffParam.method)(
              buffProc,
              v59,
              (unsigned int)plusMinus[1],
              (unsigned int)v156,
              &maxBuffRate[2],
              buffProc->klass->vtable._5_AfterAllAddCalcBuffParam.methodPtr);
          plusMinus[1] += maxBuffRate[2] * v156;
        }
      }
    }
  }
  v141 = *(_QWORD *)v49;
  if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
  {
    v142 = 0LL;
    v143 = (int *)(*(_QWORD *)(v141 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v143 - 1) != System_IDisposable_TypeInfo )
    {
      ++v142;
      v143 += 4;
      if ( v142 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
        goto LABEL_113;
    }
    v144 = v141 + 16LL * *v143 + 312;
  }
  else
  {
LABEL_113:
    v144 = sub_AF54C0(v49, System_IDisposable_TypeInfo, 0LL, v140);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v144)(v49, *(_QWORD *)(v144 + 8));
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  bool v13; // w20
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0

  if ( (byte_42EC116 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__,
      isCheckInterval,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9, v10, v11);
    byte_42EC116 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v13 = isCheckInterval;
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, v13, v14);
  if ( !v12 )
    sub_B5D69C(PassiveList, v16);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, v13, v17);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v12;
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
          PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities_28468984(
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
      v20 = sub_B5D6C8(PassiveList);
      sub_B5D668(v20, 0LL);
    }
  }
  count = 0LL;
LABEL_13:
  PassiveList = BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_24:
    sub_B5D69C(PassiveList, v7);
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
        PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities_28468984(
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getMaxTurnBuffBase(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool checkCount,
        bool *actFlg,
        int32_t lowTurn,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  BuffList_ActInfo_o *ActInfo; // x0
  BuffList_ActInfo_o *v35; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x25
  const MethodInfo *v37; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  Il2CppObject *current; // x25
  _BOOL8 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x5
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-68h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_42EC173 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)checkIndividualities, checkCount);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v31, v32, v33);
    byte_42EC173 = 1;
  }
  plusMinus = 0;
  memset(&v47, 0, sizeof(v47));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  plusMinus = 0;
  *actFlg = 0;
  v35 = ActInfo;
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v37);
  if ( !v36 )
    sub_B5D69C(ActiveList, v39);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v40);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
    PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v36,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v47.fields.current;
    v43 = BattleBuffData__checkIndiviuality(
            this,
            v35,
            (BattleBuffData_BuffData_o *)v47.fields.current,
            checkIndividualities,
            &plusMinus,
            v45);
    if ( v43 )
    {
      if ( !current )
        sub_B5D69C(v43, v44);
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
    &v47,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return lowTurn;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getPassiveList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BattleBuffData___c__DisplayClass30_0_o *v21; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x20

  if ( (byte_42EC114 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__,
      isCheckInterval,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass30_0__getPassiveList_b__0__, v15, v16, v17);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass30_0_TypeInfo, v18, v19, v20);
    byte_42EC114 = 1;
  }
  v21 = (BattleBuffData___c__DisplayClass30_0_o *)sub_B5D694(BattleBuffData___c__DisplayClass30_0_TypeInfo);
  BattleBuffData___c__DisplayClass30_0___ctor(v21, 0LL);
  if ( !v21
    || (v21->fields.isCheckInterval = isCheckInterval,
        passiveList = this->fields.passiveList,
        v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v25,
          (Il2CppObject *)v21,
          Method_BattleBuffData___c__DisplayClass30_0__getPassiveList_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !passiveList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                (System_Predicate_T__o *)v25,
                (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
    sub_B5D69C(All, v23);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getPassiveListDebug(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0

  if ( (byte_42EC118 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, (_DWORD)method, v2, v3);
    byte_42EC118 = 1;
  }
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    sub_B5D69C(0LL, method);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)passiveList,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__getRectBuffList(
        BattleBuffData_o *this,
        bool isAtkSide,
        bool isShowOverwriteClassRelation,
        bool isShowDarkClassRelation,
        const MethodInfo *method)
{
  char v6; // w1
  char v7; // w2
  __int64 v8; // x3
  char v9; // w1
  char v10; // w2
  __int64 v11; // x3
  char v12; // w1
  char v13; // w2
  __int64 v14; // x3
  char v15; // w1
  char v16; // w2
  __int64 v17; // x3
  char v18; // w1
  char v19; // w2
  __int64 v20; // x3
  char v21; // w1
  char v22; // w2
  __int64 v23; // x3
  char v24; // w1
  char v25; // w2
  __int64 v26; // x3
  char v27; // w1
  char v28; // w2
  __int64 v29; // x3
  char v30; // w1
  char v31; // w2
  __int64 v32; // x3
  char v33; // w1
  char v34; // w2
  __int64 v35; // x3
  char v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w8
  System_String_o *Value; // x0
  System_Int32_array *v41; // x24
  const MethodInfo *v42; // x2
  void *ActiveList; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  int v46; // w8
  void *v47; // x25
  unsigned int v48; // w20
  _BOOL8 v49; // x0
  const MethodInfo *v50; // x2
  int32_t v51; // w1
  const MethodInfo *v52; // x1
  int v53; // w23
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x8
  System_Func_int__bool__o *v61; // x28
  _BOOL4 v62; // w27
  char v63; // w28
  int v64; // w23
  BattleBuffData_ShowBuffData_o *v65; // x27
  BattleBuffData_BuffData_o *v66; // x26
  __int64 v67; // x27
  int v68; // w8
  void *v69; // x24
  int i; // w27
  BattleBuffData_BuffData_o *v71; // x25
  const MethodInfo *v72; // x2
  _BOOL8 v73; // x0
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x1
  BattleBuffData_ShowBuffData_o *v76; // x26
  int v77; // w19
  bool v78; // zf
  __int64 v80; // x0
  _BOOL4 v81; // [xsp+4h] [xbp-6Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // [xsp+8h] [xbp-68h]
  int v84; // [xsp+18h] [xbp-58h]

  v81 = isShowDarkClassRelation;
  if ( (byte_42EC15A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_Any_int____68810384,
      isAtkSide,
      isShowOverwriteClassRelation,
      isShowDarkClassRelation);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&BattleBuffData_ShowBuffData_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass138_0__getRectBuffList_b__0__, v30, v31, v32);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass138_0_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_7162/*"HIDE_DEFF_TYPE"*/, v36, v37, v38);
    byte_42EC15A = 1;
  }
  v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v82,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( isAtkSide )
    v39 = 108;
  else
    v39 = 109;
  v84 = v39;
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_7162/*"HIDE_DEFF_TYPE"*/, 0LL);
  v41 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
  ActiveList = BattleBuffData__getActiveList(this, 1, v42);
  if ( !ActiveList )
    goto LABEL_88;
  v46 = *((_DWORD *)ActiveList + 6);
  v47 = ActiveList;
  if ( v46 >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      if ( v48 >= v46 )
      {
LABEL_89:
        v80 = sub_B5D6C8(ActiveList);
        sub_B5D668(v80, 0LL);
      }
      v66 = (BattleBuffData_BuffData_o *)*((_QWORD *)v47 + (int)v48 + 4);
      v67 = sub_B5D694(BattleBuffData___c__DisplayClass138_0_TypeInfo);
      BattleBuffData___c__DisplayClass138_0___ctor((BattleBuffData___c__DisplayClass138_0_o *)v67, 0LL);
      if ( !v66 )
        break;
      if ( !v66->fields._isRemove )
      {
        ActiveList = (void *)BattleBuffData_BuffData__isCommandCardBuff(v66, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 || v66->fields.isActiveCC )
        {
          ActiveList = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v66, 0LL);
          if ( ((unsigned __int8)ActiveList & 1) == 0 || v66->fields.isActiveCA )
          {
            v49 = BattleBuffData_BuffData__checkState(v66, 8, 0LL);
            v53 = (!v49
                || (!isAtkSide ? (v51 = 1024) : (v51 = 0x2000), v49 = BattleBuffData_BuffData__checkState(v66, v51, 0LL)))
               && !BattleBuffData__isInvalidHide((BattleBuffData_o *)v49, v66, v50);
            ActiveList = BattleBuffData__get_buffMst(this, v52);
            if ( !ActiveList )
              break;
            ActiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)ActiveList,
                           v66->fields.buffId,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !v67 )
              break;
            *(_QWORD *)(v67 + 16) = ActiveList;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v67 + 16),
              (System_Int32_array **)ActiveList,
              v54,
              v55,
              v56,
              v57,
              v58,
              v59);
            v60 = *(_QWORD *)(v67 + 16);
            if ( v60 )
            {
              if ( v41 != 0LL && !isAtkSide )
              {
                v61 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v61,
                  (Il2CppObject *)v67,
                  Method_BattleBuffData___c__DisplayClass138_0__getRectBuffList_b__0__,
                  (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
                ActiveList = (void *)BasicHelper__Any_int__28142236(
                                       v41,
                                       (System_Func_T__bool__o *)v61,
                                       (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
                v60 = *(_QWORD *)(v67 + 16);
                if ( !v60 )
                  break;
                v53 &= (unsigned int)ActiveList ^ 1;
              }
              v62 = *(_DWORD *)(v60 + 20) == 144 || *(_DWORD *)(v60 + 20) == v84;
              v63 = (v53 & v62) != 0 ? isShowOverwriteClassRelation : v53;
              ActiveList = (void *)BattleBuffData_BuffData__checkState(v66, 4096, 0LL);
              if ( v66->fields.isAct && (v63 & 1) != 0 && ((unsigned __int8)ActiveList & 1) == 0 )
              {
                ActiveList = (void *)BattleBuffData_BuffData__checkState(v66, 512, 0LL);
                if ( ((unsigned __int8)ActiveList & 1) == 0 )
                {
                  v64 = v53 & v62 & v81;
                  v65 = (BattleBuffData_ShowBuffData_o *)sub_B5D694(BattleBuffData_ShowBuffData_TypeInfo);
                  BattleBuffData_ShowBuffData___ctor_23679032(v65, v66, 0LL);
                  if ( v64 )
                  {
                    if ( !v65 )
                      break;
                    v65->fields.isReady = 0;
                  }
                  ActiveList = v82;
                  if ( !v82 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v82,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
                }
              }
            }
          }
        }
      }
      v46 = *((_DWORD *)v47 + 6);
      if ( (int)++v48 >= v46 )
        goto LABEL_42;
    }
LABEL_88:
    sub_B5D69C(ActiveList, v44);
  }
LABEL_42:
  ActiveList = BattleBuffData__getPassiveList(this, 1, v45);
  if ( !ActiveList )
    goto LABEL_88;
  v68 = *((_DWORD *)ActiveList + 6);
  v69 = ActiveList;
  if ( v68 >= 1 )
  {
    for ( i = 0; i < v68; ++i )
    {
      if ( i >= (unsigned int)v68 )
        goto LABEL_89;
      v71 = (BattleBuffData_BuffData_o *)*((_QWORD *)v69 + i + 4);
      if ( !v71 )
        goto LABEL_88;
      if ( !v71->fields._isRemove )
      {
        ActiveList = (void *)BattleBuffData_BuffData__checkState(v71, 8, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 )
        {
          ActiveList = (void *)BattleBuffData_BuffData__checkState(v71, 4096, 0LL);
          if ( ((unsigned __int8)ActiveList & 1) == 0 )
          {
            ActiveList = (void *)BattleBuffData_BuffData__isCommandCardBuff(v71, 0LL);
            if ( ((unsigned __int8)ActiveList & 1) == 0 || v71->fields.isActiveCC )
            {
              ActiveList = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v71, 0LL);
              if ( ((unsigned __int8)ActiveList & 1) == 0 || v71->fields.isActiveCA )
              {
                if ( BattleBuffData_BuffData__isCommandCodeBuff(v71, 0LL)
                  || BattleBuffData_BuffData__IsCommandAssistBuff(v71, 0LL)
                  || !v71->fields.isAct
                  || !(v73 = BattleBuffData__checkBuffSpecialAttack(this, v71, v72))
                  && v71->fields.turn <= 0
                  && v71->fields.count <= 0
                  && !v71->fields._IsExtendingLife_k__BackingField
                  && !(v73 = BattleBuffData_BuffData__checkState(v71, 4, 0LL))
                  && !(v73 = BattleBuffData_BuffData__checkState(v71, 0x2000, 0LL))
                  && (isAtkSide || !(v73 = BattleBuffData_BuffData__checkState(v71, 1024, 0LL)))
                  || BattleBuffData__isInvalidHide((BattleBuffData_o *)v73, v71, v74) )
                {
                  ActiveList = (void *)BattleBuffData_BuffData__isActiveCommandCode(v71, 0LL);
                  if ( ((unsigned __int8)ActiveList & 1) == 0 )
                    goto LABEL_85;
                  if ( !v71->fields.isAct )
                    goto LABEL_85;
                  ActiveList = (void *)BattleBuffData_BuffData__checkState(v71, 4, 0LL);
                  if ( ((unsigned __int8)ActiveList & 1) == 0 )
                    goto LABEL_85;
                  v76 = (BattleBuffData_ShowBuffData_o *)sub_B5D694(BattleBuffData_ShowBuffData_TypeInfo);
                  BattleBuffData_ShowBuffData___ctor_23679032(v76, v71, 0LL);
                  if ( !v82 )
                    goto LABEL_88;
                  goto LABEL_84;
                }
                ActiveList = BattleBuffData__get_buffMst(this, v75);
                if ( !ActiveList )
                  goto LABEL_88;
                ActiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)ActiveList,
                               v71->fields.buffId,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                if ( !ActiveList )
                  goto LABEL_88;
                v77 = *((_DWORD *)ActiveList + 5);
                if ( v77 != v84 && v77 != 144 || isShowOverwriteClassRelation )
                {
                  v76 = (BattleBuffData_ShowBuffData_o *)sub_B5D694(BattleBuffData_ShowBuffData_TypeInfo);
                  BattleBuffData_ShowBuffData___ctor_23679032(v76, v71, 0LL);
                  v78 = v77 == 144 || v77 == v84;
                  if ( v78 && v81 )
                  {
                    if ( !v76 )
                      goto LABEL_88;
                    v76->fields.isReady = 0;
                  }
                  if ( !v82 )
                    goto LABEL_88;
LABEL_84:
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v82,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
                }
              }
            }
          }
        }
      }
LABEL_85:
      v68 = *((_DWORD *)v69 + 6);
    }
  }
  if ( !v82 )
    goto LABEL_88;
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v82,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getReflectionEffectFunction(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BuffList_TYPE_array *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  BattleBuffData_BuffData_array *BuffList_31648088; // x1
  const MethodInfo *v9; // x2
  __int64 v11; // x0

  if ( (byte_42EC133 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TYPE___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC133 = 1;
  }
  v5 = (BuffList_TYPE_array *)sub_B5D5DC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  if ( !v5->max_length )
  {
    v11 = sub_B5D6C8(v5);
    sub_B5D668(v11, 0LL);
  }
  v5->m_Items[1] = 97;
  BuffList_31648088 = BattleBuffData__getBuffList_31648088(this, v5, 0LL, 0LL, v7);
  return BattleBuffData__geCheckBuffSuccessful(this, BuffList_31648088, v9);
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
      v20 = sub_B5D6C8(PassiveList);
      sub_B5D668(v20, 0LL);
    }
    v10 = 0;
  }
LABEL_13:
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_23:
    sub_B5D69C(PassiveList, v12);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *passiveList; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleBuffData_SaveData_o *result; // x0

  if ( (byte_42EC156 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleBuffData_SaveData_TypeInfo, v5, v6, v7);
    byte_42EC156 = 1;
  }
  v8 = sub_B5D694(BattleBuffData_SaveData_TypeInfo);
  BattleBuffData_SaveData___ctor((BattleBuffData_SaveData_o *)v8, 0LL);
  passiveList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.passiveList;
  if ( !passiveList
    || (passiveList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                      passiveList,
                                                                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
        !v8)
    || (*(_QWORD *)(v8 + 16) = passiveList,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v8 + 16),
          (System_Int32_array **)passiveList,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (passiveList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.activeList) == 0LL) )
  {
    sub_B5D69C(passiveList, v9);
  }
  v17 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 passiveList,
                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  *(_QWORD *)(v8 + 24) = v17;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 24), v17, v18, v19, v20, v21, v22, v23);
  result = (BattleBuffData_SaveData_o *)v8;
  *(_DWORD *)(v8 + 32) = this->fields.addBuffOrder;
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getShowCommandBuffListActive(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  const MethodInfo *v15; // x2
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 v17; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v19; // x20
  unsigned int v20; // w22
  Il2CppClass **v21; // x8
  BattleBuffData_BuffData_o *v22; // x21
  const MethodInfo *v23; // x2
  __int64 v25; // x0

  if ( (byte_42EC123 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11, v12, v13);
    byte_42EC123 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = BattleBuffData__getActiveList(this, 1, v15);
  if ( !ActiveList )
    goto LABEL_16;
  max_length = ActiveList->max_length;
  v19 = ActiveList;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        v25 = sub_B5D6C8(ActiveList);
        sub_B5D668(v25, 0LL);
      }
      v21 = &v19->obj.klass + (int)v20;
      v22 = (BattleBuffData_BuffData_o *)v21[4];
      if ( !v22 )
        break;
      ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(
                                                      (BattleBuffData_BuffData_o *)v21[4],
                                                      8,
                                                      0LL);
      if ( ((unsigned __int8)ActiveList & 1) == 0 )
      {
        ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v22, 4096, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 )
        {
          ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData__isInvalidHide(
                                                          (BattleBuffData_o *)ActiveList,
                                                          v22,
                                                          v23);
          if ( ((unsigned __int8)ActiveList & 1) == 0 )
          {
            if ( !v14 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v14,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
        }
      }
      max_length = v19->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(ActiveList, v17);
  }
LABEL_14:
  if ( !v14 )
    goto LABEL_16;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getShowCommandBuffListPassive(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  const MethodInfo *v15; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v17; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v19; // x21
  unsigned int v20; // w23
  Il2CppClass **v21; // x8
  BattleBuffData_BuffData_o *v22; // x22
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  __int64 v26; // x0

  if ( (byte_42EC124 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11, v12, v13);
    byte_42EC124 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v15);
  if ( !PassiveList )
    goto LABEL_24;
  max_length = PassiveList->max_length;
  v19 = PassiveList;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        v26 = sub_B5D6C8(PassiveList);
        sub_B5D668(v26, 0LL);
      }
      v21 = &v19->obj.klass + (int)v20;
      v22 = (BattleBuffData_BuffData_o *)v21[4];
      if ( !v22 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(
                                                       (BattleBuffData_BuffData_o *)v21[4],
                                                       8,
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) == 0 )
      {
        PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v22, 4096, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) == 0 )
        {
          PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData__isInvalidHide(
                                                           (BattleBuffData_o *)PassiveList,
                                                           v22,
                                                           v23);
          if ( ((unsigned __int8)PassiveList & 1) == 0 )
          {
            PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v22, 512, 0LL);
            if ( ((unsigned __int8)PassiveList & 1) != 0
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v22, 0x2000, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData__checkBuffSpecialAttack(this, v22, v24),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || v22->fields.turn > 0
              || v22->fields.count > 0
              || v22->fields._IsExtendingLife_k__BackingField
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v22, 2, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v22, 4, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0) )
            {
              if ( !v14 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v14,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
          }
        }
      }
      max_length = v19->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_22;
    }
LABEL_24:
    sub_B5D69C(PassiveList, v17);
  }
LABEL_22:
  if ( !v14 )
    goto LABEL_24;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__getShowServantParam(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x21
  System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *passiveList; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x22
  System_Collections_Generic_List_BattleBuffData_ShowBuffData__o **v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v43; // x22
  BattleBuffData_o *v44; // x0
  const MethodInfo *v45; // x2

  if ( (byte_42EC11D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BattleBuffData___c__DisplayClass39_0__getShowServantParam_b__0__, v20, v21, v22);
    sub_B5D5C4(&BattleBuffData___c__DisplayClass39_0_TypeInfo, v23, v24, v25);
    byte_42EC11D = 1;
  }
  v26 = sub_B5D694(BattleBuffData___c__DisplayClass39_0_TypeInfo);
  BattleBuffData___c__DisplayClass39_0___ctor((BattleBuffData___c__DisplayClass39_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_8;
  *(_QWORD *)(v26 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  v36 = (System_Collections_Generic_List_BattleBuffData_ShowBuffData__o **)(v26 + 24);
  *(_QWORD *)(v26 + 24) = v35;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
  v43 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v43,
    (Il2CppObject *)v26,
    Method_BattleBuffData___c__DisplayClass39_0__getShowServantParam_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = (System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *)this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v43,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = (System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *)this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v43,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        BattleBuffData__CheckDummyBuffData(v44, *v36, v45),
        (passiveList = *v36) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(passiveList, v28);
  }
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)passiveList,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


System_Boolean_array *__fastcall BattleBuffData__getSkillSealSelectListFromValue(
        BattleBuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_Boolean_array *v7; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  int32_t v11; // w21
  uint16_t Chars; // w22
  double NumericValue; // d0
  int v14; // w8
  int max_length; // w9
  __int64 v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  v18 = value;
  if ( (byte_42EC176 & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, value, (_DWORD)method, v3);
    sub_B5D5C4(&char_TypeInfo, v4, v5, v6);
    byte_42EC176 = 1;
  }
  v7 = (System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, 3LL);
  v8 = System_Int32__ToString((int32_t)&v18, 0LL);
  if ( !v8 )
LABEL_18:
    sub_B5D69C(v8, v9);
  v10 = v8;
  if ( v8->fields.m_stringLength >= 1 )
  {
    v11 = 0;
    do
    {
      Chars = System_String__get_Chars(v10, v11, 0LL);
      if ( (BYTE3(char_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      NumericValue = System_Char__GetNumericValue(Chars, 0LL);
      if ( NumericValue == INFINITY )
        NumericValue = -INFINITY;
      v14 = (int)NumericValue - 1;
      if ( v14 >= 0 )
      {
        if ( !v7 )
          goto LABEL_18;
        max_length = v7->max_length;
        if ( v14 < max_length )
        {
          if ( v14 >= (unsigned int)max_length )
          {
            v17 = sub_B5D6C8(v8);
            sub_B5D668(v17, 0LL);
          }
          v7->m_Items[v14 + 4] = 1;
        }
      }
      ++v11;
    }
    while ( v11 < v10->fields.m_stringLength );
  }
  return v7;
}


System_Int32_array *__fastcall BattleBuffData__getSkillSealSelectTurnList(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Int32_array *v30; // x19
  BuffList_ActInfo_o *ActInfo; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x23
  const MethodInfo *v33; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  Il2CppObject *current; // x23
  _BOOL8 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  System_Boolean_array *SkillSealSelectListFromValue; // x0
  __int64 v43; // x1
  unsigned __int64 v44; // x8
  il2cpp_array_size_t max_length; // w10
  const MethodInfo *v46; // x5
  __int64 v48; // x0
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_42EC174 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)checkIndividualities, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v12, v13, v14);
    sub_B5D5C4(&int___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v27, v28, v29);
    byte_42EC174 = 1;
  }
  plusMinus = 0;
  memset(&v51, 0, sizeof(v51));
  v30 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(99, 0LL, 0LL);
  plusMinus = 0;
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v33);
  if ( !v32 )
    sub_B5D69C(ActiveList, v35);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v36);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
    PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v32,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v51 = v50;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v51.fields.current;
    v39 = BattleBuffData__checkIndiviuality(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v51.fields.current,
            checkIndividualities,
            &plusMinus,
            v46);
    if ( v39 )
    {
      if ( !current )
        sub_B5D69C(v39, v40);
      SkillSealSelectListFromValue = BattleBuffData__getSkillSealSelectListFromValue(
                                       (BattleBuffData_o *)v39,
                                       HIDWORD(current[1].monitor),
                                       v41);
      if ( !SkillSealSelectListFromValue )
        sub_B5D69C(0LL, v43);
      if ( (int)*(_QWORD *)&SkillSealSelectListFromValue->max_length >= 1 )
      {
        v44 = 0LL;
        max_length = *(_QWORD *)&SkillSealSelectListFromValue->max_length;
        do
        {
          if ( v44 >= max_length )
          {
            v48 = sub_B5D6C8(SkillSealSelectListFromValue);
            sub_B5D668(v48, 0LL);
          }
          if ( SkillSealSelectListFromValue->m_Items[v44 + 4] )
          {
            if ( !v30 )
              sub_B5D69C(SkillSealSelectListFromValue, v43);
            if ( v44 >= v30->max_length )
            {
              v49 = sub_B5D6C8(SkillSealSelectListFromValue);
              sub_B5D668(v49, 0LL);
            }
            v30->m_Items[v44 + 1] = HIDWORD(current[1].klass);
          }
          max_length = SkillSealSelectListFromValue->max_length;
          ++v44;
        }
        while ( (__int64)v44 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v30;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__getTDTypeChangeBuffData(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleBuffData_CheckIndividualitiesData_o *v9; // x21
  const MethodInfo *v10; // x6
  BattleBuffData_BuffData_array *BuffList_31668004; // x20
  BattleBuffData_BuffData_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  int max_length; // w8
  int v16; // w9
  int v17; // w10
  BattleBuffData_BuffData_o *v18; // x11
  int addOrder; // w12
  bool v20; // cc
  __int64 v22; // x0

  if ( (byte_42EC155 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_BuffData_TypeInfo, (_DWORD)servantData, (_DWORD)method, v3);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6, v7, v8);
    byte_42EC155 = 1;
  }
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, servantData, 0LL, 0LL, 0LL, 0LL, 0LL);
  BuffList_31668004 = BattleBuffData__getBuffList_31668004(this, 86, v9, 1, 0, 0LL, v10);
  v12 = (BattleBuffData_BuffData_o *)sub_B5D694(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor(v12, 0LL);
  if ( !BuffList_31668004 )
    goto LABEL_15;
  max_length = BuffList_31668004->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    v17 = -1;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
      {
        v22 = sub_B5D6C8(v13);
        sub_B5D668(v22, 0LL);
      }
      v18 = BuffList_31668004->m_Items[v16];
      if ( !v18 )
        break;
      addOrder = v18->fields.addOrder;
      ++v16;
      v20 = v17 < addOrder;
      if ( v17 < addOrder )
        v17 = v18->fields.addOrder;
      if ( v20 )
        v12 = v18;
      if ( v16 >= max_length )
        return v12;
    }
LABEL_15:
    sub_B5D69C(v13, v14);
  }
  return v12;
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
  const MethodInfo *v12; // [xsp+0h] [xbp-40h]

  if ( (byte_42EC170 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, act, (_DWORD)checkIndividualities, value);
    byte_42EC170 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B5D69C(ActInfo, v10);
  return BattleBuffData__confirmationBuff(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           0,
           value,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           v12);
}


bool __fastcall BattleBuffData__get_IsNoDamage(BattleBuffData_o *this, const MethodInfo *method)
{
  return this->fields.isNoDamage;
}


BuffMaster_o *__fastcall BattleBuffData__get_buffMst(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BuffMaster_o *result; // x0
  BattleServantConfConponent_o *p_tmpBuffMst; // x19
  BuffMaster_o *tmpBuffMst; // t1
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42EC128 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EC128 = 1;
  }
  tmpBuffMst = this->fields._tmpBuffMst;
  p_tmpBuffMst = (BattleServantConfConponent_o *)&this->fields._tmpBuffMst;
  result = tmpBuffMst;
  if ( !tmpBuffMst )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v12);
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
    p_tmpBuffMst->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B5D560(p_tmpBuffMst, MasterData_WarQuestSelectionMaster, v14, v15, v16, v17, v18, v19);
    return (BuffMaster_o *)p_tmpBuffMst->klass;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_42EC15C & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__,
                                 (_DWORD)buff,
                                 now,
                                 *(_QWORD *)&max);
    byte_42EC15C = 1;
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
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(this, buff);
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
  System_Int32_array *v9; // x22
  BattleBuffData_o *v12; // x24
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  const MethodInfo *v49; // x1
  BuffEntity_o *v50; // x23
  il2cpp_array_size_t v51; // w24
  il2cpp_array_size_t v52; // w25
  System_Collections_Generic_List_int__o *v53; // x21
  int32_t IndividualitieCountAbove; // w22
  int32_t IndividualitieCountBelow; // w23
  System_Int32_array *v56; // x19
  BattleBuffData_o *v57; // x20
  System_Func_T1__T2__TResult__o *v58; // x21
  System_Func_T1__T2__TResult__o *v59; // x22
  System_Int32_array *v60; // x0
  System_Int32_array *v61; // x1
  System_Int32_array *v62; // x0
  System_Int32_array *v63; // x19
  System_Int32_array *v64; // x20
  System_Func_T1__T2__TResult__o *v65; // x21
  System_Func_T1__T2__TResult__o *v66; // x22
  System_Int32_array *v68; // x0
  System_Int32_array *v69; // x19
  System_Int32_array *v70; // x20
  System_Func_T1__T2__T3__T4__TResult__o *v72; // x21
  System_Func_T1__T2__T3__T4__TResult__o *v73; // x24
  __int64 v74; // x0
  System_Int32_array *v75; // [xsp+0h] [xbp-50h] BYREF
  int32_t pal; // [xsp+Ch] [xbp-44h] BYREF

  v9 = buffIndv;
  v12 = this;
  if ( (byte_42EC160 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__,
      (_DWORD)buff,
      (_DWORD)servantIndv,
      buffIndv);
    sub_B5D5C4(&Method_System_Func_int____int____bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_int____int____bool__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_int____int____int__int__bool___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Func_int____int____int__int__bool__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_Individuality_IsMatchArray__, v25, v26, v27);
    sub_B5D5C4(&Method_Individuality_IsPartialMatchArrayCount__, v28, v29, v30);
    sub_B5D5C4(&Method_Individuality_IsPartialMatchArray__, v31, v32, v33);
    sub_B5D5C4(&int___TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740232, v43, v44, v45);
    this = (BattleBuffData_o *)sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v46, v47, v48);
    byte_42EC160 = 1;
  }
  pal = 0;
  v75 = 0LL;
  if ( !buff )
    goto LABEL_31;
  if ( buff->fields._isRemove || !BattleBuffData_BuffData__checkState(buff, 32, 0LL) )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v12, v49);
  if ( !this )
    goto LABEL_31;
  this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               buff->fields.buffId,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  pal = 0;
  v75 = 0LL;
  if ( !this )
    goto LABEL_31;
  v50 = (BuffEntity_o *)this;
  this = (BattleBuffData_o *)BuffEntity__IsExcludeUnSubStateIndiv((BuffEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    v9 = canSubStateBuffIndv;
  if ( !servantIndv || !v9 )
    goto LABEL_31;
  v51 = v9->max_length + servantIndv->max_length;
  v52 = fieldIndiv ? fieldIndiv->max_length : 0;
  v53 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870144(
    v53,
    v51 + v52,
    (const MethodInfo_3083780 *)Method_System_Collections_Generic_List_int___ctor___68740232);
  if ( !v53 )
    goto LABEL_31;
  System_Collections_Generic_List_int___AddRange(
    v53,
    (System_Collections_Generic_IEnumerable_T__o *)servantIndv,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  System_Collections_Generic_List_int___AddRange(
    v53,
    (System_Collections_Generic_IEnumerable_T__o *)v9,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( fieldIndiv )
    System_Collections_Generic_List_int___AddRange(
      v53,
      (System_Collections_Generic_IEnumerable_T__o *)fieldIndiv,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( BuffEntity__isCondition(v50, 2, &pal, 0LL) )
  {
    IndividualitieCountAbove = BuffEntity__GetIndividualitieCountAbove(v50, 0, 0LL);
    IndividualitieCountBelow = BuffEntity__GetIndividualitieCountBelow(v50, 0, 0LL);
    v56 = System_Collections_Generic_List_int___ToArray(
            v53,
            (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    this = (BattleBuffData_o *)sub_B5D5DC(int___TypeInfo, 1LL);
    if ( this )
    {
      v57 = this;
      if ( !LODWORD(this->fields.passiveList) )
      {
        v74 = sub_B5D6C8(this);
        sub_B5D668(v74, 0LL);
      }
      LODWORD(this->fields.activeList) = pal;
      if ( IndividualitieCountAbove >= 1 || IndividualitieCountBelow >= 1 )
      {
        v72 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B5D694(System_Func_int____int____int__int__bool__TypeInfo);
        System_Func_object__object__int__int__bool____ctor(
          v72,
          0LL,
          Method_Individuality_IsPartialMatchArrayCount__,
          (const MethodInfo_2C3E040 *)Method_System_Func_int____int____int__int__bool___ctor__);
        v73 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B5D694(System_Func_int____int____int__int__bool__TypeInfo);
        System_Func_object__object__int__int__bool____ctor(
          v73,
          0LL,
          Method_Individuality_IsPartialMatchArrayCount__,
          (const MethodInfo_2C3E040 *)Method_System_Func_int____int____int__int__bool___ctor__);
        return Individuality__CheckSignedIndividualitiesCount(
                 v56,
                 (System_Int32_array *)v57,
                 (System_Func_int____int____int__int__bool__o *)v72,
                 (System_Func_int____int____int__int__bool__o *)v73,
                 IndividualitieCountAbove,
                 IndividualitieCountBelow,
                 0LL);
      }
      v58 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v58,
        0LL,
        Method_Individuality_IsPartialMatchArray__,
        (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
      v59 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v59,
        0LL,
        Method_Individuality_IsPartialMatchArray__,
        (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
      v60 = v56;
      v61 = (System_Int32_array *)v57;
      return Individuality__CheckSignedIndividualities_28468572(
               v60,
               v61,
               (System_Func_int____int____bool__o *)v58,
               (System_Func_int____int____bool__o *)v59,
               0LL);
    }
LABEL_31:
    sub_B5D69C(this, buff);
  }
  if ( !BuffEntity__TryGetConditionParamArray(v50, 3, &v75, 0LL) )
  {
    if ( BuffEntity__TryGetConditionParamArray(v50, 4, &v75, 0LL) )
    {
      v68 = System_Collections_Generic_List_int___ToArray(
              v53,
              (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
      v69 = v75;
      v70 = v68;
      v58 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v58,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
      v59 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(
        v59,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
      v60 = v70;
      v61 = v69;
      return Individuality__CheckSignedIndividualities_28468572(
               v60,
               v61,
               (System_Func_int____int____bool__o *)v58,
               (System_Func_int____int____bool__o *)v59,
               0LL);
    }
    return 0;
  }
  v62 = System_Collections_Generic_List_int___ToArray(
          v53,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v63 = v75;
  v64 = v62;
  v65 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(
    v65,
    0LL,
    Method_Individuality_IsPartialMatchArray__,
    (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
  v66 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(
    v66,
    0LL,
    Method_Individuality_IsPartialMatchArray__,
    (const MethodInfo_2C395BC *)Method_System_Func_int____int____bool___ctor__);
  return Individuality__CheckSignedIndividualitiesPartialMatch(
           v64,
           v63,
           (System_Func_int____int____bool__o *)v65,
           (System_Func_int____int____bool__o *)v66,
           0LL);
}


bool __fastcall BattleBuffData__isContainConditionIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20

  v5 = this;
  if ( (byte_42EC15F & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__,
                                 (_DWORD)buff,
                                 (_DWORD)method,
                                 v3);
    byte_42EC15F = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v5, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B5D69C(this, buff);
  }
  return BuffEntity__isConditionIndividuality((BuffEntity_o *)this, 0LL);
}


bool __fastcall BattleBuffData__isContainConditionsHp(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20

  v5 = this;
  if ( (byte_42EC15E & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__,
                                 (_DWORD)buff,
                                 (_DWORD)method,
                                 v3);
    byte_42EC15E = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v5, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B5D69C(this, buff);
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
  BattleBuffData_BuffData_array *BuffList_31668004; // x0
  const MethodInfo *v15; // x5
  __int64 v17; // x0

  *buff = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)buff,
    0LL,
    (System_String_array **)checkIndividualitiesDataArray,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !checkIndividualitiesDataArray )
    sub_B5D69C(v11, v12);
  if ( !checkIndividualitiesDataArray->max_length )
  {
    v17 = sub_B5D6C8(v11);
    sub_B5D668(v17, 0LL);
  }
  BuffList_31668004 = BattleBuffData__getBuffList_31668004(
                        this,
                        126,
                        checkIndividualitiesDataArray->m_Items[0],
                        1,
                        1,
                        0LL,
                        v13);
  return BattleBuffData__checkGutsBuffSuccessfulIndividual(
           this,
           BuffList_31668004,
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
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 8, 0LL);
}


bool __fastcall BattleBuffData__isHideOtherCommand(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 512, 0LL);
}


bool __fastcall BattleBuffData__isIgnoreDefeatPoint(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BuffList_TYPE_array *BuffList_31648088; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  __int64 v9; // x0

  if ( (byte_42EC1B0 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TYPE___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC1B0 = 1;
  }
  BuffList_31648088 = (BuffList_TYPE_array *)sub_B5D5DC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !BuffList_31648088 )
    goto LABEL_7;
  if ( !BuffList_31648088->max_length )
  {
    v9 = sub_B5D6C8(BuffList_31648088);
    sub_B5D668(v9, 0LL);
  }
  BuffList_31648088->m_Items[1] = 184;
  BuffList_31648088 = (BuffList_TYPE_array *)BattleBuffData__getBuffList_31648088(this, BuffList_31648088, 0LL, 0LL, v7);
  if ( !BuffList_31648088 )
LABEL_7:
    sub_B5D69C(BuffList_31648088, v6);
  return BuffList_31648088->max_length != 0;
}


bool __fastcall BattleBuffData__isInvalidHide(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return !BattleBuffData_BuffData__checkAct(buff, 1, 0LL) && BattleBuffData_BuffData__checkState(buff, 0x8000, 0LL);
}


bool __fastcall BattleBuffData__isShow(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 4, 0LL);
}


bool __fastcall BattleBuffData__isShowDamageAndCommandCardBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 0x2000, 0LL);
}


bool __fastcall BattleBuffData__isShowDeff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 1024, 0LL);
}


bool __fastcall BattleBuffData__isShowStatusBuffOnly(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 4096, 0LL);
}


bool __fastcall BattleBuffData__isSphitBuff(BattleBuffData_o *this, int32_t *effectId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  void *PassiveList; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w24
  __int64 v15; // x22
  BuffEntity_o *v16; // x22
  int32_t v17; // w23
  int v18; // w8
  void *v19; // x21
  unsigned int v20; // w24
  __int64 v21; // x22
  int32_t v22; // w23
  __int64 v24; // x0

  if ( (byte_42EC15B & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)effectId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6, v7, v8);
    byte_42EC15B = 1;
  }
  *effectId = 0;
  PassiveList = BattleBuffData__getPassiveList(this, 1, method);
  if ( !PassiveList )
    goto LABEL_33;
  v12 = *((_DWORD *)PassiveList + 6);
  v13 = PassiveList;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
        goto LABEL_34;
      v15 = *((_QWORD *)v13 + (int)v14 + 4);
      if ( !v15 )
        goto LABEL_33;
      if ( !*(_BYTE *)(v15 + 371) && *(_BYTE *)(v15 + 34) )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v10);
        if ( !PassiveList )
          goto LABEL_33;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        *(_DWORD *)(v15 + 16),
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          goto LABEL_33;
        v16 = (BuffEntity_o *)PassiveList;
        v17 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__isSpHit(v17, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          break;
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_17;
    }
LABEL_32:
    *effectId = BuffEntity__getEffectId(v16, 0LL);
    return 1;
  }
LABEL_17:
  PassiveList = BattleBuffData__getActiveList(this, 1, v11);
  if ( !PassiveList )
LABEL_33:
    sub_B5D69C(PassiveList, v10);
  v18 = *((_DWORD *)PassiveList + 6);
  v19 = PassiveList;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v18 )
    {
      v21 = *((_QWORD *)v19 + (int)v20 + 4);
      if ( !v21 )
        goto LABEL_33;
      if ( !*(_BYTE *)(v21 + 371) && *(_BYTE *)(v21 + 34) )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v10);
        if ( !PassiveList )
          goto LABEL_33;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        *(_DWORD *)(v21 + 16),
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          goto LABEL_33;
        v16 = (BuffEntity_o *)PassiveList;
        v22 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__isSpHit(v22, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          goto LABEL_32;
      }
      v18 = *((_DWORD *)v19 + 6);
      if ( (int)++v20 >= v18 )
        return 0;
    }
LABEL_34:
    v24 = sub_B5D6C8(PassiveList);
    sub_B5D668(v24, 0LL);
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
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(this, 0LL);
  buffData->fields.isAct = 1;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__removeLinkageBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endBuffs,
        bool isCreateDummy,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  bool v14; // w22
  const MethodInfo *v15; // x4
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  System_Collections_Generic_IEnumerable_T__o *v19; // x0

  if ( (byte_42EC12F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__,
      (_DWORD)endBuffs,
      isCreateDummy,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10, v11, v12);
    byte_42EC12F = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v14 = isCreateDummy;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__RemoveLinkageBuff(this, endBuffs, v14, 1, v15);
  if ( !v13 )
    sub_B5D69C(v16, v17);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    v16,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v19 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__RemoveLinkageBuff(this, endBuffs, v14, 0, v18);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    v19,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v13;
}


void __fastcall BattleBuffData__setSaveData(
        BattleBuffData_o *this,
        BattleBuffData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *passiveList; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x22
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *activeList; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x22

  v5 = this;
  if ( (byte_42EC157 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)sv, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BattleBuffData__setSaveData_b__134_0__, v9, v10, v11);
    sub_B5D5C4(&Method_BattleBuffData__setSaveData_b__134_1__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v15, v16, v17);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__,
                                 v18,
                                 v19,
                                 v20);
    byte_42EC157 = 1;
  }
  if ( !sv )
    goto LABEL_9;
  this = (BattleBuffData_o *)v5->fields.passiveList;
  if ( !this )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)sv->fields.passive,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  this = (BattleBuffData_o *)v5->fields.activeList;
  if ( !this )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)sv->fields.active,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  passiveList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v5->fields.passiveList;
  v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v22,
    (Il2CppObject *)v5,
    Method_BattleBuffData__setSaveData_b__134_0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          passiveList,
          (System_Action_T__o *)v22,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        activeList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v5->fields.activeList,
        v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v24,
          (Il2CppObject *)v5,
          Method_BattleBuffData__setSaveData_b__134_1__,
          (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__),
        !activeList) )
  {
LABEL_9:
    sub_B5D69C(this, sv);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    activeList,
    (System_Action_T__o *)v24,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  v5->fields.addBuffOrder = sv->fields.addBuffOrder;
}


void __fastcall BattleBuffData__set_IsNoDamage(BattleBuffData_o *this, bool value, const MethodInfo *method)
{
  this->fields.isNoDamage = value;
}


void __fastcall BattleBuffData__startBattleRec(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int v19; // w19
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  int v21[2]; // [xsp+20h] [xbp-50h]
  int v22; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42EC159 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v11, v12, v13);
    byte_42EC159 = 1;
  }
  memset(&i, 0, sizeof(i));
  v22 = 0;
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v20; ; BYTE2(i.fields.current[2].klass) = 0 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v15 )
      break;
    if ( !i.fields.current )
      sub_B5D69C(v15, v16);
  }
  v21[0] = 52;
  v22 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v22 = 0;
  passiveList = this->fields.activeList;
  if ( !passiveList )
LABEL_19:
    sub_B5D69C(passiveList, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v20; ; BYTE2(i.fields.current[2].klass) = 0 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v17 )
      break;
    if ( !i.fields.current )
      sub_B5D69C(v17, v18);
  }
  v21[0] = 104;
  v19 = ++v22;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v19 )
  {
    if ( v21[v19 - 1] == 104 )
      v22 = v19 - 1;
  }
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleBuffData__subBuffFromIndividualites(
        BattleBuffData_o *this,
        System_Int32_array *individualities,
        int32_t fromHead,
        int32_t fromTail,
        bool isCreateDummy,
        bool isForceSubState,
        const MethodInfo *method)
{
  int32_t v9; // w22
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  _BOOL4 v36; // w28
  void *activeList; // x0
  _DWORD *v38; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x24
  const MethodInfo *v40; // x3
  int v41; // w8
  unsigned int v42; // w20
  int32_t v43; // w25
  bool v44; // w26
  char *v45; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x27
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x4
  XWeaponTrail_Element_o *v50; // x2
  const MethodInfo_30581D4 *v51; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x1
  const MethodInfo_3056FC0 *v53; // x2
  BattleBuffData_o *v54; // x0
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x2
  RemovedBuffInfo_o *v57; // x20
  __int64 v59; // x0

  v9 = fromHead;
  if ( (byte_42EC148 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
      (_DWORD)individualities,
      fromHead,
      *(_QWORD *)&fromTail);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Reverse__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v33, v34, v35);
    byte_42EC148 = 1;
  }
  v36 = v9 == 0 && fromTail > 0;
  if ( v36 )
  {
    activeList = this->fields.activeList;
    if ( !activeList )
      goto LABEL_34;
    System_Collections_Generic_List_MapControl_WarInfo___Reverse(
      (System_Collections_Generic_List_MapControl_WarInfo__o *)activeList,
      (const MethodInfo_3058E20 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Reverse__);
    v9 = fromTail;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_34;
  activeList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !this->fields.activeList )
    goto LABEL_34;
  v38 = activeList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v38 )
    goto LABEL_34;
  v41 = v38[6];
  if ( v41 >= 1 )
  {
    v42 = 0;
    v43 = 0;
    v44 = isForceSubState;
    do
    {
      if ( v42 >= v41 )
      {
        v59 = sub_B5D6C8(activeList);
        sub_B5D668(v59, 0LL);
      }
      v45 = (char *)&v38[2 * v42];
      v46 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)v45 + 4);
      if ( !v46 )
        goto LABEL_34;
      activeList = (void *)BattleBuffData_BuffData__RemoveBuffCond(
                             *((BattleBuffData_BuffData_o **)v45 + 4),
                             v9,
                             v43,
                             individualities,
                             v44,
                             0LL);
      if ( ((unsigned __int8)activeList & 1) != 0 )
      {
        if ( !v39 )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          v46,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        if ( v46[1].fields.targetId )
        {
          activeList = this->fields.auraBuffList;
          if ( !activeList )
            goto LABEL_34;
          if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeList,
                 (WarBoardManager_TaskList_o *)v46,
                 (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
          {
            activeList = this->fields.auraBuffList;
            if ( !activeList )
              goto LABEL_34;
            System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeList,
              (WarBoardManager_TaskList_o *)v46,
              (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          }
        }
        BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v46, v47);
        ++v43;
        if ( !isCreateDummy )
          goto LABEL_31;
        activeList = BattleBuffData__CreateDummyBuff(
                       (BattleBuffData_o *)activeList,
                       (BattleBuffData_BuffData_o *)v46,
                       v48);
        if ( !this->fields.activeList )
          goto LABEL_34;
        v49 = (EventMissionProgressRequest_Argument_ProgressData_o *)activeList;
        if ( !v36 )
        {
          activeList = this->fields.activeList;
          v52 = v49;
          v53 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          goto LABEL_30;
        }
        activeList = this->fields.activeList;
        v50 = (XWeaponTrail_Element_o *)v49;
        v51 = (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__;
      }
      else
      {
        activeList = this->fields.activeList;
        if ( !activeList )
          goto LABEL_34;
        if ( !v36 )
        {
          v52 = v46;
          v53 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
LABEL_30:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeList,
            v52,
            v53);
          goto LABEL_31;
        }
        v50 = (XWeaponTrail_Element_o *)v46;
        v51 = (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Insert(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)activeList,
        0,
        v50,
        v51);
LABEL_31:
      v41 = v38[6];
    }
    while ( (int)++v42 < v41 );
  }
  v54 = (BattleBuffData_o *)BattleBuffData__removeLinkageBuff(
                              this,
                              (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v39,
                              isCreateDummy,
                              v40);
  activeList = BattleBuffData__MakeRemoveBuffInfo(
                 v54,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v39,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v54,
                 v55);
  if ( !activeList )
LABEL_34:
    sub_B5D69C(activeList, individualities);
  v57 = (RemovedBuffInfo_o *)activeList;
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    *((System_Collections_Generic_List_BattleBuffData_BuffData__o **)activeList + 2),
    v56);
  return v57;
}


void __fastcall BattleBuffData__syncLinkageBuffChangeParam(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *linkedArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v30; // x21
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *activeList; // x21
  void *passiveList; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x22
  Il2CppObject *v34; // x23
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattleBuffData___c_c *v42; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v43; // x22
  BattleBuffData_o *v44; // x21
  struct BattleBuffData___c_StaticFields *v45; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__74_1; // x23
  Il2CppObject *v47; // x24
  struct BattleBuffData___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  WarBoardUiData_SaveData_array *v55; // x0
  const MethodInfo *v56; // x4
  __int64 v57; // x8
  BattleBuffData_BuffData_array *v58; // x22
  unsigned __int64 v59; // x24
  BattleBuffData_BuffData_o *v60; // x23
  const MethodInfo *v61; // x4
  __int64 v62; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *reflectedBuffList; // [xsp+8h] [xbp-48h] BYREF

  v5 = this;
  if ( (byte_42EC131 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__,
      (_DWORD)linkedArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___68757064, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__74_0__, v21, v22, v23);
    sub_B5D5C4(&Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__74_1__, v24, v25, v26);
    this = (BattleBuffData_o *)sub_B5D5C4(&BattleBuffData___c_TypeInfo, v27, v28, v29);
    byte_42EC131 = 1;
  }
  reflectedBuffList = 0LL;
  if ( !linkedArray )
    goto LABEL_31;
  if ( !*(_QWORD *)&linkedArray->max_length )
    return;
  v30 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)linkedArray,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___68757064);
  reflectedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v30;
  activeList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v5->fields.activeList;
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  passiveList = this[1].fields.passiveList;
  v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)passiveList + 12);
  if ( !v33 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      passiveList = BattleBuffData___c_TypeInfo->static_fields;
    }
    v34 = *(Il2CppObject **)passiveList;
    v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v33,
      v34,
      Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__74_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__74_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v33;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->__9__74_0,
      (System_Int32_array **)v33,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !activeList )
    goto LABEL_31;
  this = (BattleBuffData_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                               activeList,
                               (System_Predicate_T__o *)v33,
                               (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !this )
    goto LABEL_31;
  this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v42 = BattleBuffData___c_TypeInfo;
  v43 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v5->fields.passiveList;
  v44 = this;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v42 = BattleBuffData___c_TypeInfo;
  }
  v45 = v42->static_fields;
  _9__74_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v45->__9__74_1;
  if ( !_9__74_1 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v45 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__74_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__74_1,
      v47,
      Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__74_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v48 = BattleBuffData___c_TypeInfo->static_fields;
    v48->__9__74_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__74_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v48->__9__74_1,
      (System_Int32_array **)_9__74_1,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !v43
    || (this = (BattleBuffData_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                     v43,
                                     (System_Predicate_T__o *)_9__74_1,
                                     (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
LABEL_31:
    sub_B5D69C(this, linkedArray);
  }
  v55 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v57 = *(_QWORD *)&linkedArray->max_length;
  if ( (int)v57 >= 1 )
  {
    v58 = (BattleBuffData_BuffData_array *)v55;
    v59 = 0LL;
    do
    {
      if ( v59 >= (unsigned int)v57 )
      {
        v62 = sub_B5D6C8(v55);
        sub_B5D668(v62, 0LL);
      }
      v60 = linkedArray->m_Items[v59];
      BattleBuffData__syncLinkageBuffChangeParam_31647236(
        v5,
        v60,
        (BattleBuffData_BuffData_array *)v44,
        &reflectedBuffList,
        v56);
      BattleBuffData__syncLinkageBuffChangeParam_31647236(v5, v60, v58, &reflectedBuffList, v61);
      LODWORD(v57) = linkedArray->max_length;
      ++v59;
    }
    while ( (__int64)v59 < (int)v57 );
  }
}


void __fastcall BattleBuffData__syncLinkageBuffChangeParam_31647236(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *linkedBuff,
        BattleBuffData_BuffData_array *checkArray,
        System_Collections_Generic_List_BattleBuffData_BuffData__o **reflectedBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v8; // x22
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x25
  BattleBuffData_BuffData_o *v14; // x23
  int v15; // w24
  System_Int32_array *linkageTargetIndividualty; // x24
  System_Int32_array *LinkageIdArray; // x0
  const MethodInfo *v18; // x4
  __int64 v19; // x0

  v8 = this;
  if ( (byte_42EC132 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
      (_DWORD)linkedBuff,
      (_DWORD)checkArray,
      reflectedBuffList);
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
                                 v9,
                                 v10,
                                 v11);
    byte_42EC132 = 1;
  }
  if ( !checkArray )
    goto LABEL_17;
  v12 = *(_QWORD *)&checkArray->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v19 = sub_B5D6C8(this);
        sub_B5D668(v19, 0LL);
      }
      this = (BattleBuffData_o *)*reflectedBuffList;
      if ( !*reflectedBuffList )
        break;
      v14 = checkArray->m_Items[v13];
      this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                   (WarBoardManager_TaskList_o *)v14,
                                   (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v14 )
          break;
        this = (BattleBuffData_o *)BattleBuffData_BuffData__IsFamilyBuff(v14, 0LL);
        if ( !linkedBuff )
          break;
        v15 = (int)this;
        this = (BattleBuffData_o *)BattleBuffData_BuffData__IsFamilyBuff(linkedBuff, 0LL);
        if ( ((v15 ^ (unsigned int)this) & 1) == 0 )
        {
          linkageTargetIndividualty = linkedBuff->fields.linkageTargetIndividualty;
          LinkageIdArray = BattleBuffData_BuffData__get_LinkageIdArray(v14, 0LL);
          this = (BattleBuffData_o *)Individuality__IsPartialMatchArray(linkageTargetIndividualty, LinkageIdArray, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v14->fields.turn = linkedBuff->fields.turn;
            v14->fields.count = linkedBuff->fields.count;
            this = (BattleBuffData_o *)*reflectedBuffList;
            if ( !*reflectedBuffList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            BattleBuffData__syncLinkageBuffChangeParam_31647236(v8, v14, checkArray, reflectedBuffList, v18);
          }
        }
      }
      LODWORD(v12) = checkArray->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        return;
    }
LABEL_17:
    sub_B5D69C(this, linkedBuff);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_42EC129 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B5D5C4(
                                 &BattleBuffData_BuffData___TypeInfo,
                                 (_DWORD)logic,
                                 isEndEnemyTurn,
                                 *(_QWORD *)&svtUniqueId);
    byte_42EC129 = 1;
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
    sub_B5D69C(this, logic);
  }
  return (BattleBuffData_BuffData_array *)sub_B5D5DC(BattleBuffData_BuffData___TypeInfo, 0LL);
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
    v14 = sub_B5D6C8(PassiveList);
    sub_B5D668(v14, 0LL);
  }
LABEL_6:
  PassiveList = (BattleBuffData_o *)BattleBuffData__getActiveList(this, 1, v6);
  if ( !PassiveList )
LABEL_13:
    sub_B5D69C(PassiveList, v5);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42EC11C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleBuffData__updateAuraBuffList_b__38_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v11, v12, v13);
    byte_42EC11C = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleBuffData__updateAuraBuffList_b__38_0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !auraBuffList )
    sub_B5D69C(v16, v17);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)auraBuffList,
    (System_Predicate_T__o *)v15,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  _BYTE *BuffSuccessfulIndividual; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x6
  BattleBuffData_o *BuffList_31668004; // x0
  const MethodInfo *v19; // x2
  _BYTE *v20; // x21
  int32_t v21; // w8
  _BYTE *v22; // x22
  System_String_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w20
  bool v31; // w0
  unsigned __int64 v32; // x8
  __int64 v34; // x0

  if ( (byte_42EC153 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, maxhp, (_DWORD)motionName, checkIndividualitiesDataArray);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v12, v13, v14);
    byte_42EC153 = 1;
  }
  *motionName = 0LL;
  sub_B5D560(
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
    v34 = sub_B5D6C8(BuffSuccessfulIndividual);
    sub_B5D668(v34, 0LL);
  }
  BuffList_31668004 = (BattleBuffData_o *)BattleBuffData__getBuffList_31668004(
                                            this,
                                            126,
                                            checkIndividualitiesDataArray->m_Items[0],
                                            1,
                                            1,
                                            0LL,
                                            v17);
  BuffSuccessfulIndividual = BattleBuffData__getBuffSuccessfulIndividual(
                               BuffList_31668004,
                               (BattleBuffData_BuffData_array *)BuffList_31668004,
                               v19);
  if ( !BuffSuccessfulIndividual )
    goto LABEL_16;
  v20 = BuffSuccessfulIndividual;
  if ( BuffSuccessfulIndividual[371] )
    return 0;
  BuffSuccessfulIndividual = BattleBuffData__get_buffMst(this, v16);
  if ( !BuffSuccessfulIndividual
    || (BuffSuccessfulIndividual = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)BuffSuccessfulIndividual,
                                     *((_DWORD *)v20 + 4),
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_16:
    sub_B5D69C(BuffSuccessfulIndividual, v16);
  }
  v22 = BuffSuccessfulIndividual;
  v23 = BuffEntity__GetMotionName((BuffEntity_o *)BuffSuccessfulIndividual, 0LL);
  *motionName = v23;
  sub_B5D560((BattleServantConfConponent_o *)motionName, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  v30 = *((_DWORD *)v22 + 5);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v31 = BuffList__CheckType(104, v30, 0LL);
  v21 = *((_DWORD *)v20 + 7);
  if ( v31 )
  {
    v32 = (unsigned __int128)(v21 * (__int64)maxhp * (__int128)0x20C49BA5E353F7CFLL) >> 64;
    return (v32 >> 7) + (v32 >> 63);
  }
  return v21;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__usedProgressing(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  const MethodInfo *v25; // x2
  void *PassiveList; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v30; // x1
  System_Collections_Generic_IEnumerable_T__o *ActiveArrayNoActAfterUsed; // x0
  const MethodInfo *v32; // x2
  int v33; // w8
  void *v34; // x21
  unsigned int v35; // w24
  int32_t v36; // w23
  int32_t count; // w8
  bool v38; // vf
  int v39; // w8
  BattleBuffData_BuffData_o *v40; // x22
  __int64 v42; // x0

  if ( (byte_42EC136 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v20, v21, v22);
    byte_42EC136 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v25);
  if ( !v24 )
    goto LABEL_25;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v28);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveArrayNoActAfterUsed = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveArrayNoActAfterUsed(
                                                                               this,
                                                                               v30);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    ActiveArrayNoActAfterUsed,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !PassiveList )
    goto LABEL_25;
  v33 = *((_DWORD *)PassiveList + 6);
  v34 = PassiveList;
  if ( v33 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= v33 )
      {
        v42 = sub_B5D6C8(PassiveList);
        sub_B5D668(v42, 0LL);
      }
      v40 = (BattleBuffData_BuffData_o *)*((_QWORD *)v34 + (int)v35 + 4);
      if ( !v40 )
        break;
      if ( !v40->fields._isRemove && v40->fields.isDecide )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v27);
        if ( !PassiveList )
          break;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        v40->fields.buffId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          break;
        v36 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__CheckGutsType(v36, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) == 0 )
        {
          if ( v40->fields.isUse )
          {
            count = v40->fields.count;
            v38 = __OFSUB__(count, 1);
            v39 = count - 1;
            if ( v39 < 0 == v38 )
            {
              v40->fields.count = v39;
              PassiveList = (void *)BattleBuffData_BuffData__IslinkageTarget(v40, 0LL);
              if ( ((unsigned __int8)PassiveList & 1) != 0 )
              {
                if ( !v23 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v23,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
              }
            }
          }
          v40->fields.isUse = 0;
          v40->fields.isDecide = 0;
        }
      }
      v33 = *((_DWORD *)v34 + 6);
      if ( (int)++v35 >= v33 )
        return BattleBuffData__RemoveProgressingBuffList(
                 this,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
                 v32);
    }
LABEL_25:
    sub_B5D69C(PassiveList, v27);
  }
  return BattleBuffData__RemoveProgressingBuffList(
           this,
           (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
           v32);
}


void __fastcall BattleBuffData__usedProgressingGuts(BattleBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  const MethodInfo *v25; // x2
  void *PassiveList; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v30; // x2
  int v31; // w8
  void *v32; // x21
  unsigned int v33; // w24
  int32_t v34; // w23
  int32_t count; // w8
  bool v36; // vf
  int v37; // w8
  BattleBuffData_BuffData_o *v38; // x22
  __int64 v39; // x0

  if ( (byte_42EC138 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v20, v21, v22);
    byte_42EC138 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v25);
  if ( !v24 )
    goto LABEL_25;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v28);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    ActiveList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !PassiveList )
    goto LABEL_25;
  v31 = *((_DWORD *)PassiveList + 6);
  v32 = PassiveList;
  if ( v31 >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= v31 )
      {
        v39 = sub_B5D6C8(PassiveList);
        sub_B5D668(v39, 0LL);
      }
      v38 = (BattleBuffData_BuffData_o *)*((_QWORD *)v32 + (int)v33 + 4);
      if ( !v38 )
        break;
      if ( !v38->fields._isRemove && v38->fields.isDecide )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v27);
        if ( !PassiveList )
          break;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        v38->fields.buffId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          break;
        v34 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__CheckGutsType(v34, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
        {
          if ( v38->fields.isUse )
          {
            count = v38->fields.count;
            v36 = __OFSUB__(count, 1);
            v37 = count - 1;
            if ( v37 < 0 == v36 )
            {
              v38->fields.count = v37;
              PassiveList = (void *)BattleBuffData_BuffData__IslinkageTarget(v38, 0LL);
              if ( ((unsigned __int8)PassiveList & 1) != 0 )
              {
                if ( !v23 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v23,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
              }
            }
          }
          v38->fields.isUse = 0;
          v38->fields.isDecide = 0;
        }
      }
      v31 = *((_DWORD *)v32 + 6);
      if ( (int)++v33 >= v31 )
        goto LABEL_24;
    }
LABEL_25:
    sub_B5D69C(PassiveList, v27);
  }
LABEL_24:
  BattleBuffData__RemoveProgressingBuffList(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
    v30);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CheckIndividualitiesData_k__BackingField,
    (System_Int32_array **)checkIndividualitiesData,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._BuffIf_k__BackingField = buffIf;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_actInfo; // x19
  System_Int32_array **actInfo; // x21
  int32_t BuffAction_k__BackingField; // w20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7BED & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7BED = 1;
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
    sub_B5D560(p_actInfo, actInfo, v8, v9, v10, v11, v12, v13);
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
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)v12, (System_Int32_array **)text, v19, v20, v21, v22, v23, v24);
}


int32_t __fastcall BattleBuffData_ActValueResponse__GetClampedValue(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleBuffData_ActValueRequest_o *ActValueRequest; // x0
  BuffList_ActInfo_o *v6; // x20
  int v7; // w21
  int32_t LowerParam_k__BackingField; // w22
  int32_t v9; // w21

  if ( (byte_42E7BEE & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7BEE = 1;
  }
  ActValueRequest = this->fields.ActValueRequest;
  if ( !ActValueRequest
    || (ActValueRequest = (BattleBuffData_ActValueRequest_o *)BattleBuffData_ActValueRequest__get_ActInfo(
                                                                ActValueRequest,
                                                                method)) == 0LL )
  {
    sub_B5D69C(ActValueRequest, method);
  }
  v6 = (BuffList_ActInfo_o *)ActValueRequest;
  v7 = LODWORD(ActValueRequest->fields.actInfo) + this->fields._Value_k__BackingField;
  if ( BuffList_ActInfo__isLowerLimit((BuffList_ActInfo_o *)ActValueRequest, 0LL) )
  {
    LowerParam_k__BackingField = this->fields._LowerParam_k__BackingField;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v7 = System_Math__Max_45149472(LowerParam_k__BackingField, v7, 0LL);
  }
  v9 = v7 - v6->fields.baseValue;
  if ( !BuffList_ActInfo__isUpperLimit(v6, 0LL) )
    return v9;
  if ( this->fields._UpperParam_k__BackingField >= v9 )
    return v9;
  return this->fields._UpperParam_k__BackingField;
}


void __fastcall BattleBuffData_ActValueResponse__Merge(
        BattleBuffData_ActValueResponse_o *this,
        BattleBuffData_ActValueResponse_o *response,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_ActValueResponse_o *v5; // x20
  int32_t UpperParam_k__BackingField; // w21
  int32_t v7; // w22

  v5 = this;
  if ( (byte_42E7BEF & 1) == 0 )
  {
    this = (BattleBuffData_ActValueResponse_o *)sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)response, (_DWORD)method, v3);
    byte_42E7BEF = 1;
  }
  if ( !response )
    sub_B5D69C(this, response);
  UpperParam_k__BackingField = v5->fields._UpperParam_k__BackingField;
  v7 = response->fields._UpperParam_k__BackingField;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5->fields._UpperParam_k__BackingField = System_Math__Max_45149472(UpperParam_k__BackingField, v7, 0LL);
  v5->fields._LowerParam_k__BackingField = System_Math__Min_45104456(
                                             v5->fields._LowerParam_k__BackingField,
                                             response->fields._LowerParam_k__BackingField,
                                             0LL);
  v5->fields._Value_k__BackingField += response->fields._Value_k__BackingField;
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
  this->fields.buffRate = 1000;
  this->fields.userCommandCodeId = -1LL;
  this->fields.masterCommandCodeId = -1;
  this->fields.progressTurnCond = 1;
  *(_QWORD *)&this->fields.counterLv = 0x100000001LL;
  *(_QWORD *)&this->fields.commandAssistId = -1LL;
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
    sub_B5D69C(this, svtBuff);
  return BattleBuffData_BuffData__CheckCond_23684336(
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


bool __fastcall BattleBuffData_BuffData__CheckCond_23684336(
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
    sub_B5D69C(isCommandCardBuff, v19);
  return BattleBuffData__checkIndiviuality_31681276(
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


bool __fastcall BattleBuffData_BuffData__CheckCond_23684576(
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
  return BattleBuffData_BuffData__CheckCond_23684336(
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
    sub_B5D69C(this, 0LL);
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


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData_BuffData__GetIndividualty(
        BattleBuffData_BuffData_o *this,
        bool IsIncludeIgnoreIndividuality,
        bool isIgnoreIndivUnreleaseable,
        bool isAiCheck,
        const MethodInfo *method)
{
  char v9; // w1
  char v10; // w2
  __int64 v11; // x3
  char v12; // w1
  char v13; // w2
  __int64 v14; // x3
  char v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int32_t state; // w8
  System_Int32_array *v19; // x20
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v24; // x21
  struct System_Int32_array *addIndividualty; // x8
  __int64 v26; // x8

  if ( (byte_42E7BF1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_BuffMaster___,
      IsIncludeIgnoreIndividuality,
      isIgnoreIndivUnreleaseable,
      isAiCheck);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&int___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E7BF1 = 1;
  }
  state = this->fields.state;
  if ( (state & 0x10000) != 0 && !IsIncludeIgnoreIndividuality )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  if ( isIgnoreIndivUnreleaseable )
  {
    if ( isAiCheck )
    {
      if ( (state & 0x80000) != 0 )
        return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
    }
    else if ( (state & 0x880040) != 0 )
    {
      return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
    }
  }
  if ( !this->fields._isRemove )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   this->fields.buffId,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !Entity )
          return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
        v24 = Entity;
        Instance = (DataManager_o *)BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)this->fields.addIndividualty,
                                      0LL);
        v19 = *(System_Int32_array **)&v24->fields.bannerId;
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v19;
        if ( v19 )
        {
          addIndividualty = this->fields.addIndividualty;
          if ( addIndividualty )
          {
            Instance = (DataManager_o *)sub_B5D5DC(int___TypeInfo, addIndividualty->max_length + v19->max_length);
            if ( *(_QWORD *)&v24->fields.bannerId )
            {
              v19 = (System_Int32_array *)Instance;
              System_Array__CopyTo(*(System_Array_o **)&v24->fields.bannerId, (System_Array_o *)Instance, 0, 0LL);
              v26 = *(_QWORD *)&v24->fields.bannerId;
              if ( v26 )
              {
                Instance = (DataManager_o *)this->fields.addIndividualty;
                if ( Instance )
                {
                  System_Array__CopyTo((System_Array_o *)Instance, (System_Array_o *)v19, *(_DWORD *)(v26 + 24), 0LL);
                  return v19;
                }
              }
            }
          }
        }
      }
    }
    sub_B5D69C(Instance, v22);
  }
  return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1

  if ( (byte_42E7BF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8, v9, v10);
    byte_42E7BF6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          this->fields.buffId,
                                                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BuffMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1

  if ( (byte_42E7BF7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E7BF7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  return BuffMaster__GetBuffType(Master_WarQuestSelectionMaster, this->fields.buffId, -1, 0LL) == 183;
}


bool __fastcall BattleBuffData_BuffData__IslinkageTarget(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.linkageTargetIndividualty != 0LL;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x21
  bool v16; // w0
  int32_t state; // w8
  int v18; // w9
  unsigned int v19; // w8

  if ( (byte_42E7BF5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleServantData____68810264, (_DWORD)servantArray, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleBuffData_BuffData__SetBuffNoActState_b__133_0__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v12, v13, v14);
    byte_42E7BF5 = 1;
  }
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleBuffData_BuffData__SetBuffNoActState_b__133_0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
  v16 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)servantArray,
          (System_Func_T__bool__o *)v15,
          (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_BattleServantData____68810264);
  state = this->fields.state;
  v18 = state | 0x200000;
  v19 = state & 0xFFDFFFFF;
  if ( !v16 )
    v19 = v18;
  this->fields.state = v19;
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


bool __fastcall BattleBuffData_BuffData___SetBuffNoActState_b__133_0(
        BattleBuffData_BuffData_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, optBuff);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BuffEntity_o *cachedEntity; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E7BF0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8, v9, v10);
    byte_42E7BF0 = 1;
  }
  cachedEntity = this->fields.cachedEntity;
  if ( !cachedEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v13);
    cachedEntity = (struct BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            Master_WarQuestSelectionMaster,
                                            this->fields.buffId,
                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this->fields.cachedEntity = cachedEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.cachedEntity,
      (System_Int32_array **)cachedEntity,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return cachedEntity;
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
  int v2; // w2
  __int64 v3; // x3
  _DWORD *klass; // x8
  BattleServantConfConponent_o *p_servantCardIdsIndexArray; // x19
  struct System_Int32_array *servantCardIdsIndexArray; // t1
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E7BF4 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7BF4 = 1;
  }
  servantCardIdsIndexArray = this->fields.servantCardIdsIndexArray;
  p_servantCardIdsIndexArray = (BattleServantConfConponent_o *)&this->fields.servantCardIdsIndexArray;
  klass = servantCardIdsIndexArray;
  if ( !servantCardIdsIndexArray )
  {
    v8 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
    p_servantCardIdsIndexArray->klass = (BattleServantConfConponent_c *)v8;
    sub_B5D560(p_servantCardIdsIndexArray, v8, v9, v10, v11, v12, v13, v14);
    klass = p_servantCardIdsIndexArray->klass;
    if ( !p_servantCardIdsIndexArray->klass )
      sub_B5D69C(v15, v16);
  }
  return klass[6] != 0;
}


bool __fastcall BattleBuffData_BuffData__isCommandCodeBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.userCommandCodeId > 0;
}


bool __fastcall BattleBuffData_BuffData__isEffectBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarEntity_o *Entity; // x0
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E7BF2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E7BF2 = 1;
  }
  if ( this->fields._isRemove )
  {
    LOBYTE(Entity) = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v13);
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               this->fields.buffId,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  System_Int32_array *servantCardIdsIndexArray; // x19
  System_Func_int__bool__o *v29; // x20

  if ( (byte_42E7BF3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)command, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleBuffData_BuffData___c__DisplayClass128_0__isEnableCommandCardBuff_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattleBuffData_BuffData___c__DisplayClass128_0_TypeInfo, v15, v16, v17);
    byte_42E7BF3 = 1;
  }
  v18 = sub_B5D694(BattleBuffData_BuffData___c__DisplayClass128_0_TypeInfo);
  BattleBuffData_BuffData___c__DisplayClass128_0___ctor((BattleBuffData_BuffData___c__DisplayClass128_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = command;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)command, v21, v22, v23, v24, v25, v26);
  if ( !BattleBuffData_BuffData__isCommandCardBuff(this, v27) )
    return 0;
  servantCardIdsIndexArray = this->fields.servantCardIdsIndexArray;
  v29 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v29,
    (Il2CppObject *)v18,
    Method_BattleBuffData_BuffData___c__DisplayClass128_0__isEnableCommandCardBuff_b__0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__28142236(
           servantCardIdsIndexArray,
           (System_Func_T__bool__o *)v29,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
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
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
    this->fields.state |= dword_32A2140[v3];
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


void __fastcall BattleBuffData_BuffData___c__DisplayClass128_0___ctor(
        BattleBuffData_BuffData___c__DisplayClass128_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData_BuffData___c__DisplayClass128_0___isEnableCommandCardBuff_b__0(
        BattleBuffData_BuffData___c__DisplayClass128_0_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleCommandData_o *command; // x8

  command = this->fields.command;
  if ( !command )
    sub_B5D69C(this, index);
  return command->fields.servantCardIdsIndex == index;
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
    sub_B5D69C(v16, v23);
  this->fields._buffIf_k__BackingField = v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._buffIf_k__BackingField,
    (System_Int32_array **)v23,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall BattleBuffData_CheckIndividualitiesData___ctor_23687408(
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
    sub_B5D560(
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
    sub_B5D560(
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
      sub_B5D69C(v33, v32);
  }
  this->fields._buffIf_k__BackingField = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._buffIf_k__BackingField,
    (System_Int32_array **)v32,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__InitializeIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandSelf,
        BattleCommandData_o *commandOpponent,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
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
  struct System_Int32_array *v27; // x1
  struct System_Int32_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Int32_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Int32_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct System_Int32_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  BattleServantData_o *v56; // x0
  BattleCommandData_o *v57; // x1
  struct System_Int32_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_42E7BF8 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)self, (_DWORD)opponent, commandSelf);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    byte_42E7BF8 = 1;
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
      ConcatServantAndBuffIndividualityies = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
    v27 = ConcatServantAndBuffIndividualityies;
    if ( this )
    {
      this->fields._selfIndividuality_k__BackingField = ConcatServantAndBuffIndividualityies;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields,
        (System_Int32_array **)ConcatServantAndBuffIndividualityies,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      if ( opponent )
        v35 = BattleServantData__getConcatServantAndBuffIndividualityies(opponent, 0LL, 0, 0, 0, 0LL);
      else
        v35 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      this->fields._opponentIndividuality_k__BackingField = v35;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._opponentIndividuality_k__BackingField,
        (System_Int32_array **)v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      if ( self )
        v49 = BattleServantData__getConcatServantAndBuffIndividualityies(self, 0LL, 0, 1, 0, 0LL);
      else
        v49 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      this->fields._selfIndividualityCanRelease_k__BackingField = v49;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._selfIndividualityCanRelease_k__BackingField,
        (System_Int32_array **)v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      if ( opponent )
      {
        v56 = opponent;
        v57 = 0LL;
        goto LABEL_31;
      }
LABEL_32:
      v58 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      goto LABEL_33;
    }
LABEL_34:
    sub_B5D69C(ConcatServantAndBuffIndividualityies, v27);
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
    ConcatServantAndBuffIndividualityies = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  v27 = ConcatServantAndBuffIndividualityies;
  if ( !this )
    goto LABEL_34;
  this->fields._selfIndividuality_k__BackingField = ConcatServantAndBuffIndividualityies;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)ConcatServantAndBuffIndividualityies,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( opponent )
    v28 = BattleServantData__getConcatServantAndBuffIndividualityies(opponent, commandOpponent, 0, 0, 0, 0LL);
  else
    v28 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields._opponentIndividuality_k__BackingField = v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._opponentIndividuality_k__BackingField,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( self )
    v42 = BattleServantData__getConcatServantAndBuffIndividualityies(self, commandSelf, 0, 1, 0, 0LL);
  else
    v42 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields._selfIndividualityCanRelease_k__BackingField = v42;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._selfIndividualityCanRelease_k__BackingField,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( !opponent )
    goto LABEL_32;
  v56 = opponent;
  v57 = commandOpponent;
LABEL_31:
  v58 = BattleServantData__getConcatServantAndBuffIndividualityies(v56, v57, 0, 1, 0, 0LL);
LABEL_33:
  this->fields._opponentIndividualityCanRemove_k__BackingField = v58;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._opponentIndividualityCanRemove_k__BackingField,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
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

  if ( (byte_42E7BFA & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)opponent, (_DWORD)commandOpponent, method);
    byte_42E7BFA = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = (System_Int32_array *)BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  if ( ((unsigned __int8)IsConstantMasterIndvAddBuffActive & 1) != 0 )
  {
    if ( opponent )
    {
      IsConstantMasterIndvAddBuffActive = BattleServantData__getConcatSvtIndividualities(opponent, commandOpponent, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    v14 = 0LL;
    if ( this )
      goto LABEL_12;
LABEL_14:
    sub_B5D69C(IsConstantMasterIndvAddBuffActive, v14);
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
  sub_B5D560(
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

  if ( (byte_42E7BF9 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)self, (_DWORD)commandSelf, method);
    byte_42E7BF9 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = (System_Int32_array *)BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  if ( ((unsigned __int8)IsConstantMasterIndvAddBuffActive & 1) != 0 )
  {
    if ( self )
    {
      IsConstantMasterIndvAddBuffActive = BattleServantData__getConcatSvtIndividualities(self, commandSelf, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    v14 = 0LL;
    if ( this )
      goto LABEL_12;
LABEL_14:
    sub_B5D69C(IsConstantMasterIndvAddBuffActive, v14);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)selfSvt, v9, v10, v11, v12, v13, v14);
  this->fields._TargetSvt_k__BackingField = targetSvt;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._TargetSvt_k__BackingField,
    (System_Int32_array **)targetSvt,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.checkActs = actions;
  sub_B5D560(
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BattleServantData_o *SelfSvt_k__BackingField; // x22
  BattleServantData_o *TargetSvt_k__BackingField; // x23
  BattleBuffData_CheckIndividualitiesData_o *v39; // x24
  const MethodInfo *v40; // x6
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct BuffList_ACTION_array *checkActs; // x19
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v48; // x20

  if ( (byte_42E7BFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BuffList_ACTION___, (_DWORD)buff, (_DWORD)command, method);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_BuffList_ACTION__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_BuffList_ACTION__bool__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0__IsInvoke_b__0__, v16, v17, v18);
    sub_B5D5C4(&BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_TypeInfo, v19, v20, v21);
    byte_42E7BFB = 1;
  }
  v22 = sub_B5D694(BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_TypeInfo);
  BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0___ctor(
    (BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *)v22,
    0LL);
  if ( !v22 )
    sub_B5D69C(v23, v24);
  *(_QWORD *)(v22 + 16) = buff;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)buff, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  SelfSvt_k__BackingField = this->fields._SelfSvt_k__BackingField;
  TargetSvt_k__BackingField = this->fields._TargetSvt_k__BackingField;
  v39 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(
    v39,
    SelfSvt_k__BackingField,
    TargetSvt_k__BackingField,
    command,
    0LL,
    0LL,
    v40);
  *(_QWORD *)(v22 + 32) = v39;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 32), (System_Int32_array **)v39, v41, v42, v43, v44, v45, v46);
  checkActs = this->fields.checkActs;
  v48 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B5D694(System_Func_BuffList_ACTION__bool__TypeInfo);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v48,
    (Il2CppObject *)v22,
    Method_BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0__IsInvoke_b__0__,
    (const MethodInfo_2C2A838 *)Method_System_Func_BuffList_ACTION__bool___ctor__);
  return BasicHelper__Any_ListViewSort_FilterCategoryKind_(
           (ListViewSort_FilterCategoryKind_array *)checkActs,
           (System_Func_T__bool__o *)v48,
           (const MethodInfo_1AD6BEC *)Method_BasicHelper_Any_BuffList_ACTION___);
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
  sub_B5D560(
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
  sub_B5D560(
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
  __int64 v3; // x3
  BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *v5; // x19
  struct BattleBuffData_CheckInvokeBuff_o *_4__this; // x8
  struct BattleServantData_o *SelfSvt_k__BackingField; // x9
  BattleBuffData_BuffData_o *buff; // x21
  BattleBuffData_o *buffData; // x22
  BattleServantData_o *TargetSvt_k__BackingField; // x23

  v5 = this;
  if ( (byte_42E6024 & 1) == 0 )
  {
    this = (BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *)sub_B5D5C4(
                                                                       &BuffList_TypeInfo,
                                                                       act,
                                                                       (_DWORD)method,
                                                                       v3);
    byte_42E6024 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  SelfSvt_k__BackingField = _4__this->fields._SelfSvt_k__BackingField;
  if ( !SelfSvt_k__BackingField )
    goto LABEL_10;
  buff = v5->fields.buff;
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
    sub_B5D69C(this, *(_QWORD *)&act);
  return BattleBuffData_BuffData__CheckCond(
           buff,
           buffData,
           (BuffList_ActInfo_o *)this,
           v5->fields.checkIndividualities,
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


void __fastcall BattleBuffData_FieldChangeData___ctor_23688116(
        BattleBuffData_FieldChangeData_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  struct System_String_o *BgmFileName; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Int32_array *ParamArray; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E7BFC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BgmMaster___, (_DWORD)baseVals, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E7BFC = 1;
  }
  this->fields.buffUniqueId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseVals )
    goto LABEL_9;
  this->fields.priority = DataVals__GetParam(baseVals, 111, 0, 0LL);
  this->fields.bgId = DataVals__GetParam(baseVals, 104, 0, 0LL);
  this->fields.bgType = DataVals__GetParam(baseVals, 105, 0, 0LL);
  this->fields.bgmId = DataVals__GetParam(baseVals, 106, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_9:
    sub_B5D69C(Master_WarQuestSelectionMaster, v13);
  BgmFileName = BgmMaster__GetBgmFileName(
                  Master_WarQuestSelectionMaster,
                  this->fields.bgmId,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
  this->fields.bgmName = BgmFileName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bgmName,
    (System_Int32_array **)BgmFileName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.isAllowSubBgmPlaying = DataVals__isParam(baseVals, 100, 0LL);
  ParamArray = DataVals__GetParamArray(baseVals, 103, 0LL);
  this->fields.individuality = ParamArray;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.individuality,
    (System_Int32_array **)ParamArray,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.isTakeOverNextWave = DataVals__GetParam(baseVals, 108, 0, 0LL) > 0;
}


void __fastcall BattleBuffData_IntervalData___ctor(BattleBuffData_IntervalData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_IntervalData___ctor_23688556(
        BattleBuffData_IntervalData_o *this,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseVal )
    sub_B5D69C(v5, v6);
  this->fields.baseTurn = DataVals__GetParam(baseVal, 131, 0, 0LL);
  this->fields.baseCount = DataVals__GetParam(baseVal, 132, 0, 0LL);
}


void __fastcall BattleBuffData_IntervalData__DecrementCount(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.intervalCount = UnityEngine_Mathf__Max_41629432(0, this->fields.intervalCount - 1, 0LL);
}


void __fastcall BattleBuffData_IntervalData__DecrementTurn(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.intervalTurn = UnityEngine_Mathf__Max_41629432(0, this->fields.intervalTurn - 1, 0LL);
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
    v7 = UnityEngine_Mathf__Max_41629432(0, intervalCount - 1, 0LL);
    this->fields.intervalCount = v7;
    if ( !buff )
      sub_B5D69C(v7, v8);
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
    sub_B5D69C(this, 0LL);
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


void __fastcall BattleBuffData_ShowBuffData___ctor_23679032(
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

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !buff )
    sub_B5D69C(v5, v6);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._IntervalData_k__BackingField,
    (System_Int32_array **)v17,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


BattleBuffData_IntervalData_o *__fastcall BattleBuffData_ShowBuffData__get_IntervalData(
        BattleBuffData_ShowBuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._IntervalData_k__BackingField;
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
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)v4, (System_Int32_array **)buffData, v5, v6, v7, v8, v9, v10);
  LODWORD(v4->monitor) = 0;
  BYTE4(v4->monitor) = 0;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData__GetLogicRankUpCount(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v21; // x21
  const MethodInfo *v22; // x6
  __int64 v23; // x0
  __int64 v24; // x1
  BattleBuffData_BuffData_array *BuffList_31668004; // x19
  const MethodInfo *v26; // x3
  BattleBuffData_SkillRankChangeData___c_c *v27; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__11_0; // x20
  Il2CppObject *v30; // x21
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E7BFE & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleBuffData_SkillRankChangeData___c__GetLogicRankUpCount_b__11_0__, v14, v15, v16);
    sub_B5D5C4(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v17, v18, v19);
    byte_42E7BFE = 1;
  }
  buffData = this->fields.buffData;
  v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v21, 0LL, 0LL, 0LL, 0LL, 0LL, v22);
  if ( !buffData )
    sub_B5D69C(v23, v24);
  BuffList_31668004 = BattleBuffData__getBuffList_31668004(buffData, 92, v21, 0, 0, 0LL, 0LL);
  BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, BuffList_31668004, 1, v26);
  v27 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
    v27 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__11_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__11_0,
      v30,
      Method_BattleBuffData_SkillRankChangeData___c__GetLogicRankUpCount_b__11_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v31 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    v31->__9__11_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__11_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v31->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BuffList_31668004,
           (System_Func_TSource__int__o *)_9__11_0,
           (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData_SkillRankChangeData__RevertUnusedBuff(
        BattleBuffData_SkillRankChangeData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        bool isUnused,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *v19; // x22
  BattleBuffData_o *buffData; // x0
  __int64 v21; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x21

  if ( (byte_42E7BFF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)buffArray, isUnused, method);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v10, v11, v12);
    sub_B5D5C4(&Method_BattleBuffData_SkillRankChangeData___c__DisplayClass12_0__RevertUnusedBuff_b__0__, v13, v14, v15);
    sub_B5D5C4(&BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_TypeInfo, v16, v17, v18);
    byte_42E7BFF = 1;
  }
  v19 = (BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *)sub_B5D694(BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_TypeInfo);
  BattleBuffData_SkillRankChangeData___c__DisplayClass12_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_8;
  v19->fields.isUnused = isUnused;
  v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v22,
    (Il2CppObject *)v19,
    Method_BattleBuffData_SkillRankChangeData___c__DisplayClass12_0__RevertUnusedBuff_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v22,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  if ( v19->fields.isUnused )
  {
    buffData = this->fields.buffData;
    if ( buffData )
    {
      BattleBuffData__ResetTargetUseBuff(buffData, 154, 0, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(buffData, v21);
  }
}


void __fastcall BattleBuffData_SkillRankChangeData__Update(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v21; // x21
  const MethodInfo *v22; // x6
  __int64 v23; // x0
  __int64 v24; // x1
  BattleBuffData_BuffData_array *FixBuffArray; // x20
  const MethodInfo *v26; // x3
  BattleBuffData_SkillRankChangeData___c_c *v27; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v30; // x22
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E7BFD & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleBuffData_SkillRankChangeData___c__Update_b__10_0__, v14, v15, v16);
    sub_B5D5C4(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v17, v18, v19);
    byte_42E7BFD = 1;
  }
  buffData = this->fields.buffData;
  v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v21, 0LL, 0LL, 0LL, 0LL, 0LL, v22);
  if ( !buffData )
    sub_B5D69C(v23, v24);
  FixBuffArray = BattleBuffData__GetFixBuffArray(buffData, 92, v21, 0, 0LL);
  BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, FixBuffArray, 1, v26);
  v27 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
    v27 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__10_0,
      v30,
      Method_BattleBuffData_SkillRankChangeData___c__Update_b__10_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v31 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    v31->__9__10_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__10_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v31->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  this->fields._RankUpCount_k__BackingField = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)FixBuffArray,
                                                (System_Func_TSource__int__o *)_9__10_0,
                                                (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v21; // x21
  const MethodInfo *v22; // x6
  BattleBuffData_o *FixBuffArray; // x0
  BattleBuffData_BuffData_array *v24; // x1
  BattleBuffData_BuffData_array *v25; // x20
  BattleBuffData_SkillRankChangeData___c_c *v26; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__13_0; // x21
  Il2CppObject *v29; // x22
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BattleBuffData_BuffData_array *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v38; // x3

  if ( (byte_42E7C00 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_BattleBuffData_BuffData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleBuffData_SkillRankChangeData___c__UseBuff_b__13_0__, v14, v15, v16);
    sub_B5D5C4(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v17, v18, v19);
    byte_42E7C00 = 1;
  }
  buffData = this->fields.buffData;
  v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v21, 0LL, 0LL, 0LL, 0LL, 0LL, v22);
  if ( !buffData )
    goto LABEL_20;
  FixBuffArray = (BattleBuffData_o *)BattleBuffData__GetFixBuffArray(buffData, 92, v21, 0, 0LL);
  if ( !FixBuffArray )
    goto LABEL_20;
  v25 = (BattleBuffData_BuffData_array *)FixBuffArray;
  if ( FixBuffArray->fields.passiveList )
  {
    v26 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
      v26 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__13_0,
        v29,
        Method_BattleBuffData_SkillRankChangeData___c__UseBuff_b__13_0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v30 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
      v30->__9__13_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__13_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v30->__9__13_0,
        (System_Int32_array **)_9__13_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    All_BattleBuffData_BuffData = System_Array__FindAll_BattleBuffData_BuffData_(
                                    v25,
                                    (System_Predicate_T__o *)_9__13_0,
                                    (const MethodInfo_1FC072C *)Method_System_Array_FindAll_BattleBuffData_BuffData___);
    if ( !All_BattleBuffData_BuffData )
      goto LABEL_18;
    v24 = All_BattleBuffData_BuffData;
    if ( !*(_QWORD *)&All_BattleBuffData_BuffData->max_length )
      goto LABEL_18;
    FixBuffArray = this->fields.buffData;
    if ( FixBuffArray )
    {
      BattleBuffData__UsedProgressing(FixBuffArray, v24, 0LL);
LABEL_18:
      BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, v25, 0, v38);
      return;
    }
LABEL_20:
    sub_B5D69C(FixBuffArray, v24);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x0

  if ( (byte_42E6025 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v1, v2, v3);
    byte_42E6025 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleBuffData_SkillRankChangeData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleBuffData_SkillRankChangeData___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return buff->fields.param;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData___c___Update_b__10_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return buff->fields.param;
}


bool __fastcall BattleBuffData_SkillRankChangeData___c___UseBuff_b__13_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  BattleBuffData_BuffData__RevertUnused(buff, this->fields.isUnused, 0LL);
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__239___ctor(
        BattleBuffData__AllBuffEnumerable_d__239_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffEnumerable_d__239__MoveNext(
        BattleBuffData__AllBuffEnumerable_d__239_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleBuffData__AllBuffEnumerable_d__239_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  struct BattleBuffData_o *_4__this; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *activeList; // x0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap1; // x20
  __int128 v15; // q0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **current; // x1
  bool result; // w0
  __int64 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *passiveList; // x0
  __int128 v34; // q0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+38h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42E7BE7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v5, v6, v7);
    this = (BattleBuffData__AllBuffEnumerable_d__239_o *)sub_B5D5C4(
                                                           &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                           v8,
                                                           v9,
                                                           v10);
    byte_42E7BE7 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__7__wrap1 = &v4->fields.__7__wrap1;
  }
  else
  {
    _4__this = v4->fields.__4__this;
    if ( _1__state == 1 )
    {
      p__7__wrap1 = &v4->fields.__7__wrap1;
    }
    else
    {
      if ( _1__state )
        return 0;
      v4->fields.__1__state = -1;
      if ( !_4__this )
        sub_B5D69C(this, method);
      activeList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.activeList;
      if ( !activeList )
        sub_B5D69C(0LL, method);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v49,
        activeList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      p__7__wrap1 = &v4->fields.__7__wrap1;
      v15 = *(_OWORD *)&v49.fields.list;
      v4->fields.__7__wrap1.fields.current = (struct BattleBuffData_BuffData_o *)v49.fields.current;
      *(_OWORD *)&v4->fields.__7__wrap1.fields.list = v15;
      sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__7__wrap1, 0LL, v16, v17, v18, v19, v20, v21);
    }
    v4->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
           (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
    {
      current = (System_Int32_array **)v4->fields.__7__wrap1.fields.current;
      v4->fields.__2__current = (struct BattleBuffData_BuffData_o *)current;
      sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, current, v23, v24, v25, v26, v27, v28);
      result = 1;
      v4->fields.__1__state = 1;
      return result;
    }
    BattleBuffData__AllBuffEnumerable_d__239____m__Finally1(v4, v22);
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
    if ( !_4__this )
      sub_B5D69C(v31, v32);
    passiveList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.passiveList;
    if ( !passiveList )
      sub_B5D69C(0LL, v32);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v49,
      passiveList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v34 = *(_OWORD *)&v49.fields.list;
    p__7__wrap1->fields.current = (struct BattleBuffData_BuffData_o *)v49.fields.current;
    *(_OWORD *)&p__7__wrap1->fields.list = v34;
    sub_B5D560((BattleServantConfConponent_o *)p__7__wrap1, 0LL, v35, v36, v37, v38, v39, v40);
  }
  v4->fields.__1__state = -4;
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    v48 = (System_Int32_array **)v4->fields.__7__wrap1.fields.current;
    v4->fields.__2__current = (struct BattleBuffData_BuffData_o *)v48;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, v48, v42, v43, v44, v45, v46, v47);
    v4->fields.__1__state = 2;
    return 1;
  }
  else
  {
    BattleBuffData__AllBuffEnumerable_d__239____m__Finally2(v4, v41);
    result = 0;
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffEnumerable_d__239__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffEnumerable_d__239_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_42E7BEA & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData__AllBuffEnumerable_d__239_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7BEA = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_B5D694(BattleBuffData__AllBuffEnumerable_d__239_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v6 + 32) = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), _4__this, v9, v10, v11, v12, v13, v14);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v6;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffEnumerable_d__239__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffEnumerable_d__239_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffEnumerable_d__239__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffEnumerable_d__239_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleBuffData__AllBuffEnumerable_d__239_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffEnumerable_d__239__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffEnumerable_d__239_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__239__System_IDisposable_Dispose(
        BattleBuffData__AllBuffEnumerable_d__239_o *this,
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
      BattleBuffData__AllBuffEnumerable_d__239____m__Finally2(this, method);
      if ( v4 )
      {
        if ( v3[v2] == 65 )
          v4 = v2;
      }
      break;
    case 0xFFFFFFFD:
    case 1:
      BattleBuffData__AllBuffEnumerable_d__239____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__239____m__Finally1(
        BattleBuffData__AllBuffEnumerable_d__239_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7BE8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7BE8 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__239____m__Finally2(
        BattleBuffData__AllBuffEnumerable_d__239_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7BE9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7BE9 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__240___ctor(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__240__MoveNext(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_o *this,
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
      sub_B5D69C(this, method);
    ActiveList = BattleBuffData__getActiveList(_4__this, this->fields.isCheckInterval, 0LL);
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    this->fields.__7__wrap1 = ActiveList;
    sub_B5D560(
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
      sub_B5D560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v23, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_21:
    v39 = sub_B5D6C8(this);
    sub_B5D668(v39, 0LL);
  }
  p__7__wrap1->klass = 0LL;
  sub_B5D560(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_20;
  PassiveList = BattleBuffData__getPassiveList(_4__this, this->fields.isCheckInterval, 0LL);
  this->fields.__7__wrap1 = PassiveList;
  sub_B5D560(p__7__wrap1, (System_Int32_array **)PassiveList, v29, v30, v31, v32, v33, v34);
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
    sub_B5D560(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
    return 0;
  }
  if ( v27 >= (unsigned int)v36 )
    goto LABEL_21;
  v37 = (struct BattleBuffData_BuffData_o *)*((_QWORD *)&v35->_1.byval_arg.data + v27);
  this->fields.__2__current = v37;
  v38 = &this->fields.__2__current;
  sub_B5D560((BattleServantConfConponent_o *)v38, (System_Int32_array **)v37, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)v38 - 2) = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__240__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_o *v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **_4__this; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_42E7BEC & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7BEC = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_o *)sub_B5D694(BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v6->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v6->fields.__4__this = (struct BattleBuffData_o *)_4__this;
    sub_B5D560((BattleServantConfConponent_o *)&v6->fields.__4__this, _4__this, v9, v10, v11, v12, v13, v14);
  }
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v6;
  v6->fields.isCheckInterval = this->fields.__3__isCheckInterval;
  return result;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__240__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffValidEnumerablePriorActive_d__240__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__240__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__240__System_IDisposable_Dispose(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__240_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBuffData__AllBuffValidEnumerable_d__241___ctor(
        BattleBuffData__AllBuffValidEnumerable_d__241_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffValidEnumerable_d__241__MoveNext(
        BattleBuffData__AllBuffValidEnumerable_d__241_o *this,
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
      sub_B5D69C(this, method);
    PassiveList = BattleBuffData__getPassiveList(_4__this, this->fields.isCheckInterval, 0LL);
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    this->fields.__7__wrap1 = PassiveList;
    sub_B5D560(
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
      sub_B5D560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v23, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_21:
    v39 = sub_B5D6C8(this);
    sub_B5D668(v39, 0LL);
  }
  p__7__wrap1->klass = 0LL;
  sub_B5D560(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_20;
  ActiveList = BattleBuffData__getActiveList(_4__this, this->fields.isCheckInterval, 0LL);
  this->fields.__7__wrap1 = ActiveList;
  sub_B5D560(p__7__wrap1, (System_Int32_array **)ActiveList, v29, v30, v31, v32, v33, v34);
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
    sub_B5D560(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
    return 0;
  }
  if ( v27 >= (unsigned int)v36 )
    goto LABEL_21;
  v37 = (struct BattleBuffData_BuffData_o *)*((_QWORD *)&v35->_1.byval_arg.data + v27);
  this->fields.__2__current = v37;
  v38 = &this->fields.__2__current;
  sub_B5D560((BattleServantConfConponent_o *)v38, (System_Int32_array **)v37, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)v38 - 2) = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerable_d__241__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffValidEnumerable_d__241_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  BattleBuffData__AllBuffValidEnumerable_d__241_o *v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **_4__this; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_42E7BEB & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData__AllBuffValidEnumerable_d__241_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7BEB = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (BattleBuffData__AllBuffValidEnumerable_d__241_o *)sub_B5D694(BattleBuffData__AllBuffValidEnumerable_d__241_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v6->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v6->fields.__4__this = (struct BattleBuffData_o *)_4__this;
    sub_B5D560((BattleServantConfConponent_o *)&v6->fields.__4__this, _4__this, v9, v10, v11, v12, v13, v14);
  }
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v6;
  v6->fields.isCheckInterval = this->fields.__3__isCheckInterval;
  return result;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffValidEnumerable_d__241__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffValidEnumerable_d__241_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffValidEnumerable_d__241__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffValidEnumerable_d__241_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleBuffData__AllBuffValidEnumerable_d__241_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffValidEnumerable_d__241__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffValidEnumerable_d__241_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffValidEnumerable_d__241__System_IDisposable_Dispose(
        BattleBuffData__AllBuffValidEnumerable_d__241_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBuffData___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7BDF & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData___c_TypeInfo, v1, v2, v3);
    byte_42E7BDF = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleBuffData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleBuffData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall BattleBuffData___c___ctor(BattleBuffData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__212_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__212_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__212_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__212_3(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleBuffData___c___BoardTurnProgressing_b__68_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___BoardTurnProgressing_b__68_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___CancelExtendingLife_b__71_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._IsExtendingLife_k__BackingField;
}


void __fastcall BattleBuffData___c___CancelExtendingLife_b__71_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  x->fields._IsExtendingLife_k__BackingField = 0;
}


bool __fastcall BattleBuffData___c___CommonTurnProgressing_b__67_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___CommonTurnProgressing_b__67_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


void __fastcall BattleBuffData___c___DirectUpdateWaitIntervalBuff_b__27_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_B5D69C(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__Update(intervalData, buff, method);
}


bool __fastcall BattleBuffData___c___GetAllCommandAssistBuff_b__202_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return buff->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData___c___GetAllCommandCodeBuff_b__201_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return buff->fields.userCommandCodeId > 0;
}


bool __fastcall BattleBuffData___c___GetAllConnectedCommandCardBuff_b__229_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetAllConnectedCommandCardBuff_b__229_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, (const MethodInfo *)buff)
      || buff->fields.userCommandCodeId > 0
      || buff->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData___c___GetAllIntervalBuffArray_b__243_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.intervalData != 0LL;
}


bool __fastcall BattleBuffData___c___GetAvaliableActiveBuffArray_b__103_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  bool result; // w0
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8

  if ( !s )
    sub_B5D69C(this, 0LL);
  result = !s->fields._isRemove
        && ((intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___GetClassIconEffectBuffList_b__253_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !b )
    sub_B5D69C(this, 0LL);
  intervalData = b->fields.intervalData;
  result = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = b->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___GetCurrentWarBoardNotAttackedBuff_b__234_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return !buff->fields._isRemove && BattleBuffData_BuffData__IsWarBoardNotAttacked(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__219_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__isEffectBuff(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__219_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return BattleBuffData_BuffData__isEffectBuff(buff, (const MethodInfo *)buff);
}


int32_t __fastcall BattleBuffData___c___GetEffectBuffList_b__219_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__219_3(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  if ( !buff )
    sub_B5D69C(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( !intervalData )
    return 0;
  if ( intervalData->fields.intervalTurn <= 0 )
    return intervalData->fields.intervalCount > 0;
  return 1;
}


bool __fastcall BattleBuffData___c___GetGrantBuffTypeArray_b__116_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return !buff->fields._isRemove;
}


bool __fastcall BattleBuffData___c___GetGrantBuffTypeArray_b__116_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  return !buff->fields._isRemove;
}


bool __fastcall BattleBuffData___c___RemoveNoTurnBuff_b__69_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___RemoveNoTurnBuff_b__69_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___RemoveProgressingBuffList_b__87_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *_,
        const MethodInfo *method)
{
  if ( !_ )
    sub_B5D69C(this, 0LL);
  return _->fields.count == 0;
}


bool __fastcall BattleBuffData___c___RemoveProgressingBuffList_b__87_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *_,
        const MethodInfo *method)
{
  if ( !_ )
    sub_B5D69C(this, 0LL);
  return _->fields.count == 0;
}


void __fastcall BattleBuffData___c___ResetNotTakeOverBuff_b__70_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  if ( !buff->fields.isTakeOverNextBattle )
  {
    buff->fields.turn = 0;
    buff->fields._IsExtendingLife_k__BackingField = 0;
  }
}


int32_t __fastcall BattleBuffData___c___UpdateBaseAddOrder_b__214_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBaseAddOrder_b__214_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__213_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__213_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__213_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateForceBuff_b__91_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleBuffData___c___UpdateForceNoField_b__225_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  if ( buff->fields.onfiledUniqueId >= 1 )
    buff->fields.state |= 1u;
  if ( buff->fields.onFieldAliveCond )
    buff->fields.state |= 0x4000u;
}


int32_t __fastcall BattleBuffData___c___checkBuffSuccessful_b__119_0(
        BattleBuffData___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


bool __fastcall BattleBuffData___c___checkFieldAlive_b__95_0(
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


bool __fastcall BattleBuffData___c___getAuraBuffList_b__36_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !s )
    sub_B5D69C(this, 0LL);
  intervalData = s->fields.intervalData;
  result = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___getBuffActiveIDList_b__105_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return (s->fields.state & 0x80000) == 0;
}


bool __fastcall BattleBuffData___c___getBuffIDList_b__104_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return (s->fields.state & 0x80000) == 0;
}


bool __fastcall BattleBuffData___c___syncLinkageBuffChangeParam_b__74_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x8

  if ( !x )
    sub_B5D69C(this, 0LL);
  v3 = 120LL;
  if ( (x->fields.state & 0x400000) != 0 )
    v3 = 296LL;
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)((char *)&x->klass + v3), 0LL);
}


bool __fastcall BattleBuffData___c___syncLinkageBuffChangeParam_b__74_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x8

  if ( !x )
    sub_B5D69C(this, 0LL);
  v3 = 120LL;
  if ( (x->fields.state & 0x400000) != 0 )
    v3 = 296LL;
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)((char *)&x->klass + v3), 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass103_0___ctor(
        BattleBuffData___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass103_0___GetAvaliableActiveBuffArray_b__1(
        BattleBuffData___c__DisplayClass103_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData___c__DisplayClass103_0_o *v5; // x20
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  v5 = this;
  if ( (byte_42E7BE0 & 1) == 0 )
  {
    this = (BattleBuffData___c__DisplayClass103_0_o *)sub_B5D5C4(
                                                        &Method_System_Predicate_BattleBuffData_BuffData__Invoke__,
                                                        (_DWORD)s,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E7BE0 = 1;
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
  this = (BattleBuffData___c__DisplayClass103_0_o *)v5->fields.conditionsToAdd;
  if ( !this )
LABEL_12:
    sub_B5D69C(this, s);
  return System_Predicate_BattleBuffData_BuffData___Invoke(
           (System_Predicate_BattleBuffData_BuffData__o *)this,
           s,
           (const MethodInfo_2B93220 *)Method_System_Predicate_BattleBuffData_BuffData__Invoke__);
}


void __fastcall BattleBuffData___c__DisplayClass108_0___ctor(
        BattleBuffData___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass108_0___SubBuffFromType_b__0(
        BattleBuffData___c__DisplayClass108_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !buff) || !_4__this )
    sub_B5D69C(_4__this, buff);
  return BuffMaster__GetBuffType((BuffMaster_o *)_4__this, buff->fields.buffId, -1, 0LL) == this->fields.checkBuffType;
}


void __fastcall BattleBuffData___c__DisplayClass109_0___ctor(
        BattleBuffData___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass109_0___SubBuffFromDeadActorId_b__0(
        BattleBuffData___c__DisplayClass109_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t actorId; // w8
  int32_t v4; // w9

  actorId = this->fields.actorId;
  if ( actorId < 1 )
    return 0;
  if ( !buff )
    sub_B5D69C(this, 0LL);
  if ( buff->fields.isRemoveFieldBuffActorDeath )
    v4 = buff->fields.actorId;
  else
    v4 = -1;
  return v4 == actorId;
}


void __fastcall BattleBuffData___c__DisplayClass116_0___ctor(
        BattleBuffData___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass116_0___GetGrantBuffTypeArray_b__0(
        BattleBuffData___c__DisplayClass116_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *_4__this; // x0
  System_Collections_Generic_List_int__o *buffTypeList; // x20

  if ( (byte_42E7BE1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)buff, (_DWORD)method, v3);
    byte_42E7BE1 = 1;
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
    sub_B5D69C(_4__this, buff);
  }
  System_Collections_Generic_List_int___Add(
    buffTypeList,
    (int32_t)_4__this,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass138_0___ctor(
        BattleBuffData___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass138_0___getRectBuffList_b__0(
        BattleBuffData___c__DisplayClass138_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *ent; // x8

  ent = this->fields.ent;
  if ( !ent )
    sub_B5D69C(this, type);
  return ent->fields.type == type;
}


void __fastcall BattleBuffData___c__DisplayClass146_0___ctor(
        BattleBuffData___c__DisplayClass146_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass146_0___ChangeBuffState_b__0(
        BattleBuffData___c__DisplayClass146_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass146_0_o *v4; // x19
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
  this = (BattleBuffData___c__DisplayClass146_0_o *)this->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  if ( BattleBuffData__isContainConditionsHp((BattleBuffData_o *)this, buff, 0LL) )
  {
    this = (BattleBuffData___c__DisplayClass146_0_o *)v4->fields.__4__this;
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
  this = (BattleBuffData___c__DisplayClass146_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  isConditionHp = BattleBuffData__isConditionHp((BattleBuffData_o *)this, buff, v4->fields.now, v4->fields.max, 0LL);
  if ( isContainConditionIndividuality )
  {
    if ( isConditionHp )
    {
      this = (BattleBuffData___c__DisplayClass146_0_o *)v4->fields.__4__this;
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
    this = (BattleBuffData___c__DisplayClass146_0_o *)v4->fields.__4__this;
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
  this = (BattleBuffData___c__DisplayClass146_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_22:
    sub_B5D69C(this, buff);
  isValueChanged = v4->fields.isValueChanged;
  if ( (isConditionIndividuality & 1) != 0 )
    v9 = BattleBuffData__OffStateWithAuraConditionCheck((BattleBuffData_o *)this, buff, 16, 0LL);
  else
    v9 = BattleBuffData__OnStateWithAuraConditionCheck((BattleBuffData_o *)this, buff, 16, 0LL);
  v4->fields.isValueChanged = isValueChanged || v9;
}


void __fastcall BattleBuffData___c__DisplayClass147_0___ctor(
        BattleBuffData___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass147_0___UpdateForceAllBuffNoAct_b__0(
        BattleBuffData___c__DisplayClass147_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
  BattleBuffData_BuffData__setShowState(buff, this->fields.showState, method);
  buff->fields.state |= 0x20000u;
}


void __fastcall BattleBuffData___c__DisplayClass188_0___ctor(
        BattleBuffData___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass188_0___CheckBuffType_b__0(
        BattleBuffData___c__DisplayClass188_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_B5D69C(this, type);
  return buffEnt->fields.type == type;
}


void __fastcall BattleBuffData___c__DisplayClass193_0___ctor(
        BattleBuffData___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass193_0___InitializeShift_b__0(
        BattleBuffData___c__DisplayClass193_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return s->fields.actorId == this->fields.actorId;
}


bool __fastcall BattleBuffData___c__DisplayClass193_0___InitializeShift_b__1(
        BattleBuffData___c__DisplayClass193_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, s);
  return BattleBuffData__checkShiftClear(_4__this, s, this->fields.buffindivs, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass211_0___ctor(
        BattleBuffData___c__DisplayClass211_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass211_0___GetSkillTypeBuff_b__0(
        BattleBuffData___c__DisplayClass211_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData___c__DisplayClass211_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E7BE2 & 1) == 0 )
  {
    this = (BattleBuffData___c__DisplayClass211_0_o *)sub_B5D5C4(
                                                        &Method_System_Collections_Generic_List_int__Contains__,
                                                        (_DWORD)buff,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E7BE2 = 1;
  }
  if ( !buff || (this = (BattleBuffData___c__DisplayClass211_0_o *)v5->fields.targetSkillList) == 0LL )
    sub_B5D69C(this, buff);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           buff->fields.grantSkillType,
           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall BattleBuffData___c__DisplayClass213_0___ctor(
        BattleBuffData___c__DisplayClass213_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass213_0___UpdateBuffAddOrder_b__3(
        BattleBuffData___c__DisplayClass213_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  x->fields.addOrder += this->fields.addPassiveMaxOrder;
}


void __fastcall BattleBuffData___c__DisplayClass213_0___UpdateBuffAddOrder_b__4(
        BattleBuffData___c__DisplayClass213_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  x->fields.addOrder += this->fields.addPassiveMaxOrder;
}


void __fastcall BattleBuffData___c__DisplayClass238_0___ctor(
        BattleBuffData___c__DisplayClass238_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData___c__DisplayClass238_0___GetFamilyLinkageIdMax_b__0(
        BattleBuffData___c__DisplayClass238_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *hash; // x0

  if ( (byte_42E7BE3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, x, (_DWORD)method, v3);
    byte_42E7BE3 = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_B5D69C(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    hash,
    x,
    (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData___c__DisplayClass238_0___GetFamilyLinkageIdMax_b__1(
        BattleBuffData___c__DisplayClass238_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *hash; // x0

  if ( (byte_42E7BE4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, x, (_DWORD)method, v3);
    byte_42E7BE4 = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_B5D69C(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    hash,
    x,
    (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass244_0___ctor(
        BattleBuffData___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass244_0___ExistsTargetIntervalBuff_b__0(
        BattleBuffData___c__DisplayClass244_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !buff) )
    sub_B5D69C(_4__this, buff);
  return BattleBuffData_BuffData__EqualBuffType(buff, (BuffMaster_o *)_4__this, this->fields.targetType, v6);
}


void __fastcall BattleBuffData___c__DisplayClass245_0___ctor(
        BattleBuffData___c__DisplayClass245_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass245_0___ResetTargetUseBuff_b__0(
        BattleBuffData___c__DisplayClass245_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !x) )
    sub_B5D69C(_4__this, x);
  return BattleBuffData_BuffData__EqualBuffType(x, (BuffMaster_o *)_4__this, this->fields.targetType, v6);
}


void __fastcall BattleBuffData___c__DisplayClass254_0___ctor(
        BattleBuffData___c__DisplayClass254_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass254_0___RemoveClassBoardSkillBuff_b__0(
        BattleBuffData___c__DisplayClass254_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !p || (skillData = this->fields.skillData) == 0LL )
    sub_B5D69C(this, p);
  return p->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass254_0___RemoveClassBoardSkillBuff_b__1(
        BattleBuffData___c__DisplayClass254_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !p || (skillData = this->fields.skillData) == 0LL )
    sub_B5D69C(this, p);
  return p->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass254_0___RemoveClassBoardSkillBuff_b__2(
        BattleBuffData___c__DisplayClass254_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !a || (skillData = this->fields.skillData) == 0LL )
    sub_B5D69C(this, a);
  return a->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass254_0___RemoveClassBoardSkillBuff_b__3(
        BattleBuffData___c__DisplayClass254_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !a || (skillData = this->fields.skillData) == 0LL )
    sub_B5D69C(this, a);
  return a->fields.skillId == skillData->fields.id;
}


void __fastcall BattleBuffData___c__DisplayClass254_1___ctor(
        BattleBuffData___c__DisplayClass254_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass254_1___RemoveClassBoardSkillBuff_b__4(
        BattleBuffData___c__DisplayClass254_1_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_B5D69C(this, p);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass254_1___RemoveClassBoardSkillBuff_b__5(
        BattleBuffData___c__DisplayClass254_1_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_B5D69C(this, p);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass254_1___RemoveClassBoardSkillBuff_b__6(
        BattleBuffData___c__DisplayClass254_1_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_B5D69C(this, a);
  return a->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass254_1___RemoveClassBoardSkillBuff_b__7(
        BattleBuffData___c__DisplayClass254_1_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_B5D69C(this, a);
  return a->fields.skillId == entity->fields.commandSpellId;
}


void __fastcall BattleBuffData___c__DisplayClass30_0___ctor(
        BattleBuffData___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass30_0___getPassiveList_b__0(
        BattleBuffData___c__DisplayClass30_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !s )
    sub_B5D69C(this, 0LL);
  result = (!this->fields.isCheckInterval
         || (intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


void __fastcall BattleBuffData___c__DisplayClass31_0___ctor(
        BattleBuffData___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass31_0___getActiveList_b__0(
        BattleBuffData___c__DisplayClass31_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !s )
    sub_B5D69C(this, 0LL);
  result = (!this->fields.isCheckInterval
         || (intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


void __fastcall BattleBuffData___c__DisplayClass39_0___ctor(
        BattleBuffData___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass39_0___getShowServantParam_b__0(
        BattleBuffData___c__DisplayClass39_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleBuffData_ShowBuffData_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  BattleBuffData_o *_4__this; // x0

  if ( (byte_42E7BE5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__,
      (_DWORD)buff,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&BattleBuffData_ShowBuffData_TypeInfo, v6, v7, v8);
    byte_42E7BE5 = 1;
  }
  v9 = (BattleBuffData_ShowBuffData_o *)sub_B5D694(BattleBuffData_ShowBuffData_TypeInfo);
  BattleBuffData_ShowBuffData___ctor_23679032(v9, buff, v10);
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
    sub_B5D69C(_4__this, v11);
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
          (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
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


void __fastcall BattleBuffData___c__DisplayClass45_0___ctor(
        BattleBuffData___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass45_0___DebugGetShowServantParamAll_b__0(
        BattleBuffData___c__DisplayClass45_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleBuffData_ShowBuffData_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *reList; // x0

  if ( (byte_42E7BE6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__,
      (_DWORD)buff,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&BattleBuffData_ShowBuffData_TypeInfo, v6, v7, v8);
    byte_42E7BE6 = 1;
  }
  v9 = (BattleBuffData_ShowBuffData_o *)sub_B5D694(BattleBuffData_ShowBuffData_TypeInfo);
  BattleBuffData_ShowBuffData___ctor_23679032(v9, buff, v10);
  reList = this->fields.reList;
  if ( !reList )
    sub_B5D69C(0LL, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass73_0___ctor(
        BattleBuffData___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass73_0___RemoveLinkageBuff_b__0(
        BattleBuffData___c__DisplayClass73_0_o *this,
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
  this = (BattleBuffData___c__DisplayClass73_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_8:
    sub_B5D69C(this, buff);
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


bool __fastcall BattleBuffData___c__DisplayClass73_0___RemoveLinkageBuff_b__1(
        BattleBuffData___c__DisplayClass73_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return this->fields.isFamily ^ ((x->fields.state & 0x400000) == 0);
}


void __fastcall BattleBuffData___c__DisplayClass93_0___ctor(
        BattleBuffData___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass93_0___CheckBuffGroup_b__0(
        BattleBuffData___c__DisplayClass93_0_o *this,
        int32_t target,
        const MethodInfo *method)
{
  return this->fields.attachTarget == target;
}