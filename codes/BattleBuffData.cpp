void __fastcall BattleBuffData___ctor(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_int__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x20
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_Int32_array *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x1
  __int64 v78; // x2
  BattleBuffData_SkillRankChangeData_o *v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7

  if ( (byte_4217DEB & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&BattleBuffData_SkillRankChangeData_TypeInfo, v8);
    byte_4217DEB = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.passiveList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.passiveList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.activeList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.activeList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.conditionalAuraBuff = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.conditionalAuraBuff,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.auraBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v36;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.auraBuffList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.addBuffOrder = 1;
  v45 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v43, v44);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.unfixedBuffList = v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.unfixedBuffList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v52,
                                                                                                  v53);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.classIconAuraEffectBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v54;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classIconAuraEffectBuffList,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v61,
                                                                                                  v62);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.updateWaitIntervalBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v63;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.updateWaitIntervalBuffList,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.wkzero = v70;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.wkzero,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v79 = (BattleBuffData_SkillRankChangeData_o *)sub_B0D974(BattleBuffData_SkillRankChangeData_TypeInfo, v77, v78);
  BattleBuffData_SkillRankChangeData___ctor(v79, this, 0LL);
  this->fields.skillChangeData = v79;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillChangeData,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
}


void __fastcall BattleBuffData__AddEffectBuffList(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1

  v4 = this;
  if ( (byte_4217E30 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    this = (BattleBuffData_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
                                 v5);
    byte_4217E30 = 1;
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
            (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v4->fields.auraBuffList;
      if ( !this )
        goto LABEL_15;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
  }
  if ( !buff->fields.classIconAuraEffectId )
    return;
  this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
  if ( !this )
LABEL_15:
    sub_B0D97C(this);
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
  {
    this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
    if ( this )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x21

  if ( (byte_4217E15 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, buffArray);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v6);
    sub_B0D8A4(&Method_BattleBuffData__AddForceBuff_b__88_0__, v7);
    byte_4217E15 = 1;
  }
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                              buffArray,
                                                                              method);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleBuffData__AddForceBuff_b__88_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v8,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData__AddGetSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *addBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x19
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  BattleBuffData___c_c *v21; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__211_0; // x21
  Il2CppObject *v24; // x22
  struct BattleBuffData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t v32; // w1
  _BOOL8 v33; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *auraBuffList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *passiveList; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v39; // x20
  void *v40; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v41; // x21
  Il2CppObject *v42; // x22
  struct BattleBuffData___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *activeList; // x20
  void *v53; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v54; // x21
  Il2CppObject *v55; // x22
  struct BattleBuffData___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v65; // x19
  void *v66; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v67; // x20
  Il2CppObject *v68; // x21
  struct BattleBuffData___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4217E67 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, addBuffList);
    sub_B0D8A4(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v9);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v10);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v15);
    sub_B0D8A4(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__211_0__, v16);
    sub_B0D8A4(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__211_1__, v17);
    sub_B0D8A4(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__211_2__, v18);
    sub_B0D8A4(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__211_3__, v19);
    this = (BattleBuffData_o *)sub_B0D8A4(&BattleBuffData___c_TypeInfo, v20);
    byte_4217E67 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  if ( !addBuffList )
    goto LABEL_58;
  if ( addBuffList->fields._size < 1 )
  {
    v32 = 0;
  }
  else
  {
    v21 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v21 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__211_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__211_0;
    if ( !_9__211_0 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__211_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                    addBuffList,
                                                                                    method);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__211_0,
        v24,
        Method_BattleBuffData___c__AddGetSkillTypeBuff_b__211_0__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v25 = BattleBuffData___c_TypeInfo->static_fields;
      v25->__9__211_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__211_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v25->__9__211_0,
        (System_Int32_array **)_9__211_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)addBuffList,
            (System_Func_TSource__int__o *)_9__211_0,
            (const MethodInfo_1B4DF7C *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  BattleBuffData__UpdateBuffAddOrder(v4, v32, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v76,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)addBuffList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v77 = v76;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v33 )
      break;
    current = v77.fields.current;
    if ( !v77.fields.current )
      sub_B0D97C(v33);
    if ( LODWORD(v77.fields.current[4].klass) )
    {
      auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.auraBuffList;
      if ( !auraBuffList )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        auraBuffList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v77.fields.current,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
    if ( BYTE1(current[2].klass) )
    {
      passiveList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.passiveList;
      if ( !passiveList )
        sub_B0D97C(0LL);
    }
    else
    {
      passiveList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.activeList;
      if ( !passiveList )
        sub_B0D97C(0LL);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      passiveList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)current,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v77,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v39 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4->fields.passiveList;
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v40 = this[1].fields.passiveList;
  v41 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)*((_QWORD *)v40 + 25);
  if ( !v41 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v40 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v42 = *(Il2CppObject **)v40;
    v41 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                      System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                      v37,
                                                                      v38);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v41,
      v42,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__211_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v43 = BattleBuffData___c_TypeInfo->static_fields;
    v43->__9__211_1 = (struct System_Comparison_BattleBuffData_BuffData__o *)v41;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v43->__9__211_1,
      (System_Int32_array **)v41,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  if ( !v39 )
    goto LABEL_58;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v39,
    (System_Comparison_T__o *)v41,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v53 = this[1].fields.passiveList;
  v54 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)*((_QWORD *)v53 + 26);
  if ( !v54 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v53 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v55 = *(Il2CppObject **)v53;
    v54 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                      System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                      v50,
                                                                      v51);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v54,
      v55,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__211_2__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v56 = BattleBuffData___c_TypeInfo->static_fields;
    v56->__9__211_2 = (struct System_Comparison_BattleBuffData_BuffData__o *)v54;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v56->__9__211_2,
      (System_Int32_array **)v54,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  if ( !activeList )
    goto LABEL_58;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    activeList,
    (System_Comparison_T__o *)v54,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  v65 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4->fields.auraBuffList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v66 = this[1].fields.passiveList;
  v67 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)*((_QWORD *)v66 + 27);
  if ( !v67 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v66 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v68 = *(Il2CppObject **)v66;
    v67 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                      System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                      v63,
                                                                      v64);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v67,
      v68,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__211_3__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v69 = BattleBuffData___c_TypeInfo->static_fields;
    v69->__9__211_3 = (struct System_Comparison_BattleBuffData_BuffData__o *)v67;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v69->__9__211_3,
      (System_Int32_array **)v67,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  if ( !v65 )
LABEL_58:
    sub_B0D97C(this);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v65,
    (System_Comparison_T__o *)v67,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
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

  if ( (byte_4217DE8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    byte_4217DE8 = 1;
  }
  updateWaitIntervalBuffList = this->fields.updateWaitIntervalBuffList;
  if ( !updateWaitIntervalBuffList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)updateWaitIntervalBuffList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffEnumerable(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4217E79 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData__AllBuffEnumerable_d__238_TypeInfo, method);
    byte_4217E79 = 1;
  }
  v4 = sub_B0D974(BattleBuffData__AllBuffEnumerable_d__238_TypeInfo, method, v2);
  BattleBuffData__AllBuffEnumerable_d__238___ctor((BattleBuffData__AllBuffEnumerable_d__238_o *)v4, -2, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 40), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v4;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerable(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4217E7B & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData__AllBuffValidEnumerable_d__240_TypeInfo, isCheckInterval);
    byte_4217E7B = 1;
  }
  v5 = sub_B0D974(BattleBuffData__AllBuffValidEnumerable_d__240_TypeInfo, isCheckInterval, method);
  BattleBuffData__AllBuffValidEnumerable_d__240___ctor((BattleBuffData__AllBuffValidEnumerable_d__240_o *)v5, -2, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_BYTE *)(v5 + 49) = isCheckInterval;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4217E7A & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_TypeInfo, isCheckInterval);
    byte_4217E7A = 1;
  }
  v5 = sub_B0D974(BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_TypeInfo, isCheckInterval, method);
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__239___ctor(
    (BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_BYTE *)(v5 + 49) = isCheckInterval;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
}


void __fastcall BattleBuffData__ApplyBuffData(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        System_Collections_Generic_List_BattleBuffData_BuffData__o **dataList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *current; // x8
  _BOOL8 v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217E64 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, buff);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v8);
    byte_4217E64 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !*dataList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*dataList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v10 )
      break;
    current = v11.fields.current;
    if ( !v11.fields.current )
      sub_B0D97C(v10);
    if ( !buff )
      sub_B0D97C(v10);
    if ( LODWORD(v11.fields.current[4].klass) == buff->fields.auraEffectId
      && LODWORD(v11.fields.current[1].klass) == buff->fields.buffId )
    {
      LODWORD(v11.fields.current[9].klass) = buff->fields.state;
      HIDWORD(current[8].monitor) = buff->fields.addOrder;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__BoardTurnProgressing(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  void *passiveList; // x0
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v25; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__68_0; // x22
  Il2CppObject *v28; // x23
  struct BattleBuffData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x22
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x2
  int v42; // w21
  __int64 v43; // x1
  __int64 v44; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  struct BattleBuffData___c_StaticFields *v46; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__68_1; // x22
  Il2CppObject *v48; // x23
  struct BattleBuffData___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v60; // x22
  const MethodInfo *v61; // x3
  System_Collections_Generic_IEnumerable_T__o *v62; // x0
  const MethodInfo *v63; // x2
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+8h] [xbp-98h] BYREF
  int v66[2]; // [xsp+20h] [xbp-80h]
  int v67; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4217E04 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleBuffData_checkBuffClear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v14);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B0D8A4(&Method_BattleBuffData___c__BoardTurnProgressing_b__68_0__, v16);
    sub_B0D8A4(&Method_BattleBuffData___c__BoardTurnProgressing_b__68_1__, v17);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v18);
    byte_4217E04 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v67 = 0;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v68 = v65;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v21 )
      break;
    if ( !v68.fields.current )
      sub_B0D97C(v21);
    if ( LOBYTE(v68.fields.current[23].klass) )
      BattleBuffData__ProgressBuffTurn((BattleBuffData_o *)v21, (BattleBuffData_BuffData_o *)v68.fields.current, v22);
  }
  v66[0] = 68;
  v67 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v67 = 0;
  v25 = this->fields.passiveList;
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
    v28 = (Il2CppObject *)static_fields->__9;
    _9__68_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v23,
                                                                          v24);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__68_0,
      v28,
      Method_BattleBuffData___c__BoardTurnProgressing_b__68_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v29 = BattleBuffData___c_TypeInfo->static_fields;
    v29->__9__68_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__68_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v29->__9__68_0,
      (System_Int32_array **)_9__68_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v25 )
    goto LABEL_42;
  passiveList = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v25,
                  (System_Predicate_T__o *)_9__68_0,
                  (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v19 )
    goto LABEL_42;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    (System_Collections_Generic_IEnumerable_T__o *)passiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v36 = this->fields.passiveList;
  v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v37,
                                                                   v38);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v39,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v36 )
    goto LABEL_42;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v36,
    (System_Predicate_T__o *)v39,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v68 = v65;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v40 )
      break;
    if ( !v68.fields.current )
      sub_B0D97C(v40);
    if ( LOBYTE(v68.fields.current[23].klass) )
      BattleBuffData__ProgressBuffTurn((BattleBuffData_o *)v40, (BattleBuffData_BuffData_o *)v68.fields.current, v41);
  }
  v66[0] = 205;
  v42 = ++v67;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v42 && v66[v42 - 1] == 205 )
    v67 = v42 - 1;
  passiveList = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  v46 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)passiveList + 23);
  _9__68_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v46->__9__68_1;
  if ( !_9__68_1 )
  {
    if ( (*((_BYTE *)passiveList + 307) & 4) != 0 && !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      v46 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)v46->__9;
    _9__68_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v43,
                                                                          v44);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__68_1,
      v48,
      Method_BattleBuffData___c__BoardTurnProgressing_b__68_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v49 = BattleBuffData___c_TypeInfo->static_fields;
    v49->__9__68_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__68_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v49->__9__68_1,
      (System_Int32_array **)_9__68_1,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !activeList
    || (All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                               (System_Predicate_T__o *)_9__68_1,
                                                               (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
          All,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__),
        v57 = this->fields.activeList,
        v60 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v58,
                                                                         v59),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v60,
          (Il2CppObject *)this,
          Method_BattleBuffData_checkBuffClear__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !v57) )
  {
LABEL_42:
    sub_B0D97C(passiveList);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v57,
    (System_Predicate_T__o *)v60,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v62 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v19,
                                                         0,
                                                         v61);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    v62,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v19,
    v63);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
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
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v53; // x21

  if ( (byte_4217E3A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, *(_QWORD *)&now);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v16);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass145_0__ChangeBuffState_b__0__, v17);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass145_0_TypeInfo, v18);
    byte_4217E3A = 1;
  }
  v19 = sub_B0D974(BattleBuffData___c__DisplayClass145_0_TypeInfo, *(_QWORD *)&now, *(_QWORD *)&max);
  BattleBuffData___c__DisplayClass145_0___ctor((BattleBuffData___c__DisplayClass145_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_7;
  *(_QWORD *)(v19 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v19 + 24) = now;
  *(_DWORD *)(v19 + 28) = max;
  *(_QWORD *)(v19 + 32) = servantIndv;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v19 + 32),
    (System_Int32_array **)servantIndv,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_QWORD *)(v19 + 40) = buffIndv;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 40), (System_Int32_array **)buffIndv, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v19 + 48) = fieldIndiv;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v19 + 48),
    (System_Int32_array **)fieldIndiv,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *(_QWORD *)(v19 + 56) = canSubStateBuffIndv;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v19 + 56),
    (System_Int32_array **)canSubStateBuffIndv,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  *(_BYTE *)(v19 + 64) = 0;
  v53 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v51,
                                                                               v52);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v53,
    (Il2CppObject *)v19,
    Method_BattleBuffData___c__DisplayClass145_0__ChangeBuffState_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v53,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.activeList) == 0LL) )
  {
LABEL_7:
    sub_B0D97C(passiveList);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
    (System_Action_T__o *)v53,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  return *(_BYTE *)(v19 + 64);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__CheckAndGetFixedBuffArray(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *checkBuffArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  _BOOL8 IsUnfix; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  BattleBuffData_BuffData_o *v13; // x22
  __int64 v15; // x0

  if ( (byte_4217E6B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, checkBuffArray);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    byte_4217E6B = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 checkBuffArray,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checkBuffArray )
    goto LABEL_14;
  v11 = *(_QWORD *)&checkBuffArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B0D9A8(IsUnfix);
        sub_B0D948(v15, 0LL);
      }
      v13 = checkBuffArray->m_Items[v12];
      IsUnfix = BattleBuffData__IsUnfix(this, v13, v10);
      if ( !IsUnfix )
      {
        if ( !v8 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v11) = checkBuffArray->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)v11 );
  }
  if ( !v8 )
LABEL_14:
    sub_B0D97C(IsUnfix);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


void __fastcall BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  BuffEntity_o *v18; // x0
  int v19; // w22
  WarEntity_o *Entity; // x8
  int32_t v21; // w21
  _BOOL8 v22; // x0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4217DE6 & 1) == 0 )
  {
    sub_B0D8A4(&BuffEntity_TypeInfo, buffList);
    sub_B0D8A4(&BuffList_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4217DE6 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  v18 = (BuffEntity_o *)sub_B0D974(BuffEntity_TypeInfo, v16, v17);
  BuffEntity___ctor(v18, 0LL);
  if ( !buffList )
    goto LABEL_21;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v24 = v23;
  v19 = 0;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v22 )
      break;
    if ( !v24.fields.current )
      sub_B0D97C(v22);
    if ( !BYTE2(v24.fields.current[23].klass) )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B0D97C(v22);
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int32_t)v24.fields.current[1].klass,
                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( Entity )
      {
        v21 = *(&Entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        v19 |= BuffList__CheckType(133, v21, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v19 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      return;
    }
LABEL_21:
    sub_B0D97C(Instance);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x21
  __int64 v18; // x0
  System_Func_int__bool__o **v19; // x22
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  Il2CppObject *current; // x23
  BuffMaster_o *buffMst; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Int32_array *monitor; // x23
  System_Func_int__bool__o *v27; // x24
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int v34; // w19
  int v35; // w20
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4217E18 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, buffList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v14);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass92_0__CheckBuffGroup_b__0__, v15);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass92_0_TypeInfo, v16);
    byte_4217E18 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v17 = sub_B0D974(BattleBuffData___c__DisplayClass92_0_TypeInfo, buffList, *(_QWORD *)&groupId);
  BattleBuffData___c__DisplayClass92_0___ctor((BattleBuffData___c__DisplayClass92_0_o *)v17, 0LL);
  if ( !v17 || (*(_DWORD *)(v17 + 16) = attachTarget, !buffList) )
    sub_B0D97C(v18);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v39 = v38;
  v19 = (System_Func_int__bool__o **)(v17 + 24);
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v20 )
      break;
    current = v39.fields.current;
    if ( !v39.fields.current )
      sub_B0D97C(v20);
    if ( !BYTE2(v39.fields.current[23].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v21);
      if ( !buffMst )
        sub_B0D97C(0LL);
      if ( BuffMaster__GetBuffGroup(buffMst, (int32_t)current[1].klass, -1, 0LL) == groupId )
      {
        monitor = (System_Int32_array *)current[13].monitor;
        if ( monitor )
        {
          v27 = *v19;
          if ( !*v19 )
          {
            v27 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v24, v25);
            System_Func_int__bool____ctor(
              v27,
              (Il2CppObject *)v17,
              Method_BattleBuffData___c__DisplayClass92_0__CheckBuffGroup_b__0__,
              (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
            *v19 = v27;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v17 + 24),
              (System_Int32_array **)v27,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
          }
          if ( BasicHelper__Any_int__24145568(
                 monitor,
                 (System_Func_T__bool__o *)v27,
                 (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
          {
            v34 = 1;
            v35 = 3;
            goto LABEL_17;
          }
        }
      }
    }
  }
  v34 = 0;
  v35 = 1;
LABEL_17:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v34 & ((unsigned int)(v35 + 1) >> 2);
}


bool __fastcall BattleBuffData__CheckBuffRateTypeOrIndiv(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buffData,
        int32_t *value,
        int32_t *maxBuffRate,
        int32_t upperParam,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 BuffList; // x0
  const MethodInfo *v14; // x3
  il2cpp_array_size_t v15; // w8
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x3
  int v18; // w8
  __int64 v19; // x23
  unsigned int v20; // w25
  bool v21; // w27
  __int64 v22; // x28
  __int64 v23; // x8
  BattleBuffData_BuffData_o **v24; // x28
  __int64 v25; // t1
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  System_Int32_array *v28; // x24
  BattleBuffData_o *UpBuffRateBuffIndivList; // x0
  const MethodInfo *v30; // x5
  int32_t v31; // w8
  __int64 v33; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4217E44 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, buffData);
    sub_B0D8A4(&int___TypeInfo, v11);
    sub_B0D8A4(&BuffList_TYPE___TypeInfo, v12);
    byte_4217E44 = 1;
  }
  entity = 0LL;
  *value = 0;
  *maxBuffRate = upperParam;
  BuffList = sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !BuffList )
    goto LABEL_41;
  v15 = *(_DWORD *)(BuffList + 24);
  if ( !v15 )
    goto LABEL_42;
  *(_DWORD *)(BuffList + 32) = 162;
  if ( v15 == 1 )
    goto LABEL_42;
  *(_DWORD *)(BuffList + 36) = 161;
  if ( !BattleBuffData__CheckBuffType(this, (System_Int32_array *)BuffList, buffData, v14) )
  {
    BuffList = sub_B0D8BC(BuffList_TYPE___TypeInfo, 1LL);
    if ( BuffList )
    {
      if ( !*(_DWORD *)(BuffList + 24) )
        goto LABEL_42;
      *(_DWORD *)(BuffList + 32) = 162;
      BuffList = (__int64)BattleBuffData__GetBuffList(this, (BuffList_TYPE_array *)BuffList, 0LL, 0, v16);
      if ( BuffList )
      {
        v18 = *(_DWORD *)(BuffList + 24);
        v19 = BuffList;
        if ( v18 >= 1 )
        {
          v20 = 0;
          v21 = 0;
          while ( v20 < v18 )
          {
            v22 = v19 + 8LL * (int)v20;
            v25 = *(_QWORD *)(v22 + 32);
            v24 = (BattleBuffData_BuffData_o **)(v22 + 32);
            v23 = v25;
            if ( !v25 )
              goto LABEL_41;
            v26 = *(_QWORD *)(v23 + 256);
            if ( v26 )
            {
              if ( *(_QWORD *)(v26 + 24) )
              {
                BuffList = BattleBuffData__CheckBuffType(this, (System_Int32_array *)v26, buffData, v17);
                if ( (BuffList & 1) != 0 )
                {
                  if ( v20 >= *(_DWORD *)(v19 + 24) )
                    break;
                  BuffList = BattleBuffData__checkBuffSuccessful(this, *v24, 1, v27);
                  if ( (BuffList & 1) != 0 )
                    goto LABEL_30;
                }
              }
            }
            entity = 0LL;
            BuffList = (__int64)BattleBuffData__get_buffMst(this, (const MethodInfo *)v26);
            if ( v20 >= *(_DWORD *)(v19 + 24) )
              break;
            if ( !*v24 || !BuffList )
              goto LABEL_41;
            BuffList = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)BuffList,
                         &entity,
                         (*v24)->fields.buffId,
                         (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
                v28 = (System_Int32_array *)BuffList;
                UpBuffRateBuffIndivList = (BattleBuffData_o *)BuffEntity__GetUpBuffRateBuffIndivList(
                                                                (BuffEntity_o *)entity,
                                                                0LL);
                BuffList = BattleBuffData__checkBuffTypeIndiviuality(
                             UpBuffRateBuffIndivList,
                             v28,
                             (System_Int32_array *)UpBuffRateBuffIndivList,
                             (BuffEntity_o *)entity,
                             0LL,
                             v30);
                if ( (BuffList & 1) != 0 )
                {
                  if ( v20 >= *(_DWORD *)(v19 + 24) )
                    break;
                  BuffList = BattleBuffData__checkBuffSuccessful(this, *v24, 1, v17);
                  if ( (BuffList & 1) != 0 )
                  {
LABEL_30:
                    if ( v20 >= *(_DWORD *)(v19 + 24) )
                      break;
                    if ( !*v24 )
                      goto LABEL_41;
                    *value += (*v24)->fields.param;
                    if ( v20 >= *(_DWORD *)(v19 + 24) )
                      break;
                    if ( !*v24 )
                      goto LABEL_41;
                    v31 = (*v24)->fields.maxBuffRate;
                    v21 = 1;
                    if ( *maxBuffRate >= v31 )
                      v31 = *maxBuffRate;
                    *maxBuffRate = v31;
                  }
                }
              }
            }
            v18 = *(_DWORD *)(v19 + 24);
            if ( (int)++v20 >= v18 )
              return v21;
          }
LABEL_42:
          v33 = sub_B0D9A8(BuffList);
          sub_B0D948(v33, 0LL);
        }
        return 0;
      }
    }
LABEL_41:
    sub_B0D97C(BuffList);
  }
  return 0;
}


bool __fastcall BattleBuffData__CheckBuffType(
        BattleBuffData_o *this,
        System_Int32_array *types,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  BuffMaster_o *buffMst; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_int__bool__o *v17; // x20

  if ( (byte_4217E55 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, types);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass187_0__CheckBuffType_b__0__, v10);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass187_0_TypeInfo, v11);
    byte_4217E55 = 1;
  }
  v12 = sub_B0D974(BattleBuffData___c__DisplayClass187_0_TypeInfo, types, buffData);
  BattleBuffData___c__DisplayClass187_0___ctor((BattleBuffData___c__DisplayClass187_0_o *)v12, 0LL);
  if ( !buffData )
    goto LABEL_10;
  if ( buffData->fields._isRemove )
    return 0;
  buffMst = BattleBuffData__get_buffMst(this, v14);
  if ( !v12 || !buffMst )
LABEL_10:
    sub_B0D97C(buffMst);
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
         (WarEntity_o **)(v12 + 16),
         buffData->fields.buffId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    v17 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v15, v16);
    System_Func_int__bool____ctor(
      v17,
      (Il2CppObject *)v12,
      Method_BattleBuffData___c__DisplayClass187_0__CheckBuffType_b__0__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    return BasicHelper__Any_int__24145568(
             types,
             (System_Func_T__bool__o *)v17,
             (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
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
    sub_B0D97C(this);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  BuffList_ActInfo_o *ActInfo; // x24
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v19; // x19
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x19
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  BattleBuffData_BuffData_o *v32; // x0
  BattleBuffData_BuffData_o *v33; // x25
  _BOOL8 IsCommandAssistBuff; // x0
  const MethodInfo *v35; // x3
  bool v36; // w20
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  const MethodInfo *v42; // [xsp+0h] [xbp-80h]
  int v43; // [xsp+10h] [xbp-70h]
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4217E83 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, selfIndiv);
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_4217E83 = 1;
  }
  plusMinus = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  plusMinus = 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(38, 0LL, 0LL);
  v17 = BattleBuffData__AllBuffValidEnumerable(this, 0, v16);
  if ( !v17 )
    sub_B0D97C(0LL);
  klass = v17->klass;
  v19 = v17;
  if ( *(_WORD *)&v17->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AA67A0(v17, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v19,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_B0D97C(0LL);
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
          goto LABEL_21;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_21:
      v27 = sub_AA67A0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_28;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_28:
      v31 = sub_AA67A0(v23, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v32 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    v33 = v32;
    if ( !v32 )
      sub_B0D97C(0LL);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v32, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v33,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v33, 0LL) || v33->fields.isActiveCC) )
    {
      IsCommandAssistBuff = BattleBuffData_BuffData__IsCommandAssistBuff(v33, 0LL);
      if ( !IsCommandAssistBuff || (IsCommandAssistBuff = BattleBuffData_BuffData__IsActiveCommandAssist(v33, 0LL)) )
      {
        if ( !Master_WarQuestSelectionMaster )
          sub_B0D97C(IsCommandAssistBuff);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               Master_WarQuestSelectionMaster,
               &entity,
               v33->fields.buffId,
               (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B0D97C(0LL);
          if ( BuffEntity__IsDisableForciblyAddState((BuffEntity_o *)entity, 0LL)
            && BattleBuffData__checkIndiviuality_30819704(
                 this,
                 ActInfo,
                 v33,
                 selfIndiv,
                 opponentIndiv,
                 0LL,
                 0LL,
                 &plusMinus,
                 v42)
            && BattleBuffData__checkBuffSuccessful(this, v33, 0, v35) )
          {
            v43 = 178;
            v36 = 1;
            goto LABEL_45;
          }
        }
      }
    }
  }
  v36 = 0;
  v43 = 176;
LABEL_45:
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
        goto LABEL_49;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_49:
    v40 = sub_AA67A0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v23, *(_QWORD *)(v40 + 8));
  if ( v43 == 176 )
    return 0;
  return v36;
}


void __fastcall BattleBuffData__CheckDummyBuffData(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *reList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t size; // w8
  unsigned __int64 v7; // x21
  BattleBuffData_ShowBuffData_o *v8; // x8
  int v9; // w8
  unsigned __int64 i; // x20
  signed __int64 v11; // x8
  struct BattleBuffData_ShowBuffData_array *items; // x8
  BattleBuffData_ShowBuffData_o *v13; // x9
  BattleBuffData_ShowBuffData_o *v14; // x9
  BattleBuffData_ShowBuffData_o *v15; // x8

  if ( (byte_4217DF7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__RemoveAt__, reList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Count__, v4);
    this = (BattleBuffData_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Item__,
                                 v5);
    byte_4217DF7 = 1;
  }
  if ( !reList )
LABEL_32:
    sub_B0D97C(this);
  size = reList->fields._size;
  if ( size - 1 >= 0 )
  {
    v7 = size - 1;
    while ( 1 )
    {
      if ( (__int64)v7 < size )
      {
        if ( v7 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v8 = reList->fields._items->m_Items[v7];
        if ( !v8 )
          goto LABEL_32;
        if ( !v8->fields.isRemove )
        {
          v9 = reList->fields._size - 1;
          if ( v9 >= 0 )
          {
            for ( i = v9; (i & 0x80000000) == 0; --i )
            {
              if ( v7 != i )
              {
                v11 = reList->fields._size;
                if ( (__int64)i < v11 && (__int64)v7 < v11 )
                {
                  if ( i >= (unsigned int)reList->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                  items = reList->fields._items;
                  v13 = items->m_Items[i];
                  if ( !v13 )
                    goto LABEL_32;
                  if ( v13->fields.isRemove )
                  {
                    if ( v7 >= (unsigned int)reList->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                    v14 = items->m_Items[v7];
                    if ( !v14 )
                      goto LABEL_32;
                    if ( i >= (unsigned int)reList->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                    v15 = items->m_Items[i];
                    if ( !v15 )
                      goto LABEL_32;
                    if ( v14->fields.addOrder == v15->fields.addOrder )
                      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                        (System_Collections_Generic_List_XWeaponTrail_Element__o *)reList,
                        i,
                        (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__RemoveAt__);
                  }
                }
              }
            }
          }
        }
      }
      if ( (--v7 & 0x80000000) != 0 )
        return;
      size = reList->fields._size;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_array *__fastcall BattleBuffData__CheckIndivSvtDataList(
        System_Collections_Generic_List_BattleServantData__o *svtDataList,
        System_Int32_array *tvals,
        bool isIncludeIgnoreIndiv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  __int64 v15; // x0
  bool v16; // w21
  _BOOL8 v17; // x0
  Il2CppObject *current; // x22
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4217E1B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, tvals);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v13);
    byte_4217E1B = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                  tvals,
                                                                                                  isIncludeIgnoreIndiv);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !svtDataList )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)svtDataList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v23 = v22;
  v16 = isIncludeIgnoreIndiv;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v17 )
      break;
    current = v23.fields.current;
    if ( !v23.fields.current )
      sub_B0D97C(v17);
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             (BattleServantData_o *)v23.fields.current,
                                             0LL,
                                             v16,
                                             0,
                                             0,
                                             0LL);
    v20 = Individuality__CheckSignedIndividualities(ConcatServantAndBuffIndividualityies, tvals, 0LL);
    if ( v20 )
    {
      if ( !v14 )
        sub_B0D97C(v20);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v14 )
LABEL_14:
    sub_B0D97C(v15);
  return (BattleServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
}


bool __fastcall BattleBuffData__CheckInvalidSacrificeIndiv(
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 InvalidSacrificeIndividualities; // x0
  System_Int32_array *v9; // x20
  bool v10; // w21
  System_Int32_array *Individualty; // x0
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  struct BattleBuffData_StaticFields *static_fields; // x8
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t v20; // w21
  int32_t v21; // w21
  __int64 v23; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = buffData;
  if ( (byte_4217E81 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_TypeInfo, method);
    sub_B0D8A4(&BuffList_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v6);
    buffData = (BattleBuffData_BuffData_o *)sub_B0D8A4(&int___TypeInfo, v7);
    byte_4217E81 = 1;
  }
  entity = 0LL;
  InvalidSacrificeIndividualities = (__int64)BattleBuffData__GetInvalidSacrificeIndividualities((const MethodInfo *)buffData);
  if ( !v2 )
    goto LABEL_27;
  v9 = (System_Int32_array *)InvalidSacrificeIndividualities;
  v10 = 1;
  Individualty = BattleBuffData_BuffData__GetIndividualty(v2, 1, 0, 0, 0LL);
  if ( !Individuality__CheckIndividualities(Individualty, v9, 0LL) )
  {
    InvalidSacrificeIndividualities = (__int64)BattleBuffData_TypeInfo->static_fields->s_buffMst;
    if ( InvalidSacrificeIndividualities )
      goto LABEL_11;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
    static_fields = BattleBuffData_TypeInfo->static_fields;
    static_fields->s_buffMst = (struct BuffMaster_o *)Master_WarQuestSelectionMaster;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->s_buffMst,
      Master_WarQuestSelectionMaster,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    InvalidSacrificeIndividualities = (__int64)BattleBuffData_TypeInfo->static_fields->s_buffMst;
    if ( InvalidSacrificeIndividualities )
    {
LABEL_11:
      InvalidSacrificeIndividualities = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)InvalidSacrificeIndividualities,
                                          &entity,
                                          v2->fields.buffId,
                                          (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (InvalidSacrificeIndividualities & 1) == 0 )
        return 0;
      if ( entity )
      {
        v20 = *(&entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        InvalidSacrificeIndividualities = BuffList__CheckType(40, v20, 0LL);
        if ( (InvalidSacrificeIndividualities & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_27;
          v21 = *(&entity->fields.id + 1);
          if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          if ( !BuffList__CheckType(41, v21, 0LL) )
            return 0;
        }
        InvalidSacrificeIndividualities = sub_B0D8BC(int___TypeInfo, 1LL);
        if ( InvalidSacrificeIndividualities )
        {
          if ( !*(_DWORD *)(InvalidSacrificeIndividualities + 24) )
          {
            v23 = sub_B0D9A8(InvalidSacrificeIndividualities);
            sub_B0D948(v23, 0LL);
          }
          *(_DWORD *)(InvalidSacrificeIndividualities + 32) = v2->fields.param;
          return Individuality__CheckIndividualities((System_Int32_array *)InvalidSacrificeIndividualities, v9, 0LL);
        }
      }
    }
LABEL_27:
    sub_B0D97C(InvalidSacrificeIndividualities);
  }
  return v10;
}


bool __fastcall BattleBuffData__CheckInvalidSacrificeIndivArray(
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffDataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  char v7; // w19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  v2 = buffDataList;
  if ( (byte_4217E82 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v4);
    buffDataList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B0D8A4(
                                                                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                                   v5);
    byte_4217E82 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v2 )
    sub_B0D97C(buffDataList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v2,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v10.fields.current, v6) )
    {
      v7 = 1;
      v8 = 2;
      goto LABEL_9;
    }
  }
  v8 = 0;
  v7 = 0;
LABEL_9:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v8 == 2) & v7;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__CommonTurnProgressing(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        int32_t defCondState,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  void *passiveList; // x0
  _BOOL8 v26; // x0
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v31; // x24
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__67_0; // x25
  Il2CppObject *v34; // x26
  struct BattleBuffData___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x25
  _BOOL8 v46; // x0
  struct BattleData_o *v47; // x8
  struct BaseBattleEvent_o *v48; // x0
  int v49; // w22
  __int64 v50; // x1
  __int64 v51; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x22
  struct BattleBuffData___c_StaticFields *v53; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__67_1; // x23
  Il2CppObject *v55; // x24
  struct BattleBuffData___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v67; // x23
  const MethodInfo *v68; // x3
  System_Collections_Generic_IEnumerable_T__o *v69; // x0
  const MethodInfo *v70; // x2
  BattleBuffData_o *v71; // x0
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x1
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+8h] [xbp-98h] BYREF
  int v76[2]; // [xsp+20h] [xbp-80h]
  int v77; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4217E03 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleBuffData_checkBuffClear__, logic);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v18);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v19);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v20);
    sub_B0D8A4(&Method_BattleBuffData___c__CommonTurnProgressing_b__67_0__, v21);
    sub_B0D8A4(&Method_BattleBuffData___c__CommonTurnProgressing_b__67_1__, v22);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v23);
    byte_4217E03 = 1;
  }
  memset(&i, 0, sizeof(i));
  v77 = 0;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  logic,
                                                                                                  isEndEnemyTurn);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v75,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v75;
        ;
        ((void (__fastcall *)(struct BaseBattleEvent_o *, BattleBuffData_o *, Il2CppObject *, bool, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._32_ProgressBuffTurn.method)(
          battleEvent,
          this,
          i.fields.current,
          isEndEnemyTurn,
          (unsigned int)defCondState,
          battleEvent->klass->vtable._33_MakeTurnCondStateByServant.methodPtr) )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v26 )
      break;
    if ( !logic )
      sub_B0D97C(v26);
    data = logic->fields.data;
    if ( !data )
      sub_B0D97C(v26);
    battleEvent = data->fields.battleEvent;
    if ( !battleEvent )
      sub_B0D97C(0LL);
  }
  v76[0] = 73;
  v77 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v77 = 0;
  v31 = this->fields.passiveList;
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
    v34 = (Il2CppObject *)static_fields->__9;
    _9__67_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v29,
                                                                          v30);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__67_0,
      v34,
      Method_BattleBuffData___c__CommonTurnProgressing_b__67_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v35 = BattleBuffData___c_TypeInfo->static_fields;
    v35->__9__67_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__67_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v35->__9__67_0,
      (System_Int32_array **)_9__67_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v31 )
    goto LABEL_51;
  passiveList = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                  (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v31,
                  (System_Predicate_T__o *)_9__67_0,
                  (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v24 )
    goto LABEL_51;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    (System_Collections_Generic_IEnumerable_T__o *)passiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v42 = this->fields.passiveList;
  v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v43,
                                                                   v44);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v45,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v42 )
    goto LABEL_51;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v42,
    (System_Predicate_T__o *)v45,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_51;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v75,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v75;
        ;
        ((void (__fastcall *)(struct BaseBattleEvent_o *, BattleBuffData_o *, Il2CppObject *, bool, _QWORD, Il2CppMethodPointer))v48->klass->vtable._32_ProgressBuffTurn.method)(
          v48,
          this,
          i.fields.current,
          isEndEnemyTurn,
          (unsigned int)defCondState,
          v48->klass->vtable._33_MakeTurnCondStateByServant.methodPtr) )
  {
    v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v46 )
      break;
    if ( !logic )
      sub_B0D97C(v46);
    v47 = logic->fields.data;
    if ( !v47 )
      sub_B0D97C(v46);
    v48 = v47->fields.battleEvent;
    if ( !v48 )
      sub_B0D97C(0LL);
  }
  v76[0] = 214;
  v49 = ++v77;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v49 && v76[v49 - 1] == 214 )
    v77 = v49 - 1;
  activeList = this->fields.activeList;
  passiveList = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  v53 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)passiveList + 23);
  _9__67_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v53->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( (*((_BYTE *)passiveList + 307) & 4) != 0 && !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      v53 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__67_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v50,
                                                                          v51);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__67_1,
      v55,
      Method_BattleBuffData___c__CommonTurnProgressing_b__67_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v56 = BattleBuffData___c_TypeInfo->static_fields;
    v56->__9__67_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__67_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v56->__9__67_1,
      (System_Int32_array **)_9__67_1,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  if ( !activeList )
    goto LABEL_51;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__67_1,
                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    All,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v64 = this->fields.activeList;
  v67 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v65,
                                                                   v66);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v67,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v64 )
    goto LABEL_51;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v64,
    (System_Predicate_T__o *)v67,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v69 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
                                                         0,
                                                         v68);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    v69,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
    v70);
  BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
    v71,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
    logic,
    v72);
  passiveList = (void *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v24,
                          v73);
  if ( ((unsigned __int8)passiveList & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateFieldBuff(logic, 0LL);
      return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    }
LABEL_51:
    sub_B0D97C(passiveList);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__CreateDummyBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  int32_t addOrder; // w8
  System_Int32_array **intervalData; // x1

  if ( (byte_4217E25 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_BuffData_TypeInfo, buff);
    byte_4217E25 = 1;
  }
  v4 = sub_B0D974(BattleBuffData_BuffData_TypeInfo, buff, method);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v4, 0LL);
  if ( !buff || !v4 )
    sub_B0D97C(v5);
  addOrder = buff->fields.addOrder;
  *(_BYTE *)(v4 + 370) = 1;
  *(_DWORD *)(v4 + 140) = addOrder;
  *(_DWORD *)(v4 + 372) = buff->fields.buffId;
  *(_BYTE *)(v4 + 33) = buff->fields.passive;
  *(_DWORD *)(v4 + 144) = buff->fields.state;
  intervalData = (System_Int32_array **)buff->fields.intervalData;
  *(_QWORD *)(v4 + 360) = intervalData;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 360), intervalData, v6, v7, v8, v9, v10, v11);
  return (BattleBuffData_BuffData_o *)v4;
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__DebugGetShowServantParamAll(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x22

  if ( (byte_4217DFB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v8);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass45_0__DebugGetShowServantParamAll_b__0__, v9);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass45_0_TypeInfo, v10);
    byte_4217DFB = 1;
  }
  v11 = sub_B0D974(BattleBuffData___c__DisplayClass45_0_TypeInfo, method, v2);
  BattleBuffData___c__DisplayClass45_0___ctor((BattleBuffData___c__DisplayClass45_0_o *)v11, 0LL);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo,
                                                                                                  v12,
                                                                                                  v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = v14;
  v22 = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o **)(v11 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
  v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v23,
                                                                               v24);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v25,
    (Il2CppObject *)v11,
    Method_BattleBuffData___c__DisplayClass45_0__DebugGetShowServantParamAll_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v25,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v25,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = *v22) == 0LL) )
  {
LABEL_8:
    sub_B0D97C(passiveList);
  }
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)passiveList,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


void __fastcall BattleBuffData__DelForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x21

  if ( (byte_4217E16 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, buffArray);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v6);
    sub_B0D8A4(&Method_BattleBuffData__DelForceBuff_b__89_0__, v7);
    byte_4217E16 = 1;
  }
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                              buffArray,
                                                                              method);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleBuffData__DelForceBuff_b__89_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v8,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData__DeleteDummyBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x23
  int32_t v6; // w20
  __int64 v7; // x21
  __int64 v8; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x23
  int32_t v10; // w20
  __int64 v11; // x21
  __int64 v12; // x8

  v2 = this;
  if ( (byte_4217E6E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v3);
    this = (BattleBuffData_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__,
                                 v4);
    byte_4217E6E = 1;
  }
  activeList = v2->fields.activeList;
  if ( !activeList )
    goto LABEL_26;
  v6 = activeList->fields._size - 1;
  if ( v6 >= 0 )
  {
    v7 = 8LL * v6 + 32;
    do
    {
      if ( activeList->fields._size <= (unsigned int)v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v8 = *(__int64 *)((char *)&activeList->fields._items->obj.klass + v7);
      if ( !v8 )
        break;
      if ( *(_BYTE *)(v8 + 370) )
      {
        this = (BattleBuffData_o *)v2->fields.activeList;
        if ( !this )
          break;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v6,
          (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      if ( --v6 < 0 )
        goto LABEL_15;
      activeList = v2->fields.activeList;
      v7 -= 8LL;
    }
    while ( activeList );
LABEL_26:
    sub_B0D97C(this);
  }
LABEL_15:
  passiveList = v2->fields.passiveList;
  if ( !passiveList )
    goto LABEL_26;
  v10 = passiveList->fields._size - 1;
  if ( v10 >= 0 )
  {
    v11 = 8LL * v10 + 32;
    while ( 1 )
    {
      if ( passiveList->fields._size <= (unsigned int)v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v12 = *(__int64 *)((char *)&passiveList->fields._items->obj.klass + v11);
      if ( !v12 )
        goto LABEL_26;
      if ( *(_BYTE *)(v12 + 370) )
      {
        this = (BattleBuffData_o *)v2->fields.passiveList;
        if ( !this )
          goto LABEL_26;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v10,
          (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      if ( --v10 < 0 )
        return;
      passiveList = v2->fields.passiveList;
      v11 -= 8LL;
      if ( !passiveList )
        goto LABEL_26;
    }
  }
}


void __fastcall BattleBuffData__DirectUpdateWaitIntervalBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *updateWaitIntervalBuffList; // x20
  void *v11; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__27_0; // x21
  Il2CppObject *v14; // x22
  struct BattleBuffData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4217DEA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v5);
    sub_B0D8A4(&Method_BattleBuffData___c__DirectUpdateWaitIntervalBuff_b__27_0__, v6);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v7);
    byte_4217DEA = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.updateWaitIntervalBuffList, 0LL) )
  {
    updateWaitIntervalBuffList = this->fields.updateWaitIntervalBuffList;
    v11 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v11 = BattleBuffData___c_TypeInfo;
    }
    static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)v11 + 23);
    _9__27_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (*((_BYTE *)v11 + 307) & 4) != 0 && !*((_DWORD *)v11 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                        System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                        v8,
                                                                                        v9);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__27_0,
        v14,
        Method_BattleBuffData___c__DirectUpdateWaitIntervalBuff_b__27_0__,
        (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      v15 = BattleBuffData___c_TypeInfo->static_fields;
      v15->__9__27_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__27_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v15->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( !updateWaitIntervalBuffList
      || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)updateWaitIntervalBuffList,
            (System_Action_T__o *)_9__27_0,
            (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
          (v11 = this->fields.updateWaitIntervalBuffList) == 0LL) )
    {
      sub_B0D97C(v11);
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__ExistsTargetIntervalBuff(
        BattleBuffData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  BattleBuffData_BuffData_array *AllIntervalBuffArray; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20

  if ( (byte_4217E7E & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BattleBuffData_BuffData____67954592, *(_QWORD *)&targetType);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass243_0__ExistsTargetIntervalBuff_b__0__, v7);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass243_0_TypeInfo, v8);
    byte_4217E7E = 1;
  }
  v9 = sub_B0D974(BattleBuffData___c__DisplayClass243_0_TypeInfo, *(_QWORD *)&targetType, method);
  BattleBuffData___c__DisplayClass243_0___ctor((BattleBuffData___c__DisplayClass243_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v9 + 24) = targetType;
  AllIntervalBuffArray = BattleBuffData__GetAllIntervalBuffArray(this, v17);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_BattleBuffData___c__DisplayClass243_0__ExistsTargetIntervalBuff_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)AllIntervalBuffArray,
           (System_Func_T__bool__o *)v21,
           (const MethodInfo_17071E4 *)Method_BasicHelper_Any_BattleBuffData_BuffData____67954592);
}


BattleBuffData_ActValueResponse_o *__fastcall BattleBuffData__GetActValueDetail(
        BattleBuffData_o *this,
        BattleBuffData_ActValueRequest_o *actValueRequest,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  struct BattleBuffData_CheckIndividualitiesData_o *CheckIndividualitiesData_k__BackingField; // x8
  BattleBuffData_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  int conditionalAuraBuff; // w9
  int32_t v10; // w20
  int32_t v11; // w21
  System_String_o *v12; // x22
  int32_t v13; // w23
  BattleBuffData_ActValueResponse_o *v14; // x24
  const MethodInfo *v16; // [xsp+18h] [xbp-58h]
  int32_t lowerParam; // [xsp+2Ch] [xbp-44h] BYREF
  System_String_o *missText; // [xsp+30h] [xbp-40h] BYREF
  int32_t upperParam; // [xsp+3Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4217E41 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B0D8A4(&BattleBuffData_ActValueResponse_TypeInfo, actValueRequest);
    byte_4217E41 = 1;
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
                                     v16),
        !v6) )
  {
    sub_B0D97C(this);
  }
  conditionalAuraBuff = (int)v6->fields.conditionalAuraBuff;
  v10 = upperParam;
  v11 = lowerParam;
  v12 = missText;
  v13 = (_DWORD)this - conditionalAuraBuff;
  v14 = (BattleBuffData_ActValueResponse_o *)sub_B0D974(BattleBuffData_ActValueResponse_TypeInfo, v7, v8);
  BattleBuffData_ActValueResponse___ctor(v14, actValueRequest, v13, v10, v11, v12, 0LL);
  return v14;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetAllCommandAssistBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  BattleBuffData___c_c *v9; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__201_0; // x20
  Il2CppObject *v12; // x21
  struct BattleBuffData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4217E60 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v4);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_BattleBuffData___c__GetAllCommandAssistBuff_b__201_0__, v6);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v7);
    byte_4217E60 = 1;
  }
  passiveList = this->fields.passiveList;
  v9 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v9 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__201_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__201_0;
  if ( !_9__201_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__201_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           method,
                                                                           v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__201_0,
      v12,
      Method_BattleBuffData___c__GetAllCommandAssistBuff_b__201_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v13 = BattleBuffData___c_TypeInfo->static_fields;
    v13->__9__201_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__201_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__201_0,
      (System_Int32_array **)_9__201_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !passiveList )
    sub_B0D97C(v9);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)_9__201_0,
                                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetAllCommandCodeBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  BattleBuffData___c_c *v9; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__200_0; // x20
  Il2CppObject *v12; // x21
  struct BattleBuffData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4217E5F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v4);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_BattleBuffData___c__GetAllCommandCodeBuff_b__200_0__, v6);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v7);
    byte_4217E5F = 1;
  }
  passiveList = this->fields.passiveList;
  v9 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v9 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__200_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__200_0;
  if ( !_9__200_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__200_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           method,
                                                                           v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__200_0,
      v12,
      Method_BattleBuffData___c__GetAllCommandCodeBuff_b__200_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v13 = BattleBuffData___c_TypeInfo->static_fields;
    v13->__9__200_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__200_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__200_0,
      (System_Int32_array **)_9__200_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !passiveList )
    sub_B0D97C(v9);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)_9__200_0,
                                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllConnectedCommandCardBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  void *All; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__228_0; // x22
  Il2CppObject *v20; // x23
  BattleServantConfConponent_o *p__9__228_0; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x20
  struct BattleBuffData___c_StaticFields *v31; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__228_1; // x21
  Il2CppObject *v33; // x22
  BattleServantConfConponent_o *p__9__228_1; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_T__o *v41; // x0

  if ( (byte_4217E72 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__228_0__, v10);
    sub_B0D8A4(&Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__228_1__, v11);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v12);
    byte_4217E72 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  activeList = this->fields.activeList;
  All = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__228_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__228_0;
  if ( !_9__228_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__228_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v14,
                                                                           v15);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__228_0,
      v20,
      Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__228_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__228_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__228_0;
    p__9__228_0->klass = (BattleServantConfConponent_c *)_9__228_0;
    sub_B0D840(p__9__228_0, (System_Int32_array **)_9__228_0, v22, v23, v24, v25, v26, v27);
  }
  if ( !activeList )
    goto LABEL_23;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
          (System_Predicate_T__o *)_9__228_0,
          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v13 )
    goto LABEL_23;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  All = BattleBuffData___c_TypeInfo;
  passiveList = this->fields.passiveList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v31 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__228_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v31->__9__228_1;
  if ( !_9__228_1 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      v31 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)v31->__9;
    _9__228_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v28,
                                                                           v29);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__228_1,
      v33,
      Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__228_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__228_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__228_1;
    p__9__228_1->klass = (BattleServantConfConponent_c *)_9__228_1;
    sub_B0D840(p__9__228_1, (System_Int32_array **)_9__228_1, v35, v36, v37, v38, v39, v40);
  }
  if ( !passiveList )
LABEL_23:
    sub_B0D97C(All);
  v41 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                         (System_Predicate_T__o *)_9__228_1,
                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    v41,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllIntervalBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  BattleBuffData___c_c *v11; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__242_0; // x20
  Il2CppObject *v14; // x21
  BattleServantConfConponent_o *p__9__242_0; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4217E7D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v3);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_BattleBuffData___c__GetAllIntervalBuffArray_b__242_0__, v6);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v7);
    byte_4217E7D = 1;
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffEnumerable(this, method);
  v11 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v11 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__242_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__242_0;
  if ( !_9__242_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__242_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                     v8,
                                                                                     v9);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__242_0,
      v14,
      Method_BattleBuffData___c__GetAllIntervalBuffArray_b__242_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    p__9__242_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__242_0;
    p__9__242_0->klass = (BattleServantConfConponent_c *)_9__242_0;
    sub_B0D840(p__9__242_0, (System_Int32_array **)_9__242_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v10,
          (System_Func_TSource__bool__o *)_9__242_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            v22,
                                            (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAvaliableActiveBuffArray(
        BattleBuffData_o *this,
        System_Predicate_BattleBuffData_BuffData__o *conditionsToAdd,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  void *All; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__102_0; // x20
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  Il2CppObject *v25; // x21
  struct BattleBuffData___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4217E1D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, conditionsToAdd);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v6);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_BattleBuffData___c__GetAvaliableActiveBuffArray_b__102_0__, v8);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass102_0__GetAvaliableActiveBuffArray_b__1__, v9);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass102_0_TypeInfo, v10);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v11);
    byte_4217E1D = 1;
  }
  v12 = sub_B0D974(BattleBuffData___c__DisplayClass102_0_TypeInfo, conditionsToAdd, method);
  BattleBuffData___c__DisplayClass102_0___ctor((BattleBuffData___c__DisplayClass102_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = conditionsToAdd;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)conditionsToAdd,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  activeList = this->fields.activeList;
  if ( !*(_QWORD *)(v12 + 16) )
  {
    All = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      All = BattleBuffData___c_TypeInfo;
    }
    static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
    _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__102_0;
    if ( !_9__102_0 )
    {
      if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
      {
        j_il2cpp_runtime_class_init_0(All);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                             System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                             v20,
                                                                             v21);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__102_0,
        v25,
        Method_BattleBuffData___c__GetAvaliableActiveBuffArray_b__102_0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v26 = BattleBuffData___c_TypeInfo->static_fields;
      v26->__9__102_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__102_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v26->__9__102_0,
        (System_Int32_array **)_9__102_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    if ( activeList )
      goto LABEL_16;
LABEL_18:
    sub_B0D97C(All);
  }
  _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v20,
                                                                         v21);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    _9__102_0,
    (Il2CppObject *)v12,
    Method_BattleBuffData___c__DisplayClass102_0__GetAvaliableActiveBuffArray_b__1__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !activeList )
    goto LABEL_18;
LABEL_16:
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
          (System_Predicate_T__o *)_9__102_0,
          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_18;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall BattleBuffData__GetBuffGeneralParamList(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfArray,
        System_Int32_array *opArray,
        bool isRec,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_int__o *v18; // x19
  BuffList_ActInfo_o *ActInfo; // x24
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v21; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v23; // x20
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x20
  bool v28; // w25
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  BattleBuffData_BuffData_o *v37; // x0
  BattleBuffData_BuffData_o *v38; // x26
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0

  if ( (byte_4217E4F & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_4217E4F = 1;
  }
  v18 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&act,
                                                    selfArray);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v21 = BattleBuffData__AllBuffValidEnumerable(this, 1, v20);
  if ( !v21 )
    sub_B0D97C(0LL);
  klass = v21->klass;
  v23 = v21;
  if ( *(_WORD *)&v21->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v21->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AA67A0(v21, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v23,
          *(_QWORD *)(p_method + 8));
  if ( !v27 )
    sub_B0D97C(0LL);
  v28 = isRec;
  while ( 1 )
  {
    v29 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_19;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_19:
      v32 = sub_AA67A0(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v27, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v35 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_26;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_26:
      v36 = sub_AA67A0(v27, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v37 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v27, *(_QWORD *)(v36 + 8));
    v38 = v37;
    if ( !v37 )
      sub_B0D97C(0LL);
    if ( !v37->fields._isRemove
      && BattleBuffData_BuffData__CheckCond_22769080(v37, this, ActInfo, selfArray, opArray, v28, 0LL) )
    {
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v38->fields.generalParams, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v18 )
          sub_B0D97C(IsNullOrEmpty);
        System_Collections_Generic_List_int___AddRange(
          v18,
          (System_Collections_Generic_IEnumerable_T__o *)v38->fields.generalParams,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
    }
  }
  v40 = *(_QWORD *)v27;
  if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
  {
    v41 = 0LL;
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
        goto LABEL_38;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_38:
    v43 = sub_AA67A0(v27, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v27, *(_QWORD *)(v43 + 8));
  return v18;
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

  if ( (byte_4217E26 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, types);
    byte_4217E26 = 1;
  }
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                                              this,
                                                              isExcludeInterval,
                                                              (const MethodInfo *)checkIndividuality);
  v10 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v9,
                                           (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  return BattleBuffData__getBuffList_30786564(this, types, checkIndividuality, v10, v11);
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
  __int64 v12; // x1
  __int64 v13; // x2
  BattleBuffData_CheckIndividualitiesData_o *v14; // x24
  const MethodInfo *v15; // x6

  v10 = this;
  if ( (byte_4217E52 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&act);
    byte_4217E52 = 1;
  }
  if ( !svtData || (this = (BattleBuffData_o *)BattleServantData__getRevengeTargetUniqueId(svtData, 0LL), !data) )
    sub_B0D97C(this);
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v12,
                                                       v13);
  BattleBuffData_CheckIndividualitiesData___ctor(v14, svtData, ServantData, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__getBuffList_30806472(v10, act, v14, isRec, 0, 0LL, v15);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetClassIconEffectBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *classIconAuraEffectBuffList; // x19
  BattleBuffData___c_c *v9; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__252_0; // x20
  Il2CppObject *v12; // x21
  BattleServantConfConponent_o *p__9__252_0; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4217E85 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v4);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_BattleBuffData___c__GetClassIconEffectBuffList_b__252_0__, v6);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v7);
    byte_4217E85 = 1;
  }
  classIconAuraEffectBuffList = this->fields.classIconAuraEffectBuffList;
  v9 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v9 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__252_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__252_0;
  if ( !_9__252_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__252_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           method,
                                                                           v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__252_0,
      v12,
      Method_BattleBuffData___c__GetClassIconEffectBuffList_b__252_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__252_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__252_0;
    p__9__252_0->klass = (BattleServantConfConponent_c *)_9__252_0;
    sub_B0D840(p__9__252_0, (System_Int32_array **)_9__252_0, v14, v15, v16, v17, v18, v19);
  }
  if ( !classIconAuraEffectBuffList )
    sub_B0D97C(v9);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)classIconAuraEffectBuffList,
                                                                         (System_Predicate_T__o *)_9__252_0,
                                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetCommandCardBuffArray(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        int32_t targetBuffType,
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
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v20; // x2
  DataManager_c *klass; // x8
  DataManager_o *v22; // x20
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  __int64 v26; // x20
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  BattleBuffData_BuffData_o *v35; // x25
  const MethodInfo *v36; // x4
  _BOOL8 v37; // x0
  _BOOL8 v38; // x0
  int32_t v39; // w26
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // [xsp+8h] [xbp-68h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4217E70 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, commandData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4217E70 = 1;
  }
  entity = 0LL;
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  commandData,
                                                                                                  *(_QWORD *)&targetBuffType);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v20);
  if ( !Instance )
    goto LABEL_48;
  klass = Instance->klass;
  v22 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v25 = sub_AA67A0(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  if ( !v26 )
    sub_B0D97C(0LL);
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
      v30 = sub_AA67A0(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v34 = sub_AA67A0(v26, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v35 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    v37 = BattleBuffData__CheckCommandCardBuffActive(this, commandData, v35, 1, v36);
    if ( v37 )
    {
      entity = 0LL;
      if ( !v35 )
        sub_B0D97C(v37);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B0D97C(v37);
      v38 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &entity,
              v35->fields.buffId,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( v38 )
      {
        if ( !entity )
          sub_B0D97C(v38);
        v39 = *(&entity->fields.id + 1);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(targetBuffType, v39, 0LL) )
        {
          if ( !v45 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v45,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
      }
    }
  }
  v40 = *(_QWORD *)v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v41 = 0LL;
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_40;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_40:
    v43 = sub_AA67A0(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v26, *(_QWORD *)(v43 + 8));
  Instance = (DataManager_o *)v45;
  if ( !v45 )
LABEL_48:
    sub_B0D97C(Instance);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v45,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetCommandCardTypeChangeBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *result; // x0
  const MethodInfo *v4; // x4
  BattleBuffData_BuffData_array *BuffList_30786564; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x8
  __int64 v8; // x0

  if ( (byte_4217E6C & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TYPE___TypeInfo, method);
    byte_4217E6C = 1;
  }
  result = (BattleBuffData_BuffData_o *)sub_B0D8BC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !result )
    sub_B0D97C(0LL);
  if ( !result->fields.count )
    goto LABEL_11;
  *(_DWORD *)&result->fields.isUse = 156;
  BuffList_30786564 = BattleBuffData__getBuffList_30786564(this, (BuffList_TYPE_array *)result, 0LL, 0LL, v4);
  result = (BattleBuffData_BuffData_o *)BattleBuffData__CheckAndGetFixedBuffArray(this, BuffList_30786564, v6);
  if ( result )
  {
    v7 = *(_QWORD *)&result->fields.count;
    if ( v7 )
    {
      if ( (_DWORD)v7 )
        return *(BattleBuffData_BuffData_o **)&result->fields.isUse;
LABEL_11:
      v8 = sub_B0D9A8(result);
      sub_B0D948(v8, 0LL);
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
  __int64 v9; // x1
  bool IsConstantMasterIndvAddBuffActive; // w24
  __int64 v11; // x1
  __int64 v12; // x2
  BattleBuffData_CheckIndividualitiesData_o *v13; // x0
  BattleBuffData_CheckIndividualitiesData_o *v14; // x23
  BattleServantData_o *v15; // x1
  BattleServantData_o *v16; // x2
  const MethodInfo *v17; // x6

  if ( (byte_4217E77 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, selfSvt);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    byte_4217E77 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12);
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
  return BattleBuffData__getBuffList_30806472(this, 102, v14, 0, checkOnly, 0LL, v17);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetCurrentWarBoardNotAttackedBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentAllBaffList; // x19
  BattleBuffData___c_c *v12; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__233_0; // x20
  Il2CppObject *v15; // x21
  BattleServantConfConponent_o *p__9__233_0; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_4217E75 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v4);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleBuffData___c__GetCurrentWarBoardNotAttackedBuff_b__233_0__, v7);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v8);
    byte_4217E75 = 1;
  }
  CurrentAllBaffList = BattleBuffData__getCurrentAllBaffList(this, 1, v2);
  v12 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v12 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__233_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__233_0;
  if ( !_9__233_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__233_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                     v9,
                                                                                     v10);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__233_0,
      v15,
      Method_BattleBuffData___c__GetCurrentWarBoardNotAttackedBuff_b__233_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    p__9__233_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__233_0;
    p__9__233_0->klass = (BattleServantConfConponent_c *)_9__233_0;
    sub_B0D840(p__9__233_0, (System_Int32_array **)_9__233_0, v17, v18, v19, v20, v21, v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)CurrentAllBaffList,
          (System_Func_TSource__bool__o *)_9__233_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                         v23,
                                                                         (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetEffectBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  void *All; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__218_0; // x22
  Il2CppObject *v25; // x23
  BattleServantConfConponent_o *p__9__218_0; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x20
  struct BattleBuffData___c_StaticFields *v36; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__218_1; // x21
  Il2CppObject *v38; // x22
  BattleServantConfConponent_o *p__9__218_1; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_IEnumerable_T__o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  BattleBuffData___c_c *v49; // x0
  struct BattleBuffData___c_StaticFields *v50; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__218_2; // x20
  Il2CppObject *v52; // x21
  BattleServantConfConponent_o *p__9__218_2; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  BattleBuffData___c_c *v62; // x0
  struct BattleBuffData___c_StaticFields *v63; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__218_3; // x20
  Il2CppObject *v65; // x21
  BattleServantConfConponent_o *p__9__218_3; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7

  if ( (byte_4217E6A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, method);
    sub_B0D8A4(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v11);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B0D8A4(&Method_BattleBuffData___c__GetEffectBuffList_b__218_0__, v13);
    sub_B0D8A4(&Method_BattleBuffData___c__GetEffectBuffList_b__218_1__, v14);
    sub_B0D8A4(&Method_BattleBuffData___c__GetEffectBuffList_b__218_2__, v15);
    sub_B0D8A4(&Method_BattleBuffData___c__GetEffectBuffList_b__218_3__, v16);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v17);
    byte_4217E6A = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  All = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__218_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__218_0;
  if ( !_9__218_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__218_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v19,
                                                                           v20);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__218_0,
      v25,
      Method_BattleBuffData___c__GetEffectBuffList_b__218_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__218_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__218_0;
    p__9__218_0->klass = (BattleServantConfConponent_c *)_9__218_0;
    sub_B0D840(p__9__218_0, (System_Int32_array **)_9__218_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !passiveList )
    goto LABEL_39;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
          (System_Predicate_T__o *)_9__218_0,
          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v18 )
    goto LABEL_39;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  All = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v36 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__218_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v36->__9__218_1;
  if ( !_9__218_1 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      v36 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__218_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v33,
                                                                           v34);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__218_1,
      v38,
      Method_BattleBuffData___c__GetEffectBuffList_b__218_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__218_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__218_1;
    p__9__218_1->klass = (BattleServantConfConponent_c *)_9__218_1;
    sub_B0D840(p__9__218_1, (System_Int32_array **)_9__218_1, v40, v41, v42, v43, v44, v45);
  }
  if ( !activeList )
LABEL_39:
    sub_B0D97C(All);
  v46 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__218_1,
                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    v46,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v49 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v49 = BattleBuffData___c_TypeInfo;
  }
  v50 = v49->static_fields;
  _9__218_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v50->__9__218_2;
  if ( !_9__218_2 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v50 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)v50->__9;
    _9__218_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                            v47,
                                                                            v48);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__218_2,
      v52,
      Method_BattleBuffData___c__GetEffectBuffList_b__218_2__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    p__9__218_2 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__218_2;
    p__9__218_2->klass = (BattleServantConfConponent_c *)_9__218_2;
    sub_B0D840(p__9__218_2, (System_Int32_array **)_9__218_2, v54, v55, v56, v57, v58, v59);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__218_2,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  v62 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v62 = BattleBuffData___c_TypeInfo;
  }
  v63 = v62->static_fields;
  _9__218_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v63->__9__218_3;
  if ( !_9__218_3 )
  {
    if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v63 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__218_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v60,
                                                                           v61);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__218_3,
      v65,
      Method_BattleBuffData___c__GetEffectBuffList_b__218_3__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    p__9__218_3 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__218_3;
    p__9__218_3->klass = (BattleServantConfConponent_c *)_9__218_3;
    sub_B0D840(p__9__218_3, (System_Int32_array **)_9__218_3, v67, v68, v69, v70, v71, v72);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v18,
    (System_Predicate_T__o *)_9__218_3,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18;
}


int32_t __fastcall BattleBuffData__GetFamilyLinkageIdMax(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  __int64 v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_HashSet_int__o *v19; // x22
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v29; // x20
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x20
  System_Action_int__o **v34; // x22
  System_Action_int__o **v35; // x23
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  BattleBuffData_BuffData_o *v44; // x0
  BattleBuffData_BuffData_o *v45; // x24
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_int__o *v49; // x26
  System_Collections_Generic_IEnumerable_T__o *v50; // x25
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array *FamilyLinkageIdArray; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  System_Action_int__o *v60; // x25
  System_Collections_Generic_IEnumerable_T__o *v61; // x24
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o **v73; // [xsp+0h] [xbp-60h]

  if ( (byte_4217E78 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, method);
    sub_B0D8A4(&System_Action_int__TypeInfo, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_int___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v7);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass237_0__GetFamilyLinkageIdMax_b__0__, v13);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass237_0__GetFamilyLinkageIdMax_b__1__, v14);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass237_0_TypeInfo, v15);
    byte_4217E78 = 1;
  }
  v16 = sub_B0D974(BattleBuffData___c__DisplayClass237_0_TypeInfo, method, v2);
  BattleBuffData___c__DisplayClass237_0___ctor((BattleBuffData___c__DisplayClass237_0_o *)v16, 0LL);
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( !v16 )
    goto LABEL_43;
  *(_QWORD *)(v16 + 16) = v19;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
  v20 = BattleBuffData__AllBuffEnumerable(this, v27);
  if ( !v20 )
    goto LABEL_43;
  klass = v20->klass;
  v29 = v20;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AA67A0(v20, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v73 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o **)(v16 + 16);
  v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v29,
          *(_QWORD *)(p_method + 8));
  if ( !v33 )
    sub_B0D97C(0LL);
  v34 = (System_Action_int__o **)(v16 + 24);
  v35 = (System_Action_int__o **)(v16 + 32);
  while ( 1 )
  {
    v36 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_17;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_17:
      v39 = sub_AA67A0(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v33, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v42 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_24;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_24:
      v43 = sub_AA67A0(v33, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v44 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v33, *(_QWORD *)(v43 + 8));
    v45 = v44;
    if ( !v44 )
      sub_B0D97C(0LL);
    FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(v44, 0LL);
    v49 = *v34;
    v50 = (System_Collections_Generic_IEnumerable_T__o *)FamilyLinkageTargetIdArray;
    if ( !*v34 )
    {
      v49 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v47, v48);
      System_Action_int____ctor(
        v49,
        (Il2CppObject *)v16,
        Method_BattleBuffData___c__DisplayClass237_0__GetFamilyLinkageIdMax_b__0__,
        (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
      *v34 = v49;
      sub_B0D840((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)v49, v51, v52, v53, v54, v55, v56);
    }
    BasicHelper__ForEach_int_(
      v50,
      (System_Action_T__o *)v49,
      (const MethodInfo_1707E48 *)Method_BasicHelper_ForEach_int___);
    FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(v45, 0LL);
    v60 = *v35;
    v61 = (System_Collections_Generic_IEnumerable_T__o *)FamilyLinkageIdArray;
    if ( !*v35 )
    {
      v60 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v58, v59);
      System_Action_int____ctor(
        v60,
        (Il2CppObject *)v16,
        Method_BattleBuffData___c__DisplayClass237_0__GetFamilyLinkageIdMax_b__1__,
        (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
      *v35 = v60;
      sub_B0D840((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)v60, v62, v63, v64, v65, v66, v67);
    }
    BasicHelper__ForEach_int_(
      v61,
      (System_Action_T__o *)v60,
      (const MethodInfo_1707E48 *)Method_BasicHelper_ForEach_int___);
  }
  v68 = *(_QWORD *)v33;
  if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
  {
    v69 = 0LL;
    v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      ++v69;
      v70 += 4;
      if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
        goto LABEL_36;
    }
    v71 = v68 + 16LL * *v70 + 312;
  }
  else
  {
LABEL_36:
    v71 = sub_AA67A0(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v71)(v33, *(_QWORD *)(v71 + 8));
  v20 = *v73;
  if ( !*v73 )
LABEL_43:
    sub_B0D97C(v20);
  if ( SLODWORD(v20[2].klass) < 1 )
    return 0;
  else
    return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v20, 0LL);
}


BattleBuffData_FieldChangeData_array *__fastcall BattleBuffData__GetFieldChangeArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v13; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v15; // x20
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x20
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x1
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0

  if ( (byte_4217E7C & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v4);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_FieldChangeData__TypeInfo, v10);
    byte_4217E7C = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_FieldChangeData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData___ctor__);
  v13 = BattleBuffData__AllBuffValidEnumerable(this, 1, v12);
  if ( !v13 )
    goto LABEL_38;
  klass = v13->klass;
  v15 = v13;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(v13, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v15,
          *(_QWORD *)(p_method + 8));
  if ( !v19 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_15;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_15:
      v23 = sub_AA67A0(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v26 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_22;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_22:
      v27 = sub_AA67A0(v19, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_B0D97C(0LL);
    v29 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v28 + 312);
    if ( v29 )
    {
      if ( !v11 )
        sub_B0D97C(v28);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        v29,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__Add__);
    }
  }
  v30 = *(_QWORD *)v19;
  if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
  {
    v31 = 0LL;
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
        goto LABEL_32;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_32:
    v33 = sub_AA67A0(v19, System_IDisposable_TypeInfo, 0LL);
  }
  v13 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(
                                                                               v19,
                                                                               *(_QWORD *)(v33 + 8));
  if ( !v11 )
LABEL_38:
    sub_B0D97C(v13);
  return (BattleBuffData_FieldChangeData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetFirstMatchCondBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BuffList_ActInfo_o *ActInfo; // x22
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v15; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x19
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x19
  bool v22; // w23
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  BattleBuffData_BuffData_o *v31; // x0
  BattleBuffData_BuffData_o *v32; // x24
  int v33; // w8
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-50h]

  if ( (byte_4217E54 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_4217E54 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v15 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v14);
  if ( !v15 )
    sub_B0D97C(0LL);
  klass = v15->klass;
  v17 = v15;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AA67A0(v15, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v17,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_B0D97C(0LL);
  v22 = isRec;
  while ( 1 )
  {
    v23 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_19;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_19:
      v26 = sub_AA67A0(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v21, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_26;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_26:
      v30 = sub_AA67A0(v21, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v31 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v21, *(_QWORD *)(v30 + 8));
    v32 = v31;
    if ( !v31 )
      sub_B0D97C(0LL);
    if ( BattleBuffData_BuffData__CheckCond(v31, this, ActInfo, checkIndividualities, v22, 0LL) )
    {
      v33 = 68;
      goto LABEL_32;
    }
  }
  v32 = 0LL;
  v33 = 66;
LABEL_32:
  v39 = v33;
  v34 = *(_QWORD *)v21;
  if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
  {
    v35 = 0LL;
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
        goto LABEL_36;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_36:
    v37 = sub_AA67A0(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v21, *(_QWORD *)(v37 + 8));
  if ( v39 == 66 )
    return 0LL;
  return v32;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetFixBuffArray(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x23
  const MethodInfo *v13; // x6
  System_Collections_Generic_IEnumerable_TSource__o *BuffList_30806472; // x0

  if ( (byte_4217E53 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleBuffData_IsFixBuff__, *(_QWORD *)&act);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v9);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11);
    byte_4217E53 = 1;
  }
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             *(_QWORD *)&act,
                                                                             checkIndividualities);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleBuffData_IsFixBuff__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  BuffList_30806472 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList_30806472(
                                                                             this,
                                                                             act,
                                                                             checkIndividualities,
                                                                             isRec,
                                                                             0,
                                                                             (System_Func_BattleBuffData_BuffData__bool__o *)v12,
                                                                             v13);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            BuffList_30806472,
                                            (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetFixedBuffArray(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *targetIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *BuffList_30786564; // x1
  const MethodInfo *v7; // x2

  BuffList_30786564 = BattleBuffData__getBuffList_30786564(this, types, targetIndividualities, checklist, method);
  return BattleBuffData__CheckAndGetFixedBuffArray(this, BuffList_30786564, v7);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__GetGrantBuffTypeArray(
        BattleBuffData_o *this,
        bool isIncludePassive,
        bool isIncludeActive,
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
  __int64 v20; // x24
  System_Collections_Generic_List_int__o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_int__o **v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_int__o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x22
  const MethodInfo *v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PassiveList; // x23
  BattleBuffData___c_c *v45; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__115_1; // x24
  Il2CppObject *v48; // x25
  struct BattleBuffData___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_T__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_IEnumerable_TSource__o *ActiveList; // x20
  BattleBuffData___c_c *v60; // x8
  struct BattleBuffData___c_StaticFields *v61; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__115_2; // x21
  Il2CppObject *v63; // x23
  struct BattleBuffData___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Collections_Generic_IEnumerable_T__o *v71; // x0

  if ( (byte_4217E28 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, isIncludePassive);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v9);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B0D8A4(&Method_BattleBuffData___c__GetGrantBuffTypeArray_b__115_1__, v15);
    sub_B0D8A4(&Method_BattleBuffData___c__GetGrantBuffTypeArray_b__115_2__, v16);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass115_0__GetGrantBuffTypeArray_b__0__, v17);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass115_0_TypeInfo, v18);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v19);
    byte_4217E28 = 1;
  }
  v20 = sub_B0D974(BattleBuffData___c__DisplayClass115_0_TypeInfo, isIncludePassive, isIncludeActive);
  BattleBuffData___c__DisplayClass115_0___ctor((BattleBuffData___c__DisplayClass115_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_26;
  *(_QWORD *)(v20 + 24) = this;
  v28 = (System_Collections_Generic_List_int__o **)(v20 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  v31 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v29, v30);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v20 + 16) = v31;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v38,
                                                                               v39);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v40,
    (Il2CppObject *)v20,
    Method_BattleBuffData___c__DisplayClass115_0__GetGrantBuffTypeArray_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  if ( isIncludePassive )
  {
    PassiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getPassiveList(this, 1, v41);
    v45 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v45 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v45->static_fields;
    _9__115_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__115_1;
    if ( !_9__115_1 )
    {
      if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)static_fields->__9;
      _9__115_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                       v42,
                                                                                       v43);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__115_1,
        v48,
        Method_BattleBuffData___c__GetGrantBuffTypeArray_b__115_1__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v49 = BattleBuffData___c_TypeInfo->static_fields;
      v49->__9__115_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__115_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v49->__9__115_1,
        (System_Int32_array **)_9__115_1,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    v56 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           PassiveList,
                                                           (System_Func_TSource__bool__o *)_9__115_1,
                                                           (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v56,
      (System_Action_T__o *)v40,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  if ( isIncludeActive )
  {
    ActiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getActiveList(this, 1, v41);
    v60 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v60 = BattleBuffData___c_TypeInfo;
    }
    v61 = v60->static_fields;
    _9__115_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v61->__9__115_2;
    if ( !_9__115_2 )
    {
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        v61 = BattleBuffData___c_TypeInfo->static_fields;
      }
      v63 = (Il2CppObject *)v61->__9;
      _9__115_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                       v57,
                                                                                       v58);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__115_2,
        v63,
        Method_BattleBuffData___c__GetGrantBuffTypeArray_b__115_2__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v64 = BattleBuffData___c_TypeInfo->static_fields;
      v64->__9__115_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__115_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v64->__9__115_2,
        (System_Int32_array **)_9__115_2,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
    }
    v71 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           ActiveList,
                                                           (System_Func_TSource__bool__o *)_9__115_2,
                                                           (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v71,
      (System_Action_T__o *)v40,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  v21 = *v28;
  if ( !*v28 )
LABEL_26:
    sub_B0D97C(v21);
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleBuffData__GetIgnoreAuraBuffIds(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Int32_array *result; // x0
  BattleServantConfConponent_o *p_ignoreAuraBuffIds; // x19
  System_Int32_array *ignoreAuraBuffIds; // t1
  DataManager_o *Instance; // x0
  System_Int32_array **ValueArray; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4217E61 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_7284/*"IGNORE_AURA_BUFF"*/, v4);
    byte_4217E61 = 1;
  }
  ignoreAuraBuffIds = this->fields.ignoreAuraBuffIds;
  p_ignoreAuraBuffIds = (BattleServantConfConponent_o *)&this->fields.ignoreAuraBuffIds;
  result = ignoreAuraBuffIds;
  if ( !ignoreAuraBuffIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    ValueArray = (System_Int32_array **)ConstantStrMaster__GetValueArray(
                                          (ConstantStrMaster_o *)Instance,
                                          (System_String_o *)StringLiteral_7284/*"IGNORE_AURA_BUFF"*/,
                                          0LL,
                                          0LL);
    p_ignoreAuraBuffIds->klass = (BattleServantConfConponent_c *)ValueArray;
    sub_B0D840(p_ignoreAuraBuffIds, ValueArray, v10, v11, v12, v13, v14, v15);
    return (System_Int32_array *)p_ignoreAuraBuffIds->klass;
  }
  return result;
}


System_Int32_array *__fastcall BattleBuffData__GetInvalidSacrificeIndividualities(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ConstantStrMaster_o *constantStrMaster; // x0
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  BattleServantConfConponent_o *static_fields; // x8
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4217E80 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_TypeInfo, v1);
    sub_B0D8A4(&Method_DataManager_GetMaster_ConstantStrMaster___, v2);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_7327/*"INVALID_SACRIFICE_INDIV"*/, v4);
    byte_4217E80 = 1;
  }
  constantStrMaster = BattleBuffData_TypeInfo->static_fields->constantStrMaster;
  if ( !constantStrMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    static_fields = (BattleServantConfConponent_o *)BattleBuffData_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)Master_WarQuestSelectionMaster;
    sub_B0D840(static_fields, Master_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
    constantStrMaster = BattleBuffData_TypeInfo->static_fields->constantStrMaster;
    if ( !constantStrMaster )
      sub_B0D97C(0LL);
  }
  return ConstantStrMaster__GetValueArray(constantStrMaster, (System_String_o *)StringLiteral_7327/*"INVALID_SACRIFICE_INDIV"*/, 0LL, 0LL);
}


int32_t __fastcall BattleBuffData__GetMotionChange(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  _BOOL8 v15; // x0
  int32_t klass; // w19
  int v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217E6D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9);
    byte_4217E6D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v11);
  if ( !v10 )
    sub_B0D97C(PassiveList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v13);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v10,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v15 )
      break;
    if ( !v19.fields.current )
      sub_B0D97C(v15);
    klass = (int32_t)v19.fields.current[11].klass;
    if ( klass )
    {
      v17 = 3;
      goto LABEL_10;
    }
  }
  klass = 0;
  v17 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (unsigned int)(v17 + 1) >> 2 )
    return klass;
  else
    return 0;
}


System_Int32_array *__fastcall BattleBuffData__GetNotTargetSkillIdArray(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
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
  BuffList_ActInfo_o *ActInfo; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_int__o *v26; // x21
  const MethodInfo *v27; // x5
  Il2CppObject *current; // x23
  _BOOL8 v29; // x0
  System_Collections_Generic_IEnumerable_T__o *klass; // x1
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-58h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4217E4D & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, checkIndividualities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    byte_4217E4D = 1;
  }
  plusMinus = 0;
  memset(&v32, 0, sizeof(v32));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(103, 0LL, 0LL);
  plusMinus = 0;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v20);
  if ( !v19 )
    goto LABEL_18;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v22);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v26 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v24, v25);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v19,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v32.fields.current;
    v29 = BattleBuffData__checkIndiviuality(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v32.fields.current,
            checkIndividualities,
            &plusMinus,
            v27);
    if ( v29 )
    {
      if ( !current )
        sub_B0D97C(v29);
      klass = (System_Collections_Generic_IEnumerable_T__o *)current[19].klass;
      if ( klass )
      {
        if ( !v26 )
          sub_B0D97C(v29);
        System_Collections_Generic_List_int___AddRange(
          v26,
          klass,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v26 )
LABEL_18:
    sub_B0D97C(ActiveList);
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v9; // x1
  BattleBuffData_BuffData_o *ShiftGutsBuff; // x0
  const MethodInfo *v11; // x1
  BattleBuffData_BuffData_o *v12; // x20
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t type; // w21

  if ( (byte_4217E2C & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, servantData);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    byte_4217E2C = 1;
  }
  ShiftGutsBuff = BattleBuffData__GetShiftGutsBuff(
                    this,
                    servantData,
                    checkIndividualitiesDataArray,
                    (const MethodInfo *)buffEntity);
  if ( ShiftGutsBuff )
  {
    v12 = ShiftGutsBuff;
    buffMst = BattleBuffData__get_buffMst(this, v11);
    if ( !buffMst )
      goto LABEL_14;
    Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                               v12->fields.buffId,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    *buffEntity = Entity;
    sub_B0D840((BattleServantConfConponent_o *)buffEntity, (System_Int32_array **)Entity, v15, v16, v17, v18, v19, v20);
    if ( !*buffEntity )
      goto LABEL_14;
    type = (*buffEntity)->fields.type;
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    buffMst = (BuffMaster_o *)BuffList__CheckType(173, type, 0LL);
    if ( ((unsigned __int8)buffMst & 1) == 0 )
    {
      LODWORD(ShiftGutsBuff) = v12->fields.param;
      return (int)ShiftGutsBuff;
    }
    if ( !servantData )
LABEL_14:
      sub_B0D97C(buffMst);
    LODWORD(ShiftGutsBuff) = v12->fields.param * servantData->fields.maxhp / 1000;
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
  this = (BattleBuffData_o *)BattleBuffData__getBuffList_30806472(
                               this,
                               111,
                               checkIndividualitiesDataArray->m_Items[0],
                               1,
                               1,
                               0LL,
                               v4);
  if ( !this )
LABEL_12:
    sub_B0D97C(this);
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
    v14 = sub_B0D9A8(this);
    sub_B0D948(v14, 0LL);
  }
  return 0LL;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x22
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x20

  if ( (byte_4217E66 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, buffList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass210_0__GetSkillTypeBuff_b__0__, v10);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass210_0_TypeInfo, v11);
    byte_4217E66 = 1;
  }
  v12 = sub_B0D974(BattleBuffData___c__DisplayClass210_0_TypeInfo, buffList, skillTypes);
  BattleBuffData___c__DisplayClass210_0___ctor((BattleBuffData___c__DisplayClass210_0_o *)v12, 0LL);
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor_50000796(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)skillTypes,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = v15,
        sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22),
        v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v23,
                                                                         v24),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v25,
          (Il2CppObject *)v12,
          Method_BattleBuffData___c__DisplayClass210_0__GetSkillTypeBuff_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !buffList) )
  {
    sub_B0D97C(v16);
  }
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)buffList,
                                                                         (System_Predicate_T__o *)v25,
                                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
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
    sub_B0D97C(this);
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
  __int64 v3; // x1
  BattleBuffData_BuffData_array *v4; // x20
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *updateWaitIntervalBuffList; // x0

  if ( (byte_4217DE7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v3);
    byte_4217DE7 = 1;
  }
  v4 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.updateWaitIntervalBuffList, 0LL) )
  {
    updateWaitIntervalBuffList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.updateWaitIntervalBuffList;
    if ( !updateWaitIntervalBuffList
      || (updateWaitIntervalBuffList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(updateWaitIntervalBuffList, (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
          !this->fields.updateWaitIntervalBuffList) )
    {
      sub_B0D97C(updateWaitIntervalBuffList);
    }
    v4 = (BattleBuffData_BuffData_array *)updateWaitIntervalBuffList;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.updateWaitIntervalBuffList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  }
  return v4;
}


void __fastcall BattleBuffData__Initialize(BattleBuffData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0

  if ( (byte_4217DEC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, method);
    byte_4217DEC = 1;
  }
  passiveList = this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)passiveList,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__),
        (passiveList = this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)passiveList,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__),
        (passiveList = this->fields.conditionalAuraBuff) == 0LL) )
  {
    sub_B0D97C(passiveList);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)passiveList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__InitializeShift(
        BattleBuffData_o *this,
        int32_t actorId,
        System_Int32_array *buffindivs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x21

  if ( (byte_4217E59 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, *(_QWORD *)&actorId);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v7);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v8);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass192_0__InitializeShift_b__0__, v9);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass192_0__InitializeShift_b__1__, v10);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass192_0_TypeInfo, v11);
    byte_4217E59 = 1;
  }
  v12 = sub_B0D974(BattleBuffData___c__DisplayClass192_0_TypeInfo, *(_QWORD *)&actorId, buffindivs);
  BattleBuffData___c__DisplayClass192_0___ctor((BattleBuffData___c__DisplayClass192_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_DWORD *)(v12 + 16) = actorId;
  *(_QWORD *)(v12 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 32) = buffindivs;
  v20 = v12 + 32;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 32),
    (System_Int32_array **)buffindivs,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  passiveList = this->fields.passiveList;
  v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v28,
                                                                   v29);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v30,
    (Il2CppObject *)v12,
    Method_BattleBuffData___c__DisplayClass192_0__InitializeShift_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !passiveList )
    goto LABEL_10;
  v13 = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)passiveList,
          (System_Predicate_T__o *)v30,
          (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  if ( !*(_QWORD *)v20 )
    goto LABEL_10;
  if ( *(_QWORD *)(*(_QWORD *)v20 + 24LL) )
  {
    activeList = this->fields.activeList;
    v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                     v31,
                                                                     v32);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v34,
      (Il2CppObject *)v12,
      Method_BattleBuffData___c__DisplayClass192_0__InitializeShift_b__1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    if ( activeList )
    {
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)activeList,
        (System_Predicate_T__o *)v34,
        (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
      return;
    }
LABEL_10:
    sub_B0D97C(v13);
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

  CounterFuncBuffDataList = BattleBuffData__GetCounterFuncBuffDataList(this, selfSvt, targetSvt, 1, v4);
  if ( !CounterFuncBuffDataList )
    sub_B0D97C(0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BuffList_ActInfo_o *ActInfo; // x22
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v16; // x21
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0
  __int64 v20; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  BattleBuffData_CheckIndividualitiesData_o *v29; // x3
  const MethodInfo *v30; // x5
  int v31; // w8
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  int v37; // [xsp+0h] [xbp-40h]
  int32_t plusMinus[2]; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4217E2A & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, buffData);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Skip_BattleBuffData_CheckIndividualitiesData___, v9);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo, v12);
    this = (BattleBuffData_o *)sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_4217E2A = 1;
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
                               (const MethodInfo_1B555BC *)Method_System_Linq_Enumerable_Skip_BattleBuffData_CheckIndividualitiesData___);
  if ( !this )
LABEL_42:
    sub_B0D97C(this);
  klass = this->klass;
  v16 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_14:
    v19 = sub_AA67A0(
            this,
            System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo,
            0LL);
  }
  v20 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v20 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_21;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_21:
      v24 = sub_AA67A0(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_28;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_28:
      v28 = sub_AA67A0(
              v20,
              System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo,
              0LL);
    }
    v29 = (BattleBuffData_CheckIndividualitiesData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(
                                                         v20,
                                                         *(_QWORD *)(v28 + 8));
    if ( !BattleBuffData__checkIndiviuality(v8, ActInfo, buffData, v29, &plusMinus[1], v30) )
    {
      v31 = 85;
      goto LABEL_33;
    }
  }
  v31 = 83;
LABEL_33:
  v37 = v31;
  v32 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v33 = 0LL;
    v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_37;
    }
    v35 = v32 + 16LL * *v34 + 312;
  }
  else
  {
LABEL_37:
    v35 = sub_AA67A0(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v35)(v20, *(_QWORD *)(v35 + 8));
  return v37 == 83;
}


bool __fastcall BattleBuffData__IsIgnoreIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__checkState(buff, 0x10000, 0LL);
}


bool __fastcall BattleBuffData__IsPermanentSleep(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  BuffList_ActInfo_o *ActInfo; // x22
  _BOOL8 v18; // x0
  Il2CppObject *current; // x21
  const MethodInfo *v20; // x5
  char v21; // w19
  int v22; // w20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-48h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4217E73 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, checkIndividualities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    byte_4217E73 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  plusMinus = 0;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  checkIndividualities,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v13);
  if ( !v12 )
    sub_B0D97C(PassiveList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v15);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(39, 0LL, 0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v12,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v18 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current )
      sub_B0D97C(v18);
    if ( !BYTE2(v24.fields.current[23].klass)
      && BattleBuffData_BuffData__IsPermanentSleep((BattleBuffData_BuffData_o *)v24.fields.current, 0LL)
      && BattleBuffData__checkIndiviuality(
           this,
           ActInfo,
           (BattleBuffData_BuffData_o *)current,
           checkIndividualities,
           &plusMinus,
           v20) )
    {
      v21 = 1;
      v22 = 5;
      goto LABEL_15;
    }
  }
  v21 = 0;
  v22 = 3;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v22 == 5) & v21;
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x22
  __int64 v7; // x21
  int size; // w8

  v4 = this;
  if ( (byte_4217DF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, buff);
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_4217DF8 = 1;
  }
  unfixedBuffList = v4->fields.unfixedBuffList;
  if ( !unfixedBuffList )
LABEL_11:
    sub_B0D97C(this);
  v7 = 0LL;
  while ( 1 )
  {
    size = unfixedBuffList->fields._size;
    if ( (int)v7 >= size )
      return 0;
    if ( size <= (unsigned int)v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !buff )
      goto LABEL_11;
    if ( unfixedBuffList->fields._items->m_Items[v7 + 1] == buff->fields.addOrder )
      return 1;
    unfixedBuffList = v4->fields.unfixedBuffList;
    ++v7;
    if ( !unfixedBuffList )
      goto LABEL_11;
  }
}


bool __fastcall BattleBuffData__IsWarBoardNotAttacked(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentAllBaffList; // x0
  _BOOL8 v8; // x0
  char v9; // w19
  int v10; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217E74 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v6);
    byte_4217E74 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  CurrentAllBaffList = BattleBuffData__getCurrentAllBaffList(this, 1, v2);
  if ( !CurrentAllBaffList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CurrentAllBaffList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v8 )
      break;
    if ( !v12.fields.current )
      sub_B0D97C(v8);
    if ( !BYTE2(v12.fields.current[23].klass)
      && BattleBuffData_BuffData__IsWarBoardNotAttacked((BattleBuffData_BuffData_o *)v12.fields.current, 0LL) )
    {
      v9 = 1;
      v10 = 2;
      goto LABEL_11;
    }
  }
  v10 = 0;
  v9 = 0;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (v10 == 2) & v9;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__MakeRemoveBuffInfo(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endList,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *removedLinkedBuffs,
        const MethodInfo *method)
{
  RemovedBuffInfo_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4217E24 & 1) == 0 )
  {
    sub_B0D8A4(&RemovedBuffInfo_TypeInfo, endList);
    byte_4217E24 = 1;
  }
  v6 = (RemovedBuffInfo_o *)sub_B0D974(RemovedBuffInfo_TypeInfo, endList, removedLinkedBuffs);
  RemovedBuffInfo___ctor(v6, 0LL);
  if ( !v6 )
    sub_B0D97C(v7);
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
  __int64 v7; // x1
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3
  bool v10; // w22
  BattleBuffData_o **p_auraBuffList; // x21
  BattleBuffData_o **p_conditionalAuraBuff; // x20
  BattleBuffData_o *conditionalAuraBuff; // t1
  BattleBuffData_o *v14; // x0
  const MethodInfo *v15; // x3

  v6 = this;
  if ( (byte_4217E63 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    this = (BattleBuffData_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
                                 v7);
    byte_4217E63 = 1;
  }
  if ( !buff )
    goto LABEL_24;
  BattleBuffData_BuffData__offState(buff, state, 0LL);
  v10 = 0;
  if ( state >= 0x4000 )
  {
    if ( state != 0x4000 && state != 0x200000 && state != 0x20000 )
      return v10;
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
             (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        v10 = 0;
      }
      else
      {
        this = *p_auraBuffList;
        if ( !*p_auraBuffList )
          goto LABEL_24;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        v10 = 1;
      }
      conditionalAuraBuff = (BattleBuffData_o *)v6->fields.conditionalAuraBuff;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
      this = conditionalAuraBuff;
      if ( !conditionalAuraBuff )
LABEL_24:
        sub_B0D97C(this);
      v8 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
             (WarBoardManager_TaskList_o *)buff,
             (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( !v8 )
      {
        this = *p_conditionalAuraBuff;
        if ( *p_conditionalAuraBuff )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          v10 = 1;
          goto LABEL_22;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v10 = 0;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
    }
LABEL_22:
    BattleBuffData__ApplyBuffData(
      (BattleBuffData_o *)v8,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_auraBuffList,
      v9);
    BattleBuffData__ApplyBuffData(
      v14,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_conditionalAuraBuff,
      v15);
    return v10;
  }
  if ( state == 1 || state == 16 )
    goto LABEL_11;
  return v10;
}


bool __fastcall BattleBuffData__OnStateWithAuraConditionCheck(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t state,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  __int64 v7; // x1
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3
  char v10; // w22
  BattleBuffData_o **p_auraBuffList; // x21
  int v12; // w23
  BattleBuffData_o **p_conditionalAuraBuff; // x20
  BattleBuffData_o *conditionalAuraBuff; // t1
  BattleBuffData_o *v15; // x0
  const MethodInfo *v16; // x3

  v6 = this;
  if ( (byte_4217E62 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, buff);
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v7);
    byte_4217E62 = 1;
  }
  if ( !buff )
    goto LABEL_24;
  BattleBuffData_BuffData__onState(buff, state, 0LL);
  v10 = 0;
  if ( state >= 0x4000 )
  {
    if ( state != 0x4000 && state != 0x200000 && state != 0x20000 )
      return v10;
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
             (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        this = *p_auraBuffList;
        if ( !*p_auraBuffList )
          goto LABEL_24;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        v12 = 1;
      }
      else
      {
        v12 = 0;
      }
      conditionalAuraBuff = (BattleBuffData_o *)v6->fields.conditionalAuraBuff;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
      this = conditionalAuraBuff;
      if ( !conditionalAuraBuff )
LABEL_24:
        sub_B0D97C(this);
      v8 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
             (WarBoardManager_TaskList_o *)buff,
             (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      v10 = v12 != 0;
      if ( v8 )
      {
        this = *p_conditionalAuraBuff;
        if ( *p_conditionalAuraBuff )
        {
          v8 = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                 (WarBoardManager_TaskList_o *)buff,
                 (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          v10 = 1;
          goto LABEL_22;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v10 = 0;
      p_conditionalAuraBuff = (BattleBuffData_o **)&v6->fields.conditionalAuraBuff;
    }
LABEL_22:
    BattleBuffData__ApplyBuffData(
      (BattleBuffData_o *)v8,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_auraBuffList,
      v9);
    BattleBuffData__ApplyBuffData(
      v15,
      buff,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o **)p_conditionalAuraBuff,
      v16);
    return v10;
  }
  if ( state == 1 || state == 16 )
    goto LABEL_11;
  return v10;
}


void __fastcall BattleBuffData__ProgressBuffTurn(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  if ( BattleBuffData_BuffData__checkProgressTurn(buff, 0LL) )
    --buff->fields.turn;
}


void __fastcall BattleBuffData__RechargeCommandAssistBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x20
  WarQuestSelectionMaster_o *EventId; // x0
  EventCommandAssistEntity_o *CurrentEntity; // x20
  __int64 v11; // x21
  __int64 v12; // x21
  int chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4217E5E & 1) == 0 )
  {
    sub_B0D8A4(&BattleData_TypeInfo, buff);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4217E5E = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AA65A4(v12);
  EventId = **(WarQuestSelectionMaster_o ***)(v12 + 184);
  if ( !EventId )
    goto LABEL_23;
  EventId = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)EventId,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    sub_B0D97C(EventId);
  chargeTurn = entity->fields.chargeTurn;
  if ( chargeTurn >= 1 )
    buff->fields.reCharge = chargeTurn;
}


void __fastcall BattleBuffData__RechargeCommandCodeBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  CommandCodeSkillMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v9; // x20
  __int64 v10; // x20
  SkillLvMaster_o *v11; // x20
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w22
  __int64 v15; // x8
  int chargeTurn; // w8
  __int64 v17; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217E5C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, buff);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4217E5C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (CommandCodeSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AA65A4(v10);
  Instance = **(void ***)(v10 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !buff)
    || !MasterData_WarQuestSelectionMaster
    || (v11 = (SkillLvMaster_o *)Instance,
        (Instance = CommandCodeSkillMaster__getCommandCodeActiveSkillList(
                      MasterData_WarQuestSelectionMaster,
                      buff->fields.masterCommandCodeId,
                      0LL)) == 0LL) )
  {
LABEL_24:
    sub_B0D97C(Instance);
  }
  v12 = *((_DWORD *)Instance + 6);
  v13 = Instance;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v17 = sub_B0D9A8(Instance);
        sub_B0D948(v17, 0LL);
      }
      v15 = *((_QWORD *)v13 + (int)v14 + 4);
      entity = 0LL;
      if ( !v15 || !v11 )
        goto LABEL_24;
      Instance = (void *)SkillLvMaster__TryGetEntity(v11, &entity, *(_DWORD *)(v15 + 28), 1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_24;
        chargeTurn = entity->fields.chargeTurn;
        if ( chargeTurn >= 1 )
          break;
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x24
  int32_t v9; // w21
  int32_t size; // w8

  v4 = this;
  if ( (byte_4217DFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__, condition);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v6);
    this = (BattleBuffData_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__,
                                 v7);
    byte_4217DFA = 1;
  }
  activeList = v4->fields.activeList;
  if ( !activeList )
LABEL_13:
    sub_B0D97C(this);
  v9 = 0;
  while ( 1 )
  {
    size = activeList->fields._size;
    if ( v9 >= size )
      break;
    if ( size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( condition )
    {
      this = (BattleBuffData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                   condition,
                                   activeList->fields._items->m_Items[v9],
                                   (const MethodInfo_26189CC *)Method_System_Func_BattleBuffData_BuffData__bool__Invoke__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleBuffData_o *)v4->fields.activeList;
        if ( !this )
          goto LABEL_13;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v9--,
          (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      activeList = v4->fields.activeList;
      ++v9;
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x23
  int32_t v8; // w21
  int32_t size; // w8
  BattleBuffData_BuffData_o *v10; // x8
  unsigned int v11; // w23
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v12; // x25
  BattleBuffData_BuffData_o *v13; // x8
  int32_t addOrder; // w25
  BattleBuffData_BuffData_o *v15; // x8

  v4 = this;
  if ( (byte_4217DF9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, removeBuffList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v5);
    this = (BattleBuffData_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__,
                                 v6);
    byte_4217DF9 = 1;
  }
  activeList = v4->fields.activeList;
  if ( !activeList )
LABEL_26:
    sub_B0D97C(this);
  v8 = 0;
  while ( 1 )
  {
    size = activeList->fields._size;
    if ( v8 >= size )
      break;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = activeList->fields._items->m_Items[v8];
    if ( !v10 )
      goto LABEL_26;
    if ( v10->fields._isRemove )
    {
      if ( !removeBuffList )
        goto LABEL_26;
      if ( removeBuffList->fields._size >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = v4->fields.activeList;
          if ( !v12 )
            goto LABEL_26;
          if ( v12->fields._size <= (unsigned int)v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v13 = v12->fields._items->m_Items[v8];
          if ( !v13 )
            goto LABEL_26;
          addOrder = v13->fields.addOrder;
          if ( removeBuffList->fields._size <= v11 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v15 = removeBuffList->fields._items->m_Items[v11];
          if ( !v15 )
            goto LABEL_26;
          if ( addOrder == v15->fields.addOrder )
            break;
          if ( (signed int)++v11 >= removeBuffList->fields._size )
            goto LABEL_25;
        }
        this = (BattleBuffData_o *)v4->fields.activeList;
        if ( !this )
          goto LABEL_26;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v8--,
          (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
    }
LABEL_25:
    activeList = v4->fields.activeList;
    ++v8;
    if ( !activeList )
      goto LABEL_26;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x22
  System_Collections_Generic_IEnumerable_T__o *IsNullOrEmpty; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x19
  __int64 v35; // x25
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x26
  __int64 v44; // x1
  __int64 v45; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v46; // x27
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v47; // x26
  __int64 v48; // x1
  __int64 v49; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v50; // x27
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x26
  __int64 v52; // x1
  __int64 v53; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v54; // x27
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v56; // x26
  __int64 v57; // x1
  __int64 v58; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v59; // x27
  const MethodInfo *v60; // x3
  AddSkillData_array *v61; // x9
  signed int max_length; // w8
  signed int v63; // w10
  AddSkillData_o *v64; // x8
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x24
  __int64 v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **current; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v76; // x25
  __int64 v77; // x1
  __int64 v78; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v79; // x26
  __int64 v80; // x0
  System_Collections_Generic_IEnumerable_T__o *v81; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v82; // x25
  __int64 v83; // x1
  __int64 v84; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v85; // x26
  __int64 v86; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v87; // x25
  __int64 v88; // x1
  __int64 v89; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v90; // x26
  __int64 v91; // x0
  System_Collections_Generic_IEnumerable_T__o *v92; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v93; // x25
  __int64 v94; // x1
  __int64 v95; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v96; // x26
  __int64 v97; // x0
  signed int v98; // w10
  int v99; // w25
  __int64 v100; // x0
  System_Collections_Generic_IEnumerable_T__o *v102; // [xsp+10h] [xbp-B0h]
  int v104; // [xsp+1Ch] [xbp-A4h]
  signed int v106; // [xsp+28h] [xbp-98h]
  _BYTE v107[28]; // [xsp+30h] [xbp-90h] BYREF
  int v108; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v109; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4217E86 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, classBoardSkillArray);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v17);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v18);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v19);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass253_0__RemoveClassBoardSkillBuff_b__0__, v20);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass253_0__RemoveClassBoardSkillBuff_b__1__, v21);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass253_0__RemoveClassBoardSkillBuff_b__2__, v22);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass253_0__RemoveClassBoardSkillBuff_b__3__, v23);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass253_0_TypeInfo, v24);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass253_1__RemoveClassBoardSkillBuff_b__4__, v25);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass253_1__RemoveClassBoardSkillBuff_b__5__, v26);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass253_1__RemoveClassBoardSkillBuff_b__6__, v27);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass253_1__RemoveClassBoardSkillBuff_b__7__, v28);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass253_1_TypeInfo, v29);
    byte_4217E86 = 1;
  }
  entitys = 0LL;
  memset(&v109, 0, sizeof(v109));
  v108 = 0;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  classBoardSkillArray,
                                                                                                  classBoardCommandSpellArray);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__IsNullOrEmpty(
                                                                   (System_Collections_ICollection_o *)classBoardSkillArray,
                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !classBoardSkillArray )
      goto LABEL_51;
    if ( (int)classBoardSkillArray->max_length >= 1 )
    {
      v34 = 0LL;
      while ( 1 )
      {
        v35 = sub_B0D974(BattleBuffData___c__DisplayClass253_0_TypeInfo, v32, v33);
        BattleBuffData___c__DisplayClass253_0___ctor((BattleBuffData___c__DisplayClass253_0_o *)v35, 0LL);
        if ( v34 >= classBoardSkillArray->max_length )
          break;
        if ( !v35 )
          goto LABEL_51;
        v42 = (System_Int32_array **)classBoardSkillArray->m_Items[v34];
        *(_QWORD *)(v35 + 16) = v42;
        sub_B0D840((BattleServantConfConponent_o *)(v35 + 16), v42, v36, v37, v38, v39, v40, v41);
        passiveList = this->fields.passiveList;
        v46 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v44,
                                                                         v45);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v46,
          (Il2CppObject *)v35,
          Method_BattleBuffData___c__DisplayClass253_0__RemoveClassBoardSkillBuff_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !passiveList )
          goto LABEL_51;
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                                                                         (System_Predicate_T__o *)v46,
                                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
        if ( !v30 )
          goto LABEL_51;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
          IsNullOrEmpty,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        v47 = this->fields.passiveList;
        v50 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v48,
                                                                         v49);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v50,
          (Il2CppObject *)v35,
          Method_BattleBuffData___c__DisplayClass253_0__RemoveClassBoardSkillBuff_b__1__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !v47 )
          goto LABEL_51;
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v47,
          (System_Predicate_T__o *)v50,
          (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        activeList = this->fields.activeList;
        v54 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v52,
                                                                         v53);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v54,
          (Il2CppObject *)v35,
          Method_BattleBuffData___c__DisplayClass253_0__RemoveClassBoardSkillBuff_b__2__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !activeList )
          goto LABEL_51;
        All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                               (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                               (System_Predicate_T__o *)v54,
                                                               (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
          All,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        v56 = this->fields.activeList;
        v59 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v57,
                                                                         v58);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v59,
          (Il2CppObject *)v35,
          Method_BattleBuffData___c__DisplayClass253_0__RemoveClassBoardSkillBuff_b__3__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
        if ( !v56 )
          goto LABEL_51;
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v56,
          (System_Predicate_T__o *)v59,
          (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        if ( (__int64)++v34 >= (int)classBoardSkillArray->max_length )
          goto LABEL_15;
      }
LABEL_52:
      v100 = sub_B0D9A8(IsNullOrEmpty);
      sub_B0D948(v100, 0LL);
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
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v61 = classBoardCommandSpellArray;
  if ( !classBoardCommandSpellArray )
LABEL_51:
    sub_B0D97C(IsNullOrEmpty);
  max_length = classBoardCommandSpellArray->max_length;
  if ( max_length >= 1 )
  {
    v104 = 0;
    v63 = 0;
    v102 = IsNullOrEmpty;
    while ( v63 < (unsigned int)max_length )
    {
      v64 = v61->m_Items[v63];
      if ( !v64 )
        goto LABEL_51;
      v106 = v63;
      if ( !IsNullOrEmpty )
        goto LABEL_51;
      if ( ClassBoardCommandSpellMaster__TryGetEntityList(
             (ClassBoardCommandSpellMaster_o *)IsNullOrEmpty,
             &entitys,
             v64->fields.id,
             v64->fields.lv,
             0LL) )
      {
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)entitys;
        if ( !entitys )
          goto LABEL_51;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v107,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v109 = *(System_Collections_Generic_List_Enumerator_T__o *)v107;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v109,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          v67 = sub_B0D974(BattleBuffData___c__DisplayClass253_1_TypeInfo, v65, v66);
          BattleBuffData___c__DisplayClass253_1___ctor((BattleBuffData___c__DisplayClass253_1_o *)v67, 0LL);
          if ( !v67 )
            sub_B0D97C(v68);
          current = (System_Int32_array **)v109.fields.current;
          *(_QWORD *)(v67 + 16) = v109.fields.current;
          sub_B0D840((BattleServantConfConponent_o *)(v67 + 16), current, v69, v70, v71, v72, v73, v74);
          v76 = this->fields.passiveList;
          v79 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v77,
                                                                           v78);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v79,
            (Il2CppObject *)v67,
            Method_BattleBuffData___c__DisplayClass253_1__RemoveClassBoardSkillBuff_b__4__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v76 )
            sub_B0D97C(v80);
          v81 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                 (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v76,
                                                                 (System_Predicate_T__o *)v79,
                                                                 (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
          if ( !v30 )
            sub_B0D97C(v81);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
            v81,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v82 = this->fields.passiveList;
          v85 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v83,
                                                                           v84);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v85,
            (Il2CppObject *)v67,
            Method_BattleBuffData___c__DisplayClass253_1__RemoveClassBoardSkillBuff_b__5__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v82 )
            sub_B0D97C(v86);
          System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
            (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v82,
            (System_Predicate_T__o *)v85,
            (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
          v87 = this->fields.activeList;
          v90 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v88,
                                                                           v89);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v90,
            (Il2CppObject *)v67,
            Method_BattleBuffData___c__DisplayClass253_1__RemoveClassBoardSkillBuff_b__6__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v87 )
            sub_B0D97C(v91);
          v92 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                 (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v87,
                                                                 (System_Predicate_T__o *)v90,
                                                                 (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
            v92,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v93 = this->fields.activeList;
          v96 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                           v94,
                                                                           v95);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v96,
            (Il2CppObject *)v67,
            Method_BattleBuffData___c__DisplayClass253_1__RemoveClassBoardSkillBuff_b__7__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
          if ( !v93 )
            sub_B0D97C(v97);
          System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
            (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v93,
            (System_Predicate_T__o *)v96,
            (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        }
        *(_DWORD *)&v107[4 * v104 + 24] = 395;
        v99 = ++v108;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v109,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
        IsNullOrEmpty = v102;
        v98 = v106;
        if ( v99 )
        {
          v104 = v99;
          v61 = classBoardCommandSpellArray;
          if ( *(_DWORD *)&v107[4 * v99 + 20] == 395 )
          {
            v108 = v99 - 1;
            v104 = v99 - 1;
          }
        }
        else
        {
          v61 = classBoardCommandSpellArray;
          v104 = 0;
        }
      }
      else
      {
        v61 = classBoardCommandSpellArray;
        IsNullOrEmpty = v102;
        v98 = v106;
      }
      max_length = v61->max_length;
      v63 = v98 + 1;
      if ( v63 >= max_length )
        goto LABEL_50;
    }
    goto LABEL_52;
  }
LABEL_50:
  BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v30,
    logic,
    v60);
}


void __fastcall BattleBuffData__RemoveClassIconEffectBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *effectBuff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1

  v4 = this;
  if ( (byte_4217E84 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, effectBuff);
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v5);
    byte_4217E84 = 1;
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
           (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
      if ( this )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)effectBuff,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        return;
      }
LABEL_10:
      sub_B0D97C(this);
    }
  }
}


void __fastcall BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *removeBuffList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v12; // x0
  const MethodInfo *v13; // x2
  BattleBuffData_o *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217E87 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, removeBuffList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    byte_4217E87 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffList, 0LL) )
  {
    v12 = BattleBuffData__removeLinkageBuff(this, removeBuffList, 0, v11);
    if ( removeBuffList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)removeBuffList,
        (System_Collections_Generic_IEnumerable_T__o *)v12,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(this, removeBuffList, v13);
      BattleBuffData__CheckAndUpdateFieldIndividualityBuff(v14, removeBuffList, logic, v15);
      v12 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                                                                            removeBuffList,
                                                                            v16);
      if ( ((unsigned __int8)v12 & 1) == 0 )
        goto LABEL_8;
      if ( logic )
      {
        BattleLogic__updateFieldBuff(logic, 0LL);
LABEL_8:
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v18,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)removeBuffList,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v18,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
          BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v18.fields.current, v17);
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v18,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
        return;
      }
    }
    sub_B0D97C(v12);
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x24
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v48; // x26
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_WarBoardManager_TaskList__c *klass; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v56; // x25
  unsigned __int64 v57; // x10
  int32_t *p_offset; // x11
  __int64 v59; // x0
  __int64 v60; // x25
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  __int64 v65; // x8
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  __int64 v69; // x0
  System_Collections_Generic_IEnumerable_T__o *v70; // x1
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  System_Func_BattleBuffData_BuffData__int__bool__o *v77; // x25
  System_Collections_Generic_List_int__o *v78; // x22
  signed __int64 v79; // x8
  unsigned __int64 v80; // x24
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x27
  int32_t size; // w8
  int32_t v83; // w24
  unsigned __int64 v84; // x26
  int v85; // w22
  BattleBuffData_BuffData_o *v86; // x27
  const MethodInfo *v87; // x2
  System_Collections_Generic_IEnumerable_T__o *v88; // x1
  const MethodInfo *v89; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v90; // x8
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x26
  int32_t v92; // w8
  unsigned __int64 v93; // x22
  int v94; // w27
  BattleBuffData_BuffData_o *v95; // x26
  const MethodInfo *v96; // x2
  System_Collections_Generic_IEnumerable_T__o *linkageTargetIndividualty; // x1
  unsigned __int64 v99; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v100; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v102; // [xsp+20h] [xbp-60h]

  if ( (byte_4217E08 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, endBuffs);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__, v10);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__int__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__int__bool__TypeInfo, v12);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v28);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v30);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass72_0__RemoveLinkageBuff_b__0__, v31);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass72_0__RemoveLinkageBuff_b__1__, v32);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass72_0_TypeInfo, v33);
    byte_4217E08 = 1;
  }
  v34 = sub_B0D974(BattleBuffData___c__DisplayClass72_0_TypeInfo, endBuffs, isCreateDummy);
  BattleBuffData___c__DisplayClass72_0___ctor((BattleBuffData___c__DisplayClass72_0_o *)v34, 0LL);
  if ( !v34 )
    goto LABEL_99;
  *(_BYTE *)(v34 + 16) = isFamily;
  *(_QWORD *)(v34 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v34 + 24), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  v102 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                   v42,
                                                                                                   v43);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v102,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v100 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v44, v45);
  System_Collections_Generic_List_int____ctor(
    v100,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v48 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v34 + 32);
  if ( !v48 )
  {
    v48 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                               v46,
                                                                               v47);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v48,
      (Il2CppObject *)v34,
      Method_BattleBuffData___c__DisplayClass72_0__RemoveLinkageBuff_b__1__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    *(_QWORD *)(v34 + 32) = v48;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  }
  auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)endBuffs,
                                                                                  (System_Func_TSource__bool__o *)v48,
                                                                                  (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !auraBuffList )
    goto LABEL_99;
  klass = auraBuffList->klass;
  v56 = auraBuffList;
  if ( *(_WORD *)&auraBuffList->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v57;
      p_offset += 4;
      if ( v57 >= *(unsigned __int16 *)&auraBuffList->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    v59 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_11:
    v59 = sub_AA67A0(auraBuffList, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v60 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_WarBoardManager_TaskList__o *, _QWORD))v59)(
          v56,
          *(_QWORD *)(v59 + 8));
  if ( !v60 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v61 = *(_QWORD *)v60;
    if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
    {
      v62 = 0LL;
      v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v63 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v62;
        v63 += 4;
        if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
          goto LABEL_18;
      }
      v64 = v61 + 16LL * *v63 + 312;
    }
    else
    {
LABEL_18:
      v64 = sub_AA67A0(v60, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v60, *(_QWORD *)(v64 + 8)) & 1) == 0 )
      break;
    v65 = *(_QWORD *)v60;
    if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
    {
      v66 = 0LL;
      v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v67 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v66;
        v67 += 4;
        if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
          goto LABEL_25;
      }
      v68 = v65 + 16LL * *v67 + 312;
    }
    else
    {
LABEL_25:
      v68 = sub_AA67A0(v60, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v69 = (*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v60, *(_QWORD *)(v68 + 8));
    if ( !v69 )
      sub_B0D97C(0LL);
    v70 = *(System_Collections_Generic_IEnumerable_T__o **)(v69 + 128);
    if ( v70 && v70[1].monitor )
    {
      if ( !v100 )
        sub_B0D97C(v69);
      System_Collections_Generic_List_int___AddRange(
        v100,
        v70,
        (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  v71 = *(_QWORD *)v60;
  if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
  {
    v72 = 0LL;
    v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      ++v72;
      v73 += 4;
      if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
        goto LABEL_36;
    }
    v74 = v71 + 16LL * *v73 + 312;
  }
  else
  {
LABEL_36:
    v74 = sub_AA67A0(v60, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v74)(v60, *(_QWORD *)(v74 + 8));
  v77 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B0D974(
                                                               System_Func_BattleBuffData_BuffData__int__bool__TypeInfo,
                                                               v75,
                                                               v76);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v77,
    (Il2CppObject *)v34,
    Method_BattleBuffData___c__DisplayClass72_0__RemoveLinkageBuff_b__0__,
    (const MethodInfo_26225B8 *)Method_System_Func_BattleBuffData_BuffData__int__bool___ctor__);
  v78 = v100;
  if ( !v100 )
    goto LABEL_99;
  LODWORD(v79) = v100->fields._size;
  if ( (int)v79 >= 1 )
  {
    v80 = 0LL;
    while ( 1 )
    {
      if ( v80 >= (unsigned int)v79 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      activeList = this->fields.activeList;
      if ( !activeList )
        goto LABEL_99;
      size = activeList->fields._size;
      v99 = v80;
      v83 = v78->fields._items->m_Items[v80 + 1];
      if ( size - 1 >= 0 )
        break;
LABEL_72:
      passiveList = this->fields.passiveList;
      if ( !passiveList )
        goto LABEL_99;
      v92 = passiveList->fields._size;
      if ( v92 - 1 >= 0 )
      {
        v93 = v92 - 1;
        v94 = v92 - 2;
        do
        {
          if ( v93 >= (unsigned int)passiveList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( !v77 )
            break;
          v95 = passiveList->fields._items->m_Items[v93];
          auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                                                                          v77,
                                                                                          v95,
                                                                                          v83,
                                                                                          (const MethodInfo_26225CC *)Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__);
          if ( ((unsigned __int8)auraBuffList & 1) != 0 )
          {
            if ( !v95 )
              break;
            linkageTargetIndividualty = (System_Collections_Generic_IEnumerable_T__o *)v95->fields.linkageTargetIndividualty;
            if ( linkageTargetIndividualty && linkageTargetIndividualty[1].monitor )
              System_Collections_Generic_List_int___AddRange(
                v100,
                linkageTargetIndividualty,
                (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v95->fields.auraEffectId )
            {
              auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
              if ( !auraBuffList )
                break;
              if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                     auraBuffList,
                     (WarBoardManager_TaskList_o *)v95,
                     (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
              {
                auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
                if ( !auraBuffList )
                  break;
                System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                  auraBuffList,
                  (WarBoardManager_TaskList_o *)v95,
                  (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
              }
            }
            BattleBuffData__RemoveClassIconEffectBuff(this, v95, v96);
            if ( !endBuffs )
              break;
            if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)endBuffs,
                    (WarBoardManager_TaskList_o *)v95,
                    (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
            {
              auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v102;
              if ( !v102 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v102,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v95,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
            auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.passiveList;
            if ( !auraBuffList )
              break;
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)auraBuffList,
              v94 + 1,
              (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
          }
          if ( (v94 & 0x80000000) != 0 )
            goto LABEL_97;
          passiveList = this->fields.passiveList;
          --v93;
          --v94;
        }
        while ( passiveList );
LABEL_99:
        sub_B0D97C(auraBuffList);
      }
LABEL_97:
      v78 = v100;
      v79 = v100->fields._size;
      v80 = v99 + 1;
      if ( (__int64)(v99 + 1) >= v79 )
        return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v102;
    }
    v84 = size - 1;
    v85 = size - 2;
    while ( 1 )
    {
      if ( v84 >= (unsigned int)activeList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v77 )
        goto LABEL_99;
      v86 = activeList->fields._items->m_Items[v84];
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                                                                      v77,
                                                                                      v86,
                                                                                      v83,
                                                                                      (const MethodInfo_26225CC *)Method_System_Func_BattleBuffData_BuffData__int__bool__Invoke__);
      if ( ((unsigned __int8)auraBuffList & 1) == 0 )
        goto LABEL_68;
      if ( !v86 )
        goto LABEL_99;
      v88 = (System_Collections_Generic_IEnumerable_T__o *)v86->fields.linkageTargetIndividualty;
      if ( v88 && v88[1].monitor )
        System_Collections_Generic_List_int___AddRange(
          v100,
          v88,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
      if ( v86->fields.auraEffectId )
      {
        auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
        if ( !auraBuffList )
          goto LABEL_99;
        if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
               auraBuffList,
               (WarBoardManager_TaskList_o *)v86,
               (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
        {
          auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.auraBuffList;
          if ( !auraBuffList )
            goto LABEL_99;
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            auraBuffList,
            (WarBoardManager_TaskList_o *)v86,
            (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        }
      }
      BattleBuffData__RemoveClassIconEffectBuff(this, v86, v87);
      if ( !endBuffs )
        goto LABEL_99;
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)endBuffs,
              (WarBoardManager_TaskList_o *)v86,
              (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v102;
        if ( !v102 )
          goto LABEL_99;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v102,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.activeList;
      if ( !auraBuffList )
        goto LABEL_99;
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)auraBuffList,
        v84,
        (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      if ( !isCreateDummy )
        goto LABEL_68;
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)BattleBuffData__CreateDummyBuff(
                                                                                      (BattleBuffData_o *)auraBuffList,
                                                                                      v86,
                                                                                      v89);
      v90 = this->fields.activeList;
      if ( !v90 )
        goto LABEL_99;
      if ( (__int64)v84 < v90->fields._size )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.activeList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)auraBuffList,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      if ( (v85 & 0x80000000) != 0 )
        goto LABEL_72;
LABEL_69:
      activeList = this->fields.activeList;
      --v84;
      --v85;
      if ( !activeList )
        goto LABEL_99;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
      v84,
      (XWeaponTrail_Element_o *)auraBuffList,
      (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__);
LABEL_68:
    if ( (v85 & 0x80000000) != 0 )
      goto LABEL_72;
    goto LABEL_69;
  }
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v102;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__RemoveNoTurnBuff(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogic_o *v3; // x24
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x22
  void *All; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__69_0; // x23
  BattleLogic_o *v23; // x19
  Il2CppObject *v24; // x24
  struct BattleBuffData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x22
  struct BattleBuffData___c_StaticFields *v39; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__69_1; // x23
  BattleLogic_o *v41; // x27
  Il2CppObject *v42; // x24
  struct BattleBuffData___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_T__o *v50; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v51; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v54; // x23
  const MethodInfo *v55; // x3
  System_Collections_Generic_IEnumerable_T__o *v56; // x0
  const MethodInfo *v57; // x2
  BattleBuffData_o *v58; // x0
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x1

  v3 = logic;
  if ( (byte_4217E05 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleBuffData_checkBuffClear__, logic);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v11);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B0D8A4(&Method_BattleBuffData___c__RemoveNoTurnBuff_b__69_0__, v13);
    sub_B0D8A4(&Method_BattleBuffData___c__RemoveNoTurnBuff_b__69_1__, v14);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v15);
    byte_4217E05 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  logic,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
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
      v23 = v3;
      if ( !*((_DWORD *)All + 56) )
      {
        j_il2cpp_runtime_class_init_0(All);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v23 = v3;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__69_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v17,
                                                                          v18);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__69_0,
      v24,
      Method_BattleBuffData___c__RemoveNoTurnBuff_b__69_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v25 = BattleBuffData___c_TypeInfo->static_fields;
    v25->__9__69_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__69_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__69_0,
      (System_Int32_array **)_9__69_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v3 = v23;
  }
  if ( !passiveList )
    goto LABEL_30;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
          (System_Predicate_T__o *)_9__69_0,
          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v32 = this->fields.passiveList;
  v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v33,
                                                                   v34);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v35,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v32 )
    goto LABEL_30;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v32,
    (System_Predicate_T__o *)v35,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  All = BattleBuffData___c_TypeInfo;
  activeList = this->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v39 = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__69_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v39->__9__69_1;
  if ( !_9__69_1 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 )
    {
      v41 = v3;
      if ( !*((_DWORD *)All + 56) )
      {
        j_il2cpp_runtime_class_init_0(All);
        v39 = BattleBuffData___c_TypeInfo->static_fields;
      }
    }
    else
    {
      v41 = v3;
    }
    v42 = (Il2CppObject *)v39->__9;
    _9__69_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v36,
                                                                          v37);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__69_1,
      v42,
      Method_BattleBuffData___c__RemoveNoTurnBuff_b__69_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v43 = BattleBuffData___c_TypeInfo->static_fields;
    v43->__9__69_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__69_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v43->__9__69_1,
      (System_Int32_array **)_9__69_1,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    v3 = v41;
  }
  if ( !activeList )
    goto LABEL_30;
  v50 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                                                         (System_Predicate_T__o *)_9__69_1,
                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
    v50,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v51 = this->fields.activeList;
  v54 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v52,
                                                                   v53);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v54,
    (Il2CppObject *)this,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v51 )
    goto LABEL_30;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v51,
    (System_Predicate_T__o *)v54,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v56 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v16,
                                                         0,
                                                         v55);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
    v56,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v16,
    v57);
  BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
    v58,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v16,
    v3,
    v59);
  All = (void *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                  (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v16,
                  v60);
  if ( ((unsigned __int8)All & 1) != 0 )
  {
    if ( v3 )
    {
      BattleLogic__updateFieldBuff(v3, 0LL);
      return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    }
LABEL_30:
    sub_B0D97C(All);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__RemoveProgressingBuffList(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x19
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
  BattleBuffData_BuffData_array *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *passiveList; // x21
  void *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x22
  Il2CppObject *v27; // x23
  struct BattleBuffData___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *activeList; // x21
  void *v38; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x22
  Il2CppObject *v40; // x23
  struct BattleBuffData___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v52; // x22
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v56; // x22
  const MethodInfo *v57; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v58; // x19
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  _BOOL8 v61; // x0
  const MethodInfo *v62; // x3

  v4 = this;
  if ( (byte_4217E13 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleBuffData_checkBuffClear__, linkedBuffList);
    sub_B0D8A4(&BattleLogic_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v12);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v13);
    sub_B0D8A4(&Method_BattleBuffData___c__RemoveProgressingBuffList_b__86_0__, v14);
    sub_B0D8A4(&Method_BattleBuffData___c__RemoveProgressingBuffList_b__86_1__, v15);
    this = (BattleBuffData_o *)sub_B0D8A4(&BattleBuffData___c_TypeInfo, v16);
    byte_4217E13 = 1;
  }
  if ( !linkedBuffList )
    goto LABEL_32;
  v17 = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)linkedBuffList,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleBuffData__syncLinkageBuffChangeParam(v4, v17, v18);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v4->fields.passiveList;
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  static_fields = this[1].fields.passiveList;
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)static_fields + 12);
  if ( !v26 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v27 = *(Il2CppObject **)static_fields;
    v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                     v22,
                                                                     v23);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v26,
      v27,
      Method_BattleBuffData___c__RemoveProgressingBuffList_b__86_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v28 = BattleBuffData___c_TypeInfo->static_fields;
    v28->__9__86_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v26;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v28->__9__86_0,
      (System_Int32_array **)v26,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !passiveList )
    goto LABEL_32;
  this = (BattleBuffData_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                               passiveList,
                               (System_Predicate_T__o *)v26,
                               (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v21 )
    goto LABEL_32;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v4->fields.activeList;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v38 = this[1].fields.passiveList;
  v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)v38 + 13);
  if ( !v39 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      v38 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v40 = *(Il2CppObject **)v38;
    v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                     v35,
                                                                     v36);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v39,
      v40,
      Method_BattleBuffData___c__RemoveProgressingBuffList_b__86_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v41 = BattleBuffData___c_TypeInfo->static_fields;
    v41->__9__86_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)v39;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v41->__9__86_1,
      (System_Int32_array **)v39,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( !activeList )
    goto LABEL_32;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                         activeList,
                                                         (System_Predicate_T__o *)v39,
                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    All,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v49 = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v4->fields.passiveList;
  v52 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v50,
                                                                   v51);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v52,
    (Il2CppObject *)v4,
    Method_BattleBuffData_checkBuffClear__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !v49
    || (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          v49,
          (System_Predicate_T__o *)v52,
          (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__),
        v53 = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v4->fields.activeList,
        v56 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v54,
                                                                         v55),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v56,
          (Il2CppObject *)v4,
          Method_BattleBuffData_checkBuffClear__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !v53) )
  {
LABEL_32:
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    v53,
    (System_Predicate_T__o *)v56,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v58 = BattleBuffData__removeLinkageBuff(v4, (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v21, 0, v57);
  if ( BattleBuffData__CheckInvalidSacrificeIndivArray(
         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v21,
         v59)
    || (v61 = BattleBuffData__CheckInvalidSacrificeIndivArray(v58, v60)) )
  {
    if ( (BYTE3(BattleLogic_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleLogic_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleLogic_TypeInfo);
    BattleLogic__DoUpdateFieldBuff(0LL);
  }
  return BattleBuffData__MakeRemoveBuffInfo(
           (BattleBuffData_o *)v61,
           (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v21,
           v58,
           v62);
}


void __fastcall BattleBuffData__RemoveSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleBuffData_BuffData__o *SkillTypeBuff; // x0
  _BOOL8 v13; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_WarBoardManager_TaskList__o *auraBuffList; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  v6 = this;
  if ( (byte_4217E65 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, buffList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    this = (BattleBuffData_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
                                 v11);
    byte_4217E65 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  SkillTypeBuff = BattleBuffData__GetSkillTypeBuff(this, buffList, skillTypes, method);
  if ( !SkillTypeBuff )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SkillTypeBuff,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v13 )
      break;
    if ( !buffList )
      sub_B0D97C(v13);
    current = v20.fields.current;
    v15 = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)buffList,
            (WarBoardManager_TaskList_o *)v20.fields.current,
            (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    if ( !current )
      sub_B0D97C(v15);
    if ( LODWORD(current[4].klass) )
    {
      auraBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6->fields.auraBuffList;
      if ( !auraBuffList )
        sub_B0D97C(0LL);
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             auraBuffList,
             (WarBoardManager_TaskList_o *)current,
             (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        v18 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6->fields.auraBuffList;
        if ( !v18 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v18,
          (WarBoardManager_TaskList_o *)current,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
      }
    }
    BattleBuffData__RemoveClassIconEffectBuff(v6, (BattleBuffData_BuffData_o *)current, v16);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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

  if ( (byte_4217DE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, buff);
    byte_4217DE9 = 1;
  }
  updateWaitIntervalBuffList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updateWaitIntervalBuffList;
  if ( !updateWaitIntervalBuffList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    updateWaitIntervalBuffList,
    (WarBoardManager_TaskList_o *)buff,
    (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
}


void __fastcall BattleBuffData__ResetCommandAssistBuffActiveFlg(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  int max_length; // w8
  BattleBuffData_BuffData_array *v5; // x19
  unsigned int v6; // w21
  Il2CppClass **v7; // x8
  Il2CppClass *v8; // x20
  __int64 v9; // x0

  PassiveList = BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_11;
  max_length = PassiveList->max_length;
  v5 = PassiveList;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v9 = sub_B0D9A8(PassiveList);
        sub_B0D948(v9, 0LL);
      }
      v7 = &v5->obj.klass + (int)v6;
      v8 = v7[4];
      if ( !v8 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                       (BattleBuffData_BuffData_o *)v7[4],
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        BYTE1(v8->vtable[4].methodPtr) = 0;
      max_length = v5->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_11:
    sub_B0D97C(PassiveList);
  }
}


void __fastcall BattleBuffData__ResetCommandCodeBuffActiveFlg(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  int max_length; // w8
  BattleBuffData_BuffData_array *v5; // x19
  unsigned int v6; // w21
  Il2CppClass **v7; // x8
  Il2CppClass *v8; // x20
  __int64 v9; // x0

  PassiveList = BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_11;
  max_length = PassiveList->max_length;
  v5 = PassiveList;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v9 = sub_B0D9A8(PassiveList);
        sub_B0D948(v9, 0LL);
      }
      v7 = &v5->obj.klass + (int)v6;
      v8 = v7[4];
      if ( !v8 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCodeBuff(
                                                       (BattleBuffData_BuffData_o *)v7[4],
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        LOBYTE(v8->_1.generic_class) = 0;
      max_length = v5->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_11:
    sub_B0D97C(PassiveList);
  }
}


void __fastcall BattleBuffData__ResetNotTakeOverBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleBuffData___c_c *v8; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__70_0; // x20
  Il2CppObject *v11; // x21
  struct BattleBuffData___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_4217E06 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v5);
    sub_B0D8A4(&Method_BattleBuffData___c__ResetNotTakeOverBuff_b__70_0__, v6);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v7);
    byte_4217E06 = 1;
  }
  v8 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v8 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__70_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__70_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                      method,
                                                                                      v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__70_0,
      v11,
      Method_BattleBuffData___c__ResetNotTakeOverBuff_b__70_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v12 = BattleBuffData___c_TypeInfo->static_fields;
    v12->__9__70_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__70_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v12->__9__70_0,
      (System_Int32_array **)_9__70_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  activeList = this->fields.activeList;
  if ( !activeList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
          (System_Action_T__o *)_9__70_0,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = this->fields.passiveList) == 0LL) )
  {
    sub_B0D97C(activeList);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
    (System_Action_T__o *)_9__70_0,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__ResetTargetUseBuff(
        BattleBuffData_o *this,
        int32_t targetType,
        bool isIntervalOnly,
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
  __int64 v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x21
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  BattleBuffData_BuffData_o *v49; // x22
  const MethodInfo *v50; // x2
  __int64 v51; // x0
  BattleBuffData_IntervalData_o *intervalData; // x0
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0

  if ( (byte_4217E7F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, *(_QWORD *)&targetType);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v8);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass244_0__ResetTargetUseBuff_b__0__, v13);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass244_0_TypeInfo, v14);
    byte_4217E7F = 1;
  }
  v15 = sub_B0D974(BattleBuffData___c__DisplayClass244_0_TypeInfo, *(_QWORD *)&targetType, isIntervalOnly);
  BattleBuffData___c__DisplayClass244_0___ctor((BattleBuffData___c__DisplayClass244_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_42;
  *(_QWORD *)(v15 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v15 + 24) = targetType;
  v24 = BattleBuffData__AllBuffEnumerable(this, v23);
  v27 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v15 + 32);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( !v27 )
  {
    v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                               v25,
                                                                               v26);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v27,
      (Il2CppObject *)v15,
      Method_BattleBuffData___c__DisplayClass244_0__ResetTargetUseBuff_b__0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    *(_QWORD *)(v15 + 32) = v27;
    sub_B0D840((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
  }
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v28,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v16 )
LABEL_42:
    sub_B0D97C(v16);
  klass = v16->klass;
  v36 = v16;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v37;
      p_offset += 4;
      if ( v37 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AA67A0(v16, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v36,
          *(_QWORD *)(p_method + 8));
  if ( !v40 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v41 = *(_QWORD *)v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_18;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_18:
      v44 = sub_AA67A0(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      break;
    v45 = *(_QWORD *)v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v46 = 0LL;
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v47 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_25;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_25:
      v48 = sub_AA67A0(v40, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v49 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v40, *(_QWORD *)(v48 + 8));
    BattleBuffData__RemoveUpdateWaitIntervalBuff(this, v49, v50);
    if ( isIntervalOnly )
    {
      if ( !v49 )
        sub_B0D97C(v51);
      intervalData = v49->fields.intervalData;
      if ( intervalData )
        BattleBuffData_IntervalData__Reset(intervalData, 0LL);
    }
    else
    {
      if ( !v49 )
        sub_B0D97C(v51);
      BattleBuffData_BuffData__RevertUnused(v49, 1, 0LL);
    }
  }
  v53 = *(_QWORD *)v40;
  if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
  {
    v54 = 0LL;
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
        goto LABEL_37;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_37:
    v56 = sub_AA67A0(v40, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v40, *(_QWORD *)(v56 + 8));
}


void __fastcall BattleBuffData__SetCommandAssistBuffActiveFlg(
        BattleBuffData_o *this,
        int64_t selectCommandAssistId,
        System_Action_BuffEntity__BattleBuffData_BuffData__o *setBuffAction,
        bool isRecharge,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleBuffData_BuffData_array *PassiveList; // x24
  DataManager_o *Instance; // x0
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x25
  unsigned int v18; // w27
  BattleBuffData_BuffData_o *v19; // x26
  const MethodInfo *v20; // x3
  __int64 commandAssistId; // x8
  const MethodInfo *v22; // x2
  __int64 v23; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4217E5D & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___, selectCommandAssistId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4217E5D = 1;
  }
  entity = 0LL;
  PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)setBuffAction);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !PassiveList )
    goto LABEL_24;
  max_length = PassiveList->max_length;
  if ( max_length >= 1 )
  {
    v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        v23 = sub_B0D9A8(Instance);
        sub_B0D948(v23, 0LL);
      }
      v19 = PassiveList->m_Items[v18];
      if ( !v19 )
        break;
      if ( !v19->fields._isRemove )
      {
        Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v19, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          commandAssistId = v19->fields.commandAssistId;
          v19->fields.isActiveCA = 0;
          if ( commandAssistId == selectCommandAssistId && (cardIndex == -1 || v19->fields.cardIndex == cardIndex) )
          {
            Instance = (DataManager_o *)BattleBuffData__checkBuffSuccessful(this, v19, 1, v20);
            if ( ((unsigned __int8)Instance & 1) != 0 && v19->fields.reCharge <= 0 )
            {
              v19->fields.isActiveCA = 1;
              if ( isRecharge )
                BattleBuffData__RechargeCommandAssistBuff((BattleBuffData_o *)Instance, v19, v22);
              if ( !v17 )
                break;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            v17,
                                            &entity,
                                            v19->fields.buffId,
                                            (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                ActionExtensions__Call_object__object_(
                  (System_Action_T1__T2__o *)setBuffAction,
                  (Il2CppObject *)entity,
                  (Il2CppObject *)v19,
                  (const MethodInfo_2D96788 *)Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
            }
          }
        }
      }
      max_length = PassiveList->max_length;
      if ( (int)++v18 >= max_length )
        return;
    }
LABEL_24:
    sub_B0D97C(Instance);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__SetCommandCardBuffActive(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        bool isCheckBuffSuccess,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v16; // x4
  signed __int64 size; // x8
  unsigned __int64 v18; // x23
  bool v19; // w21

  if ( (byte_4217E71 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, commandData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10);
    byte_4217E71 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  commandData,
                                                                                                  isCheckBuffSuccess);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v12);
  if ( !v11 )
    sub_B0D97C(ActiveList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v14);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
    PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  LODWORD(size) = v11->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    v19 = isCheckBuffSuccess;
    do
    {
      if ( v18 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      BattleBuffData__CheckCommandCardBuffActive(
        this,
        commandData,
        (BattleBuffData_BuffData_o *)v11->fields._items->m_Items[v18],
        v19,
        v16);
      size = v11->fields._size;
      ++v18;
    }
    while ( (__int64)v18 < size );
  }
}


void __fastcall BattleBuffData__SetCommandCodeBuffActiveFlg(
        BattleBuffData_o *this,
        int64_t selectUserCCId,
        System_Action_BuffEntity__BattleBuffData_BuffData__o *setBuffAction,
        bool isRecharge,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleBuffData_BuffData_array *PassiveList; // x23
  DataManager_o *Instance; // x0
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x24
  unsigned int v16; // w26
  BattleBuffData_BuffData_o *v17; // x25
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  __int64 v20; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4217E5B & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___, selectUserCCId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4217E5B = 1;
  }
  entity = 0LL;
  PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)setBuffAction);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !PassiveList )
    goto LABEL_22;
  max_length = PassiveList->max_length;
  if ( max_length >= 1 )
  {
    v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v20 = sub_B0D9A8(Instance);
        sub_B0D948(v20, 0LL);
      }
      v17 = PassiveList->m_Items[v16];
      if ( !v17 )
        break;
      if ( !v17->fields._isRemove )
      {
        Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v17, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v17->fields.isActiveCC = 0;
          Instance = (DataManager_o *)BattleBuffData_BuffData__IsMineCommandCode(v17, selectUserCCId, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)BattleBuffData__checkBuffSuccessful(this, v17, 1, v18);
            if ( ((unsigned __int8)Instance & 1) != 0 && v17->fields.reCharge <= 0 )
            {
              v17->fields.isActiveCC = 1;
              if ( isRecharge )
                BattleBuffData__RechargeCommandCodeBuff((BattleBuffData_o *)Instance, v17, v19);
              if ( !v15 )
                break;
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            v15,
                                            &entity,
                                            v17->fields.buffId,
                                            (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                ActionExtensions__Call_object__object_(
                  (System_Action_T1__T2__o *)setBuffAction,
                  (Il2CppObject *)entity,
                  (Il2CppObject *)v17,
                  (const MethodInfo_2D96788 *)Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
            }
          }
        }
      }
      max_length = PassiveList->max_length;
      if ( (int)++v16 >= max_length )
        return;
    }
LABEL_22:
    sub_B0D97C(Instance);
  }
}


void __fastcall BattleBuffData__SetNoActBuffWithoutExecuteServant(
        BattleBuffData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  _BOOL8 v9; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217E76 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, servantArray);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v7);
    byte_4217E76 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v10.fields.current )
      sub_B0D97C(v9);
    if ( SLODWORD(v10.fields.current[17].klass) >= 1 )
      BattleBuffData_BuffData__SetBuffNoActState((BattleBuffData_BuffData_o *)v10.fields.current, servantArray, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromCheckFunc(
        BattleBuffData_o *this,
        System_Func_BattleBuffData_BuffData__bool__o *checkFunc,
        bool isCreateDummy,
        const MethodInfo *method)
{
  _BOOL4 v4; // w25
  System_Func_BattleBuffData_BuffData__bool__o *v5; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *activeList; // x0
  char *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x23
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  const MethodInfo_26189CC **v19; // x28
  unsigned __int64 v20; // x26
  char *v21; // x27
  BattleBuffData_BuffData_o *v22; // x24
  const MethodInfo *v23; // x2
  BattleBuffData_o *v24; // x8
  _BOOL4 v25; // w19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x25
  char *v27; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x27
  char *v29; // x23
  const MethodInfo_26189CC **v30; // x22
  BattleBuffData_o *v31; // x28
  BattleBuffData_o *v32; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  RemovedBuffInfo_o *v35; // x20
  __int64 v37; // x0
  System_Func_BattleBuffData_BuffData__bool__o *v38; // [xsp+8h] [xbp-58h]

  v4 = isCreateDummy;
  v5 = checkFunc;
  if ( (byte_4217E23 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__, checkFunc);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    byte_4217E23 = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_20;
  activeList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !this->fields.activeList )
    goto LABEL_20;
  v13 = (char *)activeList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v13 )
    goto LABEL_20;
  v18 = *((_QWORD *)v13 + 3);
  if ( (int)v18 >= 1 )
  {
    v19 = (const MethodInfo_26189CC **)&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__;
    v20 = 0LL;
    v21 = v13 + 32;
    v38 = v5;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
      {
        v37 = sub_B0D9A8(activeList);
        sub_B0D948(v37, 0LL);
      }
      if ( !v5 )
        break;
      v22 = *(BattleBuffData_BuffData_o **)&v21[8 * v20];
      activeList = (void *)System_Func_BattleBuffData_BuffData__bool___Invoke(v5, v22, *v19);
      if ( ((unsigned __int8)activeList & 1) != 0 )
      {
        if ( !v16 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        if ( v4 )
        {
          v24 = this;
          v25 = v4;
          v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24->fields.activeList;
          v27 = v21;
          v28 = v16;
          v29 = v13;
          v30 = v19;
          v31 = v24;
          activeList = BattleBuffData__CreateDummyBuff((BattleBuffData_o *)activeList, v22, v23);
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)activeList,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          v4 = v25;
          this = v31;
          v19 = v30;
          v13 = v29;
          v16 = v28;
          v21 = v27;
          v5 = v38;
        }
      }
      else
      {
        activeList = this->fields.activeList;
        if ( !activeList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v18) = *((_DWORD *)v13 + 6);
      if ( (__int64)++v20 >= (int)v18 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B0D97C(activeList);
  }
LABEL_18:
  v32 = (BattleBuffData_o *)BattleBuffData__removeLinkageBuff(
                              this,
                              (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v16,
                              v4,
                              v17);
  activeList = BattleBuffData__MakeRemoveBuffInfo(
                 v32,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v16,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v32,
                 v33);
  if ( !activeList )
    goto LABEL_20;
  v35 = (RemovedBuffInfo_o *)activeList;
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    *((System_Collections_Generic_List_BattleBuffData_BuffData__o **)activeList + 2),
    v34);
  return v35;
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromDeadActorId(
        BattleBuffData_o *this,
        int32_t actorId,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleBuffData___c__DisplayClass108_0_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x21
  const MethodInfo *v15; // x3

  if ( (byte_4217E22 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, *(_QWORD *)&actorId);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass108_0__SubBuffFromDeadActorId_b__0__, v8);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass108_0_TypeInfo, v9);
    byte_4217E22 = 1;
  }
  v10 = (BattleBuffData___c__DisplayClass108_0_o *)sub_B0D974(
                                                     BattleBuffData___c__DisplayClass108_0_TypeInfo,
                                                     *(_QWORD *)&actorId,
                                                     isCreateDummy);
  BattleBuffData___c__DisplayClass108_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.actorId = actorId;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v12,
                                                                             v13);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_BattleBuffData___c__DisplayClass108_0__SubBuffFromDeadActorId_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v14,
           isCreateDummy,
           v15);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromType(
        BattleBuffData_o *this,
        int32_t buffId,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  BuffMaster_o *buffMst; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21
  const MethodInfo *v22; // x3

  if ( (byte_4217E21 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, *(_QWORD *)&buffId);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass107_0__SubBuffFromType_b__0__, v8);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass107_0_TypeInfo, v9);
    byte_4217E21 = 1;
  }
  v10 = sub_B0D974(BattleBuffData___c__DisplayClass107_0_TypeInfo, *(_QWORD *)&buffId, isCreateDummy);
  BattleBuffData___c__DisplayClass107_0___ctor((BattleBuffData___c__DisplayClass107_0_o *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (buffMst = BattleBuffData__get_buffMst(this, v18)) == 0LL) )
  {
    sub_B0D97C(buffMst);
  }
  *(_DWORD *)(v10 + 24) = BuffMaster__GetBuffType(buffMst, buffId, -1, 0LL);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v10,
    Method_BattleBuffData___c__DisplayClass107_0__SubBuffFromType_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v21,
           isCreateDummy,
           v22);
}


void __fastcall BattleBuffData__UpdateBaseAddOrder(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x20
  BattleBuffData___c_c *v12; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__213_0; // x21
  Il2CppObject *v15; // x22
  struct BattleBuffData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t v23; // w20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  BattleBuffData___c_c *v25; // x0
  struct BattleBuffData___c_StaticFields *v26; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__213_1; // x22
  Il2CppObject *v28; // x23
  BattleServantConfConponent_o *p__9__213_1; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t v36; // w21

  v3 = this;
  if ( (byte_4217E69 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___, method);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v4);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v6);
    sub_B0D8A4(&System_Math_TypeInfo, v7);
    sub_B0D8A4(&Method_BattleBuffData___c__UpdateBaseAddOrder_b__213_0__, v8);
    sub_B0D8A4(&Method_BattleBuffData___c__UpdateBaseAddOrder_b__213_1__, v9);
    this = (BattleBuffData_o *)sub_B0D8A4(&BattleBuffData___c_TypeInfo, v10);
    byte_4217E69 = 1;
  }
  activeList = v3->fields.activeList;
  if ( !activeList )
    goto LABEL_31;
  if ( activeList->fields._size < 1 )
  {
    v23 = 0;
  }
  else
  {
    v12 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v12 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__213_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__213_0;
    if ( !_9__213_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__213_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                    method,
                                                                                    v2);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__213_0,
        v15,
        Method_BattleBuffData___c__UpdateBaseAddOrder_b__213_0__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v16 = BattleBuffData___c_TypeInfo->static_fields;
      v16->__9__213_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__213_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v16->__9__213_0,
        (System_Int32_array **)_9__213_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    this = (BattleBuffData_o *)System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)activeList,
                                 (System_Func_TSource__int__o *)_9__213_0,
                                 (const MethodInfo_1B4DF7C *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
    v23 = (int)this;
  }
  passiveList = v3->fields.passiveList;
  if ( !passiveList )
LABEL_31:
    sub_B0D97C(this);
  if ( passiveList->fields._size < 1 )
  {
    v36 = 0;
  }
  else
  {
    v25 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v25 = BattleBuffData___c_TypeInfo;
    }
    v26 = v25->static_fields;
    _9__213_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v26->__9__213_1;
    if ( !_9__213_1 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v26 = BattleBuffData___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)v26->__9;
      _9__213_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                    method,
                                                                                    v2);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__213_1,
        v28,
        Method_BattleBuffData___c__UpdateBaseAddOrder_b__213_1__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      p__9__213_1 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__213_1;
      p__9__213_1->klass = (BattleServantConfConponent_c *)_9__213_1;
      sub_B0D840(p__9__213_1, (System_Int32_array **)_9__213_1, v30, v31, v32, v33, v34, v35);
    }
    v36 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
            (System_Func_TSource__int__o *)_9__213_1,
            (const MethodInfo_1B4DF7C *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v3->fields.addBuffOrder = System_Math__Max_44559528(v23, v36, 0LL) + 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__UpdateBuffAddOrder(
        BattleBuffData_o *this,
        int32_t addPassiveMaxOrder,
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
  __int64 v17; // x1
  __int64 v18; // x1
  BattleBuffData___c__DisplayClass212_0_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  BattleBuffData___c_c *v24; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__212_0; // x22
  Il2CppObject *v27; // x23
  struct BattleBuffData___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_passiveList; // x25
  int32_t v37; // w22
  BattleBuffData___c_c *v38; // x0
  struct BattleBuffData___c_StaticFields *v39; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__212_1; // x23
  Il2CppObject *v41; // x24
  struct BattleBuffData___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int32_t v49; // w21
  int32_t v50; // w0
  struct BattleBuffData___c_StaticFields *v51; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__212_2; // x22
  Il2CppObject *v53; // x23
  struct BattleBuffData___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v61; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v62; // x21
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v63; // x19
  __int64 v64; // x1
  __int64 v65; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v66; // x21

  if ( (byte_4217E68 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, *(_QWORD *)&addPassiveMaxOrder);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___, v6);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v7);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v10);
    sub_B0D8A4(&System_Math_TypeInfo, v11);
    sub_B0D8A4(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__212_0__, v12);
    sub_B0D8A4(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__212_1__, v13);
    sub_B0D8A4(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__212_2__, v14);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass212_0__UpdateBuffAddOrder_b__3__, v15);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass212_0__UpdateBuffAddOrder_b__4__, v16);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass212_0_TypeInfo, v17);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v18);
    byte_4217E68 = 1;
  }
  v19 = (BattleBuffData___c__DisplayClass212_0_o *)sub_B0D974(
                                                     BattleBuffData___c__DisplayClass212_0_TypeInfo,
                                                     *(_QWORD *)&addPassiveMaxOrder,
                                                     method);
  BattleBuffData___c__DisplayClass212_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_48;
  v19->fields.addPassiveMaxOrder = addPassiveMaxOrder;
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
    v37 = 0;
  }
  else
  {
    v24 = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v24 = BattleBuffData___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__212_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__212_0;
    if ( !_9__212_0 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__212_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                    v21,
                                                                                    v22);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__212_0,
        v27,
        Method_BattleBuffData___c__UpdateBuffAddOrder_b__212_0__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v28 = BattleBuffData___c_TypeInfo->static_fields;
      v28->__9__212_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__212_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v28->__9__212_0,
        (System_Int32_array **)_9__212_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    v20 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)activeList,
            (System_Func_TSource__int__o *)_9__212_0,
            (const MethodInfo_1B4E6B4 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    p_passiveList = &this->fields.passiveList;
    passiveList = this->fields.passiveList;
    if ( !passiveList )
      goto LABEL_48;
    v37 = v20;
  }
  if ( passiveList->fields._size >= 1 )
  {
    v38 = BattleBuffData___c_TypeInfo;
    if ( v37 <= 0 )
    {
      if ( (WORD1(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
        v38 = BattleBuffData___c_TypeInfo;
      }
      v51 = v38->static_fields;
      _9__212_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v51->__9__212_2;
      if ( !_9__212_2 )
      {
        if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v51 = BattleBuffData___c_TypeInfo->static_fields;
        }
        v53 = (Il2CppObject *)v51->__9;
        _9__212_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                      System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                      v21,
                                                                                      v22);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__212_2,
          v53,
          Method_BattleBuffData___c__UpdateBuffAddOrder_b__212_2__,
          (const MethodInfo_2619564 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
        v54 = BattleBuffData___c_TypeInfo->static_fields;
        v54->__9__212_2 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__212_2;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v54->__9__212_2,
          (System_Int32_array **)_9__212_2,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      v50 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
              (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
              (System_Func_TSource__int__o *)_9__212_2,
              (const MethodInfo_1B4E6B4 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    }
    else
    {
      if ( (WORD1(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
        v38 = BattleBuffData___c_TypeInfo;
      }
      v39 = v38->static_fields;
      _9__212_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v39->__9__212_1;
      if ( !_9__212_1 )
      {
        if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v39 = BattleBuffData___c_TypeInfo->static_fields;
        }
        v41 = (Il2CppObject *)v39->__9;
        _9__212_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                      System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                      v21,
                                                                                      v22);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__212_1,
          v41,
          Method_BattleBuffData___c__UpdateBuffAddOrder_b__212_1__,
          (const MethodInfo_2619564 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
        v42 = BattleBuffData___c_TypeInfo->static_fields;
        v42->__9__212_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__212_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v42->__9__212_1,
          (System_Int32_array **)_9__212_1,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
      v49 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
              (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
              (System_Func_TSource__int__o *)_9__212_1,
              (const MethodInfo_1B4E6B4 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v50 = System_Math__Min_44514512(v37, v49, 0LL);
    }
    v37 = v50;
  }
  if ( v37 <= v19->fields.addPassiveMaxOrder )
  {
    v61 = this->fields.activeList;
    v62 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                 v21,
                                                                                 v22);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v62,
      (Il2CppObject *)v19,
      Method_BattleBuffData___c__DisplayClass212_0__UpdateBuffAddOrder_b__3__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    if ( v61 )
    {
      System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
        (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v61,
        (System_Action_T__o *)v62,
        (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      v63 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)*p_passiveList;
      v66 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                   System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                   v64,
                                                                                   v65);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v66,
        (Il2CppObject *)v19,
        Method_BattleBuffData___c__DisplayClass212_0__UpdateBuffAddOrder_b__4__,
        (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      if ( v63 )
      {
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v63,
          (System_Action_T__o *)v66,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
        return;
      }
    }
LABEL_48:
    sub_B0D97C(v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__UpdateForceAllBuffNoAct(
        BattleBuffData_o *this,
        int32_t showState,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleBuffData___c__DisplayClass146_0_o *v9; // x21
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x20

  if ( (byte_4217E3B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, *(_QWORD *)&showState);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v6);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass146_0__UpdateForceAllBuffNoAct_b__0__, v7);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass146_0_TypeInfo, v8);
    byte_4217E3B = 1;
  }
  v9 = (BattleBuffData___c__DisplayClass146_0_o *)sub_B0D974(
                                                    BattleBuffData___c__DisplayClass146_0_TypeInfo,
                                                    *(_QWORD *)&showState,
                                                    method);
  BattleBuffData___c__DisplayClass146_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.showState = showState,
        v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                     v11,
                                                                                     v12),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BattleBuffData___c__DisplayClass146_0__UpdateForceAllBuffNoAct_b__0__,
          (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__),
        (passiveList = this->fields.passiveList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v13,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = this->fields.activeList) == 0LL) )
  {
    sub_B0D97C(passiveList);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
    (System_Action_T__o *)v13,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


void __fastcall BattleBuffData__UpdateForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isAdd,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x8
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v15; // x19
  bool v16; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  BattleBuffData___c_c *v19; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__90_0; // x20
  Il2CppObject *v22; // x21
  struct BattleBuffData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  v6 = this;
  if ( (byte_4217E17 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, buff);
    sub_B0D8A4(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v11);
    sub_B0D8A4(&Method_BattleBuffData___c__UpdateForceBuff_b__90_0__, v12);
    this = (BattleBuffData_o *)sub_B0D8A4(&BattleBuffData___c_TypeInfo, v13);
    byte_4217E17 = 1;
  }
  if ( !buff )
    goto LABEL_21;
  v14 = 32LL;
  if ( buff->fields.passive )
    v14 = 24LL;
  v15 = *(System_Collections_Generic_List_WarBoardManager_TaskList__o **)((char *)&v6->klass + v14);
  if ( !v15 )
LABEL_21:
    sub_B0D97C(this);
  v16 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          v15,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
  if ( isAdd )
  {
    if ( !v16 )
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  else if ( v16 )
  {
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      v15,
      (WarBoardManager_TaskList_o *)buff,
      (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
  }
  v19 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v19 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__90_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__90_0;
  if ( !_9__90_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__90_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                           v17,
                                                                           v18);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__90_0,
      v22,
      Method_BattleBuffData___c__UpdateForceBuff_b__90_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v23 = BattleBuffData___c_TypeInfo->static_fields;
    v23->__9__90_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__90_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v23->__9__90_0,
      (System_Int32_array **)_9__90_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)_9__90_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
}


void __fastcall BattleBuffData__UpdateForceNoField(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleBuffData___c_c *v8; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__224_0; // x20
  Il2CppObject *v11; // x21
  BattleServantConfConponent_o *p__9__224_0; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_4217E6F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v5);
    sub_B0D8A4(&Method_BattleBuffData___c__UpdateForceNoField_b__224_0__, v6);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v7);
    byte_4217E6F = 1;
  }
  v8 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v8 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__224_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__224_0;
  if ( !_9__224_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__224_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                       System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                       method,
                                                                                       v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__224_0,
      v11,
      Method_BattleBuffData___c__UpdateForceNoField_b__224_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    p__9__224_0 = (BattleServantConfConponent_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__224_0;
    p__9__224_0->klass = (BattleServantConfConponent_c *)_9__224_0;
    sub_B0D840(p__9__224_0, (System_Int32_array **)_9__224_0, v13, v14, v15, v16, v17, v18);
  }
  activeList = this->fields.activeList;
  if ( !activeList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
          (System_Action_T__o *)_9__224_0,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = this->fields.passiveList) == 0LL) )
  {
    sub_B0D97C(activeList);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)activeList,
    (System_Action_T__o *)_9__224_0,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


void __fastcall BattleBuffData__UpdateSkillRelationBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *skillChangeData; // x0

  skillChangeData = this->fields.skillChangeData;
  if ( skillChangeData )
    BattleBuffData_SkillRankChangeData__Update(skillChangeData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_BuffData_o *__fastcall BattleBuffData__UseFieldProgressingDoNotAct(
        BattleBuffData_o *this,
        BattleServantData_o *svtData,
        int32_t funcIndex,
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
  __int64 v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x21
  const MethodInfo *v21; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v23; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  Il2CppObject *current; // x20
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0
  BuffEntity_o *v28; // x25
  __int64 DamageRelease; // x0
  System_Int32_array **DamageReleaseText; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4217E12 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_BuffData_TypeInfo, svtData);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    byte_4217E12 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  linkedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B0D974(
                                                                                   System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                   svtData,
                                                                                   *(_QWORD *)&funcIndex);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)linkedBuffList,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v20 = sub_B0D974(BattleActionData_BuffData_TypeInfo, v18, v19);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v20, 0LL);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v21);
  if ( !v17 )
    sub_B0D97C(PassiveList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v23);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v37 )
      break;
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B0D97C(v37);
    if ( !BYTE2(v43.fields.current[23].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v38);
      if ( !buffMst )
        sub_B0D97C(0LL);
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                 (int32_t)current[1].klass,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v28 = Entity;
      if ( !Entity )
        sub_B0D97C(0LL);
      if ( Entity->fields.type == 32 )
      {
        DamageRelease = BuffEntity__getDamageRelease(Entity, 0LL);
        if ( (int)DamageRelease >= 1 )
        {
          LODWORD(current[1].monitor) = 0;
          if ( !v20 )
            sub_B0D97C(DamageRelease);
          *(_DWORD *)(v20 + 16) = funcIndex;
          if ( !svtData )
            sub_B0D97C(DamageRelease);
          *(_DWORD *)(v20 + 40) = svtData->fields.uniqueId;
          DamageReleaseText = (System_Int32_array **)BuffEntity__getDamageReleaseText(v28, 0LL);
          *(_QWORD *)(v20 + 56) = DamageReleaseText;
          sub_B0D840((BattleServantConfConponent_o *)(v20 + 56), DamageReleaseText, v31, v32, v33, v34, v35, v36);
          *(_DWORD *)(v20 + 68) = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  BattleBuffData__RemoveProgressingBuffList(this, linkedBuffList, v39);
  return (BattleActionData_BuffData_o *)v20;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleBuffData__UseProgressingDoNotAct(
        BattleBuffData_o *this,
        BattleServantData_o *svtData,
        bool doTDamage,
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
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  BattleActionData_o *v21; // x21
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v24; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x1
  Il2CppObject *current; // x25
  BuffMaster_o *buffMst; // x0
  BuffEntity_o *Entity; // x0
  BuffEntity_o *v31; // x24
  __int64 DamageRelease; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x25
  __int64 v36; // x0
  System_Int32_array **DamageReleaseText; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4217E11 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, svtData);
    sub_B0D8A4(&BattleActionData_BuffData_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    byte_4217E11 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  linkedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B0D974(
                                                                                   System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                   svtData,
                                                                                   doTDamage);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)linkedBuffList,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v21 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v19, v20);
  BattleActionData___ctor(v21, 0LL);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v22);
  if ( !v18 )
    sub_B0D97C(PassiveList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v24);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v26 )
      break;
    current = v48.fields.current;
    if ( !v48.fields.current )
      sub_B0D97C(v26);
    if ( !BYTE2(v48.fields.current[23].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v27);
      if ( !buffMst )
        sub_B0D97C(0LL);
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                                 (int32_t)current[1].klass,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v31 = Entity;
      if ( !Entity )
        sub_B0D97C(0LL);
      if ( Entity->fields.type == 32 && BuffEntity__getDamageRelease(Entity, 0LL) >= 1 )
      {
        DamageRelease = BuffEntity__getDamageRelease(v31, 0LL);
        if ( (_DWORD)DamageRelease == 2 || !doTDamage )
        {
          LODWORD(current[1].monitor) = 0;
          if ( !svtData )
            sub_B0D97C(DamageRelease);
          if ( !v21 )
            sub_B0D97C(DamageRelease);
          v21->fields.targetId = svtData->fields.uniqueId;
          v35 = sub_B0D974(BattleActionData_BuffData_TypeInfo, v33, v34);
          BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v35, 0LL);
          if ( !v35 )
            sub_B0D97C(v36);
          *(_DWORD *)(v35 + 40) = svtData->fields.uniqueId;
          DamageReleaseText = (System_Int32_array **)BuffEntity__getDamageReleaseText(v31, 0LL);
          *(_QWORD *)(v35 + 56) = DamageReleaseText;
          sub_B0D840((BattleServantConfConponent_o *)(v35 + 56), DamageReleaseText, v38, v39, v40, v41, v42, v43);
          *(_DWORD *)(v35 + 68) = 1;
          *(_BYTE *)(v35 + 82) = 1;
          *(_BYTE *)(v35 + 27) = 1;
          BattleActionData__setBuffData(v21, (BattleActionData_BuffData_o *)v35, 0LL, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  BattleBuffData__RemoveProgressingBuffList(this, linkedBuffList, v44);
  return v21;
}


void __fastcall BattleBuffData__UsedProgressing(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *checkList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x2
  signed int max_length; // w8
  unsigned int v11; // w23
  BattleBuffData_BuffData_o *v12; // x22
  int32_t count; // w8
  bool v14; // vf
  int v15; // w8
  __int64 v16; // x0

  if ( (byte_4217E0D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, checkList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v6);
    byte_4217E0D = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 checkList,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checkList )
    goto LABEL_17;
  max_length = checkList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v16 = sub_B0D9A8(v8);
        sub_B0D948(v16, 0LL);
      }
      v12 = checkList->m_Items[v11];
      if ( !v12 )
        break;
      if ( v12->fields.isDecide )
      {
        if ( v12->fields.isUse )
        {
          count = v12->fields.count;
          v14 = __OFSUB__(count, 1);
          v15 = count - 1;
          if ( v15 < 0 == v14 )
          {
            v12->fields.count = v15;
            v8 = BattleBuffData_BuffData__IslinkageTarget(v12, 0LL);
            if ( v8 )
            {
              if ( !v7 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v7,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
          }
        }
        v12->fields.isUse = 0;
        v12->fields.isDecide = 0;
      }
      max_length = checkList->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_16;
    }
LABEL_17:
    sub_B0D97C(v8);
  }
LABEL_16:
  BattleBuffData__RemoveProgressingBuffList(this, (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7, v9);
}


void __fastcall BattleBuffData___AddForceBuff_b__88_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__UpdateForceBuff(this, buff, 1, v3);
}


void __fastcall BattleBuffData___DelForceBuff_b__89_0(
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
  System_Collections_Generic_List_WarBoardManager_TaskList__o *conditionalAuraBuff; // x0

  if ( (byte_4217E89 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, aura);
    byte_4217E89 = 1;
  }
  conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.conditionalAuraBuff;
  if ( !conditionalAuraBuff )
    goto LABEL_11;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          conditionalAuraBuff,
          (WarBoardManager_TaskList_o *)aura,
          (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
  {
    conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.activeList;
    if ( conditionalAuraBuff )
    {
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             conditionalAuraBuff,
             (WarBoardManager_TaskList_o *)aura,
             (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        return 0;
      }
      conditionalAuraBuff = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.passiveList;
      if ( conditionalAuraBuff )
        return !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  conditionalAuraBuff,
                  (WarBoardManager_TaskList_o *)aura,
                  (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    }
LABEL_11:
    sub_B0D97C(conditionalAuraBuff);
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
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *auraBuffList; // x0
  const MethodInfo *v11; // x3
  int32_t addBuffOrder; // w1

  if ( (byte_4217E14 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v9);
    byte_4217E14 = 1;
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
    sub_B0D97C(auraBuffList);
  if ( buff->fields.auraEffectId )
  {
    auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.auraBuffList;
    if ( !auraBuffList )
      goto LABEL_22;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      auraBuffList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  if ( buff->fields.classIconAuraEffectId )
  {
    auraBuffList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.classIconAuraEffectBuffList;
    if ( !auraBuffList )
      goto LABEL_22;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      auraBuffList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
  }
  addBuffOrder = this->fields.addBuffOrder;
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
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
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
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4217E39 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    byte_4217E39 = 1;
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
          sub_B0D97C(v18);
        BattleLogic__updateConditionsBuffAll(logic, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4217E45 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_4217E45 = 1;
  }
  value = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return BattleBuffData__confirmationBuff(this, ActInfo, selfIndiv, opIndiv, 0, &value, 0LL, 0LL, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkActBuffDamageBuffIndiv(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        System_Int32_array *damageBuffIndiv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v13; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v15; // x19
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x19
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  BattleBuffData_BuffData_o *v28; // x0
  BattleBuffData_BuffData_o *v29; // x24
  BuffList_ActInfo_o *ActInfo; // x1
  const MethodInfo *v31; // x5
  const MethodInfo *v32; // x3
  bool v33; // w20
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-60h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4217E4A & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_4217E4A = 1;
  }
  plusMinus = 0;
  v13 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, (const MethodInfo *)checkIndividualities);
  if ( !v13 )
    sub_B0D97C(0LL);
  klass = v13->klass;
  v15 = v13;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(v13, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v15,
          *(_QWORD *)(p_method + 8));
  if ( !v19 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_15;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_15:
      v23 = sub_AA67A0(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v26 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_22;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_22:
      v27 = sub_AA67A0(v19, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v28 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    v29 = v28;
    if ( !v28 )
      sub_B0D97C(0LL);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v28, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v29,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v29, 0LL) || v29->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v29, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v29, 0LL)) )
    {
      if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
      if ( BattleBuffData__checkIndiviuality(this, ActInfo, v29, checkIndividualities, &plusMinus, v31)
        && Individuality__CheckIndividualities(damageBuffIndiv, v29->fields.hpReduceToRegainIndiv, 0LL)
        && BattleBuffData__checkBuffSuccessful(this, v29, 0, v32) )
      {
        v39 = 141;
        v33 = 1;
        goto LABEL_39;
      }
    }
  }
  v33 = 0;
  v39 = 139;
LABEL_39:
  v34 = *(_QWORD *)v19;
  if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
  {
    v35 = 0LL;
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
        goto LABEL_43;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_43:
    v37 = sub_AA67A0(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v19, *(_QWORD *)(v37 + 8));
  if ( v39 == 139 )
    return 0;
  return v33;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkActBuff_30823572(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v9; // [xsp+0h] [xbp-30h]
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4217E46 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_4217E46 = 1;
  }
  value = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B0D97C(ActInfo);
  return BattleBuffData__confirmationBuff(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           0,
           &value,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           v9);
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
    sub_B0D97C(this);
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
      v13 = sub_B0D9A8(this);
      sub_B0D948(v13, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x22
  int v20; // w19
  _BOOL8 v21; // x0
  BuffEntity_o *Entity; // x22
  int32_t type; // w23
  int32_t v24; // w23
  _BOOL8 v25; // x0
  Il2CppObject *current; // x23
  BuffEntity_o *v27; // x0
  int v28; // w23
  int v29; // w24
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v30; // [xsp+0h] [xbp-C0h]
  _BYTE v31[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v32; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+30h] [xbp-90h] BYREF
  int32_t pal; // [xsp+4Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4217DE5 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, buffList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4217DE5 = 1;
  }
  v30 = buffList;
  memset(&v35, 0, sizeof(v35));
  pal = 0;
  memset(&v33, 0, sizeof(v33));
  v32 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___),
        v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v17, v18),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v19,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__),
        !v19) )
  {
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.passiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.activeList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v19,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v20 = 0;
  v35 = *(System_Collections_Generic_List_Enumerator_T__o *)v31;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v21 )
      break;
    if ( !v35.fields.current )
      sub_B0D97C(v21);
    if ( !BYTE2(v35.fields.current[23].klass) )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B0D97C(v21);
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)v35.fields.current[1].klass,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( Entity )
      {
        pal = 0;
        type = Entity->fields.type;
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(81, type, 0LL) )
          goto LABEL_19;
        v24 = Entity->fields.type;
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(79, v24, 0LL) )
        {
LABEL_19:
          if ( BuffEntity__isCondition(Entity, 2, &pal, 0LL) )
          {
            if ( !v30 )
              sub_B0D97C(0LL);
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v31,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v30,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
            v33 = *(System_Collections_Generic_List_Enumerator_T__o *)v31;
            while ( 1 )
            {
              v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v33,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
              if ( !v25 )
                break;
              current = v33.fields.current;
              if ( !v33.fields.current )
                sub_B0D97C(v25);
              if ( !BYTE2(v33.fields.current[23].klass) )
              {
                v27 = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        (int32_t)v33.fields.current[1].klass,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                if ( SLODWORD(current[8].monitor) >= 1 )
                {
                  if ( !v27 )
                    sub_B0D97C(0LL);
                  if ( BuffEntity__checkBuffType(v27, 41, 0LL) && HIDWORD(current[1].monitor) == pal )
                  {
                    this->fields.resumptionHpFromLossMaxHp += LODWORD(current[8].monitor);
                    LODWORD(current[8].monitor) = 0;
                    break;
                  }
                }
              }
            }
            *(_DWORD *)&v31[4 * v20 + 24] = 259;
            v28 = ++v32;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v33,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
            v20 = 0;
            if ( v28 )
            {
              v20 = v28;
              if ( *(_DWORD *)&v31[4 * v28 + 20] == 259 )
              {
                v20 = v28 - 1;
                v32 = v28 - 1;
              }
            }
          }
        }
      }
    }
  }
  *(_DWORD *)&v31[4 * v20 + 24] = 287;
  v29 = ++v32;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v29 && *(_DWORD *)&v31[4 * v29 + 20] == 287 )
    v32 = v29 - 1;
}


bool __fastcall BattleBuffData__checkAuraBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x20
  unsigned __int64 v6; // x21
  WarBoardManager_TaskList_o *v7; // x20

  v2 = this;
  if ( (byte_4217DF4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v3);
    this = (BattleBuffData_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__,
                                 v4);
    byte_4217DF4 = 1;
  }
  auraBuffList = v2->fields.auraBuffList;
  if ( !auraBuffList )
LABEL_13:
    sub_B0D97C(this);
  v6 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v6 >= auraBuffList->fields._size )
      return 0;
    if ( v6 >= (unsigned int)auraBuffList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (BattleBuffData_o *)v2->fields.activeList;
    if ( !this )
      goto LABEL_13;
    v7 = (WarBoardManager_TaskList_o *)auraBuffList->fields._items->m_Items[v6];
    this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                 v7,
                                 (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleBuffData_o *)v2->fields.passiveList;
      if ( !this )
        goto LABEL_13;
      this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                   v7,
                                   (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 1;
    }
    auraBuffList = v2->fields.auraBuffList;
    ++v6;
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
    sub_B0D97C(this);
  return BattleBuffData_BuffData__checkState(buff, 2, 0LL);
}


bool __fastcall BattleBuffData__checkBuffClear(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1

  v4 = this;
  if ( (byte_4217E0F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, buff);
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v5);
    byte_4217E0F = 1;
  }
  if ( !buff )
    goto LABEL_14;
  if ( buff->fields._isRemove || buff->fields.count && buff->fields.turn )
    return 0;
  if ( buff->fields.auraEffectId )
  {
    this = (BattleBuffData_o *)v4->fields.auraBuffList;
    if ( !this )
      goto LABEL_14;
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
           (WarBoardManager_TaskList_o *)buff,
           (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v4->fields.auraBuffList;
      if ( this )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)buff,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        goto LABEL_13;
      }
LABEL_14:
      sub_B0D97C(this);
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
  const MethodInfo *v9; // x2
  int max_length; // w8
  int32_t *v11; // x22
  unsigned int v12; // w9
  BattleBuffData_BuffData_o *v13; // x10
  int v14; // w8
  unsigned int v15; // w9
  BattleBuffData_BuffData_o *v16; // x10
  __int64 v17; // x0

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
        sub_B0D97C(PassiveList);
      max_length = PassiveList->max_length;
      v11 = &idlist->m_Items[v7 + 1];
      if ( max_length >= 1 )
        break;
LABEL_13:
      PassiveList = BattleBuffData__getActiveList(this, 1, v9);
      if ( !PassiveList )
        goto LABEL_27;
      v14 = PassiveList->max_length;
      if ( v14 >= 1 )
      {
        v15 = 0;
        while ( v15 < v14 )
        {
          v16 = PassiveList->m_Items[v15];
          if ( !v16 )
            goto LABEL_27;
          if ( v7 >= idlist->max_length )
            break;
          if ( v16->fields.buffId == *v11 )
            return 1;
          if ( (int)++v15 >= v14 )
            goto LABEL_21;
        }
LABEL_26:
        v17 = sub_B0D9A8(PassiveList);
        sub_B0D948(v17, 0LL);
      }
LABEL_21:
      ++v7;
      result = 0;
      if ( (__int64)v7 >= (int)idlist->max_length )
        return result;
    }
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        goto LABEL_26;
      v13 = PassiveList->m_Items[v12];
      if ( !v13 )
        goto LABEL_27;
      if ( v7 >= idlist->max_length )
        goto LABEL_26;
      if ( v13->fields.buffId == *v11 )
        return 1;
      if ( (int)++v12 >= max_length )
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
  int count; // w8
  BattleBuffData_BuffData_array *v12; // x23
  unsigned int v13; // w24
  System_Int32_array *Individualty; // x0
  int max_length; // w8
  BattleBuffData_BuffData_array *v16; // x22
  unsigned int v17; // w23
  System_Int32_array *v18; // x0
  __int64 v20; // x0

  if ( !isActiveOnly && !isIgnoreIndivUnreleaseable )
  {
    PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_20;
    count = PassiveList->fields.count;
    v12 = (BattleBuffData_BuffData_array *)PassiveList;
    if ( count >= 1 )
    {
      v13 = 0;
      do
      {
        if ( v13 >= count )
          goto LABEL_19;
        PassiveList = v12->m_Items[v13];
        if ( !PassiveList )
          goto LABEL_20;
        Individualty = BattleBuffData_BuffData__GetIndividualty(PassiveList, IsIncludeIgnoreIndividuality, 0, 0, 0LL);
        PassiveList = (BattleBuffData_BuffData_o *)Individuality__CheckIndividualities(
                                                     Individualty,
                                                     individualities,
                                                     0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          return 1;
        count = v12->max_length;
      }
      while ( (int)++v13 < count );
    }
  }
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_20:
    sub_B0D97C(PassiveList);
  max_length = PassiveList->fields.count;
  v16 = (BattleBuffData_BuffData_array *)PassiveList;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( v17 < max_length )
    {
      PassiveList = v16->m_Items[v17];
      if ( !PassiveList )
        goto LABEL_20;
      v18 = BattleBuffData_BuffData__GetIndividualty(
              PassiveList,
              IsIncludeIgnoreIndividuality,
              isIgnoreIndivUnreleaseable,
              0,
              0LL);
      PassiveList = (BattleBuffData_BuffData_o *)Individuality__CheckIndividualities(v18, individualities, 0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        return 1;
      max_length = v16->max_length;
      if ( (int)++v17 >= max_length )
        return 0;
    }
LABEL_19:
    v20 = sub_B0D9A8(PassiveList);
    sub_B0D948(v20, 0LL);
  }
  return 0;
}


bool __fastcall BattleBuffData__checkBuffSpecialAttack(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1
  int32_t v7; // w19

  v4 = this;
  if ( (byte_4217DFE & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, buff);
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_4217DFE = 1;
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
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_B0D97C(this);
  }
  v7 = *(&this->fields.resumptionHpFromLossMaxHp + 1);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return BuffList__isSpHit(v7, 0LL);
}


bool __fastcall BattleBuffData__checkBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isRec,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x21
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
  bool isUse; // w0
  System_Collections_Generic_List_int__o **p_notUseCountWithNoDamageBuffTypes; // x22
  System_String_o *Value; // x0
  System_String_o *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x23
  BattleBuffData___c_c *v31; // x8
  struct BattleBuffData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__118_0; // x24
  Il2CppObject *v34; // x25
  struct BattleBuffData___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Int32_array **v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  BattleBuffData_o **p_buffMaster; // x23
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_List_int__o *v58; // x9
  BattleBuffData_o *v59; // x22
  _BOOL8 v60; // x0
  int32_t current; // w23
  int32_t v62; // w24
  int v63; // w22
  int32_t buffRate; // w8
  bool v65; // w2
  __int64 v66; // x0
  System_Collections_Generic_List_Enumerator_int__o v67; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v68; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_4217E29 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, buff);
    sub_B0D8A4(&char___TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantStrMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__int___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v15);
    sub_B0D8A4(&Method_System_Func_string__int___ctor__, v16);
    sub_B0D8A4(&System_Func_string__int__TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&Method_BattleBuffData___c__checkBuffSuccessful_b__118_0__, v20);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v21);
    this = (BattleBuffData_o *)sub_B0D8A4(&StringLiteral_9365/*"NOT_REDUCE_COUNT_WITH_NO_DAMAGE_BUFF"*/, v22);
    byte_4217E29 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  if ( !buff )
    goto LABEL_49;
  if ( buff->fields._isRemove )
    return 0;
  if ( v6->fields.isNoDamage )
  {
    p_notUseCountWithNoDamageBuffTypes = &v6->fields.notUseCountWithNoDamageBuffTypes;
    if ( !v6->fields.notUseCountWithNoDamageBuffTypes )
    {
      this = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_49;
      this = (BattleBuffData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)this,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( !this )
        goto LABEL_49;
      Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)this, (System_String_o *)StringLiteral_9365/*"NOT_REDUCE_COUNT_WITH_NO_DAMAGE_BUFF"*/, 0LL);
      if ( Value )
      {
        v27 = Value;
        this = (BattleBuffData_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_49;
        if ( !LODWORD(this->fields.passiveList) )
        {
          v66 = sub_B0D9A8(this);
          sub_B0D948(v66, 0LL);
        }
        LOWORD(this->fields.activeList) = 44;
        v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                     v27,
                                                                     (System_Char_array *)this,
                                                                     0LL);
        v31 = BattleBuffData___c_TypeInfo;
        if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
          v31 = BattleBuffData___c_TypeInfo;
        }
        static_fields = v31->static_fields;
        _9__118_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__118_0;
        if ( !_9__118_0 )
        {
          if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            static_fields = BattleBuffData___c_TypeInfo->static_fields;
          }
          v34 = (Il2CppObject *)static_fields->__9;
          _9__118_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                        System_Func_string__int__TypeInfo,
                                                                                        v28,
                                                                                        v29);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__118_0,
            v34,
            Method_BattleBuffData___c__checkBuffSuccessful_b__118_0__,
            (const MethodInfo_2619564 *)Method_System_Func_string__int___ctor__);
          v35 = BattleBuffData___c_TypeInfo->static_fields;
          v35->__9__118_0 = (struct System_Func_string__int__o *)_9__118_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v35->__9__118_0,
            (System_Int32_array **)_9__118_0,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
        }
        v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                     v30,
                                                                     (System_Func_TSource__TResult__o *)_9__118_0,
                                                                     (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_string__int___);
        v43 = (System_Int32_array **)System_Linq_Enumerable__ToList_int_(
                                       v42,
                                       (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
        *p_notUseCountWithNoDamageBuffTypes = (System_Collections_Generic_List_int__o *)v43;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v6->fields.notUseCountWithNoDamageBuffTypes,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      if ( !*p_notUseCountWithNoDamageBuffTypes )
        goto LABEL_38;
    }
    p_buffMaster = (BattleBuffData_o **)&v6->fields.buffMaster;
    this = (BattleBuffData_o *)v6->fields.buffMaster;
    if ( this
      || (this = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0LL
      && (MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)this,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___),
          *p_buffMaster = (BattleBuffData_o *)MasterData_WarQuestSelectionMaster,
          sub_B0D840(
            (BattleServantConfConponent_o *)&v6->fields.buffMaster,
            MasterData_WarQuestSelectionMaster,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57),
          (this = *p_buffMaster) != 0LL) )
    {
      this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                   buff->fields.buffId,
                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v58 = *p_notUseCountWithNoDamageBuffTypes;
      if ( *p_notUseCountWithNoDamageBuffTypes )
      {
        v59 = this;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v67,
          v58,
          (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v68 = v67;
        while ( 1 )
        {
          v60 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v68,
                  (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
          if ( !v60 )
            break;
          if ( !v59 )
            sub_B0D97C(v60);
          current = v68.fields.current;
          v62 = *(&v59->fields.resumptionHpFromLossMaxHp + 1);
          if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          if ( BuffList__CheckType(current, v62, 0LL) )
          {
            v63 = 392;
            goto LABEL_37;
          }
        }
        v63 = 234;
LABEL_37:
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v68,
          (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v63 == 392 )
          return 0;
        goto LABEL_38;
      }
    }
LABEL_49:
    sub_B0D97C(this);
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
  v65 = buffRate == 1000 || !buffRate || buff->fields.buffRate >= BattleRandom__getNext(1000, 0LL);
  isUse = BattleBuffData_BuffData__FixedUse(buff, v6, v65, 0LL);
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
    sub_B0D97C(this);
  return buff->fields.turn > 0 || buff->fields.count > 0;
}


bool __fastcall BattleBuffData__checkBuffTypeIndiviuality(
        BattleBuffData_o *this,
        System_Int32_array *self,
        System_Int32_array *target,
        BuffEntity_o *buffEnt,
        System_Int32_array *targetCount,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int CkIndvCountAbove; // w21
  int CkIndvCountBelow; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  bool result; // w0
  System_Func_T1__T2__TResult__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Func_T1__T2__TResult__o *v25; // x21
  System_Func_T1__T2__TResult__o *v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  System_Func_T1__T2__TResult__o *v29; // x25
  __int64 v30; // x1
  __int64 v31; // x2
  System_Func_T1__T2__T3__T4__TResult__o *v32; // x0
  __int64 *v33; // x25
  System_Func_T1__T2__TResult__o *v34; // x24
  __int64 v35; // x1
  __int64 v36; // x2
  System_Func_T1__T2__TResult__o *v37; // x25
  System_Func_int____int____int__int__bool__o *v38; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  System_Func_T1__T2__T3__T4__TResult__o *v41; // x24

  if ( (byte_4217E57 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_int____int____bool___ctor__, self);
    sub_B0D8A4(&System_Func_int____int____bool__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Func_int____int____int__int__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_int____int____int__int__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_Individuality_IsMatchArrayCount__, v13);
    sub_B0D8A4(&Method_Individuality_IsMatchArray__, v14);
    sub_B0D8A4(&Method_Individuality_IsPartialMatchArrayCount__, v15);
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_Individuality_IsPartialMatchArray__, v16);
    byte_4217E57 = 1;
  }
  if ( !buffEnt )
    sub_B0D97C(this);
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
          || (v34 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v19, v20),
              System_Func_object__object__bool____ctor(
                v34,
                0LL,
                Method_Individuality_IsPartialMatchArray__,
                (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__),
              v37 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v35, v36),
              System_Func_object__object__bool____ctor(
                v37,
                0LL,
                Method_Individuality_IsPartialMatchArray__,
                (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__),
              !Individuality__CheckSignedIndividualities_26826816(
                 self,
                 target,
                 (System_Func_int____int____bool__o *)v34,
                 (System_Func_int____int____bool__o *)v37,
                 0LL)) )
        {
          v32 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B0D974(
                                                            System_Func_int____int____int__int__bool__TypeInfo,
                                                            v19,
                                                            v20);
          v33 = &Method_Individuality_IsPartialMatchArrayCount__;
          goto LABEL_22;
        }
LABEL_26:
        result = 1;
      }
      else
      {
        v22 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v19, v20);
        System_Func_object__object__bool____ctor(
          v22,
          0LL,
          Method_Individuality_IsPartialMatchArray__,
          (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
        v25 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v23, v24);
        System_Func_object__object__bool____ctor(
          v25,
          0LL,
          Method_Individuality_IsPartialMatchArray__,
          (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
        result = Individuality__CheckSignedIndividualities_26826816(
                   self,
                   target,
                   (System_Func_int____int____bool__o *)v22,
                   (System_Func_int____int____bool__o *)v25,
                   0LL);
      }
      break;
    case 3:
      v26 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v19, v20);
      System_Func_object__object__bool____ctor(
        v26,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
      v29 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v27, v28);
      System_Func_object__object__bool____ctor(
        v29,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
      if ( !Individuality__CheckSignedIndividualities_26826816(
              self,
              target,
              (System_Func_int____int____bool__o *)v26,
              (System_Func_int____int____bool__o *)v29,
              0LL) )
        goto LABEL_17;
      v32 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B0D974(
                                                        System_Func_int____int____int__int__bool__TypeInfo,
                                                        v30,
                                                        v31);
      v33 = &Method_Individuality_IsMatchArrayCount__;
LABEL_22:
      v38 = (System_Func_int____int____int__int__bool__o *)v32;
      System_Func_object__object__int__int__bool____ctor(
        v32,
        0LL,
        *v33,
        (const MethodInfo_2C67960 *)Method_System_Func_int____int____int__int__bool___ctor__);
      v41 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B0D974(
                                                        System_Func_int____int____int__int__bool__TypeInfo,
                                                        v39,
                                                        v40);
      System_Func_object__object__int__int__bool____ctor(
        v41,
        0LL,
        *v33,
        (const MethodInfo_2C67960 *)Method_System_Func_int____int____int__int__bool___ctor__);
      result = Individuality__CheckSignedIndividualitiesCount(
                 self,
                 targetCount,
                 v38,
                 (System_Func_int____int____int__int__bool__o *)v41,
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
  if ( (byte_4217E35 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_4217E35 = 1;
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
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B0D97C(this);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleBuffData___c_c *v18; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Func_int__int__bool__bool__o *_9__94_0; // x22
  Il2CppObject *v21; // x24
  struct BattleBuffData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  char v29; // w24
  Il2CppObject *current; // x23
  void *monitor; // x27
  System_Collections_Generic_List_BattleServantData__o *TargetSideSvtDataList; // x0
  const MethodInfo *v33; // x3
  System_Int32_array *v34; // x1
  const MethodInfo *v35; // x3
  bool v36; // w0
  _BOOL8 v37; // x0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4217E1A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, aliveSvtData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_B0D8A4(&Method_System_Func_int__int__bool__bool__Invoke__, v11);
    sub_B0D8A4(&Method_System_Func_int__int__bool__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_int__int__bool__bool__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v15);
    sub_B0D8A4(&Method_BattleBuffData___c__checkFieldAlive_b__94_0__, v16);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v17);
    byte_4217E1A = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v18 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v18 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__94_0 = static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__94_0 = (System_Func_int__int__bool__bool__o *)sub_B0D974(
                                                        System_Func_int__int__bool__bool__TypeInfo,
                                                        aliveSvtData,
                                                        checkList);
    System_Func_int__int__bool__bool____ctor(
      _9__94_0,
      v21,
      Method_BattleBuffData___c__checkFieldAlive_b__94_0__,
      (const MethodInfo_2624958 *)Method_System_Func_int__int__bool__bool___ctor__);
    v22 = BattleBuffData___c_TypeInfo->static_fields;
    v22->__9__94_0 = _9__94_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v22->__9__94_0,
      (System_Int32_array **)_9__94_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !checkList )
    goto LABEL_34;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)checkList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v39 = v38;
  v29 = 0;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v37 )
      break;
    current = v39.fields.current;
    if ( !v39.fields.current )
      sub_B0D97C(v37);
    monitor = v39.fields.current[9].monitor;
    if ( monitor )
    {
      if ( !aliveSvtData )
        sub_B0D97C(v37);
      TargetSideSvtDataList = FieldAliveServantData__getTargetSideSvtDataList(
                                aliveSvtData,
                                *((_BYTE *)monitor + 16),
                                0LL);
      if ( !TargetSideSvtDataList )
        sub_B0D97C(0LL);
      v34 = (System_Int32_array *)*((_QWORD *)monitor + 3);
      if ( v34 )
      {
        TargetSideSvtDataList = (System_Collections_Generic_List_BattleServantData__o *)BattleBuffData__CheckIndivSvtDataList(
                                                                                          TargetSideSvtDataList,
                                                                                          v34,
                                                                                          *((_BYTE *)monitor + 32),
                                                                                          v33);
        if ( !TargetSideSvtDataList )
          sub_B0D97C(0LL);
      }
      if ( !_9__94_0 )
        sub_B0D97C(TargetSideSvtDataList);
      if ( System_Func_int__int__bool__bool___Invoke(
             _9__94_0,
             TargetSideSvtDataList->fields._size,
             *((_DWORD *)monitor + 5),
             *((_BYTE *)monitor + 17),
             (const MethodInfo_262496C *)Method_System_Func_int__int__bool__bool__Invoke__) )
      {
        v36 = BattleBuffData__OffStateWithAuraConditionCheck(this, (BattleBuffData_BuffData_o *)current, 0x4000, v35);
      }
      else
      {
        v36 = BattleBuffData__OnStateWithAuraConditionCheck(this, (BattleBuffData_BuffData_o *)current, 0x4000, v35);
      }
      v29 |= v36;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v29 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      return;
    }
LABEL_34:
    sub_B0D97C(v18);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  char v24; // w24
  int monitor_high; // w9
  signed int max_length; // w10
  unsigned int v27; // w11
  bool v28; // w0
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x3
  int v31; // w9
  signed int v32; // w10
  unsigned int v33; // w11
  bool v34; // w0
  _BOOL8 v35; // x0
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

  if ( (byte_4217E19 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, idList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v16);
    byte_4217E19 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  *onList = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)onList,
    0LL,
    (System_String_array **)aliveSvtData,
    (System_String_array **)onList,
    (System_Boolean_array **)offList,
    (System_Int32_array **)logic,
    (System_Int32_array *)method,
    v7);
  *offList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)offList, 0LL, v17, v18, v19, v20, v21, v22);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v24 = 0;
  v45 = v42;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v29 )
      break;
    if ( !v45.fields.current )
      sub_B0D97C(v29);
    monitor_high = HIDWORD(v45.fields.current[3].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !idList )
        sub_B0D97C(v29);
      max_length = idList->max_length;
      if ( max_length < 1 )
      {
LABEL_13:
        v28 = BattleBuffData__OnStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v45.fields.current,
                1,
                v30);
      }
      else
      {
        v27 = 0;
        while ( 1 )
        {
          if ( v27 >= max_length )
          {
            v40 = sub_B0D9A8(v29);
            sub_B0D948(v40, 0LL);
          }
          if ( monitor_high == idList->m_Items[v27 + 1] )
            break;
          if ( (int)++v27 >= max_length )
            goto LABEL_13;
        }
        v28 = BattleBuffData__OffStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v45.fields.current,
                1,
                v30);
      }
      v24 |= v28;
    }
  }
  v43[0] = 137;
  v44 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v44 = 0;
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v45 = v42;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v35 )
      break;
    if ( !v45.fields.current )
      sub_B0D97C(v35);
    v31 = HIDWORD(v45.fields.current[3].monitor);
    if ( v31 >= 1 )
    {
      if ( !idList )
        sub_B0D97C(v35);
      v32 = idList->max_length;
      if ( v32 < 1 )
      {
LABEL_27:
        v34 = BattleBuffData__OnStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v45.fields.current,
                1,
                v36);
      }
      else
      {
        v33 = 0;
        while ( 1 )
        {
          if ( v33 >= v32 )
          {
            v41 = sub_B0D9A8(v35);
            sub_B0D948(v41, 0LL);
          }
          if ( v31 == idList->m_Items[v33 + 1] )
            break;
          if ( (int)++v33 >= v32 )
            goto LABEL_27;
        }
        v34 = BattleBuffData__OffStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v45.fields.current,
                1,
                v36);
      }
      v24 |= v34;
    }
  }
  v43[0] = 273;
  v37 = ++v44;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v37 && v43[v37 - 1] == 273 )
    v44 = v37 - 1;
  if ( (v24 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      goto LABEL_37;
    }
LABEL_42:
    sub_B0D97C(passiveList);
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
    sub_B0D97C(this);
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
  MethodInfo *v14; // x5
  __int64 v15; // x8
  _BOOL8 v16; // x0
  unsigned __int64 v17; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleBuffData_BuffData_o *v23; // x1
  __int64 v24; // x0

  *buff = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)buff,
    0LL,
    *(System_String_array ***)&actionType,
    (System_String_array **)checkIndividualitiesDataArray,
    (System_Boolean_array **)buff,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !bufflist )
    sub_B0D97C(v13);
  v15 = *(_QWORD *)&bufflist->max_length;
  v16 = 0LL;
  if ( v15 && (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        goto LABEL_12;
      v16 = BattleBuffData__checkGutsBuffSuccessful(
              this,
              bufflist->m_Items[v17],
              actionType,
              checkIndividualitiesDataArray,
              0,
              v14);
      if ( v16 )
        break;
      LODWORD(v15) = bufflist->max_length;
      if ( (__int64)++v17 >= (int)v15 )
      {
        LOBYTE(v16) = 0;
        return v16;
      }
    }
    if ( (unsigned int)v17 >= bufflist->max_length )
    {
LABEL_12:
      v24 = sub_B0D9A8(v16);
      sub_B0D948(v24, 0LL);
    }
    v23 = bufflist->m_Items[v17];
    *buff = v23;
    sub_B0D840(
      (BattleServantConfConponent_o *)buff,
      (System_Int32_array **)v23,
      v18,
      v19,
      v20,
      (System_Int32_array **)v14,
      v21,
      v22);
    LOBYTE(v16) = 1;
  }
  return v16;
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
    sub_B0D97C(this);
  return BattleBuffData__checkIndiviuality_30819704(
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


bool __fastcall BattleBuffData__checkIndiviuality_30819704(
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
  if ( (byte_4217E56 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, actInfo);
    byte_4217E56 = 1;
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
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
    sub_B0D97C(this);
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
  if ( (byte_4217E5A & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_4217E5A = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v6, (const MethodInfo *)buff);
  if ( !this )
LABEL_9:
    sub_B0D97C(this);
  if ( !DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          buff->fields.buffId,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__) )
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

  if ( (byte_4217E58 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B0D8A4(&BuffList_TypeInfo, actInfo);
    byte_4217E58 = 1;
  }
  *plusMinus = 0;
  if ( !actInfo )
    sub_B0D97C(this);
  plusTypes = actInfo->fields.plusTypes;
  if ( plusTypes && (v9 = *(_QWORD *)&plusTypes->max_length, (int)v9 >= 1) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
LABEL_25:
        v17 = sub_B0D9A8(this);
        sub_B0D948(v17, 0LL);
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

  if ( (byte_4217DFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, method);
    byte_4217DFF = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)activeList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
}


void __fastcall BattleBuffData__clearAuraBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x0

  if ( (byte_4217E00 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, method);
    byte_4217E00 = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  if ( !auraBuffList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)auraBuffList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v20; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v22; // x19
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
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
  BattleBuffData_BuffData_o *v36; // x28
  const MethodInfo *v37; // x3
  bool v38; // w20
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  const MethodInfo *v44; // [xsp+0h] [xbp-80h]
  bool isRec; // [xsp+1Ch] [xbp-64h]
  int v46; // [xsp+20h] [xbp-60h]
  int32_t plusMinus[2]; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4217E49 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, actInfo);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v17);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v18);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v19);
    byte_4217E49 = 1;
  }
  plusMinus[1] = 0;
  *value = 0;
  v20 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, (const MethodInfo *)selfIndv);
  if ( !v20 )
    sub_B0D97C(0LL);
  klass = v20->klass;
  v22 = v20;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(v20, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v22,
          *(_QWORD *)(p_method + 8));
  if ( !v26 )
    sub_B0D97C(0LL);
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
      v30 = sub_AA67A0(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v34 = sub_AA67A0(v26, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v35 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    v36 = v35;
    if ( !v35 )
      sub_B0D97C(0LL);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v35, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v36,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v36, 0LL) || v36->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v36, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v36, 0LL))
      && BattleBuffData__checkIndiviuality_30819704(
           this,
           actInfo,
           v36,
           selfIndv,
           opIndv,
           selfIndvAll,
           opIndvAll,
           &plusMinus[1],
           v44)
      && BattleBuffData__checkBuffSuccessful(this, v36, isRec, v37) )
    {
      *value = v36->fields.param;
      v46 = 140;
      v38 = 1;
      goto LABEL_36;
    }
  }
  v38 = 0;
  v46 = 138;
LABEL_36:
  v39 = *(_QWORD *)v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v40 = 0LL;
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_40;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_40:
    v42 = sub_AA67A0(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v26, *(_QWORD *)(v42 + 8));
  if ( v46 == 138 )
    return 0;
  return v38;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__geCheckBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  BattleBuffData_BuffData_o *v13; // x22
  __int64 v15; // x0

  if ( (byte_4217E0C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, bufflist);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    byte_4217E0C = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 bufflist,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !bufflist )
    goto LABEL_14;
  v11 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B0D9A8(v9);
        sub_B0D948(v15, 0LL);
      }
      v13 = bufflist->m_Items[v12];
      v9 = BattleBuffData__checkBuffSuccessful(this, v13, 1, v10);
      if ( v9 )
      {
        if ( !v8 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      LODWORD(v11) = bufflist->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)v11 );
  }
  if ( !v8 )
LABEL_14:
    sub_B0D97C(v9);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__getActBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        int32_t *value,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v11; // [xsp+0h] [xbp-40h]

  if ( (byte_4217E47 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_4217E47 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B0D97C(ActInfo);
  return BattleBuffData__confirmationBuff(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           1,
           value,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           v11);
}


float __fastcall BattleBuffData__getActMag(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x7

  return BattleBuffData__getActMag_30819404(
           this,
           act,
           selfIndiv,
           this->fields.wkzero,
           &this->fields.wkStr,
           checkIndividualities,
           0LL,
           v5);
}


float __fastcall BattleBuffData__getActMag_30819388(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  return BattleBuffData__getActMag_30819404(
           this,
           act,
           selfIndiv,
           opIndiv,
           &this->fields.wkStr,
           checkIndividualities,
           buffIf,
           v7);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleBuffData__getActMag_30819404(
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

  if ( (byte_4217E42 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_4217E42 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return (float)BattleBuffData__getActValue_30818252(
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


float __fastcall BattleBuffData__getActMag_30819608(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7

  if ( !checkIndividualities )
    sub_B0D97C(this);
  return (float)BattleBuffData__getActValue_30818252(
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


float __fastcall BattleBuffData__getActMag_30819668(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7

  if ( !checkIndividualities )
    sub_B0D97C(this);
  return BattleBuffData__getActMag_30819404(
           this,
           act,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           &this->fields.wkStr,
           checkIndividualities,
           checkIndividualities->fields._buffIf_k__BackingField,
           v4);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getActValue(
        BattleBuffData_o *this,
        int32_t act,
        bool *actflg,
        System_String_o **missText,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleLogicBuff_BaseProcess_o *buffProc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  BuffList_ActInfo_o *ActInfo; // x0
  BuffList_ActInfo_o *v15; // x19
  int32_t v16; // w20
  int32_t v17; // w21
  int32_t v18; // w20
  const MethodInfo *v20; // [xsp+18h] [xbp-48h]
  int32_t upperParam[2]; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4217E3C & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B0D8A4(&System_Math_TypeInfo, v13);
    byte_4217E3C = 1;
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
    sub_B0D97C(ActInfo);
  }
  v16 = (int)ActInfo;
  if ( BuffList_ActInfo__isLowerLimit(v15, 0LL) )
  {
    v17 = upperParam[0];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = System_Math__Max_44559528(v17, v16, 0LL);
  }
  v18 = v16 - v15->fields.baseValue;
  if ( BuffList_ActInfo__isUpperLimit(v15, 0LL) && upperParam[1] < v18 )
    return upperParam[1];
  return v18;
}


int32_t __fastcall BattleBuffData__getActValue_30818056(
        BattleBuffData_o *this,
        int32_t act,
        bool *actflg,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return BattleBuffData__getActValue(this, act, actflg, &this->fields.wkStr, checkIndividualities, 0LL, v5);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getActValue_30818072(
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

  if ( (byte_4217E3D & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_4217E3D = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return BattleBuffData__getActValue_30818252(
           this,
           ActInfo,
           selfIndiv,
           opIndiv,
           &this->fields.wkStr,
           checkIndividualities,
           selfIf,
           v14);
}


int32_t __fastcall BattleBuffData__getActValue_30818252(
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
  int32_t v16; // w20
  int32_t v17; // w21
  int32_t v18; // w20
  const MethodInfo *v20; // [xsp+18h] [xbp-58h]
  int32_t upperParam[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4217E3F & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, actInfo);
    byte_4217E3F = 1;
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
                       v20);
  if ( !actInfo )
    sub_B0D97C(CalculationParam);
  v16 = CalculationParam;
  if ( BuffList_ActInfo__isLowerLimit(actInfo, 0LL) )
  {
    v17 = upperParam[0];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = System_Math__Max_44559528(v17, v16, 0LL);
  }
  v18 = v16 - actInfo->fields.baseValue;
  if ( BuffList_ActInfo__isUpperLimit(actInfo, 0LL) && upperParam[1] < v18 )
    return upperParam[1];
  return v18;
}


int32_t __fastcall BattleBuffData__getActValue_30818544(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return BattleBuffData__getActValue_30818072(this, act, selfIndiv, this->fields.wkzero, checkIndividualities, 0LL, v5);
}


int32_t __fastcall BattleBuffData__getActValue_30818560(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  if ( !checkIndividualities )
    sub_B0D97C(this);
  return BattleBuffData__getActValue_30818072(
           this,
           act,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           checkIndividualities,
           0LL,
           v4);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getActValue_30818596(
        BattleBuffData_o *this,
        int32_t act,
        System_String_o **text,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v10; // x7

  if ( (byte_4217E3E & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_4217E3E = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B0D97C(ActInfo);
  return BattleBuffData__getActValue_30818252(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           text,
           checkIndividualities,
           checkIndividualities->fields._buffIf_k__BackingField,
           v10);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveArrayNoActAfterUsed(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0
  _BOOL8 v13; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4217DF0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10);
    byte_4217DF0 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)activeList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v13 )
      break;
    current = v17.fields.current;
    if ( !v17.fields.current )
      sub_B0D97C(v13);
    v15 = BattleBuffData_BuffData__checkAct((BattleBuffData_BuffData_o *)v17.fields.current, 1, 0LL);
    if ( !v15 && LOBYTE(current[2].klass) )
    {
      if ( !v11 )
        sub_B0D97C(v15);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v11 )
LABEL_15:
    sub_B0D97C(activeList);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


int32_t __fastcall BattleBuffData__getActiveBuffNum(
        BattleBuffData_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *ActiveList; // x0
  unsigned __int64 max_length; // x9
  int32_t v6; // w8
  unsigned __int64 v7; // x10
  unsigned __int64 v8; // x13
  BattleBuffData_BuffData_o *v9; // x15
  unsigned __int64 v10; // x14
  int32_t v11; // w17
  __int64 v13; // x0

  ActiveList = BattleBuffData__getActiveList(this, 1, method);
  if ( !ActiveList )
LABEL_18:
    sub_B0D97C(ActiveList);
  max_length = ActiveList->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v6 = 0;
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= max_length )
        goto LABEL_17;
      if ( !ids )
        goto LABEL_18;
      v8 = ids->max_length;
      if ( (__int64)(v8 << 32) >= 1 )
        break;
LABEL_13:
      if ( (__int64)++v7 >= (int)max_length )
        return v6;
    }
    v9 = ActiveList->m_Items[v7];
    v10 = 0LL;
    while ( v10 < v8 )
    {
      if ( !v9 )
        goto LABEL_18;
      v11 = ids->m_Items[++v10];
      if ( v11 == v9->fields.buffId )
        ++v6;
      if ( (__int64)v10 >= (int)v8 )
        goto LABEL_13;
    }
LABEL_17:
    v13 = sub_B0D9A8(ActiveList);
    sub_B0D948(v13, 0LL);
  }
  return 0;
}


int32_t __fastcall BattleBuffData__getActiveIndividualitiesNum(
        BattleBuffData_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *ActiveList; // x0
  int max_length; // w8
  BattleBuffData_BuffData_array *v6; // x20
  int v7; // w22
  int32_t v8; // w21
  System_Int32_array *Individualty; // x0
  __int64 v11; // x0

  ActiveList = BattleBuffData__getActiveList(this, 1, method);
  if ( !ActiveList )
    goto LABEL_11;
  max_length = ActiveList->max_length;
  v6 = ActiveList;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
      {
        v11 = sub_B0D9A8(ActiveList);
        sub_B0D948(v11, 0LL);
      }
      ActiveList = (BattleBuffData_BuffData_array *)v6->m_Items[v7];
      if ( !ActiveList )
        break;
      Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)ActiveList, 0, 0, 0, 0LL);
      ActiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities(
                                                      Individualty,
                                                      individualities,
                                                      0LL);
      max_length = v6->max_length;
      ++v7;
      v8 += (unsigned __int8)ActiveList & 1;
      if ( v7 >= max_length )
        return v8;
    }
LABEL_11:
    sub_B0D97C(ActiveList);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleBuffData___c__DisplayClass31_0_o *v10; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x20

  if ( (byte_4217DEE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, isCheckInterval);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v6);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass31_0__getActiveList_b__0__, v8);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass31_0_TypeInfo, v9);
    byte_4217DEE = 1;
  }
  v10 = (BattleBuffData___c__DisplayClass31_0_o *)sub_B0D974(
                                                    BattleBuffData___c__DisplayClass31_0_TypeInfo,
                                                    isCheckInterval,
                                                    method);
  BattleBuffData___c__DisplayClass31_0___ctor(v10, 0LL);
  if ( !v10
    || (v10->fields.isCheckInterval = isCheckInterval,
        activeList = this->fields.activeList,
        v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v12,
                                                                         v13),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v15,
          (Il2CppObject *)v10,
          Method_BattleBuffData___c__DisplayClass31_0__getActiveList_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !activeList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)activeList,
                (System_Predicate_T__o *)v15,
                (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
    sub_B0D97C(All);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveListDebug(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x0

  if ( (byte_4217DF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, method);
    byte_4217DF2 = 1;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    sub_B0D97C(0LL);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v13; // x1
  BuffList_ActInfo_o *ActInfo; // x23
  __int64 CalculationParam; // x0
  int32_t v16; // w20
  const MethodInfo *v18; // [xsp+18h] [xbp-58h]
  System_String_o *missText; // [xsp+28h] [xbp-48h] BYREF
  int32_t val1; // [xsp+38h] [xbp-38h] BYREF
  int32_t upperParam; // [xsp+3Ch] [xbp-34h] BYREF

  v11 = value;
  if ( (byte_4217E40 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&value);
    sub_B0D8A4(&System_Math_TypeInfo, v13);
    byte_4217E40 = 1;
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
    sub_B0D97C(CalculationParam);
  if ( BuffList_ActInfo__isLowerLimit(ActInfo, 0LL) )
  {
    v16 = val1;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v11 = System_Math__Max_44559528(v16, v11, 0LL);
  }
  if ( BuffList_ActInfo__isUpperLimit(ActInfo, 0LL) && upperParam < v11 )
    return upperParam;
  return v11;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__getAuraBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x19
  BattleBuffData___c_c *v9; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__36_0; // x20
  Il2CppObject *v12; // x21
  struct BattleBuffData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4217DF3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v4);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_BattleBuffData___c__getAuraBuffList_b__36_0__, v6);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v7);
    byte_4217DF3 = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  v9 = BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v9 = BattleBuffData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__36_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          method,
                                                                          v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__36_0,
      v12,
      Method_BattleBuffData___c__getAuraBuffList_b__36_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v13 = BattleBuffData___c_TypeInfo->static_fields;
    v13->__9__36_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__36_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !auraBuffList )
    sub_B0D97C(v9);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                         (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)auraBuffList,
                                                                         (System_Predicate_T__o *)_9__36_0,
                                                                         (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__getBuffActiveIDList(
        BattleBuffData_o *this,
        bool IsIncludeUnsubState,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x19
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  void *ActiveList; // x0
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__104_0; // x21
  Il2CppObject *v18; // x22
  struct BattleBuffData___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  void *v26; // x20
  int v27; // w8
  unsigned int v28; // w21
  __int64 v29; // x8
  __int64 v31; // x0

  if ( (byte_4217E1F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, IsIncludeUnsubState);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleBuffData___c__getBuffActiveIDList_b__104_0__, v10);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v11);
    byte_4217E1F = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    IsIncludeUnsubState,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( IsIncludeUnsubState )
  {
    ActiveList = BattleBuffData__getActiveList(this, 1, v14);
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
    _9__104_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__104_0;
    if ( !_9__104_0 )
    {
      if ( (*((_BYTE *)ActiveList + 307) & 4) != 0 && !*((_DWORD *)ActiveList + 56) )
      {
        j_il2cpp_runtime_class_init_0(ActiveList);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__104_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                             System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                             v13,
                                                                             v14);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__104_0,
        v18,
        Method_BattleBuffData___c__getBuffActiveIDList_b__104_0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v19 = BattleBuffData___c_TypeInfo->static_fields;
      v19->__9__104_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__104_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v19->__9__104_0,
        (System_Int32_array **)_9__104_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    if ( !this )
      goto LABEL_24;
    ActiveList = BattleBuffData__GetAvaliableActiveBuffArray(
                   this,
                   (System_Predicate_BattleBuffData_BuffData__o *)_9__104_0,
                   v14);
  }
  v26 = ActiveList;
  if ( !ActiveList )
    goto LABEL_24;
  v27 = *((_DWORD *)ActiveList + 6);
  if ( v27 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= v27 )
      {
        v31 = sub_B0D9A8(ActiveList);
        sub_B0D948(v31, 0LL);
      }
      v29 = *((_QWORD *)v26 + (int)v28 + 4);
      if ( !v29 || !v12 )
        break;
      System_Collections_Generic_List_int___Add(
        v12,
        *(_DWORD *)(v29 + 16),
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      v27 = *((_DWORD *)v26 + 6);
      if ( (int)++v28 >= v27 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B0D97C(ActiveList);
  }
LABEL_22:
  if ( !v12 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__getBuffIDList(
        BattleBuffData_o *this,
        bool IsIncludeUnsubState,
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
  System_Collections_Generic_List_int__o *v17; // x21
  const MethodInfo *v18; // x2
  void *PassiveList; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  void *v22; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  struct BattleBuffData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__103_0; // x23
  Il2CppObject *v28; // x24
  struct BattleBuffData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int v36; // w8
  unsigned int v37; // w22
  __int64 v38; // x8
  __int64 v40; // x0

  if ( (byte_4217E1E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, IsIncludeUnsubState);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___67901632, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v13);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v14);
    sub_B0D8A4(&Method_BattleBuffData___c__getBuffIDList_b__103_0__, v15);
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v16);
    byte_4217E1E = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    IsIncludeUnsubState,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v18);
  v22 = PassiveList;
  if ( !IsIncludeUnsubState )
  {
    v23 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                            v20,
                                                                            v21);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v23,
      (System_Collections_Generic_IEnumerable_T__o *)v22,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___67901632);
    PassiveList = BattleBuffData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      PassiveList = BattleBuffData___c_TypeInfo;
    }
    static_fields = (struct BattleBuffData___c_StaticFields *)*((_QWORD *)PassiveList + 23);
    _9__103_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__103_0;
    if ( !_9__103_0 )
    {
      if ( (*((_BYTE *)PassiveList + 307) & 4) != 0 && !*((_DWORD *)PassiveList + 56) )
      {
        j_il2cpp_runtime_class_init_0(PassiveList);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__103_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                             System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                             v24,
                                                                             v25);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__103_0,
        v28,
        Method_BattleBuffData___c__getBuffIDList_b__103_0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v29 = BattleBuffData___c_TypeInfo->static_fields;
      v29->__9__103_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__103_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v29->__9__103_0,
        (System_Int32_array **)_9__103_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    if ( !v23 )
      goto LABEL_24;
    PassiveList = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                    (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v23,
                    (System_Predicate_T__o *)_9__103_0,
                    (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    if ( !PassiveList )
      goto LABEL_24;
    PassiveList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)PassiveList,
                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    v22 = PassiveList;
  }
  if ( !v22 )
    goto LABEL_24;
  v36 = *((_DWORD *)v22 + 6);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= v36 )
      {
        v40 = sub_B0D9A8(PassiveList);
        sub_B0D948(v40, 0LL);
      }
      v38 = *((_QWORD *)v22 + (int)v37 + 4);
      if ( !v38 || !v17 )
        break;
      System_Collections_Generic_List_int___Add(
        v17,
        *(_DWORD *)(v38 + 16),
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      v36 = *((_DWORD *)v22 + 6);
      if ( (int)++v37 >= v36 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B0D97C(PassiveList);
  }
LABEL_22:
  PassiveList = BattleBuffData__getBuffActiveIDList(this, IsIncludeUnsubState, v21);
  if ( !v17 )
    goto LABEL_24;
  System_Collections_Generic_List_int___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x22
  const MethodInfo *v15; // x2
  BattleBuffData_BuffData_o *PassiveList; // x0
  int count; // w8
  BattleBuffData_BuffData_o *v18; // x24
  unsigned int v19; // w25
  int v20; // w8
  BattleBuffData_BuffData_o *v21; // x23
  unsigned int v22; // w24
  __int64 v24; // x0

  if ( (byte_4217E1C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, isActiveOnly);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4217E1C = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    isActiveOnly,
                                                    isIncludeIgnoreIndiv);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (isAiCheck || !isIgnoreIndivUnreleaseable) && !isActiveOnly )
  {
    PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getPassiveList(this, 1, v15);
    if ( !PassiveList )
      goto LABEL_21;
    count = PassiveList->fields.count;
    v18 = PassiveList;
    if ( count >= 1 )
    {
      v19 = 0;
      while ( v19 < count )
      {
        PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v18->fields.isUse + (int)v19);
        if ( !PassiveList )
          goto LABEL_21;
        PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                     PassiveList,
                                                     isIncludeIgnoreIndiv,
                                                     isIgnoreIndivUnreleaseable,
                                                     isAiCheck,
                                                     0LL);
        if ( !v14 )
          goto LABEL_21;
        System_Collections_Generic_List_int___AddRange(
          v14,
          (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
        count = v18->fields.count;
        if ( (int)++v19 >= count )
          goto LABEL_12;
      }
LABEL_22:
      v24 = sub_B0D9A8(PassiveList);
      sub_B0D948(v24, 0LL);
    }
  }
LABEL_12:
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, v15);
  if ( !PassiveList )
    goto LABEL_21;
  v20 = PassiveList->fields.count;
  v21 = PassiveList;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( v22 < v20 )
    {
      PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v21->fields.isUse + (int)v22);
      if ( !PassiveList )
        goto LABEL_21;
      PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                   PassiveList,
                                                   isIncludeIgnoreIndiv,
                                                   isIgnoreIndivUnreleaseable,
                                                   isAiCheck,
                                                   0LL);
      if ( !v14 )
        goto LABEL_21;
      System_Collections_Generic_List_int___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
        (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
      v20 = v21->fields.count;
      if ( (int)++v22 >= v20 )
        goto LABEL_19;
    }
    goto LABEL_22;
  }
LABEL_19:
  if ( !v14 )
LABEL_21:
    sub_B0D97C(PassiveList);
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  if ( !checkIndividualities )
    sub_B0D97C(this);
  return BattleBuffData__getBuffList_30786564(
           this,
           types,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checklist,
           method);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList_30786564(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *targetIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x23
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  signed int max_length; // w8
  signed int v22; // w28
  __int64 v23; // x8
  System_Collections_Generic_IEnumerable_T__o *v24; // x25
  unsigned __int64 v25; // x22
  int32_t v26; // w26
  int32_t klass_high; // w27
  System_Int32_array *monitor; // x1
  BattleBuffData_BuffData_o *v29; // x24
  BattleBuffData_BuffData_array *v30; // x19
  __int64 v32; // x0

  if ( (byte_4217E27 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, types);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    byte_4217E27 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  types,
                                                                                                  targetIndividualities);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checklist )
  {
    ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v18);
    if ( !v15 )
      goto LABEL_32;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      ActiveList,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v19);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      PassiveList,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    checklist = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v15,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
    if ( !checklist )
      goto LABEL_32;
  }
  max_length = checklist->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)max_length )
        goto LABEL_31;
      v29 = checklist->m_Items[v22];
      if ( !v29 )
        goto LABEL_32;
      v30 = checklist;
      if ( !v29->fields._isRemove )
      {
        ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__get_buffMst(this, v17);
        if ( !ActiveList )
          goto LABEL_32;
        ActiveList = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)ActiveList,
                                                                      v29->fields.buffId,
                                                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( ActiveList )
        {
          if ( !types )
            goto LABEL_32;
          v23 = *(_QWORD *)&types->max_length;
          if ( (int)v23 >= 1 )
            break;
        }
      }
LABEL_28:
      max_length = v30->max_length;
      ++v22;
      checklist = v30;
      if ( v22 >= max_length )
        goto LABEL_29;
    }
    v24 = ActiveList;
    v25 = 0LL;
    while ( v25 < (unsigned int)v23 )
    {
      v26 = types->m_Items[v25 + 1];
      klass_high = HIDWORD(v24[1].klass);
      if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BuffList__CheckType(v26, klass_high, 0LL);
      if ( ((unsigned __int8)ActiveList & 1) != 0 )
      {
        monitor = (System_Int32_array *)v24[3].monitor;
        if ( !monitor
          || !*(_QWORD *)&monitor->max_length
          || (ActiveList = (System_Collections_Generic_IEnumerable_T__o *)Individuality__CheckIndividualities(
                                                                            targetIndividualities,
                                                                            monitor,
                                                                            0LL),
              ((unsigned __int8)ActiveList & 1) != 0) )
        {
          if ( !v15 )
            goto LABEL_32;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        }
      }
      LODWORD(v23) = types->max_length;
      if ( (__int64)++v25 >= (int)v23 )
        goto LABEL_28;
    }
LABEL_31:
    v32 = sub_B0D9A8(ActiveList);
    sub_B0D948(v32, 0LL);
  }
LABEL_29:
  if ( !v15 )
LABEL_32:
    sub_B0D97C(ActiveList);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList_30806472(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        bool checkOnly,
        System_Func_BattleBuffData_BuffData__bool__o *funcCond,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  BuffList_ActInfo_o *ActInfo; // x25
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  const MethodInfo *v25; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v26; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v28; // x20
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x20
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  const MethodInfo *v41; // x5
  BattleBuffData_BuffData_o *v42; // x27
  _BOOL8 v43; // x0
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  bool isReca; // [xsp+8h] [xbp-68h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4217E51 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool__Invoke__, v12);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v20);
    byte_4217E51 = 1;
  }
  plusMinus = 0;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  plusMinus = 0;
  v26 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v25);
  if ( !v26 )
    goto LABEL_44;
  klass = v26->klass;
  v28 = v26;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AA67A0(v26, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_B0D97C(0LL);
  isReca = isRec;
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
          goto LABEL_19;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_19:
      v36 = sub_AA67A0(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_26;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_26:
      v40 = sub_AA67A0(v32, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v42 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    if ( !funcCond
      || System_Func_BattleBuffData_BuffData__bool___Invoke(
           funcCond,
           v42,
           (const MethodInfo_26189CC *)Method_System_Func_BattleBuffData_BuffData__bool__Invoke__) )
    {
      v43 = BattleBuffData__checkIndiviuality(this, ActInfo, v42, checkIndividualities, &plusMinus, v41);
      if ( v43 && (checkOnly || (v43 = BattleBuffData__checkBuffSuccessful(this, v42, isReca, v44))) )
      {
        if ( !v24 )
          sub_B0D97C(v43);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
    }
  }
  v45 = *(_QWORD *)v32;
  if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
  {
    v46 = 0LL;
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
        goto LABEL_39;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_39:
    v48 = sub_AA67A0(v32, System_IDisposable_TypeInfo, 0LL);
  }
  v26 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(
                                                                               v32,
                                                                               *(_QWORD *)(v48 + 8));
  if ( !v24 )
LABEL_44:
    sub_B0D97C(v26);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__getBuffParamList(
        BattleBuffData_o *this,
        int32_t act,
        BattleServantData_o *servantData,
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
  BuffList_ActInfo_o *ActInfo; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x23
  const MethodInfo *v26; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v28; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x24
  System_Int32_array *v33; // x24
  Il2CppObject *current; // x23
  _BOOL8 v35; // x0
  const MethodInfo *v37; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+10h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4217E50 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v18);
    byte_4217E50 = 1;
  }
  plusMinus = 0;
  memset(&v38, 0, sizeof(v38));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v22 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  plusMinus = 0;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v26);
  if ( !v25 )
    goto LABEL_21;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v28);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
    PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( servantData )
  {
    v32 = sub_B0D974(BattleBuffData_CheckIndividualitiesData_TypeInfo, v30, v31);
    BattleBuffData_CheckIndividualitiesData___ctor(
      (BattleBuffData_CheckIndividualitiesData_o *)v32,
      servantData,
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( !v32 )
      goto LABEL_21;
    servantData = *(BattleServantData_o **)(v32 + 48);
    v33 = *(System_Int32_array **)(v32 + 16);
  }
  else
  {
    v33 = 0LL;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v25,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v38.fields.current;
    v35 = BattleBuffData__checkIndiviuality_30819704(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v38.fields.current,
            (System_Int32_array *)servantData,
            0LL,
            v33,
            0LL,
            &plusMinus,
            v37);
    if ( v35 )
    {
      if ( !current )
        sub_B0D97C(v35);
      if ( !v22 )
        sub_B0D97C(v35);
      System_Collections_Generic_List_int___Add(
        v22,
        HIDWORD(current[1].monitor),
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v22 )
LABEL_21:
    sub_B0D97C(ActiveList);
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B0D97C(this);
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
  System_Int32_array *v14; // x27
  BuffList_ActInfo_o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  int32_t baseParam; // w8
  const MethodInfo *v24; // x2
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v27; // x19
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  __int64 v31; // x20
  System_Collections_IEnumerator_c **v32; // x21
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **v33; // x19
  __int64 v34; // x8
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c *v35; // x1
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  BattleBuffData_BuffData_o *v39; // x0
  BattleBuffData_BuffData_o *v40; // x24
  _BOOL8 IsCommandAssistBuff; // x0
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **v42; // x22
  System_Collections_IEnumerator_c **v43; // x26
  System_Int32_array *selfIndividuality_k__BackingField; // x19
  System_Int32_array *opponentIndividuality_k__BackingField; // x21
  System_Int32_array *v46; // x4
  System_Int32_array *v47; // x3
  bool v48; // w0
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x1
  BuffMaster_o *buffMst; // x0
  WarEntity_o *Entity; // x0
  BuffEntity_o *v53; // x10
  BattleLogicBuff_BaseProcess_o *v54; // x21
  int32_t v55; // w23
  int emptyMessage_high; // w19
  int32_t v57; // w25
  int32_t v58; // w0
  int32_t v59; // w19
  int32_t v60; // w8
  int32_t ExtendLowerLimit; // w23
  _BOOL4 isValidHpRange; // w0
  BuffInterface_o *v63; // x13
  BuffInterface_c *v64; // x8
  int32_t param; // w28
  unsigned int ratioHpHigh; // w23
  unsigned int ratioHpLow; // w27
  unsigned int ratioRangeHigh; // w19
  unsigned int ratioRangeLow; // w25
  unsigned __int64 v70; // x10
  int32_t *v71; // x11
  __int64 p_method; // x0
  int v73; // w19
  BuffInterface_c *v74; // x8
  int32_t v75; // w23
  unsigned __int64 v76; // x10
  int32_t *v77; // x11
  __int64 v78; // x0
  int v79; // w19
  BuffInterface_o *v80; // x13
  BuffInterface_c *v81; // x8
  unsigned __int64 v82; // x10
  int32_t *v83; // x11
  __int64 v84; // x0
  int32_t v85; // w8
  int v86; // w0
  bool isParamAddIndividualiry; // w0
  const MethodInfo *v88; // x4
  BuffEntity_o *v89; // x8
  int32_t v90; // w19
  const MethodInfo *v91; // x5
  const MethodInfo *v92; // x6
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  int32_t plusAction; // w1
  int32_t v101; // w19
  int32_t ActValue_30818072; // w0
  int v103; // w8
  int32_t v104; // w4
  int v105; // w19
  int v106; // w21
  float v107; // s0
  double v108; // d1
  bool v109; // zf
  double v110; // d0
  int32_t v111; // w8
  __int64 v112; // x8
  System_Collections_IEnumerator_c *v113; // x1
  unsigned __int64 v114; // x10
  int *v115; // x11
  __int64 v116; // x0
  __int64 v117; // x8
  unsigned __int64 v118; // x10
  int *v119; // x11
  __int64 v120; // x0
  const MethodInfo *v122; // [xsp+0h] [xbp-110h]
  System_Int32_array *v123; // [xsp+10h] [xbp-100h]
  int32_t *v124; // [xsp+18h] [xbp-F8h]
  BattleLogicBuff_BaseProcess_o *v125; // [xsp+20h] [xbp-F0h]
  BattleServantConfConponent_o *v126; // [xsp+28h] [xbp-E8h]
  BuffList_ActInfo_o *v127; // [xsp+30h] [xbp-E0h]
  int32_t Value; // [xsp+3Ch] [xbp-D4h]
  int v132; // [xsp+5Ch] [xbp-B4h]
  BuffEntity_o *v133; // [xsp+68h] [xbp-A8h]
  BattleBuffData_o *v134; // [xsp+78h] [xbp-98h]
  int32_t maxBuffRate[5]; // [xsp+8Ch] [xbp-84h] BYREF
  int32_t plusMinus[2]; // [xsp+A8h] [xbp-68h] BYREF

  v13 = upperParam;
  v14 = opIndv;
  v15 = actInfo;
  v134 = this;
  if ( (byte_4217E43 & 1) == 0 )
  {
    sub_B0D8A4(&BuffInterface_TypeInfo, actInfo);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v16);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v17);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v18);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v19);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v20);
    sub_B0D8A4(&System_Math_TypeInfo, v21);
    this = (BattleBuffData_o *)sub_B0D8A4(&StringLiteral_11163/*"REVERT_BUFF_LOWER_LIMIT"*/, v22);
    byte_4217E43 = 1;
  }
  *(_QWORD *)plusMinus = 0LL;
  *(_QWORD *)&maxBuffRate[1] = 0LL;
  maxBuffRate[0] = 0;
  if ( !v15 )
    goto LABEL_117;
  baseParam = v15->fields.baseParam;
  plusMinus[0] = 0;
  plusMinus[1] = baseParam;
  *actflg = 0;
  *v13 = baseParam;
  *lowerParam = 0;
  *missText = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)missText,
    0LL,
    (System_String_array **)selfIndv,
    (System_String_array **)selfIf,
    (System_Boolean_array **)opIndv,
    (System_Int32_array **)upperParam,
    (System_Int32_array *)actflg,
    (System_Int32_array *)missText);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11163/*"REVERT_BUFF_LOWER_LIMIT"*/, 0LL);
  this = (BattleBuffData_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(v134, 0, v24);
  if ( !this )
LABEL_117:
    sub_B0D97C(this);
  klass = this->klass;
  v27 = this;
  v126 = (BattleServantConfConponent_o *)missText;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v30 = sub_AA67A0(this, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  if ( !v31 )
    sub_B0D97C(0LL);
  v32 = &System_Collections_IEnumerator_TypeInfo;
  v33 = &System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo;
  v127 = v15;
  while ( 1 )
  {
    v112 = *(_QWORD *)v31;
    v113 = *v32;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v114 = 0LL;
      v115 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v115 - 1) != v113 )
      {
        ++v114;
        v115 += 4;
        if ( v114 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_103;
      }
      v116 = v112 + 16LL * *v115 + 312;
    }
    else
    {
LABEL_103:
      v116 = sub_AA67A0(v31, v113, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v116)(v31, *(_QWORD *)(v116 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v31;
    v35 = *v33;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v37 - 1) != v35 )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_17;
      }
      v38 = v34 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_17:
      v38 = sub_AA67A0(v31, v35, 0LL);
    }
    v39 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v31, *(_QWORD *)(v38 + 8));
    v40 = v39;
    if ( !v39 )
      sub_B0D97C(0LL);
    if ( !v39->fields._isRemove
      && (!BattleBuffData_BuffData__isCommandCodeBuff(v39, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v40,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v40, 0LL) || v40->fields.isActiveCC) )
    {
      IsCommandAssistBuff = BattleBuffData_BuffData__IsCommandAssistBuff(v40, 0LL);
      if ( !IsCommandAssistBuff || (IsCommandAssistBuff = BattleBuffData_BuffData__IsActiveCommandAssist(v40, 0LL)) )
      {
        if ( !checkIndividualities )
          sub_B0D97C(IsCommandAssistBuff);
        v42 = v33;
        v43 = v32;
        selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividuality_k__BackingField;
        opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividuality_k__BackingField;
        if ( BattleBuffData_BuffData__checkState(v40, 0x100000, 0LL) )
        {
          selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividualityCanRelease_k__BackingField;
          opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividualityCanRemove_k__BackingField;
          v46 = opponentIndividuality_k__BackingField;
          v47 = selfIndividuality_k__BackingField;
        }
        else
        {
          v47 = selfIndv;
          v46 = v14;
        }
        v48 = BattleBuffData__checkIndiviuality_30819704(
                v134,
                v15,
                v40,
                v47,
                v46,
                selfIndividuality_k__BackingField,
                opponentIndividuality_k__BackingField,
                plusMinus,
                v122);
        v32 = v43;
        v33 = v42;
        if ( v48 && BattleBuffData__checkBuffSuccessful(v134, v40, v15->fields.isRec, v49) )
        {
          *actflg = 1;
          buffMst = BattleBuffData__get_buffMst(v134, v50);
          if ( !buffMst )
            sub_B0D97C(0LL);
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                     v40->fields.buffId,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          v53 = (BuffEntity_o *)Entity;
          v133 = (BuffEntity_o *)Entity;
          v132 = plusMinus[0];
          if ( Value <= 0 && (plusMinus[0] & 0x80000000) != 0 )
          {
            v54 = buffProc;
            if ( !Entity )
              sub_B0D97C(0LL);
            v55 = v15->fields.baseParam;
            emptyMessage_high = HIDWORD(Entity->fields.emptyMessage);
            v57 = *lowerParam;
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            v58 = System_Math__Min_44514512(v57, v55 - emptyMessage_high, 0LL);
            v53 = v133;
            v59 = v58;
            buffProc = v54;
            v32 = v43;
            *lowerParam = v58;
          }
          else
          {
            if ( !Entity )
              sub_B0D97C(0LL);
            v60 = *v13;
            if ( *v13 < SHIDWORD(Entity->fields.emptyMessage) )
              v60 = HIDWORD(Entity->fields.emptyMessage);
            *v13 = v60;
            v59 = *lowerParam;
          }
          ExtendLowerLimit = BuffEntity__GetExtendLowerLimit(v53, 0LL);
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          *lowerParam = System_Math__Min_44514512(v59, ExtendLowerLimit, 0LL);
          maxBuffRate[2] = v40->fields.param;
          isValidHpRange = BattleBuffData_BuffData__isValidHpRange(v40, 0LL);
          v63 = selfIf;
          if ( selfIf && isValidHpRange )
          {
            v123 = v14;
            v124 = v13;
            v64 = selfIf->klass;
            v125 = buffProc;
            param = v40->fields.param;
            ratioHpHigh = v40->fields.ratioHpHigh;
            ratioHpLow = v40->fields.ratioHpLow;
            ratioRangeHigh = v40->fields.ratioRangeHigh;
            ratioRangeLow = v40->fields.ratioRangeLow;
            if ( *(_WORD *)&selfIf->klass->_2.bitflags1 )
            {
              v70 = 0LL;
              v71 = &v64->_1.interfaceOffsets->offset;
              while ( *((BuffInterface_c **)v71 - 1) != BuffInterface_TypeInfo )
              {
                ++v70;
                v71 += 4;
                if ( v70 >= *(unsigned __int16 *)&selfIf->klass->_2.bitflags1 )
                  goto LABEL_54;
              }
              p_method = (__int64)&v64->vtable[*v71 + 2].method;
            }
            else
            {
LABEL_54:
              p_method = sub_AA67A0(selfIf, BuffInterface_TypeInfo, 2LL);
              v63 = selfIf;
            }
            v85 = (*(__int64 (__fastcall **)(BuffInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))p_method)(
                    v63,
                    ratioHpLow,
                    ratioHpHigh,
                    ratioRangeLow,
                    ratioRangeHigh,
                    *(_QWORD *)(p_method + 8))
                + param;
            v13 = v124;
            buffProc = v125;
            v14 = v123;
            goto LABEL_76;
          }
          if ( selfIf )
          {
            v73 = v40->fields.ratioHpLow;
            if ( v73 >= 1 )
            {
              v74 = selfIf->klass;
              v75 = v40->fields.param;
              if ( *(_WORD *)&selfIf->klass->_2.bitflags1 )
              {
                v76 = 0LL;
                v77 = &v74->_1.interfaceOffsets->offset;
                while ( *((BuffInterface_c **)v77 - 1) != BuffInterface_TypeInfo )
                {
                  ++v76;
                  v77 += 4;
                  if ( v76 >= *(unsigned __int16 *)&selfIf->klass->_2.bitflags1 )
                    goto LABEL_61;
                }
                v78 = (__int64)&v74->vtable[*v77 + 1].method;
              }
              else
              {
LABEL_61:
                v78 = sub_AA67A0(selfIf, BuffInterface_TypeInfo, 1LL);
                v63 = selfIf;
              }
              v86 = (*(__int64 (__fastcall **)(BuffInterface_o *, __int64, _QWORD, _QWORD))v78)(
                      v63,
                      1LL,
                      (unsigned int)v73,
                      *(_QWORD *)(v78 + 8));
LABEL_75:
              v85 = v86 + v75;
LABEL_76:
              maxBuffRate[2] = v85;
              goto LABEL_77;
            }
          }
          if ( selfIf )
          {
            v79 = v40->fields.ratioHpHigh;
            if ( v79 >= 1 )
            {
              v80 = selfIf;
              v75 = v40->fields.param;
              v81 = selfIf->klass;
              if ( *(_WORD *)&selfIf->klass->_2.bitflags1 )
              {
                v82 = 0LL;
                v83 = &v81->_1.interfaceOffsets->offset;
                while ( *((BuffInterface_c **)v83 - 1) != BuffInterface_TypeInfo )
                {
                  ++v82;
                  v83 += 4;
                  if ( v82 >= *(unsigned __int16 *)&selfIf->klass->_2.bitflags1 )
                    goto LABEL_68;
                }
                v84 = (__int64)&v81->vtable[*v83 + 1].method;
              }
              else
              {
LABEL_68:
                v84 = sub_AA67A0(selfIf, BuffInterface_TypeInfo, 1LL);
                v80 = selfIf;
              }
              v86 = (*(__int64 (__fastcall **)(BuffInterface_o *, _QWORD, _QWORD, _QWORD))v84)(
                      v80,
                      0LL,
                      (unsigned int)v79,
                      *(_QWORD *)(v84 + 8));
              goto LABEL_75;
            }
          }
LABEL_77:
          isParamAddIndividualiry = BattleBuffData_BuffData__isParamAddIndividualiry(v40, 0LL);
          v15 = v127;
          v89 = v133;
          if ( isParamAddIndividualiry )
          {
            v90 = maxBuffRate[2];
            maxBuffRate[2] = BattleBuffData__GetTotalParamAddValue(
                               v134,
                               v40,
                               v127->fields.battleData,
                               checkIndividualities,
                               v88)
                           + v90;
            v89 = v133;
          }
          v33 = v42;
          if ( BuffEntity__checkMissText(v89, 0LL) )
          {
            v93 = (System_Int32_array **)BuffEntity__getMissText(v133, 0LL);
            v126->klass = (BattleServantConfConponent_c *)v93;
            sub_B0D840(v126, v93, v94, v95, v96, v97, v98, v99);
          }
          if ( v132 >= 1 )
          {
            plusAction = v127->fields.plusAction;
            if ( plusAction )
            {
              v101 = maxBuffRate[2];
              ActValue_30818072 = BattleBuffData__getActValue_30818072(
                                    v134,
                                    plusAction,
                                    v133->fields.vals,
                                    v134->fields.wkzero,
                                    checkIndividualities,
                                    0LL,
                                    v92);
              if ( ActValue_30818072 * v101 <= -1000 )
                v103 = 0;
              else
                v103 = ActValue_30818072 * v101 / 1000;
              v33 = v42;
              maxBuffRate[2] = v103;
            }
          }
          v104 = *v13;
          *(_QWORD *)maxBuffRate = (unsigned int)*v13;
          if ( BattleBuffData__CheckBuffRateTypeOrIndiv(v134, v40, &maxBuffRate[1], maxBuffRate, v104, v91) )
          {
            v106 = maxBuffRate[1];
            v105 = maxBuffRate[2];
            if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Math_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            }
            v107 = System_Math__Max_44559576(0.0, (float)((float)v106 / 1000.0) + 1.0, 0LL) * (float)v105;
            v108 = v107;
            v109 = v107 == INFINITY;
            v110 = -v107;
            if ( !v109 )
              v110 = v108;
            maxBuffRate[2] = (int)v110;
            v111 = *v13;
            v32 = v43;
            v33 = v42;
            if ( *v13 < maxBuffRate[0] )
              v111 = maxBuffRate[0];
            *v13 = v111;
          }
          if ( buffProc )
            ((void (__fastcall *)(BattleLogicBuff_BaseProcess_o *, BattleBuffData_BuffData_o *, _QWORD, _QWORD, int32_t *, Il2CppMethodPointer))buffProc->klass->vtable._4_PrevAddCalcBuffParam.method)(
              buffProc,
              v40,
              (unsigned int)plusMinus[1],
              (unsigned int)v132,
              &maxBuffRate[2],
              buffProc->klass->vtable._5_AfterAllAddCalcBuffParam.methodPtr);
          plusMinus[1] += maxBuffRate[2] * v132;
        }
      }
    }
  }
  v117 = *(_QWORD *)v31;
  if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
  {
    v118 = 0LL;
    v119 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v119 - 1) != System_IDisposable_TypeInfo )
    {
      ++v118;
      v119 += 4;
      if ( v118 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
        goto LABEL_110;
    }
    v120 = v117 + 16LL * *v119 + 312;
  }
  else
  {
LABEL_110:
    v120 = sub_AA67A0(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v120)(v31, *(_QWORD *)(v120 + 8));
  if ( buffProc )
    ((void (__fastcall *)(BattleLogicBuff_BaseProcess_o *, int32_t *, void *))buffProc->klass->vtable._5_AfterAllAddCalcBuffParam.method)(
      buffProc,
      &plusMinus[1],
      buffProc->klass[1]._1.image);
  return plusMinus[1];
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__getCurrentAllBaffList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  bool v8; // w20
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0

  if ( (byte_4217DEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, isCheckInterval);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v6);
    byte_4217DEF = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 isCheckInterval,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v8 = isCheckInterval;
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, v8, v9);
  if ( !v7 )
    sub_B0D97C(PassiveList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, v8, v11);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleBuffData__getMaxBuffCount(
        BattleBuffData_o *this,
        System_Int64_array *individualities,
        bool isActiveOnly,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *PassiveList; // x0
  int max_length; // w8
  BattleBuffData_BuffData_array *v8; // x22
  unsigned int v9; // w24
  int64_t count; // x20
  BattleBuffData_BuffData_o *v11; // x23
  System_Int32_array *Individualty; // x0
  int v13; // w8
  BattleBuffData_BuffData_array *v14; // x21
  unsigned int v15; // w23
  BattleBuffData_BuffData_o *v16; // x22
  System_Int32_array *v17; // x0
  __int64 v19; // x0

  if ( !isActiveOnly )
  {
    PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_24;
    max_length = PassiveList->max_length;
    v8 = PassiveList;
    if ( max_length >= 1 )
    {
      v9 = 0;
      count = 0LL;
      while ( v9 < max_length )
      {
        v11 = v8->m_Items[v9];
        if ( !v11 )
          goto LABEL_24;
        if ( count < v11->fields.count )
        {
          Individualty = BattleBuffData_BuffData__GetIndividualty(v11, 0, 0, 0, 0LL);
          PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities_26827228(
                                                           Individualty,
                                                           individualities,
                                                           0LL);
          if ( ((unsigned __int8)PassiveList & 1) != 0 )
            count = v11->fields.count;
        }
        max_length = v8->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_13;
      }
LABEL_23:
      v19 = sub_B0D9A8(PassiveList);
      sub_B0D948(v19, 0LL);
    }
  }
  count = 0LL;
LABEL_13:
  PassiveList = BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_24:
    sub_B0D97C(PassiveList);
  v13 = PassiveList->max_length;
  v14 = PassiveList;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( v15 < v13 )
    {
      v16 = v14->m_Items[v15];
      if ( !v16 )
        goto LABEL_24;
      if ( count < v16->fields.count )
      {
        v17 = BattleBuffData_BuffData__GetIndividualty(v16, 0, 0, 0, 0LL);
        PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities_26827228(
                                                         v17,
                                                         individualities,
                                                         0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          count = v16->fields.count;
      }
      v13 = v14->max_length;
      if ( (int)++v15 >= v13 )
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  BuffList_ActInfo_o *ActInfo; // x0
  BuffList_ActInfo_o *v21; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x25
  const MethodInfo *v25; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  Il2CppObject *current; // x25
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x5
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-68h] BYREF
  int32_t plusMinus; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4217E4B & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v19);
    byte_4217E4B = 1;
  }
  plusMinus = 0;
  memset(&v33, 0, sizeof(v33));
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  plusMinus = 0;
  *actFlg = 0;
  v21 = ActInfo;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v25);
  if ( !v24 )
    sub_B0D97C(ActiveList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v27);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
    PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v24,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v33.fields.current;
    v30 = BattleBuffData__checkIndiviuality(
            this,
            v21,
            (BattleBuffData_BuffData_o *)v33.fields.current,
            checkIndividualities,
            &plusMinus,
            v31);
    if ( v30 )
    {
      if ( !current )
        sub_B0D97C(v30);
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
    &v33,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return lowTurn;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__getPassiveList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleBuffData___c__DisplayClass30_0_o *v10; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x20

  if ( (byte_4217DED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, isCheckInterval);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v6);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass30_0__getPassiveList_b__0__, v8);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass30_0_TypeInfo, v9);
    byte_4217DED = 1;
  }
  v10 = (BattleBuffData___c__DisplayClass30_0_o *)sub_B0D974(
                                                    BattleBuffData___c__DisplayClass30_0_TypeInfo,
                                                    isCheckInterval,
                                                    method);
  BattleBuffData___c__DisplayClass30_0___ctor(v10, 0LL);
  if ( !v10
    || (v10->fields.isCheckInterval = isCheckInterval,
        passiveList = this->fields.passiveList,
        v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                         v12,
                                                                         v13),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v15,
          (Il2CppObject *)v10,
          Method_BattleBuffData___c__DisplayClass30_0__getPassiveList_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__),
        !passiveList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)passiveList,
                (System_Predicate_T__o *)v15,
                (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
    sub_B0D97C(All);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getPassiveListDebug(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0

  if ( (byte_4217DF1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, method);
    byte_4217DF1 = 1;
  }
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    sub_B0D97C(0LL);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)passiveList,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__getRectBuffList(
        BattleBuffData_o *this,
        bool isAtkSide,
        bool isShowOverwriteClassRelation,
        bool isShowDarkClassRelation,
        const MethodInfo *method)
{
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
  int v17; // w8
  System_String_o *Value; // x0
  System_Int32_array *v19; // x24
  const MethodInfo *v20; // x2
  void *ActiveList; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int v24; // w8
  void *v25; // x25
  unsigned int v26; // w20
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x2
  int32_t v29; // w1
  const MethodInfo *v30; // x1
  int v31; // w23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x8
  System_Func_int__bool__o *v39; // x28
  _BOOL4 v40; // w27
  char v41; // w28
  int v42; // w23
  BattleBuffData_ShowBuffData_o *v43; // x27
  BattleBuffData_BuffData_o *v44; // x26
  __int64 v45; // x27
  int v46; // w8
  void *v47; // x24
  int i; // w27
  BattleBuffData_BuffData_o *v49; // x25
  const MethodInfo *v50; // x2
  _BOOL8 v51; // x0
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  __int64 v54; // x1
  __int64 v55; // x2
  BattleBuffData_ShowBuffData_o *v56; // x26
  __int64 v57; // x1
  __int64 v58; // x2
  int v59; // w19
  bool v60; // zf
  __int64 v62; // x0
  _BOOL4 v63; // [xsp+4h] [xbp-6Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // [xsp+8h] [xbp-68h]
  int v66; // [xsp+18h] [xbp-58h]

  v63 = isShowDarkClassRelation;
  if ( (byte_4217E32 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, isAtkSide);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v12);
    sub_B0D8A4(&BattleBuffData_ShowBuffData_TypeInfo, v13);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass137_0__getRectBuffList_b__0__, v14);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass137_0_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_7100/*"HIDE_DEFF_TYPE"*/, v16);
    byte_4217E32 = 1;
  }
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo,
                                                                                                  isAtkSide,
                                                                                                  isShowOverwriteClassRelation);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( isAtkSide )
    v17 = 108;
  else
    v17 = 109;
  v66 = v17;
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_7100/*"HIDE_DEFF_TYPE"*/, 0LL);
  v19 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
  ActiveList = BattleBuffData__getActiveList(this, 1, v20);
  if ( !ActiveList )
    goto LABEL_87;
  v24 = *((_DWORD *)ActiveList + 6);
  v25 = ActiveList;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= v24 )
      {
LABEL_88:
        v62 = sub_B0D9A8(ActiveList);
        sub_B0D948(v62, 0LL);
      }
      v44 = (BattleBuffData_BuffData_o *)*((_QWORD *)v25 + (int)v26 + 4);
      v45 = sub_B0D974(BattleBuffData___c__DisplayClass137_0_TypeInfo, v22, v23);
      BattleBuffData___c__DisplayClass137_0___ctor((BattleBuffData___c__DisplayClass137_0_o *)v45, 0LL);
      if ( !v44 )
        break;
      if ( !v44->fields._isRemove )
      {
        ActiveList = (void *)BattleBuffData_BuffData__isCommandCardBuff(v44, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 || v44->fields.isActiveCC )
        {
          ActiveList = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v44, 0LL);
          if ( ((unsigned __int8)ActiveList & 1) == 0 || v44->fields.isActiveCA )
          {
            v27 = BattleBuffData_BuffData__checkState(v44, 8, 0LL);
            v31 = (!v27
                || (!isAtkSide ? (v29 = 1024) : (v29 = 0x2000), v27 = BattleBuffData_BuffData__checkState(v44, v29, 0LL)))
               && !BattleBuffData__isInvalidHide((BattleBuffData_o *)v27, v44, v28);
            ActiveList = BattleBuffData__get_buffMst(this, v30);
            if ( !ActiveList )
              break;
            ActiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)ActiveList,
                           v44->fields.buffId,
                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !v45 )
              break;
            *(_QWORD *)(v45 + 16) = ActiveList;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v45 + 16),
              (System_Int32_array **)ActiveList,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            v38 = *(_QWORD *)(v45 + 16);
            if ( v38 )
            {
              if ( v19 != 0LL && !isAtkSide )
              {
                v39 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v22, v23);
                System_Func_int__bool____ctor(
                  v39,
                  (Il2CppObject *)v45,
                  Method_BattleBuffData___c__DisplayClass137_0__getRectBuffList_b__0__,
                  (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
                ActiveList = (void *)BasicHelper__Any_int__24145568(
                                       v19,
                                       (System_Func_T__bool__o *)v39,
                                       (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
                v38 = *(_QWORD *)(v45 + 16);
                if ( !v38 )
                  break;
                v31 &= (unsigned int)ActiveList ^ 1;
              }
              v40 = *(_DWORD *)(v38 + 20) == 144 || *(_DWORD *)(v38 + 20) == v66;
              v41 = (v31 & v40) != 0 ? isShowOverwriteClassRelation : v31;
              ActiveList = (void *)BattleBuffData_BuffData__checkState(v44, 4096, 0LL);
              if ( v44->fields.isAct && (v41 & 1) != 0 && ((unsigned __int8)ActiveList & 1) == 0 )
              {
                ActiveList = (void *)BattleBuffData_BuffData__checkState(v44, 512, 0LL);
                if ( ((unsigned __int8)ActiveList & 1) == 0 )
                {
                  v42 = v31 & v40 & v63;
                  v43 = (BattleBuffData_ShowBuffData_o *)sub_B0D974(BattleBuffData_ShowBuffData_TypeInfo, v22, v23);
                  BattleBuffData_ShowBuffData___ctor_22763556(v43, v44, 0LL);
                  if ( v42 )
                  {
                    if ( !v43 )
                      break;
                    v43->fields.isReady = 0;
                  }
                  ActiveList = v64;
                  if ( !v64 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v64,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
                }
              }
            }
          }
        }
      }
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
        goto LABEL_42;
    }
LABEL_87:
    sub_B0D97C(ActiveList);
  }
LABEL_42:
  ActiveList = BattleBuffData__getPassiveList(this, 1, v23);
  if ( !ActiveList )
    goto LABEL_87;
  v46 = *((_DWORD *)ActiveList + 6);
  v47 = ActiveList;
  if ( v46 >= 1 )
  {
    for ( i = 0; i < v46; ++i )
    {
      if ( i >= (unsigned int)v46 )
        goto LABEL_88;
      v49 = (BattleBuffData_BuffData_o *)*((_QWORD *)v47 + i + 4);
      if ( !v49 )
        goto LABEL_87;
      if ( !v49->fields._isRemove )
      {
        ActiveList = (void *)BattleBuffData_BuffData__checkState(v49, 8, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 )
        {
          ActiveList = (void *)BattleBuffData_BuffData__checkState(v49, 4096, 0LL);
          if ( ((unsigned __int8)ActiveList & 1) == 0 )
          {
            ActiveList = (void *)BattleBuffData_BuffData__isCommandCardBuff(v49, 0LL);
            if ( ((unsigned __int8)ActiveList & 1) == 0 || v49->fields.isActiveCC )
            {
              ActiveList = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v49, 0LL);
              if ( ((unsigned __int8)ActiveList & 1) == 0 || v49->fields.isActiveCA )
              {
                if ( BattleBuffData_BuffData__isCommandCodeBuff(v49, 0LL)
                  || BattleBuffData_BuffData__IsCommandAssistBuff(v49, 0LL)
                  || !v49->fields.isAct
                  || !(v51 = BattleBuffData__checkBuffSpecialAttack(this, v49, v50))
                  && v49->fields.turn <= 0
                  && v49->fields.count <= 0
                  && !(v51 = BattleBuffData_BuffData__checkState(v49, 4, 0LL))
                  && !(v51 = BattleBuffData_BuffData__checkState(v49, 0x2000, 0LL))
                  && (isAtkSide || !(v51 = BattleBuffData_BuffData__checkState(v49, 1024, 0LL)))
                  || BattleBuffData__isInvalidHide((BattleBuffData_o *)v51, v49, v52) )
                {
                  ActiveList = (void *)BattleBuffData_BuffData__isActiveCommandCode(v49, 0LL);
                  if ( ((unsigned __int8)ActiveList & 1) == 0 )
                    goto LABEL_84;
                  if ( !v49->fields.isAct )
                    goto LABEL_84;
                  ActiveList = (void *)BattleBuffData_BuffData__checkState(v49, 4, 0LL);
                  if ( ((unsigned __int8)ActiveList & 1) == 0 )
                    goto LABEL_84;
                  v56 = (BattleBuffData_ShowBuffData_o *)sub_B0D974(BattleBuffData_ShowBuffData_TypeInfo, v54, v55);
                  BattleBuffData_ShowBuffData___ctor_22763556(v56, v49, 0LL);
                  if ( !v64 )
                    goto LABEL_87;
                  goto LABEL_83;
                }
                ActiveList = BattleBuffData__get_buffMst(this, v53);
                if ( !ActiveList )
                  goto LABEL_87;
                ActiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)ActiveList,
                               v49->fields.buffId,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                if ( !ActiveList )
                  goto LABEL_87;
                v59 = *((_DWORD *)ActiveList + 5);
                if ( v59 != v66 && v59 != 144 || isShowOverwriteClassRelation )
                {
                  v56 = (BattleBuffData_ShowBuffData_o *)sub_B0D974(BattleBuffData_ShowBuffData_TypeInfo, v57, v58);
                  BattleBuffData_ShowBuffData___ctor_22763556(v56, v49, 0LL);
                  v60 = v59 == 144 || v59 == v66;
                  if ( v60 && v63 )
                  {
                    if ( !v56 )
                      goto LABEL_87;
                    v56->fields.isReady = 0;
                  }
                  if ( !v64 )
                    goto LABEL_87;
LABEL_83:
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v64,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
                }
              }
            }
          }
        }
      }
LABEL_84:
      v46 = *((_DWORD *)v47 + 6);
    }
  }
  if ( !v64 )
    goto LABEL_87;
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v64,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getReflectionEffectFunction(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  BuffList_TYPE_array *v3; // x0
  const MethodInfo *v4; // x4
  BattleBuffData_BuffData_array *BuffList_30786564; // x1
  const MethodInfo *v6; // x2
  __int64 v8; // x0

  if ( (byte_4217E0B & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TYPE___TypeInfo, method);
    byte_4217E0B = 1;
  }
  v3 = (BuffList_TYPE_array *)sub_B0D8BC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v3 )
    sub_B0D97C(0LL);
  if ( !v3->max_length )
  {
    v8 = sub_B0D9A8(v3);
    sub_B0D948(v8, 0LL);
  }
  v3->m_Items[1] = 97;
  BuffList_30786564 = BattleBuffData__getBuffList_30786564(this, v3, 0LL, 0LL, v4);
  return BattleBuffData__geCheckBuffSuccessful(this, BuffList_30786564, v6);
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
  int count; // w8
  BattleBuffData_BuffData_o *v13; // x24
  unsigned int v14; // w25
  int v15; // w8
  BattleBuffData_BuffData_o *v16; // x23
  unsigned int v17; // w24
  __int64 v19; // x0

  v10 = 0;
  if ( !isActiveOnly && !isIgnoreIndivUnreleaseable )
  {
    PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_23;
    count = PassiveList->fields.count;
    v13 = PassiveList;
    if ( count >= 1 )
    {
      v14 = 0;
      v10 = 0;
      while ( v14 < count )
      {
        PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v13->fields.isUse + (int)v14);
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
        count = v13->fields.count;
        if ( (int)++v14 >= count )
          goto LABEL_13;
      }
LABEL_22:
      v19 = sub_B0D9A8(PassiveList);
      sub_B0D948(v19, 0LL);
    }
    v10 = 0;
  }
LABEL_13:
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_23:
    sub_B0D97C(PassiveList);
  v15 = PassiveList->fields.count;
  v16 = PassiveList;
  if ( v15 >= 1 )
  {
    v17 = 0;
    while ( v17 < v15 )
    {
      PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v16->fields.isUse + (int)v17);
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
      v15 = v16->fields.count;
      if ( (int)++v17 >= v15 )
        return v10;
    }
    goto LABEL_22;
  }
  return v10;
}


BattleBuffData_SaveData_o *__fastcall BattleBuffData__getSaveData(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x20
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *passiveList; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleBuffData_SaveData_o *result; // x0

  if ( (byte_4217E2E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, method);
    sub_B0D8A4(&BattleBuffData_SaveData_TypeInfo, v4);
    byte_4217E2E = 1;
  }
  v5 = sub_B0D974(BattleBuffData_SaveData_TypeInfo, method, v2);
  BattleBuffData_SaveData___ctor((BattleBuffData_SaveData_o *)v5, 0LL);
  passiveList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.passiveList;
  if ( !passiveList
    || (passiveList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                      passiveList,
                                                                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
        !v5)
    || (*(_QWORD *)(v5 + 16) = passiveList,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v5 + 16),
          (System_Int32_array **)passiveList,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (passiveList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.activeList) == 0LL) )
  {
    sub_B0D97C(passiveList);
  }
  v13 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 passiveList,
                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  *(_QWORD *)(v5 + 24) = v13;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 24), v13, v14, v15, v16, v17, v18, v19);
  result = (BattleBuffData_SaveData_o *)v5;
  *(_DWORD *)(v5 + 32) = this->fields.addBuffOrder;
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getShowCommandBuffListActive(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  const MethodInfo *v8; // x2
  BattleBuffData_BuffData_array *ActiveList; // x0
  int max_length; // w8
  BattleBuffData_BuffData_array *v11; // x20
  unsigned int v12; // w22
  Il2CppClass **v13; // x8
  BattleBuffData_BuffData_o *v14; // x21
  const MethodInfo *v15; // x2
  __int64 v17; // x0

  if ( (byte_4217DFC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v6);
    byte_4217DFC = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = BattleBuffData__getActiveList(this, 1, v8);
  if ( !ActiveList )
    goto LABEL_16;
  max_length = ActiveList->max_length;
  v11 = ActiveList;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v17 = sub_B0D9A8(ActiveList);
        sub_B0D948(v17, 0LL);
      }
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleBuffData_BuffData_o *)v13[4];
      if ( !v14 )
        break;
      ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(
                                                      (BattleBuffData_BuffData_o *)v13[4],
                                                      8,
                                                      0LL);
      if ( ((unsigned __int8)ActiveList & 1) == 0 )
      {
        ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 4096, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 )
        {
          ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData__isInvalidHide(
                                                          (BattleBuffData_o *)ActiveList,
                                                          v14,
                                                          v15);
          if ( ((unsigned __int8)ActiveList & 1) == 0 )
          {
            if ( !v7 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v7,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
        }
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(ActiveList);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getShowCommandBuffListPassive(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  const MethodInfo *v8; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  int max_length; // w8
  BattleBuffData_BuffData_array *v11; // x21
  unsigned int v12; // w23
  Il2CppClass **v13; // x8
  BattleBuffData_BuffData_o *v14; // x22
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  __int64 v18; // x0

  if ( (byte_4217DFD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v6);
    byte_4217DFD = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v8);
  if ( !PassiveList )
    goto LABEL_23;
  max_length = PassiveList->max_length;
  v11 = PassiveList;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v18 = sub_B0D9A8(PassiveList);
        sub_B0D948(v18, 0LL);
      }
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleBuffData_BuffData_o *)v13[4];
      if ( !v14 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(
                                                       (BattleBuffData_BuffData_o *)v13[4],
                                                       8,
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) == 0 )
      {
        PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 4096, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) == 0 )
        {
          PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData__isInvalidHide(
                                                           (BattleBuffData_o *)PassiveList,
                                                           v14,
                                                           v15);
          if ( ((unsigned __int8)PassiveList & 1) == 0 )
          {
            PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 512, 0LL);
            if ( ((unsigned __int8)PassiveList & 1) != 0
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 0x2000, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData__checkBuffSpecialAttack(this, v14, v16),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || v14->fields.turn > 0
              || v14->fields.count > 0
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 2, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 4, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0) )
            {
              if ( !v7 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v7,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
          }
        }
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_21;
    }
LABEL_23:
    sub_B0D97C(PassiveList);
  }
LABEL_21:
  if ( !v7 )
    goto LABEL_23;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__getShowServantParam(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *passiveList; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  System_Collections_Generic_List_BattleBuffData_ShowBuffData__o **v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x22
  BattleBuffData_o *v32; // x0
  const MethodInfo *v33; // x2

  if ( (byte_4217DF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v8);
    sub_B0D8A4(&Method_BattleBuffData___c__DisplayClass39_0__getShowServantParam_b__0__, v9);
    sub_B0D8A4(&BattleBuffData___c__DisplayClass39_0_TypeInfo, v10);
    byte_4217DF6 = 1;
  }
  v11 = sub_B0D974(BattleBuffData___c__DisplayClass39_0_TypeInfo, method, v2);
  BattleBuffData___c__DisplayClass39_0___ctor((BattleBuffData___c__DisplayClass39_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  v22 = (System_Collections_Generic_List_BattleBuffData_ShowBuffData__o **)(v11 + 24);
  *(_QWORD *)(v11 + 24) = v21;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)v21, v23, v24, v25, v26, v27, v28);
  v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v29,
                                                                               v30);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v31,
    (Il2CppObject *)v11,
    Method_BattleBuffData___c__DisplayClass39_0__getShowServantParam_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  passiveList = (System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *)this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v31,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = (System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *)this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)passiveList,
          (System_Action_T__o *)v31,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        BattleBuffData__CheckDummyBuffData(v32, *v22, v33),
        (passiveList = *v22) == 0LL) )
  {
LABEL_8:
    sub_B0D97C(passiveList);
  }
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)passiveList,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Boolean_array *__fastcall BattleBuffData__getSkillSealSelectListFromValue(
        BattleBuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Boolean_array *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x20
  int32_t v7; // w21
  uint16_t Chars; // w22
  double NumericValue; // d0
  int v10; // w8
  int max_length; // w9
  __int64 v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = value;
  if ( (byte_4217E4E & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, *(_QWORD *)&value);
    sub_B0D8A4(&char_TypeInfo, v3);
    byte_4217E4E = 1;
  }
  v4 = (System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, 3LL);
  v5 = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !v5 )
LABEL_18:
    sub_B0D97C(v5);
  v6 = v5;
  if ( v5->fields.m_stringLength >= 1 )
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
        if ( !v4 )
          goto LABEL_18;
        max_length = v4->max_length;
        if ( v10 < max_length )
        {
          if ( v10 >= (unsigned int)max_length )
          {
            v13 = sub_B0D9A8(v5);
            sub_B0D948(v13, 0LL);
          }
          v4->m_Items[v10 + 4] = 1;
        }
      }
      ++v7;
    }
    while ( v7 < v6->fields.m_stringLength );
  }
  return v4;
}


System_Int32_array *__fastcall BattleBuffData__getSkillSealSelectTurnList(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
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
  System_Int32_array *v13; // x19
  BuffList_ActInfo_o *ActInfo; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x23
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  Il2CppObject *current; // x23
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x2
  System_Boolean_array *SkillSealSelectListFromValue; // x0
  unsigned __int64 v26; // x8
  il2cpp_array_size_t max_length; // w10
  const MethodInfo *v28; // x5
  __int64 v30; // x0
  __int64 v31; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-60h] BYREF
  int32_t plusMinus; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4217E4C & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, checkIndividualities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_B0D8A4(&int___TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    byte_4217E4C = 1;
  }
  plusMinus = 0;
  memset(&v33, 0, sizeof(v33));
  v13 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(99, 0LL, 0LL);
  plusMinus = 0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v18);
  if ( !v17 )
    sub_B0D97C(ActiveList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v20);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v33 = v32;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v33.fields.current;
    v23 = BattleBuffData__checkIndiviuality(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v33.fields.current,
            checkIndividualities,
            &plusMinus,
            v28);
    if ( v23 )
    {
      if ( !current )
        sub_B0D97C(v23);
      SkillSealSelectListFromValue = BattleBuffData__getSkillSealSelectListFromValue(
                                       (BattleBuffData_o *)v23,
                                       HIDWORD(current[1].monitor),
                                       v24);
      if ( !SkillSealSelectListFromValue )
        sub_B0D97C(0LL);
      if ( (int)*(_QWORD *)&SkillSealSelectListFromValue->max_length >= 1 )
      {
        v26 = 0LL;
        max_length = *(_QWORD *)&SkillSealSelectListFromValue->max_length;
        do
        {
          if ( v26 >= max_length )
          {
            v30 = sub_B0D9A8(SkillSealSelectListFromValue);
            sub_B0D948(v30, 0LL);
          }
          if ( SkillSealSelectListFromValue->m_Items[v26 + 4] )
          {
            if ( !v13 )
              sub_B0D97C(SkillSealSelectListFromValue);
            if ( v26 >= v13->max_length )
            {
              v31 = sub_B0D9A8(SkillSealSelectListFromValue);
              sub_B0D948(v31, 0LL);
            }
            v13->m_Items[v26 + 1] = HIDWORD(current[1].klass);
          }
          max_length = SkillSealSelectListFromValue->max_length;
          ++v26;
        }
        while ( (__int64)v26 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v13;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__getTDTypeChangeBuffData(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  const MethodInfo *v7; // x6
  BattleBuffData_BuffData_array *BuffList_30806472; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  BattleBuffData_BuffData_o *v11; // x19
  __int64 v12; // x0
  int max_length; // w8
  int v14; // w9
  int v15; // w10
  BattleBuffData_BuffData_o *v16; // x11
  int addOrder; // w12
  bool v18; // cc
  __int64 v20; // x0

  if ( (byte_4217E2D & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_BuffData_TypeInfo, servantData);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    byte_4217E2D = 1;
  }
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      servantData,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, servantData, 0LL, 0LL, 0LL, 0LL, 0LL);
  BuffList_30806472 = BattleBuffData__getBuffList_30806472(this, 86, v6, 1, 0, 0LL, v7);
  v11 = (BattleBuffData_BuffData_o *)sub_B0D974(BattleBuffData_BuffData_TypeInfo, v9, v10);
  BattleBuffData_BuffData___ctor(v11, 0LL);
  if ( !BuffList_30806472 )
    goto LABEL_15;
  max_length = BuffList_30806472->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v15 = -1;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
      {
        v20 = sub_B0D9A8(v12);
        sub_B0D948(v20, 0LL);
      }
      v16 = BuffList_30806472->m_Items[v14];
      if ( !v16 )
        break;
      addOrder = v16->fields.addOrder;
      ++v14;
      v18 = v15 < addOrder;
      if ( v15 < addOrder )
        v15 = v16->fields.addOrder;
      if ( v18 )
        v11 = v16;
      if ( v14 >= max_length )
        return v11;
    }
LABEL_15:
    sub_B0D97C(v12);
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__getTestActBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        int32_t *value,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v11; // [xsp+0h] [xbp-40h]

  if ( (byte_4217E48 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_4217E48 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_B0D97C(ActInfo);
  return BattleBuffData__confirmationBuff(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           0,
           value,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           v11);
}


bool __fastcall BattleBuffData__get_IsNoDamage(BattleBuffData_o *this, const MethodInfo *method)
{
  return this->fields.isNoDamage;
}


BuffMaster_o *__fastcall BattleBuffData__get_buffMst(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BuffMaster_o *result; // x0
  BattleServantConfConponent_o *p_tmpBuffMst; // x19
  BuffMaster_o *tmpBuffMst; // t1
  WebViewManager_o *Instance; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4217E01 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4217E01 = 1;
  }
  tmpBuffMst = this->fields._tmpBuffMst;
  p_tmpBuffMst = (BattleServantConfConponent_o *)&this->fields._tmpBuffMst;
  result = tmpBuffMst;
  if ( !tmpBuffMst )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
    p_tmpBuffMst->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B0D840(p_tmpBuffMst, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
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
  if ( (byte_4217E34 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_4217E34 = 1;
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
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_18:
    sub_B0D97C(this);
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
  const MethodInfo *v25; // x1
  BuffEntity_o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  il2cpp_array_size_t v29; // w24
  il2cpp_array_size_t v30; // w25
  System_Collections_Generic_List_int__o *v31; // x21
  int32_t IndividualitieCountAbove; // w22
  int32_t IndividualitieCountBelow; // w23
  System_Int32_array *v34; // x19
  __int64 v35; // x1
  __int64 v36; // x2
  BattleBuffData_o *v37; // x20
  System_Func_T1__T2__TResult__o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  System_Func_T1__T2__TResult__o *v41; // x22
  System_Int32_array *v42; // x0
  System_Int32_array *v43; // x1
  System_Int32_array *v44; // x0
  System_Int32_array *v45; // x19
  System_Int32_array *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  System_Func_T1__T2__TResult__o *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  System_Func_T1__T2__TResult__o *v52; // x22
  System_Int32_array *v54; // x0
  System_Int32_array *v55; // x19
  System_Int32_array *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  System_Func_T1__T2__T3__T4__TResult__o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  System_Func_T1__T2__T3__T4__TResult__o *v65; // x24
  __int64 v66; // x0
  System_Int32_array *v67; // [xsp+0h] [xbp-50h] BYREF
  int32_t pal; // [xsp+Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_4217E38 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    sub_B0D8A4(&Method_System_Func_int____int____bool___ctor__, v13);
    sub_B0D8A4(&System_Func_int____int____bool__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Func_int____int____int__int__bool___ctor__, v15);
    sub_B0D8A4(&System_Func_int____int____int__int__bool__TypeInfo, v16);
    sub_B0D8A4(&Method_Individuality_IsMatchArray__, v17);
    sub_B0D8A4(&Method_Individuality_IsPartialMatchArrayCount__, v18);
    sub_B0D8A4(&Method_Individuality_IsPartialMatchArray__, v19);
    sub_B0D8A4(&int___TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884952, v23);
    this = (BattleBuffData_o *)sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v24);
    byte_4217E38 = 1;
  }
  pal = 0;
  v67 = 0LL;
  if ( !buff )
    goto LABEL_31;
  if ( buff->fields._isRemove || !BattleBuffData_BuffData__checkState(buff, 32, 0LL) )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v12, v25);
  if ( !this )
    goto LABEL_31;
  this = (BattleBuffData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               buff->fields.buffId,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  pal = 0;
  v67 = 0LL;
  if ( !this )
    goto LABEL_31;
  v26 = (BuffEntity_o *)this;
  this = (BattleBuffData_o *)BuffEntity__IsExcludeUnSubStateIndiv((BuffEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    buffIndv = canSubStateBuffIndv;
  if ( !servantIndv || !buffIndv )
    goto LABEL_31;
  v29 = buffIndv->max_length + servantIndv->max_length;
  v30 = fieldIndiv ? fieldIndiv->max_length : 0;
  v31 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor_50000500(
    v31,
    v29 + v30,
    (const MethodInfo_2FAF274 *)Method_System_Collections_Generic_List_int___ctor___67884952);
  if ( !v31 )
    goto LABEL_31;
  System_Collections_Generic_List_int___AddRange(
    v31,
    (System_Collections_Generic_IEnumerable_T__o *)servantIndv,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  System_Collections_Generic_List_int___AddRange(
    v31,
    (System_Collections_Generic_IEnumerable_T__o *)buffIndv,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( fieldIndiv )
    System_Collections_Generic_List_int___AddRange(
      v31,
      (System_Collections_Generic_IEnumerable_T__o *)fieldIndiv,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( BuffEntity__isCondition(v26, 2, &pal, 0LL) )
  {
    IndividualitieCountAbove = BuffEntity__GetIndividualitieCountAbove(v26, 0, 0LL);
    IndividualitieCountBelow = BuffEntity__GetIndividualitieCountBelow(v26, 0, 0LL);
    v34 = System_Collections_Generic_List_int___ToArray(
            v31,
            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    this = (BattleBuffData_o *)sub_B0D8BC(int___TypeInfo, 1LL);
    if ( this )
    {
      v37 = this;
      if ( !LODWORD(this->fields.passiveList) )
      {
        v66 = sub_B0D9A8(this);
        sub_B0D948(v66, 0LL);
      }
      LODWORD(this->fields.activeList) = pal;
      if ( IndividualitieCountAbove >= 1 || IndividualitieCountBelow >= 1 )
      {
        v62 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B0D974(
                                                          System_Func_int____int____int__int__bool__TypeInfo,
                                                          v35,
                                                          v36);
        System_Func_object__object__int__int__bool____ctor(
          v62,
          0LL,
          Method_Individuality_IsPartialMatchArrayCount__,
          (const MethodInfo_2C67960 *)Method_System_Func_int____int____int__int__bool___ctor__);
        v65 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_B0D974(
                                                          System_Func_int____int____int__int__bool__TypeInfo,
                                                          v63,
                                                          v64);
        System_Func_object__object__int__int__bool____ctor(
          v65,
          0LL,
          Method_Individuality_IsPartialMatchArrayCount__,
          (const MethodInfo_2C67960 *)Method_System_Func_int____int____int__int__bool___ctor__);
        return Individuality__CheckSignedIndividualitiesCount(
                 v34,
                 (System_Int32_array *)v37,
                 (System_Func_int____int____int__int__bool__o *)v62,
                 (System_Func_int____int____int__int__bool__o *)v65,
                 IndividualitieCountAbove,
                 IndividualitieCountBelow,
                 0LL);
      }
      v38 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v35, v36);
      System_Func_object__object__bool____ctor(
        v38,
        0LL,
        Method_Individuality_IsPartialMatchArray__,
        (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
      v41 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v39, v40);
      System_Func_object__object__bool____ctor(
        v41,
        0LL,
        Method_Individuality_IsPartialMatchArray__,
        (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
      v42 = v34;
      v43 = (System_Int32_array *)v37;
      return Individuality__CheckSignedIndividualities_26826816(
               v42,
               v43,
               (System_Func_int____int____bool__o *)v38,
               (System_Func_int____int____bool__o *)v41,
               0LL);
    }
LABEL_31:
    sub_B0D97C(this);
  }
  if ( !BuffEntity__TryGetConditionParamArray(v26, 3, &v67, 0LL) )
  {
    if ( BuffEntity__TryGetConditionParamArray(v26, 4, &v67, 0LL) )
    {
      v54 = System_Collections_Generic_List_int___ToArray(
              v31,
              (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
      v55 = v67;
      v56 = v54;
      v38 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v57, v58);
      System_Func_object__object__bool____ctor(
        v38,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
      v41 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v59, v60);
      System_Func_object__object__bool____ctor(
        v41,
        0LL,
        Method_Individuality_IsMatchArray__,
        (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
      v42 = v56;
      v43 = v55;
      return Individuality__CheckSignedIndividualities_26826816(
               v42,
               v43,
               (System_Func_int____int____bool__o *)v38,
               (System_Func_int____int____bool__o *)v41,
               0LL);
    }
    return 0;
  }
  v44 = System_Collections_Generic_List_int___ToArray(
          v31,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v45 = v67;
  v46 = v44;
  v49 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v47, v48);
  System_Func_object__object__bool____ctor(
    v49,
    0LL,
    Method_Individuality_IsPartialMatchArray__,
    (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
  v52 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_int____int____bool__TypeInfo, v50, v51);
  System_Func_object__object__bool____ctor(
    v52,
    0LL,
    Method_Individuality_IsPartialMatchArray__,
    (const MethodInfo_26232A4 *)Method_System_Func_int____int____bool___ctor__);
  return Individuality__CheckSignedIndividualitiesPartialMatch(
           v46,
           v45,
           (System_Func_int____int____bool__o *)v49,
           (System_Func_int____int____bool__o *)v52,
           0LL);
}


bool __fastcall BattleBuffData__isContainConditionIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20

  v4 = this;
  if ( (byte_4217E37 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_4217E37 = 1;
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
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B0D97C(this);
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
  if ( (byte_4217E36 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_4217E36 = 1;
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
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_B0D97C(this);
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
  const MethodInfo *v12; // x6
  BattleBuffData_BuffData_array *BuffList_30806472; // x0
  const MethodInfo *v14; // x5
  __int64 v16; // x0

  *buff = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)buff,
    0LL,
    (System_String_array **)checkIndividualitiesDataArray,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !checkIndividualitiesDataArray )
    sub_B0D97C(v11);
  if ( !checkIndividualitiesDataArray->max_length )
  {
    v16 = sub_B0D9A8(v11);
    sub_B0D948(v16, 0LL);
  }
  BuffList_30806472 = BattleBuffData__getBuffList_30806472(
                        this,
                        126,
                        checkIndividualitiesDataArray->m_Items[0],
                        1,
                        1,
                        0LL,
                        v12);
  return BattleBuffData__checkGutsBuffSuccessfulIndividual(
           this,
           BuffList_30806472,
           126,
           checkIndividualitiesDataArray,
           buff,
           v14);
}


bool __fastcall BattleBuffData__isHide(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__checkState(buff, 8, 0LL);
}


bool __fastcall BattleBuffData__isHideOtherCommand(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__checkState(buff, 512, 0LL);
}


bool __fastcall BattleBuffData__isIgnoreDefeatPoint(BattleBuffData_o *this, const MethodInfo *method)
{
  BuffList_TYPE_array *BuffList_30786564; // x0
  const MethodInfo *v4; // x4
  __int64 v6; // x0

  if ( (byte_4217E88 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TYPE___TypeInfo, method);
    byte_4217E88 = 1;
  }
  BuffList_30786564 = (BuffList_TYPE_array *)sub_B0D8BC(BuffList_TYPE___TypeInfo, 1LL);
  if ( !BuffList_30786564 )
    goto LABEL_7;
  if ( !BuffList_30786564->max_length )
  {
    v6 = sub_B0D9A8(BuffList_30786564);
    sub_B0D948(v6, 0LL);
  }
  BuffList_30786564->m_Items[1] = 184;
  BuffList_30786564 = (BuffList_TYPE_array *)BattleBuffData__getBuffList_30786564(this, BuffList_30786564, 0LL, 0LL, v4);
  if ( !BuffList_30786564 )
LABEL_7:
    sub_B0D97C(BuffList_30786564);
  return BuffList_30786564->max_length != 0;
}


bool __fastcall BattleBuffData__isInvalidHide(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return !BattleBuffData_BuffData__checkAct(buff, 1, 0LL) && BattleBuffData_BuffData__checkState(buff, 0x8000, 0LL);
}


bool __fastcall BattleBuffData__isShow(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__checkState(buff, 4, 0LL);
}


bool __fastcall BattleBuffData__isShowDamageAndCommandCardBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__checkState(buff, 0x2000, 0LL);
}


bool __fastcall BattleBuffData__isShowDeff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__checkState(buff, 1024, 0LL);
}


bool __fastcall BattleBuffData__isShowStatusBuffOnly(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__checkState(buff, 4096, 0LL);
}


bool __fastcall BattleBuffData__isSphitBuff(BattleBuffData_o *this, int32_t *effectId, const MethodInfo *method)
{
  __int64 v5; // x1
  void *PassiveList; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  int v9; // w8
  void *v10; // x21
  unsigned int v11; // w24
  __int64 v12; // x22
  BuffEntity_o *v13; // x22
  int32_t v14; // w23
  const MethodInfo *v15; // x1
  int v16; // w8
  void *v17; // x21
  unsigned int v18; // w24
  __int64 v19; // x22
  int32_t v20; // w23
  __int64 v22; // x0

  if ( (byte_4217E33 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, effectId);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_4217E33 = 1;
  }
  *effectId = 0;
  PassiveList = BattleBuffData__getPassiveList(this, 1, method);
  if ( !PassiveList )
    goto LABEL_33;
  v9 = *((_DWORD *)PassiveList + 6);
  v10 = PassiveList;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        goto LABEL_34;
      v12 = *((_QWORD *)v10 + (int)v11 + 4);
      if ( !v12 )
        goto LABEL_33;
      if ( !*(_BYTE *)(v12 + 370) && *(_BYTE *)(v12 + 34) )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v7);
        if ( !PassiveList )
          goto LABEL_33;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        *(_DWORD *)(v12 + 16),
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          goto LABEL_33;
        v13 = (BuffEntity_o *)PassiveList;
        v14 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__isSpHit(v14, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          break;
      }
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_17;
    }
LABEL_32:
    *effectId = BuffEntity__getEffectId(v13, 0LL);
    return 1;
  }
LABEL_17:
  PassiveList = BattleBuffData__getActiveList(this, 1, v8);
  if ( !PassiveList )
LABEL_33:
    sub_B0D97C(PassiveList);
  v16 = *((_DWORD *)PassiveList + 6);
  v17 = PassiveList;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( v18 < v16 )
    {
      v19 = *((_QWORD *)v17 + (int)v18 + 4);
      if ( !v19 )
        goto LABEL_33;
      if ( !*(_BYTE *)(v19 + 370) && *(_BYTE *)(v19 + 34) )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v15);
        if ( !PassiveList )
          goto LABEL_33;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        *(_DWORD *)(v19 + 16),
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          goto LABEL_33;
        v13 = (BuffEntity_o *)PassiveList;
        v20 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__isSpHit(v20, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          goto LABEL_32;
      }
      v16 = *((_DWORD *)v17 + 6);
      if ( (int)++v18 >= v16 )
        return 0;
    }
LABEL_34:
    v22 = sub_B0D9A8(PassiveList);
    sub_B0D948(v22, 0LL);
  }
  return 0;
}


bool __fastcall BattleBuffData__isTDTypeChange(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *v3; // x0

  v3 = BattleBuffData__getTDTypeChangeBuffData(this, servantData, method);
  if ( !v3 )
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
  buffData->fields.isAct = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__removeLinkageBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endBuffs,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  bool v10; // w22
  const MethodInfo *v11; // x4
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  const MethodInfo *v13; // x4
  System_Collections_Generic_IEnumerable_T__o *v14; // x0

  if ( (byte_4217E07 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, endBuffs);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v8);
    byte_4217E07 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 endBuffs,
                                                                                                 isCreateDummy);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v10 = isCreateDummy;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__RemoveLinkageBuff(this, endBuffs, v10, 1, v11);
  if ( !v9 )
    sub_B0D97C(v12);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    v12,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__RemoveLinkageBuff(this, endBuffs, v10, 0, v13);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    v14,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9;
}


void __fastcall BattleBuffData__setSaveData(
        BattleBuffData_o *this,
        BattleBuffData_SaveData_o *sv,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *passiveList; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x22
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *activeList; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x22

  v4 = this;
  if ( (byte_4217E2F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, sv);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_BattleBuffData__setSaveData_b__133_0__, v6);
    sub_B0D8A4(&Method_BattleBuffData__setSaveData_b__133_1__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v8);
    this = (BattleBuffData_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__,
                                 v9);
    byte_4217E2F = 1;
  }
  if ( !sv )
    goto LABEL_9;
  this = (BattleBuffData_o *)v4->fields.passiveList;
  if ( !this )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)sv->fields.passive,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  this = (BattleBuffData_o *)v4->fields.activeList;
  if ( !this )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)sv->fields.active,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  passiveList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v4->fields.passiveList;
  v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v11,
                                                                               v12);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v13,
    (Il2CppObject *)v4,
    Method_BattleBuffData__setSaveData_b__133_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  if ( !passiveList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          passiveList,
          (System_Action_T__o *)v13,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        activeList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v4->fields.activeList,
        v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                     v15,
                                                                                     v16),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v17,
          (Il2CppObject *)v4,
          Method_BattleBuffData__setSaveData_b__133_1__,
          (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__),
        !activeList) )
  {
LABEL_9:
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    activeList,
    (System_Action_T__o *)v17,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  v4->fields.addBuffOrder = sv->fields.addBuffOrder;
}


void __fastcall BattleBuffData__set_IsNoDamage(BattleBuffData_o *this, bool value, const MethodInfo *method)
{
  this->fields.isNoDamage = value;
}


void __fastcall BattleBuffData__startBattleRec(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x0
  _BOOL8 v7; // x0
  _BOOL8 v8; // x0
  int v9; // w19
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-68h] BYREF
  int v11[2]; // [xsp+20h] [xbp-50h]
  int v12; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_4217E31 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v5);
    byte_4217E31 = 1;
  }
  memset(&i, 0, sizeof(i));
  v12 = 0;
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v10; ; BYTE2(i.fields.current[2].klass) = 0 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &i,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v7 )
      break;
    if ( !i.fields.current )
      sub_B0D97C(v7);
  }
  v11[0] = 52;
  v12 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v12 = 0;
  passiveList = this->fields.activeList;
  if ( !passiveList )
LABEL_19:
    sub_B0D97C(passiveList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)passiveList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v10; ; BYTE2(i.fields.current[2].klass) = 0 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &i,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v8 )
      break;
    if ( !i.fields.current )
      sub_B0D97C(v8);
  }
  v11[0] = 104;
  v9 = ++v12;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( v9 )
  {
    if ( v11[v9 - 1] == 104 )
      v12 = v9 - 1;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  _BOOL4 v20; // w28
  void *activeList; // x0
  _DWORD *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x24
  const MethodInfo *v26; // x3
  int v27; // w8
  unsigned int v28; // w20
  int32_t v29; // w25
  bool v30; // w26
  char *v31; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x27
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x4
  XWeaponTrail_Element_o *v36; // x2
  const MethodInfo_2FC68FC *v37; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x1
  const MethodInfo_2FC56E8 *v39; // x2
  BattleBuffData_o *v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  RemovedBuffInfo_o *v43; // x20
  __int64 v45; // x0

  if ( (byte_4217E20 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, individualities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Reverse__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v19);
    byte_4217E20 = 1;
  }
  v20 = fromHead == 0 && fromTail > 0;
  if ( v20 )
  {
    activeList = this->fields.activeList;
    if ( !activeList )
      goto LABEL_34;
    System_Collections_Generic_List_MapControl_WarInfo___Reverse(
      (System_Collections_Generic_List_MapControl_WarInfo__o *)activeList,
      (const MethodInfo_2FC7548 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Reverse__);
    fromHead = fromTail;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_34;
  activeList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)activeList,
                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !this->fields.activeList )
    goto LABEL_34;
  v22 = activeList;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.activeList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v22 )
    goto LABEL_34;
  v27 = v22[6];
  if ( v27 >= 1 )
  {
    v28 = 0;
    v29 = 0;
    v30 = isForceSubState;
    do
    {
      if ( v28 >= v27 )
      {
        v45 = sub_B0D9A8(activeList);
        sub_B0D948(v45, 0LL);
      }
      v31 = (char *)&v22[2 * v28];
      v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)v31 + 4);
      if ( !v32 )
        goto LABEL_34;
      activeList = (void *)BattleBuffData_BuffData__RemoveBuffCond(
                             *((BattleBuffData_BuffData_o **)v31 + 4),
                             fromHead,
                             v29,
                             individualities,
                             v30,
                             0LL);
      if ( ((unsigned __int8)activeList & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v25,
          v32,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
        if ( v32[1].fields.targetId )
        {
          activeList = this->fields.auraBuffList;
          if ( !activeList )
            goto LABEL_34;
          if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeList,
                 (WarBoardManager_TaskList_o *)v32,
                 (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
          {
            activeList = this->fields.auraBuffList;
            if ( !activeList )
              goto LABEL_34;
            System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeList,
              (WarBoardManager_TaskList_o *)v32,
              (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          }
        }
        BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v32, v33);
        ++v29;
        if ( !isCreateDummy )
          goto LABEL_31;
        activeList = BattleBuffData__CreateDummyBuff(
                       (BattleBuffData_o *)activeList,
                       (BattleBuffData_BuffData_o *)v32,
                       v34);
        if ( !this->fields.activeList )
          goto LABEL_34;
        v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)activeList;
        if ( !v20 )
        {
          activeList = this->fields.activeList;
          v38 = v35;
          v39 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          goto LABEL_30;
        }
        activeList = this->fields.activeList;
        v36 = (XWeaponTrail_Element_o *)v35;
        v37 = (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__;
      }
      else
      {
        activeList = this->fields.activeList;
        if ( !activeList )
          goto LABEL_34;
        if ( !v20 )
        {
          v38 = v32;
          v39 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
LABEL_30:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeList,
            v38,
            v39);
          goto LABEL_31;
        }
        v36 = (XWeaponTrail_Element_o *)v32;
        v37 = (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Insert(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)activeList,
        0,
        v36,
        v37);
LABEL_31:
      v27 = v22[6];
    }
    while ( (int)++v28 < v27 );
  }
  v40 = (BattleBuffData_o *)BattleBuffData__removeLinkageBuff(
                              this,
                              (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v25,
                              isCreateDummy,
                              v26);
  activeList = BattleBuffData__MakeRemoveBuffInfo(
                 v40,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v25,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v40,
                 v41);
  if ( !activeList )
LABEL_34:
    sub_B0D97C(activeList);
  v43 = (RemovedBuffInfo_o *)activeList;
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    *((System_Collections_Generic_List_BattleBuffData_BuffData__o **)activeList + 2),
    v42);
  return v43;
}


void __fastcall BattleBuffData__syncLinkageBuffChangeParam(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *linkedArray,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *activeList; // x21
  void *passiveList; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x22
  Il2CppObject *v19; // x23
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  BattleBuffData___c_c *v29; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v30; // x22
  BattleBuffData_o *v31; // x21
  struct BattleBuffData___c_StaticFields *v32; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__73_1; // x23
  Il2CppObject *v34; // x24
  struct BattleBuffData___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  WarBoardUiData_SaveData_array *v42; // x0
  const MethodInfo *v43; // x4
  __int64 v44; // x8
  BattleBuffData_BuffData_array *v45; // x22
  unsigned __int64 v46; // x24
  BattleBuffData_BuffData_o *v47; // x23
  const MethodInfo *v48; // x4
  __int64 v49; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *reflectedBuffList; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4217E09 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, linkedArray);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___67901632, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__73_0__, v10);
    sub_B0D8A4(&Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__73_1__, v11);
    this = (BattleBuffData_o *)sub_B0D8A4(&BattleBuffData___c_TypeInfo, v12);
    byte_4217E09 = 1;
  }
  reflectedBuffList = 0LL;
  if ( !linkedArray )
    goto LABEL_31;
  if ( !*(_QWORD *)&linkedArray->max_length )
    return;
  v13 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                          linkedArray,
                                                                          method);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)linkedArray,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___67901632);
  reflectedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v13;
  activeList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v4->fields.activeList;
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  passiveList = this[1].fields.passiveList;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)passiveList + 10);
  if ( !v18 )
  {
    if ( (BYTE3(this[1].fields.wkStr) & 4) != 0 && !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      passiveList = BattleBuffData___c_TypeInfo->static_fields;
    }
    v19 = *(Il2CppObject **)passiveList;
    v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                     v14,
                                                                     v15);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v18,
      v19,
      Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__73_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__73_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v18;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->__9__73_0,
      (System_Int32_array **)v18,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !activeList )
    goto LABEL_31;
  this = (BattleBuffData_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                               activeList,
                               (System_Predicate_T__o *)v18,
                               (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !this )
    goto LABEL_31;
  this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v29 = BattleBuffData___c_TypeInfo;
  v30 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v4->fields.passiveList;
  v31 = this;
  if ( (BYTE3(BattleBuffData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v29 = BattleBuffData___c_TypeInfo;
  }
  v32 = v29->static_fields;
  _9__73_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v32->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v32 = BattleBuffData___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__73_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                          v27,
                                                                          v28);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__73_1,
      v34,
      Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__73_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    v35 = BattleBuffData___c_TypeInfo->static_fields;
    v35->__9__73_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__73_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v35->__9__73_1,
      (System_Int32_array **)_9__73_1,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v30
    || (this = (BattleBuffData_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                     v30,
                                     (System_Predicate_T__o *)_9__73_1,
                                     (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
LABEL_31:
    sub_B0D97C(this);
  }
  v42 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v44 = *(_QWORD *)&linkedArray->max_length;
  if ( (int)v44 >= 1 )
  {
    v45 = (BattleBuffData_BuffData_array *)v42;
    v46 = 0LL;
    do
    {
      if ( v46 >= (unsigned int)v44 )
      {
        v49 = sub_B0D9A8(v42);
        sub_B0D948(v49, 0LL);
      }
      v47 = linkedArray->m_Items[v46];
      BattleBuffData__syncLinkageBuffChangeParam_30785712(
        v4,
        v47,
        (BattleBuffData_BuffData_array *)v31,
        &reflectedBuffList,
        v43);
      BattleBuffData__syncLinkageBuffChangeParam_30785712(v4, v47, v45, &reflectedBuffList, v48);
      LODWORD(v44) = linkedArray->max_length;
      ++v46;
    }
    while ( (__int64)v46 < (int)v44 );
  }
}


void __fastcall BattleBuffData__syncLinkageBuffChangeParam_30785712(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *linkedBuff,
        BattleBuffData_BuffData_array *checkArray,
        System_Collections_Generic_List_BattleBuffData_BuffData__o **reflectedBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  BattleBuffData_BuffData_o *v12; // x23
  int v13; // w24
  System_Int32_array *linkageTargetIndividualty; // x24
  System_Int32_array *LinkageIdArray; // x0
  const MethodInfo *v16; // x4
  __int64 v17; // x0

  v8 = this;
  if ( (byte_4217E0A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, linkedBuff);
    this = (BattleBuffData_o *)sub_B0D8A4(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
                                 v9);
    byte_4217E0A = 1;
  }
  if ( !checkArray )
    goto LABEL_17;
  v10 = *(_QWORD *)&checkArray->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v17 = sub_B0D9A8(this);
        sub_B0D948(v17, 0LL);
      }
      this = (BattleBuffData_o *)*reflectedBuffList;
      if ( !*reflectedBuffList )
        break;
      v12 = checkArray->m_Items[v11];
      this = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                   (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                   (WarBoardManager_TaskList_o *)v12,
                                   (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v12 )
          break;
        this = (BattleBuffData_o *)BattleBuffData_BuffData__IsFamilyBuff(v12, 0LL);
        if ( !linkedBuff )
          break;
        v13 = (int)this;
        this = (BattleBuffData_o *)BattleBuffData_BuffData__IsFamilyBuff(linkedBuff, 0LL);
        if ( ((v13 ^ (unsigned int)this) & 1) == 0 )
        {
          linkageTargetIndividualty = linkedBuff->fields.linkageTargetIndividualty;
          LinkageIdArray = BattleBuffData_BuffData__get_LinkageIdArray(v12, 0LL);
          this = (BattleBuffData_o *)Individuality__IsPartialMatchArray(linkageTargetIndividualty, LinkageIdArray, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v12->fields.turn = linkedBuff->fields.turn;
            v12->fields.count = linkedBuff->fields.count;
            this = (BattleBuffData_o *)*reflectedBuffList;
            if ( !*reflectedBuffList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            BattleBuffData__syncLinkageBuffChangeParam_30785712(v8, v12, checkArray, reflectedBuffList, v16);
          }
        }
      }
      LODWORD(v10) = checkArray->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        return;
    }
LABEL_17:
    sub_B0D97C(this);
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
  if ( (byte_4217E02 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_B0D8A4(&BattleBuffData_BuffData___TypeInfo, logic);
    byte_4217E02 = 1;
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
    sub_B0D97C(this);
  }
  return (BattleBuffData_BuffData_array *)sub_B0D8BC(BattleBuffData_BuffData___TypeInfo, 0LL);
}


void __fastcall BattleBuffData__turnProgressingIncrease(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_o *PassiveList; // x0
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v6; // x8
  BattleBuffData_o *v7; // x20
  unsigned __int64 v8; // x21
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v10; // x8
  BattleBuffData_o *v11; // x19
  unsigned __int64 v12; // x20
  __int64 v13; // x0

  PassiveList = (BattleBuffData_o *)BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_13;
  v6 = PassiveList->fields.passiveList;
  v7 = PassiveList;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    while ( v8 < (unsigned int)v6 )
    {
      BattleBuffData__turnProgressingIncreaseCalc(
        PassiveList,
        *((BattleBuffData_BuffData_o **)&v7->fields.activeList + v8),
        v5);
      LODWORD(v6) = v7->fields.passiveList;
      if ( (__int64)++v8 >= (int)v6 )
        goto LABEL_6;
    }
LABEL_12:
    v13 = sub_B0D9A8(PassiveList);
    sub_B0D948(v13, 0LL);
  }
LABEL_6:
  PassiveList = (BattleBuffData_o *)BattleBuffData__getActiveList(this, 1, v5);
  if ( !PassiveList )
LABEL_13:
    sub_B0D97C(PassiveList);
  v10 = PassiveList->fields.passiveList;
  v11 = PassiveList;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)v10 )
    {
      BattleBuffData__turnProgressingIncreaseCalc(
        PassiveList,
        *((BattleBuffData_BuffData_o **)&v11->fields.activeList + v12),
        v9);
      LODWORD(v10) = v11->fields.passiveList;
      if ( (__int64)++v12 >= (int)v10 )
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
    sub_B0D97C(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4217DF5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleBuffData__updateAuraBuffList_b__38_0__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v4);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v6);
    byte_4217DF5 = 1;
  }
  auraBuffList = this->fields.auraBuffList;
  v8 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                  System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleBuffData__updateAuraBuffList_b__38_0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  if ( !auraBuffList )
    sub_B0D97C(v9);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)auraBuffList,
    (System_Predicate_T__o *)v8,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x1
  _BYTE *BuffSuccessfulIndividual; // x0
  const MethodInfo *v14; // x6
  BattleBuffData_o *BuffList_30806472; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  _BYTE *v18; // x21
  int32_t v19; // w8
  _BYTE *v20; // x22
  System_String_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t v28; // w20
  bool v29; // w0
  unsigned __int64 v30; // x8
  __int64 v32; // x0

  if ( (byte_4217E2B & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&maxhp);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v12);
    byte_4217E2B = 1;
  }
  *motionName = 0LL;
  sub_B0D840(
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
    v32 = sub_B0D9A8(BuffSuccessfulIndividual);
    sub_B0D948(v32, 0LL);
  }
  BuffList_30806472 = (BattleBuffData_o *)BattleBuffData__getBuffList_30806472(
                                            this,
                                            126,
                                            checkIndividualitiesDataArray->m_Items[0],
                                            1,
                                            1,
                                            0LL,
                                            v14);
  BuffSuccessfulIndividual = BattleBuffData__getBuffSuccessfulIndividual(
                               BuffList_30806472,
                               (BattleBuffData_BuffData_array *)BuffList_30806472,
                               v16);
  if ( !BuffSuccessfulIndividual )
    goto LABEL_16;
  v18 = BuffSuccessfulIndividual;
  if ( BuffSuccessfulIndividual[370] )
    return 0;
  BuffSuccessfulIndividual = BattleBuffData__get_buffMst(this, v17);
  if ( !BuffSuccessfulIndividual
    || (BuffSuccessfulIndividual = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)BuffSuccessfulIndividual,
                                     *((_DWORD *)v18 + 4),
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_16:
    sub_B0D97C(BuffSuccessfulIndividual);
  }
  v20 = BuffSuccessfulIndividual;
  v21 = BuffEntity__GetMotionName((BuffEntity_o *)BuffSuccessfulIndividual, 0LL);
  *motionName = v21;
  sub_B0D840((BattleServantConfConponent_o *)motionName, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  v28 = *((_DWORD *)v20 + 5);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v29 = BuffList__CheckType(104, v28, 0LL);
  v19 = *((_DWORD *)v18 + 7);
  if ( v29 )
  {
    v30 = (unsigned __int128)(v19 * (__int64)maxhp * (__int128)0x20C49BA5E353F7CFLL) >> 64;
    return (v30 >> 7) + (v30 >> 63);
  }
  return v19;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__usedProgressing(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  const MethodInfo *v14; // x2
  void *PassiveList; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerable_T__o *ActiveArrayNoActAfterUsed; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  int v22; // w8
  void *v23; // x21
  unsigned int v24; // w24
  int32_t v25; // w23
  int32_t count; // w8
  bool v27; // vf
  int v28; // w8
  BattleBuffData_BuffData_o *v29; // x22
  __int64 v31; // x0

  if ( (byte_4217E0E & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, method);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9);
    byte_4217E0E = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v11,
                                                                                                  v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v14);
  if ( !v13 )
    goto LABEL_25;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v16);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveArrayNoActAfterUsed = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveArrayNoActAfterUsed(
                                                                               this,
                                                                               v18);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    ActiveArrayNoActAfterUsed,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !PassiveList )
    goto LABEL_25;
  v22 = *((_DWORD *)PassiveList + 6);
  v23 = PassiveList;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= v22 )
      {
        v31 = sub_B0D9A8(PassiveList);
        sub_B0D948(v31, 0LL);
      }
      v29 = (BattleBuffData_BuffData_o *)*((_QWORD *)v23 + (int)v24 + 4);
      if ( !v29 )
        break;
      if ( !v29->fields._isRemove && v29->fields.isDecide )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v20);
        if ( !PassiveList )
          break;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        v29->fields.buffId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          break;
        v25 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__CheckGutsType(v25, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) == 0 )
        {
          if ( v29->fields.isUse )
          {
            count = v29->fields.count;
            v27 = __OFSUB__(count, 1);
            v28 = count - 1;
            if ( v28 < 0 == v27 )
            {
              v29->fields.count = v28;
              PassiveList = (void *)BattleBuffData_BuffData__IslinkageTarget(v29, 0LL);
              if ( ((unsigned __int8)PassiveList & 1) != 0 )
              {
                if ( !v10 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v10,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
              }
            }
          }
          v29->fields.isUse = 0;
          v29->fields.isDecide = 0;
        }
      }
      v22 = *((_DWORD *)v23 + 6);
      if ( (int)++v24 >= v22 )
        return BattleBuffData__RemoveProgressingBuffList(
                 this,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10,
                 v21);
    }
LABEL_25:
    sub_B0D97C(PassiveList);
  }
  return BattleBuffData__RemoveProgressingBuffList(
           this,
           (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10,
           v21);
}


void __fastcall BattleBuffData__usedProgressingGuts(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  const MethodInfo *v14; // x2
  void *PassiveList; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  int v20; // w8
  void *v21; // x21
  unsigned int v22; // w24
  int32_t v23; // w23
  int32_t count; // w8
  bool v25; // vf
  int v26; // w8
  BattleBuffData_BuffData_o *v27; // x22
  __int64 v28; // x0

  if ( (byte_4217E10 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, method);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9);
    byte_4217E10 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v11,
                                                                                                  v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v14);
  if ( !v13 )
    goto LABEL_25;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v16);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    ActiveList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !PassiveList )
    goto LABEL_25;
  v20 = *((_DWORD *)PassiveList + 6);
  v21 = PassiveList;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v20 )
      {
        v28 = sub_B0D9A8(PassiveList);
        sub_B0D948(v28, 0LL);
      }
      v27 = (BattleBuffData_BuffData_o *)*((_QWORD *)v21 + (int)v22 + 4);
      if ( !v27 )
        break;
      if ( !v27->fields._isRemove && v27->fields.isDecide )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v18);
        if ( !PassiveList )
          break;
        PassiveList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)PassiveList,
                        v27->fields.buffId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          break;
        v23 = *((_DWORD *)PassiveList + 5);
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__CheckGutsType(v23, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
        {
          if ( v27->fields.isUse )
          {
            count = v27->fields.count;
            v25 = __OFSUB__(count, 1);
            v26 = count - 1;
            if ( v26 < 0 == v25 )
            {
              v27->fields.count = v26;
              PassiveList = (void *)BattleBuffData_BuffData__IslinkageTarget(v27, 0LL);
              if ( ((unsigned __int8)PassiveList & 1) != 0 )
              {
                if ( !v10 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v10,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
              }
            }
          }
          v27->fields.isUse = 0;
          v27->fields.isDecide = 0;
        }
      }
      v20 = *((_DWORD *)v21 + 6);
      if ( (int)++v22 >= v20 )
        goto LABEL_24;
    }
LABEL_25:
    sub_B0D97C(PassiveList);
  }
LABEL_24:
  BattleBuffData__RemoveProgressingBuffList(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10,
    v19);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._CheckIndividualitiesData_k__BackingField,
    (System_Int32_array **)checkIndividualitiesData,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._BuffIf_k__BackingField = buffIf;
  sub_B0D840(
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

  if ( (byte_42138C2 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, method);
    byte_42138C2 = 1;
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
    sub_B0D840(p_actInfo, actInfo, v6, v7, v8, v9, v10, v11);
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
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)v12, (System_Int32_array **)text, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_42138C3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, method);
    byte_42138C3 = 1;
  }
  ActValueRequest = this->fields.ActValueRequest;
  if ( !ActValueRequest
    || (ActValueRequest = (BattleBuffData_ActValueRequest_o *)BattleBuffData_ActValueRequest__get_ActInfo(
                                                                ActValueRequest,
                                                                method)) == 0LL )
  {
    sub_B0D97C(ActValueRequest);
  }
  v4 = (BuffList_ActInfo_o *)ActValueRequest;
  v5 = LODWORD(ActValueRequest->fields.actInfo) + this->fields._Value_k__BackingField;
  if ( BuffList_ActInfo__isLowerLimit((BuffList_ActInfo_o *)ActValueRequest, 0LL) )
  {
    LowerParam_k__BackingField = this->fields._LowerParam_k__BackingField;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v5 = System_Math__Max_44559528(LowerParam_k__BackingField, v5, 0LL);
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
  if ( (byte_42138C4 & 1) == 0 )
  {
    this = (BattleBuffData_ActValueResponse_o *)sub_B0D8A4(&System_Math_TypeInfo, response);
    byte_42138C4 = 1;
  }
  if ( !response )
    sub_B0D97C(this);
  UpperParam_k__BackingField = v4->fields._UpperParam_k__BackingField;
  v6 = response->fields._UpperParam_k__BackingField;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4->fields._UpperParam_k__BackingField = System_Math__Max_44559528(UpperParam_k__BackingField, v6, 0LL);
  v4->fields._LowerParam_k__BackingField = System_Math__Min_44514512(
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
    sub_B0D97C(this);
  return BattleBuffData_BuffData__CheckCond_22768840(
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


bool __fastcall BattleBuffData_BuffData__CheckCond_22768840(
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

  *plusMinus = 0;
  if ( this->fields.userCommandCodeId >= 1 && !this->fields.isActiveCC )
    return 0;
  isCommandCardBuff = BattleBuffData_BuffData__isCommandCardBuff(this, (const MethodInfo *)svtBuff);
  if ( isCommandCardBuff && !this->fields.isActiveCC )
    return 0;
  if ( this->fields.commandAssistId >= 1 && !this->fields.isActiveCA )
    return 0;
  if ( !svtBuff )
    sub_B0D97C(isCommandCardBuff);
  return BattleBuffData__checkIndiviuality_30819704(
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


bool __fastcall BattleBuffData_BuffData__CheckCond_22769080(
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
  return BattleBuffData_BuffData__CheckCond_22768840(
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
    sub_B0D97C(this);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t state; // w8
  System_Int32_array *v13; // x20
  DataManager_o *Instance; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v17; // x21
  struct System_Int32_array *addIndividualty; // x8
  __int64 v19; // x8

  if ( (byte_42138C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, IsIncludeIgnoreIndividuality);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_B0D8A4(&int___TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_42138C6 = 1;
  }
  state = this->fields.state;
  if ( (state & 0x10000) != 0 && !IsIncludeIgnoreIndividuality )
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  if ( isIgnoreIndivUnreleaseable )
  {
    if ( isAiCheck )
    {
      if ( (state & 0x80000) != 0 )
        return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
    }
    else if ( (state & 0x880040) != 0 )
    {
      return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
    }
  }
  if ( !this->fields._isRemove )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   this->fields.buffId,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !Entity )
          return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
        v17 = Entity;
        Instance = (DataManager_o *)BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)this->fields.addIndividualty,
                                      0LL);
        v13 = *(System_Int32_array **)&v17->fields.bannerId;
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v13;
        if ( v13 )
        {
          addIndividualty = this->fields.addIndividualty;
          if ( addIndividualty )
          {
            Instance = (DataManager_o *)sub_B0D8BC(int___TypeInfo, addIndividualty->max_length + v13->max_length);
            if ( *(_QWORD *)&v17->fields.bannerId )
            {
              v13 = (System_Int32_array *)Instance;
              System_Array__CopyTo(*(System_Array_o **)&v17->fields.bannerId, (System_Array_o *)Instance, 0, 0LL);
              v19 = *(_QWORD *)&v17->fields.bannerId;
              if ( v19 )
              {
                Instance = (DataManager_o *)this->fields.addIndividualty;
                if ( Instance )
                {
                  System_Array__CopyTo((System_Array_o *)Instance, (System_Array_o *)v13, *(_DWORD *)(v19 + 24), 0LL);
                  return v13;
                }
              }
            }
          }
        }
      }
    }
    sub_B0D97C(Instance);
  }
  return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_42138CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    byte_42138CB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          this->fields.buffId,
                                                                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  __int64 v3; // x1
  BuffMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_42138CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_42138CC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v8; // x21
  bool v9; // w0
  int32_t state; // w8
  int v11; // w9
  unsigned int v12; // w8

  if ( (byte_42138CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BattleServantData____67954192, servantArray);
    sub_B0D8A4(&Method_BattleBuffData_BuffData__SetBuffNoActState_b__127_0__, v5);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v7);
    byte_42138CA = 1;
  }
  v8 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                            System_Func_BattleServantData__bool__TypeInfo,
                                                                            servantArray,
                                                                            method);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleBuffData_BuffData__SetBuffNoActState_b__127_0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
  v9 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)servantArray,
         (System_Func_T__bool__o *)v8,
         (const MethodInfo_17071E4 *)Method_BasicHelper_Any_BattleServantData____67954192);
  state = this->fields.state;
  v11 = state | 0x200000;
  v12 = state & 0xFFDFFFFF;
  if ( !v9 )
    v12 = v11;
  this->fields.state = v12;
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


bool __fastcall BattleBuffData_BuffData___SetBuffNoActState_b__127_0(
        BattleBuffData_BuffData_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct BuffEntity_o *cachedEntity; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42138C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    byte_42138C5 = 1;
  }
  cachedEntity = this->fields.cachedEntity;
  if ( !cachedEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    cachedEntity = (struct BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            Master_WarQuestSelectionMaster,
                                            this->fields.buffId,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this->fields.cachedEntity = cachedEntity;
    sub_B0D840(
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

  if ( (byte_42138C9 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_42138C9 = 1;
  }
  servantCardIdsIndexArray = this->fields.servantCardIdsIndexArray;
  p_servantCardIdsIndexArray = (BattleServantConfConponent_o *)&this->fields.servantCardIdsIndexArray;
  klass = servantCardIdsIndexArray;
  if ( !servantCardIdsIndexArray )
  {
    v6 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
    p_servantCardIdsIndexArray->klass = (BattleServantConfConponent_c *)v6;
    sub_B0D840(p_servantCardIdsIndexArray, v6, v7, v8, v9, v10, v11, v12);
    klass = p_servantCardIdsIndexArray->klass;
    if ( !p_servantCardIdsIndexArray->klass )
      sub_B0D97C(v13);
  }
  return klass[6] != 0;
}


bool __fastcall BattleBuffData_BuffData__isCommandCodeBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.userCommandCodeId > 0;
}


bool __fastcall BattleBuffData_BuffData__isEffectBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarEntity_o *Entity; // x0
  DataManager_o *Instance; // x0

  if ( (byte_42138C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42138C7 = 1;
  }
  if ( this->fields._isRemove )
  {
    LOBYTE(Entity) = 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               this->fields.buffId,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  System_Int32_array *servantCardIdsIndexArray; // x19
  System_Func_int__bool__o *v21; // x20

  if ( (byte_42138C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, command);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleBuffData_BuffData___c__DisplayClass122_0__isEnableCommandCardBuff_b__0__, v7);
    sub_B0D8A4(&BattleBuffData_BuffData___c__DisplayClass122_0_TypeInfo, v8);
    byte_42138C8 = 1;
  }
  v9 = sub_B0D974(BattleBuffData_BuffData___c__DisplayClass122_0_TypeInfo, command, method);
  BattleBuffData_BuffData___c__DisplayClass122_0___ctor((BattleBuffData_BuffData___c__DisplayClass122_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = command;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)command, v11, v12, v13, v14, v15, v16);
  if ( !BattleBuffData_BuffData__isCommandCardBuff(this, v17) )
    return 0;
  servantCardIdsIndexArray = this->fields.servantCardIdsIndexArray;
  v21 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v18, v19);
  System_Func_int__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_BattleBuffData_BuffData___c__DisplayClass122_0__isEnableCommandCardBuff_b__0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__24145568(
           servantCardIdsIndexArray,
           (System_Func_T__bool__o *)v21,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
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
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
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
    this->fields.state |= dword_3202F20[v3];
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


void __fastcall BattleBuffData_BuffData___c__DisplayClass122_0___ctor(
        BattleBuffData_BuffData___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData_BuffData___c__DisplayClass122_0___isEnableCommandCardBuff_b__0(
        BattleBuffData_BuffData___c__DisplayClass122_0_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleCommandData_o *command; // x8

  command = this->fields.command;
  if ( !command )
    sub_B0D97C(this);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

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
  this->fields._buffIf_k__BackingField = buffIf;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._buffIf_k__BackingField,
    (System_Int32_array **)buffIf,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall BattleBuffData_CheckIndividualitiesData___ctor_22771868(
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

  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattleBuffData_CheckIndividualitiesData__InitializeIndividuality(this, self, opponent, 0LL, 0LL, v13);
  if ( selfConcatSvtIndividualities )
  {
    this->fields._selfConcatSvtIndividualities_k__BackingField = selfConcatSvtIndividualities;
    sub_B0D840(
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._opponentConcatSvtIndividualities_k__BackingField,
      (System_Int32_array **)opponentConcatSvtIndividualities,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  else
  {
    BattleBuffData_CheckIndividualitiesData__InitializeOpponentConcatSvtIndividualities(
      this,
      opponent,
      0LL,
      (const MethodInfo *)v21);
  }
  this->fields._buffIf_k__BackingField = buffIf;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._buffIf_k__BackingField,
    (System_Int32_array **)buffIf,
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
  __int64 v11; // x1
  struct System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
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

  if ( (byte_42138CD & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, self);
    sub_B0D8A4(&int___TypeInfo, v11);
    byte_42138CD = 1;
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
      ConcatServantAndBuffIndividualityies = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
    if ( this )
    {
      this->fields._selfIndividuality_k__BackingField = ConcatServantAndBuffIndividualityies;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields,
        (System_Int32_array **)ConcatServantAndBuffIndividualityies,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      if ( opponent )
        v32 = BattleServantData__getConcatServantAndBuffIndividualityies(opponent, 0LL, 0, 0, 0, 0LL);
      else
        v32 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      this->fields._opponentIndividuality_k__BackingField = v32;
      sub_B0D840(
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
        v46 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      this->fields._selfIndividualityCanRelease_k__BackingField = v46;
      sub_B0D840(
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
      v55 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      goto LABEL_33;
    }
LABEL_34:
    sub_B0D97C(ConcatServantAndBuffIndividualityies);
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
    ConcatServantAndBuffIndividualityies = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  if ( !this )
    goto LABEL_34;
  this->fields._selfIndividuality_k__BackingField = ConcatServantAndBuffIndividualityies;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)ConcatServantAndBuffIndividualityies,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( opponent )
    v25 = BattleServantData__getConcatServantAndBuffIndividualityies(opponent, commandOpponent, 0, 0, 0, 0LL);
  else
    v25 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields._opponentIndividuality_k__BackingField = v25;
  sub_B0D840(
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
    v39 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields._selfIndividualityCanRelease_k__BackingField = v39;
  sub_B0D840(
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
  sub_B0D840(
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

  if ( (byte_42138CF & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, opponent);
    byte_42138CF = 1;
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
    sub_B0D97C(IsConstantMasterIndvAddBuffActive);
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
  sub_B0D840(
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

  if ( (byte_42138CE & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, self);
    byte_42138CE = 1;
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
    sub_B0D97C(IsConstantMasterIndvAddBuffActive);
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)selfSvt, v9, v10, v11, v12, v13, v14);
  this->fields._TargetSvt_k__BackingField = targetSvt;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._TargetSvt_k__BackingField,
    (System_Int32_array **)targetSvt,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.checkActs = actions;
  sub_B0D840(
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x0
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
  BattleServantData_o *SelfSvt_k__BackingField; // x22
  BattleServantData_o *TargetSvt_k__BackingField; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  BattleBuffData_CheckIndividualitiesData_o *v30; // x24
  const MethodInfo *v31; // x6
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct BuffList_ACTION_array *checkActs; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v41; // x20

  if ( (byte_42138D0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BuffList_ACTION___, buff);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Func_BuffList_ACTION__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_BuffList_ACTION__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0__IsInvoke_b__0__, v10);
    sub_B0D8A4(&BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_TypeInfo, v11);
    byte_42138D0 = 1;
  }
  v12 = sub_B0D974(BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_TypeInfo, buff, command);
  BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0___ctor(
    (BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  *(_QWORD *)(v12 + 16) = buff;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)buff, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  SelfSvt_k__BackingField = this->fields._SelfSvt_k__BackingField;
  TargetSvt_k__BackingField = this->fields._TargetSvt_k__BackingField;
  v30 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v28,
                                                       v29);
  BattleBuffData_CheckIndividualitiesData___ctor(
    v30,
    SelfSvt_k__BackingField,
    TargetSvt_k__BackingField,
    command,
    0LL,
    0LL,
    v31);
  *(_QWORD *)(v12 + 32) = v30;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)v30, v32, v33, v34, v35, v36, v37);
  checkActs = this->fields.checkActs;
  v41 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B0D974(
                                                                                   System_Func_BuffList_ACTION__bool__TypeInfo,
                                                                                   v39,
                                                                                   v40);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v41,
    (Il2CppObject *)v12,
    Method_BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0__IsInvoke_b__0__,
    (const MethodInfo_26151B8 *)Method_System_Func_BuffList_ACTION__bool___ctor__);
  return BasicHelper__Any_ListViewSort_FilterCategoryKind_(
           (ListViewSort_FilterCategoryKind_array *)checkActs,
           (System_Func_T__bool__o *)v41,
           (const MethodInfo_1706FF0 *)Method_BasicHelper_Any_BuffList_ACTION___);
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
  sub_B0D840(
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
  sub_B0D840(
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
  if ( (byte_4211F5C & 1) == 0 )
  {
    this = (BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *)sub_B0D8A4(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_4211F5C = 1;
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
    sub_B0D97C(this);
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


void __fastcall BattleBuffData_FieldChangeData___ctor_22772556(
        BattleBuffData_FieldChangeData_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0
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

  if ( (byte_42138D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BgmMaster___, baseVals);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_42138D1 = 1;
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
  Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_9:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  BgmFileName = BgmMaster__GetBgmFileName(
                  Master_WarQuestSelectionMaster,
                  this->fields.bgmId,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
  this->fields.bgmName = BgmFileName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bgmName,
    (System_Int32_array **)BgmFileName,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.isAllowSubBgmPlaying = DataVals__isParam(baseVals, 100, 0LL);
  ParamArray = DataVals__GetParamArray(baseVals, 103, 0LL);
  this->fields.individuality = ParamArray;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.individuality,
    (System_Int32_array **)ParamArray,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.isTakeOverNextWave = DataVals__GetParam(baseVals, 108, 0, 0LL) > 0;
}


void __fastcall BattleBuffData_IntervalData___ctor(BattleBuffData_IntervalData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_IntervalData___ctor_22772996(
        BattleBuffData_IntervalData_o *this,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  __int64 v5; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseVal )
    sub_B0D97C(v5);
  this->fields.baseTurn = DataVals__GetParam(baseVal, 131, 0, 0LL);
  this->fields.baseCount = DataVals__GetParam(baseVal, 132, 0, 0LL);
}


void __fastcall BattleBuffData_IntervalData__DecrementCount(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.intervalCount = UnityEngine_Mathf__Max_40819140(0, this->fields.intervalCount - 1, 0LL);
}


void __fastcall BattleBuffData_IntervalData__DecrementTurn(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.intervalTurn = UnityEngine_Mathf__Max_40819140(0, this->fields.intervalTurn - 1, 0LL);
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

  if ( !this->fields.updateTiming )
    return 0;
  intervalCount = this->fields.intervalCount;
  if ( this->fields.intervalTurn > 0 || intervalCount >= 1 )
  {
    v7 = UnityEngine_Mathf__Max_40819140(0, intervalCount - 1, 0LL);
    this->fields.intervalCount = v7;
    if ( !buff )
      sub_B0D97C(v7);
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
    sub_B0D97C(this);
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


void __fastcall BattleBuffData_ShowBuffData___ctor_22763556(
        BattleBuffData_ShowBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  int32_t removeBuffId; // w8
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  unsigned int state; // w8
  bool v15; // w8
  struct BattleBuffData_IntervalData_o *v16; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !buff )
    sub_B0D97C(v5);
  this->fields.buffId = buff->fields.buffId;
  if ( buff->fields._isRemove )
  {
    removeBuffId = buff->fields._removeBuffId;
    this->fields.isRemove = 1;
    this->fields.buffId = removeBuffId;
  }
  this->fields.isPassive = buff->fields.passive;
  intervalData = buff->fields.intervalData;
  v15 = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
     && (state = buff->fields.state, (state & 0x24011) == 0)
     && ((state >> 21) & 1) == 0;
  this->fields.isReady = v15;
  this->fields.isBoost = (buff->fields.state & 2) != 0;
  this->fields.turn = buff->fields.turn;
  this->fields.count = buff->fields.count;
  this->fields.isFrame = (buff->fields.state & 0x40) != 0;
  this->fields.isHideParam = (buff->fields.state & 0x80) != 0;
  this->fields.addOrder = buff->fields.addOrder;
  v16 = buff->fields.intervalData;
  this->fields._IntervalData_k__BackingField = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._IntervalData_k__BackingField,
    (System_Int32_array **)v16,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)v4, (System_Int32_array **)buffData, v5, v6, v7, v8, v9, v10);
  LODWORD(v4->monitor) = 0;
  BYTE4(v4->monitor) = 0;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData__GetLogicRankUpCount(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v10; // x21
  const MethodInfo *v11; // x6
  __int64 v12; // x0
  BattleBuffData_BuffData_array *BuffList_30806472; // x19
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  __int64 v16; // x2
  BattleBuffData_SkillRankChangeData___c_c *v17; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__11_0; // x20
  Il2CppObject *v20; // x21
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42138D3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___, v4);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleBuffData_SkillRankChangeData___c__GetLogicRankUpCount_b__11_0__, v7);
    sub_B0D8A4(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v8);
    byte_42138D3 = 1;
  }
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       method,
                                                       v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, 0LL, 0LL, 0LL, 0LL, 0LL, v11);
  if ( !buffData )
    sub_B0D97C(v12);
  BuffList_30806472 = BattleBuffData__getBuffList_30806472(buffData, 92, v10, 0, 0, 0LL, 0LL);
  BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, BuffList_30806472, 1, v14);
  v17 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
    v17 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__11_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                 v15,
                                                                                 v16);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__11_0,
      v20,
      Method_BattleBuffData_SkillRankChangeData___c__GetLogicRankUpCount_b__11_0__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v21 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    v21->__9__11_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__11_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BuffList_30806472,
           (System_Func_TSource__int__o *)_9__11_0,
           (const MethodInfo_1B55828 *)Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData_SkillRankChangeData__RevertUnusedBuff(
        BattleBuffData_SkillRankChangeData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        bool isUnused,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *v11; // x22
  BattleBuffData_o *buffData; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21

  if ( (byte_42138D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, buffArray);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v8);
    sub_B0D8A4(&Method_BattleBuffData_SkillRankChangeData___c__DisplayClass12_0__RevertUnusedBuff_b__0__, v9);
    sub_B0D8A4(&BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_TypeInfo, v10);
    byte_42138D4 = 1;
  }
  v11 = (BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *)sub_B0D974(
                                                                        BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_TypeInfo,
                                                                        buffArray,
                                                                        isUnused);
  BattleBuffData_SkillRankChangeData___c__DisplayClass12_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  v11->fields.isUnused = isUnused;
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                               v13,
                                                                               v14);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_BattleBuffData_SkillRankChangeData___c__DisplayClass12_0__RevertUnusedBuff_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v15,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  if ( v11->fields.isUnused )
  {
    buffData = this->fields.buffData;
    if ( buffData )
    {
      BattleBuffData__ResetTargetUseBuff(buffData, 154, 0, 0LL);
      return;
    }
LABEL_8:
    sub_B0D97C(buffData);
  }
}


void __fastcall BattleBuffData_SkillRankChangeData__Update(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v10; // x21
  const MethodInfo *v11; // x6
  __int64 v12; // x0
  BattleBuffData_BuffData_array *FixBuffArray; // x20
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  __int64 v16; // x2
  BattleBuffData_SkillRankChangeData___c_c *v17; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v20; // x22
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42138D2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___, v4);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleBuffData_SkillRankChangeData___c__Update_b__10_0__, v7);
    sub_B0D8A4(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v8);
    byte_42138D2 = 1;
  }
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       method,
                                                       v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, 0LL, 0LL, 0LL, 0LL, 0LL, v11);
  if ( !buffData )
    sub_B0D97C(v12);
  FixBuffArray = BattleBuffData__GetFixBuffArray(buffData, 92, v10, 0, 0LL);
  BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, FixBuffArray, 1, v14);
  v17 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
    v17 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                 v15,
                                                                                 v16);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__10_0,
      v20,
      Method_BattleBuffData_SkillRankChangeData___c__Update_b__10_0__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v21 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    v21->__9__10_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__10_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  this->fields._RankUpCount_k__BackingField = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)FixBuffArray,
                                                (System_Func_TSource__int__o *)_9__10_0,
                                                (const MethodInfo_1B55828 *)Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v10; // x21
  const MethodInfo *v11; // x6
  BattleBuffData_o *FixBuffArray; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  BattleBuffData_BuffData_array *v15; // x20
  BattleBuffData_SkillRankChangeData___c_c *v16; // x0
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__13_0; // x21
  Il2CppObject *v19; // x22
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleBuffData_BuffData_array *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v28; // x3
  BattleBuffData_BuffData_array *v29; // x1

  if ( (byte_42138D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindAll_BattleBuffData_BuffData___, method);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleBuffData_SkillRankChangeData___c__UseBuff_b__13_0__, v7);
    sub_B0D8A4(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v8);
    byte_42138D5 = 1;
  }
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       method,
                                                       v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, 0LL, 0LL, 0LL, 0LL, 0LL, v11);
  if ( !buffData )
    goto LABEL_20;
  FixBuffArray = (BattleBuffData_o *)BattleBuffData__GetFixBuffArray(buffData, 92, v10, 0, 0LL);
  if ( !FixBuffArray )
    goto LABEL_20;
  v15 = (BattleBuffData_BuffData_array *)FixBuffArray;
  if ( FixBuffArray->fields.passiveList )
  {
    v16 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    if ( (BYTE3(BattleBuffData_SkillRankChangeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
      v16 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                            System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                            v13,
                                                                            v14);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__13_0,
        v19,
        Method_BattleBuffData_SkillRankChangeData___c__UseBuff_b__13_0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
      v20 = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
      v20->__9__13_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__13_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v20->__9__13_0,
        (System_Int32_array **)_9__13_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    All_BattleBuffData_BuffData = System_Array__FindAll_BattleBuffData_BuffData_(
                                    v15,
                                    (System_Predicate_T__o *)_9__13_0,
                                    (const MethodInfo_1F68AE0 *)Method_System_Array_FindAll_BattleBuffData_BuffData___);
    if ( !All_BattleBuffData_BuffData )
      goto LABEL_18;
    v29 = All_BattleBuffData_BuffData;
    if ( !*(_QWORD *)&All_BattleBuffData_BuffData->max_length )
      goto LABEL_18;
    FixBuffArray = this->fields.buffData;
    if ( FixBuffArray )
    {
      BattleBuffData__UsedProgressing(FixBuffArray, v29, 0LL);
LABEL_18:
      BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, v15, 0, v28);
      return;
    }
LABEL_20:
    sub_B0D97C(FixBuffArray);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x0

  if ( (byte_4211F5D & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v1);
    byte_4211F5D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleBuffData_SkillRankChangeData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleBuffData_SkillRankChangeData___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return buff->fields.param;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData___c___Update_b__10_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return buff->fields.param;
}


bool __fastcall BattleBuffData_SkillRankChangeData___c___UseBuff_b__13_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  BattleBuffData_BuffData__RevertUnused(buff, this->fields.isUnused, 0LL);
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__238___ctor(
        BattleBuffData__AllBuffEnumerable_d__238_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffEnumerable_d__238__MoveNext(
        BattleBuffData__AllBuffEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  BattleBuffData__AllBuffEnumerable_d__238_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct BattleBuffData_o *_4__this; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *activeList; // x0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap1; // x20
  __int128 v9; // q0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **current; // x1
  bool result; // w0
  __int64 v25; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *passiveList; // x0
  __int128 v27; // q0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+38h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_42138BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v3);
    this = (BattleBuffData__AllBuffEnumerable_d__238_o *)sub_B0D8A4(
                                                           &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                           v4);
    byte_42138BC = 1;
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
        sub_B0D97C(this);
      activeList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.activeList;
      if ( !activeList )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v42,
        activeList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      p__7__wrap1 = &v2->fields.__7__wrap1;
      v9 = *(_OWORD *)&v42.fields.list;
      v2->fields.__7__wrap1.fields.current = (struct BattleBuffData_BuffData_o *)v42.fields.current;
      *(_OWORD *)&v2->fields.__7__wrap1.fields.list = v9;
      sub_B0D840((BattleServantConfConponent_o *)&v2->fields.__7__wrap1, 0LL, v10, v11, v12, v13, v14, v15);
    }
    v2->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
    {
      current = (System_Int32_array **)v2->fields.__7__wrap1.fields.current;
      v2->fields.__2__current = (struct BattleBuffData_BuffData_o *)current;
      sub_B0D840((BattleServantConfConponent_o *)&v2->fields.__2__current, current, v17, v18, v19, v20, v21, v22);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    }
    BattleBuffData__AllBuffEnumerable_d__238____m__Finally1(v2, v16);
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
    if ( !_4__this )
      sub_B0D97C(v25);
    passiveList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.passiveList;
    if ( !passiveList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v42,
      passiveList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v27 = *(_OWORD *)&v42.fields.list;
    p__7__wrap1->fields.current = (struct BattleBuffData_BuffData_o *)v42.fields.current;
    *(_OWORD *)&p__7__wrap1->fields.list = v27;
    sub_B0D840((BattleServantConfConponent_o *)p__7__wrap1, 0LL, v28, v29, v30, v31, v32, v33);
  }
  v2->fields.__1__state = -4;
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    v41 = (System_Int32_array **)v2->fields.__7__wrap1.fields.current;
    v2->fields.__2__current = (struct BattleBuffData_BuffData_o *)v41;
    sub_B0D840((BattleServantConfConponent_o *)&v2->fields.__2__current, v41, v35, v36, v37, v38, v39, v40);
    v2->fields.__1__state = 2;
    return 1;
  }
  else
  {
    BattleBuffData__AllBuffEnumerable_d__238____m__Finally2(v2, v34);
    result = 0;
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffEnumerable_d__238__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  __int64 v5; // x20
  __int64 CurrentManagedThreadId; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_42138BF & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData__AllBuffEnumerable_d__238_TypeInfo, method);
    byte_42138BF = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v5 = sub_B0D974(BattleBuffData__AllBuffEnumerable_d__238_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    *(_DWORD *)(v5 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v5 + 32) = CurrentManagedThreadId;
    if ( !v5 )
      sub_B0D97C(CurrentManagedThreadId);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v5 + 40) = _4__this;
    sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), _4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v5;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffEnumerable_d__238__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffEnumerable_d__238__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleBuffData__AllBuffEnumerable_d__238_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffEnumerable_d__238__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__238__System_IDisposable_Dispose(
        BattleBuffData__AllBuffEnumerable_d__238_o *this,
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
      BattleBuffData__AllBuffEnumerable_d__238____m__Finally2(this, method);
      if ( v4 )
      {
        if ( v3[v2] == 65 )
          v4 = v2;
      }
      break;
    case 0xFFFFFFFD:
    case 1:
      BattleBuffData__AllBuffEnumerable_d__238____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__238____m__Finally1(
        BattleBuffData__AllBuffEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  if ( (byte_42138BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    byte_42138BD = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__238____m__Finally2(
        BattleBuffData__AllBuffEnumerable_d__238_o *this,
        const MethodInfo *method)
{
  if ( (byte_42138BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    byte_42138BE = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__239___ctor(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__239__MoveNext(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_o *this,
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
      sub_B0D97C(this);
    ActiveList = BattleBuffData__getActiveList(_4__this, this->fields.isCheckInterval, 0LL);
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    this->fields.__7__wrap1 = ActiveList;
    sub_B0D840(
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
      sub_B0D840((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v23, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_21:
    v39 = sub_B0D9A8(this);
    sub_B0D948(v39, 0LL);
  }
  p__7__wrap1->klass = 0LL;
  sub_B0D840(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_20;
  PassiveList = BattleBuffData__getPassiveList(_4__this, this->fields.isCheckInterval, 0LL);
  this->fields.__7__wrap1 = PassiveList;
  sub_B0D840(p__7__wrap1, (System_Int32_array **)PassiveList, v29, v30, v31, v32, v33, v34);
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
    sub_B0D840(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
    return 0;
  }
  if ( v27 >= (unsigned int)v36 )
    goto LABEL_21;
  v37 = (struct BattleBuffData_BuffData_o *)*((_QWORD *)&v35->_1.byval_arg.data + v27);
  this->fields.__2__current = v37;
  v38 = &this->fields.__2__current;
  sub_B0D840((BattleServantConfConponent_o *)v38, (System_Int32_array **)v37, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)v38 - 2) = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__239__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_o *v5; // x20
  __int64 CurrentManagedThreadId; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **_4__this; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_42138C1 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_TypeInfo, method);
    byte_42138C1 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v5 = this;
  }
  else
  {
    v5 = (BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_o *)sub_B0D974(
                                                                         BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_TypeInfo,
                                                                         method,
                                                                         v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    v5->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v5->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v5 )
      sub_B0D97C(CurrentManagedThreadId);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v5->fields.__4__this = (struct BattleBuffData_o *)_4__this;
    sub_B0D840((BattleServantConfConponent_o *)&v5->fields.__4__this, _4__this, v7, v8, v9, v10, v11, v12);
  }
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v5;
  v5->fields.isCheckInterval = this->fields.__3__isCheckInterval;
  return result;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__239__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffValidEnumerablePriorActive_d__239__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__239__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__239__System_IDisposable_Dispose(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__239_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBuffData__AllBuffValidEnumerable_d__240___ctor(
        BattleBuffData__AllBuffValidEnumerable_d__240_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffValidEnumerable_d__240__MoveNext(
        BattleBuffData__AllBuffValidEnumerable_d__240_o *this,
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
      sub_B0D97C(this);
    PassiveList = BattleBuffData__getPassiveList(_4__this, this->fields.isCheckInterval, 0LL);
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    this->fields.__7__wrap1 = PassiveList;
    sub_B0D840(
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
      sub_B0D840((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v23, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_21:
    v39 = sub_B0D9A8(this);
    sub_B0D948(v39, 0LL);
  }
  p__7__wrap1->klass = 0LL;
  sub_B0D840(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_20;
  ActiveList = BattleBuffData__getActiveList(_4__this, this->fields.isCheckInterval, 0LL);
  this->fields.__7__wrap1 = ActiveList;
  sub_B0D840(p__7__wrap1, (System_Int32_array **)ActiveList, v29, v30, v31, v32, v33, v34);
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
    sub_B0D840(p__7__wrap1, 0LL, v2, v3, v4, v5, v6, v7);
    return 0;
  }
  if ( v27 >= (unsigned int)v36 )
    goto LABEL_21;
  v37 = (struct BattleBuffData_BuffData_o *)*((_QWORD *)&v35->_1.byval_arg.data + v27);
  this->fields.__2__current = v37;
  v38 = &this->fields.__2__current;
  sub_B0D840((BattleServantConfConponent_o *)v38, (System_Int32_array **)v37, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)v38 - 2) = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerable_d__240__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffValidEnumerable_d__240_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  BattleBuffData__AllBuffValidEnumerable_d__240_o *v5; // x20
  __int64 CurrentManagedThreadId; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **_4__this; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_42138C0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData__AllBuffValidEnumerable_d__240_TypeInfo, method);
    byte_42138C0 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v5 = this;
  }
  else
  {
    v5 = (BattleBuffData__AllBuffValidEnumerable_d__240_o *)sub_B0D974(
                                                              BattleBuffData__AllBuffValidEnumerable_d__240_TypeInfo,
                                                              method,
                                                              v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    v5->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v5->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v5 )
      sub_B0D97C(CurrentManagedThreadId);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v5->fields.__4__this = (struct BattleBuffData_o *)_4__this;
    sub_B0D840((BattleServantConfConponent_o *)&v5->fields.__4__this, _4__this, v7, v8, v9, v10, v11, v12);
  }
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v5;
  v5->fields.isCheckInterval = this->fields.__3__isCheckInterval;
  return result;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffValidEnumerable_d__240__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffValidEnumerable_d__240_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffValidEnumerable_d__240__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffValidEnumerable_d__240_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleBuffData__AllBuffValidEnumerable_d__240_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffValidEnumerable_d__240__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffValidEnumerable_d__240_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffValidEnumerable_d__240__System_IDisposable_Dispose(
        BattleBuffData__AllBuffValidEnumerable_d__240_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBuffData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42138B4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData___c_TypeInfo, v1);
    byte_42138B4 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleBuffData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleBuffData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleBuffData___c___ctor(BattleBuffData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__211_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__211_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.addOrder - b->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__211_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.addOrder - b->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__211_3(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleBuffData___c___BoardTurnProgressing_b__68_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.turn == 0;
}


bool __fastcall BattleBuffData___c___BoardTurnProgressing_b__68_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.turn == 0;
}


bool __fastcall BattleBuffData___c___CommonTurnProgressing_b__67_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.turn == 0;
}


bool __fastcall BattleBuffData___c___CommonTurnProgressing_b__67_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.turn == 0;
}


void __fastcall BattleBuffData___c___DirectUpdateWaitIntervalBuff_b__27_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_B0D97C(this);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__Update(intervalData, buff, method);
}


bool __fastcall BattleBuffData___c___GetAllCommandAssistBuff_b__201_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return buff->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData___c___GetAllCommandCodeBuff_b__200_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return buff->fields.userCommandCodeId > 0;
}


bool __fastcall BattleBuffData___c___GetAllConnectedCommandCardBuff_b__228_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetAllConnectedCommandCardBuff_b__228_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, (const MethodInfo *)buff)
      || buff->fields.userCommandCodeId > 0
      || buff->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData___c___GetAllIntervalBuffArray_b__242_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.intervalData != 0LL;
}


bool __fastcall BattleBuffData___c___GetAvaliableActiveBuffArray_b__102_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  bool result; // w0
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8

  if ( !s )
    sub_B0D97C(this);
  result = !s->fields._isRemove
        && ((intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___GetClassIconEffectBuffList_b__252_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !b )
    sub_B0D97C(this);
  intervalData = b->fields.intervalData;
  result = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = b->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___GetCurrentWarBoardNotAttackedBuff_b__233_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return !buff->fields._isRemove && BattleBuffData_BuffData__IsWarBoardNotAttacked(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__218_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__isEffectBuff(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__218_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__isEffectBuff(buff, (const MethodInfo *)buff);
}


int32_t __fastcall BattleBuffData___c___GetEffectBuffList_b__218_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__218_3(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  if ( !buff )
    sub_B0D97C(this);
  intervalData = buff->fields.intervalData;
  if ( !intervalData )
    return 0;
  if ( intervalData->fields.intervalTurn <= 0 )
    return intervalData->fields.intervalCount > 0;
  return 1;
}


bool __fastcall BattleBuffData___c___GetGrantBuffTypeArray_b__115_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return !buff->fields._isRemove;
}


bool __fastcall BattleBuffData___c___GetGrantBuffTypeArray_b__115_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return !buff->fields._isRemove;
}


bool __fastcall BattleBuffData___c___RemoveNoTurnBuff_b__69_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.turn == 0;
}


bool __fastcall BattleBuffData___c___RemoveNoTurnBuff_b__69_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.turn == 0;
}


bool __fastcall BattleBuffData___c___RemoveProgressingBuffList_b__86_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *_,
        const MethodInfo *method)
{
  if ( !_ )
    sub_B0D97C(this);
  return _->fields.count == 0;
}


bool __fastcall BattleBuffData___c___RemoveProgressingBuffList_b__86_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *_,
        const MethodInfo *method)
{
  if ( !_ )
    sub_B0D97C(this);
  return _->fields.count == 0;
}


void __fastcall BattleBuffData___c___ResetNotTakeOverBuff_b__70_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  if ( !buff->fields.isTakeOverNextBattle )
    buff->fields.turn = 0;
}


int32_t __fastcall BattleBuffData___c___UpdateBaseAddOrder_b__213_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBaseAddOrder_b__213_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__212_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__212_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__212_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateForceBuff_b__90_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleBuffData___c___UpdateForceNoField_b__224_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  if ( buff->fields.onfiledUniqueId >= 1 )
    buff->fields.state |= 1u;
  if ( buff->fields.onFieldAliveCond )
    buff->fields.state |= 0x4000u;
}


int32_t __fastcall BattleBuffData___c___checkBuffSuccessful_b__118_0(
        BattleBuffData___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


bool __fastcall BattleBuffData___c___checkFieldAlive_b__94_0(
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
    sub_B0D97C(this);
  intervalData = s->fields.intervalData;
  result = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___getBuffActiveIDList_b__104_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return (s->fields.state & 0x80000) == 0;
}


bool __fastcall BattleBuffData___c___getBuffIDList_b__103_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return (s->fields.state & 0x80000) == 0;
}


bool __fastcall BattleBuffData___c___syncLinkageBuffChangeParam_b__73_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x8

  if ( !x )
    sub_B0D97C(this);
  v3 = 120LL;
  if ( (x->fields.state & 0x400000) != 0 )
    v3 = 296LL;
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)((char *)&x->klass + v3), 0LL);
}


bool __fastcall BattleBuffData___c___syncLinkageBuffChangeParam_b__73_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x8

  if ( !x )
    sub_B0D97C(this);
  v3 = 120LL;
  if ( (x->fields.state & 0x400000) != 0 )
    v3 = 296LL;
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)((char *)&x->klass + v3), 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass102_0___ctor(
        BattleBuffData___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass102_0___GetAvaliableActiveBuffArray_b__1(
        BattleBuffData___c__DisplayClass102_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass102_0_o *v4; // x20
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  v4 = this;
  if ( (byte_42138B5 & 1) == 0 )
  {
    this = (BattleBuffData___c__DisplayClass102_0_o *)sub_B0D8A4(
                                                        &Method_System_Predicate_BattleBuffData_BuffData__Invoke__,
                                                        s);
    byte_42138B5 = 1;
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
  this = (BattleBuffData___c__DisplayClass102_0_o *)v4->fields.conditionsToAdd;
  if ( !this )
LABEL_12:
    sub_B0D97C(this);
  return System_Predicate_BattleBuffData_BuffData___Invoke(
           (System_Predicate_BattleBuffData_BuffData__o *)this,
           s,
           (const MethodInfo_2AF7E44 *)Method_System_Predicate_BattleBuffData_BuffData__Invoke__);
}


void __fastcall BattleBuffData___c__DisplayClass107_0___ctor(
        BattleBuffData___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass107_0___SubBuffFromType_b__0(
        BattleBuffData___c__DisplayClass107_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !buff) || !_4__this )
    sub_B0D97C(_4__this);
  return BuffMaster__GetBuffType((BuffMaster_o *)_4__this, buff->fields.buffId, -1, 0LL) == this->fields.checkBuffType;
}


void __fastcall BattleBuffData___c__DisplayClass108_0___ctor(
        BattleBuffData___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass108_0___SubBuffFromDeadActorId_b__0(
        BattleBuffData___c__DisplayClass108_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t actorId; // w8
  int32_t v4; // w9

  actorId = this->fields.actorId;
  if ( actorId < 1 )
    return 0;
  if ( !buff )
    sub_B0D97C(this);
  if ( buff->fields.isRemoveFieldBuffActorDeath )
    v4 = buff->fields.actorId;
  else
    v4 = -1;
  return v4 == actorId;
}


void __fastcall BattleBuffData___c__DisplayClass115_0___ctor(
        BattleBuffData___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass115_0___GetGrantBuffTypeArray_b__0(
        BattleBuffData___c__DisplayClass115_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  System_Collections_Generic_List_int__o *buffTypeList; // x20

  if ( (byte_42138B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, buff);
    byte_42138B6 = 1;
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
    sub_B0D97C(_4__this);
  }
  System_Collections_Generic_List_int___Add(
    buffTypeList,
    (int32_t)_4__this,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass137_0___ctor(
        BattleBuffData___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass137_0___getRectBuffList_b__0(
        BattleBuffData___c__DisplayClass137_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *ent; // x8

  ent = this->fields.ent;
  if ( !ent )
    sub_B0D97C(this);
  return ent->fields.type == type;
}


void __fastcall BattleBuffData___c__DisplayClass145_0___ctor(
        BattleBuffData___c__DisplayClass145_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass145_0___ChangeBuffState_b__0(
        BattleBuffData___c__DisplayClass145_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass145_0_o *v4; // x19
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
  this = (BattleBuffData___c__DisplayClass145_0_o *)this->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  if ( BattleBuffData__isContainConditionsHp((BattleBuffData_o *)this, buff, 0LL) )
  {
    this = (BattleBuffData___c__DisplayClass145_0_o *)v4->fields.__4__this;
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
  this = (BattleBuffData___c__DisplayClass145_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  isConditionHp = BattleBuffData__isConditionHp((BattleBuffData_o *)this, buff, v4->fields.now, v4->fields.max, 0LL);
  if ( isContainConditionIndividuality )
  {
    if ( isConditionHp )
    {
      this = (BattleBuffData___c__DisplayClass145_0_o *)v4->fields.__4__this;
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
    this = (BattleBuffData___c__DisplayClass145_0_o *)v4->fields.__4__this;
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
  this = (BattleBuffData___c__DisplayClass145_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_22:
    sub_B0D97C(this);
  isValueChanged = v4->fields.isValueChanged;
  if ( (isConditionIndividuality & 1) != 0 )
    v9 = BattleBuffData__OffStateWithAuraConditionCheck((BattleBuffData_o *)this, buff, 16, 0LL);
  else
    v9 = BattleBuffData__OnStateWithAuraConditionCheck((BattleBuffData_o *)this, buff, 16, 0LL);
  v4->fields.isValueChanged = isValueChanged || v9;
}


void __fastcall BattleBuffData___c__DisplayClass146_0___ctor(
        BattleBuffData___c__DisplayClass146_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass146_0___UpdateForceAllBuffNoAct_b__0(
        BattleBuffData___c__DisplayClass146_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  BattleBuffData_BuffData__setShowState(buff, this->fields.showState, method);
  buff->fields.state |= 0x20000u;
}


void __fastcall BattleBuffData___c__DisplayClass187_0___ctor(
        BattleBuffData___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass187_0___CheckBuffType_b__0(
        BattleBuffData___c__DisplayClass187_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_B0D97C(this);
  return buffEnt->fields.type == type;
}


void __fastcall BattleBuffData___c__DisplayClass192_0___ctor(
        BattleBuffData___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass192_0___InitializeShift_b__0(
        BattleBuffData___c__DisplayClass192_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.actorId == this->fields.actorId;
}


bool __fastcall BattleBuffData___c__DisplayClass192_0___InitializeShift_b__1(
        BattleBuffData___c__DisplayClass192_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  return BattleBuffData__checkShiftClear(_4__this, s, this->fields.buffindivs, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass210_0___ctor(
        BattleBuffData___c__DisplayClass210_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass210_0___GetSkillTypeBuff_b__0(
        BattleBuffData___c__DisplayClass210_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass210_0_o *v4; // x20

  v4 = this;
  if ( (byte_42138B7 & 1) == 0 )
  {
    this = (BattleBuffData___c__DisplayClass210_0_o *)sub_B0D8A4(
                                                        &Method_System_Collections_Generic_List_int__Contains__,
                                                        buff);
    byte_42138B7 = 1;
  }
  if ( !buff || (this = (BattleBuffData___c__DisplayClass210_0_o *)v4->fields.targetSkillList) == 0LL )
    sub_B0D97C(this);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           buff->fields.grantSkillType,
           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall BattleBuffData___c__DisplayClass212_0___ctor(
        BattleBuffData___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass212_0___UpdateBuffAddOrder_b__3(
        BattleBuffData___c__DisplayClass212_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  x->fields.addOrder += this->fields.addPassiveMaxOrder;
}


void __fastcall BattleBuffData___c__DisplayClass212_0___UpdateBuffAddOrder_b__4(
        BattleBuffData___c__DisplayClass212_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  x->fields.addOrder += this->fields.addPassiveMaxOrder;
}


void __fastcall BattleBuffData___c__DisplayClass237_0___ctor(
        BattleBuffData___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData___c__DisplayClass237_0___GetFamilyLinkageIdMax_b__0(
        BattleBuffData___c__DisplayClass237_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hash; // x0

  if ( (byte_42138B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&x);
    byte_42138B8 = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_int___Add(
    hash,
    x,
    (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData___c__DisplayClass237_0___GetFamilyLinkageIdMax_b__1(
        BattleBuffData___c__DisplayClass237_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hash; // x0

  if ( (byte_42138B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&x);
    byte_42138B9 = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_int___Add(
    hash,
    x,
    (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass243_0___ctor(
        BattleBuffData___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass243_0___ExistsTargetIntervalBuff_b__0(
        BattleBuffData___c__DisplayClass243_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !buff) )
    sub_B0D97C(_4__this);
  return BattleBuffData_BuffData__EqualBuffType(buff, (BuffMaster_o *)_4__this, this->fields.targetType, v6);
}


void __fastcall BattleBuffData___c__DisplayClass244_0___ctor(
        BattleBuffData___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass244_0___ResetTargetUseBuff_b__0(
        BattleBuffData___c__DisplayClass244_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !x) )
    sub_B0D97C(_4__this);
  return BattleBuffData_BuffData__EqualBuffType(x, (BuffMaster_o *)_4__this, this->fields.targetType, v6);
}


void __fastcall BattleBuffData___c__DisplayClass253_0___ctor(
        BattleBuffData___c__DisplayClass253_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass253_0___RemoveClassBoardSkillBuff_b__0(
        BattleBuffData___c__DisplayClass253_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !p || (skillData = this->fields.skillData) == 0LL )
    sub_B0D97C(this);
  return p->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass253_0___RemoveClassBoardSkillBuff_b__1(
        BattleBuffData___c__DisplayClass253_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !p || (skillData = this->fields.skillData) == 0LL )
    sub_B0D97C(this);
  return p->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass253_0___RemoveClassBoardSkillBuff_b__2(
        BattleBuffData___c__DisplayClass253_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !a || (skillData = this->fields.skillData) == 0LL )
    sub_B0D97C(this);
  return a->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass253_0___RemoveClassBoardSkillBuff_b__3(
        BattleBuffData___c__DisplayClass253_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !a || (skillData = this->fields.skillData) == 0LL )
    sub_B0D97C(this);
  return a->fields.skillId == skillData->fields.id;
}


void __fastcall BattleBuffData___c__DisplayClass253_1___ctor(
        BattleBuffData___c__DisplayClass253_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass253_1___RemoveClassBoardSkillBuff_b__4(
        BattleBuffData___c__DisplayClass253_1_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_B0D97C(this);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass253_1___RemoveClassBoardSkillBuff_b__5(
        BattleBuffData___c__DisplayClass253_1_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_B0D97C(this);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass253_1___RemoveClassBoardSkillBuff_b__6(
        BattleBuffData___c__DisplayClass253_1_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_B0D97C(this);
  return a->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass253_1___RemoveClassBoardSkillBuff_b__7(
        BattleBuffData___c__DisplayClass253_1_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v5; // x1
  BattleBuffData_ShowBuffData_o *v6; // x21
  const MethodInfo *v7; // x2
  BattleBuffData_o *_4__this; // x0

  if ( (byte_42138BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__, buff);
    sub_B0D8A4(&BattleBuffData_ShowBuffData_TypeInfo, v5);
    byte_42138BA = 1;
  }
  v6 = (BattleBuffData_ShowBuffData_o *)sub_B0D974(BattleBuffData_ShowBuffData_TypeInfo, buff, method);
  BattleBuffData_ShowBuffData___ctor_22763556(v6, buff, v7);
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
    sub_B0D97C(_4__this);
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
          (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
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
  __int64 v5; // x1
  BattleBuffData_ShowBuffData_o *v6; // x21
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *reList; // x0

  if ( (byte_42138BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__, buff);
    sub_B0D8A4(&BattleBuffData_ShowBuffData_TypeInfo, v5);
    byte_42138BB = 1;
  }
  v6 = (BattleBuffData_ShowBuffData_o *)sub_B0D974(BattleBuffData_ShowBuffData_TypeInfo, buff, method);
  BattleBuffData_ShowBuffData___ctor_22763556(v6, buff, v7);
  reList = this->fields.reList;
  if ( !reList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)reList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass72_0___ctor(
        BattleBuffData___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass72_0___RemoveLinkageBuff_b__0(
        BattleBuffData___c__DisplayClass72_0_o *this,
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
  this = (BattleBuffData___c__DisplayClass72_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_8:
    sub_B0D97C(this);
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


bool __fastcall BattleBuffData___c__DisplayClass72_0___RemoveLinkageBuff_b__1(
        BattleBuffData___c__DisplayClass72_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return this->fields.isFamily ^ ((x->fields.state & 0x400000) == 0);
}


void __fastcall BattleBuffData___c__DisplayClass92_0___ctor(
        BattleBuffData___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass92_0___CheckBuffGroup_b__0(
        BattleBuffData___c__DisplayClass92_0_o *this,
        int32_t target,
        const MethodInfo *method)
{
  return this->fields.attachTarget == target;
}